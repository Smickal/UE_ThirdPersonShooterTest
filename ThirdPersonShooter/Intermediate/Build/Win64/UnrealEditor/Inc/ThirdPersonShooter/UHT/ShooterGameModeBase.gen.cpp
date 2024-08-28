// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThirdPersonShooter/Public/ShooterGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShooterGameModeBase() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
THIRDPERSONSHOOTER_API UClass* Z_Construct_UClass_AShooterGameModeBase();
THIRDPERSONSHOOTER_API UClass* Z_Construct_UClass_AShooterGameModeBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_ThirdPersonShooter();
// End Cross Module References

// Begin Class AShooterGameModeBase
void AShooterGameModeBase::StaticRegisterNativesAShooterGameModeBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AShooterGameModeBase);
UClass* Z_Construct_UClass_AShooterGameModeBase_NoRegister()
{
	return AShooterGameModeBase::StaticClass();
}
struct Z_Construct_UClass_AShooterGameModeBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "ShooterGameModeBase.h" },
		{ "ModuleRelativePath", "Public/ShooterGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShooterGameModeBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AShooterGameModeBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_ThirdPersonShooter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AShooterGameModeBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AShooterGameModeBase_Statics::ClassParams = {
	&AShooterGameModeBase::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AShooterGameModeBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AShooterGameModeBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AShooterGameModeBase()
{
	if (!Z_Registration_Info_UClass_AShooterGameModeBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AShooterGameModeBase.OuterSingleton, Z_Construct_UClass_AShooterGameModeBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AShooterGameModeBase.OuterSingleton;
}
template<> THIRDPERSONSHOOTER_API UClass* StaticClass<AShooterGameModeBase>()
{
	return AShooterGameModeBase::StaticClass();
}
AShooterGameModeBase::AShooterGameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AShooterGameModeBase);
AShooterGameModeBase::~AShooterGameModeBase() {}
// End Class AShooterGameModeBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_ThirdPersonShooter_Source_ThirdPersonShooter_Public_ShooterGameModeBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AShooterGameModeBase, AShooterGameModeBase::StaticClass, TEXT("AShooterGameModeBase"), &Z_Registration_Info_UClass_AShooterGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AShooterGameModeBase), 3923578417U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ThirdPersonShooter_Source_ThirdPersonShooter_Public_ShooterGameModeBase_h_311768431(TEXT("/Script/ThirdPersonShooter"),
	Z_CompiledInDeferFile_FID_ThirdPersonShooter_Source_ThirdPersonShooter_Public_ShooterGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ThirdPersonShooter_Source_ThirdPersonShooter_Public_ShooterGameModeBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
