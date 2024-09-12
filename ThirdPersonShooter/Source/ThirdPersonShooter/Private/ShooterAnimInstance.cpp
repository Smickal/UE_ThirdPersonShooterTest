// Fill out your copyright notice in the Description page of Project Settings.


#include "ShooterAnimInstance.h"

#include "ShooterCharacter.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/KismetMathLibrary.h"

UShooterAnimInstance::UShooterAnimInstance() :
	Speed(0),
	bIsinAir(false),
	bIsAccelerating(false),
	
	MovementOffsetYaw(0),
	TIPCharacterYaw(0),
	TIPCharacterYawLastFrame(0),
	bAiming(false),
	RootYawOffset(0),
	Pitch(0),
	bIsReloading(false),
	OffsetState(EOffsetState::EOS_Hip),
	CharacterRotation(FRotator(0.f)),
	CharacterRotationLastFrame(FRotator(0.f)),
	YawDelta(0.f),
	RecoilWeight(1.0f),
	bIsTurningInPlace(false)
{
	
}

void UShooterAnimInstance::UpdateAnimationProperties(float DeltaTime)
{
	if(ShooterCharacter == nullptr)
	{
		ShooterCharacter = Cast<AShooterCharacter>(TryGetPawnOwner());
	}
	if(ShooterCharacter)
	{
		bIsReloading = ShooterCharacter->GetCombatState() == ECombatState::ECS_Reloading;
		bIsCrouching = ShooterCharacter->GetIsCrouching();
		
		//Get The lateral Speed Of the character from the velocity.
		FVector Velocity {ShooterCharacter->GetVelocity()};
		Velocity.Z = 0;
		Speed = Velocity.Size();

		//Is The Character in the air
		bIsinAir = ShooterCharacter->GetCharacterMovement()->IsFalling();

		//Is the character Accelerating
		if(ShooterCharacter->GetCharacterMovement()->GetCurrentAcceleration().Size() > 0)
		{
			bIsAccelerating = true;
		}
		else
		{
			bIsAccelerating = false;
		}

		//Is the Character Aiming
		bAiming = ShooterCharacter->GetAiming();
		
		FRotator AimRotation = ShooterCharacter->GetBaseAimRotation();
		FRotator MovementRotation = UKismetMathLibrary::MakeRotFromX(ShooterCharacter->GetVelocity());
		MovementOffsetYaw = UKismetMathLibrary::NormalizedDeltaRotator(MovementRotation,AimRotation).Yaw;

		if(ShooterCharacter->GetVelocity().Size() > 0.f)
		{
			LastMovementOffsetYaw = MovementOffsetYaw;
		}
		
		/* Offset DrawDebug
		 * 
		//FString RotationMssg = FString::Printf(TEXT("Base Aim Rotation: %f"), AimRotation.Yaw);
		//FString MovementRotationMssg = FString::Printf(TEXT("Movement Rotation: %f"), MovementRotation.Yaw);
		//FString MovementOffsetYawMssg = FString::Printf(TEXT("MovementOffsetYaw: %f"), MovementOffsetYaw); 
		if(GEngine)
		{
			GEngine->AddOnScreenDebugMessage(1,0.f,FColor::White, RotationMssg);
			GEngine->AddOnScreenDebugMessage(2,0.f,FColor::White, MovementRotationMssg);
			GEngine->AddOnScreenDebugMessage(1,0.f,FColor::White, MovementOffsetYawMssg);
		}
		*/

		if(bIsReloading)
		{
			OffsetState = EOffsetState::EOS_Reloading;
		}
		else if(bIsinAir)
		{
			OffsetState = EOffsetState::EOS_InAir;
		}
		else if(ShooterCharacter->GetAiming())
		{
			OffsetState = EOffsetState::EOS_Aiming;
		}
		else
		{
			OffsetState = EOffsetState::EOS_Hip;
		}
	}
	 
	TurnInPlace();
	Lean(DeltaTime);
}

void UShooterAnimInstance::NativeInitializeAnimation()
{
	Super::NativeInitializeAnimation();

	ShooterCharacter = Cast<AShooterCharacter>(TryGetPawnOwner());
}

void UShooterAnimInstance::TurnInPlace()
{
	if(ShooterCharacter == nullptr) return;
	Pitch = ShooterCharacter->GetBaseAimRotation().Pitch;
	
	if(Speed > 0 || bIsinAir)
	{
		//Dont want to turn in place; Because
		//Character is moving

		RootYawOffset = 0.f;
		TIPCharacterYaw = ShooterCharacter->GetActorRotation().Yaw;
		TIPCharacterYawLastFrame = TIPCharacterYaw;

		RotationCurveLastFrame = 0.f;
		RotationCurve = 0.f;
	}
	else
	{
		TIPCharacterYawLastFrame = TIPCharacterYaw;
		TIPCharacterYaw = ShooterCharacter->GetActorRotation().Yaw;

		const auto TIPYawDelta {TIPCharacterYaw - TIPCharacterYawLastFrame};

		//Root YawOffSet, Updated and Clamped [-180,180]
		RootYawOffset = UKismetMathLibrary::NormalizeAxis(RootYawOffset - TIPYawDelta);

		//1.0f if Turning, 0.0f if not
		const float Turning{ GetCurveValue(TEXT("Turning")) };
		if(Turning > 0)
		{
			bIsTurningInPlace  = true;
			RotationCurveLastFrame = RotationCurve;
			RotationCurve = GetCurveValue(TEXT("Rotation"));

			const auto RotationCurveDelta {RotationCurve - RotationCurveLastFrame};

			//If RootYawOffset > 0 -> The Character is turning left;
			//If RootYawOffset < 0 -> The Character is turning right;
			RootYawOffset > 0 ? RootYawOffset -= RotationCurveDelta : RootYawOffset += RotationCurveDelta;
			
			//Tries to compensate the rotation, IF there's an excess amount more than 90 degree
			const float ABSRootYawOffset {FMath::Abs(RootYawOffset)};
			if(ABSRootYawOffset > 90.f)
			{
				const float YawExcess {ABSRootYawOffset - 90.f};
				RootYawOffset > 0 ? RootYawOffset -= YawExcess : RootYawOffset += YawExcess;
			}
			
		}
		else
		{
			bIsTurningInPlace = false;
		}

		if(bIsTurningInPlace)
		{
			if(bIsReloading)
			{
				RecoilWeight = 1.f;
			}
			else
			{
				RecoilWeight = 0.f;
			}
		}
		else //not turning in place
		{
			if(bIsCrouching)
			{
				if(bIsReloading)
				{
					RecoilWeight = 1.f;
				}
				else
				{
					RecoilWeight = 0.1f;
				}
			}
			else
			{
				if(bAiming || bIsReloading)
				{
					RecoilWeight = 1.0;
				}
				else
				{
					RecoilWeight = 0.5f;
				}
			}
		}
		// if(GEngine)
		// {
		// 	GEngine->AddOnScreenDebugMessage(1, -1.f, FColor::Blue, FString::Printf(TEXT("Character Yaw: %f"), CharacterYaw));
		// 	GEngine->AddOnScreenDebugMessage(2, -1.f, FColor::Red, FString::Printf(TEXT("Root Yaw Offset: %f"), RootYawOffset));
		// 	
		// }
	}
}

void UShooterAnimInstance::Lean(float DeltaTime)
{
	if(ShooterCharacter == nullptr) return;

	CharacterRotationLastFrame= CharacterRotation;
	CharacterRotation = ShooterCharacter->GetActorRotation();

	const FRotator Delta {UKismetMathLibrary::NormalizedDeltaRotator(CharacterRotation, CharacterRotationLastFrame)};
	
	const double Target {(Delta.Yaw /DeltaTime) };
	const double Interp{FMath::FInterpTo(YawDelta, Target, DeltaTime, 6.0f)};
	YawDelta = FMath::Clamp(Interp, -90.f, 90.f);

	// if(GEngine)
	// {
	// 	GEngine->AddOnScreenDebugMessage(1, -1, FColor::Red, FString::Printf(TEXT("YawDelta: %f"), YawDelta ));
	// 	GEngine->AddOnScreenDebugMessage(2, -1, FColor::Red, FString::Printf(TEXT("CharacterYaw: %f"), CharacterRotation.Yaw ));
	// }
}
