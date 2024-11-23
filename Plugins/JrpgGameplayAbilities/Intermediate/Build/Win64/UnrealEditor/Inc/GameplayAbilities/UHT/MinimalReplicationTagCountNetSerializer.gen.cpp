// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayAbilities/Public/Serialization/MinimalReplicationTagCountNetSerializer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMinimalReplicationTagCountNetSerializer() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FMinimalReplicationTagCountMapNetSerializerConfig();
IRISCORE_API UScriptStruct* Z_Construct_UScriptStruct_FNetSerializerConfig();
UPackage* Z_Construct_UPackage__Script_GameplayAbilities();
// End Cross Module References

// Begin ScriptStruct FMinimalReplicationTagCountMapNetSerializerConfig
static_assert(std::is_polymorphic<FMinimalReplicationTagCountMapNetSerializerConfig>() == std::is_polymorphic<FNetSerializerConfig>(), "USTRUCT FMinimalReplicationTagCountMapNetSerializerConfig cannot be polymorphic unless super FNetSerializerConfig is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MinimalReplicationTagCountMapNetSerializerConfig;
class UScriptStruct* FMinimalReplicationTagCountMapNetSerializerConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MinimalReplicationTagCountMapNetSerializerConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MinimalReplicationTagCountMapNetSerializerConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMinimalReplicationTagCountMapNetSerializerConfig, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("MinimalReplicationTagCountMapNetSerializerConfig"));
	}
	return Z_Registration_Info_UScriptStruct_MinimalReplicationTagCountMapNetSerializerConfig.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FMinimalReplicationTagCountMapNetSerializerConfig>()
{
	return FMinimalReplicationTagCountMapNetSerializerConfig::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMinimalReplicationTagCountMapNetSerializerConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Serialization/MinimalReplicationTagCountNetSerializer.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMinimalReplicationTagCountMapNetSerializerConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMinimalReplicationTagCountMapNetSerializerConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
	Z_Construct_UScriptStruct_FNetSerializerConfig,
	&NewStructOps,
	"MinimalReplicationTagCountMapNetSerializerConfig",
	nullptr,
	0,
	sizeof(FMinimalReplicationTagCountMapNetSerializerConfig),
	alignof(FMinimalReplicationTagCountMapNetSerializerConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMinimalReplicationTagCountMapNetSerializerConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMinimalReplicationTagCountMapNetSerializerConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMinimalReplicationTagCountMapNetSerializerConfig()
{
	if (!Z_Registration_Info_UScriptStruct_MinimalReplicationTagCountMapNetSerializerConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MinimalReplicationTagCountMapNetSerializerConfig.InnerSingleton, Z_Construct_UScriptStruct_FMinimalReplicationTagCountMapNetSerializerConfig_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MinimalReplicationTagCountMapNetSerializerConfig.InnerSingleton;
}
// End ScriptStruct FMinimalReplicationTagCountMapNetSerializerConfig

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Serialization_MinimalReplicationTagCountNetSerializer_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMinimalReplicationTagCountMapNetSerializerConfig::StaticStruct, Z_Construct_UScriptStruct_FMinimalReplicationTagCountMapNetSerializerConfig_Statics::NewStructOps, TEXT("MinimalReplicationTagCountMapNetSerializerConfig"), &Z_Registration_Info_UScriptStruct_MinimalReplicationTagCountMapNetSerializerConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMinimalReplicationTagCountMapNetSerializerConfig), 2886030209U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Serialization_MinimalReplicationTagCountNetSerializer_h_3782710634(TEXT("/Script/GameplayAbilities"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Serialization_MinimalReplicationTagCountNetSerializer_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Serialization_MinimalReplicationTagCountNetSerializer_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
