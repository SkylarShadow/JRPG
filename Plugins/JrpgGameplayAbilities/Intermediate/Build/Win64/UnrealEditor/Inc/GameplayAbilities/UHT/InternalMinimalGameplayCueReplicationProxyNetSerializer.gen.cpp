// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayAbilities/Private/Serialization/InternalMinimalGameplayCueReplicationProxyNetSerializer.h"
#include "Runtime/Engine/Classes/Engine/NetSerialization.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInternalMinimalGameplayCueReplicationProxyNetSerializer() {}

// Begin Cross Module References
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantize();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FMinimalGameplayCueReplicationProxyForNetSerializer();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
UPackage* Z_Construct_UPackage__Script_GameplayAbilities();
// End Cross Module References

// Begin ScriptStruct FMinimalGameplayCueReplicationProxyForNetSerializer
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MinimalGameplayCueReplicationProxyForNetSerializer;
class UScriptStruct* FMinimalGameplayCueReplicationProxyForNetSerializer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MinimalGameplayCueReplicationProxyForNetSerializer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MinimalGameplayCueReplicationProxyForNetSerializer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMinimalGameplayCueReplicationProxyForNetSerializer, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("MinimalGameplayCueReplicationProxyForNetSerializer"));
	}
	return Z_Registration_Info_UScriptStruct_MinimalGameplayCueReplicationProxyForNetSerializer.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FMinimalGameplayCueReplicationProxyForNetSerializer>()
{
	return FMinimalGameplayCueReplicationProxyForNetSerializer::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMinimalGameplayCueReplicationProxyForNetSerializer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Serialization/InternalMinimalGameplayCueReplicationProxyNetSerializer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[] = {
		{ "ModuleRelativePath", "Private/Serialization/InternalMinimalGameplayCueReplicationProxyNetSerializer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Locations_MetaData[] = {
		{ "ModuleRelativePath", "Private/Serialization/InternalMinimalGameplayCueReplicationProxyNetSerializer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tags_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Tags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Locations_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Locations;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMinimalGameplayCueReplicationProxyForNetSerializer>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMinimalGameplayCueReplicationProxyForNetSerializer_Statics::NewProp_Tags_Inner = { "Tags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMinimalGameplayCueReplicationProxyForNetSerializer_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMinimalGameplayCueReplicationProxyForNetSerializer, Tags), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tags_MetaData), NewProp_Tags_MetaData) }; // 1298103297
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMinimalGameplayCueReplicationProxyForNetSerializer_Statics::NewProp_Locations_Inner = { "Locations", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector_NetQuantize, METADATA_PARAMS(0, nullptr) }; // 1723029535
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMinimalGameplayCueReplicationProxyForNetSerializer_Statics::NewProp_Locations = { "Locations", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMinimalGameplayCueReplicationProxyForNetSerializer, Locations), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Locations_MetaData), NewProp_Locations_MetaData) }; // 1723029535
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMinimalGameplayCueReplicationProxyForNetSerializer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMinimalGameplayCueReplicationProxyForNetSerializer_Statics::NewProp_Tags_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMinimalGameplayCueReplicationProxyForNetSerializer_Statics::NewProp_Tags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMinimalGameplayCueReplicationProxyForNetSerializer_Statics::NewProp_Locations_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMinimalGameplayCueReplicationProxyForNetSerializer_Statics::NewProp_Locations,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMinimalGameplayCueReplicationProxyForNetSerializer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMinimalGameplayCueReplicationProxyForNetSerializer_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
	nullptr,
	&NewStructOps,
	"MinimalGameplayCueReplicationProxyForNetSerializer",
	Z_Construct_UScriptStruct_FMinimalGameplayCueReplicationProxyForNetSerializer_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMinimalGameplayCueReplicationProxyForNetSerializer_Statics::PropPointers),
	sizeof(FMinimalGameplayCueReplicationProxyForNetSerializer),
	alignof(FMinimalGameplayCueReplicationProxyForNetSerializer),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMinimalGameplayCueReplicationProxyForNetSerializer_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMinimalGameplayCueReplicationProxyForNetSerializer_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMinimalGameplayCueReplicationProxyForNetSerializer()
{
	if (!Z_Registration_Info_UScriptStruct_MinimalGameplayCueReplicationProxyForNetSerializer.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MinimalGameplayCueReplicationProxyForNetSerializer.InnerSingleton, Z_Construct_UScriptStruct_FMinimalGameplayCueReplicationProxyForNetSerializer_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MinimalGameplayCueReplicationProxyForNetSerializer.InnerSingleton;
}
// End ScriptStruct FMinimalGameplayCueReplicationProxyForNetSerializer

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Private_Serialization_InternalMinimalGameplayCueReplicationProxyNetSerializer_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMinimalGameplayCueReplicationProxyForNetSerializer::StaticStruct, Z_Construct_UScriptStruct_FMinimalGameplayCueReplicationProxyForNetSerializer_Statics::NewStructOps, TEXT("MinimalGameplayCueReplicationProxyForNetSerializer"), &Z_Registration_Info_UScriptStruct_MinimalGameplayCueReplicationProxyForNetSerializer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMinimalGameplayCueReplicationProxyForNetSerializer), 2709278732U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Private_Serialization_InternalMinimalGameplayCueReplicationProxyNetSerializer_h_931951833(TEXT("/Script/GameplayAbilities"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Private_Serialization_InternalMinimalGameplayCueReplicationProxyNetSerializer_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Private_Serialization_InternalMinimalGameplayCueReplicationProxyNetSerializer_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
