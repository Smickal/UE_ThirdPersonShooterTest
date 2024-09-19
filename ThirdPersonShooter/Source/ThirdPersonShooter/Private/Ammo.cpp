// Fill out your copyright notice in the Description page of Project Settings.


#include "Ammo.h"

#include "ShooterCharacter.h"
#include "Components/BoxComponent.h"
#include "Components/WidgetComponent.h"


AAmmo::AAmmo()
{
	//Construct the Ammo Mesh Component an set it as the root
	AmmoMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Ammo Mesh"));
	SetRootComponent(AmmoMesh);

	AmmoCollisionSphere = CreateDefaultSubobject<USphereComponent>(TEXT("Ammo Overlap Sphere"));
	AmmoCollisionSphere->SetupAttachment(GetRootComponent());
	AmmoCollisionSphere->SetSphereRadius(50.f);
	
	GetBoxComponent()->SetupAttachment(GetRootComponent());
	GetPickUpWidget()->SetupAttachment(GetRootComponent());
	GetAreaSphereComponent()->SetupAttachment(GetRootComponent());
	
}
void AAmmo::BeginPlay()
{
	Super::BeginPlay();
	
	AmmoCollisionSphere->OnComponentBeginOverlap.AddDynamic(this, &AAmmo::OnAmmoSphereOverlap);
}

void AAmmo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
}

void AAmmo::SetItemProperties(EItemState State)
{
	Super::SetItemProperties(State);

	switch (State)
	{
	case  EItemState::EIS_PickUp:
		AmmoMesh->SetSimulatePhysics(false);
		AmmoMesh->SetEnableGravity(false);
		AmmoMesh->SetVisibility(true);
		AmmoMesh->SetCollisionResponseToChannels(ECollisionResponse::ECR_Ignore);
		AmmoMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);
		
		break;

	case EItemState::EIS_Equipped:
		AmmoMesh->SetSimulatePhysics(false);
		AmmoMesh->SetEnableGravity(false);
		AmmoMesh->SetVisibility(true);
		AmmoMesh->SetCollisionResponseToChannels(ECollisionResponse::ECR_Ignore);
		AmmoMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);
		
		
		break;

	case EItemState::EIS_Falling:
		//SetMesh Properties
		AmmoMesh->SetSimulatePhysics(true);
		AmmoMesh->SetEnableGravity(true);
		AmmoMesh->SetCollisionEnabled(ECollisionEnabled::Type::QueryAndPhysics);
		AmmoMesh->SetCollisionResponseToChannels(ECR_Ignore);
		AmmoMesh->SetCollisionResponseToChannel(ECC_WorldStatic, ECR_Block);
		
		break;

	case EItemState::EIS_EquipInterping:
		//Set ItemMesh Properties
		AmmoMesh->SetSimulatePhysics(false);
		AmmoMesh->SetEnableGravity(false);
		AmmoMesh->SetVisibility(true);
		AmmoMesh->SetCollisionResponseToChannels(ECollisionResponse::ECR_Ignore);
		AmmoMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);
		
		break;
	}
	
}

void AAmmo::OnAmmoSphereOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if(OtherActor)
	{
		auto OverlappedCharacter = Cast<AShooterCharacter>(OtherActor);
		if(OverlappedCharacter)
		{
			StartItemCurve(OverlappedCharacter);
			AmmoCollisionSphere->SetCollisionEnabled(ECollisionEnabled::Type::NoCollision);
		}
		
	}
}


void AAmmo::EnableCustomDepth()
{
	Super::EnableCustomDepth();

	AmmoMesh->SetRenderCustomDepth(true);
}

void AAmmo::DisableCustomDepth()
{
	Super::DisableCustomDepth();
	
	AmmoMesh->SetRenderCustomDepth(false);
}
