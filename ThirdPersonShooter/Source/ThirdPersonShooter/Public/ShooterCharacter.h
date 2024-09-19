// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Ammo.h"
#include "GameFramework/Character.h"
#include "Particles/ParticleSystem.h"
#include "AmmoType.h"

#include "ShooterCharacter.generated.h"

class AWeapon;
class AItem;
class UCameraComponent;
class USpringArmComponent;
class USoundCue;
class UFireMontage;



UENUM(BlueprintType)
enum class ECombatState : uint8
{
	ECS_Unoccupied UMETA(DisplayName = "Unoccupied"),
	ECS_FireTimerInProgress UMETA(DisplayName = "FireTimerInProgress"),
	ECS_Reloading UMETA(DisplayName = "Reloadings"),
	
	ECS_MAX  UMETA(DisplayName = "DefaultMAX")
};

USTRUCT(BlueprintType)
struct FInterpLocation
{
	GENERATED_BODY()

	//SceneComponent to use for it's location for  interping
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	USceneComponent* SceneComponent;

	//Number of  item interping to/at this sceneComp Location
	UPROPERTY(VisibleAnywhere,  BlueprintReadOnly)
	int32 ItemCount;
};


UCLASS()
class THIRDPERSONSHOOTER_API AShooterCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AShooterCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Called for forward/Backwards input
	void MoveForward(float Value);

	//Called for Side to Side input
	void MoveRight(float Value);

	/*
	 Called Via input to turn at a given rate
	 @param Rate this is a normalized rate, i.e. 1.0 means 100% desired turn rate
	 */
	void TurnAtRate(float Rate);

	/*
	 *Called via input to look up/down at a given rate
	 *@param this is a normalized rate, i.e. 1.0 means 100% of desired rate
	 */
	void LookUpAtRate(float Rate);

	/*ROtate controller based on Mouse X Movement
	 *@Param Value The Input from Mouse movement.
	 */
	void Turn(float Value);
	
	/*ROtate controller based on Mouse X Movement
	 *@Param Value The Input from Mouse movement.
	 */
	void LoopUp(float Value);



	//Called When The fire button is pressed.
	void FireWeapon();

	bool GetBeamEndLocation(const FVector& MuzzleSocketLocation, FVector& OutBeamLocation);


	//Set BAiming true or false  with a button pressed
	void AimingButtonPressed();
	void AimingButtonReleased();
	
	void CameraInterpZoom(float DeltaTime);
	
	//Set LookRate for TurnRate and LookUpRate for it's Base
	void SetLookRates();

	void CalculateCrosshairSpread(float Deltatime);

	void StartCrosshairBulletFire();
	
	UFUNCTION()
	void FinishCrosshairBulletFire();

	void FireButtonPressed();
	void  FireButtonReleased();
	void StartFireTimer();

	UFUNCTION()
	void AutoFireReset();

	//Line Trace the  item  under  the crosshair
	bool TraceUnderCrosshair(FHitResult& OutHitResult, FVector& OutHitLocation);

	//Trace For Items if OverllapedItemCOunt > 0
	void  TraceForItems();

	//Spawns a DefaultWeapon and Equips it
	AWeapon* SpawnDefaultWeapon();

	//Takes a weapon and attaches it to the mesh
	void EquipWeapon(AWeapon* WeaponToEquip);

	//Detach Weapon from socket, let it fall to the ground
	void DropWeapon();

	void SelectButtonPressed();
	void SelectButtonReleased();

	//Drops Currentlyy EquippedWeapon ->  Equips TraceHitWeapon
	void SwapWeapon(AWeapon* WeaponToSwap);

	//Initialize the Ammo map with Ammo values
	void  InitializeAmmoMap();

	//Check to make sure the weapon has Ammo
	bool WeaponHasAmmo();

	//PlayFireSound
	//Try's to send  bullet
	void PlayFireSound();
	void SendBullets();
	void PlayGunFireMontage();

	//Bound to R Key!
	void ReloadButtonPressed();
	//Handle Reloading  of the Weapon
	void ReloadWeapon();

	UFUNCTION(BlueprintCallable)
	void FinishReloading();

	//Checks to see if the gun has the same ammoType that is carried by the player
	bool CarryingAmmo();

	//Called  From AnimatioBlueprint  with GrabClip Notifier
	UFUNCTION(BlueprintCallable)
	void GrabClip();

	//Called from AnimationBlueprint with releaseClip Notifier
	UFUNCTION(BlueprintCallable)
	void ReleaseClip();

	void CrouchButtonPressed();

	virtual  void Jump() override;

	//Interps capsule halfheight when crouching/Standing
	void InterpCapsuleHalfHeight(float DeltaTime);

	void Aim();
	void StopAiming();

	void PickUpAmmo(AAmmo* Ammo);

	void InitializeInterpLocation();

	void ResetPickUpSoundTimer();
	void ResetEquipSoundTimer();
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	FVector GetCameraInterpLocation();

private:
	//Camera Boom Positioning Camera Behind the character
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	USpringArmComponent* CameraBoom;

	//Camera that follows the character
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	UCameraComponent* FollowCamera;

	//Base turn rate,  in deg/.sec, other scaling may affect final turn rate
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	float BaseTurnRate;

	//Base LookUp/Down rate, in deg/sec, other scaling may affect final turn rate
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	float BaseLookUpRate;

	//Turn Rate while not aiming
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	float HipTurnRate;

	//LookUp Rate While not Aiming 
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	float HipLookUpRate;

	//Turn Rate When Aiming
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	float AimingTurnRate;

	//LookUp Rate when Aiming 
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	float AimingLookUpRate;

	//Scale Factor for mouse look sensitivity, Turn Rate when not aiming
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"), meta = (ClampMin = "0.0", ClampMax = "1.0", UIMin = "0.0", UIMax = "1.0"))
	float MouseHipTurnRate;
	
	//Scale Factor for mouse look sensitivity, Look up when not aiming
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"), meta = (ClampMin = "0.0", ClampMax = "1.0", UIMin = "0.0", UIMax = "1.0"))
	float MouseHipLookUpRate;
	
	//Scale Factor for mouse look sensitivity, Turn Rate when aiming
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"), meta = (ClampMin = "0.0", ClampMax = "1.0", UIMin = "0.0", UIMax = "1.0"))
	float MouseAimingTurnRate;
	
	//Scale Factor for mouse look sensitivity, LookUp when aiming
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"), meta = (ClampMin = "0.0", ClampMax = "1.0", UIMin = "0.0", UIMax = "1.0"))
	float MouseAimingLookUpRate;

	
	//Randomize gunshot sound cue
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Combat, meta = (AllowPrivateAccess = "true"))
	USoundCue* FireSound;

	//Flash spawned at BarrelSocket
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Combat, meta = (AllowPrivateAccess = "true"))
	UParticleSystem* MuzzleFlash;

	//Montage For Firing Wep
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Combat, meta = (AllowPrivateAccess = "true"))
	UAnimMontage* HipFireMontage;
	
	//Particles Spawn Upon Bullet Impact
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Combat, meta = (AllowPrivateAccess = "true"))
	UParticleSystem* ImpactParticle;

	//Particle SmokeTrail for the bullets
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Combat, meta = (AllowPrivateAccess = "true"))
	UParticleSystem* BeamParticle;

	//True when aiming, False when not
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Combat, meta = (AllowPrivateAccess = "true"))
	bool bAiming;

	//Default Camera FOV value
	float CameraDefaultFOV;

	//FOV value when zoomed in
	float CameraZoomedFOV;

	//Current FOV this frame
	float CameraCurrentFOV;

	//Interp Speed for zooming when  aiming
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Combat, meta = (AllowPrivateAccess = "true"))
	float  ZoomInterpSpeed;


	//Determines the spread of the crosshair
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Crosshairs, meta = (AllowPrivateAccess = "true"))
	float CrosshairSpreadMultiplier;

	//Velocity Component for the crosshairSpread
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Crosshairs, meta = (AllowPrivateAccess = "true"))
	float CrosshairVelocityFactor;

	//inAir Component  for the CrosshairSpread
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Crosshairs, meta = (AllowPrivateAccess = "true"))
	float CrosshairInAirFactor;

	//AimFactor Component for the CrosshairSpread
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Crosshairs, meta = (AllowPrivateAccess = "true"))
	float CrosshairAimFactor;

	//ShootingFactor Component for the crosshairspread
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Crosshairs, meta = (AllowPrivateAccess = "true"))
	float CrosshairShootingFactor;


	float ShootTimeDuration;
	bool bFiringBullet;
	FTimerHandle CrosshairShootTimer;

	//Left mousebutton/RightConsoleTrigger Pressed
	bool bFireButtonPressed;

	//True when we can fire. False when waiting for the timer
	bool bShouldFire;

	//Rate of Automatic gun fire
	float AutomaticFireRate;

	//Sets a Timer between gunshot
	FTimerHandle AutoFireHandle;

	//True, If we should trace every frame for item
	bool bShouldTraceForItems;

	//Number Of Overlapped AItems;
	int8 OverllapedItemCount;

	//The  AItem that was hit last frame
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Items, meta = (AllowPrivateAccess = "true"))
	AItem* PreviousTraceHitItem;

	//Currently Equipped Weapon
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Combat, meta = (AllowPrivateAccess = "true") )
	AWeapon* EquippedWeapon;

	//Set This in Blueprint for the default weapon class
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = Combat, meta = (AllowPrivateAccess = "true"))
	TSubclassOf<AWeapon> DefaultWeaponClass;

	//The Item Currently Hit by our Trace in TraceForItem("COULD BE NULL!")
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Combat, meta = (AllowPrivateAccess = "true"))
	AItem* TraceHitItem;

	//Distance Outward From the Camera for the Interp Destination
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Items, meta = (AllowPrivateAccess = "true"))
	float CameraInterpDistance;

	//Distance Upward from the camera for the interpDestination
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Items, meta = (AllowPrivateAccess = "true"))
	float CameraInterpElevation;

	//Map to keep track of ammo of  the different ammo types
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Items, meta = (AllowPrivateAccess = "true"))
	TMap<EAmmoType, int32> AmmoMap;
	
	//Starting amount of 9mm Ammo
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Items, meta = (AllowPrivateAccess = "true"))
	int32 Starting9mmAmmo;

	//Starting amount of AR Ammo
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Items, meta = (AllowPrivateAccess = "true"))
	int32 StartingARAmmo;

	//Combat State, can only Fire/Reload when Un-Occupied state
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Combat, meta = (AllowPrivateAccess = "true"))
	ECombatState CombatState;

	//Reload Montage for ReloadingAnimation
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Combat, meta = (AllowPrivateAccess = "true"))
	UAnimMontage* ReloadMontage;

	//The Transform of the clip when the  character grab the clip during reloading
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Combat, meta = (AllowPrivateAccess = "true"))
	FTransform ClipTransform;

	//Scene Component to attach to the character  name during reloading
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Combat, meta = (AllowPrivateAccess = "true"))
	USceneComponent* HandSceneComponent;

	//True when Crouching
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Movement, meta = (AllowPrivateAccess = "true"))
	bool bIsCrouching;

	//Regular Movement Speed
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Movement, meta = (AllowPrivateAccess = "true"))
	float BaseMovementSpeed;

	//Crouch Movement Speed 
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Movement, meta = (AllowPrivateAccess = "true"))
	float CrouchMovementSpeed;

	//Current Half height of the capsule
	float CurrentCapsuleHalfHeight;

	//Half height of the capsule when standing
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Movement, meta = (AllowPrivateAccess = "true"))
	float StandingCapsuleHalfHeight;

	//Halg height og the capsule when crouching
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Movement, meta = (AllowPrivateAccess = "true"))
	float CrouchingCapsuleHalfHeight;

	//Ground friction when While Standing
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Movement, meta = (AllowPrivateAccess = "true"))
	float  BaseGroundFriction;

	//Ground Friction  when Crouching
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Movement, meta = (AllowPrivateAccess = "true"))
	float CrouchingGroundFriction;

	//Used For when Aiming Button IsPressed
	bool bIsAimingButtonPressed;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	USceneComponent* WeaponInterpComp;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	USceneComponent* InterpComp1;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	USceneComponent* InterpComp2;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	USceneComponent* InterpComp3;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	USceneComponent* InterpComp4;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	USceneComponent* InterpComp5;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	USceneComponent* InterpComp6;

	//Array of  interpLocation Structs
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	TArray<FInterpLocation> InterpLocations;


	FTimerHandle PickUpSoundTimerHandle;
	FTimerHandle EquipSoundTimerHandle;

	bool bShouldPlayPickUpSound;
	bool bShouldPlayEquipSound;

	//Time to wait  before can play another pickUp Sound
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Items, meta = (AllowPrivateAccess = "true"))
	float PickUpSoundResetTime;
	
	//Time to wait  before can play another  EquipSound
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Items, meta = (AllowPrivateAccess = "true"))
	float EquipSoundResetTime;

	//An Array of item for the inventory
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Inventory, meta = (AllowPrivateAccess = "true"))
	TArray<AItem*> Inventory;

	const int32 INVENTORY_CAPACITY{ 6 };
	
	
public:
	//Returns Camera Boom Subobject
	FORCEINLINE USpringArmComponent* GetCameraBoom() const {return CameraBoom;}
	//Returns Follow Camera Subobject
	FORCEINLINE UCameraComponent* GetFollowCamera() const  {return FollowCamera;}
	
	FORCEINLINE bool GetAiming() const {return bAiming;}

	UFUNCTION(BlueprintCallable)
	float GetCrosshairSpreadMulitplier() const {return CrosshairSpreadMultiplier;}

	FORCEINLINE int8 GetOverlappedItemCount()  const {return  OverllapedItemCount;}

	//This Func, will add/subtrac to/from overllapedItemCount and Updates bShouldTraceFromItems
	void IncrementOverlappedItemCount(int8 Amount);
	void GetPickUpItem(AItem* Item);

	FORCEINLINE ECombatState GetCombatState() const {return  CombatState; }
	
	FORCEINLINE bool GetIsCrouching() const {return bIsCrouching;}
	FORCEINLINE FInterpLocation GetInterpLocation(int32 Index);
	int32 GetLowestInterpLocationIndex();
	void IncrementInterpLocItemCount(int32 Index, int32 Amount);

	FORCEINLINE bool ShouldPlayPickUpSound() const {return  bShouldPlayPickUpSound;}
	FORCEINLINE bool ShouldPlayEquipSound() const {return  bShouldPlayEquipSound;}

	void StartPickUpSoundTimer();
	void  StartEquipSoundTimer();
};
