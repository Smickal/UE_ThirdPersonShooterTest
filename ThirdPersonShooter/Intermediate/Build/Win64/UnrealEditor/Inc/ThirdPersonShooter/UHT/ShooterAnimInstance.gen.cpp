// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThirdPersonShooter/Public/ShooterAnimInstance.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShooterAnimInstance() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
THIRDPERSONSHOOTER_API UClass* Z_Construct_UClass_AShooterCharacter_NoRegister();
THIRDPERSONSHOOTER_API UClass* Z_Construct_UClass_UShooterAnimInstance();
THIRDPERSONSHOOTER_API UClass* Z_Construct_UClass_UShooterAnimInstance_NoRegister();
THIRDPERSONSHOOTER_API UEnum* Z_Construct_UEnum_ThirdPersonShooter_EOffsetState();
UPackage* Z_Construct_UPackage__Script_ThirdPersonShooter();
// End Cross Module References

// Begin Enum EOffsetState
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOffsetState;
static UEnum* EOffsetState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOffsetState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOffsetState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ThirdPersonShooter_EOffsetState, (UObject*)Z_Construct_UPackage__Script_ThirdPersonShooter(), TEXT("EOffsetState"));
	}
	return Z_Registration_Info_UEnum_EOffsetState.OuterSingleton;
}
template<> THIRDPERSONSHOOTER_API UEnum* StaticEnum<EOffsetState>()
{
	return EOffsetState_StaticEnum();
}
struct Z_Construct_UEnum_ThirdPersonShooter_EOffsetState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "EOS_Aiming.DisplayName", "Aiming" },
		{ "EOS_Aiming.Name", "EOffsetState::EOS_Aiming" },
		{ "EOS_Hip.DisplayName", "HipAiming" },
		{ "EOS_Hip.Name", "EOffsetState::EOS_Hip" },
		{ "EOS_InAir.DisplayName", "InAir" },
		{ "EOS_InAir.Name", "EOffsetState::EOS_InAir" },
		{ "EOS_Max.DisplayName", "DefaultMAX" },
		{ "EOS_Max.Name", "EOffsetState::EOS_Max" },
		{ "EOS_Reloading.DisplayName", "Reloading" },
		{ "EOS_Reloading.Name", "EOffsetState::EOS_Reloading" },
		{ "ModuleRelativePath", "Public/ShooterAnimInstance.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOffsetState::EOS_Aiming", (int64)EOffsetState::EOS_Aiming },
		{ "EOffsetState::EOS_Hip", (int64)EOffsetState::EOS_Hip },
		{ "EOffsetState::EOS_Reloading", (int64)EOffsetState::EOS_Reloading },
		{ "EOffsetState::EOS_InAir", (int64)EOffsetState::EOS_InAir },
		{ "EOffsetState::EOS_Max", (int64)EOffsetState::EOS_Max },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ThirdPersonShooter_EOffsetState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ThirdPersonShooter,
	nullptr,
	"EOffsetState",
	"EOffsetState",
	Z_Construct_UEnum_ThirdPersonShooter_EOffsetState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ThirdPersonShooter_EOffsetState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ThirdPersonShooter_EOffsetState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ThirdPersonShooter_EOffsetState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ThirdPersonShooter_EOffsetState()
{
	if (!Z_Registration_Info_UEnum_EOffsetState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOffsetState.InnerSingleton, Z_Construct_UEnum_ThirdPersonShooter_EOffsetState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOffsetState.InnerSingleton;
}
// End Enum EOffsetState

// Begin Class UShooterAnimInstance Function UpdateAnimationProperties
struct Z_Construct_UFunction_UShooterAnimInstance_UpdateAnimationProperties_Statics
{
	struct ShooterAnimInstance_eventUpdateAnimationProperties_Parms
	{
		float DeltaTime;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ShooterAnimInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UShooterAnimInstance_UpdateAnimationProperties_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ShooterAnimInstance_eventUpdateAnimationProperties_Parms, DeltaTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UShooterAnimInstance_UpdateAnimationProperties_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShooterAnimInstance_UpdateAnimationProperties_Statics::NewProp_DeltaTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UShooterAnimInstance_UpdateAnimationProperties_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UShooterAnimInstance_UpdateAnimationProperties_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UShooterAnimInstance, nullptr, "UpdateAnimationProperties", nullptr, nullptr, Z_Construct_UFunction_UShooterAnimInstance_UpdateAnimationProperties_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UShooterAnimInstance_UpdateAnimationProperties_Statics::PropPointers), sizeof(Z_Construct_UFunction_UShooterAnimInstance_UpdateAnimationProperties_Statics::ShooterAnimInstance_eventUpdateAnimationProperties_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UShooterAnimInstance_UpdateAnimationProperties_Statics::Function_MetaDataParams), Z_Construct_UFunction_UShooterAnimInstance_UpdateAnimationProperties_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UShooterAnimInstance_UpdateAnimationProperties_Statics::ShooterAnimInstance_eventUpdateAnimationProperties_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UShooterAnimInstance_UpdateAnimationProperties()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UShooterAnimInstance_UpdateAnimationProperties_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UShooterAnimInstance::execUpdateAnimationProperties)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateAnimationProperties(Z_Param_DeltaTime);
	P_NATIVE_END;
}
// End Class UShooterAnimInstance Function UpdateAnimationProperties

// Begin Class UShooterAnimInstance
void UShooterAnimInstance::StaticRegisterNativesUShooterAnimInstance()
{
	UClass* Class = UShooterAnimInstance::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "UpdateAnimationProperties", &UShooterAnimInstance::execUpdateAnimationProperties },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UShooterAnimInstance);
UClass* Z_Construct_UClass_UShooterAnimInstance_NoRegister()
{
	return UShooterAnimInstance::StaticClass();
}
struct Z_Construct_UClass_UShooterAnimInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "ShooterAnimInstance.h" },
		{ "ModuleRelativePath", "Public/ShooterAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShooterCharacter_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/ShooterAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//The Speed of the Character\n" },
#endif
		{ "ModuleRelativePath", "Public/ShooterAnimInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Speed of the Character" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsinAir_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Whether or not the character is in air\n" },
#endif
		{ "ModuleRelativePath", "Public/ShooterAnimInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether or not the character is in air" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsAccelerating_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Wheter or not the character is moving\n" },
#endif
		{ "ModuleRelativePath", "Public/ShooterAnimInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Wheter or not the character is moving" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementOffsetYaw_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Offset yaw for Strafing\n" },
#endif
		{ "ModuleRelativePath", "Public/ShooterAnimInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Offset yaw for Strafing" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastMovementOffsetYaw_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Offset Yaw the frame before we stop moving\n" },
#endif
		{ "ModuleRelativePath", "Public/ShooterAnimInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Offset Yaw the frame before we stop moving" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAiming_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/ShooterAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RootYawOffset_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Turn In Place" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//The offset from the controller yaw to the root bone yaw\n" },
#endif
		{ "ModuleRelativePath", "Public/ShooterAnimInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The offset from the controller yaw to the root bone yaw" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Pitch_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Turn In Place" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//The Pitch of the aim rotation used for aim offset\n" },
#endif
		{ "ModuleRelativePath", "Public/ShooterAnimInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Pitch of the aim rotation used for aim offset" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsReloading_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Turn In Place" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//True when reloading use to prefent aim offset when aiming\n" },
#endif
		{ "ModuleRelativePath", "Public/ShooterAnimInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "True when reloading use to prefent aim offset when aiming" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OffsetState_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Turn In Place" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Offset state, used to determine which aim offset to use\n" },
#endif
		{ "ModuleRelativePath", "Public/ShooterAnimInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Offset state, used to determine which aim offset to use" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_YawDelta_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Lean" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Yaw delta used for leaning in DeltaSpace\n" },
#endif
		{ "ModuleRelativePath", "Public/ShooterAnimInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Yaw delta used for leaning in DeltaSpace" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsCrouching_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Crouching" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//True when character is crouchingo\n" },
#endif
		{ "ModuleRelativePath", "Public/ShooterAnimInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "True when character is crouchingo" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RecoilWeight_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Combat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Change the recoil weight\n" },
#endif
		{ "ModuleRelativePath", "Public/ShooterAnimInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Change the recoil weight" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsTurningInPlace_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Combat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//True when turning in place\n" },
#endif
		{ "ModuleRelativePath", "Public/ShooterAnimInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "True when turning in place" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ShooterCharacter;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed;
	static void NewProp_bIsinAir_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsinAir;
	static void NewProp_bIsAccelerating_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsAccelerating;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MovementOffsetYaw;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LastMovementOffsetYaw;
	static void NewProp_bAiming_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAiming;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RootYawOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Pitch;
	static void NewProp_bIsReloading_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsReloading;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OffsetState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OffsetState;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_YawDelta;
	static void NewProp_bIsCrouching_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCrouching;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RecoilWeight;
	static void NewProp_bIsTurningInPlace_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsTurningInPlace;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UShooterAnimInstance_UpdateAnimationProperties, "UpdateAnimationProperties" }, // 751706630
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UShooterAnimInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_ShooterCharacter = { "ShooterCharacter", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UShooterAnimInstance, ShooterCharacter), Z_Construct_UClass_AShooterCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShooterCharacter_MetaData), NewProp_ShooterCharacter_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UShooterAnimInstance, Speed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Speed_MetaData), NewProp_Speed_MetaData) };
void Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_bIsinAir_SetBit(void* Obj)
{
	((UShooterAnimInstance*)Obj)->bIsinAir = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_bIsinAir = { "bIsinAir", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UShooterAnimInstance), &Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_bIsinAir_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsinAir_MetaData), NewProp_bIsinAir_MetaData) };
void Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_bIsAccelerating_SetBit(void* Obj)
{
	((UShooterAnimInstance*)Obj)->bIsAccelerating = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_bIsAccelerating = { "bIsAccelerating", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UShooterAnimInstance), &Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_bIsAccelerating_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsAccelerating_MetaData), NewProp_bIsAccelerating_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_MovementOffsetYaw = { "MovementOffsetYaw", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UShooterAnimInstance, MovementOffsetYaw), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementOffsetYaw_MetaData), NewProp_MovementOffsetYaw_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_LastMovementOffsetYaw = { "LastMovementOffsetYaw", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UShooterAnimInstance, LastMovementOffsetYaw), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastMovementOffsetYaw_MetaData), NewProp_LastMovementOffsetYaw_MetaData) };
void Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_bAiming_SetBit(void* Obj)
{
	((UShooterAnimInstance*)Obj)->bAiming = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_bAiming = { "bAiming", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UShooterAnimInstance), &Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_bAiming_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAiming_MetaData), NewProp_bAiming_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_RootYawOffset = { "RootYawOffset", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UShooterAnimInstance, RootYawOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RootYawOffset_MetaData), NewProp_RootYawOffset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_Pitch = { "Pitch", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UShooterAnimInstance, Pitch), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Pitch_MetaData), NewProp_Pitch_MetaData) };
void Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_bIsReloading_SetBit(void* Obj)
{
	((UShooterAnimInstance*)Obj)->bIsReloading = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_bIsReloading = { "bIsReloading", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UShooterAnimInstance), &Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_bIsReloading_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsReloading_MetaData), NewProp_bIsReloading_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_OffsetState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_OffsetState = { "OffsetState", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UShooterAnimInstance, OffsetState), Z_Construct_UEnum_ThirdPersonShooter_EOffsetState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OffsetState_MetaData), NewProp_OffsetState_MetaData) }; // 1439190398
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_YawDelta = { "YawDelta", nullptr, (EPropertyFlags)0x0040000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UShooterAnimInstance, YawDelta), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_YawDelta_MetaData), NewProp_YawDelta_MetaData) };
void Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_bIsCrouching_SetBit(void* Obj)
{
	((UShooterAnimInstance*)Obj)->bIsCrouching = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_bIsCrouching = { "bIsCrouching", nullptr, (EPropertyFlags)0x0040000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UShooterAnimInstance), &Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_bIsCrouching_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsCrouching_MetaData), NewProp_bIsCrouching_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_RecoilWeight = { "RecoilWeight", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UShooterAnimInstance, RecoilWeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RecoilWeight_MetaData), NewProp_RecoilWeight_MetaData) };
void Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_bIsTurningInPlace_SetBit(void* Obj)
{
	((UShooterAnimInstance*)Obj)->bIsTurningInPlace = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_bIsTurningInPlace = { "bIsTurningInPlace", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UShooterAnimInstance), &Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_bIsTurningInPlace_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsTurningInPlace_MetaData), NewProp_bIsTurningInPlace_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UShooterAnimInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_ShooterCharacter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_Speed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_bIsinAir,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_bIsAccelerating,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_MovementOffsetYaw,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_LastMovementOffsetYaw,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_bAiming,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_RootYawOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_Pitch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_bIsReloading,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_OffsetState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_OffsetState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_YawDelta,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_bIsCrouching,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_RecoilWeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_bIsTurningInPlace,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UShooterAnimInstance_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UShooterAnimInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_ThirdPersonShooter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UShooterAnimInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UShooterAnimInstance_Statics::ClassParams = {
	&UShooterAnimInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UShooterAnimInstance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UShooterAnimInstance_Statics::PropPointers),
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UShooterAnimInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UShooterAnimInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UShooterAnimInstance()
{
	if (!Z_Registration_Info_UClass_UShooterAnimInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UShooterAnimInstance.OuterSingleton, Z_Construct_UClass_UShooterAnimInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UShooterAnimInstance.OuterSingleton;
}
template<> THIRDPERSONSHOOTER_API UClass* StaticClass<UShooterAnimInstance>()
{
	return UShooterAnimInstance::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UShooterAnimInstance);
UShooterAnimInstance::~UShooterAnimInstance() {}
// End Class UShooterAnimInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_ThirdPersonShooter_Source_ThirdPersonShooter_Public_ShooterAnimInstance_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EOffsetState_StaticEnum, TEXT("EOffsetState"), &Z_Registration_Info_UEnum_EOffsetState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1439190398U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UShooterAnimInstance, UShooterAnimInstance::StaticClass, TEXT("UShooterAnimInstance"), &Z_Registration_Info_UClass_UShooterAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UShooterAnimInstance), 1870737824U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ThirdPersonShooter_Source_ThirdPersonShooter_Public_ShooterAnimInstance_h_1417024483(TEXT("/Script/ThirdPersonShooter"),
	Z_CompiledInDeferFile_FID_ThirdPersonShooter_Source_ThirdPersonShooter_Public_ShooterAnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ThirdPersonShooter_Source_ThirdPersonShooter_Public_ShooterAnimInstance_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_ThirdPersonShooter_Source_ThirdPersonShooter_Public_ShooterAnimInstance_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ThirdPersonShooter_Source_ThirdPersonShooter_Public_ShooterAnimInstance_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
