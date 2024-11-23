// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayAbilities/Public/GameplayCueNotify_BurstLatent.h"
#include "GameplayAbilities/Public/GameplayCueNotifyTypes.h"
#include "GameplayAbilities/Public/GameplayEffectTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayCueNotify_BurstLatent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_AGameplayCueNotify_Actor();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_AGameplayCueNotify_BurstLatent();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_AGameplayCueNotify_BurstLatent_NoRegister();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayCueNotify_BurstEffects();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayCueNotify_PlacementInfo();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayCueNotify_SpawnCondition();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayCueNotify_SpawnResult();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayCueParameters();
UPackage* Z_Construct_UPackage__Script_GameplayAbilities();
// End Cross Module References

// Begin Class AGameplayCueNotify_BurstLatent Function OnBurst
struct GameplayCueNotify_BurstLatent_eventOnBurst_Parms
{
	AActor* Target;
	FGameplayCueParameters Parameters;
	FGameplayCueNotify_SpawnResult SpawnResults;
};
static FName NAME_AGameplayCueNotify_BurstLatent_OnBurst = FName(TEXT("OnBurst"));
void AGameplayCueNotify_BurstLatent::OnBurst(AActor* Target, FGameplayCueParameters const& Parameters, FGameplayCueNotify_SpawnResult const& SpawnResults)
{
	GameplayCueNotify_BurstLatent_eventOnBurst_Parms Parms;
	Parms.Target=Target;
	Parms.Parameters=Parameters;
	Parms.SpawnResults=SpawnResults;
	ProcessEvent(FindFunctionChecked(NAME_AGameplayCueNotify_BurstLatent_OnBurst),&Parms);
}
struct Z_Construct_UFunction_AGameplayCueNotify_BurstLatent_OnBurst_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameplayCueNotify_BurstLatent.h" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGameplayCueNotify_BurstLatent_OnBurst_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayCueNotify_BurstLatent_eventOnBurst_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGameplayCueNotify_BurstLatent_OnBurst_Statics::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayCueNotify_BurstLatent_eventOnBurst_Parms, Parameters), Z_Construct_UScriptStruct_FGameplayCueParameters, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Parameters_MetaData), NewProp_Parameters_MetaData) }; // 1032334605
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGameplayCueNotify_BurstLatent_OnBurst_Statics::NewProp_SpawnResults = { "SpawnResults", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayCueNotify_BurstLatent_eventOnBurst_Parms, SpawnResults), Z_Construct_UScriptStruct_FGameplayCueNotify_SpawnResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnResults_MetaData), NewProp_SpawnResults_MetaData) }; // 925001605
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameplayCueNotify_BurstLatent_OnBurst_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameplayCueNotify_BurstLatent_OnBurst_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameplayCueNotify_BurstLatent_OnBurst_Statics::NewProp_Parameters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameplayCueNotify_BurstLatent_OnBurst_Statics::NewProp_SpawnResults,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameplayCueNotify_BurstLatent_OnBurst_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameplayCueNotify_BurstLatent_OnBurst_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameplayCueNotify_BurstLatent, nullptr, "OnBurst", nullptr, nullptr, Z_Construct_UFunction_AGameplayCueNotify_BurstLatent_OnBurst_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameplayCueNotify_BurstLatent_OnBurst_Statics::PropPointers), sizeof(GameplayCueNotify_BurstLatent_eventOnBurst_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08480800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameplayCueNotify_BurstLatent_OnBurst_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGameplayCueNotify_BurstLatent_OnBurst_Statics::Function_MetaDataParams) };
static_assert(sizeof(GameplayCueNotify_BurstLatent_eventOnBurst_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGameplayCueNotify_BurstLatent_OnBurst()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameplayCueNotify_BurstLatent_OnBurst_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AGameplayCueNotify_BurstLatent Function OnBurst

// Begin Class AGameplayCueNotify_BurstLatent
void AGameplayCueNotify_BurstLatent::StaticRegisterNativesAGameplayCueNotify_BurstLatent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGameplayCueNotify_BurstLatent);
UClass* Z_Construct_UClass_AGameplayCueNotify_BurstLatent_NoRegister()
{
	return AGameplayCueNotify_BurstLatent::StaticClass();
}
struct Z_Construct_UClass_AGameplayCueNotify_BurstLatent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "GameplayCueNotify" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * AGameplayCueNotify_BurstLatent\n *\n *\x09This is an instanced gameplay cue notify for effects that are one-offs.\n *\x09Since it is instanced, it can do latent things like time lines or delays.\n */" },
#endif
		{ "DisplayName", "GCN Burst Latent" },
		{ "HideCategories", "Replication" },
		{ "IncludePath", "GameplayCueNotify_BurstLatent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/GameplayCueNotify_BurstLatent.h" },
		{ "ShortTooltip", "A one-off GameplayCueNotify that can use latent actions such as timelines." },
		{ "ShowWorldContextPin", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "AGameplayCueNotify_BurstLatent\n\n    This is an instanced gameplay cue notify for effects that are one-offs.\n    Since it is instanced, it can do latent things like time lines or delays." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultSpawnCondition_MetaData[] = {
		{ "Category", "GCN Defaults" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Default condition to check before spawning anything.  Applies for all spawns unless overridden.\n" },
#endif
		{ "ModuleRelativePath", "Public/GameplayCueNotify_BurstLatent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Default condition to check before spawning anything.  Applies for all spawns unless overridden." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultPlacementInfo_MetaData[] = {
		{ "Category", "GCN Defaults" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Default placement rules.  Applies for all spawns unless overridden.\n" },
#endif
		{ "ModuleRelativePath", "Public/GameplayCueNotify_BurstLatent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Default placement rules.  Applies for all spawns unless overridden." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BurstEffects_MetaData[] = {
		{ "Category", "GCN Effects" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// List of effects to spawn on burst.\n" },
#endif
		{ "ModuleRelativePath", "Public/GameplayCueNotify_BurstLatent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of effects to spawn on burst." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BurstSpawnResults_MetaData[] = {
		{ "Category", "GCN Effects" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Results of spawned burst effects.\n" },
#endif
		{ "ModuleRelativePath", "Public/GameplayCueNotify_BurstLatent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Results of spawned burst effects." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultSpawnCondition;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultPlacementInfo;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BurstEffects;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BurstSpawnResults;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AGameplayCueNotify_BurstLatent_OnBurst, "OnBurst" }, // 140638572
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGameplayCueNotify_BurstLatent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGameplayCueNotify_BurstLatent_Statics::NewProp_DefaultSpawnCondition = { "DefaultSpawnCondition", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameplayCueNotify_BurstLatent, DefaultSpawnCondition), Z_Construct_UScriptStruct_FGameplayCueNotify_SpawnCondition, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultSpawnCondition_MetaData), NewProp_DefaultSpawnCondition_MetaData) }; // 3352541212
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGameplayCueNotify_BurstLatent_Statics::NewProp_DefaultPlacementInfo = { "DefaultPlacementInfo", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameplayCueNotify_BurstLatent, DefaultPlacementInfo), Z_Construct_UScriptStruct_FGameplayCueNotify_PlacementInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultPlacementInfo_MetaData), NewProp_DefaultPlacementInfo_MetaData) }; // 2555742544
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGameplayCueNotify_BurstLatent_Statics::NewProp_BurstEffects = { "BurstEffects", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameplayCueNotify_BurstLatent, BurstEffects), Z_Construct_UScriptStruct_FGameplayCueNotify_BurstEffects, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BurstEffects_MetaData), NewProp_BurstEffects_MetaData) }; // 694216403
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGameplayCueNotify_BurstLatent_Statics::NewProp_BurstSpawnResults = { "BurstSpawnResults", nullptr, (EPropertyFlags)0x0020088000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameplayCueNotify_BurstLatent, BurstSpawnResults), Z_Construct_UScriptStruct_FGameplayCueNotify_SpawnResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BurstSpawnResults_MetaData), NewProp_BurstSpawnResults_MetaData) }; // 925001605
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGameplayCueNotify_BurstLatent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameplayCueNotify_BurstLatent_Statics::NewProp_DefaultSpawnCondition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameplayCueNotify_BurstLatent_Statics::NewProp_DefaultPlacementInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameplayCueNotify_BurstLatent_Statics::NewProp_BurstEffects,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameplayCueNotify_BurstLatent_Statics::NewProp_BurstSpawnResults,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGameplayCueNotify_BurstLatent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AGameplayCueNotify_BurstLatent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameplayCueNotify_Actor,
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGameplayCueNotify_BurstLatent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGameplayCueNotify_BurstLatent_Statics::ClassParams = {
	&AGameplayCueNotify_BurstLatent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AGameplayCueNotify_BurstLatent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AGameplayCueNotify_BurstLatent_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGameplayCueNotify_BurstLatent_Statics::Class_MetaDataParams), Z_Construct_UClass_AGameplayCueNotify_BurstLatent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGameplayCueNotify_BurstLatent()
{
	if (!Z_Registration_Info_UClass_AGameplayCueNotify_BurstLatent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGameplayCueNotify_BurstLatent.OuterSingleton, Z_Construct_UClass_AGameplayCueNotify_BurstLatent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGameplayCueNotify_BurstLatent.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UClass* StaticClass<AGameplayCueNotify_BurstLatent>()
{
	return AGameplayCueNotify_BurstLatent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGameplayCueNotify_BurstLatent);
AGameplayCueNotify_BurstLatent::~AGameplayCueNotify_BurstLatent() {}
// End Class AGameplayCueNotify_BurstLatent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayCueNotify_BurstLatent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGameplayCueNotify_BurstLatent, AGameplayCueNotify_BurstLatent::StaticClass, TEXT("AGameplayCueNotify_BurstLatent"), &Z_Registration_Info_UClass_AGameplayCueNotify_BurstLatent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGameplayCueNotify_BurstLatent), 2784831700U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayCueNotify_BurstLatent_h_4142216058(TEXT("/Script/GameplayAbilities"),
	Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayCueNotify_BurstLatent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayCueNotify_BurstLatent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
