// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SphereComponent.h"
#include "GameFramework/Actor.h"
#include "Item.generated.h"

class UWidgetComponent;
class UBoxComponent;

UENUM(BlueprintType)
enum class EItemRarity : uint8
{
	EIR_Damaged UMETA(DisplayName = "Damaged"),
	EIR_Common UMETA(DisplayName = "Common"),
	EIR_Uncommon UMETA(DisplayName = "UnCommon"),
	EIR_Rare UMETA(DisplayName = "Rare"),
	EIR_Legendary UMETA(DisplayName = "Legendary"),
	
	EIR_MAX UMETA(DisplayName = "DefaultMAX")
};


UCLASS()
class THIRDPERSONSHOOTER_API AItem : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AItem();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	//Called when Overlapping Area Sphere
	UFUNCTION()
	void  OnSphereBeginOverlap(UPrimitiveComponent*  OverlappedComponent, AActor* OtherActor,  UPrimitiveComponent* OtherComp, int32 OtherBodyIndex,
		bool bFromSweep, const FHitResult& SweepResult);

	//Called when EndOverlapping AreaSphere
	UFUNCTION()
	void OnSphereEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

	//sets the array of active stars of boleean base on the rarity
	void SetActiveStars();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


private:
	//Skeletal Mesh For The Item
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Item Properties", meta = (AllowPrivateAccess = "true"))
	USkeletalMeshComponent* ItemMesh;
	
	//Line Trace Collides with box to show HUD widget
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Item Properties", meta = (AllowPrivateAccess = "true"))
	UBoxComponent* CollisionBox;

	//Enables Item Tracing When Overlap
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Item Properties", meta = (AllowPrivateAccess = "true"))
	USphereComponent* AreaSphere;

	//Pop Up Widget When player looks at  the item
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category  = "Item Properties", meta = (AllowPrivateAccess = "true"))
	class UWidgetComponent* PickUpWidget;

	//The Name Which Appears in the pick up BP
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category  = "Item Properties", meta = (AllowPrivateAccess = "true"))
	FString ItemName;

	//Item Count (Ammo, etc)
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category  = "Item Properties", meta = (AllowPrivateAccess = "true"))
	int32 ItemCount;

	//Item Rarity Determines number of stars in Pickup Widget
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category  = "Item Properties", meta = (AllowPrivateAccess = "true"))
	EItemRarity ItemRarity;

	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category  = "Item Properties", meta = (AllowPrivateAccess = "true"))
	TArray<bool> ActiveStars;

public:
	FORCEINLINE UWidgetComponent* GetPickUpWidget() const { return PickUpWidget;}
};
