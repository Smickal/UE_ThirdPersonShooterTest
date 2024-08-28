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
UPackage* Z_Construct_UPackage__Script_ThirdPersonShooter();
// End Cross Module References

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
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
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
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ShooterCharacter;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed;
	static void NewProp_bIsinAir_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsinAir;
	static void NewProp_bIsAccelerating_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsAccelerating;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MovementOffsetYaw;
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
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UShooterAnimInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_ShooterCharacter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_Speed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_bIsinAir,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_bIsAccelerating,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_MovementOffsetYaw,
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
UShooterAnimInstance::UShooterAnimInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UShooterAnimInstance);
UShooterAnimInstance::~UShooterAnimInstance() {}
// End Class UShooterAnimInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_ThirdPersonShooter_Source_ThirdPersonShooter_Public_ShooterAnimInstance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UShooterAnimInstance, UShooterAnimInstance::StaticClass, TEXT("UShooterAnimInstance"), &Z_Registration_Info_UClass_UShooterAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UShooterAnimInstance), 3240027127U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ThirdPersonShooter_Source_ThirdPersonShooter_Public_ShooterAnimInstance_h_798400203(TEXT("/Script/ThirdPersonShooter"),
	Z_CompiledInDeferFile_FID_ThirdPersonShooter_Source_ThirdPersonShooter_Public_ShooterAnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ThirdPersonShooter_Source_ThirdPersonShooter_Public_ShooterAnimInstance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
