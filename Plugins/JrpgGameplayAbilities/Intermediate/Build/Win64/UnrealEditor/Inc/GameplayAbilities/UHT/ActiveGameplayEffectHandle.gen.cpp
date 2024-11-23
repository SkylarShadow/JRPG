// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayAbilities/Public/ActiveGameplayEffectHandle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActiveGameplayEffectHandle() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FActiveGameplayEffectHandle();
UPackage* Z_Construct_UPackage__Script_GameplayAbilities();
// End Cross Module References

// Begin ScriptStruct FActiveGameplayEffectHandle
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ActiveGameplayEffectHandle;
class UScriptStruct* FActiveGameplayEffectHandle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ActiveGameplayEffectHandle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ActiveGameplayEffectHandle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FActiveGameplayEffectHandle, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("ActiveGameplayEffectHandle"));
	}
	return Z_Registration_Info_UScriptStruct_ActiveGameplayEffectHandle.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FActiveGameplayEffectHandle>()
{
	return FActiveGameplayEffectHandle::StaticStruct();
}
struct Z_Construct_UScriptStruct_FActiveGameplayEffectHandle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * This handle is required for things outside of FActiveGameplayEffectsContainer to refer to a specific active GameplayEffect\n *\x09""For example if a skill needs to create an active effect and then destroy that specific effect that it created, it has to do so\n *\x09through a handle. a pointer or index into the active list is not sufficient. These are not synchronized between clients and server.\n */" },
#endif
		{ "ModuleRelativePath", "Public/ActiveGameplayEffectHandle.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This handle is required for things outside of FActiveGameplayEffectsContainer to refer to a specific active GameplayEffect\n    For example if a skill needs to create an active effect and then destroy that specific effect that it created, it has to do so\n    through a handle. a pointer or index into the active list is not sufficient. These are not synchronized between clients and server." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Handle_MetaData[] = {
		{ "ModuleRelativePath", "Public/ActiveGameplayEffectHandle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPassedFiltersAndWasExecuted_MetaData[] = {
		{ "ModuleRelativePath", "Public/ActiveGameplayEffectHandle.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Handle;
	static void NewProp_bPassedFiltersAndWasExecuted_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPassedFiltersAndWasExecuted;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FActiveGameplayEffectHandle>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FActiveGameplayEffectHandle_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FActiveGameplayEffectHandle, Handle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Handle_MetaData), NewProp_Handle_MetaData) };
void Z_Construct_UScriptStruct_FActiveGameplayEffectHandle_Statics::NewProp_bPassedFiltersAndWasExecuted_SetBit(void* Obj)
{
	((FActiveGameplayEffectHandle*)Obj)->bPassedFiltersAndWasExecuted = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FActiveGameplayEffectHandle_Statics::NewProp_bPassedFiltersAndWasExecuted = { "bPassedFiltersAndWasExecuted", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FActiveGameplayEffectHandle), &Z_Construct_UScriptStruct_FActiveGameplayEffectHandle_Statics::NewProp_bPassedFiltersAndWasExecuted_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPassedFiltersAndWasExecuted_MetaData), NewProp_bPassedFiltersAndWasExecuted_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FActiveGameplayEffectHandle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActiveGameplayEffectHandle_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActiveGameplayEffectHandle_Statics::NewProp_bPassedFiltersAndWasExecuted,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActiveGameplayEffectHandle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FActiveGameplayEffectHandle_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
	nullptr,
	&NewStructOps,
	"ActiveGameplayEffectHandle",
	Z_Construct_UScriptStruct_FActiveGameplayEffectHandle_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActiveGameplayEffectHandle_Statics::PropPointers),
	sizeof(FActiveGameplayEffectHandle),
	alignof(FActiveGameplayEffectHandle),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActiveGameplayEffectHandle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FActiveGameplayEffectHandle_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FActiveGameplayEffectHandle()
{
	if (!Z_Registration_Info_UScriptStruct_ActiveGameplayEffectHandle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ActiveGameplayEffectHandle.InnerSingleton, Z_Construct_UScriptStruct_FActiveGameplayEffectHandle_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ActiveGameplayEffectHandle.InnerSingleton;
}
// End ScriptStruct FActiveGameplayEffectHandle

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_ActiveGameplayEffectHandle_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FActiveGameplayEffectHandle::StaticStruct, Z_Construct_UScriptStruct_FActiveGameplayEffectHandle_Statics::NewStructOps, TEXT("ActiveGameplayEffectHandle"), &Z_Registration_Info_UScriptStruct_ActiveGameplayEffectHandle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FActiveGameplayEffectHandle), 11669558U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_ActiveGameplayEffectHandle_h_1710363191(TEXT("/Script/GameplayAbilities"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_ActiveGameplayEffectHandle_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_ActiveGameplayEffectHandle_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
