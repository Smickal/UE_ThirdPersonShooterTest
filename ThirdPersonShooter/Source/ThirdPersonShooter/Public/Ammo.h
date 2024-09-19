// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AmmoType.h"
#include "Item.h"
#include "Ammo.generated.h"

/**
 * 
 */
UCLASS()
class THIRDPERSONSHOOTER_API AAmmo : public AItem
{
	GENERATED_BODY()

protected:
	virtual void BeginPlay() override;

	//Override of Set Item Properties so we can set AmmoMesh Properties
	virtual void  SetItemProperties(EItemState State) override;

	
	UFUNCTION()
	void OnAmmoSphereOverlap(UPrimitiveComponent*  OverlappedComponent, AActor* OtherActor,  UPrimitiveComponent* OtherComp, int32 OtherBodyIndex,
		bool bFromSweep, const FHitResult& SweepResult);


public:
	AAmmo();

	virtual void Tick(float DeltaTime) override;

	virtual void EnableCustomDepth() override;
	virtual void DisableCustomDepth() override;
private:
	//Mesh For the Ammo PikcUp
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Ammo, meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* AmmoMesh;

	//Ammo Type for the Ammo
	UPROPERTY(EditAnywhere, BlueprintReadWrite,  Category = Ammo, meta = (AllowPrivateAccess = "true"))
	EAmmoType AmmoType;

	//The Ammo Texture for the Icon  
	UPROPERTY(EditAnywhere, BlueprintReadWrite,  Category = Ammo, meta = (AllowPrivateAccess = "true"))
	UTexture2D* AmmoIconTexture;

	//Overlap Sphere for  picking up the ammo
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Ammo, meta = (AllowPrivateAccess = "true") )
	USphereComponent* AmmoCollisionSphere;

public:
	FORCEINLINE UStaticMeshComponent* GetAmmoMesh() const {return AmmoMesh;}
	FORCEINLINE EAmmoType GetAmmoType() const {return  AmmoType;}
	
};

