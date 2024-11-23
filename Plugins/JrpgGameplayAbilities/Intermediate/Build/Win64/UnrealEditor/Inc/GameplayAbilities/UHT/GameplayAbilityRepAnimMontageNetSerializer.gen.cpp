// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayAbilities/Public/Serialization/GameplayAbilityRepAnimMontageNetSerializer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayAbilityRepAnimMontageNetSerializer() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontageNetSerializerConfig();
IRISCORE_API UScriptStruct* Z_Construct_UScriptStruct_FNetSerializerConfig();
UPackage* Z_Construct_UPackage__Script_GameplayAbilities();
// End Cross Module References

// Begin ScriptStruct FGameplayAbilityRepAnimMontageNetSerializerConfig
static_assert(std::is_polymorphic<FGameplayAbilityRepAnimMontageNetSerializerConfig>() == std::is_polymorphic<FNetSerializerConfig>(), "USTRUCT FGameplayAbilityRepAnimMontageNetSerializerConfig cannot be polymorphic unless super FNetSerializerConfig is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayAbilityRepAnimMontageNetSerializerConfig;
class UScriptStruct* FGameplayAbilityRepAnimMontageNetSerializerConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayAbilityRepAnimMontageNetSerializerConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayAbilityRepAnimMontageNetSerializerConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontageNetSerializerConfig, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("GameplayAbilityRepAnimMontageNetSerializerConfig"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayAbilityRepAnimMontageNetSerializerConfig.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FGameplayAbilityRepAnimMontageNetSerializerConfig>()
{
	return FGameplayAbilityRepAnimMontageNetSerializerConfig::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontageNetSerializerConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Serialization/GameplayAbilityRepAnimMontageNetSerializer.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayAbilityRepAnimMontageNetSerializerConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontageNetSerializerConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
	Z_Construct_UScriptStruct_FNetSerializerConfig,
	&NewStructOps,
	"GameplayAbilityRepAnimMontageNetSerializerConfig",
	nullptr,
	0,
	sizeof(FGameplayAbilityRepAnimMontageNetSerializerConfig),
	alignof(FGameplayAbilityRepAnimMontageNetSerializerConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontageNetSerializerConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontageNetSerializerConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontageNetSerializerConfig()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayAbilityRepAnimMontageNetSerializerConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayAbilityRepAnimMontageNetSerializerConfig.InnerSingleton, Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontageNetSerializerConfig_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GameplayAbilityRepAnimMontageNetSerializerConfig.InnerSingleton;
}
// End ScriptStruct FGameplayAbilityRepAnimMontageNetSerializerConfig

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Serialization_GameplayAbilityRepAnimMontageNetSerializer_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FGameplayAbilityRepAnimMontageNetSerializerConfig::StaticStruct, Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontageNetSerializerConfig_Statics::NewStructOps, TEXT("GameplayAbilityRepAnimMontageNetSerializerConfig"), &Z_Registration_Info_UScriptStruct_GameplayAbilityRepAnimMontageNetSerializerConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayAbilityRepAnimMontageNetSerializerConfig), 4257145387U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Serialization_GameplayAbilityRepAnimMontageNetSerializer_h_3952719313(TEXT("/Script/GameplayAbilities"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Serialization_GameplayAbilityRepAnimMontageNetSerializer_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Serialization_GameplayAbilityRepAnimMontageNetSerializer_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
