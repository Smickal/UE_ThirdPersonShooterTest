// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Ammo.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef THIRDPERSONSHOOTER_Ammo_generated_h
#error "Ammo.generated.h already included, missing '#pragma once' in Ammo.h"
#endif
#define THIRDPERSONSHOOTER_Ammo_generated_h

#define FID_ThirdPersonShooter_Source_ThirdPersonShooter_Public_Ammo_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnAmmoSphereOverlap);


#define FID_ThirdPersonShooter_Source_ThirdPersonShooter_Public_Ammo_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAmmo(); \
	friend struct Z_Construct_UClass_AAmmo_Statics; \
public: \
	DECLARE_CLASS(AAmmo, AItem, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ThirdPersonShooter"), NO_API) \
	DECLARE_SERIALIZER(AAmmo)


#define FID_ThirdPersonShooter_Source_ThirdPersonShooter_Public_Ammo_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AAmmo(AAmmo&&); \
	AAmmo(const AAmmo&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAmmo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAmmo); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAmmo) \
	NO_API virtual ~AAmmo();


#define FID_ThirdPersonShooter_Source_ThirdPersonShooter_Public_Ammo_h_13_PROLOG
#define FID_ThirdPersonShooter_Source_ThirdPersonShooter_Public_Ammo_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ThirdPersonShooter_Source_ThirdPersonShooter_Public_Ammo_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ThirdPersonShooter_Source_ThirdPersonShooter_Public_Ammo_h_16_INCLASS_NO_PURE_DECLS \
	FID_ThirdPersonShooter_Source_ThirdPersonShooter_Public_Ammo_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THIRDPERSONSHOOTER_API UClass* StaticClass<class AAmmo>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ThirdPersonShooter_Source_ThirdPersonShooter_Public_Ammo_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
