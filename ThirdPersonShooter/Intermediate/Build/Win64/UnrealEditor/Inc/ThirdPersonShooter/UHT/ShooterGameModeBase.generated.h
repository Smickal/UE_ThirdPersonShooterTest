// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ShooterGameModeBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef THIRDPERSONSHOOTER_ShooterGameModeBase_generated_h
#error "ShooterGameModeBase.generated.h already included, missing '#pragma once' in ShooterGameModeBase.h"
#endif
#define THIRDPERSONSHOOTER_ShooterGameModeBase_generated_h

#define FID_ThirdPersonShooter_Source_ThirdPersonShooter_Public_ShooterGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAShooterGameModeBase(); \
	friend struct Z_Construct_UClass_AShooterGameModeBase_Statics; \
public: \
	DECLARE_CLASS(AShooterGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/ThirdPersonShooter"), NO_API) \
	DECLARE_SERIALIZER(AShooterGameModeBase)


#define FID_ThirdPersonShooter_Source_ThirdPersonShooter_Public_ShooterGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AShooterGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AShooterGameModeBase(AShooterGameModeBase&&); \
	AShooterGameModeBase(const AShooterGameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShooterGameModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShooterGameModeBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AShooterGameModeBase) \
	NO_API virtual ~AShooterGameModeBase();


#define FID_ThirdPersonShooter_Source_ThirdPersonShooter_Public_ShooterGameModeBase_h_12_PROLOG
#define FID_ThirdPersonShooter_Source_ThirdPersonShooter_Public_ShooterGameModeBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ThirdPersonShooter_Source_ThirdPersonShooter_Public_ShooterGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
	FID_ThirdPersonShooter_Source_ThirdPersonShooter_Public_ShooterGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THIRDPERSONSHOOTER_API UClass* StaticClass<class AShooterGameModeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ThirdPersonShooter_Source_ThirdPersonShooter_Public_ShooterGameModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
