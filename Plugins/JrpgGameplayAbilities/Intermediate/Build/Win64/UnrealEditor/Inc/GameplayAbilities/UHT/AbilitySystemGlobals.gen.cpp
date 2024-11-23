// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayAbilities/Public/AbilitySystemGlobals.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbilitySystemGlobals() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UScriptStruct();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftClassPath();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
ENGINE_API UClass* Z_Construct_UClass_UCurveTable_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemGlobals();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemGlobals_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayCueManager_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayTagReponseTable_NoRegister();
GAMEPLAYABILITIES_API UEnum* Z_Construct_UEnum_GameplayAbilities_EGameplayModEvaluationChannel();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FNetSerializeScriptStructCache();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
UPackage* Z_Construct_UPackage__Script_GameplayAbilities();
// End Cross Module References

// Begin ScriptStruct FNetSerializeScriptStructCache
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NetSerializeScriptStructCache;
class UScriptStruct* FNetSerializeScriptStructCache::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NetSerializeScriptStructCache.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NetSerializeScriptStructCache.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNetSerializeScriptStructCache, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("NetSerializeScriptStructCache"));
	}
	return Z_Registration_Info_UScriptStruct_NetSerializeScriptStructCache.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FNetSerializeScriptStructCache>()
{
	return FNetSerializeScriptStructCache::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNetSerializeScriptStructCache_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//  Container for safely replicating  script struct references (constrained to a specified parent struct)\n" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystemGlobals.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Container for safely replicating  script struct references (constrained to a specified parent struct)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScriptStructs_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilitySystemGlobals.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ScriptStructs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ScriptStructs;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNetSerializeScriptStructCache>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FNetSerializeScriptStructCache_Statics::NewProp_ScriptStructs_Inner = { "ScriptStructs", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UScriptStruct, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNetSerializeScriptStructCache_Statics::NewProp_ScriptStructs = { "ScriptStructs", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNetSerializeScriptStructCache, ScriptStructs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScriptStructs_MetaData), NewProp_ScriptStructs_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNetSerializeScriptStructCache_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetSerializeScriptStructCache_Statics::NewProp_ScriptStructs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetSerializeScriptStructCache_Statics::NewProp_ScriptStructs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetSerializeScriptStructCache_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNetSerializeScriptStructCache_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
	nullptr,
	&NewStructOps,
	"NetSerializeScriptStructCache",
	Z_Construct_UScriptStruct_FNetSerializeScriptStructCache_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetSerializeScriptStructCache_Statics::PropPointers),
	sizeof(FNetSerializeScriptStructCache),
	alignof(FNetSerializeScriptStructCache),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetSerializeScriptStructCache_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNetSerializeScriptStructCache_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNetSerializeScriptStructCache()
{
	if (!Z_Registration_Info_UScriptStruct_NetSerializeScriptStructCache.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NetSerializeScriptStructCache.InnerSingleton, Z_Construct_UScriptStruct_FNetSerializeScriptStructCache_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NetSerializeScriptStructCache.InnerSingleton;
}
// End ScriptStruct FNetSerializeScriptStructCache

// Begin Class UAbilitySystemGlobals
void UAbilitySystemGlobals::StaticRegisterNativesUAbilitySystemGlobals()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAbilitySystemGlobals);
UClass* Z_Construct_UClass_UAbilitySystemGlobals_NoRegister()
{
	return UAbilitySystemGlobals::StaticClass();
}
struct Z_Construct_UClass_UAbilitySystemGlobals_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Holds global data for the ability system. Can be configured per project via config file */" },
#endif
		{ "IncludePath", "AbilitySystemGlobals.h" },
		{ "ModuleRelativePath", "Public/AbilitySystemGlobals.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Holds global data for the ability system. Can be configured per project via config file" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemGlobalsClassName_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The class to instantiate as the globals object. Defaults to this class but can be overridden */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystemGlobals.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The class to instantiate as the globals object. Defaults to this class but can be overridden" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseDebugTargetFromHud_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Set to true if you want the \"ShowDebug AbilitySystem\" cheat to use the hud's debug target instead of the ability system's debug target. */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystemGlobals.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set to true if you want the \"ShowDebug AbilitySystem\" cheat to use the hud's debug target instead of the ability system's debug target." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActivateFailIsDeadTag_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** TryActivate failed due to being dead */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystemGlobals.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "TryActivate failed due to being dead" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActivateFailIsDeadName_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilitySystemGlobals.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActivateFailCooldownTag_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** TryActivate failed due to being on cooldown */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystemGlobals.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "TryActivate failed due to being on cooldown" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActivateFailCooldownName_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilitySystemGlobals.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActivateFailCostTag_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** TryActivate failed due to not being able to spend costs */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystemGlobals.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "TryActivate failed due to not being able to spend costs" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActivateFailCostName_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilitySystemGlobals.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActivateFailTagsBlockedTag_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** TryActivate failed due to being blocked by other abilities */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystemGlobals.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "TryActivate failed due to being blocked by other abilities" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActivateFailTagsBlockedName_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilitySystemGlobals.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActivateFailTagsMissingTag_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** TryActivate failed due to missing required tags */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystemGlobals.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "TryActivate failed due to missing required tags" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActivateFailTagsMissingName_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilitySystemGlobals.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActivateFailNetworkingTag_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Failed to activate due to invalid networking settings, this is designer error */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystemGlobals.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Failed to activate due to invalid networking settings, this is designer error" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActivateFailNetworkingName_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilitySystemGlobals.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinimalReplicationTagCountBits_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** How many bits to use for \"number of tags\" in FMinimalReplicationTagCountMap::NetSerialize.  */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystemGlobals.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How many bits to use for \"number of tags\" in FMinimalReplicationTagCountMap::NetSerialize." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetDataStructCache_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilitySystemGlobals.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EffectContextStructCache_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilitySystemGlobals.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowGameplayModEvaluationChannels_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether the game should allow the usage of gameplay mod evaluation channels or not */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystemGlobals.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether the game should allow the usage of gameplay mod evaluation channels or not" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultGameplayModEvaluationChannel_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The default mod evaluation channel for the game */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystemGlobals.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The default mod evaluation channel for the game" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameplayModEvaluationChannelAliases_MetaData[] = {
		{ "ArraySizeEnum", "/Script/GameplayAbilities.EGameplayModEvaluationChannel" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Game-specified named aliases for gameplay mod evaluation channels; Only those with valid aliases are eligible to be used in a game (except Channel0, which is always valid) */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystemGlobals.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Game-specified named aliases for gameplay mod evaluation channels; Only those with valid aliases are eligible to be used in a game (except Channel0, which is always valid)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GlobalCurveTableName_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Name of global curve table to use as the default for scalable floats, etc. */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystemGlobals.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Name of global curve table to use as the default for scalable floats, etc." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GlobalCurveTable_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilitySystemGlobals.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GlobalAttributeMetaDataTableName_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Holds information about the valid attributes' min and max values and stacking rules */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystemGlobals.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Holds information about the valid attributes' min and max values and stacking rules" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GlobalAttributeMetaDataTable_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilitySystemGlobals.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GlobalAttributeSetDefaultsTableName_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Holds default values for attribute sets, keyed off of Name/Levels. NOTE: Preserved for backwards compatibility, should use the array version below now */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystemGlobals.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Holds default values for attribute sets, keyed off of Name/Levels. NOTE: Preserved for backwards compatibility, should use the array version below now" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GlobalAttributeSetDefaultsTableNames_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Array of curve table names to use for default values for attribute sets, keyed off of Name/Levels */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystemGlobals.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Array of curve table names to use for default values for attribute sets, keyed off of Name/Levels" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GlobalAttributeDefaultsTables_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Curve tables containing default values for attribute sets, keyed off of Name/Levels */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystemGlobals.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Curve tables containing default values for attribute sets, keyed off of Name/Levels" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GlobalGameplayCueManagerClass_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Class reference to gameplay cue manager. Use this if you want to just instantiate a class for your gameplay cue manager without having to create an asset. */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystemGlobals.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Class reference to gameplay cue manager. Use this if you want to just instantiate a class for your gameplay cue manager without having to create an asset." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GlobalGameplayCueManagerName_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Object reference to gameplay cue manager (E.g., reference to a specific blueprint of your GameplayCueManager class. This is not necessary unless you want to have data or blueprints in your gameplay cue manager. */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystemGlobals.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Object reference to gameplay cue manager (E.g., reference to a specific blueprint of your GameplayCueManager class. This is not necessary unless you want to have data or blueprints in your gameplay cue manager." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameplayCueNotifyPaths_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Look in these paths for GameplayCueNotifies. These are your \"always loaded\" set. */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystemGlobals.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Look in these paths for GameplayCueNotifies. These are your \"always loaded\" set." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameplayTagResponseTableName_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The class to instantiate as the GameplayTagResponseTable. */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystemGlobals.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The class to instantiate as the GameplayTagResponseTable." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameplayTagResponseTable_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilitySystemGlobals.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PredictTargetGameplayEffects_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Set to true if you want clients to try to predict gameplay effects done to targets. If false it will only predict self effects */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystemGlobals.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set to true if you want clients to try to predict gameplay effects done to targets. If false it will only predict self effects" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReplicateActivationOwnedTags_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n\x09 * Set to true if you want tags granted to owners from ability activations to be replicated. If false, ActivationOwnedTags are only applied locally. \n\x09 * This should only be disabled for legacy game code that depends on non-replication of ActivationOwnedTags.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystemGlobals.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set to true if you want tags granted to owners from ability activations to be replicated. If false, ActivationOwnedTags are only applied locally.\nThis should only be disabled for legacy game code that depends on non-replication of ActivationOwnedTags." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GlobalGameplayCueManager_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Manager for all gameplay cues */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystemGlobals.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Manager for all gameplay cues" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AbilitySystemGlobalsClassName;
	static void NewProp_bUseDebugTargetFromHud_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseDebugTargetFromHud;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActivateFailIsDeadTag;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ActivateFailIsDeadName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActivateFailCooldownTag;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ActivateFailCooldownName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActivateFailCostTag;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ActivateFailCostName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActivateFailTagsBlockedTag;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ActivateFailTagsBlockedName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActivateFailTagsMissingTag;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ActivateFailTagsMissingName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActivateFailNetworkingTag;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ActivateFailNetworkingName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MinimalReplicationTagCountBits;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetDataStructCache;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EffectContextStructCache;
	static void NewProp_bAllowGameplayModEvaluationChannels_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowGameplayModEvaluationChannels;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DefaultGameplayModEvaluationChannel_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DefaultGameplayModEvaluationChannel;
	static const UECodeGen_Private::FNamePropertyParams NewProp_GameplayModEvaluationChannelAliases;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GlobalCurveTableName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GlobalCurveTable;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GlobalAttributeMetaDataTableName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GlobalAttributeMetaDataTable;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GlobalAttributeSetDefaultsTableName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GlobalAttributeSetDefaultsTableNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GlobalAttributeSetDefaultsTableNames;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GlobalAttributeDefaultsTables_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GlobalAttributeDefaultsTables;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GlobalGameplayCueManagerClass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GlobalGameplayCueManagerName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_GameplayCueNotifyPaths_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GameplayCueNotifyPaths;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayTagResponseTableName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GameplayTagResponseTable;
	static void NewProp_PredictTargetGameplayEffects_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_PredictTargetGameplayEffects;
	static void NewProp_ReplicateActivationOwnedTags_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReplicateActivationOwnedTags;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GlobalGameplayCueManager;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAbilitySystemGlobals>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_AbilitySystemGlobalsClassName = { "AbilitySystemGlobalsClassName", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilitySystemGlobals, AbilitySystemGlobalsClassName), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilitySystemGlobalsClassName_MetaData), NewProp_AbilitySystemGlobalsClassName_MetaData) };
void Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_bUseDebugTargetFromHud_SetBit(void* Obj)
{
	((UAbilitySystemGlobals*)Obj)->bUseDebugTargetFromHud = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_bUseDebugTargetFromHud = { "bUseDebugTargetFromHud", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAbilitySystemGlobals), &Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_bUseDebugTargetFromHud_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseDebugTargetFromHud_MetaData), NewProp_bUseDebugTargetFromHud_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_ActivateFailIsDeadTag = { "ActivateFailIsDeadTag", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilitySystemGlobals, ActivateFailIsDeadTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActivateFailIsDeadTag_MetaData), NewProp_ActivateFailIsDeadTag_MetaData) }; // 1298103297
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_ActivateFailIsDeadName = { "ActivateFailIsDeadName", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilitySystemGlobals, ActivateFailIsDeadName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActivateFailIsDeadName_MetaData), NewProp_ActivateFailIsDeadName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_ActivateFailCooldownTag = { "ActivateFailCooldownTag", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilitySystemGlobals, ActivateFailCooldownTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActivateFailCooldownTag_MetaData), NewProp_ActivateFailCooldownTag_MetaData) }; // 1298103297
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_ActivateFailCooldownName = { "ActivateFailCooldownName", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilitySystemGlobals, ActivateFailCooldownName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActivateFailCooldownName_MetaData), NewProp_ActivateFailCooldownName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_ActivateFailCostTag = { "ActivateFailCostTag", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilitySystemGlobals, ActivateFailCostTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActivateFailCostTag_MetaData), NewProp_ActivateFailCostTag_MetaData) }; // 1298103297
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_ActivateFailCostName = { "ActivateFailCostName", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilitySystemGlobals, ActivateFailCostName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActivateFailCostName_MetaData), NewProp_ActivateFailCostName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_ActivateFailTagsBlockedTag = { "ActivateFailTagsBlockedTag", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilitySystemGlobals, ActivateFailTagsBlockedTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActivateFailTagsBlockedTag_MetaData), NewProp_ActivateFailTagsBlockedTag_MetaData) }; // 1298103297
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_ActivateFailTagsBlockedName = { "ActivateFailTagsBlockedName", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilitySystemGlobals, ActivateFailTagsBlockedName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActivateFailTagsBlockedName_MetaData), NewProp_ActivateFailTagsBlockedName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_ActivateFailTagsMissingTag = { "ActivateFailTagsMissingTag", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilitySystemGlobals, ActivateFailTagsMissingTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActivateFailTagsMissingTag_MetaData), NewProp_ActivateFailTagsMissingTag_MetaData) }; // 1298103297
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_ActivateFailTagsMissingName = { "ActivateFailTagsMissingName", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilitySystemGlobals, ActivateFailTagsMissingName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActivateFailTagsMissingName_MetaData), NewProp_ActivateFailTagsMissingName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_ActivateFailNetworkingTag = { "ActivateFailNetworkingTag", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilitySystemGlobals, ActivateFailNetworkingTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActivateFailNetworkingTag_MetaData), NewProp_ActivateFailNetworkingTag_MetaData) }; // 1298103297
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_ActivateFailNetworkingName = { "ActivateFailNetworkingName", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilitySystemGlobals, ActivateFailNetworkingName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActivateFailNetworkingName_MetaData), NewProp_ActivateFailNetworkingName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_MinimalReplicationTagCountBits = { "MinimalReplicationTagCountBits", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilitySystemGlobals, MinimalReplicationTagCountBits), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinimalReplicationTagCountBits_MetaData), NewProp_MinimalReplicationTagCountBits_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_TargetDataStructCache = { "TargetDataStructCache", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilitySystemGlobals, TargetDataStructCache), Z_Construct_UScriptStruct_FNetSerializeScriptStructCache, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetDataStructCache_MetaData), NewProp_TargetDataStructCache_MetaData) }; // 1021005206
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_EffectContextStructCache = { "EffectContextStructCache", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilitySystemGlobals, EffectContextStructCache), Z_Construct_UScriptStruct_FNetSerializeScriptStructCache, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EffectContextStructCache_MetaData), NewProp_EffectContextStructCache_MetaData) }; // 1021005206
void Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_bAllowGameplayModEvaluationChannels_SetBit(void* Obj)
{
	((UAbilitySystemGlobals*)Obj)->bAllowGameplayModEvaluationChannels = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_bAllowGameplayModEvaluationChannels = { "bAllowGameplayModEvaluationChannels", nullptr, (EPropertyFlags)0x0020080000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAbilitySystemGlobals), &Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_bAllowGameplayModEvaluationChannels_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowGameplayModEvaluationChannels_MetaData), NewProp_bAllowGameplayModEvaluationChannels_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_DefaultGameplayModEvaluationChannel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_DefaultGameplayModEvaluationChannel = { "DefaultGameplayModEvaluationChannel", nullptr, (EPropertyFlags)0x0020080000004000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilitySystemGlobals, DefaultGameplayModEvaluationChannel), Z_Construct_UEnum_GameplayAbilities_EGameplayModEvaluationChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultGameplayModEvaluationChannel_MetaData), NewProp_DefaultGameplayModEvaluationChannel_MetaData) }; // 2726299600
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_GameplayModEvaluationChannelAliases = { "GameplayModEvaluationChannelAliases", nullptr, (EPropertyFlags)0x0020080000004000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, CPP_ARRAY_DIM(GameplayModEvaluationChannelAliases, UAbilitySystemGlobals), STRUCT_OFFSET(UAbilitySystemGlobals, GameplayModEvaluationChannelAliases), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameplayModEvaluationChannelAliases_MetaData), NewProp_GameplayModEvaluationChannelAliases_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_GlobalCurveTableName = { "GlobalCurveTableName", nullptr, (EPropertyFlags)0x0020080000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilitySystemGlobals, GlobalCurveTableName), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GlobalCurveTableName_MetaData), NewProp_GlobalCurveTableName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_GlobalCurveTable = { "GlobalCurveTable", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilitySystemGlobals, GlobalCurveTable), Z_Construct_UClass_UCurveTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GlobalCurveTable_MetaData), NewProp_GlobalCurveTable_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_GlobalAttributeMetaDataTableName = { "GlobalAttributeMetaDataTableName", nullptr, (EPropertyFlags)0x0020080000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilitySystemGlobals, GlobalAttributeMetaDataTableName), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GlobalAttributeMetaDataTableName_MetaData), NewProp_GlobalAttributeMetaDataTableName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_GlobalAttributeMetaDataTable = { "GlobalAttributeMetaDataTable", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilitySystemGlobals, GlobalAttributeMetaDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GlobalAttributeMetaDataTable_MetaData), NewProp_GlobalAttributeMetaDataTable_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_GlobalAttributeSetDefaultsTableName = { "GlobalAttributeSetDefaultsTableName", nullptr, (EPropertyFlags)0x0020080000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilitySystemGlobals, GlobalAttributeSetDefaultsTableName), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GlobalAttributeSetDefaultsTableName_MetaData), NewProp_GlobalAttributeSetDefaultsTableName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_GlobalAttributeSetDefaultsTableNames_Inner = { "GlobalAttributeSetDefaultsTableNames", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_GlobalAttributeSetDefaultsTableNames = { "GlobalAttributeSetDefaultsTableNames", nullptr, (EPropertyFlags)0x0020080000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilitySystemGlobals, GlobalAttributeSetDefaultsTableNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GlobalAttributeSetDefaultsTableNames_MetaData), NewProp_GlobalAttributeSetDefaultsTableNames_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_GlobalAttributeDefaultsTables_Inner = { "GlobalAttributeDefaultsTables", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UCurveTable_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_GlobalAttributeDefaultsTables = { "GlobalAttributeDefaultsTables", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilitySystemGlobals, GlobalAttributeDefaultsTables), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GlobalAttributeDefaultsTables_MetaData), NewProp_GlobalAttributeDefaultsTables_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_GlobalGameplayCueManagerClass = { "GlobalGameplayCueManagerClass", nullptr, (EPropertyFlags)0x0020080000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilitySystemGlobals, GlobalGameplayCueManagerClass), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GlobalGameplayCueManagerClass_MetaData), NewProp_GlobalGameplayCueManagerClass_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_GlobalGameplayCueManagerName = { "GlobalGameplayCueManagerName", nullptr, (EPropertyFlags)0x0020080000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilitySystemGlobals, GlobalGameplayCueManagerName), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GlobalGameplayCueManagerName_MetaData), NewProp_GlobalGameplayCueManagerName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_GameplayCueNotifyPaths_Inner = { "GameplayCueNotifyPaths", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_GameplayCueNotifyPaths = { "GameplayCueNotifyPaths", nullptr, (EPropertyFlags)0x0020080000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilitySystemGlobals, GameplayCueNotifyPaths), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameplayCueNotifyPaths_MetaData), NewProp_GameplayCueNotifyPaths_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_GameplayTagResponseTableName = { "GameplayTagResponseTableName", nullptr, (EPropertyFlags)0x0020080000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilitySystemGlobals, GameplayTagResponseTableName), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameplayTagResponseTableName_MetaData), NewProp_GameplayTagResponseTableName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_GameplayTagResponseTable = { "GameplayTagResponseTable", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilitySystemGlobals, GameplayTagResponseTable), Z_Construct_UClass_UGameplayTagReponseTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameplayTagResponseTable_MetaData), NewProp_GameplayTagResponseTable_MetaData) };
void Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_PredictTargetGameplayEffects_SetBit(void* Obj)
{
	((UAbilitySystemGlobals*)Obj)->PredictTargetGameplayEffects = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_PredictTargetGameplayEffects = { "PredictTargetGameplayEffects", nullptr, (EPropertyFlags)0x0020080000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAbilitySystemGlobals), &Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_PredictTargetGameplayEffects_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PredictTargetGameplayEffects_MetaData), NewProp_PredictTargetGameplayEffects_MetaData) };
void Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_ReplicateActivationOwnedTags_SetBit(void* Obj)
{
	((UAbilitySystemGlobals*)Obj)->ReplicateActivationOwnedTags = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_ReplicateActivationOwnedTags = { "ReplicateActivationOwnedTags", nullptr, (EPropertyFlags)0x0020080000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAbilitySystemGlobals), &Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_ReplicateActivationOwnedTags_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReplicateActivationOwnedTags_MetaData), NewProp_ReplicateActivationOwnedTags_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_GlobalGameplayCueManager = { "GlobalGameplayCueManager", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilitySystemGlobals, GlobalGameplayCueManager), Z_Construct_UClass_UGameplayCueManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GlobalGameplayCueManager_MetaData), NewProp_GlobalGameplayCueManager_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAbilitySystemGlobals_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_AbilitySystemGlobalsClassName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_bUseDebugTargetFromHud,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_ActivateFailIsDeadTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_ActivateFailIsDeadName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_ActivateFailCooldownTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_ActivateFailCooldownName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_ActivateFailCostTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_ActivateFailCostName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_ActivateFailTagsBlockedTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_ActivateFailTagsBlockedName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_ActivateFailTagsMissingTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_ActivateFailTagsMissingName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_ActivateFailNetworkingTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_ActivateFailNetworkingName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_MinimalReplicationTagCountBits,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_TargetDataStructCache,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_EffectContextStructCache,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_bAllowGameplayModEvaluationChannels,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_DefaultGameplayModEvaluationChannel_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_DefaultGameplayModEvaluationChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_GameplayModEvaluationChannelAliases,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_GlobalCurveTableName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_GlobalCurveTable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_GlobalAttributeMetaDataTableName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_GlobalAttributeMetaDataTable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_GlobalAttributeSetDefaultsTableName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_GlobalAttributeSetDefaultsTableNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_GlobalAttributeSetDefaultsTableNames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_GlobalAttributeDefaultsTables_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_GlobalAttributeDefaultsTables,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_GlobalGameplayCueManagerClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_GlobalGameplayCueManagerName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_GameplayCueNotifyPaths_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_GameplayCueNotifyPaths,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_GameplayTagResponseTableName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_GameplayTagResponseTable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_PredictTargetGameplayEffects,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_ReplicateActivationOwnedTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_GlobalGameplayCueManager,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilitySystemGlobals_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAbilitySystemGlobals_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilitySystemGlobals_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAbilitySystemGlobals_Statics::ClassParams = {
	&UAbilitySystemGlobals::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAbilitySystemGlobals_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAbilitySystemGlobals_Statics::PropPointers),
	0,
	0x001000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilitySystemGlobals_Statics::Class_MetaDataParams), Z_Construct_UClass_UAbilitySystemGlobals_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAbilitySystemGlobals()
{
	if (!Z_Registration_Info_UClass_UAbilitySystemGlobals.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAbilitySystemGlobals.OuterSingleton, Z_Construct_UClass_UAbilitySystemGlobals_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAbilitySystemGlobals.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UClass* StaticClass<UAbilitySystemGlobals>()
{
	return UAbilitySystemGlobals::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAbilitySystemGlobals);
UAbilitySystemGlobals::~UAbilitySystemGlobals() {}
// End Class UAbilitySystemGlobals

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemGlobals_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FNetSerializeScriptStructCache::StaticStruct, Z_Construct_UScriptStruct_FNetSerializeScriptStructCache_Statics::NewStructOps, TEXT("NetSerializeScriptStructCache"), &Z_Registration_Info_UScriptStruct_NetSerializeScriptStructCache, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNetSerializeScriptStructCache), 1021005206U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAbilitySystemGlobals, UAbilitySystemGlobals::StaticClass, TEXT("UAbilitySystemGlobals"), &Z_Registration_Info_UClass_UAbilitySystemGlobals, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAbilitySystemGlobals), 3488090592U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemGlobals_h_1463857135(TEXT("/Script/GameplayAbilities"),
	Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemGlobals_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemGlobals_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemGlobals_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemGlobals_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
