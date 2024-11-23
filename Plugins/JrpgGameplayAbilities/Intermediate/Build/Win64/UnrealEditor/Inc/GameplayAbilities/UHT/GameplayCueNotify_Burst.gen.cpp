// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayAbilities/Public/GameplayCueNotify_Burst.h"
#include "GameplayAbilities/Public/GameplayCueNotifyTypes.h"
#include "GameplayAbilities/Public/GameplayEffectTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayCueNotify_Burst() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayCueNotify_Burst();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayCueNotify_Burst_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayCueNotify_Static();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayCueNotify_BurstEffects();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayCueNotify_PlacementInfo();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayCueNotify_SpawnCondition();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayCueNotify_SpawnResult();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayCueParameters();
UPackage* Z_Construct_UPackage__Script_GameplayAbilities();
// End Cross Module References

// Begin Class UGameplayCueNotify_Burst Function OnBurst
struct GameplayCueNotify_Burst_eventOnBurst_Parms
{
	AActor* Target;
	FGameplayCueParameters Parameters;
	FGameplayCueNotify_SpawnResult SpawnResults;
};
static FName NAME_UGameplayCueNotify_Burst_OnBurst = FName(TEXT("OnBurst"));
void UGameplayCueNotify_Burst::OnBurst(AActor* Target, FGameplayCueParameters const& Parameters, FGameplayCueNotify_SpawnResult const& SpawnResults) const
{
	GameplayCueNotify_Burst_eventOnBurst_Parms Parms;
	Parms.Target=Target;
	Parms.Parameters=Parameters;
	Parms.SpawnResults=SpawnResults;
	const_cast<UGameplayCueNotify_Burst*>(this)->ProcessEvent(FindFunctionChecked(NAME_UGameplayCueNotify_Burst_OnBurst),&Parms);
}
struct Z_Construct_UFunction_UGameplayCueNotify_Burst_OnBurst_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameplayCueNotify_Burst.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Parameters_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnResults_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Parameters;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnResults;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayCueNotify_Burst_OnBurst_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayCueNotify_Burst_eventOnBurst_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayCueNotify_Burst_OnBurst_Statics::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayCueNotify_Burst_eventOnBurst_Parms, Parameters), Z_Construct_UScriptStruct_FGameplayCueParameters, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Parameters_MetaData), NewProp_Parameters_MetaData) }; // 1032334605
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayCueNotify_Burst_OnBurst_Statics::NewProp_SpawnResults = { "SpawnResults", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayCueNotify_Burst_eventOnBurst_Parms, SpawnResults), Z_Construct_UScriptStruct_FGameplayCueNotify_SpawnResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnResults_MetaData), NewProp_SpawnResults_MetaData) }; // 925001605
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayCueNotify_Burst_OnBurst_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayCueNotify_Burst_OnBurst_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayCueNotify_Burst_OnBurst_Statics::NewProp_Parameters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayCueNotify_Burst_OnBurst_Statics::NewProp_SpawnResults,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayCueNotify_Burst_OnBurst_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayCueNotify_Burst_OnBurst_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayCueNotify_Burst, nullptr, "OnBurst", nullptr, nullptr, Z_Construct_UFunction_UGameplayCueNotify_Burst_OnBurst_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayCueNotify_Burst_OnBurst_Statics::PropPointers), sizeof(GameplayCueNotify_Burst_eventOnBurst_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48480800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayCueNotify_Burst_OnBurst_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameplayCueNotify_Burst_OnBurst_Statics::Function_MetaDataParams) };
static_assert(sizeof(GameplayCueNotify_Burst_eventOnBurst_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGameplayCueNotify_Burst_OnBurst()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayCueNotify_Burst_OnBurst_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UGameplayCueNotify_Burst Function OnBurst

// Begin Class UGameplayCueNotify_Burst
void UGameplayCueNotify_Burst::StaticRegisterNativesUGameplayCueNotify_Burst()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameplayCueNotify_Burst);
UClass* Z_Construct_UClass_UGameplayCueNotify_Burst_NoRegister()
{
	return UGameplayCueNotify_Burst::StaticClass();
}
struct Z_Construct_UClass_UGameplayCueNotify_Burst_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "GameplayCueNotify" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * UGameplayCueNotify_Burst\n *\n *\x09This is a non-instanced gameplay cue notify for effects that are one-offs.\n *\x09Since it is not instanced, it cannot do latent actions such as delays and time lines.\n */" },
#endif
		{ "DisplayName", "GCN Burst" },
		{ "HideCategories", "Replication" },
		{ "IncludePath", "GameplayCueNotify_Burst.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/GameplayCueNotify_Burst.h" },
		{ "ShortTooltip", "A one-off GameplayCueNotify that is never spawned into the world." },
		{ "ShowWorldContextPin", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UGameplayCueNotify_Burst\n\n    This is a non-instanced gameplay cue notify for effects that are one-offs.\n    Since it is not instanced, it cannot do latent actions such as delays and time lines." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultSpawnCondition_MetaData[] = {
		{ "Category", "GCN Defaults" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Default condition to check before spawning anything.  Applies for all spawns unless overridden.\n" },
#endif
		{ "ModuleRelativePath", "Public/GameplayCueNotify_Burst.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Default condition to check before spawning anything.  Applies for all spawns unless overridden." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultPlacementInfo_MetaData[] = {
		{ "Category", "GCN Defaults" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Default placement rules.  Applies for all spawns unless overridden.\n" },
#endif
		{ "ModuleRelativePath", "Public/GameplayCueNotify_Burst.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Default placement rules.  Applies for all spawns unless overridden." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BurstEffects_MetaData[] = {
		{ "Category", "GCN Effects" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// List of effects to spawn on burst.\n" },
#endif
		{ "ModuleRelativePath", "Public/GameplayCueNotify_Burst.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of effects to spawn on burst." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultSpawnCondition;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultPlacementInfo;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BurstEffects;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGameplayCueNotify_Burst_OnBurst, "OnBurst" }, // 3302833928
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameplayCueNotify_Burst>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameplayCueNotify_Burst_Statics::NewProp_DefaultSpawnCondition = { "DefaultSpawnCondition", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameplayCueNotify_Burst, DefaultSpawnCondition), Z_Construct_UScriptStruct_FGameplayCueNotify_SpawnCondition, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultSpawnCondition_MetaData), NewProp_DefaultSpawnCondition_MetaData) }; // 3352541212
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameplayCueNotify_Burst_Statics::NewProp_DefaultPlacementInfo = { "DefaultPlacementInfo", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameplayCueNotify_Burst, DefaultPlacementInfo), Z_Construct_UScriptStruct_FGameplayCueNotify_PlacementInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultPlacementInfo_MetaData), NewProp_DefaultPlacementInfo_MetaData) }; // 2555742544
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameplayCueNotify_Burst_Statics::NewProp_BurstEffects = { "BurstEffects", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameplayCueNotify_Burst, BurstEffects), Z_Construct_UScriptStruct_FGameplayCueNotify_BurstEffects, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BurstEffects_MetaData), NewProp_BurstEffects_MetaData) }; // 694216403
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameplayCueNotify_Burst_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayCueNotify_Burst_Statics::NewProp_DefaultSpawnCondition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayCueNotify_Burst_Statics::NewProp_DefaultPlacementInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayCueNotify_Burst_Statics::NewProp_BurstEffects,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayCueNotify_Burst_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGameplayCueNotify_Burst_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameplayCueNotify_Static,
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayCueNotify_Burst_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameplayCueNotify_Burst_Statics::ClassParams = {
	&UGameplayCueNotify_Burst::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UGameplayCueNotify_Burst_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayCueNotify_Burst_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayCueNotify_Burst_Statics::Class_MetaDataParams), Z_Construct_UClass_UGameplayCueNotify_Burst_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGameplayCueNotify_Burst()
{
	if (!Z_Registration_Info_UClass_UGameplayCueNotify_Burst.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameplayCueNotify_Burst.OuterSingleton, Z_Construct_UClass_UGameplayCueNotify_Burst_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGameplayCueNotify_Burst.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UClass* StaticClass<UGameplayCueNotify_Burst>()
{
	return UGameplayCueNotify_Burst::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGameplayCueNotify_Burst);
UGameplayCueNotify_Burst::~UGameplayCueNotify_Burst() {}
// End Class UGameplayCueNotify_Burst

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayCueNotify_Burst_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGameplayCueNotify_Burst, UGameplayCueNotify_Burst::StaticClass, TEXT("UGameplayCueNotify_Burst"), &Z_Registration_Info_UClass_UGameplayCueNotify_Burst, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameplayCueNotify_Burst), 1523875917U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayCueNotify_Burst_h_1455817830(TEXT("/Script/GameplayAbilities"),
	Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayCueNotify_Burst_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayCueNotify_Burst_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
