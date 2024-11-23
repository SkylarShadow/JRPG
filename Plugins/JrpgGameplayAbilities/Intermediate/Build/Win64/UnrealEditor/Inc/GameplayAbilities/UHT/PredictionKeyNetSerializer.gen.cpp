// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayAbilities/Private/Serialization/PredictionKeyNetSerializer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePredictionKeyNetSerializer() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FPredictionKeyNetSerializerConfig();
IRISCORE_API UScriptStruct* Z_Construct_UScriptStruct_FNetSerializerConfig();
UPackage* Z_Construct_UPackage__Script_GameplayAbilities();
// End Cross Module References

// Begin ScriptStruct FPredictionKeyNetSerializerConfig
static_assert(std::is_polymorphic<FPredictionKeyNetSerializerConfig>() == std::is_polymorphic<FNetSerializerConfig>(), "USTRUCT FPredictionKeyNetSerializerConfig cannot be polymorphic unless super FNetSerializerConfig is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PredictionKeyNetSerializerConfig;
class UScriptStruct* FPredictionKeyNetSerializerConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PredictionKeyNetSerializerConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PredictionKeyNetSerializerConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPredictionKeyNetSerializerConfig, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("PredictionKeyNetSerializerConfig"));
	}
	return Z_Registration_Info_UScriptStruct_PredictionKeyNetSerializerConfig.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FPredictionKeyNetSerializerConfig>()
{
	return FPredictionKeyNetSerializerConfig::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPredictionKeyNetSerializerConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Serialization/PredictionKeyNetSerializer.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPredictionKeyNetSerializerConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPredictionKeyNetSerializerConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
	Z_Construct_UScriptStruct_FNetSerializerConfig,
	&NewStructOps,
	"PredictionKeyNetSerializerConfig",
	nullptr,
	0,
	sizeof(FPredictionKeyNetSerializerConfig),
	alignof(FPredictionKeyNetSerializerConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPredictionKeyNetSerializerConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPredictionKeyNetSerializerConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPredictionKeyNetSerializerConfig()
{
	if (!Z_Registration_Info_UScriptStruct_PredictionKeyNetSerializerConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PredictionKeyNetSerializerConfig.InnerSingleton, Z_Construct_UScriptStruct_FPredictionKeyNetSerializerConfig_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PredictionKeyNetSerializerConfig.InnerSingleton;
}
// End ScriptStruct FPredictionKeyNetSerializerConfig

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Private_Serialization_PredictionKeyNetSerializer_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPredictionKeyNetSerializerConfig::StaticStruct, Z_Construct_UScriptStruct_FPredictionKeyNetSerializerConfig_Statics::NewStructOps, TEXT("PredictionKeyNetSerializerConfig"), &Z_Registration_Info_UScriptStruct_PredictionKeyNetSerializerConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPredictionKeyNetSerializerConfig), 1670650546U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Private_Serialization_PredictionKeyNetSerializer_h_585911578(TEXT("/Script/GameplayAbilities"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Private_Serialization_PredictionKeyNetSerializer_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Private_Serialization_PredictionKeyNetSerializer_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
