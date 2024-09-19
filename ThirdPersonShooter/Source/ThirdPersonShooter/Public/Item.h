// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SphereComponent.h"
#include "Curves/CurveVector.h"
#include "GameFramework/Actor.h"
#include "Sound/SoundCue.h"
#include "Item.generated.h"

class AShooterCharacter;
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

UENUM(BlueprintType)
enum class EItemState : uint8
{
	EIS_PickUp UMETA(DisplayName = "PickUp"),
	EIS_EquipInterping UMETA(DisplayName = "EqupInterping"),
	EIS_PickedUp UMETA(DisplayName = "PickedUp"),
	EIS_Equipped UMETA(DisplayName = "Equipped"),
	EIS_Falling UMETA(DisplayName = "Falling"),
	
	EIR_MAX UMETA(DisplayName = "DefaultMAX")
};


UENUM(BlueprintType)
enum class EItemType : uint8
{
	EIT_Ammo UMETA(DisplayName = "Ammo"),
	EIT_Weapon UMETA(DisplayName = "Weapon"),

	EIT_MAX UMETA(DisplayName = "DefaultMAX")
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

	//Sets the property of the item's component based on State
	virtual void SetItemProperties(EItemState State);

	//Called when ItemInterpTimer is finished
	void FinishInterping();

	//Handles Item Interpolation when EquipInterpingState
	void ItemInterp(float DeltaTime);

	//Get InterpLcoation Based on the ItemType
	FVector GetInterpLocation();

	void PlayPickUpSound();
	
	void PlayEquipSound();

	virtual  void InitializeCustomDepth();

	virtual void OnConstruction(const FTransform& Transform) override;
	void UpdatePulse();
	void ResetPulseTimer();
	void StartPulseTimer();
	
public:	
	// Called every frame
	void EnableGlowMaterial();
	void DisableGlowMaterial();
	
	virtual void Tick(float DeltaTime) override;

	virtual void EnableCustomDepth();
	virtual void  DisableCustomDepth();
	

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

	//State of The Item
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category  = "Item Properties", meta = (AllowPrivateAccess = "true"))
	EItemState ItemState;
	
	//The Curve Asset to use for the item'sZ location when interping
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category  = "Item Properties", meta = (AllowPrivateAccess = "true"))
	UCurveFloat* ItemZCurve;

	//Starting Location when interpin Begins
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category  = "Item Properties", meta = (AllowPrivateAccess = "true"))
	FVector ItemInterpStartLocation;

	//Target Interp Location in front of the camera
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category  = "Item Properties", meta = (AllowPrivateAccess = "true"))
	FVector CameraTargetLocation;

	//True when interping
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category  = "Item Properties", meta = (AllowPrivateAccess = "true"))
	bool bIsInterping;
	
	//Plays when we Start Interping
	FTimerHandle ItemInterpTimer;

	//Duration of The Curve and the Timer
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category  = "Item Properties", meta = (AllowPrivateAccess = "true"))
	float ZCurveTime;
	
	//Pointer to the Character
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category  = "Item Properties", meta = (AllowPrivateAccess = "true"))
	AShooterCharacter* Character;

	//X and Y for the ITEM when  Interping
	float ItemInterpX;
	float ItemInterpY;


	//Initial Yaw Offset Between Camera and interping Item
	double InterpInitialYawOffset;
	
	//Curve use to Scale the Item When interping
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category  = "Item Properties", meta = (AllowPrivateAccess = "true"))
	UCurveFloat* ItemScaleCurve;

	//Sound played when item is PickUp
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category  = "Item Properties", meta = (AllowPrivateAccess = "true"))
	USoundCue* PickUpSound;

	//Sound played when item is Equipped
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category  = "Item Properties", meta = (AllowPrivateAccess = "true"))
	USoundCue* EquipSound;

	//The Enum of item Type of the Item's Properties
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category  = "Item Properties", meta = (AllowPrivateAccess = "true"))
	EItemType ItemType;


	//Index of  the interp location  this item is interping to
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category  = "Item Properties", meta = (AllowPrivateAccess = "true"))
	int32 InterpLocIndex;

	//Index for the material that will be changed in Runtime
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category  = "Item Properties", meta = (AllowPrivateAccess = "true"))
	int32 MaterialIndex;

	//Dynamic Instance that we can change in Run-Time
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category  = "Item Properties", meta = (AllowPrivateAccess = "true"))
	UMaterialInstanceDynamic* DynamicMaterialInstance;

	//Material Instance  used with the Dynamic material Instance
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category  = "Item Properties", meta = (AllowPrivateAccess = "true"))
	UMaterialInstance* MaterialInstance;

	bool bCanChangeCustomDepth;
	
	//Curve to drive the dyynamic material Parameters
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category  = "Item Properties", meta = (AllowPrivateAccess = "true"))
	UCurveVector* PulseCurve;

	FTimerHandle PulseTimerHandle;

	//Time for the pulseTimer
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category  = "Item Properties", meta = (AllowPrivateAccess = "true"))
	float PulseCurveTime;

	UPROPERTY(VisibleAnywhere, Category  = "Item Properties", meta = (AllowPrivateAccess = "true"))
	float GlowAmount;

	UPROPERTY(VisibleAnywhere, Category  = "Item Properties", meta = (AllowPrivateAccess = "true"))
	float FresnelExponent;

	UPROPERTY(VisibleAnywhere, Category  = "Item Properties", meta = (AllowPrivateAccess = "true"))
	float FresnelReflectFraction;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category  = "Item Properties", meta = (AllowPrivateAccess = "true"))
	UCurveVector* InterpPulseCurve;

public:
	FORCEINLINE UWidgetComponent* GetPickUpWidget() const { return PickUpWidget;}
	FORCEINLINE USphereComponent* GetAreaSphereComponent() const {return AreaSphere;}
	FORCEINLINE UBoxComponent* GetBoxComponent() const {return  CollisionBox;}
	FORCEINLINE EItemState GetItemState() const {return ItemState;}
	FORCEINLINE USkeletalMeshComponent* GetItemMesh() const {return  ItemMesh;}
 		
	void SetItemState(EItemState State);
	//Called From the AShooterCharacter Class
	void StartItemCurve(AShooterCharacter* Char);
	
	FORCEINLINE USoundCue* GetPickUpSound() const {return PickUpSound;}
	FORCEINLINE USoundCue* GetEquipSound() const {return EquipSound;}
	FORCEINLINE int32 GetItemCount() const {return ItemCount;}
};
