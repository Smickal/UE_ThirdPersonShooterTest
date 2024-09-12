// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThirdPersonShooter/Public/ShooterCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShooterCharacter() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
THIRDPERSONSHOOTER_API UClass* Z_Construct_UClass_AItem_NoRegister();
THIRDPERSONSHOOTER_API UClass* Z_Construct_UClass_AShooterCharacter();
THIRDPERSONSHOOTER_API UClass* Z_Construct_UClass_AShooterCharacter_NoRegister();
THIRDPERSONSHOOTER_API UClass* Z_Construct_UClass_AWeapon_NoRegister();
THIRDPERSONSHOOTER_API UEnum* Z_Construct_UEnum_ThirdPersonShooter_EAmmoType();
THIRDPERSONSHOOTER_API UEnum* Z_Construct_UEnum_ThirdPersonShooter_ECombatState();
UPackage* Z_Construct_UPackage__Script_ThirdPersonShooter();
// End Cross Module References

// Begin Enum ECombatState
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECombatState;
static UEnum* ECombatState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECombatState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECombatState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ThirdPersonShooter_ECombatState, (UObject*)Z_Construct_UPackage__Script_ThirdPersonShooter(), TEXT("ECombatState"));
	}
	return Z_Registration_Info_UEnum_ECombatState.OuterSingleton;
}
template<> THIRDPERSONSHOOTER_API UEnum* StaticEnum<ECombatState>()
{
	return ECombatState_StaticEnum();
}
struct Z_Construct_UEnum_ThirdPersonShooter_ECombatState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ECS_FireTimerInProgress.DisplayName", "FireTimerInProgress" },
		{ "ECS_FireTimerInProgress.Name", "ECombatState::ECS_FireTimerInProgress" },
		{ "ECS_MAX.DisplayName", "DefaultMAX" },
		{ "ECS_MAX.Name", "ECombatState::ECS_MAX" },
		{ "ECS_Reloading.DisplayName", "Reloadings" },
		{ "ECS_Reloading.Name", "ECombatState::ECS_Reloading" },
		{ "ECS_Unoccupied.DisplayName", "Unoccupied" },
		{ "ECS_Unoccupied.Name", "ECombatState::ECS_Unoccupied" },
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECombatState::ECS_Unoccupied", (int64)ECombatState::ECS_Unoccupied },
		{ "ECombatState::ECS_FireTimerInProgress", (int64)ECombatState::ECS_FireTimerInProgress },
		{ "ECombatState::ECS_Reloading", (int64)ECombatState::ECS_Reloading },
		{ "ECombatState::ECS_MAX", (int64)ECombatState::ECS_MAX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ThirdPersonShooter_ECombatState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ThirdPersonShooter,
	nullptr,
	"ECombatState",
	"ECombatState",
	Z_Construct_UEnum_ThirdPersonShooter_ECombatState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ThirdPersonShooter_ECombatState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ThirdPersonShooter_ECombatState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ThirdPersonShooter_ECombatState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ThirdPersonShooter_ECombatState()
{
	if (!Z_Registration_Info_UEnum_ECombatState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECombatState.InnerSingleton, Z_Construct_UEnum_ThirdPersonShooter_ECombatState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECombatState.InnerSingleton;
}
// End Enum ECombatState

// Begin Class AShooterCharacter Function AutoFireReset
struct Z_Construct_UFunction_AShooterCharacter_AutoFireReset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AShooterCharacter_AutoFireReset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShooterCharacter, nullptr, "AutoFireReset", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterCharacter_AutoFireReset_Statics::Function_MetaDataParams), Z_Construct_UFunction_AShooterCharacter_AutoFireReset_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AShooterCharacter_AutoFireReset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AShooterCharacter_AutoFireReset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AShooterCharacter::execAutoFireReset)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AutoFireReset();
	P_NATIVE_END;
}
// End Class AShooterCharacter Function AutoFireReset

// Begin Class AShooterCharacter Function FinishCrosshairBulletFire
struct Z_Construct_UFunction_AShooterCharacter_FinishCrosshairBulletFire_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AShooterCharacter_FinishCrosshairBulletFire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShooterCharacter, nullptr, "FinishCrosshairBulletFire", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterCharacter_FinishCrosshairBulletFire_Statics::Function_MetaDataParams), Z_Construct_UFunction_AShooterCharacter_FinishCrosshairBulletFire_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AShooterCharacter_FinishCrosshairBulletFire()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AShooterCharacter_FinishCrosshairBulletFire_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AShooterCharacter::execFinishCrosshairBulletFire)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FinishCrosshairBulletFire();
	P_NATIVE_END;
}
// End Class AShooterCharacter Function FinishCrosshairBulletFire

// Begin Class AShooterCharacter Function FinishReloading
struct Z_Construct_UFunction_AShooterCharacter_FinishReloading_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AShooterCharacter_FinishReloading_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShooterCharacter, nullptr, "FinishReloading", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterCharacter_FinishReloading_Statics::Function_MetaDataParams), Z_Construct_UFunction_AShooterCharacter_FinishReloading_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AShooterCharacter_FinishReloading()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AShooterCharacter_FinishReloading_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AShooterCharacter::execFinishReloading)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FinishReloading();
	P_NATIVE_END;
}
// End Class AShooterCharacter Function FinishReloading

// Begin Class AShooterCharacter Function GetCrosshairSpreadMulitplier
struct Z_Construct_UFunction_AShooterCharacter_GetCrosshairSpreadMulitplier_Statics
{
	struct ShooterCharacter_eventGetCrosshairSpreadMulitplier_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AShooterCharacter_GetCrosshairSpreadMulitplier_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ShooterCharacter_eventGetCrosshairSpreadMulitplier_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AShooterCharacter_GetCrosshairSpreadMulitplier_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShooterCharacter_GetCrosshairSpreadMulitplier_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterCharacter_GetCrosshairSpreadMulitplier_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AShooterCharacter_GetCrosshairSpreadMulitplier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShooterCharacter, nullptr, "GetCrosshairSpreadMulitplier", nullptr, nullptr, Z_Construct_UFunction_AShooterCharacter_GetCrosshairSpreadMulitplier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterCharacter_GetCrosshairSpreadMulitplier_Statics::PropPointers), sizeof(Z_Construct_UFunction_AShooterCharacter_GetCrosshairSpreadMulitplier_Statics::ShooterCharacter_eventGetCrosshairSpreadMulitplier_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterCharacter_GetCrosshairSpreadMulitplier_Statics::Function_MetaDataParams), Z_Construct_UFunction_AShooterCharacter_GetCrosshairSpreadMulitplier_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AShooterCharacter_GetCrosshairSpreadMulitplier_Statics::ShooterCharacter_eventGetCrosshairSpreadMulitplier_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AShooterCharacter_GetCrosshairSpreadMulitplier()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AShooterCharacter_GetCrosshairSpreadMulitplier_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AShooterCharacter::execGetCrosshairSpreadMulitplier)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetCrosshairSpreadMulitplier();
	P_NATIVE_END;
}
// End Class AShooterCharacter Function GetCrosshairSpreadMulitplier

// Begin Class AShooterCharacter Function GrabClip
struct Z_Construct_UFunction_AShooterCharacter_GrabClip_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Called  From AnimatioBlueprint  with GrabClip Notifier\n" },
#endif
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called  From AnimatioBlueprint  with GrabClip Notifier" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AShooterCharacter_GrabClip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShooterCharacter, nullptr, "GrabClip", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterCharacter_GrabClip_Statics::Function_MetaDataParams), Z_Construct_UFunction_AShooterCharacter_GrabClip_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AShooterCharacter_GrabClip()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AShooterCharacter_GrabClip_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AShooterCharacter::execGrabClip)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GrabClip();
	P_NATIVE_END;
}
// End Class AShooterCharacter Function GrabClip

// Begin Class AShooterCharacter Function ReleaseClip
struct Z_Construct_UFunction_AShooterCharacter_ReleaseClip_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Called from AnimationBlueprint with releaseClip Notifier\n" },
#endif
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called from AnimationBlueprint with releaseClip Notifier" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AShooterCharacter_ReleaseClip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShooterCharacter, nullptr, "ReleaseClip", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterCharacter_ReleaseClip_Statics::Function_MetaDataParams), Z_Construct_UFunction_AShooterCharacter_ReleaseClip_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AShooterCharacter_ReleaseClip()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AShooterCharacter_ReleaseClip_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AShooterCharacter::execReleaseClip)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ReleaseClip();
	P_NATIVE_END;
}
// End Class AShooterCharacter Function ReleaseClip

// Begin Class AShooterCharacter
void AShooterCharacter::StaticRegisterNativesAShooterCharacter()
{
	UClass* Class = AShooterCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AutoFireReset", &AShooterCharacter::execAutoFireReset },
		{ "FinishCrosshairBulletFire", &AShooterCharacter::execFinishCrosshairBulletFire },
		{ "FinishReloading", &AShooterCharacter::execFinishReloading },
		{ "GetCrosshairSpreadMulitplier", &AShooterCharacter::execGetCrosshairSpreadMulitplier },
		{ "GrabClip", &AShooterCharacter::execGrabClip },
		{ "ReleaseClip", &AShooterCharacter::execReleaseClip },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AShooterCharacter);
UClass* Z_Construct_UClass_AShooterCharacter_NoRegister()
{
	return AShooterCharacter::StaticClass();
}
struct Z_Construct_UClass_AShooterCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "ShooterCharacter.h" },
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Camera Boom Positioning Camera Behind the character\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera Boom Positioning Camera Behind the character" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Camera that follows the character\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera that follows the character" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseTurnRate_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Base turn rate,  in deg/.sec, other scaling may affect final turn rate\n" },
#endif
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Base turn rate,  in deg/.sec, other scaling may affect final turn rate" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseLookUpRate_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Base LookUp/Down rate, in deg/sec, other scaling may affect final turn rate\n" },
#endif
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Base LookUp/Down rate, in deg/sec, other scaling may affect final turn rate" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HipTurnRate_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Turn Rate while not aiming\n" },
#endif
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Turn Rate while not aiming" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HipLookUpRate_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//LookUp Rate While not Aiming \n" },
#endif
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "LookUp Rate While not Aiming" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AimingTurnRate_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Turn Rate When Aiming\n" },
#endif
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Turn Rate When Aiming" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AimingLookUpRate_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//LookUp Rate when Aiming \n" },
#endif
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "LookUp Rate when Aiming" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MouseHipTurnRate_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Scale Factor for mouse look sensitivity, Turn Rate when not aiming\n" },
#endif
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Scale Factor for mouse look sensitivity, Turn Rate when not aiming" },
#endif
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MouseHipLookUpRate_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Scale Factor for mouse look sensitivity, Look up when not aiming\n" },
#endif
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Scale Factor for mouse look sensitivity, Look up when not aiming" },
#endif
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MouseAimingTurnRate_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Scale Factor for mouse look sensitivity, Turn Rate when aiming\n" },
#endif
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Scale Factor for mouse look sensitivity, Turn Rate when aiming" },
#endif
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MouseAimingLookUpRate_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Scale Factor for mouse look sensitivity, LookUp when aiming\n" },
#endif
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Scale Factor for mouse look sensitivity, LookUp when aiming" },
#endif
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FireSound_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Combat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Randomize gunshot sound cue\n" },
#endif
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Randomize gunshot sound cue" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MuzzleFlash_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Combat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Flash spawned at BarrelSocket\n" },
#endif
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Flash spawned at BarrelSocket" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HipFireMontage_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Combat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Montage For Firing Wep\n" },
#endif
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Montage For Firing Wep" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImpactParticle_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Combat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Particles Spawn Upon Bullet Impact\n" },
#endif
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Particles Spawn Upon Bullet Impact" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BeamParticle_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Combat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Particle SmokeTrail for the bullets\n" },
#endif
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Particle SmokeTrail for the bullets" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAiming_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Combat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//True when aiming, False when not\n" },
#endif
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "True when aiming, False when not" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ZoomInterpSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Combat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Interp Speed for zooming when  aiming\n" },
#endif
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Interp Speed for zooming when  aiming" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CrosshairSpreadMultiplier_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Crosshairs" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Determines the spread of the crosshair\n" },
#endif
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Determines the spread of the crosshair" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CrosshairVelocityFactor_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Crosshairs" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Velocity Component for the crosshairSpread\n" },
#endif
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Velocity Component for the crosshairSpread" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CrosshairInAirFactor_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Crosshairs" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//inAir Component  for the CrosshairSpread\n" },
#endif
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "inAir Component  for the CrosshairSpread" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CrosshairAimFactor_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Crosshairs" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//AimFactor Component for the CrosshairSpread\n" },
#endif
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "AimFactor Component for the CrosshairSpread" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CrosshairShootingFactor_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Crosshairs" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//ShootingFactor Component for the crosshairspread\n" },
#endif
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ShootingFactor Component for the crosshairspread" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviousTraceHitItem_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Items" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//The  AItem that was hit last frame\n" },
#endif
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The  AItem that was hit last frame" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EquippedWeapon_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Combat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Currently Equipped Weapon\n" },
#endif
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Currently Equipped Weapon" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultWeaponClass_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Combat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Set This in Blueprint for the default weapon class\n" },
#endif
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set This in Blueprint for the default weapon class" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraceHitItem_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Combat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//The Item Currently Hit by our Trace in TraceForItem(\"COULD BE NULL!\")\n" },
#endif
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Item Currently Hit by our Trace in TraceForItem(\"COULD BE NULL!\")" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraInterpDistance_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Items" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Distance Outward From the Camera for the Interp Destination\n" },
#endif
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Distance Outward From the Camera for the Interp Destination" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraInterpElevation_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Items" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Distance Upward from the camera for the interpDestination\n" },
#endif
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Distance Upward from the camera for the interpDestination" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AmmoMap_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Items" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Map to keep track of ammo of  the different ammo types\n" },
#endif
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Map to keep track of ammo of  the different ammo types" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Starting9mmAmmo_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Items" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Starting amount of 9mm Ammo\n" },
#endif
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Starting amount of 9mm Ammo" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartingARAmmo_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Items" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Starting amount of AR Ammo\n" },
#endif
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Starting amount of AR Ammo" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CombatState_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Combat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Combat State, can only Fire/Reload when Un-Occupied state\n" },
#endif
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Combat State, can only Fire/Reload when Un-Occupied state" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReloadMontage_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Combat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Reload Montage for ReloadingAnimation\n" },
#endif
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Reload Montage for ReloadingAnimation" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClipTransform_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Combat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//The Transform of the clip when the  character grab the clip during reloading\n" },
#endif
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Transform of the clip when the  character grab the clip during reloading" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HandSceneComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Combat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Scene Component to attach to the character  name during reloading\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Scene Component to attach to the character  name during reloading" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsCrouching_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//True when Crouching\n" },
#endif
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "True when Crouching" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseMovementSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Regular Movement Speed\n" },
#endif
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Regular Movement Speed" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CrouchMovementSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Crouch Movement Speed \n" },
#endif
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Crouch Movement Speed" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StandingCapsuleHalfHeight_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Half height of the capsule when standing\n" },
#endif
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Half height of the capsule when standing" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CrouchingCapsuleHalfHeight_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Halg height og the capsule when crouching\n" },
#endif
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Halg height og the capsule when crouching" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseGroundFriction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Ground friction when While Standing\n" },
#endif
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Ground friction when While Standing" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CrouchingGroundFriction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Ground Friction  when Crouching\n" },
#endif
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Ground Friction  when Crouching" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseTurnRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseLookUpRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HipTurnRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HipLookUpRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AimingTurnRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AimingLookUpRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MouseHipTurnRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MouseHipLookUpRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MouseAimingTurnRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MouseAimingLookUpRate;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FireSound;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MuzzleFlash;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HipFireMontage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ImpactParticle;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BeamParticle;
	static void NewProp_bAiming_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAiming;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ZoomInterpSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CrosshairSpreadMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CrosshairVelocityFactor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CrosshairInAirFactor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CrosshairAimFactor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CrosshairShootingFactor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PreviousTraceHitItem;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EquippedWeapon;
	static const UECodeGen_Private::FClassPropertyParams NewProp_DefaultWeaponClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TraceHitItem;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CameraInterpDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CameraInterpElevation;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AmmoMap_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AmmoMap_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AmmoMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_AmmoMap;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Starting9mmAmmo;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StartingARAmmo;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CombatState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CombatState;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReloadMontage;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ClipTransform;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HandSceneComponent;
	static void NewProp_bIsCrouching_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCrouching;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseMovementSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CrouchMovementSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StandingCapsuleHalfHeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CrouchingCapsuleHalfHeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseGroundFriction;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CrouchingGroundFriction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AShooterCharacter_AutoFireReset, "AutoFireReset" }, // 3918113756
		{ &Z_Construct_UFunction_AShooterCharacter_FinishCrosshairBulletFire, "FinishCrosshairBulletFire" }, // 978334796
		{ &Z_Construct_UFunction_AShooterCharacter_FinishReloading, "FinishReloading" }, // 1810500599
		{ &Z_Construct_UFunction_AShooterCharacter_GetCrosshairSpreadMulitplier, "GetCrosshairSpreadMulitplier" }, // 3593035295
		{ &Z_Construct_UFunction_AShooterCharacter_GrabClip, "GrabClip" }, // 1279422154
		{ &Z_Construct_UFunction_AShooterCharacter_ReleaseClip, "ReleaseClip" }, // 2085882893
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShooterCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraBoom_MetaData), NewProp_CameraBoom_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterCharacter, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FollowCamera_MetaData), NewProp_FollowCamera_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_BaseTurnRate = { "BaseTurnRate", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterCharacter, BaseTurnRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseTurnRate_MetaData), NewProp_BaseTurnRate_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_BaseLookUpRate = { "BaseLookUpRate", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterCharacter, BaseLookUpRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseLookUpRate_MetaData), NewProp_BaseLookUpRate_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_HipTurnRate = { "HipTurnRate", nullptr, (EPropertyFlags)0x0040000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterCharacter, HipTurnRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HipTurnRate_MetaData), NewProp_HipTurnRate_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_HipLookUpRate = { "HipLookUpRate", nullptr, (EPropertyFlags)0x0040000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterCharacter, HipLookUpRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HipLookUpRate_MetaData), NewProp_HipLookUpRate_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_AimingTurnRate = { "AimingTurnRate", nullptr, (EPropertyFlags)0x0040000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterCharacter, AimingTurnRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AimingTurnRate_MetaData), NewProp_AimingTurnRate_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_AimingLookUpRate = { "AimingLookUpRate", nullptr, (EPropertyFlags)0x0040000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterCharacter, AimingLookUpRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AimingLookUpRate_MetaData), NewProp_AimingLookUpRate_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_MouseHipTurnRate = { "MouseHipTurnRate", nullptr, (EPropertyFlags)0x0040000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterCharacter, MouseHipTurnRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MouseHipTurnRate_MetaData), NewProp_MouseHipTurnRate_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_MouseHipLookUpRate = { "MouseHipLookUpRate", nullptr, (EPropertyFlags)0x0040000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterCharacter, MouseHipLookUpRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MouseHipLookUpRate_MetaData), NewProp_MouseHipLookUpRate_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_MouseAimingTurnRate = { "MouseAimingTurnRate", nullptr, (EPropertyFlags)0x0040000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterCharacter, MouseAimingTurnRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MouseAimingTurnRate_MetaData), NewProp_MouseAimingTurnRate_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_MouseAimingLookUpRate = { "MouseAimingLookUpRate", nullptr, (EPropertyFlags)0x0040000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterCharacter, MouseAimingLookUpRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MouseAimingLookUpRate_MetaData), NewProp_MouseAimingLookUpRate_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_FireSound = { "FireSound", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterCharacter, FireSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FireSound_MetaData), NewProp_FireSound_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_MuzzleFlash = { "MuzzleFlash", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterCharacter, MuzzleFlash), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MuzzleFlash_MetaData), NewProp_MuzzleFlash_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_HipFireMontage = { "HipFireMontage", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterCharacter, HipFireMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HipFireMontage_MetaData), NewProp_HipFireMontage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_ImpactParticle = { "ImpactParticle", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterCharacter, ImpactParticle), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImpactParticle_MetaData), NewProp_ImpactParticle_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_BeamParticle = { "BeamParticle", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterCharacter, BeamParticle), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BeamParticle_MetaData), NewProp_BeamParticle_MetaData) };
void Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bAiming_SetBit(void* Obj)
{
	((AShooterCharacter*)Obj)->bAiming = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bAiming = { "bAiming", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AShooterCharacter), &Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bAiming_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAiming_MetaData), NewProp_bAiming_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_ZoomInterpSpeed = { "ZoomInterpSpeed", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterCharacter, ZoomInterpSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZoomInterpSpeed_MetaData), NewProp_ZoomInterpSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_CrosshairSpreadMultiplier = { "CrosshairSpreadMultiplier", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterCharacter, CrosshairSpreadMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CrosshairSpreadMultiplier_MetaData), NewProp_CrosshairSpreadMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_CrosshairVelocityFactor = { "CrosshairVelocityFactor", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterCharacter, CrosshairVelocityFactor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CrosshairVelocityFactor_MetaData), NewProp_CrosshairVelocityFactor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_CrosshairInAirFactor = { "CrosshairInAirFactor", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterCharacter, CrosshairInAirFactor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CrosshairInAirFactor_MetaData), NewProp_CrosshairInAirFactor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_CrosshairAimFactor = { "CrosshairAimFactor", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterCharacter, CrosshairAimFactor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CrosshairAimFactor_MetaData), NewProp_CrosshairAimFactor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_CrosshairShootingFactor = { "CrosshairShootingFactor", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterCharacter, CrosshairShootingFactor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CrosshairShootingFactor_MetaData), NewProp_CrosshairShootingFactor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_PreviousTraceHitItem = { "PreviousTraceHitItem", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterCharacter, PreviousTraceHitItem), Z_Construct_UClass_AItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviousTraceHitItem_MetaData), NewProp_PreviousTraceHitItem_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_EquippedWeapon = { "EquippedWeapon", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterCharacter, EquippedWeapon), Z_Construct_UClass_AWeapon_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EquippedWeapon_MetaData), NewProp_EquippedWeapon_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_DefaultWeaponClass = { "DefaultWeaponClass", nullptr, (EPropertyFlags)0x0044000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterCharacter, DefaultWeaponClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AWeapon_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultWeaponClass_MetaData), NewProp_DefaultWeaponClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_TraceHitItem = { "TraceHitItem", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterCharacter, TraceHitItem), Z_Construct_UClass_AItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraceHitItem_MetaData), NewProp_TraceHitItem_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_CameraInterpDistance = { "CameraInterpDistance", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterCharacter, CameraInterpDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraInterpDistance_MetaData), NewProp_CameraInterpDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_CameraInterpElevation = { "CameraInterpElevation", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterCharacter, CameraInterpElevation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraInterpElevation_MetaData), NewProp_CameraInterpElevation_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_AmmoMap_ValueProp = { "AmmoMap", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_AmmoMap_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_AmmoMap_Key_KeyProp = { "AmmoMap_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_ThirdPersonShooter_EAmmoType, METADATA_PARAMS(0, nullptr) }; // 4041452776
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_AmmoMap = { "AmmoMap", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterCharacter, AmmoMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AmmoMap_MetaData), NewProp_AmmoMap_MetaData) }; // 4041452776
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_Starting9mmAmmo = { "Starting9mmAmmo", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterCharacter, Starting9mmAmmo), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Starting9mmAmmo_MetaData), NewProp_Starting9mmAmmo_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_StartingARAmmo = { "StartingARAmmo", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterCharacter, StartingARAmmo), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartingARAmmo_MetaData), NewProp_StartingARAmmo_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_CombatState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_CombatState = { "CombatState", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterCharacter, CombatState), Z_Construct_UEnum_ThirdPersonShooter_ECombatState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CombatState_MetaData), NewProp_CombatState_MetaData) }; // 3002227212
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_ReloadMontage = { "ReloadMontage", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterCharacter, ReloadMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReloadMontage_MetaData), NewProp_ReloadMontage_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_ClipTransform = { "ClipTransform", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterCharacter, ClipTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClipTransform_MetaData), NewProp_ClipTransform_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_HandSceneComponent = { "HandSceneComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterCharacter, HandSceneComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HandSceneComponent_MetaData), NewProp_HandSceneComponent_MetaData) };
void Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bIsCrouching_SetBit(void* Obj)
{
	((AShooterCharacter*)Obj)->bIsCrouching = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bIsCrouching = { "bIsCrouching", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AShooterCharacter), &Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bIsCrouching_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsCrouching_MetaData), NewProp_bIsCrouching_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_BaseMovementSpeed = { "BaseMovementSpeed", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterCharacter, BaseMovementSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseMovementSpeed_MetaData), NewProp_BaseMovementSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_CrouchMovementSpeed = { "CrouchMovementSpeed", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterCharacter, CrouchMovementSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CrouchMovementSpeed_MetaData), NewProp_CrouchMovementSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_StandingCapsuleHalfHeight = { "StandingCapsuleHalfHeight", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterCharacter, StandingCapsuleHalfHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StandingCapsuleHalfHeight_MetaData), NewProp_StandingCapsuleHalfHeight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_CrouchingCapsuleHalfHeight = { "CrouchingCapsuleHalfHeight", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterCharacter, CrouchingCapsuleHalfHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CrouchingCapsuleHalfHeight_MetaData), NewProp_CrouchingCapsuleHalfHeight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_BaseGroundFriction = { "BaseGroundFriction", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterCharacter, BaseGroundFriction), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseGroundFriction_MetaData), NewProp_BaseGroundFriction_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_CrouchingGroundFriction = { "CrouchingGroundFriction", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterCharacter, CrouchingGroundFriction), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CrouchingGroundFriction_MetaData), NewProp_CrouchingGroundFriction_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AShooterCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_CameraBoom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_FollowCamera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_BaseTurnRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_BaseLookUpRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_HipTurnRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_HipLookUpRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_AimingTurnRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_AimingLookUpRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_MouseHipTurnRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_MouseHipLookUpRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_MouseAimingTurnRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_MouseAimingLookUpRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_FireSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_MuzzleFlash,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_HipFireMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_ImpactParticle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_BeamParticle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bAiming,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_ZoomInterpSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_CrosshairSpreadMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_CrosshairVelocityFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_CrosshairInAirFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_CrosshairAimFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_CrosshairShootingFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_PreviousTraceHitItem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_EquippedWeapon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_DefaultWeaponClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_TraceHitItem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_CameraInterpDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_CameraInterpElevation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_AmmoMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_AmmoMap_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_AmmoMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_AmmoMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_Starting9mmAmmo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_StartingARAmmo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_CombatState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_CombatState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_ReloadMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_ClipTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_HandSceneComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bIsCrouching,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_BaseMovementSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_CrouchMovementSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_StandingCapsuleHalfHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_CrouchingCapsuleHalfHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_BaseGroundFriction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_CrouchingGroundFriction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AShooterCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_ThirdPersonShooter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AShooterCharacter_Statics::ClassParams = {
	&AShooterCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AShooterCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AShooterCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AShooterCharacter()
{
	if (!Z_Registration_Info_UClass_AShooterCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AShooterCharacter.OuterSingleton, Z_Construct_UClass_AShooterCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AShooterCharacter.OuterSingleton;
}
template<> THIRDPERSONSHOOTER_API UClass* StaticClass<AShooterCharacter>()
{
	return AShooterCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AShooterCharacter);
AShooterCharacter::~AShooterCharacter() {}
// End Class AShooterCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_ThirdPersonShooter_Source_ThirdPersonShooter_Public_ShooterCharacter_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ECombatState_StaticEnum, TEXT("ECombatState"), &Z_Registration_Info_UEnum_ECombatState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3002227212U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AShooterCharacter, AShooterCharacter::StaticClass, TEXT("AShooterCharacter"), &Z_Registration_Info_UClass_AShooterCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AShooterCharacter), 4121771538U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ThirdPersonShooter_Source_ThirdPersonShooter_Public_ShooterCharacter_h_510637373(TEXT("/Script/ThirdPersonShooter"),
	Z_CompiledInDeferFile_FID_ThirdPersonShooter_Source_ThirdPersonShooter_Public_ShooterCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ThirdPersonShooter_Source_ThirdPersonShooter_Public_ShooterCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_ThirdPersonShooter_Source_ThirdPersonShooter_Public_ShooterCharacter_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ThirdPersonShooter_Source_ThirdPersonShooter_Public_ShooterCharacter_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
