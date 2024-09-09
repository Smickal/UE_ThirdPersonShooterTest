// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ShooterCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef THIRDPERSONSHOOTER_ShooterCharacter_generated_h
#error "ShooterCharacter.generated.h already included, missing '#pragma once' in ShooterCharacter.h"
#endif
#define THIRDPERSONSHOOTER_ShooterCharacter_generated_h

#define FID_ThirdPersonShooter_Source_ThirdPersonShooter_Public_ShooterCharacter_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetCrosshairSpreadMulitplier); \
	DECLARE_FUNCTION(execFinishReloading); \
	DECLARE_FUNCTION(execAutoFireReset); \
	DECLARE_FUNCTION(execFinishCrosshairBulletFire);


#define FID_ThirdPersonShooter_Source_ThirdPersonShooter_Public_ShooterCharacter_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAShooterCharacter(); \
	friend struct Z_Construct_UClass_AShooterCharacter_Statics; \
public: \
	DECLARE_CLASS(AShooterCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ThirdPersonShooter"), NO_API) \
	DECLARE_SERIALIZER(AShooterCharacter)


#define FID_ThirdPersonShooter_Source_ThirdPersonShooter_Public_ShooterCharacter_h_34_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AShooterCharacter(AShooterCharacter&&); \
	AShooterCharacter(const AShooterCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShooterCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShooterCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AShooterCharacter) \
	NO_API virtual ~AShooterCharacter();


#define FID_ThirdPersonShooter_Source_ThirdPersonShooter_Public_ShooterCharacter_h_31_PROLOG
#define FID_ThirdPersonShooter_Source_ThirdPersonShooter_Public_ShooterCharacter_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ThirdPersonShooter_Source_ThirdPersonShooter_Public_ShooterCharacter_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ThirdPersonShooter_Source_ThirdPersonShooter_Public_ShooterCharacter_h_34_INCLASS_NO_PURE_DECLS \
	FID_ThirdPersonShooter_Source_ThirdPersonShooter_Public_ShooterCharacter_h_34_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THIRDPERSONSHOOTER_API UClass* StaticClass<class AShooterCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ThirdPersonShooter_Source_ThirdPersonShooter_Public_ShooterCharacter_h


#define FOREACH_ENUM_ECOMBATSTATE(op) \
	op(ECombatState::ECS_Unoccupied) \
	op(ECombatState::ECS_FireTimerInProgress) \
	op(ECombatState::ECS_Reloading) 

enum class ECombatState : uint8;
template<> struct TIsUEnumClass<ECombatState> { enum { Value = true }; };
template<> THIRDPERSONSHOOTER_API UEnum* StaticEnum<ECombatState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
