// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayAbilities/Public/Serialization/MinimalGameplayCueReplicationProxyNetSerializer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMinimalGameplayCueReplicationProxyNetSerializer() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FMinimalGameplayCueReplicationProxyNetSerializerConfig();
IRISCORE_API UScriptStruct* Z_Construct_UScriptStruct_FNetSerializerConfig();
UPackage* Z_Construct_UPackage__Script_GameplayAbilities();
// End Cross Module References

// Begin ScriptStruct FMinimalGameplayCueReplicationProxyNetSerializerConfig
static_assert(std::is_polymorphic<FMinimalGameplayCueReplicationProxyNetSerializerConfig>() == std::is_polymorphic<FNetSerializerConfig>(), "USTRUCT FMinimalGameplayCueReplicationProxyNetSerializerConfig cannot be polymorphic unless super FNetSerializerConfig is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MinimalGameplayCueReplicationProxyNetSerializerConfig;
class UScriptStruct* FMinimalGameplayCueReplicationProxyNetSerializerConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MinimalGameplayCueReplicationProxyNetSerializerConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MinimalGameplayCueReplicationProxyNetSerializerConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMinimalGameplayCueReplicationProxyNetSerializerConfig, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("MinimalGameplayCueReplicationProxyNetSerializerConfig"));
	}
	return Z_Registration_Info_UScriptStruct_MinimalGameplayCueReplicationProxyNetSerializerConfig.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FMinimalGameplayCueReplicationProxyNetSerializerConfig>()
{
	return FMinimalGameplayCueReplicationProxyNetSerializerConfig::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMinimalGameplayCueReplicationProxyNetSerializerConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Serialization/MinimalGameplayCueReplicationProxyNetSerializer.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMinimalGameplayCueReplicationProxyNetSerializerConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMinimalGameplayCueReplicationProxyNetSerializerConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
	Z_Construct_UScriptStruct_FNetSerializerConfig,
	&NewStructOps,
	"MinimalGameplayCueReplicationProxyNetSerializerConfig",
	nullptr,
	0,
	sizeof(FMinimalGameplayCueReplicationProxyNetSerializerConfig),
	alignof(FMinimalGameplayCueReplicationProxyNetSerializerConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMinimalGameplayCueReplicationProxyNetSerializerConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMinimalGameplayCueReplicationProxyNetSerializerConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMinimalGameplayCueReplicationProxyNetSerializerConfig()
{
	if (!Z_Registration_Info_UScriptStruct_MinimalGameplayCueReplicationProxyNetSerializerConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MinimalGameplayCueReplicationProxyNetSerializerConfig.InnerSingleton, Z_Construct_UScriptStruct_FMinimalGameplayCueReplicationProxyNetSerializerConfig_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MinimalGameplayCueReplicationProxyNetSerializerConfig.InnerSingleton;
}
// End ScriptStruct FMinimalGameplayCueReplicationProxyNetSerializerConfig

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Serialization_MinimalGameplayCueReplicationProxyNetSerializer_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMinimalGameplayCueReplicationProxyNetSerializerConfig::StaticStruct, Z_Construct_UScriptStruct_FMinimalGameplayCueReplicationProxyNetSerializerConfig_Statics::NewStructOps, TEXT("MinimalGameplayCueReplicationProxyNetSerializerConfig"), &Z_Registration_Info_UScriptStruct_MinimalGameplayCueReplicationProxyNetSerializerConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMinimalGameplayCueReplicationProxyNetSerializerConfig), 3540209274U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Serialization_MinimalGameplayCueReplicationProxyNetSerializer_h_3444950122(TEXT("/Script/GameplayAbilities"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Serialization_MinimalGameplayCueReplicationProxyNetSerializer_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Serialization_MinimalGameplayCueReplicationProxyNetSerializer_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
