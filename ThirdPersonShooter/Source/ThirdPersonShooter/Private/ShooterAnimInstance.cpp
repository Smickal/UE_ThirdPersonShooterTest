// Fill out your copyright notice in the Description page of Project Settings.


#include "ShooterAnimInstance.h"

#include "ShooterCharacter.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/KismetMathLibrary.h"

void UShooterAnimInstance::UpdateAnimationProperties(float DeltaTime)
{
	if(ShooterCharacter == nullptr)
	{
		ShooterCharacter = Cast<AShooterCharacter>(TryGetPawnOwner());
	}
	if(ShooterCharacter)
	{
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

		FRotator AimRotation = ShooterCharacter->GetBaseAimRotation();
		FRotator MovementRotation = UKismetMathLibrary::MakeRotFromX(ShooterCharacter->GetVelocity());
		MovementOffsetYaw = UKismetMathLibrary::NormalizedDeltaRotator(MovementRotation,AimRotation).Yaw;
		
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
	}
	 
	
}

void UShooterAnimInstance::NativeInitializeAnimation()
{
	Super::NativeInitializeAnimation();

	ShooterCharacter = Cast<AShooterCharacter>(TryGetPawnOwner());
}
