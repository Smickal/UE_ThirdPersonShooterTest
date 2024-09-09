// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Item.h"
#include "AmmoType.h"
#include "Weapon.generated.h"

UENUM(BlueprintType)
enum class EWeaponType : uint8
{
	EWT_SMG UMETA(DisplayName = "SubMachineGun"),
	EWT_AR UMETA(DisplayName = "AssaultRifle"),

	EWT_MAX  UMETA(DisplayName = "DefaultMAX")
};



UCLASS()
class THIRDPERSONSHOOTER_API AWeapon : public AItem
{
	GENERATED_BODY()

public:
	AWeapon();

	virtual void Tick(float DeltaSeconds) override;

	//Adds an Impulse to the character
	void ThrowWeapon();
protected:
	UFUNCTION()

	void StopFalling();
	
private:
	FTimerHandle ThrowWeaponTimer;
	float ThrowWeaponTime;
	bool bIsFalling;

	//Ammo Count for this weapon
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Properties", meta = (AllowPrivateAccess = "true"))
	int32 Ammo;
	
	//The Maximum Ammo that the weapon  can  holds
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Properties", meta = (AllowPrivateAccess = "true"))
	int32 MagazineCapacity;
	
	//The type Of the Weapon
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Properties", meta = (AllowPrivateAccess = "true"))
	EWeaponType WeaponType;

	//The Type of the AmmoType From theWeapon
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Properties", meta = (AllowPrivateAccess = "true"))
	EAmmoType AmmoType;

	//The  name of the reload Montage that will be set to this weapon
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Properties", meta = (AllowPrivateAccess = "true"))
	FName ReloadMontageSection;
public:
	FORCEINLINE int32 GetAmmo() const {return  Ammo;}
	FORCEINLINE int32 GetMagazineCapacity() const {return  MagazineCapacity;}

	//Called from Character  Class when Firing Wep
	void DecrementAmmo();
	
	FORCEINLINE EWeaponType GetWeaponType() const {return WeaponType;}
	FORCEINLINE EAmmoType GetAmmoType() const {return AmmoType;}
	FORCEINLINE FName GetReloadMontage() const {return ReloadMontageSection;}

	void ReloadAmmo(int32 Amount);
};
