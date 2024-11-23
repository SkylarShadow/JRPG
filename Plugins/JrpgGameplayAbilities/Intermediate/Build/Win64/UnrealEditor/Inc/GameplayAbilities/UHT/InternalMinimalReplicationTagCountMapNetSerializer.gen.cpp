// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayAbilities/Private/Serialization/InternalMinimalReplicationTagCountMapNetSerializer.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInternalMinimalReplicationTagCountMapNetSerializer() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FMinimalReplicationTagCountMapForNetSerializer();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
UPackage* Z_Construct_UPackage__Script_GameplayAbilities();
// End Cross Module References

// Begin ScriptStruct FMinimalReplicationTagCountMapForNetSerializer
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MinimalReplicationTagCountMapForNetSerializer;
class UScriptStruct* FMinimalReplicationTagCountMapForNetSerializer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MinimalReplicationTagCountMapForNetSerializer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MinimalReplicationTagCountMapForNetSerializer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMinimalReplicationTagCountMapForNetSerializer, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("MinimalReplicationTagCountMapForNetSerializer"));
	}
	return Z_Registration_Info_UScriptStruct_MinimalReplicationTagCountMapForNetSerializer.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FMinimalReplicationTagCountMapForNetSerializer>()
{
	return FMinimalReplicationTagCountMapForNetSerializer::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMinimalReplicationTagCountMapForNetSerializer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Serialization/InternalMinimalReplicationTagCountMapNetSerializer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[] = {
		{ "ModuleRelativePath", "Private/Serialization/InternalMinimalReplicationTagCountMapNetSerializer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tags_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Tags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMinimalReplicationTagCountMapForNetSerializer>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMinimalReplicationTagCountMapForNetSerializer_Statics::NewProp_Tags_Inner = { "Tags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMinimalReplicationTagCountMapForNetSerializer_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMinimalReplicationTagCountMapForNetSerializer, Tags), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tags_MetaData), NewProp_Tags_MetaData) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMinimalReplicationTagCountMapForNetSerializer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMinimalReplicationTagCountMapForNetSerializer_Statics::NewProp_Tags_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMinimalReplicationTagCountMapForNetSerializer_Statics::NewProp_Tags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMinimalReplicationTagCountMapForNetSerializer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMinimalReplicationTagCountMapForNetSerializer_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
	nullptr,
	&NewStructOps,
	"MinimalReplicationTagCountMapForNetSerializer",
	Z_Construct_UScriptStruct_FMinimalReplicationTagCountMapForNetSerializer_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMinimalReplicationTagCountMapForNetSerializer_Statics::PropPointers),
	sizeof(FMinimalReplicationTagCountMapForNetSerializer),
	alignof(FMinimalReplicationTagCountMapForNetSerializer),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMinimalReplicationTagCountMapForNetSerializer_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMinimalReplicationTagCountMapForNetSerializer_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMinimalReplicationTagCountMapForNetSerializer()
{
	if (!Z_Registration_Info_UScriptStruct_MinimalReplicationTagCountMapForNetSerializer.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MinimalReplicationTagCountMapForNetSerializer.InnerSingleton, Z_Construct_UScriptStruct_FMinimalReplicationTagCountMapForNetSerializer_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MinimalReplicationTagCountMapForNetSerializer.InnerSingleton;
}
// End ScriptStruct FMinimalReplicationTagCountMapForNetSerializer

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Private_Serialization_InternalMinimalReplicationTagCountMapNetSerializer_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMinimalReplicationTagCountMapForNetSerializer::StaticStruct, Z_Construct_UScriptStruct_FMinimalReplicationTagCountMapForNetSerializer_Statics::NewStructOps, TEXT("MinimalReplicationTagCountMapForNetSerializer"), &Z_Registration_Info_UScriptStruct_MinimalReplicationTagCountMapForNetSerializer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMinimalReplicationTagCountMapForNetSerializer), 515117322U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Private_Serialization_InternalMinimalReplicationTagCountMapNetSerializer_h_1467691474(TEXT("/Script/GameplayAbilities"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Private_Serialization_InternalMinimalReplicationTagCountMapNetSerializer_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Private_Serialization_InternalMinimalReplicationTagCountMapNetSerializer_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
