// Fill out your copyright notice in the Description page of Project Settings.


#include "ShooterCharacter.h"

#include "Camera/CameraComponent.h"
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
	bFireButtonPressed(false)
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
	//Get CUrrent Size of the viewport
	FVector2D ViewportSize;
	if(GEngine && GEngine->GameViewport)
	{
		GEngine->GameViewport->GetViewportSize(ViewportSize);
	}
	
	//Get ScreenSpaceLocation of the Crosshair
	FVector2D CrosshairLocation {ViewportSize.X/2.f, ViewportSize.Y/2.f};
	//CrosshairLocation.Y -= 25.f;
	FVector CrosshairWorldPos;
	FVector CrosshairWorldDir;

	//Get WorldPos and WOrldDir of the ScreenSpacedCrosshair with  projection
	bool bScreenToWorld =  UGameplayStatics::DeprojectScreenToWorld(UGameplayStatics::GetPlayerController(this, 0),
		CrosshairLocation,
		CrosshairWorldPos,
		CrosshairWorldDir);

	//If the Projection successfull
	if(bScreenToWorld)
	{
		FHitResult ScreenTraceHit;
		const FVector Start {CrosshairWorldPos};
		const FVector End {CrosshairWorldPos + CrosshairWorldDir * 50'000.f};

		//Set Initial BeamEndPoint to EndPoint of the LineTrace
		OutBeamLocation = End;

		//Trace Outward from crosshair World Loc
		GetWorld()->LineTraceSingleByChannel(ScreenTraceHit, Start, End, ECC_Visibility);
		if(ScreenTraceHit.bBlockingHit) //Was there a Trace Hit
		{
			//BeamEndPoint is now TraceEndHitPoint
			OutBeamLocation = ScreenTraceHit.Location;
		}

		//Perform a Second LineTrace from the gun barrel
		FHitResult WeaponTraceHit;
		const FVector WeaponTraceStart{MuzzleSocketLocation};
		const FVector WeaponTraceEnd{OutBeamLocation};

		GetWorld()->LineTraceSingleByChannel(WeaponTraceHit, WeaponTraceStart, WeaponTraceEnd, ECC_Visibility);
		if(WeaponTraceHit.bBlockingHit) //Object between barrel to BeamEndPoint
		{
			OutBeamLocation = WeaponTraceHit.Location;
		}

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
