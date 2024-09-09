// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThirdPersonShooter/Public/AmmoType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAmmoType() {}

// Begin Cross Module References
THIRDPERSONSHOOTER_API UEnum* Z_Construct_UEnum_ThirdPersonShooter_EAmmoType();
UPackage* Z_Construct_UPackage__Script_ThirdPersonShooter();
// End Cross Module References

// Begin Enum EAmmoType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAmmoType;
static UEnum* EAmmoType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAmmoType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAmmoType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ThirdPersonShooter_EAmmoType, (UObject*)Z_Construct_UPackage__Script_ThirdPersonShooter(), TEXT("EAmmoType"));
	}
	return Z_Registration_Info_UEnum_EAmmoType.OuterSingleton;
}
template<> THIRDPERSONSHOOTER_API UEnum* StaticEnum<EAmmoType>()
{
	return EAmmoType_StaticEnum();
}
struct Z_Construct_UEnum_ThirdPersonShooter_EAmmoType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "EAT_9mm.DisplayName", "9mm" },
		{ "EAT_9mm.Name", "EAmmoType::EAT_9mm" },
		{ "EAT_AR.DisplayName", "AssaultRifle" },
		{ "EAT_AR.Name", "EAmmoType::EAT_AR" },
		{ "EAT_MAX.DisplayName", "DefaultMAX" },
		{ "EAT_MAX.Name", "EAmmoType::EAT_MAX" },
		{ "ModuleRelativePath", "Public/AmmoType.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAmmoType::EAT_9mm", (int64)EAmmoType::EAT_9mm },
		{ "EAmmoType::EAT_AR", (int64)EAmmoType::EAT_AR },
		{ "EAmmoType::EAT_MAX", (int64)EAmmoType::EAT_MAX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ThirdPersonShooter_EAmmoType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ThirdPersonShooter,
	nullptr,
	"EAmmoType",
	"EAmmoType",
	Z_Construct_UEnum_ThirdPersonShooter_EAmmoType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ThirdPersonShooter_EAmmoType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ThirdPersonShooter_EAmmoType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ThirdPersonShooter_EAmmoType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ThirdPersonShooter_EAmmoType()
{
	if (!Z_Registration_Info_UEnum_EAmmoType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAmmoType.InnerSingleton, Z_Construct_UEnum_ThirdPersonShooter_EAmmoType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAmmoType.InnerSingleton;
}
// End Enum EAmmoType

// Begin Registration
struct Z_CompiledInDeferFile_FID_ThirdPersonShooter_Source_ThirdPersonShooter_Public_AmmoType_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EAmmoType_StaticEnum, TEXT("EAmmoType"), &Z_Registration_Info_UEnum_EAmmoType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4041452776U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ThirdPersonShooter_Source_ThirdPersonShooter_Public_AmmoType_h_3331864694(TEXT("/Script/ThirdPersonShooter"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_ThirdPersonShooter_Source_ThirdPersonShooter_Public_AmmoType_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ThirdPersonShooter_Source_ThirdPersonShooter_Public_AmmoType_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
