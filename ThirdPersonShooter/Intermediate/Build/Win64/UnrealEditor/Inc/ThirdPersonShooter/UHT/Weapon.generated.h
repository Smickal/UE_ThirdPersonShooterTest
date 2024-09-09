// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Weapon.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef THIRDPERSONSHOOTER_Weapon_generated_h
#error "Weapon.generated.h already included, missing '#pragma once' in Weapon.h"
#endif
#define THIRDPERSONSHOOTER_Weapon_generated_h

#define FID_ThirdPersonShooter_Source_ThirdPersonShooter_Public_Weapon_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execStopFalling);


#define FID_ThirdPersonShooter_Source_ThirdPersonShooter_Public_Weapon_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWeapon(); \
	friend struct Z_Construct_UClass_AWeapon_Statics; \
public: \
	DECLARE_CLASS(AWeapon, AItem, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ThirdPersonShooter"), NO_API) \
	DECLARE_SERIALIZER(AWeapon)


#define FID_ThirdPersonShooter_Source_ThirdPersonShooter_Public_Weapon_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AWeapon(AWeapon&&); \
	AWeapon(const AWeapon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeapon); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeapon); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWeapon) \
	NO_API virtual ~AWeapon();


#define FID_ThirdPersonShooter_Source_ThirdPersonShooter_Public_Weapon_h_21_PROLOG
#define FID_ThirdPersonShooter_Source_ThirdPersonShooter_Public_Weapon_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ThirdPersonShooter_Source_ThirdPersonShooter_Public_Weapon_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ThirdPersonShooter_Source_ThirdPersonShooter_Public_Weapon_h_24_INCLASS_NO_PURE_DECLS \
	FID_ThirdPersonShooter_Source_ThirdPersonShooter_Public_Weapon_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THIRDPERSONSHOOTER_API UClass* StaticClass<class AWeapon>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ThirdPersonShooter_Source_ThirdPersonShooter_Public_Weapon_h


#define FOREACH_ENUM_EWEAPONTYPE(op) \
	op(EWeaponType::EWT_SMG) \
	op(EWeaponType::EWT_AR) 

enum class EWeaponType : uint8;
template<> struct TIsUEnumClass<EWeaponType> { enum { Value = true }; };
template<> THIRDPERSONSHOOTER_API UEnum* StaticEnum<EWeaponType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
