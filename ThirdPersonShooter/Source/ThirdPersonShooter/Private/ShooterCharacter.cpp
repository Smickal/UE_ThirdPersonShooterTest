// Fill out your copyright notice in the Description page of Project Settings.


#include "ShooterCharacter.h"

#include "Item.h"
#include "Weapon.h"
#include "Camera/CameraComponent.h"
#include "Components/BoxComponent.h"
#include "Components/WidgetComponent.h"
#include "Engine/SkeletalMeshSocket.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Particles/ParticleSystemComponent.h"
#include "Sound/SoundCue.h"

// Sets default values
AShooterCharacter::AShooterCharacter() :
	//Base Rates for turning/Looking Up
	BaseTurnRate(45.f),
	BaseLookUpRate(45.f),

	//True When Aiming Wep
	bAiming(false),

	//TurnRates for Aiming/NotAiming
	HipTurnRate(90.f),
	HipLookUpRate(90.f),
	AimingTurnRate(20.f),
	AimingLookUpRate(20.f),

	//Mouse Look Sensitivity scale factors
	MouseHipTurnRate(1.f),
	MouseHipLookUpRate(1.f),
	MouseAimingTurnRate(0.5f),
	MouseAimingLookUpRate(0.5f),

	//CameraZoomProperties
	CameraDefaultFOV(0.f), // Will be set in BeginPlay()
	CameraZoomedFOV(60.f),
	ZoomInterpSpeed(20.f),

	//CrosshairSpreadFactors
	CrosshairSpreadMultiplier(0.f),
	CrosshairVelocityFactor(0.f),
	CrosshairInAirFactor(0.f),
	CrosshairAimFactor(0.f),
	CrosshairShootingFactor(0.f),

	//Bullet Fire Timer Variable
	ShootTimeDuration(0.05f),
	bFiringBullet(false),

	//Automatic GunFireRate
	AutomaticFireRate(0.1f),
	bShouldFire(true),
	bFireButtonPressed(false),


	bShouldTraceForItems(false),

	//Camera Interp Location variable
	CameraInterpDistance(250.f),
	CameraInterpElevation(65.f),

	//Starting Ammo Amounts
	Starting9mmAmmo(120),
	StartingARAmmo(90)
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//Create a camera boom (Pulls in towards the character if there's a collision)
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = 180.f; //Thje camera follows the character at this distance
	CameraBoom->bUsePawnControlRotation = true; //Rotate the arm based on the controller
	CameraBoom->SocketOffset = FVector(0.f, 50.f, 75.f);

	//Create A follow Camera
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName); //Attach camera to end of boom
	FollowCamera->bUsePawnControlRotation = false; //Camera does not rotate relative to arm

	//Don't  Rotate when the controller rotates, Let the Controller only effect the camera.
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = true;
	bUseControllerRotationRoll = false;

	//Configure character movement
	GetCharacterMovement()->bOrientRotationToMovement = false; // Character Moves in the direction of the input
	GetCharacterMovement()->RotationRate = FRotator(0.f, 540.f, 0.f); //... at this rotation rate
	GetCharacterMovement()->JumpZVelocity = 600.f;
	GetCharacterMovement()->AirControl = 0.2f;

	
}

// Called when the game starts or when spawned
void AShooterCharacter::BeginPlay()
{
	Super::BeginPlay();

	/*
	UE_LOG(LogTemp, Warning, TEXT("BeginPlay() has been Called!"));

	//Integer
	int myInt{ 42 };
	UE_LOG(LogTemp, Warning, TEXT("myInt : %d"), myInt);

	//Float
	float myFloat { 3.14159f};
	UE_LOG(LogTemp, Warning, TEXT("myFloat : %f"), myFloat);

	//Double
	double myDouble {0.000756};
	UE_LOG(LogTemp, Warning, TEXT("myDouble : %lf"), myDouble);

	//Char
	TCHAR myChar {'J'};
	UE_LOG(LogTemp, Warning, TEXT("myChar : %c"), myChar);
	
	// wchar_t wideChar {L'J'};
	// UE_LOG(LogTemp, Warning, TEXT("myWideChar : %lc"), wideChar);

	//Bool
	bool myBool{ true };
	UE_LOG(LogTemp, Warning, TEXT("myBool : %d"), myBool);

	//Multiple
	UE_LOG(LogTemp, Warning, TEXT("int : %d, float : %f, bool : %d"), myInt, myFloat, myBool);

	//String
	FString myString {TEXT("MY STRING!!!")};
	UE_LOG(LogTemp, Warning, TEXT("myString : %s"), *myString);
	UE_LOG(LogTemp, Warning, TEXT("Name Of Instance : %s"), *GetName());

	*/

	//Set Default FOV Cam Value
	if(FollowCamera)
	{
		CameraDefaultFOV = FollowCamera->FieldOfView;
		CameraCurrentFOV = CameraDefaultFOV;
	}

	//Spawn and Equip Default Weapon
	EquipWeapon(SpawnDefaultWeapon());

	//Initialize AmmoMap
	InitializeAmmoMap();
}


// Called every frame	
void AShooterCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//Handle Interpolation for Zoom when aiming
	CameraInterpZoom(DeltaTime);

	SetLookRates();

	//Calculate Crosshair  Spread Multiplier
	CalculateCrosshairSpread(DeltaTime);

	//Check for Overlapped Items, Then Trace for Items
	TraceForItems();
}

void AShooterCharacter::CalculateCrosshairSpread(float Deltatime)
{
	//Calculate Crosshair Velocityy
	FVector2d WalkSpeedRange{0.f, 600.f};
	FVector2d VelocityMultiplierRange {0.f, 1.f};
	FVector Velocity {GetVelocity()};
	Velocity.Z = 0.f;
	
	CrosshairVelocityFactor = FMath::GetMappedRangeValueClamped(WalkSpeedRange,  VelocityMultiplierRange, Velocity.Size());


	//Calculate Crosshair in air factor
	if(GetCharacterMovement()->IsFalling()) // is character in AIR ?!
	{
		//Spread The crosshairSlowly while in air
		CrosshairInAirFactor = FMath::FInterpTo(CrosshairInAirFactor, 2.25f, Deltatime, 2.25f);
	}
	else
	{
		//Charater is on the ground
		//Shrink the crosshair rapidly in the ground
		CrosshairInAirFactor = FMath::FInterpTo(CrosshairInAirFactor, 0.f, Deltatime, 30.f);
	}


	//Calcualate Factor when Aiming
	if(bAiming) //Character is aiming
	{
		CrosshairAimFactor = FMath::FInterpTo(CrosshairAimFactor, 0.5f,Deltatime, 30.f );
	}
	else
	{
		CrosshairAimFactor = FMath::FInterpTo(CrosshairAimFactor, 0,Deltatime, 30.f );
	}

	
	if(bFiringBullet)
	{
		CrosshairShootingFactor = FMath::FInterpTo(CrosshairShootingFactor, 0.3f, Deltatime, 60.f);	
	}
	else
	{
		CrosshairShootingFactor = FMath::FInterpTo(CrosshairShootingFactor, 0.f, Deltatime, 60.f);	
	}
	CrosshairSpreadMultiplier = 0.5f + CrosshairVelocityFactor + CrosshairInAirFactor - CrosshairAimFactor + CrosshairShootingFactor;
	
}

void AShooterCharacter::StartCrosshairBulletFire()
{
	bFiringBullet = true;

	GetWorldTimerManager().SetTimer(CrosshairShootTimer, this, &AShooterCharacter::FinishCrosshairBulletFire, ShootTimeDuration);
}

void AShooterCharacter::FinishCrosshairBulletFire()
{
	bFiringBullet = false;
	
	
}

void AShooterCharacter::FireButtonPressed()
{
	bFireButtonPressed = true;
	StartFireTimer();
}

void AShooterCharacter::FireButtonReleased()
{
	bFireButtonPressed = false;
}

void AShooterCharacter::StartFireTimer()
{
	if(bShouldFire)
	{
		FireWeapon();
		bShouldFire = false;

		GetWorldTimerManager().SetTimer(AutoFireHandle, this, &AShooterCharacter::AutoFireReset, AutomaticFireRate);
	}
}

void AShooterCharacter::AutoFireReset()
{
	bShouldFire = true;
	if(bFireButtonPressed)
	{
		StartFireTimer();
	}
}


void AShooterCharacter::CameraInterpZoom(float DeltaTime)
{
	//Set Current CameraFOV
	if(bAiming)
	{
		//Interpolate to ZOOMEDFOV
		CameraCurrentFOV = FMath::FInterpTo(CameraCurrentFOV, CameraZoomedFOV, DeltaTime, ZoomInterpSpeed);
	}
	else
	{
		//Interpolate to DEFAULTFOV
		CameraCurrentFOV = FMath::FInterpTo(CameraCurrentFOV, CameraDefaultFOV, DeltaTime, ZoomInterpSpeed);
	}
	GetFollowCamera()->SetFieldOfView(CameraCurrentFOV);
}

void AShooterCharacter::SetLookRates()
{
	if(bAiming)
	{
		BaseTurnRate = AimingTurnRate;
		BaseLookUpRate = AimingLookUpRate;
	}
	else
	{
		BaseTurnRate = HipTurnRate;
		BaseLookUpRate  = HipLookUpRate;
	}
}

// Called to bind functionality to input
void AShooterCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	check(PlayerInputComponent);

	PlayerInputComponent->BindAxis("MoveForward", this, &AShooterCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight",  this, &AShooterCharacter::MoveRight);

	PlayerInputComponent->BindAxis("TurnRate",  this, &AShooterCharacter::TurnAtRate);
	PlayerInputComponent->BindAxis("LookUpRate",  this, &AShooterCharacter::LookUpAtRate);
	
	PlayerInputComponent->BindAxis("Turn",  this, &AShooterCharacter::Turn);
	PlayerInputComponent->BindAxis("LookUp",  this, &AShooterCharacter::LoopUp);

	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);

	PlayerInputComponent->BindAction("FireButton", IE_Pressed, this, &AShooterCharacter::FireButtonPressed);
	PlayerInputComponent->BindAction("FireButton", IE_Released, this, &AShooterCharacter::FireButtonReleased);

	PlayerInputComponent->BindAction("AimingButton", IE_Pressed, this, &AShooterCharacter::AimingButtonPressed);
	PlayerInputComponent->BindAction("AimingButton", IE_Released, this, &AShooterCharacter::AimingButtonReleased);

	
	PlayerInputComponent->BindAction("Select", IE_Pressed, this, &AShooterCharacter::SelectButtonPressed);
	PlayerInputComponent->BindAction("Select", IE_Released, this, &AShooterCharacter::SelectButtonReleased);
}


void AShooterCharacter::MoveForward(float Value)
{
	if(Controller != nullptr && Value != 0)
	{
		// 1. Find out which way is forward
		const FRotator Rotation {Controller -> GetControlRotation()};
		const FRotator YawRotation {0, Rotation.Yaw, 0};

		const FVector Direction {FRotationMatrix{YawRotation}.GetUnitAxis(EAxis::X)};
		AddMovementInput(Direction, Value);
	}
}

void AShooterCharacter::MoveRight(float Value)
{
	if(Controller != nullptr && Value != 0)
	{
		// 1. Find out which way is Right
		const FRotator Rotation {Controller -> GetControlRotation()};
		const FRotator YawRotation {0, Rotation.Yaw, 0};

		const FVector Direction {FRotationMatrix{YawRotation}.GetUnitAxis(EAxis::Y)};
		AddMovementInput(Direction, Value);
	}
}

void AShooterCharacter::TurnAtRate(float Rate)
{
	//Calculate delta for this frame from the rate information.
	AddControllerYawInput(Rate * BaseTurnRate * GetWorld()->GetDeltaSeconds()); // deg/sec * sec/frame
}

void AShooterCharacter::LookUpAtRate(float Rate)
{
	//Calculate delta for this frame from the rate information
	AddControllerPitchInput(Rate * BaseLookUpRate * GetWorld()->GetDeltaSeconds()); // deg/sec * sec/frame
}

void AShooterCharacter::Turn(float Value)
{
	float turnScaleFactor;
	if(bAiming)
	{
		turnScaleFactor = MouseAimingTurnRate;
	}
	else
	{
		turnScaleFactor = MouseHipTurnRate;
	}
	AddControllerYawInput(Value * turnScaleFactor);
}

void AShooterCharacter::LoopUp(float Value)
{
	float turnScaleFactor;
	if(bAiming)
	{
		turnScaleFactor = MouseAimingLookUpRate;
	}
	else
	{
		turnScaleFactor = MouseHipLookUpRate;
	}
	AddControllerPitchInput(Value * turnScaleFactor);
}

void AShooterCharacter::FireWeapon()
{
	//UE_LOG(LogTemp, Warning, TEXT("Fire!"));

	//Play sound
	if(FireSound)
	{
		UGameplayStatics::PlaySound2D(this, FireSound, 0.25f);
	}

	const USkeletalMeshSocket* BarrelSocket = GetMesh()->GetSocketByName("BarrelSocket");
	if(BarrelSocket)
	{
		//Play MuzzleFlash FX
		const FTransform SocketTransform = BarrelSocket->GetSocketTransform(GetMesh());
		if(MuzzleFlash)
		{
			UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), MuzzleFlash, SocketTransform);
		}

		FVector BeamEndLocation;
		bool bBeamEnd = GetBeamEndLocation(SocketTransform.GetLocation(), BeamEndLocation);

		if(bBeamEnd)
		{
			//Spawn Impact particles after updating BeamEndPoint Location
			if(ImpactParticle)
			{
				UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), ImpactParticle, BeamEndLocation);
			}
				
			if(BeamParticle)
			{
				UParticleSystemComponent* Beam = UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), BeamParticle, SocketTransform.GetLocation());
				if(Beam)
				{
					//Tries To set the End target of the parameter in BeamParticle Effect,
					//With The Target name "Target"
					Beam->SetVectorParameter(FName("Target"), BeamEndLocation);
				}
			}
		}
		
	}
		
	//Play Animation Montage
	UAnimInstance* AnimInstance = GetMesh()->GetAnimInstance();
	if(AnimInstance && HipFireMontage)
	{
		AnimInstance->Montage_Play(HipFireMontage);
		AnimInstance->Montage_JumpToSection(FName("StartFire"));
	}

	//Start Bullet Timer  For Crosshair
	StartCrosshairBulletFire();
}

bool AShooterCharacter::GetBeamEndLocation(const FVector& MuzzleSocketLocation, FVector& OutBeamLocation)
{
	//Check For Crosshair Trace hit
	FHitResult CrosshairHitResult;

	bool bCrosshairhit = TraceUnderCrosshair(CrosshairHitResult, OutBeamLocation);

	if(bCrosshairhit)
	{
		//Tentative Beam Loc - Still need to trace from the muzzle socket
		OutBeamLocation = CrosshairHitResult.Location;
	}
	else
	{
		// NoCrosshair hit
	}

	//Perform a Second LineTrace from the gun barrel
	FHitResult WeaponTraceHit;
	const FVector WeaponTraceStart{MuzzleSocketLocation};
	const  FVector StartToEnd {OutBeamLocation - MuzzleSocketLocation};
	const FVector WeaponTraceEnd{ MuzzleSocketLocation + StartToEnd * 1.25f};

	GetWorld()->LineTraceSingleByChannel(WeaponTraceHit, WeaponTraceStart, WeaponTraceEnd, ECC_Visibility);
	if(WeaponTraceHit.bBlockingHit) //Object between barrel to BeamEndPoint
	{
		OutBeamLocation = WeaponTraceHit.Location;
		return true;
	}
	
	return false;
}

void AShooterCharacter::AimingButtonPressed()
{
	bAiming = true;
	//GetFollowCamera()->SetFieldOfView(CameraZoomedFOV);
}

void AShooterCharacter::AimingButtonReleased()
{
	bAiming = false;
	//GetFollowCamera()->SetFieldOfView(CameraDefaultFOV);
}

bool AShooterCharacter::TraceUnderCrosshair(FHitResult& OutHitResult, FVector& OutHitLocation)
{	
	FVector2d ViewPortSize;
	if(GEngine && GEngine->GameViewport)
	{
		GEngine->GameViewport->GetViewportSize(ViewPortSize);
	}

	FVector2d CrosshairLocation { ViewPortSize.X / 2.f, ViewPortSize.Y / 2.f};
	FVector CrosshairWorldLocation;
	FVector CrosshairWorldRotation;

	bool bScreenToWorld = UGameplayStatics::DeprojectScreenToWorld(UGameplayStatics::GetPlayerController(this, 0 )
	, CrosshairLocation, CrosshairWorldLocation, CrosshairWorldRotation);

	if(bScreenToWorld)
	{
		//Trace from crosshair world location outward
		const FVector Start {CrosshairWorldLocation};
		const FVector End {Start + CrosshairWorldRotation * 50'000.f};
		OutHitLocation = End;
		
		GetWorld()->LineTraceSingleByChannel(OutHitResult, Start, End, ECC_Visibility);

		if(OutHitResult.bBlockingHit)
		{
			OutHitLocation = OutHitResult.Location;
			return true;
		}
	}
	return false;
}

void AShooterCharacter::TraceForItems()
{
	if(bShouldTraceForItems)
	{
		FHitResult ItemTraceResult;
		FVector HitLocation;
		TraceUnderCrosshair(ItemTraceResult, HitLocation);

		if(ItemTraceResult.bBlockingHit)
		{
			TraceHitItem = Cast<AItem>(ItemTraceResult.GetActor());
			if(TraceHitItem && TraceHitItem->GetPickUpWidget())
			{
				//Show Item's Pickup Widget
				UWidgetComponent* PickUpWidget = TraceHitItem->GetPickUpWidget();
				PickUpWidget->SetVisibility(true);
			}

			//hit an item last frame
			if(PreviousTraceHitItem)
			{
				if(TraceHitItem != PreviousTraceHitItem)
				{
					//We are hitting a diferent AItem this frame
					//or AItem is null
					PreviousTraceHitItem->GetPickUpWidget()->SetVisibility(false);
				}
			}
			
			//Store the reference to hitItem from last frame
			PreviousTraceHitItem = TraceHitItem;
		}
	}
	else if(PreviousTraceHitItem)
	{
		// no Longet overlapping with any items
		PreviousTraceHitItem->GetPickUpWidget()->SetVisibility(false);
	}
	
}

void AShooterCharacter::IncrementOverlappedItemCount(int8 Amount)
{
	if(OverllapedItemCount + Amount <= 0)
	{
		OverllapedItemCount = 0;
		bShouldTraceForItems = false;
	}
	else
	{
		OverllapedItemCount += Amount;
		bShouldTraceForItems = true;
	}
}



AWeapon* AShooterCharacter::SpawnDefaultWeapon()
{
	//Check The TSubClass of the Variable
	if(DefaultWeaponClass)
	{
		//Spawn The Weapon
		AWeapon* DefaultWeapon = GetWorld()->SpawnActor<AWeapon>(DefaultWeaponClass);
		return DefaultWeapon;
	}

	return nullptr;
}

void AShooterCharacter::EquipWeapon(AWeapon* WeaponToEquip)
{
	if(WeaponToEquip == nullptr) return;
	
	//Get the Hand Socket
	const USkeletalMeshSocket* HandSocket = GetMesh()->GetSocketByName(FName("RightHandSocket"));

	if(HandSocket) // IF Socket valid
	{
		//Attach weapon to the hand socket
		HandSocket->AttachActor(WeaponToEquip, GetMesh());
	}

	//Set Equipped weapon to the newly spawned weapon
	EquippedWeapon = WeaponToEquip;
	EquippedWeapon->SetItemState(EItemState::EIS_Equipped);
	
}

void AShooterCharacter::DropWeapon()
{
	if(EquippedWeapon == nullptr) return;

	FDetachmentTransformRules DetachmentTransformRules(EDetachmentRule::KeepWorld, true);
	
	EquippedWeapon->GetItemMesh()->DetachFromComponent(DetachmentTransformRules);
	EquippedWeapon->SetItemState(EItemState::EIS_Falling);
	EquippedWeapon->ThrowWeapon();
	
}

void AShooterCharacter::SelectButtonPressed()
{
	if(TraceHitItem == nullptr) return;

	TraceHitItem->StartItemCurve(this);
}

void AShooterCharacter::SelectButtonReleased()
{
	
}

void AShooterCharacter::SwapWeapon(AWeapon* WeaponToSwap)
{
	DropWeapon();
	EquipWeapon(WeaponToSwap);
	
	TraceHitItem = nullptr;
	PreviousTraceHitItem = nullptr;
}

FVector AShooterCharacter::GetCameraInterpLocation()
{
	const FVector CameraWorldLocation {FollowCamera->GetComponentLocation()};
	const FVector CameraForward {FollowCamera->GetForwardVector()};
	
	return CameraWorldLocation + (CameraForward * CameraInterpDistance) + FVector(0.f, 0.f, CameraInterpElevation);
}

void AShooterCharacter::GetPickUpItem(AItem* Item)
{
	auto Weapon = Cast<AWeapon>(Item);
	if(Weapon)
	{
		SwapWeapon(Weapon);
	}
	
}

void AShooterCharacter::InitializeAmmoMap()
{
	AmmoMap.Add(EAmmoType::EAT_9mm, Starting9mmAmmo);
	AmmoMap.Add(EAmmoType::EAT_AR, StartingARAmmo);
}
