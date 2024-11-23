// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayAbilities/Public/GameplayAbilitySpecHandle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayAbilitySpecHandle() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle();
UPackage* Z_Construct_UPackage__Script_GameplayAbilities();
// End Cross Module References

// Begin ScriptStruct FGameplayAbilitySpecHandle
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayAbilitySpecHandle;
class UScriptStruct* FGameplayAbilitySpecHandle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayAbilitySpecHandle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayAbilitySpecHandle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("GameplayAbilitySpecHandle"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayAbilitySpecHandle.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FGameplayAbilitySpecHandle>()
{
	return FGameplayAbilitySpecHandle::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Handle that points to a specific granted ability. These are globally unique */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayAbilitySpecHandle.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Handle that points to a specific granted ability. These are globally unique" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Handle_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayAbilitySpecHandle.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayAbilitySpecHandle>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayAbilitySpecHandle, Handle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Handle_MetaData), NewProp_Handle_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle_Statics::NewProp_Handle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
	nullptr,
	&NewStructOps,
	"GameplayAbilitySpecHandle",
	Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle_Statics::PropPointers),
	sizeof(FGameplayAbilitySpecHandle),
	alignof(FGameplayAbilitySpecHandle),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayAbilitySpecHandle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayAbilitySpecHandle.InnerSingleton, Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GameplayAbilitySpecHandle.InnerSingleton;
}
// End ScriptStruct FGameplayAbilitySpecHandle

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayAbilitySpecHandle_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FGameplayAbilitySpecHandle::StaticStruct, Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle_Statics::NewStructOps, TEXT("GameplayAbilitySpecHandle"), &Z_Registration_Info_UScriptStruct_GameplayAbilitySpecHandle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayAbilitySpecHandle), 1889603138U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayAbilitySpecHandle_h_2311383394(TEXT("/Script/GameplayAbilities"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayAbilitySpecHandle_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayAbilitySpecHandle_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
