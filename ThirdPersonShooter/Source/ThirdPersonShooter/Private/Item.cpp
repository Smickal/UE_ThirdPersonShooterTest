// Fill out your copyright notice in the Description page of Project Settings.


#include "Item.h"

#include "ShooterCharacter.h"
#include "Camera/CameraComponent.h"
#include "Components/BoxComponent.h"
#include "Components/WidgetComponent.h"

// Sets default values
AItem::AItem() :
	ItemName(FString("Default")),
	ItemCount(0),
	ItemRarity(EItemRarity::EIR_Common),
	ItemState(EItemState::EIS_PickedUp),

	//Item Interp variables
	ZCurveTime(0.7f),
	ItemInterpStartLocation(FVector::Zero()),
	CameraTargetLocation(FVector::Zero()),
	bIsInterping(false),
	ItemInterpX(0.f),
	ItemInterpY(0.f),
	InterpInitialYawOffset(0.f)
	
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	ItemMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Item Mesh"));
	SetRootComponent(ItemMesh);

	CollisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("Collision Box"));
	CollisionBox->SetupAttachment(GetRootComponent());
	CollisionBox->SetCollisionResponseToAllChannels(ECR_Ignore);
	CollisionBox->SetCollisionResponseToChannel(ECC_Visibility, ECR_Block);

	AreaSphere = CreateDefaultSubobject<USphereComponent>(TEXT("AreaSphere"));
	AreaSphere->SetupAttachment(GetRootComponent());
	
	PickUpWidget = CreateDefaultSubobject<UWidgetComponent>(TEXT("PickUpWidget"));
	PickUpWidget->SetupAttachment(GetRootComponent());
}

// Called when the game starts or when spawned
void AItem::BeginPlay()
{
	Super::BeginPlay();

	//Hide Pickup Widget
	if(PickUpWidget)
	{
		PickUpWidget->SetVisibility(false);
	}
		
	//Set-up ActiveStars based on item Rarity
	SetActiveStars();
	
	//Setup Overlay For Area Sphere
	AreaSphere->OnComponentBeginOverlap.AddDynamic(this, &AItem::OnSphereBeginOverlap);
	AreaSphere->OnComponentEndOverlap.AddDynamic(this, &AItem::OnSphereEndOverlap);

	SetItemProperties(ItemState);
}

// Called every frame
void AItem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	ItemInterp(DeltaTime);
}

void AItem::OnSphereBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	
	if(OtherActor == nullptr) return;

	AShooterCharacter* ShooterCharacter = Cast<AShooterCharacter>(OtherActor);
	if(ShooterCharacter == nullptr) return;

	
	ShooterCharacter->IncrementOverlappedItemCount(1);
	
}

void AItem::OnSphereEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	if(OtherActor == nullptr) return;

	AShooterCharacter* ShooterCharacter = Cast<AShooterCharacter>(OtherActor);
	if(ShooterCharacter == nullptr) return;

	ShooterCharacter->IncrementOverlappedItemCount(-1);
}

void AItem::SetActiveStars()
{
	//The 0 Element isn't used
	for(int32 i = 0; i <= 5; i++)
	{
		ActiveStars.Add(false);
	}

	switch (ItemRarity)
	{
		case EItemRarity::EIR_Damaged:
			ActiveStars[1] = true;
			break;
		case EItemRarity::EIR_Common:
			ActiveStars[1] = true;
			ActiveStars[2] = true;
			break;
		case EItemRarity::EIR_Uncommon:
			ActiveStars[1] = true;
			ActiveStars[2] = true;
			ActiveStars[3] = true;
			break;
		case EItemRarity::EIR_Rare:
			ActiveStars[1] = true;
			ActiveStars[2] = true;
			ActiveStars[3] = true;
			ActiveStars[4] = true;
			break;
		case EItemRarity::EIR_Legendary:
			ActiveStars[1] = true;
			ActiveStars[2] = true;
			ActiveStars[3] = true;
			ActiveStars[4] = true;
			ActiveStars[5] = true;
			break;
		default:
			
			break;
	}
	
}

void AItem::SetItemProperties(EItemState State)
{
	switch (State)
	{
	case  EItemState::EIS_PickUp:
		ItemMesh->SetSimulatePhysics(false);
		ItemMesh->SetEnableGravity(false);
		ItemMesh->SetVisibility(true);
		ItemMesh->SetCollisionResponseToChannels(ECollisionResponse::ECR_Ignore);
		ItemMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);

		//Set Area Collision Properties
		AreaSphere->SetCollisionResponseToChannels(ECollisionResponse::ECR_Overlap);
		AreaSphere->SetCollisionEnabled(ECollisionEnabled::QueryOnly);

		//set Box Collision Properties
		CollisionBox->SetCollisionResponseToChannels(ECR_Ignore);
		CollisionBox->SetCollisionResponseToChannel(ECC_Visibility, ECR_Block);
		CollisionBox->SetCollisionEnabled(ECollisionEnabled::Type::QueryAndPhysics);
		
		break;

	case EItemState::EIS_Equipped:
		ItemMesh->SetSimulatePhysics(false);
		ItemMesh->SetEnableGravity(false);
		ItemMesh->SetVisibility(true);
		ItemMesh->SetCollisionResponseToChannels(ECollisionResponse::ECR_Ignore);
		ItemMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);

		//Set Area Collision Properties
		AreaSphere->SetCollisionResponseToChannels(ECollisionResponse::ECR_Ignore);
		AreaSphere->SetCollisionEnabled(ECollisionEnabled::Type::NoCollision);

		//set Box Collision Properties
		CollisionBox->SetCollisionResponseToChannels(ECR_Ignore);
		CollisionBox->SetCollisionEnabled(ECollisionEnabled::Type::NoCollision);

		PickUpWidget->SetVisibility(false);
		
		break;

	case EItemState::EIS_Falling:
		//SetMesh Properties
		ItemMesh->SetSimulatePhysics(true);
		ItemMesh->SetEnableGravity(true);
		ItemMesh->SetCollisionEnabled(ECollisionEnabled::Type::QueryAndPhysics);
		ItemMesh->SetCollisionResponseToChannels(ECR_Ignore);
		ItemMesh->SetCollisionResponseToChannel(ECC_WorldStatic, ECR_Block);

		//Set Area Collision Properties
		AreaSphere->SetCollisionResponseToChannels(ECollisionResponse::ECR_Ignore);
		AreaSphere->SetCollisionEnabled(ECollisionEnabled::Type::NoCollision);

		//set Box Collision Properties
		CollisionBox->SetCollisionResponseToChannels(ECR_Ignore);
		CollisionBox->SetCollisionEnabled(ECollisionEnabled::Type::NoCollision);
		
		break;

	case EItemState::EIS_EquipInterping:
		//Set Pickup Widget  Properties
		PickUpWidget->SetVisibility(false);

		//Set ItemMesh Properties
		ItemMesh->SetSimulatePhysics(false);
		ItemMesh->SetEnableGravity(false);
		ItemMesh->SetVisibility(true);
		ItemMesh->SetCollisionResponseToChannels(ECollisionResponse::ECR_Ignore);
		ItemMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);

		//Set Area Collision Properties
		AreaSphere->SetCollisionResponseToChannels(ECollisionResponse::ECR_Ignore);
		AreaSphere->SetCollisionEnabled(ECollisionEnabled::Type::NoCollision);

		//set Box Collision Properties
		CollisionBox->SetCollisionResponseToChannels(ECR_Ignore);
		CollisionBox->SetCollisionEnabled(ECollisionEnabled::Type::NoCollision);
			
		break;
	}
}


void AItem::SetItemState(EItemState State)
{
	ItemState = State;
	SetItemProperties(ItemState);
}

void AItem::StartItemCurve(AShooterCharacter* Char)
{
	//Store a Handle to Character
	Character = Char;

	//Store Initial Location of the Item
	ItemInterpStartLocation = GetActorLocation();

	bIsInterping = true;
	SetItemState(EItemState::EIS_EquipInterping);

	GetWorldTimerManager().SetTimer(ItemInterpTimer, this, &AItem::FinishInterping,ZCurveTime);

	const double CameraRotationYaw {Character->GetFollowCamera()->GetComponentRotation().Yaw};
	const double ItemRotationYaw {GetActorRotation().Yaw};
	//Initial YawOffset between camera and item
	InterpInitialYawOffset = ItemRotationYaw - CameraRotationYaw;
	
}

void AItem::FinishInterping()
{
	bIsInterping = false;
	SetActorScale3D(FVector::One());
	
	if(Character)
	{
		Character->GetPickUpItem(this);
	}
}

void AItem::ItemInterp(float DeltaTime)
{
	if(!bIsInterping) return;

	if(Character && ItemZCurve)
	{
		//Elapsed time since Started ItemInterpTimer
		const float ElapsedTime = GetWorldTimerManager().GetTimerElapsed(ItemInterpTimer);

		//Get Curve Value Corresponding to the elapsed time
		const float CurveValue = ItemZCurve->GetFloatValue(ElapsedTime);

		//Get Item initialize location when started
		FVector ItemLocation = ItemInterpStartLocation;
		//Get Location from the camera
		const FVector CameraInterpLocation{Character->GetCameraInterpLocation()};
		
		//Vector  Delta from StartLoc to CameraLoc, with X and Y Zeroed
		const FVector ItemToCamera{FVector(0.f, 0.f, (CameraInterpLocation - ItemLocation).Z)};

		//Scale factor to multiply  with CurveValue
		const float  DeltaZ = ItemToCamera.Size();

		//Adding Curve value to the Z component of the initial Location (Scaled by DeltaZ)
		ItemLocation.Z += CurveValue * DeltaZ;

		const FVector CurrentLocation = GetActorLocation();
		//INterpolated X Value
		const float InterpXValue = FMath::FInterpTo(CurrentLocation.X,  CameraInterpLocation.X, DeltaTime, 30.f);
		//INterpolated D Value
		const float InterpYValue = FMath::FInterpTo(CurrentLocation.Y,  CameraInterpLocation.Y, DeltaTime, 30.f);

		//Set X and Y  loc to InterpValue
		ItemLocation.X = InterpXValue;
		ItemLocation.Y = InterpYValue;
		
		SetActorLocation(ItemLocation, true, nullptr, ETeleportType::TeleportPhysics);
		const FRotator CameraRotation {Character->GetFollowCamera()->GetComponentRotation()};

		FRotator ItemRotation {0.f, CameraRotation.Yaw + InterpInitialYawOffset, 0.f};
		SetActorRotation(ItemRotation, ETeleportType::TeleportPhysics);

		if(ItemScaleCurve)
		{
			const float CurveScaleValue = ItemScaleCurve->GetFloatValue(ElapsedTime);
			SetActorScale3D(FVector::One() * CurveScaleValue);
		}
		
	}
}

