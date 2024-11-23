// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayAbilities/Public/GameplayEffectTypes.h"
#include "GameplayAbilities/Public/ActiveGameplayEffectHandle.h"
#include "GameplayAbilities/Public/AttributeSet.h"
#include "Runtime/Engine/Classes/Engine/NetSerialization.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayEffectTypes() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantize10();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantizeNormal();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
GAMEPLAYABILITIES_API UEnum* Z_Construct_UEnum_GameplayAbilities_EGameplayCueEvent();
GAMEPLAYABILITIES_API UEnum* Z_Construct_UEnum_GameplayAbilities_EGameplayEffectStackingType();
GAMEPLAYABILITIES_API UEnum* Z_Construct_UEnum_GameplayAbilities_EGameplayModEvaluationChannel();
GAMEPLAYABILITIES_API UEnum* Z_Construct_UEnum_GameplayAbilities_EGameplayModOp();
GAMEPLAYABILITIES_API UEnum* Z_Construct_UEnum_GameplayAbilities_EGameplayTagEventType();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FActiveGameplayEffectHandle();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttribute();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayCueParameters();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectContext();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectContextHandle();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectRemovalInfo();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectSpecHandle();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayModEvaluationChannelSettings();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayModifierEvaluatedData();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMap();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMapping();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagRequirements();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FMinimalReplicationTagCountMap();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FTagContainerAggregator();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagQuery();
PHYSICSCORE_API UClass* Z_Construct_UClass_UPhysicalMaterial_NoRegister();
UPackage* Z_Construct_UPackage__Script_GameplayAbilities();
// End Cross Module References

// Begin Enum EGameplayModEvaluationChannel
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGameplayModEvaluationChannel;
static UEnum* EGameplayModEvaluationChannel_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGameplayModEvaluationChannel.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGameplayModEvaluationChannel.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GameplayAbilities_EGameplayModEvaluationChannel, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("EGameplayModEvaluationChannel"));
	}
	return Z_Registration_Info_UEnum_EGameplayModEvaluationChannel.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UEnum* StaticEnum<EGameplayModEvaluationChannel>()
{
	return EGameplayModEvaluationChannel_StaticEnum();
}
struct Z_Construct_UEnum_GameplayAbilities_EGameplayModEvaluationChannel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Channel0.Hidden", "" },
		{ "Channel0.Name", "EGameplayModEvaluationChannel::Channel0" },
		{ "Channel1.Hidden", "" },
		{ "Channel1.Name", "EGameplayModEvaluationChannel::Channel1" },
		{ "Channel2.Hidden", "" },
		{ "Channel2.Name", "EGameplayModEvaluationChannel::Channel2" },
		{ "Channel3.Hidden", "" },
		{ "Channel3.Name", "EGameplayModEvaluationChannel::Channel3" },
		{ "Channel4.Hidden", "" },
		{ "Channel4.Name", "EGameplayModEvaluationChannel::Channel4" },
		{ "Channel5.Hidden", "" },
		{ "Channel5.Name", "EGameplayModEvaluationChannel::Channel5" },
		{ "Channel6.Hidden", "" },
		{ "Channel6.Name", "EGameplayModEvaluationChannel::Channel6" },
		{ "Channel7.Hidden", "" },
		{ "Channel7.Name", "EGameplayModEvaluationChannel::Channel7" },
		{ "Channel8.Hidden", "" },
		{ "Channel8.Name", "EGameplayModEvaluationChannel::Channel8" },
		{ "Channel9.Hidden", "" },
		{ "Channel9.Name", "EGameplayModEvaluationChannel::Channel9" },
		{ "Channel_MAX.Comment", "// Always keep last\n" },
		{ "Channel_MAX.Hidden", "" },
		{ "Channel_MAX.Name", "EGameplayModEvaluationChannel::Channel_MAX" },
		{ "Channel_MAX.ToolTip", "Always keep last" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Valid gameplay modifier evaluation channels; Displayed and renamed via game-specific aliases and options */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Valid gameplay modifier evaluation channels; Displayed and renamed via game-specific aliases and options" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGameplayModEvaluationChannel::Channel0", (int64)EGameplayModEvaluationChannel::Channel0 },
		{ "EGameplayModEvaluationChannel::Channel1", (int64)EGameplayModEvaluationChannel::Channel1 },
		{ "EGameplayModEvaluationChannel::Channel2", (int64)EGameplayModEvaluationChannel::Channel2 },
		{ "EGameplayModEvaluationChannel::Channel3", (int64)EGameplayModEvaluationChannel::Channel3 },
		{ "EGameplayModEvaluationChannel::Channel4", (int64)EGameplayModEvaluationChannel::Channel4 },
		{ "EGameplayModEvaluationChannel::Channel5", (int64)EGameplayModEvaluationChannel::Channel5 },
		{ "EGameplayModEvaluationChannel::Channel6", (int64)EGameplayModEvaluationChannel::Channel6 },
		{ "EGameplayModEvaluationChannel::Channel7", (int64)EGameplayModEvaluationChannel::Channel7 },
		{ "EGameplayModEvaluationChannel::Channel8", (int64)EGameplayModEvaluationChannel::Channel8 },
		{ "EGameplayModEvaluationChannel::Channel9", (int64)EGameplayModEvaluationChannel::Channel9 },
		{ "EGameplayModEvaluationChannel::Channel_MAX", (int64)EGameplayModEvaluationChannel::Channel_MAX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GameplayAbilities_EGameplayModEvaluationChannel_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_GameplayAbilities,
	nullptr,
	"EGameplayModEvaluationChannel",
	"EGameplayModEvaluationChannel",
	Z_Construct_UEnum_GameplayAbilities_EGameplayModEvaluationChannel_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayAbilities_EGameplayModEvaluationChannel_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayAbilities_EGameplayModEvaluationChannel_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GameplayAbilities_EGameplayModEvaluationChannel_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_GameplayAbilities_EGameplayModEvaluationChannel()
{
	if (!Z_Registration_Info_UEnum_EGameplayModEvaluationChannel.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGameplayModEvaluationChannel.InnerSingleton, Z_Construct_UEnum_GameplayAbilities_EGameplayModEvaluationChannel_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGameplayModEvaluationChannel.InnerSingleton;
}
// End Enum EGameplayModEvaluationChannel

// Begin ScriptStruct FGameplayModEvaluationChannelSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayModEvaluationChannelSettings;
class UScriptStruct* FGameplayModEvaluationChannelSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayModEvaluationChannelSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayModEvaluationChannelSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayModEvaluationChannelSettings, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("GameplayModEvaluationChannelSettings"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayModEvaluationChannelSettings.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FGameplayModEvaluationChannelSettings>()
{
	return FGameplayModEvaluationChannelSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGameplayModEvaluationChannelSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Struct representing evaluation channel settings for a gameplay modifier */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Struct representing evaluation channel settings for a gameplay modifier" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Channel_MetaData[] = {
		{ "Category", "EvaluationChannel" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Channel the settings would prefer to use, if possible/valid */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Channel the settings would prefer to use, if possible/valid" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Channel_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Channel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayModEvaluationChannelSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGameplayModEvaluationChannelSettings_Statics::NewProp_Channel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGameplayModEvaluationChannelSettings_Statics::NewProp_Channel = { "Channel", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayModEvaluationChannelSettings, Channel), Z_Construct_UEnum_GameplayAbilities_EGameplayModEvaluationChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Channel_MetaData), NewProp_Channel_MetaData) }; // 2726299600
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayModEvaluationChannelSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayModEvaluationChannelSettings_Statics::NewProp_Channel_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayModEvaluationChannelSettings_Statics::NewProp_Channel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayModEvaluationChannelSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayModEvaluationChannelSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
	nullptr,
	&NewStructOps,
	"GameplayModEvaluationChannelSettings",
	Z_Construct_UScriptStruct_FGameplayModEvaluationChannelSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayModEvaluationChannelSettings_Statics::PropPointers),
	sizeof(FGameplayModEvaluationChannelSettings),
	alignof(FGameplayModEvaluationChannelSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayModEvaluationChannelSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGameplayModEvaluationChannelSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGameplayModEvaluationChannelSettings()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayModEvaluationChannelSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayModEvaluationChannelSettings.InnerSingleton, Z_Construct_UScriptStruct_FGameplayModEvaluationChannelSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GameplayModEvaluationChannelSettings.InnerSingleton;
}
// End ScriptStruct FGameplayModEvaluationChannelSettings

// Begin Enum EGameplayModOp
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGameplayModOp;
static UEnum* EGameplayModOp_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGameplayModOp.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGameplayModOp.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GameplayAbilities_EGameplayModOp, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("EGameplayModOp"));
	}
	return Z_Registration_Info_UEnum_EGameplayModOp.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UEnum* StaticEnum<EGameplayModOp::Type>()
{
	return EGameplayModOp_StaticEnum();
}
struct Z_Construct_UEnum_GameplayAbilities_EGameplayModOp_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Additive.Comment", "/** Numeric. */" },
		{ "Additive.DisplayName", "Add" },
		{ "Additive.Name", "EGameplayModOp::Additive" },
		{ "Additive.ToolTip", "Numeric." },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Defines the ways that mods will modify attributes. Numeric ones operate on the existing value, override ignores it */" },
#endif
		{ "Division.Comment", "/** Numeric. */" },
		{ "Division.DisplayName", "Divide" },
		{ "Division.Name", "EGameplayModOp::Division" },
		{ "Division.ToolTip", "Numeric." },
		{ "Max.Comment", "// This must always be at the end.\n" },
		{ "Max.DisplayName", "Invalid" },
		{ "Max.Name", "EGameplayModOp::Max" },
		{ "Max.ToolTip", "This must always be at the end." },
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
		{ "Multiplicitive.Comment", "/** Numeric. */" },
		{ "Multiplicitive.DisplayName", "Multiply" },
		{ "Multiplicitive.Name", "EGameplayModOp::Multiplicitive" },
		{ "Multiplicitive.ToolTip", "Numeric." },
		{ "Override.Comment", "/** Other. */" },
		{ "Override.DisplayName", "Override" },
		{ "Override.Name", "EGameplayModOp::Override" },
		{ "Override.ToolTip", "Other." },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Defines the ways that mods will modify attributes. Numeric ones operate on the existing value, override ignores it" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGameplayModOp::Additive", (int64)EGameplayModOp::Additive },
		{ "EGameplayModOp::Multiplicitive", (int64)EGameplayModOp::Multiplicitive },
		{ "EGameplayModOp::Division", (int64)EGameplayModOp::Division },
		{ "EGameplayModOp::Override", (int64)EGameplayModOp::Override },
		{ "EGameplayModOp::Max", (int64)EGameplayModOp::Max },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GameplayAbilities_EGameplayModOp_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_GameplayAbilities,
	nullptr,
	"EGameplayModOp",
	"EGameplayModOp::Type",
	Z_Construct_UEnum_GameplayAbilities_EGameplayModOp_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayAbilities_EGameplayModOp_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Namespaced,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayAbilities_EGameplayModOp_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GameplayAbilities_EGameplayModOp_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_GameplayAbilities_EGameplayModOp()
{
	if (!Z_Registration_Info_UEnum_EGameplayModOp.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGameplayModOp.InnerSingleton, Z_Construct_UEnum_GameplayAbilities_EGameplayModOp_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGameplayModOp.InnerSingleton;
}
// End Enum EGameplayModOp

// Begin Enum EGameplayEffectStackingType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGameplayEffectStackingType;
static UEnum* EGameplayEffectStackingType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGameplayEffectStackingType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGameplayEffectStackingType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GameplayAbilities_EGameplayEffectStackingType, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("EGameplayEffectStackingType"));
	}
	return Z_Registration_Info_UEnum_EGameplayEffectStackingType.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UEnum* StaticEnum<EGameplayEffectStackingType>()
{
	return EGameplayEffectStackingType_StaticEnum();
}
struct Z_Construct_UEnum_GameplayAbilities_EGameplayEffectStackingType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AggregateBySource.Comment", "/** Each caster has its own stack. */" },
		{ "AggregateBySource.Name", "EGameplayEffectStackingType::AggregateBySource" },
		{ "AggregateBySource.ToolTip", "Each caster has its own stack." },
		{ "AggregateByTarget.Comment", "/** Each target has its own stack. */" },
		{ "AggregateByTarget.Name", "EGameplayEffectStackingType::AggregateByTarget" },
		{ "AggregateByTarget.ToolTip", "Each target has its own stack." },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Enumeration for ways a single GameplayEffect asset can stack. */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
		{ "None.Comment", "/** No stacking. Multiple applications of this GameplayEffect are treated as separate instances. */" },
		{ "None.Name", "EGameplayEffectStackingType::None" },
		{ "None.ToolTip", "No stacking. Multiple applications of this GameplayEffect are treated as separate instances." },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enumeration for ways a single GameplayEffect asset can stack." },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGameplayEffectStackingType::None", (int64)EGameplayEffectStackingType::None },
		{ "EGameplayEffectStackingType::AggregateBySource", (int64)EGameplayEffectStackingType::AggregateBySource },
		{ "EGameplayEffectStackingType::AggregateByTarget", (int64)EGameplayEffectStackingType::AggregateByTarget },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GameplayAbilities_EGameplayEffectStackingType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_GameplayAbilities,
	nullptr,
	"EGameplayEffectStackingType",
	"EGameplayEffectStackingType",
	Z_Construct_UEnum_GameplayAbilities_EGameplayEffectStackingType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayAbilities_EGameplayEffectStackingType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayAbilities_EGameplayEffectStackingType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GameplayAbilities_EGameplayEffectStackingType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_GameplayAbilities_EGameplayEffectStackingType()
{
	if (!Z_Registration_Info_UEnum_EGameplayEffectStackingType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGameplayEffectStackingType.InnerSingleton, Z_Construct_UEnum_GameplayAbilities_EGameplayEffectStackingType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGameplayEffectStackingType.InnerSingleton;
}
// End Enum EGameplayEffectStackingType

// Begin ScriptStruct FGameplayModifierEvaluatedData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayModifierEvaluatedData;
class UScriptStruct* FGameplayModifierEvaluatedData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayModifierEvaluatedData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayModifierEvaluatedData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayModifierEvaluatedData, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("GameplayModifierEvaluatedData"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayModifierEvaluatedData.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FGameplayModifierEvaluatedData>()
{
	return FGameplayModifierEvaluatedData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGameplayModifierEvaluatedData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Data that describes what happened in an attribute modification. This is passed to ability set callbacks */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Data that describes what happened in an attribute modification. This is passed to ability set callbacks" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Attribute_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** What attribute was modified */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "What attribute was modified" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModifierOp_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The numeric operation of this modifier: Override, Add, Multiply, etc  */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The numeric operation of this modifier: Override, Add, Multiply, etc" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Magnitude_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The raw magnitude of the applied attribute, this is generally before being clamped */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The raw magnitude of the applied attribute, this is generally before being clamped" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Handle_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Handle of the active gameplay effect that originated us. Will be invalid in many cases */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Handle of the active gameplay effect that originated us. Will be invalid in many cases" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsValid_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** True if something was evaluated */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "True if something was evaluated" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Attribute;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ModifierOp;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Magnitude;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static void NewProp_IsValid_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsValid;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayModifierEvaluatedData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayModifierEvaluatedData_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayModifierEvaluatedData, Attribute), Z_Construct_UScriptStruct_FGameplayAttribute, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Attribute_MetaData), NewProp_Attribute_MetaData) }; // 884374022
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGameplayModifierEvaluatedData_Statics::NewProp_ModifierOp = { "ModifierOp", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayModifierEvaluatedData, ModifierOp), Z_Construct_UEnum_GameplayAbilities_EGameplayModOp, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModifierOp_MetaData), NewProp_ModifierOp_MetaData) }; // 2940526104
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGameplayModifierEvaluatedData_Statics::NewProp_Magnitude = { "Magnitude", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayModifierEvaluatedData, Magnitude), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Magnitude_MetaData), NewProp_Magnitude_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayModifierEvaluatedData_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayModifierEvaluatedData, Handle), Z_Construct_UScriptStruct_FActiveGameplayEffectHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Handle_MetaData), NewProp_Handle_MetaData) }; // 11669558
void Z_Construct_UScriptStruct_FGameplayModifierEvaluatedData_Statics::NewProp_IsValid_SetBit(void* Obj)
{
	((FGameplayModifierEvaluatedData*)Obj)->IsValid = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameplayModifierEvaluatedData_Statics::NewProp_IsValid = { "IsValid", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGameplayModifierEvaluatedData), &Z_Construct_UScriptStruct_FGameplayModifierEvaluatedData_Statics::NewProp_IsValid_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsValid_MetaData), NewProp_IsValid_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayModifierEvaluatedData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayModifierEvaluatedData_Statics::NewProp_Attribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayModifierEvaluatedData_Statics::NewProp_ModifierOp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayModifierEvaluatedData_Statics::NewProp_Magnitude,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayModifierEvaluatedData_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayModifierEvaluatedData_Statics::NewProp_IsValid,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayModifierEvaluatedData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayModifierEvaluatedData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
	nullptr,
	&NewStructOps,
	"GameplayModifierEvaluatedData",
	Z_Construct_UScriptStruct_FGameplayModifierEvaluatedData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayModifierEvaluatedData_Statics::PropPointers),
	sizeof(FGameplayModifierEvaluatedData),
	alignof(FGameplayModifierEvaluatedData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayModifierEvaluatedData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGameplayModifierEvaluatedData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGameplayModifierEvaluatedData()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayModifierEvaluatedData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayModifierEvaluatedData.InnerSingleton, Z_Construct_UScriptStruct_FGameplayModifierEvaluatedData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GameplayModifierEvaluatedData.InnerSingleton;
}
// End ScriptStruct FGameplayModifierEvaluatedData

// Begin ScriptStruct FGameplayEffectContext
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayEffectContext;
class UScriptStruct* FGameplayEffectContext::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayEffectContext.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayEffectContext.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayEffectContext, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("GameplayEffectContext"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayEffectContext.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FGameplayEffectContext>()
{
	return FGameplayEffectContext::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGameplayEffectContext_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Data structure that stores an instigator and related data, such as positions and targets\n * Games can subclass this structure and add game-specific information\n * It is passed throughout effect execution so it is a great place to track transient information about an execution\n */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Data structure that stores an instigator and related data, such as positions and targets\nGames can subclass this structure and add game-specific information\nIt is passed throughout effect execution so it is a great place to track transient information about an execution" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Instigator_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Instigator actor, the actor that owns the ability system component */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Instigator actor, the actor that owns the ability system component" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EffectCauser_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The physical actor that actually did the damage, can be a weapon or projectile */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The physical actor that actually did the damage, can be a weapon or projectile" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityCDO_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The ability CDO that is responsible for this effect context (replicated) */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The ability CDO that is responsible for this effect context (replicated)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityInstanceNotReplicated_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The ability instance that is responsible for this effect context (NOT replicated) */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The ability instance that is responsible for this effect context (NOT replicated)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityLevel_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The level this was executed at */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The level this was executed at" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceObject_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Object this effect was created from, can be an actor or static object. Useful to bind an effect to a gameplay object */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Object this effect was created from, can be an actor or static object. Useful to bind an effect to a gameplay object" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InstigatorAbilitySystemComponent_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The ability system component that's bound to instigator */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The ability system component that's bound to instigator" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Actors_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Actors referenced by this context */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Actors referenced by this context" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldOrigin_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Stored origin, may be invalid if bHasWorldOrigin is false */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Stored origin, may be invalid if bHasWorldOrigin is false" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasWorldOrigin_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bReplicateSourceObject_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** True if the SourceObject can be replicated. This bool is not replicated itself. */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "True if the SourceObject can be replicated. This bool is not replicated itself." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bReplicateInstigator_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** True if the Instigator can be replicated. This bool is not replicated itself. */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "True if the Instigator can be replicated. This bool is not replicated itself." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bReplicateEffectCauser_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** True if the Instigator can be replicated. This bool is not replicated itself. */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "True if the Instigator can be replicated. This bool is not replicated itself." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_Instigator;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_EffectCauser;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_AbilityCDO;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_AbilityInstanceNotReplicated;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AbilityLevel;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_SourceObject;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_InstigatorAbilitySystemComponent;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_Actors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Actors;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldOrigin;
	static void NewProp_bHasWorldOrigin_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasWorldOrigin;
	static void NewProp_bReplicateSourceObject_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReplicateSourceObject;
	static void NewProp_bReplicateInstigator_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReplicateInstigator;
	static void NewProp_bReplicateEffectCauser_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReplicateEffectCauser;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayEffectContext>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayEffectContext, Instigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Instigator_MetaData), NewProp_Instigator_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::NewProp_EffectCauser = { "EffectCauser", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayEffectContext, EffectCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EffectCauser_MetaData), NewProp_EffectCauser_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::NewProp_AbilityCDO = { "AbilityCDO", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayEffectContext, AbilityCDO), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityCDO_MetaData), NewProp_AbilityCDO_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::NewProp_AbilityInstanceNotReplicated = { "AbilityInstanceNotReplicated", nullptr, (EPropertyFlags)0x0024080080000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayEffectContext, AbilityInstanceNotReplicated), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityInstanceNotReplicated_MetaData), NewProp_AbilityInstanceNotReplicated_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::NewProp_AbilityLevel = { "AbilityLevel", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayEffectContext, AbilityLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityLevel_MetaData), NewProp_AbilityLevel_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::NewProp_SourceObject = { "SourceObject", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayEffectContext, SourceObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceObject_MetaData), NewProp_SourceObject_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::NewProp_InstigatorAbilitySystemComponent = { "InstigatorAbilitySystemComponent", nullptr, (EPropertyFlags)0x0024080080080008, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayEffectContext, InstigatorAbilitySystemComponent), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InstigatorAbilitySystemComponent_MetaData), NewProp_InstigatorAbilitySystemComponent_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::NewProp_Actors_Inner = { "Actors", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::NewProp_Actors = { "Actors", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayEffectContext, Actors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Actors_MetaData), NewProp_Actors_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::NewProp_WorldOrigin = { "WorldOrigin", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayEffectContext, WorldOrigin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldOrigin_MetaData), NewProp_WorldOrigin_MetaData) };
void Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::NewProp_bHasWorldOrigin_SetBit(void* Obj)
{
	((FGameplayEffectContext*)Obj)->bHasWorldOrigin = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::NewProp_bHasWorldOrigin = { "bHasWorldOrigin", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FGameplayEffectContext), &Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::NewProp_bHasWorldOrigin_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasWorldOrigin_MetaData), NewProp_bHasWorldOrigin_MetaData) };
void Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::NewProp_bReplicateSourceObject_SetBit(void* Obj)
{
	((FGameplayEffectContext*)Obj)->bReplicateSourceObject = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::NewProp_bReplicateSourceObject = { "bReplicateSourceObject", nullptr, (EPropertyFlags)0x0020080080000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FGameplayEffectContext), &Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::NewProp_bReplicateSourceObject_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bReplicateSourceObject_MetaData), NewProp_bReplicateSourceObject_MetaData) };
void Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::NewProp_bReplicateInstigator_SetBit(void* Obj)
{
	((FGameplayEffectContext*)Obj)->bReplicateInstigator = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::NewProp_bReplicateInstigator = { "bReplicateInstigator", nullptr, (EPropertyFlags)0x0020080080000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FGameplayEffectContext), &Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::NewProp_bReplicateInstigator_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bReplicateInstigator_MetaData), NewProp_bReplicateInstigator_MetaData) };
void Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::NewProp_bReplicateEffectCauser_SetBit(void* Obj)
{
	((FGameplayEffectContext*)Obj)->bReplicateEffectCauser = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::NewProp_bReplicateEffectCauser = { "bReplicateEffectCauser", nullptr, (EPropertyFlags)0x0020080080000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FGameplayEffectContext), &Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::NewProp_bReplicateEffectCauser_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bReplicateEffectCauser_MetaData), NewProp_bReplicateEffectCauser_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::NewProp_Instigator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::NewProp_EffectCauser,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::NewProp_AbilityCDO,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::NewProp_AbilityInstanceNotReplicated,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::NewProp_AbilityLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::NewProp_SourceObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::NewProp_InstigatorAbilitySystemComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::NewProp_Actors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::NewProp_Actors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::NewProp_WorldOrigin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::NewProp_bHasWorldOrigin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::NewProp_bReplicateSourceObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::NewProp_bReplicateInstigator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::NewProp_bReplicateEffectCauser,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
	nullptr,
	&NewStructOps,
	"GameplayEffectContext",
	Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::PropPointers),
	sizeof(FGameplayEffectContext),
	alignof(FGameplayEffectContext),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000205),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectContext()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayEffectContext.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayEffectContext.InnerSingleton, Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GameplayEffectContext.InnerSingleton;
}
// End ScriptStruct FGameplayEffectContext

// Begin ScriptStruct FGameplayEffectContextHandle
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayEffectContextHandle;
class UScriptStruct* FGameplayEffectContextHandle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayEffectContextHandle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayEffectContextHandle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayEffectContextHandle, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("GameplayEffectContextHandle"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayEffectContextHandle.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FGameplayEffectContextHandle>()
{
	return FGameplayEffectContextHandle::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGameplayEffectContextHandle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Handle that wraps a FGameplayEffectContext or subclass, to allow it to be polymorphic and replicate properly\n */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Handle that wraps a FGameplayEffectContext or subclass, to allow it to be polymorphic and replicate properly" },
#endif
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayEffectContextHandle>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayEffectContextHandle_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
	nullptr,
	&NewStructOps,
	"GameplayEffectContextHandle",
	nullptr,
	0,
	sizeof(FGameplayEffectContextHandle),
	alignof(FGameplayEffectContextHandle),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectContextHandle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGameplayEffectContextHandle_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectContextHandle()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayEffectContextHandle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayEffectContextHandle.InnerSingleton, Z_Construct_UScriptStruct_FGameplayEffectContextHandle_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GameplayEffectContextHandle.InnerSingleton;
}
// End ScriptStruct FGameplayEffectContextHandle

// Begin ScriptStruct FGameplayEffectRemovalInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayEffectRemovalInfo;
class UScriptStruct* FGameplayEffectRemovalInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayEffectRemovalInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayEffectRemovalInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayEffectRemovalInfo, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("GameplayEffectRemovalInfo"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayEffectRemovalInfo.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FGameplayEffectRemovalInfo>()
{
	return FGameplayEffectRemovalInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGameplayEffectRemovalInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Data struct for containing information pertinent to GameplayEffects as they are removed */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Data struct for containing information pertinent to GameplayEffects as they are removed" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPrematureRemoval_MetaData[] = {
		{ "Category", "Removal" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** True when the gameplay effect's duration has not expired, meaning the gameplay effect is being forcefully removed.  */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "True when the gameplay effect's duration has not expired, meaning the gameplay effect is being forcefully removed." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StackCount_MetaData[] = {
		{ "Category", "Removal" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Number of Stacks this gameplay effect had before it was removed. */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Number of Stacks this gameplay effect had before it was removed." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EffectContext_MetaData[] = {
		{ "Category", "Removal" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Actor this gameplay effect was targeting. */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Actor this gameplay effect was targeting." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bPrematureRemoval_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPrematureRemoval;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StackCount;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EffectContext;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayEffectRemovalInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FGameplayEffectRemovalInfo_Statics::NewProp_bPrematureRemoval_SetBit(void* Obj)
{
	((FGameplayEffectRemovalInfo*)Obj)->bPrematureRemoval = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameplayEffectRemovalInfo_Statics::NewProp_bPrematureRemoval = { "bPrematureRemoval", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGameplayEffectRemovalInfo), &Z_Construct_UScriptStruct_FGameplayEffectRemovalInfo_Statics::NewProp_bPrematureRemoval_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPrematureRemoval_MetaData), NewProp_bPrematureRemoval_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameplayEffectRemovalInfo_Statics::NewProp_StackCount = { "StackCount", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayEffectRemovalInfo, StackCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StackCount_MetaData), NewProp_StackCount_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayEffectRemovalInfo_Statics::NewProp_EffectContext = { "EffectContext", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayEffectRemovalInfo, EffectContext), Z_Construct_UScriptStruct_FGameplayEffectContextHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EffectContext_MetaData), NewProp_EffectContext_MetaData) }; // 3292467274
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayEffectRemovalInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectRemovalInfo_Statics::NewProp_bPrematureRemoval,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectRemovalInfo_Statics::NewProp_StackCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectRemovalInfo_Statics::NewProp_EffectContext,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectRemovalInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayEffectRemovalInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
	nullptr,
	&NewStructOps,
	"GameplayEffectRemovalInfo",
	Z_Construct_UScriptStruct_FGameplayEffectRemovalInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectRemovalInfo_Statics::PropPointers),
	sizeof(FGameplayEffectRemovalInfo),
	alignof(FGameplayEffectRemovalInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectRemovalInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGameplayEffectRemovalInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectRemovalInfo()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayEffectRemovalInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayEffectRemovalInfo.InnerSingleton, Z_Construct_UScriptStruct_FGameplayEffectRemovalInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GameplayEffectRemovalInfo.InnerSingleton;
}
// End ScriptStruct FGameplayEffectRemovalInfo

// Begin ScriptStruct FGameplayCueParameters
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayCueParameters;
class UScriptStruct* FGameplayCueParameters::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayCueParameters.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayCueParameters.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayCueParameters, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("GameplayCueParameters"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayCueParameters.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FGameplayCueParameters>()
{
	return FGameplayCueParameters::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGameplayCueParameters_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Metadata about a gameplay cue execution */" },
#endif
		{ "HasNativeBreak", "/Script/GameplayAbilities.AbilitySystemBlueprintLibrary.BreakGameplayCueParameters" },
		{ "HasNativeMake", "/Script/GameplayAbilities.AbilitySystemBlueprintLibrary.MakeGameplayCueParameters" },
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Metadata about a gameplay cue execution" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NormalizedMagnitude_MetaData[] = {
		{ "Category", "GameplayCue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Magnitude of source gameplay effect, normalzed from 0-1. Use this for \"how strong is the gameplay effect\" (0=min, 1=,max) */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Magnitude of source gameplay effect, normalzed from 0-1. Use this for \"how strong is the gameplay effect\" (0=min, 1=,max)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RawMagnitude_MetaData[] = {
		{ "Category", "GameplayCue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Raw final magnitude of source gameplay effect. Use this is you need to display numbers or for other informational purposes. */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Raw final magnitude of source gameplay effect. Use this is you need to display numbers or for other informational purposes." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EffectContext_MetaData[] = {
		{ "Category", "GameplayCue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Effect context, contains information about hit result, etc */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Effect context, contains information about hit result, etc" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MatchedTagName_MetaData[] = {
		{ "Category", "GameplayCue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The tag name that matched this specific gameplay cue handler */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The tag name that matched this specific gameplay cue handler" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OriginalTag_MetaData[] = {
		{ "Category", "GameplayCue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The original tag of the gameplay cue */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The original tag of the gameplay cue" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AggregatedSourceTags_MetaData[] = {
		{ "Category", "GameplayCue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The aggregated source tags taken from the effect spec */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The aggregated source tags taken from the effect spec" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AggregatedTargetTags_MetaData[] = {
		{ "Category", "GameplayCue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The aggregated target tags taken from the effect spec */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The aggregated target tags taken from the effect spec" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "Category", "GameplayCue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Location cue took place at */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Location cue took place at" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Normal_MetaData[] = {
		{ "Category", "GameplayCue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Normal of impact that caused cue */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Normal of impact that caused cue" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Instigator_MetaData[] = {
		{ "Category", "GameplayCue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Instigator actor, the actor that owns the ability system component */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Instigator actor, the actor that owns the ability system component" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EffectCauser_MetaData[] = {
		{ "Category", "GameplayCue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The physical actor that actually did the damage, can be a weapon or projectile */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The physical actor that actually did the damage, can be a weapon or projectile" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceObject_MetaData[] = {
		{ "Category", "GameplayCue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Object this effect was created from, can be an actor or static object. Useful to bind an effect to a gameplay object */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
		{ "NativeConstTemplateArg", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Object this effect was created from, can be an actor or static object. Useful to bind an effect to a gameplay object" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PhysicalMaterial_MetaData[] = {
		{ "Category", "GameplayCue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** PhysMat of the hit, if there was a hit. */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
		{ "NativeConstTemplateArg", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "PhysMat of the hit, if there was a hit." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameplayEffectLevel_MetaData[] = {
		{ "Category", "GameplayCue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If originating from a GameplayEffect, the level of that GameplayEffect */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If originating from a GameplayEffect, the level of that GameplayEffect" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityLevel_MetaData[] = {
		{ "Category", "GameplayCue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If originating from an ability, this will be the level of that ability */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If originating from an ability, this will be the level of that ability" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetAttachComponent_MetaData[] = {
		{ "Category", "GameplayCue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Could be used to say \"attach FX to this component always\" */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Could be used to say \"attach FX to this component always\"" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bReplicateLocationWhenUsingMinimalRepProxy_MetaData[] = {
		{ "Category", "GameplayCue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If we're using a minimal replication proxy, should we replicate location for this cue */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If we're using a minimal replication proxy, should we replicate location for this cue" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NormalizedMagnitude;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RawMagnitude;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EffectContext;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MatchedTagName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OriginalTag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AggregatedSourceTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AggregatedTargetTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Normal;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_Instigator;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_EffectCauser;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_SourceObject;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_PhysicalMaterial;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GameplayEffectLevel;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AbilityLevel;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_TargetAttachComponent;
	static void NewProp_bReplicateLocationWhenUsingMinimalRepProxy_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReplicateLocationWhenUsingMinimalRepProxy;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayCueParameters>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_NormalizedMagnitude = { "NormalizedMagnitude", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayCueParameters, NormalizedMagnitude), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NormalizedMagnitude_MetaData), NewProp_NormalizedMagnitude_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_RawMagnitude = { "RawMagnitude", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayCueParameters, RawMagnitude), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RawMagnitude_MetaData), NewProp_RawMagnitude_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_EffectContext = { "EffectContext", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayCueParameters, EffectContext), Z_Construct_UScriptStruct_FGameplayEffectContextHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EffectContext_MetaData), NewProp_EffectContext_MetaData) }; // 3292467274
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_MatchedTagName = { "MatchedTagName", nullptr, (EPropertyFlags)0x0010000080000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayCueParameters, MatchedTagName), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MatchedTagName_MetaData), NewProp_MatchedTagName_MetaData) }; // 1298103297
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_OriginalTag = { "OriginalTag", nullptr, (EPropertyFlags)0x0010000080000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayCueParameters, OriginalTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OriginalTag_MetaData), NewProp_OriginalTag_MetaData) }; // 1298103297
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_AggregatedSourceTags = { "AggregatedSourceTags", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayCueParameters, AggregatedSourceTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AggregatedSourceTags_MetaData), NewProp_AggregatedSourceTags_MetaData) }; // 3352185621
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_AggregatedTargetTags = { "AggregatedTargetTags", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayCueParameters, AggregatedTargetTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AggregatedTargetTags_MetaData), NewProp_AggregatedTargetTags_MetaData) }; // 3352185621
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayCueParameters, Location), Z_Construct_UScriptStruct_FVector_NetQuantize10, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) }; // 1191031901
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_Normal = { "Normal", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayCueParameters, Normal), Z_Construct_UScriptStruct_FVector_NetQuantizeNormal, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Normal_MetaData), NewProp_Normal_MetaData) }; // 1520846145
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0014000000000004, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayCueParameters, Instigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Instigator_MetaData), NewProp_Instigator_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_EffectCauser = { "EffectCauser", nullptr, (EPropertyFlags)0x0014000000000004, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayCueParameters, EffectCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EffectCauser_MetaData), NewProp_EffectCauser_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_SourceObject = { "SourceObject", nullptr, (EPropertyFlags)0x0014000000000004, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayCueParameters, SourceObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceObject_MetaData), NewProp_SourceObject_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_PhysicalMaterial = { "PhysicalMaterial", nullptr, (EPropertyFlags)0x0014000000000004, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayCueParameters, PhysicalMaterial), Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PhysicalMaterial_MetaData), NewProp_PhysicalMaterial_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_GameplayEffectLevel = { "GameplayEffectLevel", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayCueParameters, GameplayEffectLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameplayEffectLevel_MetaData), NewProp_GameplayEffectLevel_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_AbilityLevel = { "AbilityLevel", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayCueParameters, AbilityLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityLevel_MetaData), NewProp_AbilityLevel_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_TargetAttachComponent = { "TargetAttachComponent", nullptr, (EPropertyFlags)0x001400000008000c, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayCueParameters, TargetAttachComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetAttachComponent_MetaData), NewProp_TargetAttachComponent_MetaData) };
void Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_bReplicateLocationWhenUsingMinimalRepProxy_SetBit(void* Obj)
{
	((FGameplayCueParameters*)Obj)->bReplicateLocationWhenUsingMinimalRepProxy = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_bReplicateLocationWhenUsingMinimalRepProxy = { "bReplicateLocationWhenUsingMinimalRepProxy", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGameplayCueParameters), &Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_bReplicateLocationWhenUsingMinimalRepProxy_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bReplicateLocationWhenUsingMinimalRepProxy_MetaData), NewProp_bReplicateLocationWhenUsingMinimalRepProxy_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_NormalizedMagnitude,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_RawMagnitude,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_EffectContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_MatchedTagName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_OriginalTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_AggregatedSourceTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_AggregatedTargetTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_Normal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_Instigator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_EffectCauser,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_SourceObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_PhysicalMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_GameplayEffectLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_AbilityLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_TargetAttachComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_bReplicateLocationWhenUsingMinimalRepProxy,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
	nullptr,
	&NewStructOps,
	"GameplayCueParameters",
	Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::PropPointers),
	sizeof(FGameplayCueParameters),
	alignof(FGameplayCueParameters),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000205),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGameplayCueParameters()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayCueParameters.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayCueParameters.InnerSingleton, Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GameplayCueParameters.InnerSingleton;
}
// End ScriptStruct FGameplayCueParameters

// Begin Enum EGameplayCueEvent
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGameplayCueEvent;
static UEnum* EGameplayCueEvent_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGameplayCueEvent.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGameplayCueEvent.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GameplayAbilities_EGameplayCueEvent, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("EGameplayCueEvent"));
	}
	return Z_Registration_Info_UEnum_EGameplayCueEvent.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UEnum* StaticEnum<EGameplayCueEvent::Type>()
{
	return EGameplayCueEvent_StaticEnum();
}
struct Z_Construct_UEnum_GameplayAbilities_EGameplayCueEvent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Indicates what type of action happened to a specific gameplay cue tag. Sometimes you will get multiple events at once */" },
#endif
		{ "Executed.Comment", "/** Called when a GameplayCue is executed, this is used for instant effects or periodic ticks */" },
		{ "Executed.Name", "EGameplayCueEvent::Executed" },
		{ "Executed.ToolTip", "Called when a GameplayCue is executed, this is used for instant effects or periodic ticks" },
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
		{ "OnActive.Comment", "/** Called when a GameplayCue with duration is first activated, this will only be called if the client witnessed the activation */" },
		{ "OnActive.Name", "EGameplayCueEvent::OnActive" },
		{ "OnActive.ToolTip", "Called when a GameplayCue with duration is first activated, this will only be called if the client witnessed the activation" },
		{ "Removed.Comment", "/** Called when a GameplayCue with duration is removed */" },
		{ "Removed.Name", "EGameplayCueEvent::Removed" },
		{ "Removed.ToolTip", "Called when a GameplayCue with duration is removed" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Indicates what type of action happened to a specific gameplay cue tag. Sometimes you will get multiple events at once" },
#endif
		{ "WhileActive.Comment", "/** Called when a GameplayCue with duration is first seen as active, even if it wasn't actually just applied (Join in progress, etc) */" },
		{ "WhileActive.Name", "EGameplayCueEvent::WhileActive" },
		{ "WhileActive.ToolTip", "Called when a GameplayCue with duration is first seen as active, even if it wasn't actually just applied (Join in progress, etc)" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGameplayCueEvent::OnActive", (int64)EGameplayCueEvent::OnActive },
		{ "EGameplayCueEvent::WhileActive", (int64)EGameplayCueEvent::WhileActive },
		{ "EGameplayCueEvent::Executed", (int64)EGameplayCueEvent::Executed },
		{ "EGameplayCueEvent::Removed", (int64)EGameplayCueEvent::Removed },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GameplayAbilities_EGameplayCueEvent_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_GameplayAbilities,
	nullptr,
	"EGameplayCueEvent",
	"EGameplayCueEvent::Type",
	Z_Construct_UEnum_GameplayAbilities_EGameplayCueEvent_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayAbilities_EGameplayCueEvent_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Namespaced,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayAbilities_EGameplayCueEvent_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GameplayAbilities_EGameplayCueEvent_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_GameplayAbilities_EGameplayCueEvent()
{
	if (!Z_Registration_Info_UEnum_EGameplayCueEvent.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGameplayCueEvent.InnerSingleton, Z_Construct_UEnum_GameplayAbilities_EGameplayCueEvent_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGameplayCueEvent.InnerSingleton;
}
// End Enum EGameplayCueEvent

// Begin Enum EGameplayTagEventType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGameplayTagEventType;
static UEnum* EGameplayTagEventType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGameplayTagEventType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGameplayTagEventType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GameplayAbilities_EGameplayTagEventType, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("EGameplayTagEventType"));
	}
	return Z_Registration_Info_UEnum_EGameplayTagEventType.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UEnum* StaticEnum<EGameplayTagEventType::Type>()
{
	return EGameplayTagEventType_StaticEnum();
}
struct Z_Construct_UEnum_GameplayAbilities_EGameplayTagEventType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AnyCountChange.Comment", "/** Event happens any time tag \"count\" changes */" },
		{ "AnyCountChange.Name", "EGameplayTagEventType::AnyCountChange" },
		{ "AnyCountChange.ToolTip", "Event happens any time tag \"count\" changes" },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Rather a tag was added or removed, used in callbacks */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
		{ "NewOrRemoved.Comment", "/** Event only happens when tag is new or completely removed */" },
		{ "NewOrRemoved.Name", "EGameplayTagEventType::NewOrRemoved" },
		{ "NewOrRemoved.ToolTip", "Event only happens when tag is new or completely removed" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Rather a tag was added or removed, used in callbacks" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGameplayTagEventType::NewOrRemoved", (int64)EGameplayTagEventType::NewOrRemoved },
		{ "EGameplayTagEventType::AnyCountChange", (int64)EGameplayTagEventType::AnyCountChange },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GameplayAbilities_EGameplayTagEventType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_GameplayAbilities,
	nullptr,
	"EGameplayTagEventType",
	"EGameplayTagEventType::Type",
	Z_Construct_UEnum_GameplayAbilities_EGameplayTagEventType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayAbilities_EGameplayTagEventType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Namespaced,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayAbilities_EGameplayTagEventType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GameplayAbilities_EGameplayTagEventType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_GameplayAbilities_EGameplayTagEventType()
{
	if (!Z_Registration_Info_UEnum_EGameplayTagEventType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGameplayTagEventType.InnerSingleton, Z_Construct_UEnum_GameplayAbilities_EGameplayTagEventType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGameplayTagEventType.InnerSingleton;
}
// End Enum EGameplayTagEventType

// Begin ScriptStruct FGameplayTagBlueprintPropertyMapping
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayTagBlueprintPropertyMapping;
class UScriptStruct* FGameplayTagBlueprintPropertyMapping::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayTagBlueprintPropertyMapping.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayTagBlueprintPropertyMapping.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMapping, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("GameplayTagBlueprintPropertyMapping"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayTagBlueprintPropertyMapping.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FGameplayTagBlueprintPropertyMapping>()
{
	return FGameplayTagBlueprintPropertyMapping::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMapping_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Struct used to update a blueprint property with a gameplay tag count.\n * The property is automatically updated as the gameplay tag count changes.\n * It only supports boolean, integer, and float properties.\n */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Struct used to update a blueprint property with a gameplay tag count.\nThe property is automatically updated as the gameplay tag count changes.\nIt only supports boolean, integer, and float properties." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TagToMap_MetaData[] = {
		{ "Category", "GameplayTagBlueprintProperty" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Gameplay tag being counted. */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gameplay tag being counted." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PropertyToEdit_MetaData[] = {
		{ "Category", "GameplayTagBlueprintProperty" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Property to update with the gameplay tag count. */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Property to update with the gameplay tag count." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PropertyName_MetaData[] = {
		{ "Category", "GameplayTagBlueprintProperty" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Name of property being edited. */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Name of property being edited." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PropertyGuid_MetaData[] = {
		{ "Category", "GameplayTagBlueprintProperty" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Guid of property being edited. */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Guid of property being edited." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TagToMap;
	static const UECodeGen_Private::FFieldPathPropertyParams NewProp_PropertyToEdit;
	static const UECodeGen_Private::FNamePropertyParams NewProp_PropertyName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PropertyGuid;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayTagBlueprintPropertyMapping>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMapping_Statics::NewProp_TagToMap = { "TagToMap", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayTagBlueprintPropertyMapping, TagToMap), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TagToMap_MetaData), NewProp_TagToMap_MetaData) }; // 1298103297
const UECodeGen_Private::FFieldPathPropertyParams Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMapping_Statics::NewProp_PropertyToEdit = { "PropertyToEdit", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::FieldPath, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayTagBlueprintPropertyMapping, PropertyToEdit), &FProperty::StaticClass, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PropertyToEdit_MetaData), NewProp_PropertyToEdit_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMapping_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayTagBlueprintPropertyMapping, PropertyName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PropertyName_MetaData), NewProp_PropertyName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMapping_Statics::NewProp_PropertyGuid = { "PropertyGuid", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayTagBlueprintPropertyMapping, PropertyGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PropertyGuid_MetaData), NewProp_PropertyGuid_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMapping_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMapping_Statics::NewProp_TagToMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMapping_Statics::NewProp_PropertyToEdit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMapping_Statics::NewProp_PropertyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMapping_Statics::NewProp_PropertyGuid,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMapping_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMapping_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
	nullptr,
	&NewStructOps,
	"GameplayTagBlueprintPropertyMapping",
	Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMapping_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMapping_Statics::PropPointers),
	sizeof(FGameplayTagBlueprintPropertyMapping),
	alignof(FGameplayTagBlueprintPropertyMapping),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMapping_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMapping_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMapping()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayTagBlueprintPropertyMapping.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayTagBlueprintPropertyMapping.InnerSingleton, Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMapping_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GameplayTagBlueprintPropertyMapping.InnerSingleton;
}
// End ScriptStruct FGameplayTagBlueprintPropertyMapping

// Begin ScriptStruct FGameplayTagBlueprintPropertyMap
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayTagBlueprintPropertyMap;
class UScriptStruct* FGameplayTagBlueprintPropertyMap::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayTagBlueprintPropertyMap.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayTagBlueprintPropertyMap.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMap, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("GameplayTagBlueprintPropertyMap"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayTagBlueprintPropertyMap.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FGameplayTagBlueprintPropertyMap>()
{
	return FGameplayTagBlueprintPropertyMap::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMap_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Struct used to manage gameplay tag blueprint property mappings.\n * It registers the properties with delegates on an ability system component.\n * This struct can not be used in containers (such as TArray) since it uses a raw pointer\n * to bind the delegate and it's address could change causing an invalid binding.\n */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Struct used to manage gameplay tag blueprint property mappings.\nIt registers the properties with delegates on an ability system component.\nThis struct can not be used in containers (such as TArray) since it uses a raw pointer\nto bind the delegate and it's address could change causing an invalid binding." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PropertyMappings_MetaData[] = {
		{ "Category", "GameplayTagBlueprintProperty" },
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PropertyMappings_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PropertyMappings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayTagBlueprintPropertyMap>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMap_Statics::NewProp_PropertyMappings_Inner = { "PropertyMappings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMapping, METADATA_PARAMS(0, nullptr) }; // 3770822845
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMap_Statics::NewProp_PropertyMappings = { "PropertyMappings", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayTagBlueprintPropertyMap, PropertyMappings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PropertyMappings_MetaData), NewProp_PropertyMappings_MetaData) }; // 3770822845
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMap_Statics::NewProp_PropertyMappings_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMap_Statics::NewProp_PropertyMappings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMap_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
	nullptr,
	&NewStructOps,
	"GameplayTagBlueprintPropertyMap",
	Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMap_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMap_Statics::PropPointers),
	sizeof(FGameplayTagBlueprintPropertyMap),
	alignof(FGameplayTagBlueprintPropertyMap),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMap_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMap_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMap()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayTagBlueprintPropertyMap.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayTagBlueprintPropertyMap.InnerSingleton, Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMap_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GameplayTagBlueprintPropertyMap.InnerSingleton;
}
// End ScriptStruct FGameplayTagBlueprintPropertyMap

// Begin ScriptStruct FGameplayTagRequirements
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayTagRequirements;
class UScriptStruct* FGameplayTagRequirements::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayTagRequirements.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayTagRequirements.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayTagRequirements, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("GameplayTagRequirements"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayTagRequirements.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FGameplayTagRequirements>()
{
	return FGameplayTagRequirements::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGameplayTagRequirements_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Encapsulate require and ignore tags */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Encapsulate require and ignore tags" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequireTags_MetaData[] = {
		{ "Category", "GameplayModifier" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** All of these tags must be present */" },
#endif
		{ "DisplayName", "Must Have Tags" },
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "All of these tags must be present" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IgnoreTags_MetaData[] = {
		{ "Category", "GameplayModifier" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** None of these tags may be present */" },
#endif
		{ "DisplayName", "Must Not Have Tags" },
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "None of these tags may be present" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TagQuery_MetaData[] = {
		{ "Category", "GameplayModifier" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Build up a more complex query that can't be expressed with RequireTags/IgnoreTags alone */" },
#endif
		{ "DisplayName", "Query Must Match" },
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Build up a more complex query that can't be expressed with RequireTags/IgnoreTags alone" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_RequireTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_IgnoreTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TagQuery;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayTagRequirements>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayTagRequirements_Statics::NewProp_RequireTags = { "RequireTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayTagRequirements, RequireTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequireTags_MetaData), NewProp_RequireTags_MetaData) }; // 3352185621
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayTagRequirements_Statics::NewProp_IgnoreTags = { "IgnoreTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayTagRequirements, IgnoreTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IgnoreTags_MetaData), NewProp_IgnoreTags_MetaData) }; // 3352185621
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayTagRequirements_Statics::NewProp_TagQuery = { "TagQuery", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayTagRequirements, TagQuery), Z_Construct_UScriptStruct_FGameplayTagQuery, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TagQuery_MetaData), NewProp_TagQuery_MetaData) }; // 572225232
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayTagRequirements_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayTagRequirements_Statics::NewProp_RequireTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayTagRequirements_Statics::NewProp_IgnoreTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayTagRequirements_Statics::NewProp_TagQuery,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagRequirements_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayTagRequirements_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
	nullptr,
	&NewStructOps,
	"GameplayTagRequirements",
	Z_Construct_UScriptStruct_FGameplayTagRequirements_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagRequirements_Statics::PropPointers),
	sizeof(FGameplayTagRequirements),
	alignof(FGameplayTagRequirements),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagRequirements_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGameplayTagRequirements_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagRequirements()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayTagRequirements.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayTagRequirements.InnerSingleton, Z_Construct_UScriptStruct_FGameplayTagRequirements_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GameplayTagRequirements.InnerSingleton;
}
// End ScriptStruct FGameplayTagRequirements

// Begin ScriptStruct FTagContainerAggregator
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TagContainerAggregator;
class UScriptStruct* FTagContainerAggregator::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TagContainerAggregator.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TagContainerAggregator.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTagContainerAggregator, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("TagContainerAggregator"));
	}
	return Z_Registration_Info_UScriptStruct_TagContainerAggregator.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FTagContainerAggregator>()
{
	return FTagContainerAggregator::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTagContainerAggregator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Structure used to combine tags from different sources during effect execution */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Structure used to combine tags from different sources during effect execution" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CapturedActorTags_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CapturedSpecTags_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScopedTags_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CapturedActorTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CapturedSpecTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ScopedTags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTagContainerAggregator>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTagContainerAggregator_Statics::NewProp_CapturedActorTags = { "CapturedActorTags", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTagContainerAggregator, CapturedActorTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CapturedActorTags_MetaData), NewProp_CapturedActorTags_MetaData) }; // 3352185621
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTagContainerAggregator_Statics::NewProp_CapturedSpecTags = { "CapturedSpecTags", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTagContainerAggregator, CapturedSpecTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CapturedSpecTags_MetaData), NewProp_CapturedSpecTags_MetaData) }; // 3352185621
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTagContainerAggregator_Statics::NewProp_ScopedTags = { "ScopedTags", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTagContainerAggregator, ScopedTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScopedTags_MetaData), NewProp_ScopedTags_MetaData) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTagContainerAggregator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTagContainerAggregator_Statics::NewProp_CapturedActorTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTagContainerAggregator_Statics::NewProp_CapturedSpecTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTagContainerAggregator_Statics::NewProp_ScopedTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTagContainerAggregator_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTagContainerAggregator_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
	nullptr,
	&NewStructOps,
	"TagContainerAggregator",
	Z_Construct_UScriptStruct_FTagContainerAggregator_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTagContainerAggregator_Statics::PropPointers),
	sizeof(FTagContainerAggregator),
	alignof(FTagContainerAggregator),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTagContainerAggregator_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTagContainerAggregator_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTagContainerAggregator()
{
	if (!Z_Registration_Info_UScriptStruct_TagContainerAggregator.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TagContainerAggregator.InnerSingleton, Z_Construct_UScriptStruct_FTagContainerAggregator_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TagContainerAggregator.InnerSingleton;
}
// End ScriptStruct FTagContainerAggregator

// Begin ScriptStruct FGameplayEffectSpecHandle
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayEffectSpecHandle;
class UScriptStruct* FGameplayEffectSpecHandle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayEffectSpecHandle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayEffectSpecHandle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayEffectSpecHandle, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("GameplayEffectSpecHandle"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayEffectSpecHandle.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FGameplayEffectSpecHandle>()
{
	return FGameplayEffectSpecHandle::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGameplayEffectSpecHandle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Allows blueprints to generate a GameplayEffectSpec once and then reference it by handle, to apply it multiple times/multiple targets. */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Allows blueprints to generate a GameplayEffectSpec once and then reference it by handle, to apply it multiple times/multiple targets." },
#endif
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayEffectSpecHandle>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayEffectSpecHandle_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
	nullptr,
	&NewStructOps,
	"GameplayEffectSpecHandle",
	nullptr,
	0,
	sizeof(FGameplayEffectSpecHandle),
	alignof(FGameplayEffectSpecHandle),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectSpecHandle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGameplayEffectSpecHandle_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectSpecHandle()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayEffectSpecHandle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayEffectSpecHandle.InnerSingleton, Z_Construct_UScriptStruct_FGameplayEffectSpecHandle_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GameplayEffectSpecHandle.InnerSingleton;
}
// End ScriptStruct FGameplayEffectSpecHandle

// Begin ScriptStruct FMinimalReplicationTagCountMap
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MinimalReplicationTagCountMap;
class UScriptStruct* FMinimalReplicationTagCountMap::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MinimalReplicationTagCountMap.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MinimalReplicationTagCountMap.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMinimalReplicationTagCountMap, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("MinimalReplicationTagCountMap"));
	}
	return Z_Registration_Info_UScriptStruct_MinimalReplicationTagCountMap.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FMinimalReplicationTagCountMap>()
{
	return FMinimalReplicationTagCountMap::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMinimalReplicationTagCountMap_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Map that stores count of tags, in a form that is optimized for replication */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Map that stores count of tags, in a form that is optimized for replication" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Owner_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Owner;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMinimalReplicationTagCountMap>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMinimalReplicationTagCountMap_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMinimalReplicationTagCountMap, Owner), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Owner_MetaData), NewProp_Owner_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMinimalReplicationTagCountMap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMinimalReplicationTagCountMap_Statics::NewProp_Owner,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMinimalReplicationTagCountMap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMinimalReplicationTagCountMap_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
	nullptr,
	&NewStructOps,
	"MinimalReplicationTagCountMap",
	Z_Construct_UScriptStruct_FMinimalReplicationTagCountMap_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMinimalReplicationTagCountMap_Statics::PropPointers),
	sizeof(FMinimalReplicationTagCountMap),
	alignof(FMinimalReplicationTagCountMap),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000205),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMinimalReplicationTagCountMap_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMinimalReplicationTagCountMap_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMinimalReplicationTagCountMap()
{
	if (!Z_Registration_Info_UScriptStruct_MinimalReplicationTagCountMap.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MinimalReplicationTagCountMap.InnerSingleton, Z_Construct_UScriptStruct_FMinimalReplicationTagCountMap_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MinimalReplicationTagCountMap.InnerSingleton;
}
// End ScriptStruct FMinimalReplicationTagCountMap

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectTypes_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EGameplayModEvaluationChannel_StaticEnum, TEXT("EGameplayModEvaluationChannel"), &Z_Registration_Info_UEnum_EGameplayModEvaluationChannel, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2726299600U) },
		{ EGameplayModOp_StaticEnum, TEXT("EGameplayModOp"), &Z_Registration_Info_UEnum_EGameplayModOp, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2940526104U) },
		{ EGameplayEffectStackingType_StaticEnum, TEXT("EGameplayEffectStackingType"), &Z_Registration_Info_UEnum_EGameplayEffectStackingType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1888212977U) },
		{ EGameplayCueEvent_StaticEnum, TEXT("EGameplayCueEvent"), &Z_Registration_Info_UEnum_EGameplayCueEvent, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1404147860U) },
		{ EGameplayTagEventType_StaticEnum, TEXT("EGameplayTagEventType"), &Z_Registration_Info_UEnum_EGameplayTagEventType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2361020505U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FGameplayModEvaluationChannelSettings::StaticStruct, Z_Construct_UScriptStruct_FGameplayModEvaluationChannelSettings_Statics::NewStructOps, TEXT("GameplayModEvaluationChannelSettings"), &Z_Registration_Info_UScriptStruct_GameplayModEvaluationChannelSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayModEvaluationChannelSettings), 2007245468U) },
		{ FGameplayModifierEvaluatedData::StaticStruct, Z_Construct_UScriptStruct_FGameplayModifierEvaluatedData_Statics::NewStructOps, TEXT("GameplayModifierEvaluatedData"), &Z_Registration_Info_UScriptStruct_GameplayModifierEvaluatedData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayModifierEvaluatedData), 2054617656U) },
		{ FGameplayEffectContext::StaticStruct, Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::NewStructOps, TEXT("GameplayEffectContext"), &Z_Registration_Info_UScriptStruct_GameplayEffectContext, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayEffectContext), 3914605007U) },
		{ FGameplayEffectContextHandle::StaticStruct, Z_Construct_UScriptStruct_FGameplayEffectContextHandle_Statics::NewStructOps, TEXT("GameplayEffectContextHandle"), &Z_Registration_Info_UScriptStruct_GameplayEffectContextHandle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayEffectContextHandle), 3292467274U) },
		{ FGameplayEffectRemovalInfo::StaticStruct, Z_Construct_UScriptStruct_FGameplayEffectRemovalInfo_Statics::NewStructOps, TEXT("GameplayEffectRemovalInfo"), &Z_Registration_Info_UScriptStruct_GameplayEffectRemovalInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayEffectRemovalInfo), 3453242020U) },
		{ FGameplayCueParameters::StaticStruct, Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewStructOps, TEXT("GameplayCueParameters"), &Z_Registration_Info_UScriptStruct_GameplayCueParameters, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayCueParameters), 1032334605U) },
		{ FGameplayTagBlueprintPropertyMapping::StaticStruct, Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMapping_Statics::NewStructOps, TEXT("GameplayTagBlueprintPropertyMapping"), &Z_Registration_Info_UScriptStruct_GameplayTagBlueprintPropertyMapping, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayTagBlueprintPropertyMapping), 3770822845U) },
		{ FGameplayTagBlueprintPropertyMap::StaticStruct, Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMap_Statics::NewStructOps, TEXT("GameplayTagBlueprintPropertyMap"), &Z_Registration_Info_UScriptStruct_GameplayTagBlueprintPropertyMap, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayTagBlueprintPropertyMap), 2459939597U) },
		{ FGameplayTagRequirements::StaticStruct, Z_Construct_UScriptStruct_FGameplayTagRequirements_Statics::NewStructOps, TEXT("GameplayTagRequirements"), &Z_Registration_Info_UScriptStruct_GameplayTagRequirements, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayTagRequirements), 3067797139U) },
		{ FTagContainerAggregator::StaticStruct, Z_Construct_UScriptStruct_FTagContainerAggregator_Statics::NewStructOps, TEXT("TagContainerAggregator"), &Z_Registration_Info_UScriptStruct_TagContainerAggregator, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTagContainerAggregator), 1319271482U) },
		{ FGameplayEffectSpecHandle::StaticStruct, Z_Construct_UScriptStruct_FGameplayEffectSpecHandle_Statics::NewStructOps, TEXT("GameplayEffectSpecHandle"), &Z_Registration_Info_UScriptStruct_GameplayEffectSpecHandle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayEffectSpecHandle), 853282864U) },
		{ FMinimalReplicationTagCountMap::StaticStruct, Z_Construct_UScriptStruct_FMinimalReplicationTagCountMap_Statics::NewStructOps, TEXT("MinimalReplicationTagCountMap"), &Z_Registration_Info_UScriptStruct_MinimalReplicationTagCountMap, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMinimalReplicationTagCountMap), 1511874028U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectTypes_h_2484636563(TEXT("/Script/GameplayAbilities"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectTypes_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectTypes_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
