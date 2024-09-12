// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "ShooterAnimInstance.generated.h"

class AShooterCharacter;

UENUM(BlueprintType)
enum class EOffsetState : uint8
{
	EOS_Aiming UMETA(DisplayName = "Aiming"),
	EOS_Hip UMETA(DisplayName = "HipAiming"),
	EOS_Reloading UMETA(DisplayName = "Reloading"),
	EOS_InAir UMETA(DisplayName = "InAir"),
	
	EOS_Max UMETA(DisplayName = "DefaultMAX")
};

UCLASS()
class THIRDPERSONSHOOTER_API UShooterAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

public:
	UShooterAnimInstance();
		
	UFUNCTION(BlueprintCallable)
	void  UpdateAnimationProperties(float DeltaTime);
	
	virtual void NativeInitializeAnimation() override;
protected:
	//Handle Turning in place variable
	void TurnInPlace();
	
	//Handles Calculation  for leaning while Runing
	void Lean(float DeltaTime);
	
private:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly,Category = Movement, meta = (AllowPrivateAccess = "true"))
	AShooterCharacter* ShooterCharacter;

	//The Speed of the Character
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly,Category = Movement, meta = (AllowPrivateAccess = "true"))
	float Speed;

	//Whether or not the character is in air
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly,Category = Movement, meta = (AllowPrivateAccess = "true"))
	bool bIsinAir;

	//Wheter or not the character is moving
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly,Category = Movement, meta = (AllowPrivateAccess = "true"))
	bool bIsAccelerating;

	//Offset yaw for Strafing
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Movement, meta = (AllowPrivateAccess = "true"))
	float MovementOffsetYaw;

	//Offset Yaw the frame before we stop moving
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Movement, meta = (AllowPrivateAccess = "true"))
	float LastMovementOffsetYaw;

	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Movement, meta = (AllowPrivateAccess = "true"))
	bool  bAiming;

	//Yaw of the Character this frame (Only Updated in StandingStill + NotInAir)
	float TIPCharacterYaw;

	//Yaw of the Character prev Frame (Only Updated in StandingStill + NotInAir)
	float TIPCharacterYawLastFrame;

	//The offset from the controller yaw to the root bone yaw
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Turn In Place", meta = (AllowPrivateAccess = "true"))
	float RootYawOffset;

	//RotationValueThisFrame
	float RotationCurve;

	//RotationValue last frame
	float RotationCurveLastFrame;

	//The Pitch of the aim rotation used for aim offset
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Turn In Place", meta = (AllowPrivateAccess = "true"))
	float Pitch;

	//True when reloading use to prefent aim offset when aiming
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Turn In Place", meta = (AllowPrivateAccess = "true"))
	bool bIsReloading;

	//Offset state, used to determine which aim offset to use
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Turn In Place", meta = (AllowPrivateAccess = "true"))
	EOffsetState OffsetState;

	//Character Yaw This Frame
	FRotator CharacterRotation;

	//CharacterYaw LastFrame
	FRotator CharacterRotationLastFrame;

	//Yaw delta used for leaning in DeltaSpace
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Lean", meta = (AllowPrivateAccess = "true") )
	float YawDelta;

	//True when character is crouchingo
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = Crouching , meta = (AllowPrivateAccess = "true") )
	bool bIsCrouching;

	//Change the recoil weight
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Combat , meta = (AllowPrivateAccess = "true") )
	float RecoilWeight;

	//True when turning in place
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Combat , meta = (AllowPrivateAccess = "true") )
	bool bIsTurningInPlace;
};
