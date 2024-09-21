// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThirdPersonShooter/Public/Ammo.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAmmo() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
THIRDPERSONSHOOTER_API UClass* Z_Construct_UClass_AAmmo();
THIRDPERSONSHOOTER_API UClass* Z_Construct_UClass_AAmmo_NoRegister();
THIRDPERSONSHOOTER_API UClass* Z_Construct_UClass_AItem();
THIRDPERSONSHOOTER_API UEnum* Z_Construct_UEnum_ThirdPersonShooter_EAmmoType();
UPackage* Z_Construct_UPackage__Script_ThirdPersonShooter();
// End Cross Module References

// Begin Class AAmmo Function OnAmmoSphereOverlap
struct Z_Construct_UFunction_AAmmo_OnAmmoSphereOverlap_Statics
{
	struct Ammo_eventOnAmmoSphereOverlap_Parms
	{
		UPrimitiveComponent* OverlappedComponent;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
		bool bFromSweep;
		FHitResult SweepResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Ammo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static void NewProp_bFromSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAmmo_OnAmmoSphereOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Ammo_eventOnAmmoSphereOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComponent_MetaData), NewProp_OverlappedComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAmmo_OnAmmoSphereOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Ammo_eventOnAmmoSphereOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAmmo_OnAmmoSphereOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Ammo_eventOnAmmoSphereOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AAmmo_OnAmmoSphereOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Ammo_eventOnAmmoSphereOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AAmmo_OnAmmoSphereOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((Ammo_eventOnAmmoSphereOverlap_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAmmo_OnAmmoSphereOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Ammo_eventOnAmmoSphereOverlap_Parms), &Z_Construct_UFunction_AAmmo_OnAmmoSphereOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAmmo_OnAmmoSphereOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Ammo_eventOnAmmoSphereOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAmmo_OnAmmoSphereOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAmmo_OnAmmoSphereOverlap_Statics::NewProp_OverlappedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAmmo_OnAmmoSphereOverlap_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAmmo_OnAmmoSphereOverlap_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAmmo_OnAmmoSphereOverlap_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAmmo_OnAmmoSphereOverlap_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAmmo_OnAmmoSphereOverlap_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAmmo_OnAmmoSphereOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAmmo_OnAmmoSphereOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAmmo, nullptr, "OnAmmoSphereOverlap", nullptr, nullptr, Z_Construct_UFunction_AAmmo_OnAmmoSphereOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAmmo_OnAmmoSphereOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAmmo_OnAmmoSphereOverlap_Statics::Ammo_eventOnAmmoSphereOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAmmo_OnAmmoSphereOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAmmo_OnAmmoSphereOverlap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAmmo_OnAmmoSphereOverlap_Statics::Ammo_eventOnAmmoSphereOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAmmo_OnAmmoSphereOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAmmo_OnAmmoSphereOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAmmo::execOnAmmoSphereOverlap)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnAmmoSphereOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// End Class AAmmo Function OnAmmoSphereOverlap

// Begin Class AAmmo
void AAmmo::StaticRegisterNativesAAmmo()
{
	UClass* Class = AAmmo::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnAmmoSphereOverlap", &AAmmo::execOnAmmoSphereOverlap },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAmmo);
UClass* Z_Construct_UClass_AAmmo_NoRegister()
{
	return AAmmo::StaticClass();
}
struct Z_Construct_UClass_AAmmo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Ammo.h" },
		{ "ModuleRelativePath", "Public/Ammo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AmmoMesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Ammo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Mesh For the Ammo PikcUp\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Ammo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mesh For the Ammo PikcUp" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AmmoType_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Ammo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Ammo Type for the Ammo\n" },
#endif
		{ "ModuleRelativePath", "Public/Ammo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Ammo Type for the Ammo" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AmmoIconTexture_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Ammo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//The Ammo Texture for the Icon  \n" },
#endif
		{ "ModuleRelativePath", "Public/Ammo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Ammo Texture for the Icon" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AmmoCollisionSphere_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Ammo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Overlap Sphere for  picking up the ammo\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Ammo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Overlap Sphere for  picking up the ammo" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AmmoMesh;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AmmoType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AmmoType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AmmoIconTexture;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AmmoCollisionSphere;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AAmmo_OnAmmoSphereOverlap, "OnAmmoSphereOverlap" }, // 2602300883
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAmmo>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAmmo_Statics::NewProp_AmmoMesh = { "AmmoMesh", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAmmo, AmmoMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AmmoMesh_MetaData), NewProp_AmmoMesh_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AAmmo_Statics::NewProp_AmmoType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AAmmo_Statics::NewProp_AmmoType = { "AmmoType", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAmmo, AmmoType), Z_Construct_UEnum_ThirdPersonShooter_EAmmoType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AmmoType_MetaData), NewProp_AmmoType_MetaData) }; // 4041452776
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAmmo_Statics::NewProp_AmmoIconTexture = { "AmmoIconTexture", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAmmo, AmmoIconTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AmmoIconTexture_MetaData), NewProp_AmmoIconTexture_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAmmo_Statics::NewProp_AmmoCollisionSphere = { "AmmoCollisionSphere", nullptr, (EPropertyFlags)0x004000000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAmmo, AmmoCollisionSphere), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AmmoCollisionSphere_MetaData), NewProp_AmmoCollisionSphere_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAmmo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAmmo_Statics::NewProp_AmmoMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAmmo_Statics::NewProp_AmmoType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAmmo_Statics::NewProp_AmmoType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAmmo_Statics::NewProp_AmmoIconTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAmmo_Statics::NewProp_AmmoCollisionSphere,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAmmo_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AAmmo_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AItem,
	(UObject* (*)())Z_Construct_UPackage__Script_ThirdPersonShooter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAmmo_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAmmo_Statics::ClassParams = {
	&AAmmo::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AAmmo_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AAmmo_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAmmo_Statics::Class_MetaDataParams), Z_Construct_UClass_AAmmo_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAmmo()
{
	if (!Z_Registration_Info_UClass_AAmmo.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAmmo.OuterSingleton, Z_Construct_UClass_AAmmo_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAmmo.OuterSingleton;
}
template<> THIRDPERSONSHOOTER_API UClass* StaticClass<AAmmo>()
{
	return AAmmo::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAmmo);
AAmmo::~AAmmo() {}
// End Class AAmmo

// Begin Registration
struct Z_CompiledInDeferFile_FID_ThirdPersonShooter_Source_ThirdPersonShooter_Public_Ammo_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAmmo, AAmmo::StaticClass, TEXT("AAmmo"), &Z_Registration_Info_UClass_AAmmo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAmmo), 2407785996U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ThirdPersonShooter_Source_ThirdPersonShooter_Public_Ammo_h_2896085775(TEXT("/Script/ThirdPersonShooter"),
	Z_CompiledInDeferFile_FID_ThirdPersonShooter_Source_ThirdPersonShooter_Public_Ammo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ThirdPersonShooter_Source_ThirdPersonShooter_Public_Ammo_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
