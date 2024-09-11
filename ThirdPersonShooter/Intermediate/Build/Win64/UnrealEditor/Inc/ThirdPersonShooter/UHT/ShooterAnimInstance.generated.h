// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ShooterAnimInstance.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef THIRDPERSONSHOOTER_ShooterAnimInstance_generated_h
#error "ShooterAnimInstance.generated.h already included, missing '#pragma once' in ShooterAnimInstance.h"
#endif
#define THIRDPERSONSHOOTER_ShooterAnimInstance_generated_h

#define FID_ThirdPersonShooter_Source_ThirdPersonShooter_Public_ShooterAnimInstance_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUpdateAnimationProperties);


#define FID_ThirdPersonShooter_Source_ThirdPersonShooter_Public_ShooterAnimInstance_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUShooterAnimInstance(); \
	friend struct Z_Construct_UClass_UShooterAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UShooterAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ThirdPersonShooter"), NO_API) \
	DECLARE_SERIALIZER(UShooterAnimInstance)


#define FID_ThirdPersonShooter_Source_ThirdPersonShooter_Public_ShooterAnimInstance_h_25_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UShooterAnimInstance(UShooterAnimInstance&&); \
	UShooterAnimInstance(const UShooterAnimInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UShooterAnimInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UShooterAnimInstance); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UShooterAnimInstance) \
	NO_API virtual ~UShooterAnimInstance();


#define FID_ThirdPersonShooter_Source_ThirdPersonShooter_Public_ShooterAnimInstance_h_22_PROLOG
#define FID_ThirdPersonShooter_Source_ThirdPersonShooter_Public_ShooterAnimInstance_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ThirdPersonShooter_Source_ThirdPersonShooter_Public_ShooterAnimInstance_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ThirdPersonShooter_Source_ThirdPersonShooter_Public_ShooterAnimInstance_h_25_INCLASS_NO_PURE_DECLS \
	FID_ThirdPersonShooter_Source_ThirdPersonShooter_Public_ShooterAnimInstance_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THIRDPERSONSHOOTER_API UClass* StaticClass<class UShooterAnimInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ThirdPersonShooter_Source_ThirdPersonShooter_Public_ShooterAnimInstance_h


#define FOREACH_ENUM_EOFFSETSTATE(op) \
	op(EOffsetState::EOS_Aiming) \
	op(EOffsetState::EOS_Hip) \
	op(EOffsetState::EOS_Reloading) \
	op(EOffsetState::EOS_InAir) \
	op(EOffsetState::EOS_Max) 

enum class EOffsetState : uint8;
template<> struct TIsUEnumClass<EOffsetState> { enum { Value = true }; };
template<> THIRDPERSONSHOOTER_API UEnum* StaticEnum<EOffsetState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
