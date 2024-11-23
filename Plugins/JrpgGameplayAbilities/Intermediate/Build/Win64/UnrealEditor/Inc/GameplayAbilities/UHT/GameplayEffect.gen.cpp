// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayAbilities/Public/GameplayEffect.h"
#include "GameplayAbilities/Public/AttributeSet.h"
#include "GameplayAbilities/Public/GameplayAbilitySpec.h"
#include "GameplayAbilities/Public/GameplayAbilitySpecHandle.h"
#include "GameplayAbilities/Public/GameplayEffectAttributeCaptureDefinition.h"
#include "GameplayAbilities/Public/GameplayEffectTypes.h"
#include "GameplayAbilities/Public/GameplayPrediction.h"
#include "GameplayAbilities/Public/ScalableFloat.h"
#include "Net/Serialization/FastArraySerializerImplementation.h"
#include "Runtime/Engine/Classes/Engine/CurveTable.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayEffect() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCurveTableRowHandle();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffectComponent_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffectCustomApplicationRequirement_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffectExecutionCalculation_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffectUIData_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayModMagnitudeCalculation_NoRegister();
GAMEPLAYABILITIES_API UEnum* Z_Construct_UEnum_GameplayAbilities_EAttributeBasedFloatCalculationType();
GAMEPLAYABILITIES_API UEnum* Z_Construct_UEnum_GameplayAbilities_EGameplayEffectDurationType();
GAMEPLAYABILITIES_API UEnum* Z_Construct_UEnum_GameplayAbilities_EGameplayEffectMagnitudeCalculation();
GAMEPLAYABILITIES_API UEnum* Z_Construct_UEnum_GameplayAbilities_EGameplayEffectPeriodInhibitionRemovedPolicy();
GAMEPLAYABILITIES_API UEnum* Z_Construct_UEnum_GameplayAbilities_EGameplayEffectScopedModifierAggregatorType();
GAMEPLAYABILITIES_API UEnum* Z_Construct_UEnum_GameplayAbilities_EGameplayEffectStackingDurationPolicy();
GAMEPLAYABILITIES_API UEnum* Z_Construct_UEnum_GameplayAbilities_EGameplayEffectStackingExpirationPolicy();
GAMEPLAYABILITIES_API UEnum* Z_Construct_UEnum_GameplayAbilities_EGameplayEffectStackingPeriodPolicy();
GAMEPLAYABILITIES_API UEnum* Z_Construct_UEnum_GameplayAbilities_EGameplayEffectStackingType();
GAMEPLAYABILITIES_API UEnum* Z_Construct_UEnum_GameplayAbilities_EGameplayEffectVersion();
GAMEPLAYABILITIES_API UEnum* Z_Construct_UEnum_GameplayAbilities_EGameplayModEvaluationChannel();
GAMEPLAYABILITIES_API UEnum* Z_Construct_UEnum_GameplayAbilities_EGameplayModOp();
GAMEPLAYABILITIES_API UFunction* Z_Construct_UDelegateFunction_GameplayAbilities_ActiveGameplayEffectQueryCustomMatch_Dynamic__DelegateSignature();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FActiveGameplayEffect();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FActiveGameplayEffectQuery();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FActiveGameplayEffectsContainer();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FAttributeBasedFloat();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FConditionalGameplayEffect();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FCustomCalculationBasedFloat();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilitySpecDef();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttribute();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureDefinition();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureSpec();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureSpecContainer();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectContextHandle();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectCue();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectExecutionDefinition();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectExecutionScopedModifierInfo();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectModifiedAttribute();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectModifierMagnitude();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectQuery();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectSpec();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectSpecForRPC();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectVersion();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayModEvaluationChannelSettings();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayModifierInfo();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagRequirements();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FInheritedTagContainer();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FModifierSpec();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FPredictionKey();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FScalableFloat();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FSetByCallerFloat();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FTagContainerAggregator();
GAMEPLAYTAGS_API UClass* Z_Construct_UClass_UGameplayTagAssetInterface_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagQuery();
NETCORE_API UScriptStruct* Z_Construct_UScriptStruct_FFastArraySerializer();
NETCORE_API UScriptStruct* Z_Construct_UScriptStruct_FFastArraySerializerItem();
UPackage* Z_Construct_UPackage__Script_GameplayAbilities();
// End Cross Module References

// Begin Enum EGameplayEffectMagnitudeCalculation
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGameplayEffectMagnitudeCalculation;
static UEnum* EGameplayEffectMagnitudeCalculation_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGameplayEffectMagnitudeCalculation.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGameplayEffectMagnitudeCalculation.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GameplayAbilities_EGameplayEffectMagnitudeCalculation, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("EGameplayEffectMagnitudeCalculation"));
	}
	return Z_Registration_Info_UEnum_EGameplayEffectMagnitudeCalculation.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UEnum* StaticEnum<EGameplayEffectMagnitudeCalculation>()
{
	return EGameplayEffectMagnitudeCalculation_StaticEnum();
}
struct Z_Construct_UEnum_GameplayAbilities_EGameplayEffectMagnitudeCalculation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AttributeBased.Comment", "/** Perform a calculation based upon an attribute. */" },
		{ "AttributeBased.Name", "EGameplayEffectMagnitudeCalculation::AttributeBased" },
		{ "AttributeBased.ToolTip", "Perform a calculation based upon an attribute." },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Enumeration outlining the possible gameplay effect magnitude calculation policies. */" },
#endif
		{ "CustomCalculationClass.Comment", "/** Perform a custom calculation, capable of capturing and acting on multiple attributes, in either BP or native. */" },
		{ "CustomCalculationClass.Name", "EGameplayEffectMagnitudeCalculation::CustomCalculationClass" },
		{ "CustomCalculationClass.ToolTip", "Perform a custom calculation, capable of capturing and acting on multiple attributes, in either BP or native." },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
		{ "ScalableFloat.Comment", "/** Use a simple, scalable float for the calculation. */" },
		{ "ScalableFloat.Name", "EGameplayEffectMagnitudeCalculation::ScalableFloat" },
		{ "ScalableFloat.ToolTip", "Use a simple, scalable float for the calculation." },
		{ "SetByCaller.Comment", "/** This magnitude will be set explicitly by the code/blueprint that creates the spec. */" },
		{ "SetByCaller.Name", "EGameplayEffectMagnitudeCalculation::SetByCaller" },
		{ "SetByCaller.ToolTip", "This magnitude will be set explicitly by the code/blueprint that creates the spec." },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enumeration outlining the possible gameplay effect magnitude calculation policies." },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGameplayEffectMagnitudeCalculation::ScalableFloat", (int64)EGameplayEffectMagnitudeCalculation::ScalableFloat },
		{ "EGameplayEffectMagnitudeCalculation::AttributeBased", (int64)EGameplayEffectMagnitudeCalculation::AttributeBased },
		{ "EGameplayEffectMagnitudeCalculation::CustomCalculationClass", (int64)EGameplayEffectMagnitudeCalculation::CustomCalculationClass },
		{ "EGameplayEffectMagnitudeCalculation::SetByCaller", (int64)EGameplayEffectMagnitudeCalculation::SetByCaller },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GameplayAbilities_EGameplayEffectMagnitudeCalculation_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_GameplayAbilities,
	nullptr,
	"EGameplayEffectMagnitudeCalculation",
	"EGameplayEffectMagnitudeCalculation",
	Z_Construct_UEnum_GameplayAbilities_EGameplayEffectMagnitudeCalculation_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayAbilities_EGameplayEffectMagnitudeCalculation_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayAbilities_EGameplayEffectMagnitudeCalculation_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GameplayAbilities_EGameplayEffectMagnitudeCalculation_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_GameplayAbilities_EGameplayEffectMagnitudeCalculation()
{
	if (!Z_Registration_Info_UEnum_EGameplayEffectMagnitudeCalculation.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGameplayEffectMagnitudeCalculation.InnerSingleton, Z_Construct_UEnum_GameplayAbilities_EGameplayEffectMagnitudeCalculation_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGameplayEffectMagnitudeCalculation.InnerSingleton;
}
// End Enum EGameplayEffectMagnitudeCalculation

// Begin Enum EAttributeBasedFloatCalculationType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAttributeBasedFloatCalculationType;
static UEnum* EAttributeBasedFloatCalculationType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAttributeBasedFloatCalculationType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAttributeBasedFloatCalculationType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GameplayAbilities_EAttributeBasedFloatCalculationType, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("EAttributeBasedFloatCalculationType"));
	}
	return Z_Registration_Info_UEnum_EAttributeBasedFloatCalculationType.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UEnum* StaticEnum<EAttributeBasedFloatCalculationType>()
{
	return EAttributeBasedFloatCalculationType_StaticEnum();
}
struct Z_Construct_UEnum_GameplayAbilities_EAttributeBasedFloatCalculationType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AttributeBaseValue.Comment", "/** Use the base value of the attribute. */" },
		{ "AttributeBaseValue.Name", "EAttributeBasedFloatCalculationType::AttributeBaseValue" },
		{ "AttributeBaseValue.ToolTip", "Use the base value of the attribute." },
		{ "AttributeBonusMagnitude.Comment", "/** Use the \"bonus\" evaluated magnitude of the attribute: Equivalent to (FinalMag - BaseValue). */" },
		{ "AttributeBonusMagnitude.Name", "EAttributeBasedFloatCalculationType::AttributeBonusMagnitude" },
		{ "AttributeBonusMagnitude.ToolTip", "Use the \"bonus\" evaluated magnitude of the attribute: Equivalent to (FinalMag - BaseValue)." },
		{ "AttributeMagnitude.Comment", "/** Use the final evaluated magnitude of the attribute. */" },
		{ "AttributeMagnitude.Name", "EAttributeBasedFloatCalculationType::AttributeMagnitude" },
		{ "AttributeMagnitude.ToolTip", "Use the final evaluated magnitude of the attribute." },
		{ "AttributeMagnitudeEvaluatedUpToChannel.Comment", "/** Use a calculated magnitude stopping with the evaluation of the specified \"Final Channel\" */" },
		{ "AttributeMagnitudeEvaluatedUpToChannel.Name", "EAttributeBasedFloatCalculationType::AttributeMagnitudeEvaluatedUpToChannel" },
		{ "AttributeMagnitudeEvaluatedUpToChannel.ToolTip", "Use a calculated magnitude stopping with the evaluation of the specified \"Final Channel\"" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Enumeration outlining the possible attribute based float calculation policies. */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enumeration outlining the possible attribute based float calculation policies." },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAttributeBasedFloatCalculationType::AttributeMagnitude", (int64)EAttributeBasedFloatCalculationType::AttributeMagnitude },
		{ "EAttributeBasedFloatCalculationType::AttributeBaseValue", (int64)EAttributeBasedFloatCalculationType::AttributeBaseValue },
		{ "EAttributeBasedFloatCalculationType::AttributeBonusMagnitude", (int64)EAttributeBasedFloatCalculationType::AttributeBonusMagnitude },
		{ "EAttributeBasedFloatCalculationType::AttributeMagnitudeEvaluatedUpToChannel", (int64)EAttributeBasedFloatCalculationType::AttributeMagnitudeEvaluatedUpToChannel },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GameplayAbilities_EAttributeBasedFloatCalculationType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_GameplayAbilities,
	nullptr,
	"EAttributeBasedFloatCalculationType",
	"EAttributeBasedFloatCalculationType",
	Z_Construct_UEnum_GameplayAbilities_EAttributeBasedFloatCalculationType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayAbilities_EAttributeBasedFloatCalculationType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayAbilities_EAttributeBasedFloatCalculationType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GameplayAbilities_EAttributeBasedFloatCalculationType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_GameplayAbilities_EAttributeBasedFloatCalculationType()
{
	if (!Z_Registration_Info_UEnum_EAttributeBasedFloatCalculationType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAttributeBasedFloatCalculationType.InnerSingleton, Z_Construct_UEnum_GameplayAbilities_EAttributeBasedFloatCalculationType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAttributeBasedFloatCalculationType.InnerSingleton;
}
// End Enum EAttributeBasedFloatCalculationType

// Begin Enum EGameplayEffectVersion
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGameplayEffectVersion;
static UEnum* EGameplayEffectVersion_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGameplayEffectVersion.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGameplayEffectVersion.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GameplayAbilities_EGameplayEffectVersion, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("EGameplayEffectVersion"));
	}
	return Z_Registration_Info_UEnum_EGameplayEffectVersion.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UEnum* StaticEnum<EGameplayEffectVersion>()
{
	return EGameplayEffectVersion_StaticEnum();
}
struct Z_Construct_UEnum_GameplayAbilities_EGameplayEffectVersion_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AbilitiesComponent53.Comment", "// New modular version available in UE5.3\n" },
		{ "AbilitiesComponent53.Name", "EGameplayEffectVersion::AbilitiesComponent53" },
		{ "AbilitiesComponent53.ToolTip", "New modular version available in UE5.3" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The version of the UGameplayEffect. Used for upgrade paths. */" },
#endif
		{ "Current.Comment", "// Granted Abilities are moved into the Abilities Component\n" },
		{ "Current.Name", "EGameplayEffectVersion::Current" },
		{ "Current.ToolTip", "Granted Abilities are moved into the Abilities Component" },
		{ "Modular53.Comment", "// Legacy version from Pre-UE5.3 (before we were versioning)\n" },
		{ "Modular53.Name", "EGameplayEffectVersion::Modular53" },
		{ "Modular53.ToolTip", "Legacy version from Pre-UE5.3 (before we were versioning)" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
		{ "Monolithic.Name", "EGameplayEffectVersion::Monolithic" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The version of the UGameplayEffect. Used for upgrade paths." },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGameplayEffectVersion::Monolithic", (int64)EGameplayEffectVersion::Monolithic },
		{ "EGameplayEffectVersion::Modular53", (int64)EGameplayEffectVersion::Modular53 },
		{ "EGameplayEffectVersion::AbilitiesComponent53", (int64)EGameplayEffectVersion::AbilitiesComponent53 },
		{ "EGameplayEffectVersion::Current", (int64)EGameplayEffectVersion::Current },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GameplayAbilities_EGameplayEffectVersion_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_GameplayAbilities,
	nullptr,
	"EGameplayEffectVersion",
	"EGameplayEffectVersion",
	Z_Construct_UEnum_GameplayAbilities_EGameplayEffectVersion_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayAbilities_EGameplayEffectVersion_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayAbilities_EGameplayEffectVersion_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GameplayAbilities_EGameplayEffectVersion_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_GameplayAbilities_EGameplayEffectVersion()
{
	if (!Z_Registration_Info_UEnum_EGameplayEffectVersion.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGameplayEffectVersion.InnerSingleton, Z_Construct_UEnum_GameplayAbilities_EGameplayEffectVersion_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGameplayEffectVersion.InnerSingleton;
}
// End Enum EGameplayEffectVersion

// Begin ScriptStruct FAttributeBasedFloat
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AttributeBasedFloat;
class UScriptStruct* FAttributeBasedFloat::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AttributeBasedFloat.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AttributeBasedFloat.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAttributeBasedFloat, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("AttributeBasedFloat"));
	}
	return Z_Registration_Info_UScriptStruct_AttributeBasedFloat.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FAttributeBasedFloat>()
{
	return FAttributeBasedFloat::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAttributeBasedFloat_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n * Struct representing a float whose magnitude is dictated by a backing attribute and a calculation policy, follows basic form of:\n * (Coefficient * (PreMultiplyAdditiveValue + [Eval'd Attribute Value According to Policy])) + PostMultiplyAdditiveValue\n */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Struct representing a float whose magnitude is dictated by a backing attribute and a calculation policy, follows basic form of:\n(Coefficient * (PreMultiplyAdditiveValue + [Eval'd Attribute Value According to Policy])) + PostMultiplyAdditiveValue" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Coefficient_MetaData[] = {
		{ "Category", "AttributeFloat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Coefficient to the attribute calculation */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Coefficient to the attribute calculation" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreMultiplyAdditiveValue_MetaData[] = {
		{ "Category", "AttributeFloat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Additive value to the attribute calculation, added in before the coefficient applies */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Additive value to the attribute calculation, added in before the coefficient applies" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PostMultiplyAdditiveValue_MetaData[] = {
		{ "Category", "AttributeFloat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Additive value to the attribute calculation, added in after the coefficient applies */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Additive value to the attribute calculation, added in after the coefficient applies" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackingAttribute_MetaData[] = {
		{ "Category", "AttributeFloat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Attribute backing the calculation */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Attribute backing the calculation" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeCurve_MetaData[] = {
		{ "Category", "AttributeFloat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If a curve table entry is specified, the attribute will be used as a lookup into the curve instead of using the attribute directly. */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If a curve table entry is specified, the attribute will be used as a lookup into the curve instead of using the attribute directly." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeCalculationType_MetaData[] = {
		{ "Category", "AttributeFloat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Calculation policy in regards to the attribute */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Calculation policy in regards to the attribute" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FinalChannel_MetaData[] = {
		{ "Category", "AttributeFloat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Channel to terminate evaluation on when using AttributeEvaluatedUpToChannel calculation type */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Channel to terminate evaluation on when using AttributeEvaluatedUpToChannel calculation type" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceTagFilter_MetaData[] = {
		{ "Category", "AttributeFloat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Filter to use on source tags; If specified, only modifiers applied with all of these tags will factor into the calculation */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Filter to use on source tags; If specified, only modifiers applied with all of these tags will factor into the calculation" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetTagFilter_MetaData[] = {
		{ "Category", "AttributeFloat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Filter to use on target tags; If specified, only modifiers applied with all of these tags will factor into the calculation */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Filter to use on target tags; If specified, only modifiers applied with all of these tags will factor into the calculation" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Coefficient;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PreMultiplyAdditiveValue;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PostMultiplyAdditiveValue;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BackingAttribute;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeCurve;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AttributeCalculationType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AttributeCalculationType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FinalChannel_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_FinalChannel;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SourceTagFilter;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetTagFilter;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAttributeBasedFloat>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAttributeBasedFloat_Statics::NewProp_Coefficient = { "Coefficient", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAttributeBasedFloat, Coefficient), Z_Construct_UScriptStruct_FScalableFloat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Coefficient_MetaData), NewProp_Coefficient_MetaData) }; // 1548651388
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAttributeBasedFloat_Statics::NewProp_PreMultiplyAdditiveValue = { "PreMultiplyAdditiveValue", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAttributeBasedFloat, PreMultiplyAdditiveValue), Z_Construct_UScriptStruct_FScalableFloat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreMultiplyAdditiveValue_MetaData), NewProp_PreMultiplyAdditiveValue_MetaData) }; // 1548651388
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAttributeBasedFloat_Statics::NewProp_PostMultiplyAdditiveValue = { "PostMultiplyAdditiveValue", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAttributeBasedFloat, PostMultiplyAdditiveValue), Z_Construct_UScriptStruct_FScalableFloat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PostMultiplyAdditiveValue_MetaData), NewProp_PostMultiplyAdditiveValue_MetaData) }; // 1548651388
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAttributeBasedFloat_Statics::NewProp_BackingAttribute = { "BackingAttribute", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAttributeBasedFloat, BackingAttribute), Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureDefinition, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackingAttribute_MetaData), NewProp_BackingAttribute_MetaData) }; // 1688717124
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAttributeBasedFloat_Statics::NewProp_AttributeCurve = { "AttributeCurve", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAttributeBasedFloat, AttributeCurve), Z_Construct_UScriptStruct_FCurveTableRowHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeCurve_MetaData), NewProp_AttributeCurve_MetaData) }; // 1199935626
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAttributeBasedFloat_Statics::NewProp_AttributeCalculationType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAttributeBasedFloat_Statics::NewProp_AttributeCalculationType = { "AttributeCalculationType", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAttributeBasedFloat, AttributeCalculationType), Z_Construct_UEnum_GameplayAbilities_EAttributeBasedFloatCalculationType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeCalculationType_MetaData), NewProp_AttributeCalculationType_MetaData) }; // 2206879660
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAttributeBasedFloat_Statics::NewProp_FinalChannel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAttributeBasedFloat_Statics::NewProp_FinalChannel = { "FinalChannel", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAttributeBasedFloat, FinalChannel), Z_Construct_UEnum_GameplayAbilities_EGameplayModEvaluationChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FinalChannel_MetaData), NewProp_FinalChannel_MetaData) }; // 2726299600
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAttributeBasedFloat_Statics::NewProp_SourceTagFilter = { "SourceTagFilter", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAttributeBasedFloat, SourceTagFilter), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceTagFilter_MetaData), NewProp_SourceTagFilter_MetaData) }; // 3352185621
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAttributeBasedFloat_Statics::NewProp_TargetTagFilter = { "TargetTagFilter", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAttributeBasedFloat, TargetTagFilter), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetTagFilter_MetaData), NewProp_TargetTagFilter_MetaData) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAttributeBasedFloat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttributeBasedFloat_Statics::NewProp_Coefficient,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttributeBasedFloat_Statics::NewProp_PreMultiplyAdditiveValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttributeBasedFloat_Statics::NewProp_PostMultiplyAdditiveValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttributeBasedFloat_Statics::NewProp_BackingAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttributeBasedFloat_Statics::NewProp_AttributeCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttributeBasedFloat_Statics::NewProp_AttributeCalculationType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttributeBasedFloat_Statics::NewProp_AttributeCalculationType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttributeBasedFloat_Statics::NewProp_FinalChannel_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttributeBasedFloat_Statics::NewProp_FinalChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttributeBasedFloat_Statics::NewProp_SourceTagFilter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttributeBasedFloat_Statics::NewProp_TargetTagFilter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttributeBasedFloat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAttributeBasedFloat_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
	nullptr,
	&NewStructOps,
	"AttributeBasedFloat",
	Z_Construct_UScriptStruct_FAttributeBasedFloat_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttributeBasedFloat_Statics::PropPointers),
	sizeof(FAttributeBasedFloat),
	alignof(FAttributeBasedFloat),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttributeBasedFloat_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAttributeBasedFloat_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAttributeBasedFloat()
{
	if (!Z_Registration_Info_UScriptStruct_AttributeBasedFloat.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AttributeBasedFloat.InnerSingleton, Z_Construct_UScriptStruct_FAttributeBasedFloat_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AttributeBasedFloat.InnerSingleton;
}
// End ScriptStruct FAttributeBasedFloat

// Begin ScriptStruct FCustomCalculationBasedFloat
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CustomCalculationBasedFloat;
class UScriptStruct* FCustomCalculationBasedFloat::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CustomCalculationBasedFloat.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CustomCalculationBasedFloat.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCustomCalculationBasedFloat, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("CustomCalculationBasedFloat"));
	}
	return Z_Registration_Info_UScriptStruct_CustomCalculationBasedFloat.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FCustomCalculationBasedFloat>()
{
	return FCustomCalculationBasedFloat::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCustomCalculationBasedFloat_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Structure to encapsulate magnitudes that are calculated via custom calculation */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Structure to encapsulate magnitudes that are calculated via custom calculation" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CalculationClassMagnitude_MetaData[] = {
		{ "Category", "CustomCalculation" },
		{ "DisplayName", "Calculation Class" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Coefficient_MetaData[] = {
		{ "Category", "CustomCalculation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Coefficient to the custom calculation */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Coefficient to the custom calculation" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreMultiplyAdditiveValue_MetaData[] = {
		{ "Category", "CustomCalculation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Additive value to the attribute calculation, added in before the coefficient applies */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Additive value to the attribute calculation, added in before the coefficient applies" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PostMultiplyAdditiveValue_MetaData[] = {
		{ "Category", "CustomCalculation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Additive value to the attribute calculation, added in after the coefficient applies */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Additive value to the attribute calculation, added in after the coefficient applies" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FinalLookupCurve_MetaData[] = {
		{ "Category", "CustomCalculation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If a curve table entry is specified, the OUTPUT of this custom class magnitude (including the pre and post additive values) lookup into the curve instead of using the attribute directly. */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If a curve table entry is specified, the OUTPUT of this custom class magnitude (including the pre and post additive values) lookup into the curve instead of using the attribute directly." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_CalculationClassMagnitude;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Coefficient;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PreMultiplyAdditiveValue;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PostMultiplyAdditiveValue;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FinalLookupCurve;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCustomCalculationBasedFloat>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FCustomCalculationBasedFloat_Statics::NewProp_CalculationClassMagnitude = { "CalculationClassMagnitude", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCustomCalculationBasedFloat, CalculationClassMagnitude), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayModMagnitudeCalculation_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CalculationClassMagnitude_MetaData), NewProp_CalculationClassMagnitude_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCustomCalculationBasedFloat_Statics::NewProp_Coefficient = { "Coefficient", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCustomCalculationBasedFloat, Coefficient), Z_Construct_UScriptStruct_FScalableFloat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Coefficient_MetaData), NewProp_Coefficient_MetaData) }; // 1548651388
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCustomCalculationBasedFloat_Statics::NewProp_PreMultiplyAdditiveValue = { "PreMultiplyAdditiveValue", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCustomCalculationBasedFloat, PreMultiplyAdditiveValue), Z_Construct_UScriptStruct_FScalableFloat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreMultiplyAdditiveValue_MetaData), NewProp_PreMultiplyAdditiveValue_MetaData) }; // 1548651388
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCustomCalculationBasedFloat_Statics::NewProp_PostMultiplyAdditiveValue = { "PostMultiplyAdditiveValue", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCustomCalculationBasedFloat, PostMultiplyAdditiveValue), Z_Construct_UScriptStruct_FScalableFloat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PostMultiplyAdditiveValue_MetaData), NewProp_PostMultiplyAdditiveValue_MetaData) }; // 1548651388
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCustomCalculationBasedFloat_Statics::NewProp_FinalLookupCurve = { "FinalLookupCurve", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCustomCalculationBasedFloat, FinalLookupCurve), Z_Construct_UScriptStruct_FCurveTableRowHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FinalLookupCurve_MetaData), NewProp_FinalLookupCurve_MetaData) }; // 1199935626
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCustomCalculationBasedFloat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomCalculationBasedFloat_Statics::NewProp_CalculationClassMagnitude,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomCalculationBasedFloat_Statics::NewProp_Coefficient,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomCalculationBasedFloat_Statics::NewProp_PreMultiplyAdditiveValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomCalculationBasedFloat_Statics::NewProp_PostMultiplyAdditiveValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomCalculationBasedFloat_Statics::NewProp_FinalLookupCurve,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomCalculationBasedFloat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCustomCalculationBasedFloat_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
	nullptr,
	&NewStructOps,
	"CustomCalculationBasedFloat",
	Z_Construct_UScriptStruct_FCustomCalculationBasedFloat_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomCalculationBasedFloat_Statics::PropPointers),
	sizeof(FCustomCalculationBasedFloat),
	alignof(FCustomCalculationBasedFloat),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomCalculationBasedFloat_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCustomCalculationBasedFloat_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCustomCalculationBasedFloat()
{
	if (!Z_Registration_Info_UScriptStruct_CustomCalculationBasedFloat.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CustomCalculationBasedFloat.InnerSingleton, Z_Construct_UScriptStruct_FCustomCalculationBasedFloat_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CustomCalculationBasedFloat.InnerSingleton;
}
// End ScriptStruct FCustomCalculationBasedFloat

// Begin ScriptStruct FSetByCallerFloat
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SetByCallerFloat;
class UScriptStruct* FSetByCallerFloat::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SetByCallerFloat.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SetByCallerFloat.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSetByCallerFloat, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("SetByCallerFloat"));
	}
	return Z_Registration_Info_UScriptStruct_SetByCallerFloat.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FSetByCallerFloat>()
{
	return FSetByCallerFloat::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSetByCallerFloat_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Struct for holding SetBytCaller data */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Struct for holding SetBytCaller data" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataName_MetaData[] = {
		{ "Category", "SetByCaller" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The Name the caller (code or blueprint) will use to set this magnitude by. */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Name the caller (code or blueprint) will use to set this magnitude by." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataTag_MetaData[] = {
		{ "Categories", "SetByCaller" },
		{ "Category", "SetByCaller" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_DataName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DataTag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSetByCallerFloat>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSetByCallerFloat_Statics::NewProp_DataName = { "DataName", nullptr, (EPropertyFlags)0x0010000000030001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSetByCallerFloat, DataName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataName_MetaData), NewProp_DataName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSetByCallerFloat_Statics::NewProp_DataTag = { "DataTag", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSetByCallerFloat, DataTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataTag_MetaData), NewProp_DataTag_MetaData) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSetByCallerFloat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSetByCallerFloat_Statics::NewProp_DataName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSetByCallerFloat_Statics::NewProp_DataTag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSetByCallerFloat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSetByCallerFloat_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
	nullptr,
	&NewStructOps,
	"SetByCallerFloat",
	Z_Construct_UScriptStruct_FSetByCallerFloat_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSetByCallerFloat_Statics::PropPointers),
	sizeof(FSetByCallerFloat),
	alignof(FSetByCallerFloat),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSetByCallerFloat_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSetByCallerFloat_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSetByCallerFloat()
{
	if (!Z_Registration_Info_UScriptStruct_SetByCallerFloat.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SetByCallerFloat.InnerSingleton, Z_Construct_UScriptStruct_FSetByCallerFloat_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SetByCallerFloat.InnerSingleton;
}
// End ScriptStruct FSetByCallerFloat

// Begin ScriptStruct FGameplayEffectModifierMagnitude
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayEffectModifierMagnitude;
class UScriptStruct* FGameplayEffectModifierMagnitude::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayEffectModifierMagnitude.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayEffectModifierMagnitude.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayEffectModifierMagnitude, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("GameplayEffectModifierMagnitude"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayEffectModifierMagnitude.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FGameplayEffectModifierMagnitude>()
{
	return FGameplayEffectModifierMagnitude::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGameplayEffectModifierMagnitude_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Struct representing the magnitude of a gameplay effect modifier, potentially calculated in numerous different ways */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Struct representing the magnitude of a gameplay effect modifier, potentially calculated in numerous different ways" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MagnitudeCalculationType_MetaData[] = {
		{ "Category", "Magnitude" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Type of calculation to perform to derive the magnitude */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Type of calculation to perform to derive the magnitude" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScalableFloatMagnitude_MetaData[] = {
		{ "Category", "Magnitude" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Magnitude value represented by a scalable float */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Magnitude value represented by a scalable float" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeBasedMagnitude_MetaData[] = {
		{ "Category", "Magnitude" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Magnitude value represented by an attribute-based float\n\x09(Coefficient * (PreMultiplyAdditiveValue + [Eval'd Attribute Value According to Policy])) + PostMultiplyAdditiveValue */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Magnitude value represented by an attribute-based float\n      (Coefficient * (PreMultiplyAdditiveValue + [Eval'd Attribute Value According to Policy])) + PostMultiplyAdditiveValue" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomMagnitude_MetaData[] = {
		{ "Category", "Magnitude" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Magnitude value represented by a custom calculation class */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Magnitude value represented by a custom calculation class" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SetByCallerMagnitude_MetaData[] = {
		{ "Category", "Magnitude" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Magnitude value represented by a SetByCaller magnitude */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Magnitude value represented by a SetByCaller magnitude" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_MagnitudeCalculationType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MagnitudeCalculationType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ScalableFloatMagnitude;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeBasedMagnitude;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CustomMagnitude;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SetByCallerMagnitude;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayEffectModifierMagnitude>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGameplayEffectModifierMagnitude_Statics::NewProp_MagnitudeCalculationType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGameplayEffectModifierMagnitude_Statics::NewProp_MagnitudeCalculationType = { "MagnitudeCalculationType", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayEffectModifierMagnitude, MagnitudeCalculationType), Z_Construct_UEnum_GameplayAbilities_EGameplayEffectMagnitudeCalculation, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MagnitudeCalculationType_MetaData), NewProp_MagnitudeCalculationType_MetaData) }; // 2148493703
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayEffectModifierMagnitude_Statics::NewProp_ScalableFloatMagnitude = { "ScalableFloatMagnitude", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayEffectModifierMagnitude, ScalableFloatMagnitude), Z_Construct_UScriptStruct_FScalableFloat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScalableFloatMagnitude_MetaData), NewProp_ScalableFloatMagnitude_MetaData) }; // 1548651388
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayEffectModifierMagnitude_Statics::NewProp_AttributeBasedMagnitude = { "AttributeBasedMagnitude", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayEffectModifierMagnitude, AttributeBasedMagnitude), Z_Construct_UScriptStruct_FAttributeBasedFloat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeBasedMagnitude_MetaData), NewProp_AttributeBasedMagnitude_MetaData) }; // 497558089
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayEffectModifierMagnitude_Statics::NewProp_CustomMagnitude = { "CustomMagnitude", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayEffectModifierMagnitude, CustomMagnitude), Z_Construct_UScriptStruct_FCustomCalculationBasedFloat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomMagnitude_MetaData), NewProp_CustomMagnitude_MetaData) }; // 3169754592
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayEffectModifierMagnitude_Statics::NewProp_SetByCallerMagnitude = { "SetByCallerMagnitude", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayEffectModifierMagnitude, SetByCallerMagnitude), Z_Construct_UScriptStruct_FSetByCallerFloat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SetByCallerMagnitude_MetaData), NewProp_SetByCallerMagnitude_MetaData) }; // 3464839154
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayEffectModifierMagnitude_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectModifierMagnitude_Statics::NewProp_MagnitudeCalculationType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectModifierMagnitude_Statics::NewProp_MagnitudeCalculationType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectModifierMagnitude_Statics::NewProp_ScalableFloatMagnitude,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectModifierMagnitude_Statics::NewProp_AttributeBasedMagnitude,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectModifierMagnitude_Statics::NewProp_CustomMagnitude,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectModifierMagnitude_Statics::NewProp_SetByCallerMagnitude,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectModifierMagnitude_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayEffectModifierMagnitude_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
	nullptr,
	&NewStructOps,
	"GameplayEffectModifierMagnitude",
	Z_Construct_UScriptStruct_FGameplayEffectModifierMagnitude_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectModifierMagnitude_Statics::PropPointers),
	sizeof(FGameplayEffectModifierMagnitude),
	alignof(FGameplayEffectModifierMagnitude),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectModifierMagnitude_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGameplayEffectModifierMagnitude_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectModifierMagnitude()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayEffectModifierMagnitude.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayEffectModifierMagnitude.InnerSingleton, Z_Construct_UScriptStruct_FGameplayEffectModifierMagnitude_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GameplayEffectModifierMagnitude.InnerSingleton;
}
// End ScriptStruct FGameplayEffectModifierMagnitude

// Begin Enum EGameplayEffectScopedModifierAggregatorType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGameplayEffectScopedModifierAggregatorType;
static UEnum* EGameplayEffectScopedModifierAggregatorType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGameplayEffectScopedModifierAggregatorType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGameplayEffectScopedModifierAggregatorType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GameplayAbilities_EGameplayEffectScopedModifierAggregatorType, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("EGameplayEffectScopedModifierAggregatorType"));
	}
	return Z_Registration_Info_UEnum_EGameplayEffectScopedModifierAggregatorType.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UEnum* StaticEnum<EGameplayEffectScopedModifierAggregatorType>()
{
	return EGameplayEffectScopedModifierAggregatorType_StaticEnum();
}
struct Z_Construct_UEnum_GameplayAbilities_EGameplayEffectScopedModifierAggregatorType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "CapturedAttributeBacked.Comment", "/** Aggregator is backed by an attribute capture */" },
		{ "CapturedAttributeBacked.Name", "EGameplayEffectScopedModifierAggregatorType::CapturedAttributeBacked" },
		{ "CapturedAttributeBacked.ToolTip", "Aggregator is backed by an attribute capture" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Enumeration representing the types of scoped modifier aggregator usages available */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enumeration representing the types of scoped modifier aggregator usages available" },
#endif
		{ "Transient.Comment", "/** Aggregator is entirely transient (acting as a \"temporary variable\") and must be identified via gameplay tag */" },
		{ "Transient.Name", "EGameplayEffectScopedModifierAggregatorType::Transient" },
		{ "Transient.ToolTip", "Aggregator is entirely transient (acting as a \"temporary variable\") and must be identified via gameplay tag" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGameplayEffectScopedModifierAggregatorType::CapturedAttributeBacked", (int64)EGameplayEffectScopedModifierAggregatorType::CapturedAttributeBacked },
		{ "EGameplayEffectScopedModifierAggregatorType::Transient", (int64)EGameplayEffectScopedModifierAggregatorType::Transient },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GameplayAbilities_EGameplayEffectScopedModifierAggregatorType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_GameplayAbilities,
	nullptr,
	"EGameplayEffectScopedModifierAggregatorType",
	"EGameplayEffectScopedModifierAggregatorType",
	Z_Construct_UEnum_GameplayAbilities_EGameplayEffectScopedModifierAggregatorType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayAbilities_EGameplayEffectScopedModifierAggregatorType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayAbilities_EGameplayEffectScopedModifierAggregatorType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GameplayAbilities_EGameplayEffectScopedModifierAggregatorType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_GameplayAbilities_EGameplayEffectScopedModifierAggregatorType()
{
	if (!Z_Registration_Info_UEnum_EGameplayEffectScopedModifierAggregatorType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGameplayEffectScopedModifierAggregatorType.InnerSingleton, Z_Construct_UEnum_GameplayAbilities_EGameplayEffectScopedModifierAggregatorType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGameplayEffectScopedModifierAggregatorType.InnerSingleton;
}
// End Enum EGameplayEffectScopedModifierAggregatorType

// Begin ScriptStruct FGameplayEffectExecutionScopedModifierInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayEffectExecutionScopedModifierInfo;
class UScriptStruct* FGameplayEffectExecutionScopedModifierInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayEffectExecutionScopedModifierInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayEffectExecutionScopedModifierInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayEffectExecutionScopedModifierInfo, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("GameplayEffectExecutionScopedModifierInfo"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayEffectExecutionScopedModifierInfo.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FGameplayEffectExecutionScopedModifierInfo>()
{
	return FGameplayEffectExecutionScopedModifierInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGameplayEffectExecutionScopedModifierInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n * Struct representing modifier info used exclusively for \"scoped\" executions that happen instantaneously. These are\n * folded into a calculation only for the extent of the calculation and never permanently added to an aggregator.\n */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Struct representing modifier info used exclusively for \"scoped\" executions that happen instantaneously. These are\nfolded into a calculation only for the extent of the calculation and never permanently added to an aggregator." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CapturedAttribute_MetaData[] = {
		{ "Category", "Execution" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Backing attribute that the scoped modifier is for */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Backing attribute that the scoped modifier is for" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransientAggregatorIdentifier_MetaData[] = {
		{ "Category", "Execution" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Identifier for aggregator if acting as a transient \"temporary variable\" aggregator */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Identifier for aggregator if acting as a transient \"temporary variable\" aggregator" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AggregatorType_MetaData[] = {
		{ "Category", "Execution" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Type of aggregator backing the scoped mod */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Type of aggregator backing the scoped mod" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModifierOp_MetaData[] = {
		{ "Category", "Execution" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Modifier operation to perform */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Modifier operation to perform" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModifierMagnitude_MetaData[] = {
		{ "Category", "Execution" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Magnitude of the scoped modifier */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Magnitude of the scoped modifier" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EvaluationChannelSettings_MetaData[] = {
		{ "Category", "Execution" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Evaluation channel settings of the scoped modifier */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Evaluation channel settings of the scoped modifier" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceTags_MetaData[] = {
		{ "Category", "Execution" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Source tag requirements for the modifier to apply */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Source tag requirements for the modifier to apply" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetTags_MetaData[] = {
		{ "Category", "Execution" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Target tag requirements for the modifier to apply */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Target tag requirements for the modifier to apply" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CapturedAttribute;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TransientAggregatorIdentifier;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AggregatorType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AggregatorType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ModifierOp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ModifierMagnitude;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EvaluationChannelSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SourceTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetTags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayEffectExecutionScopedModifierInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayEffectExecutionScopedModifierInfo_Statics::NewProp_CapturedAttribute = { "CapturedAttribute", nullptr, (EPropertyFlags)0x0010000000030001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayEffectExecutionScopedModifierInfo, CapturedAttribute), Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureDefinition, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CapturedAttribute_MetaData), NewProp_CapturedAttribute_MetaData) }; // 1688717124
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayEffectExecutionScopedModifierInfo_Statics::NewProp_TransientAggregatorIdentifier = { "TransientAggregatorIdentifier", nullptr, (EPropertyFlags)0x0010000000030001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayEffectExecutionScopedModifierInfo, TransientAggregatorIdentifier), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransientAggregatorIdentifier_MetaData), NewProp_TransientAggregatorIdentifier_MetaData) }; // 1298103297
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGameplayEffectExecutionScopedModifierInfo_Statics::NewProp_AggregatorType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGameplayEffectExecutionScopedModifierInfo_Statics::NewProp_AggregatorType = { "AggregatorType", nullptr, (EPropertyFlags)0x0010000000030001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayEffectExecutionScopedModifierInfo, AggregatorType), Z_Construct_UEnum_GameplayAbilities_EGameplayEffectScopedModifierAggregatorType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AggregatorType_MetaData), NewProp_AggregatorType_MetaData) }; // 26787970
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGameplayEffectExecutionScopedModifierInfo_Statics::NewProp_ModifierOp = { "ModifierOp", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayEffectExecutionScopedModifierInfo, ModifierOp), Z_Construct_UEnum_GameplayAbilities_EGameplayModOp, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModifierOp_MetaData), NewProp_ModifierOp_MetaData) }; // 2940526104
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayEffectExecutionScopedModifierInfo_Statics::NewProp_ModifierMagnitude = { "ModifierMagnitude", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayEffectExecutionScopedModifierInfo, ModifierMagnitude), Z_Construct_UScriptStruct_FGameplayEffectModifierMagnitude, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModifierMagnitude_MetaData), NewProp_ModifierMagnitude_MetaData) }; // 190918390
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayEffectExecutionScopedModifierInfo_Statics::NewProp_EvaluationChannelSettings = { "EvaluationChannelSettings", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayEffectExecutionScopedModifierInfo, EvaluationChannelSettings), Z_Construct_UScriptStruct_FGameplayModEvaluationChannelSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EvaluationChannelSettings_MetaData), NewProp_EvaluationChannelSettings_MetaData) }; // 2007245468
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayEffectExecutionScopedModifierInfo_Statics::NewProp_SourceTags = { "SourceTags", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayEffectExecutionScopedModifierInfo, SourceTags), Z_Construct_UScriptStruct_FGameplayTagRequirements, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceTags_MetaData), NewProp_SourceTags_MetaData) }; // 3067797139
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayEffectExecutionScopedModifierInfo_Statics::NewProp_TargetTags = { "TargetTags", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayEffectExecutionScopedModifierInfo, TargetTags), Z_Construct_UScriptStruct_FGameplayTagRequirements, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetTags_MetaData), NewProp_TargetTags_MetaData) }; // 3067797139
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayEffectExecutionScopedModifierInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectExecutionScopedModifierInfo_Statics::NewProp_CapturedAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectExecutionScopedModifierInfo_Statics::NewProp_TransientAggregatorIdentifier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectExecutionScopedModifierInfo_Statics::NewProp_AggregatorType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectExecutionScopedModifierInfo_Statics::NewProp_AggregatorType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectExecutionScopedModifierInfo_Statics::NewProp_ModifierOp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectExecutionScopedModifierInfo_Statics::NewProp_ModifierMagnitude,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectExecutionScopedModifierInfo_Statics::NewProp_EvaluationChannelSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectExecutionScopedModifierInfo_Statics::NewProp_SourceTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectExecutionScopedModifierInfo_Statics::NewProp_TargetTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectExecutionScopedModifierInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayEffectExecutionScopedModifierInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
	nullptr,
	&NewStructOps,
	"GameplayEffectExecutionScopedModifierInfo",
	Z_Construct_UScriptStruct_FGameplayEffectExecutionScopedModifierInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectExecutionScopedModifierInfo_Statics::PropPointers),
	sizeof(FGameplayEffectExecutionScopedModifierInfo),
	alignof(FGameplayEffectExecutionScopedModifierInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectExecutionScopedModifierInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGameplayEffectExecutionScopedModifierInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectExecutionScopedModifierInfo()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayEffectExecutionScopedModifierInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayEffectExecutionScopedModifierInfo.InnerSingleton, Z_Construct_UScriptStruct_FGameplayEffectExecutionScopedModifierInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GameplayEffectExecutionScopedModifierInfo.InnerSingleton;
}
// End ScriptStruct FGameplayEffectExecutionScopedModifierInfo

// Begin ScriptStruct FConditionalGameplayEffect
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConditionalGameplayEffect;
class UScriptStruct* FConditionalGameplayEffect::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConditionalGameplayEffect.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConditionalGameplayEffect.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConditionalGameplayEffect, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("ConditionalGameplayEffect"));
	}
	return Z_Registration_Info_UScriptStruct_ConditionalGameplayEffect.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FConditionalGameplayEffect>()
{
	return FConditionalGameplayEffect::StaticStruct();
}
struct Z_Construct_UScriptStruct_FConditionalGameplayEffect_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Struct for gameplay effects that apply only if another gameplay effect (or execution) was successfully applied.\n */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Struct for gameplay effects that apply only if another gameplay effect (or execution) was successfully applied." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EffectClass_MetaData[] = {
		{ "Category", "GameplayEffect" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** gameplay effect that will be applied to the target */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "gameplay effect that will be applied to the target" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequiredSourceTags_MetaData[] = {
		{ "Category", "GameplayEffect" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Tags that the source must have for this GE to apply.  If this is blank, then there are no requirements to apply the EffectClass. */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tags that the source must have for this GE to apply.  If this is blank, then there are no requirements to apply the EffectClass." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_EffectClass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RequiredSourceTags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConditionalGameplayEffect>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FConditionalGameplayEffect_Statics::NewProp_EffectClass = { "EffectClass", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConditionalGameplayEffect, EffectClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EffectClass_MetaData), NewProp_EffectClass_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConditionalGameplayEffect_Statics::NewProp_RequiredSourceTags = { "RequiredSourceTags", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConditionalGameplayEffect, RequiredSourceTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequiredSourceTags_MetaData), NewProp_RequiredSourceTags_MetaData) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConditionalGameplayEffect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConditionalGameplayEffect_Statics::NewProp_EffectClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConditionalGameplayEffect_Statics::NewProp_RequiredSourceTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConditionalGameplayEffect_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConditionalGameplayEffect_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
	nullptr,
	&NewStructOps,
	"ConditionalGameplayEffect",
	Z_Construct_UScriptStruct_FConditionalGameplayEffect_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConditionalGameplayEffect_Statics::PropPointers),
	sizeof(FConditionalGameplayEffect),
	alignof(FConditionalGameplayEffect),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConditionalGameplayEffect_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FConditionalGameplayEffect_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FConditionalGameplayEffect()
{
	if (!Z_Registration_Info_UScriptStruct_ConditionalGameplayEffect.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConditionalGameplayEffect.InnerSingleton, Z_Construct_UScriptStruct_FConditionalGameplayEffect_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ConditionalGameplayEffect.InnerSingleton;
}
// End ScriptStruct FConditionalGameplayEffect

// Begin ScriptStruct FGameplayEffectExecutionDefinition
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayEffectExecutionDefinition;
class UScriptStruct* FGameplayEffectExecutionDefinition::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayEffectExecutionDefinition.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayEffectExecutionDefinition.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayEffectExecutionDefinition, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("GameplayEffectExecutionDefinition"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayEffectExecutionDefinition.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FGameplayEffectExecutionDefinition>()
{
	return FGameplayEffectExecutionDefinition::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGameplayEffectExecutionDefinition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n * Struct representing the definition of a custom execution for a gameplay effect.\n * Custom executions run special logic from an outside class each time the gameplay effect executes.\n */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Struct representing the definition of a custom execution for a gameplay effect.\nCustom executions run special logic from an outside class each time the gameplay effect executes." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CalculationClass_MetaData[] = {
		{ "Category", "Execution" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Custom execution calculation class to run when the gameplay effect executes */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Custom execution calculation class to run when the gameplay effect executes" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PassedInTags_MetaData[] = {
		{ "Category", "Execution" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** These tags are passed into the execution as is, and may be used to do conditional logic */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "These tags are passed into the execution as is, and may be used to do conditional logic" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CalculationModifiers_MetaData[] = {
		{ "Category", "Execution" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Modifiers that are applied \"in place\" during the execution calculation */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Modifiers that are applied \"in place\" during the execution calculation" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConditionalGameplayEffects_MetaData[] = {
		{ "Category", "Execution" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Other Gameplay Effects that will be applied to the target of this execution if the execution is successful. Note if no execution class is selected, these will always apply. */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Other Gameplay Effects that will be applied to the target of this execution if the execution is successful. Note if no execution class is selected, these will always apply." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_CalculationClass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PassedInTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CalculationModifiers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CalculationModifiers;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ConditionalGameplayEffects_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ConditionalGameplayEffects;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayEffectExecutionDefinition>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FGameplayEffectExecutionDefinition_Statics::NewProp_CalculationClass = { "CalculationClass", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayEffectExecutionDefinition, CalculationClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffectExecutionCalculation_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CalculationClass_MetaData), NewProp_CalculationClass_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayEffectExecutionDefinition_Statics::NewProp_PassedInTags = { "PassedInTags", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayEffectExecutionDefinition, PassedInTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PassedInTags_MetaData), NewProp_PassedInTags_MetaData) }; // 3352185621
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayEffectExecutionDefinition_Statics::NewProp_CalculationModifiers_Inner = { "CalculationModifiers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayEffectExecutionScopedModifierInfo, METADATA_PARAMS(0, nullptr) }; // 2865242200
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGameplayEffectExecutionDefinition_Statics::NewProp_CalculationModifiers = { "CalculationModifiers", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayEffectExecutionDefinition, CalculationModifiers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CalculationModifiers_MetaData), NewProp_CalculationModifiers_MetaData) }; // 2865242200
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayEffectExecutionDefinition_Statics::NewProp_ConditionalGameplayEffects_Inner = { "ConditionalGameplayEffects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FConditionalGameplayEffect, METADATA_PARAMS(0, nullptr) }; // 3840225737
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGameplayEffectExecutionDefinition_Statics::NewProp_ConditionalGameplayEffects = { "ConditionalGameplayEffects", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayEffectExecutionDefinition, ConditionalGameplayEffects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConditionalGameplayEffects_MetaData), NewProp_ConditionalGameplayEffects_MetaData) }; // 3840225737
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayEffectExecutionDefinition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectExecutionDefinition_Statics::NewProp_CalculationClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectExecutionDefinition_Statics::NewProp_PassedInTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectExecutionDefinition_Statics::NewProp_CalculationModifiers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectExecutionDefinition_Statics::NewProp_CalculationModifiers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectExecutionDefinition_Statics::NewProp_ConditionalGameplayEffects_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectExecutionDefinition_Statics::NewProp_ConditionalGameplayEffects,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectExecutionDefinition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayEffectExecutionDefinition_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
	nullptr,
	&NewStructOps,
	"GameplayEffectExecutionDefinition",
	Z_Construct_UScriptStruct_FGameplayEffectExecutionDefinition_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectExecutionDefinition_Statics::PropPointers),
	sizeof(FGameplayEffectExecutionDefinition),
	alignof(FGameplayEffectExecutionDefinition),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectExecutionDefinition_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGameplayEffectExecutionDefinition_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectExecutionDefinition()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayEffectExecutionDefinition.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayEffectExecutionDefinition.InnerSingleton, Z_Construct_UScriptStruct_FGameplayEffectExecutionDefinition_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GameplayEffectExecutionDefinition.InnerSingleton;
}
// End ScriptStruct FGameplayEffectExecutionDefinition

// Begin ScriptStruct FGameplayModifierInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayModifierInfo;
class UScriptStruct* FGameplayModifierInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayModifierInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayModifierInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayModifierInfo, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("GameplayModifierInfo"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayModifierInfo.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FGameplayModifierInfo>()
{
	return FGameplayModifierInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGameplayModifierInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * FGameplayModifierInfo\n *\x09Tells us \"Who/What we\" modify\n *\x09""Does not tell us how exactly\n */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "FGameplayModifierInfo\n    Tells us \"Who/What we\" modify\n    Does not tell us how exactly" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Attribute_MetaData[] = {
		{ "Category", "GameplayModifier" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The Attribute we modify or the GE we modify modifies. */" },
#endif
		{ "FilterMetaTag", "HideFromModifiers" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Attribute we modify or the GE we modify modifies." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModifierOp_MetaData[] = {
		{ "Category", "GameplayModifier" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The numeric operation of this modifier: Override, Add, Multiply, etc  */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The numeric operation of this modifier: Override, Add, Multiply, etc" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModifierMagnitude_MetaData[] = {
		{ "Category", "GameplayModifier" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Magnitude of the modifier */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Magnitude of the modifier" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EvaluationChannelSettings_MetaData[] = {
		{ "Category", "GameplayModifier" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Evaluation channel settings of the modifier */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Evaluation channel settings of the modifier" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceTags_MetaData[] = {
		{ "Category", "GameplayModifier" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetTags_MetaData[] = {
		{ "Category", "GameplayModifier" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Attribute;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ModifierOp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ModifierMagnitude;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EvaluationChannelSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SourceTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetTags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayModifierInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayModifierInfo_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayModifierInfo, Attribute), Z_Construct_UScriptStruct_FGameplayAttribute, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Attribute_MetaData), NewProp_Attribute_MetaData) }; // 884374022
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGameplayModifierInfo_Statics::NewProp_ModifierOp = { "ModifierOp", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayModifierInfo, ModifierOp), Z_Construct_UEnum_GameplayAbilities_EGameplayModOp, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModifierOp_MetaData), NewProp_ModifierOp_MetaData) }; // 2940526104
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayModifierInfo_Statics::NewProp_ModifierMagnitude = { "ModifierMagnitude", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayModifierInfo, ModifierMagnitude), Z_Construct_UScriptStruct_FGameplayEffectModifierMagnitude, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModifierMagnitude_MetaData), NewProp_ModifierMagnitude_MetaData) }; // 190918390
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayModifierInfo_Statics::NewProp_EvaluationChannelSettings = { "EvaluationChannelSettings", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayModifierInfo, EvaluationChannelSettings), Z_Construct_UScriptStruct_FGameplayModEvaluationChannelSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EvaluationChannelSettings_MetaData), NewProp_EvaluationChannelSettings_MetaData) }; // 2007245468
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayModifierInfo_Statics::NewProp_SourceTags = { "SourceTags", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayModifierInfo, SourceTags), Z_Construct_UScriptStruct_FGameplayTagRequirements, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceTags_MetaData), NewProp_SourceTags_MetaData) }; // 3067797139
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayModifierInfo_Statics::NewProp_TargetTags = { "TargetTags", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayModifierInfo, TargetTags), Z_Construct_UScriptStruct_FGameplayTagRequirements, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetTags_MetaData), NewProp_TargetTags_MetaData) }; // 3067797139
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayModifierInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayModifierInfo_Statics::NewProp_Attribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayModifierInfo_Statics::NewProp_ModifierOp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayModifierInfo_Statics::NewProp_ModifierMagnitude,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayModifierInfo_Statics::NewProp_EvaluationChannelSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayModifierInfo_Statics::NewProp_SourceTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayModifierInfo_Statics::NewProp_TargetTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayModifierInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayModifierInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
	nullptr,
	&NewStructOps,
	"GameplayModifierInfo",
	Z_Construct_UScriptStruct_FGameplayModifierInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayModifierInfo_Statics::PropPointers),
	sizeof(FGameplayModifierInfo),
	alignof(FGameplayModifierInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayModifierInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGameplayModifierInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGameplayModifierInfo()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayModifierInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayModifierInfo.InnerSingleton, Z_Construct_UScriptStruct_FGameplayModifierInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GameplayModifierInfo.InnerSingleton;
}
// End ScriptStruct FGameplayModifierInfo

// Begin ScriptStruct FGameplayEffectCue
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayEffectCue;
class UScriptStruct* FGameplayEffectCue::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayEffectCue.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayEffectCue.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayEffectCue, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("GameplayEffectCue"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayEffectCue.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FGameplayEffectCue>()
{
	return FGameplayEffectCue::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGameplayEffectCue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * FGameplayEffectCue\n *\x09This is a cosmetic cue that can be tied to a UGameplayEffect. \n *  This is essentially a GameplayTag + a Min/Max level range that is used to map the level of a GameplayEffect to a normalized value used by the GameplayCue system.\n */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "FGameplayEffectCue\n    This is a cosmetic cue that can be tied to a UGameplayEffect.\n This is essentially a GameplayTag + a Min/Max level range that is used to map the level of a GameplayEffect to a normalized value used by the GameplayCue system." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MagnitudeAttribute_MetaData[] = {
		{ "Category", "GameplayCue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The attribute to use as the source for cue magnitude. If none use level */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The attribute to use as the source for cue magnitude. If none use level" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinLevel_MetaData[] = {
		{ "Category", "GameplayCue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The minimum level that this Cue supports */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The minimum level that this Cue supports" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxLevel_MetaData[] = {
		{ "Category", "GameplayCue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The maximum level that this Cue supports */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The maximum level that this Cue supports" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameplayCueTags_MetaData[] = {
		{ "Categories", "GameplayCue" },
		{ "Category", "GameplayCue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Tags passed to the gameplay cue handler when this cue is activated */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tags passed to the gameplay cue handler when this cue is activated" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_MagnitudeAttribute;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinLevel;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxLevel;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayCueTags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayEffectCue>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayEffectCue_Statics::NewProp_MagnitudeAttribute = { "MagnitudeAttribute", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayEffectCue, MagnitudeAttribute), Z_Construct_UScriptStruct_FGameplayAttribute, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MagnitudeAttribute_MetaData), NewProp_MagnitudeAttribute_MetaData) }; // 884374022
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGameplayEffectCue_Statics::NewProp_MinLevel = { "MinLevel", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayEffectCue, MinLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinLevel_MetaData), NewProp_MinLevel_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGameplayEffectCue_Statics::NewProp_MaxLevel = { "MaxLevel", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayEffectCue, MaxLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxLevel_MetaData), NewProp_MaxLevel_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayEffectCue_Statics::NewProp_GameplayCueTags = { "GameplayCueTags", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayEffectCue, GameplayCueTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameplayCueTags_MetaData), NewProp_GameplayCueTags_MetaData) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayEffectCue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectCue_Statics::NewProp_MagnitudeAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectCue_Statics::NewProp_MinLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectCue_Statics::NewProp_MaxLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectCue_Statics::NewProp_GameplayCueTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectCue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayEffectCue_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
	nullptr,
	&NewStructOps,
	"GameplayEffectCue",
	Z_Construct_UScriptStruct_FGameplayEffectCue_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectCue_Statics::PropPointers),
	sizeof(FGameplayEffectCue),
	alignof(FGameplayEffectCue),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectCue_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGameplayEffectCue_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectCue()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayEffectCue.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayEffectCue.InnerSingleton, Z_Construct_UScriptStruct_FGameplayEffectCue_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GameplayEffectCue.InnerSingleton;
}
// End ScriptStruct FGameplayEffectCue

// Begin ScriptStruct FInheritedTagContainer
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InheritedTagContainer;
class UScriptStruct* FInheritedTagContainer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InheritedTagContainer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InheritedTagContainer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInheritedTagContainer, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("InheritedTagContainer"));
	}
	return Z_Registration_Info_UScriptStruct_InheritedTagContainer.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FInheritedTagContainer>()
{
	return FInheritedTagContainer::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInheritedTagContainer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Structure that is used to combine tags from parent and child blueprints in a safe way */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Structure that is used to combine tags from parent and child blueprints in a safe way" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CombinedTags_MetaData[] = {
		{ "Category", "Application" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
#if !UE_BUILD_SHIPPING
		{ "Tooltip", "CombinedTags = Inherited - Removed + Added" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Added_MetaData[] = {
		{ "Category", "Application" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Tags that I have (in addition to my parent's tags) */" },
#endif
		{ "DisplayName", "Add to Inherited" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tags that I have (in addition to my parent's tags)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Removed_MetaData[] = {
		{ "Category", "Application" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Tags that should be removed (only if my parent had them).  Note: we cannot use this to remove a tag that exists on a target. It only modifies the result of CombinedTags. */" },
#endif
		{ "DisplayName", "Remove from Inherited" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tags that should be removed (only if my parent had them).  Note: we cannot use this to remove a tag that exists on a target. It only modifies the result of CombinedTags." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CombinedTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Added;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Removed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInheritedTagContainer>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInheritedTagContainer_Statics::NewProp_CombinedTags = { "CombinedTags", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInheritedTagContainer, CombinedTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CombinedTags_MetaData), NewProp_CombinedTags_MetaData) }; // 3352185621
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInheritedTagContainer_Statics::NewProp_Added = { "Added", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInheritedTagContainer, Added), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Added_MetaData), NewProp_Added_MetaData) }; // 3352185621
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInheritedTagContainer_Statics::NewProp_Removed = { "Removed", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInheritedTagContainer, Removed), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Removed_MetaData), NewProp_Removed_MetaData) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInheritedTagContainer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInheritedTagContainer_Statics::NewProp_CombinedTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInheritedTagContainer_Statics::NewProp_Added,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInheritedTagContainer_Statics::NewProp_Removed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInheritedTagContainer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInheritedTagContainer_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
	nullptr,
	&NewStructOps,
	"InheritedTagContainer",
	Z_Construct_UScriptStruct_FInheritedTagContainer_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInheritedTagContainer_Statics::PropPointers),
	sizeof(FInheritedTagContainer),
	alignof(FInheritedTagContainer),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInheritedTagContainer_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInheritedTagContainer_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInheritedTagContainer()
{
	if (!Z_Registration_Info_UScriptStruct_InheritedTagContainer.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InheritedTagContainer.InnerSingleton, Z_Construct_UScriptStruct_FInheritedTagContainer_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InheritedTagContainer.InnerSingleton;
}
// End ScriptStruct FInheritedTagContainer

// Begin Enum EGameplayEffectDurationType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGameplayEffectDurationType;
static UEnum* EGameplayEffectDurationType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGameplayEffectDurationType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGameplayEffectDurationType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GameplayAbilities_EGameplayEffectDurationType, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("EGameplayEffectDurationType"));
	}
	return Z_Registration_Info_UEnum_EGameplayEffectDurationType.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UEnum* StaticEnum<EGameplayEffectDurationType>()
{
	return EGameplayEffectDurationType_StaticEnum();
}
struct Z_Construct_UEnum_GameplayAbilities_EGameplayEffectDurationType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Gameplay effect duration policies */" },
#endif
		{ "HasDuration.Comment", "/** The duration of this effect will be specified by a magnitude */" },
		{ "HasDuration.Name", "EGameplayEffectDurationType::HasDuration" },
		{ "HasDuration.ToolTip", "The duration of this effect will be specified by a magnitude" },
		{ "Infinite.Comment", "/** This effect lasts forever */" },
		{ "Infinite.Name", "EGameplayEffectDurationType::Infinite" },
		{ "Infinite.ToolTip", "This effect lasts forever" },
		{ "Instant.Comment", "/** This effect applies instantly */" },
		{ "Instant.Name", "EGameplayEffectDurationType::Instant" },
		{ "Instant.ToolTip", "This effect applies instantly" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gameplay effect duration policies" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGameplayEffectDurationType::Instant", (int64)EGameplayEffectDurationType::Instant },
		{ "EGameplayEffectDurationType::Infinite", (int64)EGameplayEffectDurationType::Infinite },
		{ "EGameplayEffectDurationType::HasDuration", (int64)EGameplayEffectDurationType::HasDuration },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GameplayAbilities_EGameplayEffectDurationType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_GameplayAbilities,
	nullptr,
	"EGameplayEffectDurationType",
	"EGameplayEffectDurationType",
	Z_Construct_UEnum_GameplayAbilities_EGameplayEffectDurationType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayAbilities_EGameplayEffectDurationType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayAbilities_EGameplayEffectDurationType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GameplayAbilities_EGameplayEffectDurationType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_GameplayAbilities_EGameplayEffectDurationType()
{
	if (!Z_Registration_Info_UEnum_EGameplayEffectDurationType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGameplayEffectDurationType.InnerSingleton, Z_Construct_UEnum_GameplayAbilities_EGameplayEffectDurationType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGameplayEffectDurationType.InnerSingleton;
}
// End Enum EGameplayEffectDurationType

// Begin Enum EGameplayEffectStackingDurationPolicy
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGameplayEffectStackingDurationPolicy;
static UEnum* EGameplayEffectStackingDurationPolicy_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGameplayEffectStackingDurationPolicy.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGameplayEffectStackingDurationPolicy.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GameplayAbilities_EGameplayEffectStackingDurationPolicy, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("EGameplayEffectStackingDurationPolicy"));
	}
	return Z_Registration_Info_UEnum_EGameplayEffectStackingDurationPolicy.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UEnum* StaticEnum<EGameplayEffectStackingDurationPolicy>()
{
	return EGameplayEffectStackingDurationPolicy_StaticEnum();
}
struct Z_Construct_UEnum_GameplayAbilities_EGameplayEffectStackingDurationPolicy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Enumeration of policies for dealing with duration of a gameplay effect while stacking */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
		{ "NeverRefresh.Comment", "/** The duration of the effect will never be refreshed */" },
		{ "NeverRefresh.Name", "EGameplayEffectStackingDurationPolicy::NeverRefresh" },
		{ "NeverRefresh.ToolTip", "The duration of the effect will never be refreshed" },
		{ "RefreshOnSuccessfulApplication.Comment", "/** The duration of the effect will be refreshed from any successful stack application */" },
		{ "RefreshOnSuccessfulApplication.Name", "EGameplayEffectStackingDurationPolicy::RefreshOnSuccessfulApplication" },
		{ "RefreshOnSuccessfulApplication.ToolTip", "The duration of the effect will be refreshed from any successful stack application" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enumeration of policies for dealing with duration of a gameplay effect while stacking" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGameplayEffectStackingDurationPolicy::RefreshOnSuccessfulApplication", (int64)EGameplayEffectStackingDurationPolicy::RefreshOnSuccessfulApplication },
		{ "EGameplayEffectStackingDurationPolicy::NeverRefresh", (int64)EGameplayEffectStackingDurationPolicy::NeverRefresh },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GameplayAbilities_EGameplayEffectStackingDurationPolicy_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_GameplayAbilities,
	nullptr,
	"EGameplayEffectStackingDurationPolicy",
	"EGameplayEffectStackingDurationPolicy",
	Z_Construct_UEnum_GameplayAbilities_EGameplayEffectStackingDurationPolicy_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayAbilities_EGameplayEffectStackingDurationPolicy_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayAbilities_EGameplayEffectStackingDurationPolicy_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GameplayAbilities_EGameplayEffectStackingDurationPolicy_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_GameplayAbilities_EGameplayEffectStackingDurationPolicy()
{
	if (!Z_Registration_Info_UEnum_EGameplayEffectStackingDurationPolicy.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGameplayEffectStackingDurationPolicy.InnerSingleton, Z_Construct_UEnum_GameplayAbilities_EGameplayEffectStackingDurationPolicy_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGameplayEffectStackingDurationPolicy.InnerSingleton;
}
// End Enum EGameplayEffectStackingDurationPolicy

// Begin Enum EGameplayEffectStackingPeriodPolicy
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGameplayEffectStackingPeriodPolicy;
static UEnum* EGameplayEffectStackingPeriodPolicy_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGameplayEffectStackingPeriodPolicy.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGameplayEffectStackingPeriodPolicy.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GameplayAbilities_EGameplayEffectStackingPeriodPolicy, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("EGameplayEffectStackingPeriodPolicy"));
	}
	return Z_Registration_Info_UEnum_EGameplayEffectStackingPeriodPolicy.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UEnum* StaticEnum<EGameplayEffectStackingPeriodPolicy>()
{
	return EGameplayEffectStackingPeriodPolicy_StaticEnum();
}
struct Z_Construct_UEnum_GameplayAbilities_EGameplayEffectStackingPeriodPolicy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Enumeration of policies for dealing with the period of a gameplay effect while stacking */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
		{ "NeverReset.Comment", "/** The progress toward the next tick of a periodic effect will never be reset, regardless of stack applications */" },
		{ "NeverReset.Name", "EGameplayEffectStackingPeriodPolicy::NeverReset" },
		{ "NeverReset.ToolTip", "The progress toward the next tick of a periodic effect will never be reset, regardless of stack applications" },
		{ "ResetOnSuccessfulApplication.Comment", "/** Any progress toward the next tick of a periodic effect is discarded upon any successful stack application */" },
		{ "ResetOnSuccessfulApplication.Name", "EGameplayEffectStackingPeriodPolicy::ResetOnSuccessfulApplication" },
		{ "ResetOnSuccessfulApplication.ToolTip", "Any progress toward the next tick of a periodic effect is discarded upon any successful stack application" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enumeration of policies for dealing with the period of a gameplay effect while stacking" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGameplayEffectStackingPeriodPolicy::ResetOnSuccessfulApplication", (int64)EGameplayEffectStackingPeriodPolicy::ResetOnSuccessfulApplication },
		{ "EGameplayEffectStackingPeriodPolicy::NeverReset", (int64)EGameplayEffectStackingPeriodPolicy::NeverReset },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GameplayAbilities_EGameplayEffectStackingPeriodPolicy_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_GameplayAbilities,
	nullptr,
	"EGameplayEffectStackingPeriodPolicy",
	"EGameplayEffectStackingPeriodPolicy",
	Z_Construct_UEnum_GameplayAbilities_EGameplayEffectStackingPeriodPolicy_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayAbilities_EGameplayEffectStackingPeriodPolicy_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayAbilities_EGameplayEffectStackingPeriodPolicy_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GameplayAbilities_EGameplayEffectStackingPeriodPolicy_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_GameplayAbilities_EGameplayEffectStackingPeriodPolicy()
{
	if (!Z_Registration_Info_UEnum_EGameplayEffectStackingPeriodPolicy.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGameplayEffectStackingPeriodPolicy.InnerSingleton, Z_Construct_UEnum_GameplayAbilities_EGameplayEffectStackingPeriodPolicy_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGameplayEffectStackingPeriodPolicy.InnerSingleton;
}
// End Enum EGameplayEffectStackingPeriodPolicy

// Begin Enum EGameplayEffectStackingExpirationPolicy
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGameplayEffectStackingExpirationPolicy;
static UEnum* EGameplayEffectStackingExpirationPolicy_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGameplayEffectStackingExpirationPolicy.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGameplayEffectStackingExpirationPolicy.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GameplayAbilities_EGameplayEffectStackingExpirationPolicy, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("EGameplayEffectStackingExpirationPolicy"));
	}
	return Z_Registration_Info_UEnum_EGameplayEffectStackingExpirationPolicy.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UEnum* StaticEnum<EGameplayEffectStackingExpirationPolicy>()
{
	return EGameplayEffectStackingExpirationPolicy_StaticEnum();
}
struct Z_Construct_UEnum_GameplayAbilities_EGameplayEffectStackingExpirationPolicy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ClearEntireStack.Comment", "/** The entire stack is cleared when the active gameplay effect expires  */" },
		{ "ClearEntireStack.Name", "EGameplayEffectStackingExpirationPolicy::ClearEntireStack" },
		{ "ClearEntireStack.ToolTip", "The entire stack is cleared when the active gameplay effect expires" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Enumeration of policies for dealing gameplay effect stacks that expire (in duration based effects). */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
		{ "RefreshDuration.Comment", "/** The duration of the gameplay effect is refreshed. This essentially makes the effect infinite in duration. This can be used to manually handle stack decrements via OnStackCountChange callback */" },
		{ "RefreshDuration.Name", "EGameplayEffectStackingExpirationPolicy::RefreshDuration" },
		{ "RefreshDuration.ToolTip", "The duration of the gameplay effect is refreshed. This essentially makes the effect infinite in duration. This can be used to manually handle stack decrements via OnStackCountChange callback" },
		{ "RemoveSingleStackAndRefreshDuration.Comment", "/** The current stack count will be decremented by 1 and the duration refreshed. The GE is not \"reapplied\", just continues to exist with one less stacks. */" },
		{ "RemoveSingleStackAndRefreshDuration.Name", "EGameplayEffectStackingExpirationPolicy::RemoveSingleStackAndRefreshDuration" },
		{ "RemoveSingleStackAndRefreshDuration.ToolTip", "The current stack count will be decremented by 1 and the duration refreshed. The GE is not \"reapplied\", just continues to exist with one less stacks." },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enumeration of policies for dealing gameplay effect stacks that expire (in duration based effects)." },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGameplayEffectStackingExpirationPolicy::ClearEntireStack", (int64)EGameplayEffectStackingExpirationPolicy::ClearEntireStack },
		{ "EGameplayEffectStackingExpirationPolicy::RemoveSingleStackAndRefreshDuration", (int64)EGameplayEffectStackingExpirationPolicy::RemoveSingleStackAndRefreshDuration },
		{ "EGameplayEffectStackingExpirationPolicy::RefreshDuration", (int64)EGameplayEffectStackingExpirationPolicy::RefreshDuration },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GameplayAbilities_EGameplayEffectStackingExpirationPolicy_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_GameplayAbilities,
	nullptr,
	"EGameplayEffectStackingExpirationPolicy",
	"EGameplayEffectStackingExpirationPolicy",
	Z_Construct_UEnum_GameplayAbilities_EGameplayEffectStackingExpirationPolicy_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayAbilities_EGameplayEffectStackingExpirationPolicy_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayAbilities_EGameplayEffectStackingExpirationPolicy_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GameplayAbilities_EGameplayEffectStackingExpirationPolicy_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_GameplayAbilities_EGameplayEffectStackingExpirationPolicy()
{
	if (!Z_Registration_Info_UEnum_EGameplayEffectStackingExpirationPolicy.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGameplayEffectStackingExpirationPolicy.InnerSingleton, Z_Construct_UEnum_GameplayAbilities_EGameplayEffectStackingExpirationPolicy_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGameplayEffectStackingExpirationPolicy.InnerSingleton;
}
// End Enum EGameplayEffectStackingExpirationPolicy

// Begin Enum EGameplayEffectPeriodInhibitionRemovedPolicy
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGameplayEffectPeriodInhibitionRemovedPolicy;
static UEnum* EGameplayEffectPeriodInhibitionRemovedPolicy_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGameplayEffectPeriodInhibitionRemovedPolicy.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGameplayEffectPeriodInhibitionRemovedPolicy.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GameplayAbilities_EGameplayEffectPeriodInhibitionRemovedPolicy, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("EGameplayEffectPeriodInhibitionRemovedPolicy"));
	}
	return Z_Registration_Info_UEnum_EGameplayEffectPeriodInhibitionRemovedPolicy.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UEnum* StaticEnum<EGameplayEffectPeriodInhibitionRemovedPolicy>()
{
	return EGameplayEffectPeriodInhibitionRemovedPolicy_StaticEnum();
}
struct Z_Construct_UEnum_GameplayAbilities_EGameplayEffectPeriodInhibitionRemovedPolicy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Enumeration of policies for dealing with the period of a gameplay effect when inhibition is removed */" },
#endif
		{ "ExecuteAndResetPeriod.Comment", "/** Executes immediately and resets the period. */" },
		{ "ExecuteAndResetPeriod.Name", "EGameplayEffectPeriodInhibitionRemovedPolicy::ExecuteAndResetPeriod" },
		{ "ExecuteAndResetPeriod.ToolTip", "Executes immediately and resets the period." },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
		{ "NeverReset.Comment", "/** Does not reset. The period timing will continue as if the inhibition hadn't occurred. */" },
		{ "NeverReset.Name", "EGameplayEffectPeriodInhibitionRemovedPolicy::NeverReset" },
		{ "NeverReset.ToolTip", "Does not reset. The period timing will continue as if the inhibition hadn't occurred." },
		{ "ResetPeriod.Comment", "/** Resets the period. The next execution will occur one full period from when inhibition is removed. */" },
		{ "ResetPeriod.Name", "EGameplayEffectPeriodInhibitionRemovedPolicy::ResetPeriod" },
		{ "ResetPeriod.ToolTip", "Resets the period. The next execution will occur one full period from when inhibition is removed." },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enumeration of policies for dealing with the period of a gameplay effect when inhibition is removed" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGameplayEffectPeriodInhibitionRemovedPolicy::NeverReset", (int64)EGameplayEffectPeriodInhibitionRemovedPolicy::NeverReset },
		{ "EGameplayEffectPeriodInhibitionRemovedPolicy::ResetPeriod", (int64)EGameplayEffectPeriodInhibitionRemovedPolicy::ResetPeriod },
		{ "EGameplayEffectPeriodInhibitionRemovedPolicy::ExecuteAndResetPeriod", (int64)EGameplayEffectPeriodInhibitionRemovedPolicy::ExecuteAndResetPeriod },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GameplayAbilities_EGameplayEffectPeriodInhibitionRemovedPolicy_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_GameplayAbilities,
	nullptr,
	"EGameplayEffectPeriodInhibitionRemovedPolicy",
	"EGameplayEffectPeriodInhibitionRemovedPolicy",
	Z_Construct_UEnum_GameplayAbilities_EGameplayEffectPeriodInhibitionRemovedPolicy_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayAbilities_EGameplayEffectPeriodInhibitionRemovedPolicy_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayAbilities_EGameplayEffectPeriodInhibitionRemovedPolicy_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GameplayAbilities_EGameplayEffectPeriodInhibitionRemovedPolicy_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_GameplayAbilities_EGameplayEffectPeriodInhibitionRemovedPolicy()
{
	if (!Z_Registration_Info_UEnum_EGameplayEffectPeriodInhibitionRemovedPolicy.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGameplayEffectPeriodInhibitionRemovedPolicy.InnerSingleton, Z_Construct_UEnum_GameplayAbilities_EGameplayEffectPeriodInhibitionRemovedPolicy_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGameplayEffectPeriodInhibitionRemovedPolicy.InnerSingleton;
}
// End Enum EGameplayEffectPeriodInhibitionRemovedPolicy

// Begin ScriptStruct FModifierSpec
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ModifierSpec;
class UScriptStruct* FModifierSpec::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ModifierSpec.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ModifierSpec.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FModifierSpec, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("ModifierSpec"));
	}
	return Z_Registration_Info_UScriptStruct_ModifierSpec.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FModifierSpec>()
{
	return FModifierSpec::StaticStruct();
}
struct Z_Construct_UScriptStruct_FModifierSpec_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Holds evaluated magnitude from a GameplayEffect modifier */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Holds evaluated magnitude from a GameplayEffect modifier" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EvaluatedMagnitude_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** In the event that the modifier spec requires custom magnitude calculations, this is the authoritative, last evaluated value of the magnitude */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "In the event that the modifier spec requires custom magnitude calculations, this is the authoritative, last evaluated value of the magnitude" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EvaluatedMagnitude;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FModifierSpec>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModifierSpec_Statics::NewProp_EvaluatedMagnitude = { "EvaluatedMagnitude", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModifierSpec, EvaluatedMagnitude), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EvaluatedMagnitude_MetaData), NewProp_EvaluatedMagnitude_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FModifierSpec_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModifierSpec_Statics::NewProp_EvaluatedMagnitude,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModifierSpec_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FModifierSpec_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
	nullptr,
	&NewStructOps,
	"ModifierSpec",
	Z_Construct_UScriptStruct_FModifierSpec_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModifierSpec_Statics::PropPointers),
	sizeof(FModifierSpec),
	alignof(FModifierSpec),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModifierSpec_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FModifierSpec_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FModifierSpec()
{
	if (!Z_Registration_Info_UScriptStruct_ModifierSpec.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ModifierSpec.InnerSingleton, Z_Construct_UScriptStruct_FModifierSpec_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ModifierSpec.InnerSingleton;
}
// End ScriptStruct FModifierSpec

// Begin ScriptStruct FGameplayEffectModifiedAttribute
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayEffectModifiedAttribute;
class UScriptStruct* FGameplayEffectModifiedAttribute::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayEffectModifiedAttribute.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayEffectModifiedAttribute.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayEffectModifiedAttribute, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("GameplayEffectModifiedAttribute"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayEffectModifiedAttribute.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FGameplayEffectModifiedAttribute>()
{
	return FGameplayEffectModifiedAttribute::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGameplayEffectModifiedAttribute_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Saves list of modified attributes, to use for gameplay cues or later processing */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Saves list of modified attributes, to use for gameplay cues or later processing" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Attribute_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The attribute that has been modified */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The attribute that has been modified" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TotalMagnitude_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Total magnitude applied to that attribute */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Total magnitude applied to that attribute" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Attribute;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TotalMagnitude;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayEffectModifiedAttribute>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayEffectModifiedAttribute_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayEffectModifiedAttribute, Attribute), Z_Construct_UScriptStruct_FGameplayAttribute, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Attribute_MetaData), NewProp_Attribute_MetaData) }; // 884374022
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGameplayEffectModifiedAttribute_Statics::NewProp_TotalMagnitude = { "TotalMagnitude", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayEffectModifiedAttribute, TotalMagnitude), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TotalMagnitude_MetaData), NewProp_TotalMagnitude_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayEffectModifiedAttribute_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectModifiedAttribute_Statics::NewProp_Attribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectModifiedAttribute_Statics::NewProp_TotalMagnitude,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectModifiedAttribute_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayEffectModifiedAttribute_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
	nullptr,
	&NewStructOps,
	"GameplayEffectModifiedAttribute",
	Z_Construct_UScriptStruct_FGameplayEffectModifiedAttribute_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectModifiedAttribute_Statics::PropPointers),
	sizeof(FGameplayEffectModifiedAttribute),
	alignof(FGameplayEffectModifiedAttribute),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectModifiedAttribute_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGameplayEffectModifiedAttribute_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectModifiedAttribute()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayEffectModifiedAttribute.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayEffectModifiedAttribute.InnerSingleton, Z_Construct_UScriptStruct_FGameplayEffectModifiedAttribute_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GameplayEffectModifiedAttribute.InnerSingleton;
}
// End ScriptStruct FGameplayEffectModifiedAttribute

// Begin ScriptStruct FGameplayEffectAttributeCaptureSpec
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayEffectAttributeCaptureSpec;
class UScriptStruct* FGameplayEffectAttributeCaptureSpec::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayEffectAttributeCaptureSpec.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayEffectAttributeCaptureSpec.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureSpec, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("GameplayEffectAttributeCaptureSpec"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayEffectAttributeCaptureSpec.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FGameplayEffectAttributeCaptureSpec>()
{
	return FGameplayEffectAttributeCaptureSpec::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureSpec_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Struct used to hold the result of a gameplay attribute capture; Initially seeded by definition data, but then populated by ability system component when appropriate */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Struct used to hold the result of a gameplay attribute capture; Initially seeded by definition data, but then populated by ability system component when appropriate" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackingDefinition_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Copy of the definition the spec should adhere to for capturing */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Copy of the definition the spec should adhere to for capturing" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_BackingDefinition;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayEffectAttributeCaptureSpec>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureSpec_Statics::NewProp_BackingDefinition = { "BackingDefinition", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayEffectAttributeCaptureSpec, BackingDefinition), Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureDefinition, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackingDefinition_MetaData), NewProp_BackingDefinition_MetaData) }; // 1688717124
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureSpec_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureSpec_Statics::NewProp_BackingDefinition,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureSpec_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureSpec_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
	nullptr,
	&NewStructOps,
	"GameplayEffectAttributeCaptureSpec",
	Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureSpec_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureSpec_Statics::PropPointers),
	sizeof(FGameplayEffectAttributeCaptureSpec),
	alignof(FGameplayEffectAttributeCaptureSpec),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureSpec_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureSpec_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureSpec()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayEffectAttributeCaptureSpec.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayEffectAttributeCaptureSpec.InnerSingleton, Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureSpec_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GameplayEffectAttributeCaptureSpec.InnerSingleton;
}
// End ScriptStruct FGameplayEffectAttributeCaptureSpec

// Begin ScriptStruct FGameplayEffectAttributeCaptureSpecContainer
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayEffectAttributeCaptureSpecContainer;
class UScriptStruct* FGameplayEffectAttributeCaptureSpecContainer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayEffectAttributeCaptureSpecContainer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayEffectAttributeCaptureSpecContainer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureSpecContainer, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("GameplayEffectAttributeCaptureSpecContainer"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayEffectAttributeCaptureSpecContainer.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FGameplayEffectAttributeCaptureSpecContainer>()
{
	return FGameplayEffectAttributeCaptureSpecContainer::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureSpecContainer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Struct used to handle a collection of captured source and target attributes */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Struct used to handle a collection of captured source and target attributes" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceAttributes_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Captured attributes from the source of a gameplay effect */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Captured attributes from the source of a gameplay effect" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetAttributes_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Captured attributes from the target of a gameplay effect */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Captured attributes from the target of a gameplay effect" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasNonSnapshottedAttributes_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If true, has at least one capture spec that did not request a snapshot */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, has at least one capture spec that did not request a snapshot" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SourceAttributes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SourceAttributes;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetAttributes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TargetAttributes;
	static void NewProp_bHasNonSnapshottedAttributes_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasNonSnapshottedAttributes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayEffectAttributeCaptureSpecContainer>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureSpecContainer_Statics::NewProp_SourceAttributes_Inner = { "SourceAttributes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureSpec, METADATA_PARAMS(0, nullptr) }; // 801865939
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureSpecContainer_Statics::NewProp_SourceAttributes = { "SourceAttributes", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayEffectAttributeCaptureSpecContainer, SourceAttributes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceAttributes_MetaData), NewProp_SourceAttributes_MetaData) }; // 801865939
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureSpecContainer_Statics::NewProp_TargetAttributes_Inner = { "TargetAttributes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureSpec, METADATA_PARAMS(0, nullptr) }; // 801865939
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureSpecContainer_Statics::NewProp_TargetAttributes = { "TargetAttributes", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayEffectAttributeCaptureSpecContainer, TargetAttributes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetAttributes_MetaData), NewProp_TargetAttributes_MetaData) }; // 801865939
void Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureSpecContainer_Statics::NewProp_bHasNonSnapshottedAttributes_SetBit(void* Obj)
{
	((FGameplayEffectAttributeCaptureSpecContainer*)Obj)->bHasNonSnapshottedAttributes = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureSpecContainer_Statics::NewProp_bHasNonSnapshottedAttributes = { "bHasNonSnapshottedAttributes", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGameplayEffectAttributeCaptureSpecContainer), &Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureSpecContainer_Statics::NewProp_bHasNonSnapshottedAttributes_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasNonSnapshottedAttributes_MetaData), NewProp_bHasNonSnapshottedAttributes_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureSpecContainer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureSpecContainer_Statics::NewProp_SourceAttributes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureSpecContainer_Statics::NewProp_SourceAttributes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureSpecContainer_Statics::NewProp_TargetAttributes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureSpecContainer_Statics::NewProp_TargetAttributes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureSpecContainer_Statics::NewProp_bHasNonSnapshottedAttributes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureSpecContainer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureSpecContainer_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
	nullptr,
	&NewStructOps,
	"GameplayEffectAttributeCaptureSpecContainer",
	Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureSpecContainer_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureSpecContainer_Statics::PropPointers),
	sizeof(FGameplayEffectAttributeCaptureSpecContainer),
	alignof(FGameplayEffectAttributeCaptureSpecContainer),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureSpecContainer_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureSpecContainer_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureSpecContainer()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayEffectAttributeCaptureSpecContainer.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayEffectAttributeCaptureSpecContainer.InnerSingleton, Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureSpecContainer_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GameplayEffectAttributeCaptureSpecContainer.InnerSingleton;
}
// End ScriptStruct FGameplayEffectAttributeCaptureSpecContainer

// Begin ScriptStruct FGameplayEffectSpec
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayEffectSpec;
class UScriptStruct* FGameplayEffectSpec::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayEffectSpec.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayEffectSpec.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayEffectSpec, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("GameplayEffectSpec"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayEffectSpec.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FGameplayEffectSpec>()
{
	return FGameplayEffectSpec::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGameplayEffectSpec_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * GameplayEffect Specification. Tells us:\n *\x09-What UGameplayEffect (const data)\n *\x09-What Level\n *  -Who instigated\n *  \n * FGameplayEffectSpec is modifiable. We start with initial conditions and modifications be applied to it. In this sense, it is stateful/mutable but it\n * is still distinct from an FActiveGameplayEffect which in an applied instance of an FGameplayEffectSpec.\n */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "GameplayEffect Specification. Tells us:\n    -What UGameplayEffect (const data)\n    -What Level\n -Who instigated\n\nFGameplayEffectSpec is modifiable. We start with initial conditions and modifications be applied to it. In this sense, it is stateful/mutable but it\nis still distinct from an FActiveGameplayEffect which in an applied instance of an FGameplayEffectSpec." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Def_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** GameplayEfect definition. The static data that this spec points to. */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
		{ "NativeConstTemplateArg", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "GameplayEfect definition. The static data that this spec points to." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModifiedAttributes_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** A list of attributes that were modified during the application of this spec */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A list of attributes that were modified during the application of this spec" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CapturedRelevantAttributes_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Attributes captured by the spec that are relevant to custom calculations, potentially in owned modifiers, etc.; NOT replicated to clients */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Attributes captured by the spec that are relevant to custom calculations, potentially in owned modifiers, etc.; NOT replicated to clients" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * The duration in seconds of this effect\n\x09 * instantaneous effects should have a duration of FGameplayEffectConstants::INSTANT_APPLICATION\n\x09 * effects that last forever should have a duration of FGameplayEffectConstants::INFINITE_DURATION\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The duration in seconds of this effect\ninstantaneous effects should have a duration of FGameplayEffectConstants::INSTANT_APPLICATION\neffects that last forever should have a duration of FGameplayEffectConstants::INFINITE_DURATION" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Period_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The period in seconds of this effect, nonperiodic effects should have a period of FGameplayEffectConstants::NO_PERIOD */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The period in seconds of this effect, nonperiodic effects should have a period of FGameplayEffectConstants::NO_PERIOD" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChanceToApplyToTarget_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CapturedSourceTags_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Captured Source Tags on GameplayEffectSpec creation */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Captured Source Tags on GameplayEffectSpec creation" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CapturedTargetTags_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Tags from the target, captured during execute */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tags from the target, captured during execute" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DynamicGrantedTags_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Tags that are granted and that did not come from the UGameplayEffect def. These are replicated. */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tags that are granted and that did not come from the UGameplayEffect def. These are replicated." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DynamicAssetTags_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Modifiers_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The calculated modifiers for this effect */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The calculated modifiers for this effect" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StackCount_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCompletedSourceAttributeCapture_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether the spec has had its source attribute capture completed or not yet */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether the spec has had its source attribute capture completed or not yet" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCompletedTargetAttributeCapture_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether the spec has had its target attribute capture completed or not yet */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether the spec has had its target attribute capture completed or not yet" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDurationLocked_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether the duration of the spec is locked or not; If it is, attempts to set it will fail */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether the duration of the spec is locked or not; If it is, attempts to set it will fail" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrantedAbilitySpecs_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EffectContext_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** This tells us how we got here (who / what applied us) */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This tells us how we got here (who / what applied us)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The level this effect was applied at */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The level this effect was applied at" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Def;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ModifiedAttributes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ModifiedAttributes;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CapturedRelevantAttributes;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Period;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ChanceToApplyToTarget;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CapturedSourceTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CapturedTargetTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DynamicGrantedTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DynamicAssetTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Modifiers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Modifiers;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StackCount;
	static void NewProp_bCompletedSourceAttributeCapture_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCompletedSourceAttributeCapture;
	static void NewProp_bCompletedTargetAttributeCapture_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCompletedTargetAttributeCapture;
	static void NewProp_bDurationLocked_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDurationLocked;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GrantedAbilitySpecs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GrantedAbilitySpecs;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EffectContext;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Level;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayEffectSpec>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGameplayEffectSpec_Statics::NewProp_Def = { "Def", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayEffectSpec, Def), Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Def_MetaData), NewProp_Def_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayEffectSpec_Statics::NewProp_ModifiedAttributes_Inner = { "ModifiedAttributes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayEffectModifiedAttribute, METADATA_PARAMS(0, nullptr) }; // 2965729191
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGameplayEffectSpec_Statics::NewProp_ModifiedAttributes = { "ModifiedAttributes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayEffectSpec, ModifiedAttributes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModifiedAttributes_MetaData), NewProp_ModifiedAttributes_MetaData) }; // 2965729191
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayEffectSpec_Statics::NewProp_CapturedRelevantAttributes = { "CapturedRelevantAttributes", nullptr, (EPropertyFlags)0x0010000080000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayEffectSpec, CapturedRelevantAttributes), Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureSpecContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CapturedRelevantAttributes_MetaData), NewProp_CapturedRelevantAttributes_MetaData) }; // 1187267187
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGameplayEffectSpec_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayEffectSpec, Duration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Duration_MetaData), NewProp_Duration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGameplayEffectSpec_Statics::NewProp_Period = { "Period", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayEffectSpec, Period), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Period_MetaData), NewProp_Period_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGameplayEffectSpec_Statics::NewProp_ChanceToApplyToTarget = { "ChanceToApplyToTarget", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayEffectSpec, ChanceToApplyToTarget), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChanceToApplyToTarget_MetaData), NewProp_ChanceToApplyToTarget_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayEffectSpec_Statics::NewProp_CapturedSourceTags = { "CapturedSourceTags", nullptr, (EPropertyFlags)0x0010000080000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayEffectSpec, CapturedSourceTags), Z_Construct_UScriptStruct_FTagContainerAggregator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CapturedSourceTags_MetaData), NewProp_CapturedSourceTags_MetaData) }; // 1319271482
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayEffectSpec_Statics::NewProp_CapturedTargetTags = { "CapturedTargetTags", nullptr, (EPropertyFlags)0x0010000080000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayEffectSpec, CapturedTargetTags), Z_Construct_UScriptStruct_FTagContainerAggregator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CapturedTargetTags_MetaData), NewProp_CapturedTargetTags_MetaData) }; // 1319271482
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayEffectSpec_Statics::NewProp_DynamicGrantedTags = { "DynamicGrantedTags", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayEffectSpec, DynamicGrantedTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DynamicGrantedTags_MetaData), NewProp_DynamicGrantedTags_MetaData) }; // 3352185621
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayEffectSpec_Statics::NewProp_DynamicAssetTags = { "DynamicAssetTags", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayEffectSpec, DynamicAssetTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DynamicAssetTags_MetaData), NewProp_DynamicAssetTags_MetaData) }; // 3352185621
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayEffectSpec_Statics::NewProp_Modifiers_Inner = { "Modifiers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FModifierSpec, METADATA_PARAMS(0, nullptr) }; // 2184666049
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGameplayEffectSpec_Statics::NewProp_Modifiers = { "Modifiers", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayEffectSpec, Modifiers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Modifiers_MetaData), NewProp_Modifiers_MetaData) }; // 2184666049
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameplayEffectSpec_Statics::NewProp_StackCount = { "StackCount", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayEffectSpec, StackCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StackCount_MetaData), NewProp_StackCount_MetaData) };
void Z_Construct_UScriptStruct_FGameplayEffectSpec_Statics::NewProp_bCompletedSourceAttributeCapture_SetBit(void* Obj)
{
	((FGameplayEffectSpec*)Obj)->bCompletedSourceAttributeCapture = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameplayEffectSpec_Statics::NewProp_bCompletedSourceAttributeCapture = { "bCompletedSourceAttributeCapture", nullptr, (EPropertyFlags)0x0010000080000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FGameplayEffectSpec), &Z_Construct_UScriptStruct_FGameplayEffectSpec_Statics::NewProp_bCompletedSourceAttributeCapture_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCompletedSourceAttributeCapture_MetaData), NewProp_bCompletedSourceAttributeCapture_MetaData) };
void Z_Construct_UScriptStruct_FGameplayEffectSpec_Statics::NewProp_bCompletedTargetAttributeCapture_SetBit(void* Obj)
{
	((FGameplayEffectSpec*)Obj)->bCompletedTargetAttributeCapture = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameplayEffectSpec_Statics::NewProp_bCompletedTargetAttributeCapture = { "bCompletedTargetAttributeCapture", nullptr, (EPropertyFlags)0x0010000080000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FGameplayEffectSpec), &Z_Construct_UScriptStruct_FGameplayEffectSpec_Statics::NewProp_bCompletedTargetAttributeCapture_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCompletedTargetAttributeCapture_MetaData), NewProp_bCompletedTargetAttributeCapture_MetaData) };
void Z_Construct_UScriptStruct_FGameplayEffectSpec_Statics::NewProp_bDurationLocked_SetBit(void* Obj)
{
	((FGameplayEffectSpec*)Obj)->bDurationLocked = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameplayEffectSpec_Statics::NewProp_bDurationLocked = { "bDurationLocked", nullptr, (EPropertyFlags)0x0010000080000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FGameplayEffectSpec), &Z_Construct_UScriptStruct_FGameplayEffectSpec_Statics::NewProp_bDurationLocked_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDurationLocked_MetaData), NewProp_bDurationLocked_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayEffectSpec_Statics::NewProp_GrantedAbilitySpecs_Inner = { "GrantedAbilitySpecs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayAbilitySpecDef, METADATA_PARAMS(0, nullptr) }; // 140173524
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGameplayEffectSpec_Statics::NewProp_GrantedAbilitySpecs = { "GrantedAbilitySpecs", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayEffectSpec, GrantedAbilitySpecs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrantedAbilitySpecs_MetaData), NewProp_GrantedAbilitySpecs_MetaData) }; // 140173524
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayEffectSpec_Statics::NewProp_EffectContext = { "EffectContext", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayEffectSpec, EffectContext), Z_Construct_UScriptStruct_FGameplayEffectContextHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EffectContext_MetaData), NewProp_EffectContext_MetaData) }; // 3292467274
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGameplayEffectSpec_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayEffectSpec, Level), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Level_MetaData), NewProp_Level_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayEffectSpec_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectSpec_Statics::NewProp_Def,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectSpec_Statics::NewProp_ModifiedAttributes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectSpec_Statics::NewProp_ModifiedAttributes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectSpec_Statics::NewProp_CapturedRelevantAttributes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectSpec_Statics::NewProp_Duration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectSpec_Statics::NewProp_Period,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectSpec_Statics::NewProp_ChanceToApplyToTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectSpec_Statics::NewProp_CapturedSourceTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectSpec_Statics::NewProp_CapturedTargetTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectSpec_Statics::NewProp_DynamicGrantedTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectSpec_Statics::NewProp_DynamicAssetTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectSpec_Statics::NewProp_Modifiers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectSpec_Statics::NewProp_Modifiers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectSpec_Statics::NewProp_StackCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectSpec_Statics::NewProp_bCompletedSourceAttributeCapture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectSpec_Statics::NewProp_bCompletedTargetAttributeCapture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectSpec_Statics::NewProp_bDurationLocked,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectSpec_Statics::NewProp_GrantedAbilitySpecs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectSpec_Statics::NewProp_GrantedAbilitySpecs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectSpec_Statics::NewProp_EffectContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectSpec_Statics::NewProp_Level,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectSpec_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayEffectSpec_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
	nullptr,
	&NewStructOps,
	"GameplayEffectSpec",
	Z_Construct_UScriptStruct_FGameplayEffectSpec_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectSpec_Statics::PropPointers),
	sizeof(FGameplayEffectSpec),
	alignof(FGameplayEffectSpec),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectSpec_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGameplayEffectSpec_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectSpec()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayEffectSpec.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayEffectSpec.InnerSingleton, Z_Construct_UScriptStruct_FGameplayEffectSpec_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GameplayEffectSpec.InnerSingleton;
}
// End ScriptStruct FGameplayEffectSpec

// Begin ScriptStruct FGameplayEffectSpecForRPC
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayEffectSpecForRPC;
class UScriptStruct* FGameplayEffectSpecForRPC::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayEffectSpecForRPC.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayEffectSpecForRPC.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayEffectSpecForRPC, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("GameplayEffectSpecForRPC"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayEffectSpecForRPC.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FGameplayEffectSpecForRPC>()
{
	return FGameplayEffectSpecForRPC::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGameplayEffectSpecForRPC_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** This is a cut down version of the gameplay effect spec used for RPCs. */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is a cut down version of the gameplay effect spec used for RPCs." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Def_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** GameplayEfect definition. The static data that this spec points to. */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
		{ "NativeConstTemplateArg", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "GameplayEfect definition. The static data that this spec points to." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModifiedAttributes_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EffectContext_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AggregatedSourceTags_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AggregatedTargetTags_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityLevel_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Def;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ModifiedAttributes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ModifiedAttributes;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EffectContext;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AggregatedSourceTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AggregatedTargetTags;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Level;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AbilityLevel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayEffectSpecForRPC>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGameplayEffectSpecForRPC_Statics::NewProp_Def = { "Def", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayEffectSpecForRPC, Def), Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Def_MetaData), NewProp_Def_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayEffectSpecForRPC_Statics::NewProp_ModifiedAttributes_Inner = { "ModifiedAttributes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayEffectModifiedAttribute, METADATA_PARAMS(0, nullptr) }; // 2965729191
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGameplayEffectSpecForRPC_Statics::NewProp_ModifiedAttributes = { "ModifiedAttributes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayEffectSpecForRPC, ModifiedAttributes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModifiedAttributes_MetaData), NewProp_ModifiedAttributes_MetaData) }; // 2965729191
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayEffectSpecForRPC_Statics::NewProp_EffectContext = { "EffectContext", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayEffectSpecForRPC, EffectContext), Z_Construct_UScriptStruct_FGameplayEffectContextHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EffectContext_MetaData), NewProp_EffectContext_MetaData) }; // 3292467274
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayEffectSpecForRPC_Statics::NewProp_AggregatedSourceTags = { "AggregatedSourceTags", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayEffectSpecForRPC, AggregatedSourceTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AggregatedSourceTags_MetaData), NewProp_AggregatedSourceTags_MetaData) }; // 3352185621
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayEffectSpecForRPC_Statics::NewProp_AggregatedTargetTags = { "AggregatedTargetTags", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayEffectSpecForRPC, AggregatedTargetTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AggregatedTargetTags_MetaData), NewProp_AggregatedTargetTags_MetaData) }; // 3352185621
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGameplayEffectSpecForRPC_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayEffectSpecForRPC, Level), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Level_MetaData), NewProp_Level_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGameplayEffectSpecForRPC_Statics::NewProp_AbilityLevel = { "AbilityLevel", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayEffectSpecForRPC, AbilityLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityLevel_MetaData), NewProp_AbilityLevel_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayEffectSpecForRPC_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectSpecForRPC_Statics::NewProp_Def,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectSpecForRPC_Statics::NewProp_ModifiedAttributes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectSpecForRPC_Statics::NewProp_ModifiedAttributes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectSpecForRPC_Statics::NewProp_EffectContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectSpecForRPC_Statics::NewProp_AggregatedSourceTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectSpecForRPC_Statics::NewProp_AggregatedTargetTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectSpecForRPC_Statics::NewProp_Level,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectSpecForRPC_Statics::NewProp_AbilityLevel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectSpecForRPC_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayEffectSpecForRPC_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
	nullptr,
	&NewStructOps,
	"GameplayEffectSpecForRPC",
	Z_Construct_UScriptStruct_FGameplayEffectSpecForRPC_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectSpecForRPC_Statics::PropPointers),
	sizeof(FGameplayEffectSpecForRPC),
	alignof(FGameplayEffectSpecForRPC),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectSpecForRPC_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGameplayEffectSpecForRPC_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectSpecForRPC()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayEffectSpecForRPC.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayEffectSpecForRPC.InnerSingleton, Z_Construct_UScriptStruct_FGameplayEffectSpecForRPC_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GameplayEffectSpecForRPC.InnerSingleton;
}
// End ScriptStruct FGameplayEffectSpecForRPC

// Begin ScriptStruct FActiveGameplayEffect
static_assert(std::is_polymorphic<FActiveGameplayEffect>() == std::is_polymorphic<FFastArraySerializerItem>(), "USTRUCT FActiveGameplayEffect cannot be polymorphic unless super FFastArraySerializerItem is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ActiveGameplayEffect;
class UScriptStruct* FActiveGameplayEffect::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ActiveGameplayEffect.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ActiveGameplayEffect.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FActiveGameplayEffect, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("ActiveGameplayEffect"));
	}
	return Z_Registration_Info_UScriptStruct_ActiveGameplayEffect.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FActiveGameplayEffect>()
{
	return FActiveGameplayEffect::StaticStruct();
}
struct Z_Construct_UScriptStruct_FActiveGameplayEffect_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Active GameplayEffect instance\n *\x09-What GameplayEffect Spec\n *\x09-Start time\n *  -When to execute next\n *  -Replication callbacks\n */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Active GameplayEffect instance\n    -What GameplayEffect Spec\n    -Start time\n -When to execute next\n -Replication callbacks" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Spec_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PredictionKey_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrantedAbilityHandles_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Handles of Gameplay Abilities that were granted to the target by this Active Gameplay Effect */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Handles of Gameplay Abilities that were granted to the target by this Active Gameplay Effect" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartServerWorldTime_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Server time this started */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Server time this started" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedStartServerWorldTime_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Used for handling duration modifications being replicated */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Used for handling duration modifications being replicated" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartWorldTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsInhibited_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Not sure if this should replicate or not. If replicated, we may have trouble where IsInhibited doesn't appear to change when we do tag checks (because it was previously inhibited, but replication made it inhibited).\n" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Not sure if this should replicate or not. If replicated, we may have trouble where IsInhibited doesn't appear to change when we do tag checks (because it was previously inhibited, but replication made it inhibited)." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Spec;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PredictionKey;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GrantedAbilityHandles_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GrantedAbilityHandles;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StartServerWorldTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CachedStartServerWorldTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StartWorldTime;
	static void NewProp_bIsInhibited_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsInhibited;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FActiveGameplayEffect>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FActiveGameplayEffect_Statics::NewProp_Spec = { "Spec", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FActiveGameplayEffect, Spec), Z_Construct_UScriptStruct_FGameplayEffectSpec, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Spec_MetaData), NewProp_Spec_MetaData) }; // 272371351
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FActiveGameplayEffect_Statics::NewProp_PredictionKey = { "PredictionKey", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FActiveGameplayEffect, PredictionKey), Z_Construct_UScriptStruct_FPredictionKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PredictionKey_MetaData), NewProp_PredictionKey_MetaData) }; // 3974026274
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FActiveGameplayEffect_Statics::NewProp_GrantedAbilityHandles_Inner = { "GrantedAbilityHandles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle, METADATA_PARAMS(0, nullptr) }; // 1889603138
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FActiveGameplayEffect_Statics::NewProp_GrantedAbilityHandles = { "GrantedAbilityHandles", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FActiveGameplayEffect, GrantedAbilityHandles), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrantedAbilityHandles_MetaData), NewProp_GrantedAbilityHandles_MetaData) }; // 1889603138
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FActiveGameplayEffect_Statics::NewProp_StartServerWorldTime = { "StartServerWorldTime", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FActiveGameplayEffect, StartServerWorldTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartServerWorldTime_MetaData), NewProp_StartServerWorldTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FActiveGameplayEffect_Statics::NewProp_CachedStartServerWorldTime = { "CachedStartServerWorldTime", nullptr, (EPropertyFlags)0x0010000080000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FActiveGameplayEffect, CachedStartServerWorldTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedStartServerWorldTime_MetaData), NewProp_CachedStartServerWorldTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FActiveGameplayEffect_Statics::NewProp_StartWorldTime = { "StartWorldTime", nullptr, (EPropertyFlags)0x0010000080000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FActiveGameplayEffect, StartWorldTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartWorldTime_MetaData), NewProp_StartWorldTime_MetaData) };
void Z_Construct_UScriptStruct_FActiveGameplayEffect_Statics::NewProp_bIsInhibited_SetBit(void* Obj)
{
	((FActiveGameplayEffect*)Obj)->bIsInhibited = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FActiveGameplayEffect_Statics::NewProp_bIsInhibited = { "bIsInhibited", nullptr, (EPropertyFlags)0x0010000080000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FActiveGameplayEffect), &Z_Construct_UScriptStruct_FActiveGameplayEffect_Statics::NewProp_bIsInhibited_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsInhibited_MetaData), NewProp_bIsInhibited_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FActiveGameplayEffect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActiveGameplayEffect_Statics::NewProp_Spec,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActiveGameplayEffect_Statics::NewProp_PredictionKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActiveGameplayEffect_Statics::NewProp_GrantedAbilityHandles_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActiveGameplayEffect_Statics::NewProp_GrantedAbilityHandles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActiveGameplayEffect_Statics::NewProp_StartServerWorldTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActiveGameplayEffect_Statics::NewProp_CachedStartServerWorldTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActiveGameplayEffect_Statics::NewProp_StartWorldTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActiveGameplayEffect_Statics::NewProp_bIsInhibited,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActiveGameplayEffect_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FActiveGameplayEffect_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
	Z_Construct_UScriptStruct_FFastArraySerializerItem,
	&NewStructOps,
	"ActiveGameplayEffect",
	Z_Construct_UScriptStruct_FActiveGameplayEffect_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActiveGameplayEffect_Statics::PropPointers),
	sizeof(FActiveGameplayEffect),
	alignof(FActiveGameplayEffect),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActiveGameplayEffect_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FActiveGameplayEffect_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FActiveGameplayEffect()
{
	if (!Z_Registration_Info_UScriptStruct_ActiveGameplayEffect.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ActiveGameplayEffect.InnerSingleton, Z_Construct_UScriptStruct_FActiveGameplayEffect_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ActiveGameplayEffect.InnerSingleton;
}
// End ScriptStruct FActiveGameplayEffect

// Begin Delegate FActiveGameplayEffectQueryCustomMatch_Dynamic
struct Z_Construct_UDelegateFunction_GameplayAbilities_ActiveGameplayEffectQueryCustomMatch_Dynamic__DelegateSignature_Statics
{
	struct _Script_GameplayAbilities_eventActiveGameplayEffectQueryCustomMatch_Dynamic_Parms
	{
		FActiveGameplayEffect Effect;
		bool bMatches;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Effect;
	static void NewProp_bMatches_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMatches;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_GameplayAbilities_ActiveGameplayEffectQueryCustomMatch_Dynamic__DelegateSignature_Statics::NewProp_Effect = { "Effect", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_GameplayAbilities_eventActiveGameplayEffectQueryCustomMatch_Dynamic_Parms, Effect), Z_Construct_UScriptStruct_FActiveGameplayEffect, METADATA_PARAMS(0, nullptr) }; // 986250908
void Z_Construct_UDelegateFunction_GameplayAbilities_ActiveGameplayEffectQueryCustomMatch_Dynamic__DelegateSignature_Statics::NewProp_bMatches_SetBit(void* Obj)
{
	((_Script_GameplayAbilities_eventActiveGameplayEffectQueryCustomMatch_Dynamic_Parms*)Obj)->bMatches = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_GameplayAbilities_ActiveGameplayEffectQueryCustomMatch_Dynamic__DelegateSignature_Statics::NewProp_bMatches = { "bMatches", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_GameplayAbilities_eventActiveGameplayEffectQueryCustomMatch_Dynamic_Parms), &Z_Construct_UDelegateFunction_GameplayAbilities_ActiveGameplayEffectQueryCustomMatch_Dynamic__DelegateSignature_Statics::NewProp_bMatches_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GameplayAbilities_ActiveGameplayEffectQueryCustomMatch_Dynamic__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GameplayAbilities_ActiveGameplayEffectQueryCustomMatch_Dynamic__DelegateSignature_Statics::NewProp_Effect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GameplayAbilities_ActiveGameplayEffectQueryCustomMatch_Dynamic__DelegateSignature_Statics::NewProp_bMatches,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameplayAbilities_ActiveGameplayEffectQueryCustomMatch_Dynamic__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GameplayAbilities_ActiveGameplayEffectQueryCustomMatch_Dynamic__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GameplayAbilities, nullptr, "ActiveGameplayEffectQueryCustomMatch_Dynamic__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_GameplayAbilities_ActiveGameplayEffectQueryCustomMatch_Dynamic__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameplayAbilities_ActiveGameplayEffectQueryCustomMatch_Dynamic__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_GameplayAbilities_ActiveGameplayEffectQueryCustomMatch_Dynamic__DelegateSignature_Statics::_Script_GameplayAbilities_eventActiveGameplayEffectQueryCustomMatch_Dynamic_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameplayAbilities_ActiveGameplayEffectQueryCustomMatch_Dynamic__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_GameplayAbilities_ActiveGameplayEffectQueryCustomMatch_Dynamic__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_GameplayAbilities_ActiveGameplayEffectQueryCustomMatch_Dynamic__DelegateSignature_Statics::_Script_GameplayAbilities_eventActiveGameplayEffectQueryCustomMatch_Dynamic_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_GameplayAbilities_ActiveGameplayEffectQueryCustomMatch_Dynamic__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_GameplayAbilities_ActiveGameplayEffectQueryCustomMatch_Dynamic__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FActiveGameplayEffectQueryCustomMatch_Dynamic_DelegateWrapper(const FScriptDelegate& ActiveGameplayEffectQueryCustomMatch_Dynamic, FActiveGameplayEffect Effect, bool& bMatches)
{
	struct _Script_GameplayAbilities_eventActiveGameplayEffectQueryCustomMatch_Dynamic_Parms
	{
		FActiveGameplayEffect Effect;
		bool bMatches;
	};
	_Script_GameplayAbilities_eventActiveGameplayEffectQueryCustomMatch_Dynamic_Parms Parms;
	Parms.Effect=Effect;
	Parms.bMatches=bMatches ? true : false;
	ActiveGameplayEffectQueryCustomMatch_Dynamic.ProcessDelegate<UObject>(&Parms);
	bMatches=Parms.bMatches;
}
// End Delegate FActiveGameplayEffectQueryCustomMatch_Dynamic

// Begin ScriptStruct FGameplayEffectQuery
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayEffectQuery;
class UScriptStruct* FGameplayEffectQuery::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayEffectQuery.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayEffectQuery.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayEffectQuery, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("GameplayEffectQuery"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayEffectQuery.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FGameplayEffectQuery>()
{
	return FGameplayEffectQuery::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGameplayEffectQuery_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Every set condition within this query must match in order for the query to match. i.e. individual query elements are ANDed together. */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Every set condition within this query must match in order for the query to match. i.e. individual query elements are ANDed together." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomMatchDelegate_BP_MetaData[] = {
		{ "Category", "Query" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** BP-exposed delegate for providing custom matching conditions. */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "BP-exposed delegate for providing custom matching conditions." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwningTagQuery_MetaData[] = {
		{ "Category", "Query" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Query that is matched against tags this GE gives */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Query that is matched against tags this GE gives" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EffectTagQuery_MetaData[] = {
		{ "Category", "Query" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Query that is matched against tags this GE has */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Query that is matched against tags this GE has" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceTagQuery_MetaData[] = {
		{ "Category", "Query" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Query that is matched against spec tags the source of this GE has */" },
#endif
		{ "DisplayName", "SourceSpecTagQuery" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Query that is matched against spec tags the source of this GE has" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceAggregateTagQuery_MetaData[] = {
		{ "Category", "Query" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Query that is matched against all tags the source of this GE has */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Query that is matched against all tags the source of this GE has" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModifyingAttribute_MetaData[] = {
		{ "Category", "Query" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Matches on GameplayEffects which modify given attribute. */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Matches on GameplayEffects which modify given attribute." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EffectSource_MetaData[] = {
		{ "Category", "Query" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Matches on GameplayEffects which come from this source */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
		{ "NativeConstTemplateArg", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Matches on GameplayEffects which come from this source" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EffectDefinition_MetaData[] = {
		{ "Category", "Query" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Matches on GameplayEffects with this definition */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Matches on GameplayEffects with this definition" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_CustomMatchDelegate_BP;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OwningTagQuery;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EffectTagQuery;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SourceTagQuery;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SourceAggregateTagQuery;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ModifyingAttribute;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EffectSource;
	static const UECodeGen_Private::FClassPropertyParams NewProp_EffectDefinition;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayEffectQuery>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UScriptStruct_FGameplayEffectQuery_Statics::NewProp_CustomMatchDelegate_BP = { "CustomMatchDelegate_BP", nullptr, (EPropertyFlags)0x0010000000080004, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayEffectQuery, CustomMatchDelegate_BP), Z_Construct_UDelegateFunction_GameplayAbilities_ActiveGameplayEffectQueryCustomMatch_Dynamic__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomMatchDelegate_BP_MetaData), NewProp_CustomMatchDelegate_BP_MetaData) }; // 4220871352
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayEffectQuery_Statics::NewProp_OwningTagQuery = { "OwningTagQuery", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayEffectQuery, OwningTagQuery), Z_Construct_UScriptStruct_FGameplayTagQuery, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwningTagQuery_MetaData), NewProp_OwningTagQuery_MetaData) }; // 572225232
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayEffectQuery_Statics::NewProp_EffectTagQuery = { "EffectTagQuery", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayEffectQuery, EffectTagQuery), Z_Construct_UScriptStruct_FGameplayTagQuery, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EffectTagQuery_MetaData), NewProp_EffectTagQuery_MetaData) }; // 572225232
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayEffectQuery_Statics::NewProp_SourceTagQuery = { "SourceTagQuery", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayEffectQuery, SourceTagQuery), Z_Construct_UScriptStruct_FGameplayTagQuery, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceTagQuery_MetaData), NewProp_SourceTagQuery_MetaData) }; // 572225232
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayEffectQuery_Statics::NewProp_SourceAggregateTagQuery = { "SourceAggregateTagQuery", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayEffectQuery, SourceAggregateTagQuery), Z_Construct_UScriptStruct_FGameplayTagQuery, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceAggregateTagQuery_MetaData), NewProp_SourceAggregateTagQuery_MetaData) }; // 572225232
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayEffectQuery_Statics::NewProp_ModifyingAttribute = { "ModifyingAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayEffectQuery, ModifyingAttribute), Z_Construct_UScriptStruct_FGameplayAttribute, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModifyingAttribute_MetaData), NewProp_ModifyingAttribute_MetaData) }; // 884374022
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGameplayEffectQuery_Statics::NewProp_EffectSource = { "EffectSource", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayEffectQuery, EffectSource), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EffectSource_MetaData), NewProp_EffectSource_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FGameplayEffectQuery_Statics::NewProp_EffectDefinition = { "EffectDefinition", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayEffectQuery, EffectDefinition), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EffectDefinition_MetaData), NewProp_EffectDefinition_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayEffectQuery_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectQuery_Statics::NewProp_CustomMatchDelegate_BP,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectQuery_Statics::NewProp_OwningTagQuery,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectQuery_Statics::NewProp_EffectTagQuery,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectQuery_Statics::NewProp_SourceTagQuery,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectQuery_Statics::NewProp_SourceAggregateTagQuery,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectQuery_Statics::NewProp_ModifyingAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectQuery_Statics::NewProp_EffectSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectQuery_Statics::NewProp_EffectDefinition,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectQuery_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayEffectQuery_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
	nullptr,
	&NewStructOps,
	"GameplayEffectQuery",
	Z_Construct_UScriptStruct_FGameplayEffectQuery_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectQuery_Statics::PropPointers),
	sizeof(FGameplayEffectQuery),
	alignof(FGameplayEffectQuery),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000205),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectQuery_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGameplayEffectQuery_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectQuery()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayEffectQuery.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayEffectQuery.InnerSingleton, Z_Construct_UScriptStruct_FGameplayEffectQuery_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GameplayEffectQuery.InnerSingleton;
}
// End ScriptStruct FGameplayEffectQuery

// Begin ScriptStruct FActiveGameplayEffectQuery
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ActiveGameplayEffectQuery;
class UScriptStruct* FActiveGameplayEffectQuery::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ActiveGameplayEffectQuery.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ActiveGameplayEffectQuery.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FActiveGameplayEffectQuery, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("ActiveGameplayEffectQuery"));
	}
	return Z_Registration_Info_UScriptStruct_ActiveGameplayEffectQuery.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FActiveGameplayEffectQuery>()
{
	return FActiveGameplayEffectQuery::StaticStruct();
}
struct Z_Construct_UScriptStruct_FActiveGameplayEffectQuery_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\x09Generic querying data structure for active GameplayEffects. Lets us ask things like:\n *\x09\x09Give me duration/magnitude of active gameplay effects with these tags\n *\x09\x09Give me handles to all activate gameplay effects modifying this attribute.\n *\x09\x09\n *\x09""Any requirements specified in the query are required: must meet \"all\" not \"one\".\n */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Generic querying data structure for active GameplayEffects. Lets us ask things like:\n        Give me duration/magnitude of active gameplay effects with these tags\n        Give me handles to all activate gameplay effects modifying this attribute.\n\nAny requirements specified in the query are required: must meet \"all\" not \"one\"." },
#endif
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FActiveGameplayEffectQuery>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FActiveGameplayEffectQuery_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
	nullptr,
	&NewStructOps,
	"ActiveGameplayEffectQuery",
	nullptr,
	0,
	sizeof(FActiveGameplayEffectQuery),
	alignof(FActiveGameplayEffectQuery),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActiveGameplayEffectQuery_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FActiveGameplayEffectQuery_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FActiveGameplayEffectQuery()
{
	if (!Z_Registration_Info_UScriptStruct_ActiveGameplayEffectQuery.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ActiveGameplayEffectQuery.InnerSingleton, Z_Construct_UScriptStruct_FActiveGameplayEffectQuery_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ActiveGameplayEffectQuery.InnerSingleton;
}
// End ScriptStruct FActiveGameplayEffectQuery

// Begin ScriptStruct FActiveGameplayEffectsContainer
static_assert(std::is_polymorphic<FActiveGameplayEffectsContainer>() == std::is_polymorphic<FFastArraySerializer>(), "USTRUCT FActiveGameplayEffectsContainer cannot be polymorphic unless super FFastArraySerializer is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ActiveGameplayEffectsContainer;
class UScriptStruct* FActiveGameplayEffectsContainer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ActiveGameplayEffectsContainer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ActiveGameplayEffectsContainer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FActiveGameplayEffectsContainer, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("ActiveGameplayEffectsContainer"));
	}
	return Z_Registration_Info_UScriptStruct_ActiveGameplayEffectsContainer.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FActiveGameplayEffectsContainer>()
{
	return FActiveGameplayEffectsContainer::StaticStruct();
}
#if defined(UE_NET_HAS_IRIS_FASTARRAY_BINDING) && UE_NET_HAS_IRIS_FASTARRAY_BINDING
UE_NET_IMPLEMENT_FASTARRAY(FActiveGameplayEffectsContainer);
#else
UE_NET_IMPLEMENT_FASTARRAY_STUB(FActiveGameplayEffectsContainer);
#endif
struct Z_Construct_UScriptStruct_FActiveGameplayEffectsContainer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Active GameplayEffects Container\n *\x09-Bucket of ActiveGameplayEffects\n *\x09-Needed for FFastArraySerialization\n *  \n * This should only be used by UAbilitySystemComponent. All of this could just live in UAbilitySystemComponent except that we need a distinct USTRUCT to implement FFastArraySerializer.\n *\n * The preferred way to iterate through the ActiveGameplayEffectContainer is with CreateConstIterator/CreateIterator or stl style range iteration:\n * \n *\x09""for (const FActiveGameplayEffect& Effect : this) {}\n *\x09""for (auto It = CreateConstIterator(); It; ++It) {}\n *\n */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Active GameplayEffects Container\n    -Bucket of ActiveGameplayEffects\n    -Needed for FFastArraySerialization\n\nThis should only be used by UAbilitySystemComponent. All of this could just live in UAbilitySystemComponent except that we need a distinct USTRUCT to implement FFastArraySerializer.\n\nThe preferred way to iterate through the ActiveGameplayEffectContainer is with CreateConstIterator/CreateIterator or stl style range iteration:\n\n    for (const FActiveGameplayEffect& Effect : this) {}\n    for (auto It = CreateConstIterator(); It; ++It) {}" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameplayEffects_Internal_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Our active list of Effects. Do not access this directly (Even from internal functions!) Use GetNumGameplayEffect() / GetGameplayEffect() ! */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Our active list of Effects. Do not access this directly (Even from internal functions!) Use GetNumGameplayEffect() / GetGameplayEffect() !" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayEffects_Internal_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GameplayEffects_Internal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FActiveGameplayEffectsContainer>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FActiveGameplayEffectsContainer_Statics::NewProp_GameplayEffects_Internal_Inner = { "GameplayEffects_Internal", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FActiveGameplayEffect, METADATA_PARAMS(0, nullptr) }; // 986250908
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FActiveGameplayEffectsContainer_Statics::NewProp_GameplayEffects_Internal = { "GameplayEffects_Internal", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FActiveGameplayEffectsContainer, GameplayEffects_Internal), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameplayEffects_Internal_MetaData), NewProp_GameplayEffects_Internal_MetaData) }; // 986250908
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FActiveGameplayEffectsContainer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActiveGameplayEffectsContainer_Statics::NewProp_GameplayEffects_Internal_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActiveGameplayEffectsContainer_Statics::NewProp_GameplayEffects_Internal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActiveGameplayEffectsContainer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FActiveGameplayEffectsContainer_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
	Z_Construct_UScriptStruct_FFastArraySerializer,
	&NewStructOps,
	"ActiveGameplayEffectsContainer",
	Z_Construct_UScriptStruct_FActiveGameplayEffectsContainer_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActiveGameplayEffectsContainer_Statics::PropPointers),
	sizeof(FActiveGameplayEffectsContainer),
	alignof(FActiveGameplayEffectsContainer),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActiveGameplayEffectsContainer_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FActiveGameplayEffectsContainer_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FActiveGameplayEffectsContainer()
{
	if (!Z_Registration_Info_UScriptStruct_ActiveGameplayEffectsContainer.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ActiveGameplayEffectsContainer.InnerSingleton, Z_Construct_UScriptStruct_FActiveGameplayEffectsContainer_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ActiveGameplayEffectsContainer.InnerSingleton;
}
// End ScriptStruct FActiveGameplayEffectsContainer

// Begin ScriptStruct FGameplayEffectVersion
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayEffectVersion;
class UScriptStruct* FGameplayEffectVersion::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayEffectVersion.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayEffectVersion.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayEffectVersion, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("GameplayEffectVersion"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayEffectVersion.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FGameplayEffectVersion>()
{
	return FGameplayEffectVersion::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGameplayEffectVersion_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Gameplay Effects Data needs to be versioned (e.g. going from Monolithic to Modular)\n * Unfortunately, the Custom Package Versioning doesn't work for this case, because we're upgrading\n * outside of the Serialize function.  For that reason we want to store a UProperty that says what version\n * we're on.  Unfortunately that propagates from Parent to Child (inheritance rules) so to overcome that,\n * we have a special UStruct that always serializes its data (so it will always be loaded, not inherited).\n * Here is how to do that:\n *\x09""1. Return false in Identical (which effectively disables delta serialization).\n *  2. Reset the value in PostInitProperties, thereby not using the inherited value on the initial preload.\n *  3. Ensure the CurrentVersion field isn't marked up as a UPROPERTY to avoid automatic copying between parent/child.\n *  4. Implement Serialize to ensure the CurrentVersion is still serialized.\n */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gameplay Effects Data needs to be versioned (e.g. going from Monolithic to Modular)\nUnfortunately, the Custom Package Versioning doesn't work for this case, because we're upgrading\noutside of the Serialize function.  For that reason we want to store a UProperty that says what version\nwe're on.  Unfortunately that propagates from Parent to Child (inheritance rules) so to overcome that,\nwe have a special UStruct that always serializes its data (so it will always be loaded, not inherited).\nHere is how to do that:\n    1. Return false in Identical (which effectively disables delta serialization).\n 2. Reset the value in PostInitProperties, thereby not using the inherited value on the initial preload.\n 3. Ensure the CurrentVersion field isn't marked up as a UPROPERTY to avoid automatic copying between parent/child.\n 4. Implement Serialize to ensure the CurrentVersion is still serialized." },
#endif
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayEffectVersion>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayEffectVersion_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
	nullptr,
	&NewStructOps,
	"GameplayEffectVersion",
	nullptr,
	0,
	sizeof(FGameplayEffectVersion),
	alignof(FGameplayEffectVersion),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectVersion_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGameplayEffectVersion_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectVersion()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayEffectVersion.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayEffectVersion.InnerSingleton, Z_Construct_UScriptStruct_FGameplayEffectVersion_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GameplayEffectVersion.InnerSingleton;
}
// End ScriptStruct FGameplayEffectVersion

// Begin Class UGameplayEffect
void UGameplayEffect::StaticRegisterNativesUGameplayEffect()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameplayEffect);
UClass* Z_Construct_UClass_UGameplayEffect_NoRegister()
{
	return UGameplayEffect::StaticClass();
}
struct Z_Construct_UClass_UGameplayEffect_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * UGameplayEffect\n *\x09The GameplayEffect definition. This is the data asset defined in the editor that drives everything.\n *  This is only blueprintable to allow for templating gameplay effects. Gameplay effects should NOT contain blueprint graphs.\n */" },
#endif
		{ "IncludePath", "GameplayEffect.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
		{ "PrioritizeCategories", "Status Duration GameplayEffect GameplayCues Stacking" },
		{ "ShortTooltip", "A GameplayEffect modifies attributes and tags." },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UGameplayEffect\n    The GameplayEffect definition. This is the data asset defined in the editor that drives everything.\n This is only blueprintable to allow for templating gameplay effects. Gameplay effects should NOT contain blueprint graphs." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DurationPolicy_MetaData[] = {
		{ "Category", "Duration" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Policy for the duration of this effect */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Policy for the duration of this effect" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DurationMagnitude_MetaData[] = {
		{ "Category", "Duration" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Duration in seconds. 0.0 for instantaneous effects; -1.0 for infinite duration. */" },
#endif
		{ "EditCondition", "DurationPolicy == EGameplayEffectDurationType::HasDuration" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Duration in seconds. 0.0 for instantaneous effects; -1.0 for infinite duration." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Period_MetaData[] = {
		{ "Category", "Duration|Period" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Period in seconds. 0.0 for non-periodic effects */" },
#endif
		{ "EditCondition", "DurationPolicy != EGameplayEffectDurationType::Instant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Period in seconds. 0.0 for non-periodic effects" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bExecutePeriodicEffectOnApplication_MetaData[] = {
		{ "Category", "Duration|Period" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If true, the effect executes on application and then at every period interval. If false, no execution occurs until the first period elapses. */// EditCondition in FGameplayEffectDetails\n" },
#endif
		{ "EditCondition", "true" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, the effect executes on application and then at every period interval. If false, no execution occurs until the first period elapses. // EditCondition in FGameplayEffectDetails" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PeriodicInhibitionPolicy_MetaData[] = {
		{ "Category", "Duration|Period" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** How we should respond when a periodic gameplay effect is no longer inhibited */// EditCondition in FGameplayEffectDetails\n" },
#endif
		{ "EditCondition", "true" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How we should respond when a periodic gameplay effect is no longer inhibited // EditCondition in FGameplayEffectDetails" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Modifiers_MetaData[] = {
		{ "Category", "GameplayEffect" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Array of modifiers that will affect the target of this effect */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
		{ "TitleProperty", "Attribute" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Array of modifiers that will affect the target of this effect" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Executions_MetaData[] = {
		{ "Category", "GameplayEffect" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Array of executions that will affect the target of this effect */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Array of executions that will affect the target of this effect" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChanceToApplyToTarget_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "GameplayAttribute", "True" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ApplicationRequirements_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "DisplayName", "Application Requirement" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConditionalGameplayEffects_MetaData[] = {
		{ "Category", "Deprecated|GameplayEffect" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverflowEffects_MetaData[] = {
		{ "Category", "Stacking|Overflow" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Effects to apply when a stacking effect \"overflows\" its stack count through another attempted application. Added whether the overflow application succeeds or not. */" },
#endif
		{ "EditCondition", "StackingType != EGameplayEffectStackingType::None" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Effects to apply when a stacking effect \"overflows\" its stack count through another attempted application. Added whether the overflow application succeeds or not." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDenyOverflowApplication_MetaData[] = {
		{ "Category", "Stacking|Overflow" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If true, stacking attempts made while at the stack count will fail, resulting in the duration and context not being refreshed */" },
#endif
		{ "EditCondition", "StackingType != EGameplayEffectStackingType::None" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, stacking attempts made while at the stack count will fail, resulting in the duration and context not being refreshed" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bClearStackOnOverflow_MetaData[] = {
		{ "Category", "Stacking|Overflow" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If true, the entire stack of the effect will be cleared once it overflows */" },
#endif
		{ "EditCondition", "(StackingType != EGameplayEffectStackingType::None) && bDenyOverflowApplication" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, the entire stack of the effect will be cleared once it overflows" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrematureExpirationEffectClasses_MetaData[] = {
		{ "Category", "Deprecated|Expiration" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoutineExpirationEffectClasses_MetaData[] = {
		{ "Category", "Deprecated|Expiration" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRequireModifierSuccessToTriggerCues_MetaData[] = {
		{ "Category", "GameplayCues" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If true, cues will only trigger when GE modifiers succeed being applied (whether through modifiers or executions) */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, cues will only trigger when GE modifiers succeed being applied (whether through modifiers or executions)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSuppressStackingCues_MetaData[] = {
		{ "Category", "GameplayCues" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If true, GameplayCues will only be triggered for the first instance in a stacking GameplayEffect. */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, GameplayCues will only be triggered for the first instance in a stacking GameplayEffect." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameplayCues_MetaData[] = {
		{ "Category", "GameplayCues" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Cues to trigger non-simulated reactions in response to this GameplayEffect such as sounds, particle effects, etc */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cues to trigger non-simulated reactions in response to this GameplayEffect such as sounds, particle effects, etc" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UIData_MetaData[] = {
		{ "Category", "Deprecated|Display" },
		{ "DeprecatedProperty", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InheritableGameplayEffectTags_MetaData[] = {
		{ "Categories", "GameplayEffectTagsCategory" },
		{ "Category", "Deprecated" },
		{ "DeprecatedProperty", "" },
		{ "DisplayName", "GameplayEffectAssetTag" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InheritableOwnedTagsContainer_MetaData[] = {
		{ "Categories", "OwnedTagsCategory" },
		{ "Category", "Deprecated" },
		{ "DeprecatedProperty", "" },
		{ "DisplayName", "GrantedTags" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InheritableBlockedAbilityTagsContainer_MetaData[] = {
		{ "Categories", "BlockedAbilityTagsCategory" },
		{ "Category", "Deprecated" },
		{ "DeprecatedProperty", "" },
		{ "DisplayName", "GrantedBlockedAbilityTags" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OngoingTagRequirements_MetaData[] = {
		{ "Categories", "OngoingTagRequirementsCategory" },
		{ "Category", "Deprecated" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ApplicationTagRequirements_MetaData[] = {
		{ "Categories", "ApplicationTagRequirementsCategory" },
		{ "Category", "Deprecated" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RemovalTagRequirements_MetaData[] = {
		{ "Categories", "ApplicationTagRequirementsCategory" },
		{ "Category", "Deprecated" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RemoveGameplayEffectsWithTags_MetaData[] = {
		{ "Categories", "RemoveTagRequirementsCategory" },
		{ "Category", "Deprecated" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrantedApplicationImmunityTags_MetaData[] = {
		{ "Categories", "GrantedApplicationImmunityTagsCategory" },
		{ "Category", "Deprecated" },
		{ "DeprecatedProperty", "" },
		{ "DisplayName", "GrantedApplicationImmunityTags" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrantedApplicationImmunityQuery_MetaData[] = {
		{ "Category", "Deprecated" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RemoveGameplayEffectQuery_MetaData[] = {
		{ "Category", "Tags" },
		{ "DeprecatedProperty", "" },
		{ "DisplayAfter", "RemovalTagRequirements" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StackingType_MetaData[] = {
		{ "Category", "Stacking" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** How this GameplayEffect stacks with other instances of this same GameplayEffect */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How this GameplayEffect stacks with other instances of this same GameplayEffect" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StackLimitCount_MetaData[] = {
		{ "Category", "Stacking" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Stack limit for StackingType */" },
#endif
		{ "EditCondition", "StackingType != EGameplayEffectStackingType::None" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Stack limit for StackingType" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StackDurationRefreshPolicy_MetaData[] = {
		{ "Category", "Stacking" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Policy for how the effect duration should be refreshed while stacking */" },
#endif
		{ "EditCondition", "StackingType != EGameplayEffectStackingType::None" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Policy for how the effect duration should be refreshed while stacking" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StackPeriodResetPolicy_MetaData[] = {
		{ "Category", "Stacking" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Policy for how the effect period should be reset (or not) while stacking */" },
#endif
		{ "EditCondition", "StackingType != EGameplayEffectStackingType::None" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Policy for how the effect period should be reset (or not) while stacking" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StackExpirationPolicy_MetaData[] = {
		{ "Category", "Stacking" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Policy for how to handle duration expiring on this gameplay effect */" },
#endif
		{ "EditCondition", "StackingType != EGameplayEffectStackingType::None" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Policy for how to handle duration expiring on this gameplay effect" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrantedAbilities_MetaData[] = {
		{ "Category", "Granted Abilities" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GEComponents_Inner_MetaData[] = {
		{ "Category", "GameplayEffect" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** These Gameplay Effect Components define how this Gameplay Effect behaves when applied */" },
#endif
		{ "DisplayName", "Components" },
		{ "DisplayPriority", "0" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "TitleProperty", "EditorFriendlyName" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "These Gameplay Effect Components define how this Gameplay Effect behaves when applied" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GEComponents_MetaData[] = {
		{ "Category", "GameplayEffect" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** These Gameplay Effect Components define how this Gameplay Effect behaves when applied */" },
#endif
		{ "DisplayName", "Components" },
		{ "DisplayPriority", "0" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "TitleProperty", "EditorFriendlyName" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "These Gameplay Effect Components define how this Gameplay Effect behaves when applied" },
#endif
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EditorStatusText_MetaData[] = {
		{ "Category", "Status" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Allow us to show the Status of the class (valid configurations or invalid configurations) while configuring in the Editor */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Allow us to show the Status of the class (valid configurations or invalid configurations) while configuring in the Editor" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataVersion_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The saved version of this package (the value is not inherited from its parents). @see SetVersion and GetVersion. */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The saved version of this package (the value is not inherited from its parents). @see SetVersion and GetVersion." },
#endif
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_DurationPolicy_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DurationPolicy;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DurationMagnitude;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Period;
	static void NewProp_bExecutePeriodicEffectOnApplication_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bExecutePeriodicEffectOnApplication;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PeriodicInhibitionPolicy_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PeriodicInhibitionPolicy;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Modifiers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Modifiers;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Executions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Executions;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ChanceToApplyToTarget;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ApplicationRequirements_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ApplicationRequirements;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ConditionalGameplayEffects_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ConditionalGameplayEffects;
	static const UECodeGen_Private::FClassPropertyParams NewProp_OverflowEffects_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OverflowEffects;
	static void NewProp_bDenyOverflowApplication_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDenyOverflowApplication;
	static void NewProp_bClearStackOnOverflow_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bClearStackOnOverflow;
	static const UECodeGen_Private::FClassPropertyParams NewProp_PrematureExpirationEffectClasses_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PrematureExpirationEffectClasses;
	static const UECodeGen_Private::FClassPropertyParams NewProp_RoutineExpirationEffectClasses_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RoutineExpirationEffectClasses;
	static void NewProp_bRequireModifierSuccessToTriggerCues_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRequireModifierSuccessToTriggerCues;
	static void NewProp_bSuppressStackingCues_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuppressStackingCues;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayCues_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GameplayCues;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UIData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InheritableGameplayEffectTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InheritableOwnedTagsContainer;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InheritableBlockedAbilityTagsContainer;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OngoingTagRequirements;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ApplicationTagRequirements;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RemovalTagRequirements;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RemoveGameplayEffectsWithTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GrantedApplicationImmunityTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GrantedApplicationImmunityQuery;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RemoveGameplayEffectQuery;
	static const UECodeGen_Private::FBytePropertyParams NewProp_StackingType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_StackingType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StackLimitCount;
	static const UECodeGen_Private::FBytePropertyParams NewProp_StackDurationRefreshPolicy_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_StackDurationRefreshPolicy;
	static const UECodeGen_Private::FBytePropertyParams NewProp_StackPeriodResetPolicy_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_StackPeriodResetPolicy;
	static const UECodeGen_Private::FBytePropertyParams NewProp_StackExpirationPolicy_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_StackExpirationPolicy;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GrantedAbilities_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GrantedAbilities;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GEComponents_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GEComponents;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_EditorStatusText;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DataVersion;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameplayEffect>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGameplayEffect_Statics::NewProp_DurationPolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGameplayEffect_Statics::NewProp_DurationPolicy = { "DurationPolicy", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameplayEffect, DurationPolicy), Z_Construct_UEnum_GameplayAbilities_EGameplayEffectDurationType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DurationPolicy_MetaData), NewProp_DurationPolicy_MetaData) }; // 1411854851
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameplayEffect_Statics::NewProp_DurationMagnitude = { "DurationMagnitude", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameplayEffect, DurationMagnitude), Z_Construct_UScriptStruct_FGameplayEffectModifierMagnitude, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DurationMagnitude_MetaData), NewProp_DurationMagnitude_MetaData) }; // 190918390
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameplayEffect_Statics::NewProp_Period = { "Period", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameplayEffect, Period), Z_Construct_UScriptStruct_FScalableFloat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Period_MetaData), NewProp_Period_MetaData) }; // 1548651388
void Z_Construct_UClass_UGameplayEffect_Statics::NewProp_bExecutePeriodicEffectOnApplication_SetBit(void* Obj)
{
	((UGameplayEffect*)Obj)->bExecutePeriodicEffectOnApplication = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGameplayEffect_Statics::NewProp_bExecutePeriodicEffectOnApplication = { "bExecutePeriodicEffectOnApplication", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGameplayEffect), &Z_Construct_UClass_UGameplayEffect_Statics::NewProp_bExecutePeriodicEffectOnApplication_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bExecutePeriodicEffectOnApplication_MetaData), NewProp_bExecutePeriodicEffectOnApplication_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGameplayEffect_Statics::NewProp_PeriodicInhibitionPolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGameplayEffect_Statics::NewProp_PeriodicInhibitionPolicy = { "PeriodicInhibitionPolicy", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameplayEffect, PeriodicInhibitionPolicy), Z_Construct_UEnum_GameplayAbilities_EGameplayEffectPeriodInhibitionRemovedPolicy, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PeriodicInhibitionPolicy_MetaData), NewProp_PeriodicInhibitionPolicy_MetaData) }; // 142386991
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameplayEffect_Statics::NewProp_Modifiers_Inner = { "Modifiers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayModifierInfo, METADATA_PARAMS(0, nullptr) }; // 2589202395
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameplayEffect_Statics::NewProp_Modifiers = { "Modifiers", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameplayEffect, Modifiers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Modifiers_MetaData), NewProp_Modifiers_MetaData) }; // 2589202395
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameplayEffect_Statics::NewProp_Executions_Inner = { "Executions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayEffectExecutionDefinition, METADATA_PARAMS(0, nullptr) }; // 1515760101
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameplayEffect_Statics::NewProp_Executions = { "Executions", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameplayEffect, Executions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Executions_MetaData), NewProp_Executions_MetaData) }; // 1515760101
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameplayEffect_Statics::NewProp_ChanceToApplyToTarget = { "ChanceToApplyToTarget", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameplayEffect, ChanceToApplyToTarget_DEPRECATED), Z_Construct_UScriptStruct_FScalableFloat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChanceToApplyToTarget_MetaData), NewProp_ChanceToApplyToTarget_MetaData) }; // 1548651388
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UGameplayEffect_Statics::NewProp_ApplicationRequirements_Inner = { "ApplicationRequirements", nullptr, (EPropertyFlags)0x0004000020000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffectCustomApplicationRequirement_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameplayEffect_Statics::NewProp_ApplicationRequirements = { "ApplicationRequirements", nullptr, (EPropertyFlags)0x0014000020000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameplayEffect, ApplicationRequirements_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ApplicationRequirements_MetaData), NewProp_ApplicationRequirements_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameplayEffect_Statics::NewProp_ConditionalGameplayEffects_Inner = { "ConditionalGameplayEffects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FConditionalGameplayEffect, METADATA_PARAMS(0, nullptr) }; // 3840225737
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameplayEffect_Statics::NewProp_ConditionalGameplayEffects = { "ConditionalGameplayEffects", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameplayEffect, ConditionalGameplayEffects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConditionalGameplayEffects_MetaData), NewProp_ConditionalGameplayEffects_MetaData) }; // 3840225737
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UGameplayEffect_Statics::NewProp_OverflowEffects_Inner = { "OverflowEffects", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameplayEffect_Statics::NewProp_OverflowEffects = { "OverflowEffects", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameplayEffect, OverflowEffects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverflowEffects_MetaData), NewProp_OverflowEffects_MetaData) };
void Z_Construct_UClass_UGameplayEffect_Statics::NewProp_bDenyOverflowApplication_SetBit(void* Obj)
{
	((UGameplayEffect*)Obj)->bDenyOverflowApplication = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGameplayEffect_Statics::NewProp_bDenyOverflowApplication = { "bDenyOverflowApplication", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGameplayEffect), &Z_Construct_UClass_UGameplayEffect_Statics::NewProp_bDenyOverflowApplication_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDenyOverflowApplication_MetaData), NewProp_bDenyOverflowApplication_MetaData) };
void Z_Construct_UClass_UGameplayEffect_Statics::NewProp_bClearStackOnOverflow_SetBit(void* Obj)
{
	((UGameplayEffect*)Obj)->bClearStackOnOverflow = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGameplayEffect_Statics::NewProp_bClearStackOnOverflow = { "bClearStackOnOverflow", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGameplayEffect), &Z_Construct_UClass_UGameplayEffect_Statics::NewProp_bClearStackOnOverflow_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bClearStackOnOverflow_MetaData), NewProp_bClearStackOnOverflow_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UGameplayEffect_Statics::NewProp_PrematureExpirationEffectClasses_Inner = { "PrematureExpirationEffectClasses", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameplayEffect_Statics::NewProp_PrematureExpirationEffectClasses = { "PrematureExpirationEffectClasses", nullptr, (EPropertyFlags)0x0014000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameplayEffect, PrematureExpirationEffectClasses), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrematureExpirationEffectClasses_MetaData), NewProp_PrematureExpirationEffectClasses_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UGameplayEffect_Statics::NewProp_RoutineExpirationEffectClasses_Inner = { "RoutineExpirationEffectClasses", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameplayEffect_Statics::NewProp_RoutineExpirationEffectClasses = { "RoutineExpirationEffectClasses", nullptr, (EPropertyFlags)0x0014000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameplayEffect, RoutineExpirationEffectClasses), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoutineExpirationEffectClasses_MetaData), NewProp_RoutineExpirationEffectClasses_MetaData) };
void Z_Construct_UClass_UGameplayEffect_Statics::NewProp_bRequireModifierSuccessToTriggerCues_SetBit(void* Obj)
{
	((UGameplayEffect*)Obj)->bRequireModifierSuccessToTriggerCues = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGameplayEffect_Statics::NewProp_bRequireModifierSuccessToTriggerCues = { "bRequireModifierSuccessToTriggerCues", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGameplayEffect), &Z_Construct_UClass_UGameplayEffect_Statics::NewProp_bRequireModifierSuccessToTriggerCues_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRequireModifierSuccessToTriggerCues_MetaData), NewProp_bRequireModifierSuccessToTriggerCues_MetaData) };
void Z_Construct_UClass_UGameplayEffect_Statics::NewProp_bSuppressStackingCues_SetBit(void* Obj)
{
	((UGameplayEffect*)Obj)->bSuppressStackingCues = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGameplayEffect_Statics::NewProp_bSuppressStackingCues = { "bSuppressStackingCues", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGameplayEffect), &Z_Construct_UClass_UGameplayEffect_Statics::NewProp_bSuppressStackingCues_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSuppressStackingCues_MetaData), NewProp_bSuppressStackingCues_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameplayEffect_Statics::NewProp_GameplayCues_Inner = { "GameplayCues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayEffectCue, METADATA_PARAMS(0, nullptr) }; // 1694034339
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameplayEffect_Statics::NewProp_GameplayCues = { "GameplayCues", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameplayEffect, GameplayCues), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameplayCues_MetaData), NewProp_GameplayCues_MetaData) }; // 1694034339
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameplayEffect_Statics::NewProp_UIData = { "UIData", nullptr, (EPropertyFlags)0x011600000008201c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameplayEffect, UIData), Z_Construct_UClass_UGameplayEffectUIData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UIData_MetaData), NewProp_UIData_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameplayEffect_Statics::NewProp_InheritableGameplayEffectTags = { "InheritableGameplayEffectTags", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameplayEffect, InheritableGameplayEffectTags), Z_Construct_UScriptStruct_FInheritedTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InheritableGameplayEffectTags_MetaData), NewProp_InheritableGameplayEffectTags_MetaData) }; // 716965641
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameplayEffect_Statics::NewProp_InheritableOwnedTagsContainer = { "InheritableOwnedTagsContainer", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameplayEffect, InheritableOwnedTagsContainer), Z_Construct_UScriptStruct_FInheritedTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InheritableOwnedTagsContainer_MetaData), NewProp_InheritableOwnedTagsContainer_MetaData) }; // 716965641
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameplayEffect_Statics::NewProp_InheritableBlockedAbilityTagsContainer = { "InheritableBlockedAbilityTagsContainer", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameplayEffect, InheritableBlockedAbilityTagsContainer), Z_Construct_UScriptStruct_FInheritedTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InheritableBlockedAbilityTagsContainer_MetaData), NewProp_InheritableBlockedAbilityTagsContainer_MetaData) }; // 716965641
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameplayEffect_Statics::NewProp_OngoingTagRequirements = { "OngoingTagRequirements", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameplayEffect, OngoingTagRequirements), Z_Construct_UScriptStruct_FGameplayTagRequirements, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OngoingTagRequirements_MetaData), NewProp_OngoingTagRequirements_MetaData) }; // 3067797139
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameplayEffect_Statics::NewProp_ApplicationTagRequirements = { "ApplicationTagRequirements", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameplayEffect, ApplicationTagRequirements), Z_Construct_UScriptStruct_FGameplayTagRequirements, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ApplicationTagRequirements_MetaData), NewProp_ApplicationTagRequirements_MetaData) }; // 3067797139
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameplayEffect_Statics::NewProp_RemovalTagRequirements = { "RemovalTagRequirements", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameplayEffect, RemovalTagRequirements), Z_Construct_UScriptStruct_FGameplayTagRequirements, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RemovalTagRequirements_MetaData), NewProp_RemovalTagRequirements_MetaData) }; // 3067797139
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameplayEffect_Statics::NewProp_RemoveGameplayEffectsWithTags = { "RemoveGameplayEffectsWithTags", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameplayEffect, RemoveGameplayEffectsWithTags), Z_Construct_UScriptStruct_FInheritedTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RemoveGameplayEffectsWithTags_MetaData), NewProp_RemoveGameplayEffectsWithTags_MetaData) }; // 716965641
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameplayEffect_Statics::NewProp_GrantedApplicationImmunityTags = { "GrantedApplicationImmunityTags", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameplayEffect, GrantedApplicationImmunityTags), Z_Construct_UScriptStruct_FGameplayTagRequirements, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrantedApplicationImmunityTags_MetaData), NewProp_GrantedApplicationImmunityTags_MetaData) }; // 3067797139
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameplayEffect_Statics::NewProp_GrantedApplicationImmunityQuery = { "GrantedApplicationImmunityQuery", nullptr, (EPropertyFlags)0x0010008000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameplayEffect, GrantedApplicationImmunityQuery), Z_Construct_UScriptStruct_FGameplayEffectQuery, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrantedApplicationImmunityQuery_MetaData), NewProp_GrantedApplicationImmunityQuery_MetaData) }; // 2456179291
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameplayEffect_Statics::NewProp_RemoveGameplayEffectQuery = { "RemoveGameplayEffectQuery", nullptr, (EPropertyFlags)0x0010008000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameplayEffect, RemoveGameplayEffectQuery), Z_Construct_UScriptStruct_FGameplayEffectQuery, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RemoveGameplayEffectQuery_MetaData), NewProp_RemoveGameplayEffectQuery_MetaData) }; // 2456179291
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGameplayEffect_Statics::NewProp_StackingType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGameplayEffect_Statics::NewProp_StackingType = { "StackingType", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameplayEffect, StackingType), Z_Construct_UEnum_GameplayAbilities_EGameplayEffectStackingType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StackingType_MetaData), NewProp_StackingType_MetaData) }; // 1888212977
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGameplayEffect_Statics::NewProp_StackLimitCount = { "StackLimitCount", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameplayEffect, StackLimitCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StackLimitCount_MetaData), NewProp_StackLimitCount_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGameplayEffect_Statics::NewProp_StackDurationRefreshPolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGameplayEffect_Statics::NewProp_StackDurationRefreshPolicy = { "StackDurationRefreshPolicy", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameplayEffect, StackDurationRefreshPolicy), Z_Construct_UEnum_GameplayAbilities_EGameplayEffectStackingDurationPolicy, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StackDurationRefreshPolicy_MetaData), NewProp_StackDurationRefreshPolicy_MetaData) }; // 3635981480
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGameplayEffect_Statics::NewProp_StackPeriodResetPolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGameplayEffect_Statics::NewProp_StackPeriodResetPolicy = { "StackPeriodResetPolicy", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameplayEffect, StackPeriodResetPolicy), Z_Construct_UEnum_GameplayAbilities_EGameplayEffectStackingPeriodPolicy, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StackPeriodResetPolicy_MetaData), NewProp_StackPeriodResetPolicy_MetaData) }; // 200505531
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGameplayEffect_Statics::NewProp_StackExpirationPolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGameplayEffect_Statics::NewProp_StackExpirationPolicy = { "StackExpirationPolicy", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameplayEffect, StackExpirationPolicy), Z_Construct_UEnum_GameplayAbilities_EGameplayEffectStackingExpirationPolicy, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StackExpirationPolicy_MetaData), NewProp_StackExpirationPolicy_MetaData) }; // 849115002
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameplayEffect_Statics::NewProp_GrantedAbilities_Inner = { "GrantedAbilities", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayAbilitySpecDef, METADATA_PARAMS(0, nullptr) }; // 140173524
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameplayEffect_Statics::NewProp_GrantedAbilities = { "GrantedAbilities", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameplayEffect, GrantedAbilities), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrantedAbilities_MetaData), NewProp_GrantedAbilities_MetaData) }; // 140173524
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameplayEffect_Statics::NewProp_GEComponents_Inner = { "GEComponents", nullptr, (EPropertyFlags)0x0106000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UGameplayEffectComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GEComponents_Inner_MetaData), NewProp_GEComponents_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameplayEffect_Statics::NewProp_GEComponents = { "GEComponents", nullptr, (EPropertyFlags)0x012408800001001d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameplayEffect, GEComponents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GEComponents_MetaData), NewProp_GEComponents_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UGameplayEffect_Statics::NewProp_EditorStatusText = { "EditorStatusText", nullptr, (EPropertyFlags)0x0020080800022001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameplayEffect, EditorStatusText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EditorStatusText_MetaData), NewProp_EditorStatusText_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameplayEffect_Statics::NewProp_DataVersion = { "DataVersion", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameplayEffect, DataVersion), Z_Construct_UScriptStruct_FGameplayEffectVersion, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataVersion_MetaData), NewProp_DataVersion_MetaData) }; // 2374050630
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameplayEffect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayEffect_Statics::NewProp_DurationPolicy_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayEffect_Statics::NewProp_DurationPolicy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayEffect_Statics::NewProp_DurationMagnitude,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayEffect_Statics::NewProp_Period,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayEffect_Statics::NewProp_bExecutePeriodicEffectOnApplication,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayEffect_Statics::NewProp_PeriodicInhibitionPolicy_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayEffect_Statics::NewProp_PeriodicInhibitionPolicy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayEffect_Statics::NewProp_Modifiers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayEffect_Statics::NewProp_Modifiers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayEffect_Statics::NewProp_Executions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayEffect_Statics::NewProp_Executions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayEffect_Statics::NewProp_ChanceToApplyToTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayEffect_Statics::NewProp_ApplicationRequirements_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayEffect_Statics::NewProp_ApplicationRequirements,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayEffect_Statics::NewProp_ConditionalGameplayEffects_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayEffect_Statics::NewProp_ConditionalGameplayEffects,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayEffect_Statics::NewProp_OverflowEffects_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayEffect_Statics::NewProp_OverflowEffects,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayEffect_Statics::NewProp_bDenyOverflowApplication,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayEffect_Statics::NewProp_bClearStackOnOverflow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayEffect_Statics::NewProp_PrematureExpirationEffectClasses_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayEffect_Statics::NewProp_PrematureExpirationEffectClasses,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayEffect_Statics::NewProp_RoutineExpirationEffectClasses_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayEffect_Statics::NewProp_RoutineExpirationEffectClasses,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayEffect_Statics::NewProp_bRequireModifierSuccessToTriggerCues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayEffect_Statics::NewProp_bSuppressStackingCues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayEffect_Statics::NewProp_GameplayCues_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayEffect_Statics::NewProp_GameplayCues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayEffect_Statics::NewProp_UIData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayEffect_Statics::NewProp_InheritableGameplayEffectTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayEffect_Statics::NewProp_InheritableOwnedTagsContainer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayEffect_Statics::NewProp_InheritableBlockedAbilityTagsContainer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayEffect_Statics::NewProp_OngoingTagRequirements,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayEffect_Statics::NewProp_ApplicationTagRequirements,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayEffect_Statics::NewProp_RemovalTagRequirements,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayEffect_Statics::NewProp_RemoveGameplayEffectsWithTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayEffect_Statics::NewProp_GrantedApplicationImmunityTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayEffect_Statics::NewProp_GrantedApplicationImmunityQuery,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayEffect_Statics::NewProp_RemoveGameplayEffectQuery,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayEffect_Statics::NewProp_StackingType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayEffect_Statics::NewProp_StackingType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayEffect_Statics::NewProp_StackLimitCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayEffect_Statics::NewProp_StackDurationRefreshPolicy_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayEffect_Statics::NewProp_StackDurationRefreshPolicy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayEffect_Statics::NewProp_StackPeriodResetPolicy_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayEffect_Statics::NewProp_StackPeriodResetPolicy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayEffect_Statics::NewProp_StackExpirationPolicy_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayEffect_Statics::NewProp_StackExpirationPolicy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayEffect_Statics::NewProp_GrantedAbilities_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayEffect_Statics::NewProp_GrantedAbilities,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayEffect_Statics::NewProp_GEComponents_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayEffect_Statics::NewProp_GEComponents,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayEffect_Statics::NewProp_EditorStatusText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayEffect_Statics::NewProp_DataVersion,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayEffect_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGameplayEffect_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayEffect_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UGameplayEffect_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UGameplayTagAssetInterface_NoRegister, (int32)VTABLE_OFFSET(UGameplayEffect, IGameplayTagAssetInterface), false },  // 2863124436
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameplayEffect_Statics::ClassParams = {
	&UGameplayEffect::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGameplayEffect_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayEffect_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayEffect_Statics::Class_MetaDataParams), Z_Construct_UClass_UGameplayEffect_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGameplayEffect()
{
	if (!Z_Registration_Info_UClass_UGameplayEffect.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameplayEffect.OuterSingleton, Z_Construct_UClass_UGameplayEffect_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGameplayEffect.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UClass* StaticClass<UGameplayEffect>()
{
	return UGameplayEffect::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGameplayEffect);
UGameplayEffect::~UGameplayEffect() {}
// End Class UGameplayEffect

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayEffect_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EGameplayEffectMagnitudeCalculation_StaticEnum, TEXT("EGameplayEffectMagnitudeCalculation"), &Z_Registration_Info_UEnum_EGameplayEffectMagnitudeCalculation, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2148493703U) },
		{ EAttributeBasedFloatCalculationType_StaticEnum, TEXT("EAttributeBasedFloatCalculationType"), &Z_Registration_Info_UEnum_EAttributeBasedFloatCalculationType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2206879660U) },
		{ EGameplayEffectVersion_StaticEnum, TEXT("EGameplayEffectVersion"), &Z_Registration_Info_UEnum_EGameplayEffectVersion, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2318890252U) },
		{ EGameplayEffectScopedModifierAggregatorType_StaticEnum, TEXT("EGameplayEffectScopedModifierAggregatorType"), &Z_Registration_Info_UEnum_EGameplayEffectScopedModifierAggregatorType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 26787970U) },
		{ EGameplayEffectDurationType_StaticEnum, TEXT("EGameplayEffectDurationType"), &Z_Registration_Info_UEnum_EGameplayEffectDurationType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1411854851U) },
		{ EGameplayEffectStackingDurationPolicy_StaticEnum, TEXT("EGameplayEffectStackingDurationPolicy"), &Z_Registration_Info_UEnum_EGameplayEffectStackingDurationPolicy, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3635981480U) },
		{ EGameplayEffectStackingPeriodPolicy_StaticEnum, TEXT("EGameplayEffectStackingPeriodPolicy"), &Z_Registration_Info_UEnum_EGameplayEffectStackingPeriodPolicy, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 200505531U) },
		{ EGameplayEffectStackingExpirationPolicy_StaticEnum, TEXT("EGameplayEffectStackingExpirationPolicy"), &Z_Registration_Info_UEnum_EGameplayEffectStackingExpirationPolicy, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 849115002U) },
		{ EGameplayEffectPeriodInhibitionRemovedPolicy_StaticEnum, TEXT("EGameplayEffectPeriodInhibitionRemovedPolicy"), &Z_Registration_Info_UEnum_EGameplayEffectPeriodInhibitionRemovedPolicy, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 142386991U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAttributeBasedFloat::StaticStruct, Z_Construct_UScriptStruct_FAttributeBasedFloat_Statics::NewStructOps, TEXT("AttributeBasedFloat"), &Z_Registration_Info_UScriptStruct_AttributeBasedFloat, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAttributeBasedFloat), 497558089U) },
		{ FCustomCalculationBasedFloat::StaticStruct, Z_Construct_UScriptStruct_FCustomCalculationBasedFloat_Statics::NewStructOps, TEXT("CustomCalculationBasedFloat"), &Z_Registration_Info_UScriptStruct_CustomCalculationBasedFloat, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCustomCalculationBasedFloat), 3169754592U) },
		{ FSetByCallerFloat::StaticStruct, Z_Construct_UScriptStruct_FSetByCallerFloat_Statics::NewStructOps, TEXT("SetByCallerFloat"), &Z_Registration_Info_UScriptStruct_SetByCallerFloat, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSetByCallerFloat), 3464839154U) },
		{ FGameplayEffectModifierMagnitude::StaticStruct, Z_Construct_UScriptStruct_FGameplayEffectModifierMagnitude_Statics::NewStructOps, TEXT("GameplayEffectModifierMagnitude"), &Z_Registration_Info_UScriptStruct_GameplayEffectModifierMagnitude, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayEffectModifierMagnitude), 190918390U) },
		{ FGameplayEffectExecutionScopedModifierInfo::StaticStruct, Z_Construct_UScriptStruct_FGameplayEffectExecutionScopedModifierInfo_Statics::NewStructOps, TEXT("GameplayEffectExecutionScopedModifierInfo"), &Z_Registration_Info_UScriptStruct_GameplayEffectExecutionScopedModifierInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayEffectExecutionScopedModifierInfo), 2865242200U) },
		{ FConditionalGameplayEffect::StaticStruct, Z_Construct_UScriptStruct_FConditionalGameplayEffect_Statics::NewStructOps, TEXT("ConditionalGameplayEffect"), &Z_Registration_Info_UScriptStruct_ConditionalGameplayEffect, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConditionalGameplayEffect), 3840225737U) },
		{ FGameplayEffectExecutionDefinition::StaticStruct, Z_Construct_UScriptStruct_FGameplayEffectExecutionDefinition_Statics::NewStructOps, TEXT("GameplayEffectExecutionDefinition"), &Z_Registration_Info_UScriptStruct_GameplayEffectExecutionDefinition, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayEffectExecutionDefinition), 1515760101U) },
		{ FGameplayModifierInfo::StaticStruct, Z_Construct_UScriptStruct_FGameplayModifierInfo_Statics::NewStructOps, TEXT("GameplayModifierInfo"), &Z_Registration_Info_UScriptStruct_GameplayModifierInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayModifierInfo), 2589202395U) },
		{ FGameplayEffectCue::StaticStruct, Z_Construct_UScriptStruct_FGameplayEffectCue_Statics::NewStructOps, TEXT("GameplayEffectCue"), &Z_Registration_Info_UScriptStruct_GameplayEffectCue, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayEffectCue), 1694034339U) },
		{ FInheritedTagContainer::StaticStruct, Z_Construct_UScriptStruct_FInheritedTagContainer_Statics::NewStructOps, TEXT("InheritedTagContainer"), &Z_Registration_Info_UScriptStruct_InheritedTagContainer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInheritedTagContainer), 716965641U) },
		{ FModifierSpec::StaticStruct, Z_Construct_UScriptStruct_FModifierSpec_Statics::NewStructOps, TEXT("ModifierSpec"), &Z_Registration_Info_UScriptStruct_ModifierSpec, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FModifierSpec), 2184666049U) },
		{ FGameplayEffectModifiedAttribute::StaticStruct, Z_Construct_UScriptStruct_FGameplayEffectModifiedAttribute_Statics::NewStructOps, TEXT("GameplayEffectModifiedAttribute"), &Z_Registration_Info_UScriptStruct_GameplayEffectModifiedAttribute, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayEffectModifiedAttribute), 2965729191U) },
		{ FGameplayEffectAttributeCaptureSpec::StaticStruct, Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureSpec_Statics::NewStructOps, TEXT("GameplayEffectAttributeCaptureSpec"), &Z_Registration_Info_UScriptStruct_GameplayEffectAttributeCaptureSpec, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayEffectAttributeCaptureSpec), 801865939U) },
		{ FGameplayEffectAttributeCaptureSpecContainer::StaticStruct, Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureSpecContainer_Statics::NewStructOps, TEXT("GameplayEffectAttributeCaptureSpecContainer"), &Z_Registration_Info_UScriptStruct_GameplayEffectAttributeCaptureSpecContainer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayEffectAttributeCaptureSpecContainer), 1187267187U) },
		{ FGameplayEffectSpec::StaticStruct, Z_Construct_UScriptStruct_FGameplayEffectSpec_Statics::NewStructOps, TEXT("GameplayEffectSpec"), &Z_Registration_Info_UScriptStruct_GameplayEffectSpec, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayEffectSpec), 272371351U) },
		{ FGameplayEffectSpecForRPC::StaticStruct, Z_Construct_UScriptStruct_FGameplayEffectSpecForRPC_Statics::NewStructOps, TEXT("GameplayEffectSpecForRPC"), &Z_Registration_Info_UScriptStruct_GameplayEffectSpecForRPC, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayEffectSpecForRPC), 1569145257U) },
		{ FActiveGameplayEffect::StaticStruct, Z_Construct_UScriptStruct_FActiveGameplayEffect_Statics::NewStructOps, TEXT("ActiveGameplayEffect"), &Z_Registration_Info_UScriptStruct_ActiveGameplayEffect, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FActiveGameplayEffect), 986250908U) },
		{ FGameplayEffectQuery::StaticStruct, Z_Construct_UScriptStruct_FGameplayEffectQuery_Statics::NewStructOps, TEXT("GameplayEffectQuery"), &Z_Registration_Info_UScriptStruct_GameplayEffectQuery, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayEffectQuery), 2456179291U) },
		{ FActiveGameplayEffectQuery::StaticStruct, Z_Construct_UScriptStruct_FActiveGameplayEffectQuery_Statics::NewStructOps, TEXT("ActiveGameplayEffectQuery"), &Z_Registration_Info_UScriptStruct_ActiveGameplayEffectQuery, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FActiveGameplayEffectQuery), 707982749U) },
		{ FActiveGameplayEffectsContainer::StaticStruct, Z_Construct_UScriptStruct_FActiveGameplayEffectsContainer_Statics::NewStructOps, TEXT("ActiveGameplayEffectsContainer"), &Z_Registration_Info_UScriptStruct_ActiveGameplayEffectsContainer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FActiveGameplayEffectsContainer), 565855026U) },
		{ FGameplayEffectVersion::StaticStruct, Z_Construct_UScriptStruct_FGameplayEffectVersion_Statics::NewStructOps, TEXT("GameplayEffectVersion"), &Z_Registration_Info_UScriptStruct_GameplayEffectVersion, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayEffectVersion), 2374050630U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGameplayEffect, UGameplayEffect::StaticClass, TEXT("UGameplayEffect"), &Z_Registration_Info_UClass_UGameplayEffect, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameplayEffect), 3422959882U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayEffect_h_171825953(TEXT("/Script/GameplayAbilities"),
	Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayEffect_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayEffect_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayEffect_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayEffect_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayEffect_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayEffect_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
