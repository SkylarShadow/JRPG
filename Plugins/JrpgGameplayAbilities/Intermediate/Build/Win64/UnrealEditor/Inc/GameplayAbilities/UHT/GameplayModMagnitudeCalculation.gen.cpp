// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayAbilities/Public/GameplayModMagnitudeCalculation.h"
#include "GameplayAbilities/Public/AttributeSet.h"
#include "GameplayAbilities/Public/GameplayEffect.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayModMagnitudeCalculation() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffectCalculation();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayModMagnitudeCalculation();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayModMagnitudeCalculation_NoRegister();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttribute();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectSpec();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
UPackage* Z_Construct_UPackage__Script_GameplayAbilities();
// End Cross Module References

// Begin Class UGameplayModMagnitudeCalculation Function CalculateBaseMagnitude
struct GameplayModMagnitudeCalculation_eventCalculateBaseMagnitude_Parms
{
	FGameplayEffectSpec Spec;
	float ReturnValue;

	/** Constructor, initializes return property only **/
	GameplayModMagnitudeCalculation_eventCalculateBaseMagnitude_Parms()
		: ReturnValue(0)
	{
	}
};
static FName NAME_UGameplayModMagnitudeCalculation_CalculateBaseMagnitude = FName(TEXT("CalculateBaseMagnitude"));
float UGameplayModMagnitudeCalculation::CalculateBaseMagnitude(FGameplayEffectSpec const& Spec) const
{
	GameplayModMagnitudeCalculation_eventCalculateBaseMagnitude_Parms Parms;
	Parms.Spec=Spec;
	const_cast<UGameplayModMagnitudeCalculation*>(this)->ProcessEvent(FindFunctionChecked(NAME_UGameplayModMagnitudeCalculation_CalculateBaseMagnitude),&Parms);
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UGameplayModMagnitudeCalculation_CalculateBaseMagnitude_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Calculation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Calculate the base magnitude of the gameplay effect modifier, given the specified spec. Note that the owning spec def can still modify this base value\n\x09 * with a coeffecient and pre/post multiply adds. see FCustomCalculationBasedFloat::CalculateMagnitude for details.\n\x09 * \n\x09 * @param Spec\x09Gameplay effect spec to use to calculate the magnitude with\n\x09 * \n\x09 * @return Computed magnitude of the modifier\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayModMagnitudeCalculation.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Calculate the base magnitude of the gameplay effect modifier, given the specified spec. Note that the owning spec def can still modify this base value\nwith a coeffecient and pre/post multiply adds. see FCustomCalculationBasedFloat::CalculateMagnitude for details.\n\n@param Spec  Gameplay effect spec to use to calculate the magnitude with\n\n@return Computed magnitude of the modifier" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Spec_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Spec;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayModMagnitudeCalculation_CalculateBaseMagnitude_Statics::NewProp_Spec = { "Spec", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayModMagnitudeCalculation_eventCalculateBaseMagnitude_Parms, Spec), Z_Construct_UScriptStruct_FGameplayEffectSpec, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Spec_MetaData), NewProp_Spec_MetaData) }; // 272371351
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameplayModMagnitudeCalculation_CalculateBaseMagnitude_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayModMagnitudeCalculation_eventCalculateBaseMagnitude_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayModMagnitudeCalculation_CalculateBaseMagnitude_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayModMagnitudeCalculation_CalculateBaseMagnitude_Statics::NewProp_Spec,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayModMagnitudeCalculation_CalculateBaseMagnitude_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayModMagnitudeCalculation_CalculateBaseMagnitude_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayModMagnitudeCalculation_CalculateBaseMagnitude_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayModMagnitudeCalculation, nullptr, "CalculateBaseMagnitude", nullptr, nullptr, Z_Construct_UFunction_UGameplayModMagnitudeCalculation_CalculateBaseMagnitude_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayModMagnitudeCalculation_CalculateBaseMagnitude_Statics::PropPointers), sizeof(GameplayModMagnitudeCalculation_eventCalculateBaseMagnitude_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayModMagnitudeCalculation_CalculateBaseMagnitude_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameplayModMagnitudeCalculation_CalculateBaseMagnitude_Statics::Function_MetaDataParams) };
static_assert(sizeof(GameplayModMagnitudeCalculation_eventCalculateBaseMagnitude_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGameplayModMagnitudeCalculation_CalculateBaseMagnitude()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayModMagnitudeCalculation_CalculateBaseMagnitude_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGameplayModMagnitudeCalculation::execCalculateBaseMagnitude)
{
	P_GET_STRUCT_REF(FGameplayEffectSpec,Z_Param_Out_Spec);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->CalculateBaseMagnitude_Implementation(Z_Param_Out_Spec);
	P_NATIVE_END;
}
// End Class UGameplayModMagnitudeCalculation Function CalculateBaseMagnitude

// Begin Class UGameplayModMagnitudeCalculation Function GetSetByCallerMagnitudeByName
struct Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSetByCallerMagnitudeByName_Statics
{
	struct GameplayModMagnitudeCalculation_eventGetSetByCallerMagnitudeByName_Parms
	{
		FGameplayEffectSpec EffectSpec;
		FName MagnitudeName;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ability|GameplayEffect" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Extracts the Set by Caller Magnitude from a Gameplay Effect Spec\n\x09 *\n\x09 * @param EffectSpec The Gameplay Effect Spec to get the info from\n\x09 * @param MagnitudeName The effect name to query\n\x09 * \n\x09 * @return The magnitude value if found, zero otherwise\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayModMagnitudeCalculation.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Extracts the Set by Caller Magnitude from a Gameplay Effect Spec\n\n@param EffectSpec The Gameplay Effect Spec to get the info from\n@param MagnitudeName The effect name to query\n\n@return The magnitude value if found, zero otherwise" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EffectSpec_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MagnitudeName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_EffectSpec;
	static const UECodeGen_Private::FNamePropertyParams NewProp_MagnitudeName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSetByCallerMagnitudeByName_Statics::NewProp_EffectSpec = { "EffectSpec", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayModMagnitudeCalculation_eventGetSetByCallerMagnitudeByName_Parms, EffectSpec), Z_Construct_UScriptStruct_FGameplayEffectSpec, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EffectSpec_MetaData), NewProp_EffectSpec_MetaData) }; // 272371351
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSetByCallerMagnitudeByName_Statics::NewProp_MagnitudeName = { "MagnitudeName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayModMagnitudeCalculation_eventGetSetByCallerMagnitudeByName_Parms, MagnitudeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MagnitudeName_MetaData), NewProp_MagnitudeName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSetByCallerMagnitudeByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayModMagnitudeCalculation_eventGetSetByCallerMagnitudeByName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSetByCallerMagnitudeByName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSetByCallerMagnitudeByName_Statics::NewProp_EffectSpec,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSetByCallerMagnitudeByName_Statics::NewProp_MagnitudeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSetByCallerMagnitudeByName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSetByCallerMagnitudeByName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSetByCallerMagnitudeByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayModMagnitudeCalculation, nullptr, "GetSetByCallerMagnitudeByName", nullptr, nullptr, Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSetByCallerMagnitudeByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSetByCallerMagnitudeByName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSetByCallerMagnitudeByName_Statics::GameplayModMagnitudeCalculation_eventGetSetByCallerMagnitudeByName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSetByCallerMagnitudeByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSetByCallerMagnitudeByName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSetByCallerMagnitudeByName_Statics::GameplayModMagnitudeCalculation_eventGetSetByCallerMagnitudeByName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSetByCallerMagnitudeByName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSetByCallerMagnitudeByName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGameplayModMagnitudeCalculation::execGetSetByCallerMagnitudeByName)
{
	P_GET_STRUCT_REF(FGameplayEffectSpec,Z_Param_Out_EffectSpec);
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_MagnitudeName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetSetByCallerMagnitudeByName(Z_Param_Out_EffectSpec,Z_Param_Out_MagnitudeName);
	P_NATIVE_END;
}
// End Class UGameplayModMagnitudeCalculation Function GetSetByCallerMagnitudeByName

// Begin Class UGameplayModMagnitudeCalculation Function GetSetByCallerMagnitudeByTag
struct Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSetByCallerMagnitudeByTag_Statics
{
	struct GameplayModMagnitudeCalculation_eventGetSetByCallerMagnitudeByTag_Parms
	{
		FGameplayEffectSpec EffectSpec;
		FGameplayTag Tag;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ability|GameplayEffect" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Extracts the Set by Caller Magnitude from a Gameplay Effect Spec\n\x09 *\n\x09 * @param EffectSpec The Gameplay Effect Spec to get the info from\n\x09 * @param Tag The effect tag to query\n\x09 * \n\x09 * @return The magnitude value if found, zero otherwise\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayModMagnitudeCalculation.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Extracts the Set by Caller Magnitude from a Gameplay Effect Spec\n\n@param EffectSpec The Gameplay Effect Spec to get the info from\n@param Tag The effect tag to query\n\n@return The magnitude value if found, zero otherwise" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EffectSpec_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_EffectSpec;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSetByCallerMagnitudeByTag_Statics::NewProp_EffectSpec = { "EffectSpec", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayModMagnitudeCalculation_eventGetSetByCallerMagnitudeByTag_Parms, EffectSpec), Z_Construct_UScriptStruct_FGameplayEffectSpec, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EffectSpec_MetaData), NewProp_EffectSpec_MetaData) }; // 272371351
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSetByCallerMagnitudeByTag_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayModMagnitudeCalculation_eventGetSetByCallerMagnitudeByTag_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tag_MetaData), NewProp_Tag_MetaData) }; // 1298103297
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSetByCallerMagnitudeByTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayModMagnitudeCalculation_eventGetSetByCallerMagnitudeByTag_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSetByCallerMagnitudeByTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSetByCallerMagnitudeByTag_Statics::NewProp_EffectSpec,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSetByCallerMagnitudeByTag_Statics::NewProp_Tag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSetByCallerMagnitudeByTag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSetByCallerMagnitudeByTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSetByCallerMagnitudeByTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayModMagnitudeCalculation, nullptr, "GetSetByCallerMagnitudeByTag", nullptr, nullptr, Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSetByCallerMagnitudeByTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSetByCallerMagnitudeByTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSetByCallerMagnitudeByTag_Statics::GameplayModMagnitudeCalculation_eventGetSetByCallerMagnitudeByTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSetByCallerMagnitudeByTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSetByCallerMagnitudeByTag_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSetByCallerMagnitudeByTag_Statics::GameplayModMagnitudeCalculation_eventGetSetByCallerMagnitudeByTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSetByCallerMagnitudeByTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSetByCallerMagnitudeByTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGameplayModMagnitudeCalculation::execGetSetByCallerMagnitudeByTag)
{
	P_GET_STRUCT_REF(FGameplayEffectSpec,Z_Param_Out_EffectSpec);
	P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_Tag);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetSetByCallerMagnitudeByTag(Z_Param_Out_EffectSpec,Z_Param_Out_Tag);
	P_NATIVE_END;
}
// End Class UGameplayModMagnitudeCalculation Function GetSetByCallerMagnitudeByTag

// Begin Class UGameplayModMagnitudeCalculation Function GetSourceActorTags
struct Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSourceActorTags_Statics
{
	struct GameplayModMagnitudeCalculation_eventGetSourceActorTags_Parms
	{
		FGameplayEffectSpec EffectSpec;
		FGameplayTagContainer ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ability|GameplayEffect" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Returns the source actor tags from a Gameplay Effect Spec\n\x09 *\n\x09 * @param EffectSpec The Gameplay Effect Spec to get the info from\n\x09 * \n\x09 * @return Gameplay Tag Container with the copied tags. The container will be empty if no captured source tags exist.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayModMagnitudeCalculation.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the source actor tags from a Gameplay Effect Spec\n\n@param EffectSpec The Gameplay Effect Spec to get the info from\n\n@return Gameplay Tag Container with the copied tags. The container will be empty if no captured source tags exist." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EffectSpec_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_EffectSpec;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSourceActorTags_Statics::NewProp_EffectSpec = { "EffectSpec", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayModMagnitudeCalculation_eventGetSourceActorTags_Parms, EffectSpec), Z_Construct_UScriptStruct_FGameplayEffectSpec, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EffectSpec_MetaData), NewProp_EffectSpec_MetaData) }; // 272371351
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSourceActorTags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayModMagnitudeCalculation_eventGetSourceActorTags_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSourceActorTags_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSourceActorTags_Statics::NewProp_EffectSpec,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSourceActorTags_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSourceActorTags_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSourceActorTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayModMagnitudeCalculation, nullptr, "GetSourceActorTags", nullptr, nullptr, Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSourceActorTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSourceActorTags_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSourceActorTags_Statics::GameplayModMagnitudeCalculation_eventGetSourceActorTags_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSourceActorTags_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSourceActorTags_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSourceActorTags_Statics::GameplayModMagnitudeCalculation_eventGetSourceActorTags_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSourceActorTags()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSourceActorTags_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGameplayModMagnitudeCalculation::execGetSourceActorTags)
{
	P_GET_STRUCT_REF(FGameplayEffectSpec,Z_Param_Out_EffectSpec);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FGameplayTagContainer*)Z_Param__Result=P_THIS->GetSourceActorTags(Z_Param_Out_EffectSpec);
	P_NATIVE_END;
}
// End Class UGameplayModMagnitudeCalculation Function GetSourceActorTags

// Begin Class UGameplayModMagnitudeCalculation Function GetSourceAggregatedTags
struct Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSourceAggregatedTags_Statics
{
	struct GameplayModMagnitudeCalculation_eventGetSourceAggregatedTags_Parms
	{
		FGameplayEffectSpec EffectSpec;
		FGameplayTagContainer ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ability|GameplayEffect" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Copies and returns the source aggregated tags from a Gameplay Effect Spec\n\x09 *\n\x09 * @param EffectSpec The Gameplay Effect Spec to get the info from\n\x09 * \n\x09 * @return Gameplay Tag Container with the copied tags. The container will be empty if no captured source tags exist.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayModMagnitudeCalculation.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Copies and returns the source aggregated tags from a Gameplay Effect Spec\n\n@param EffectSpec The Gameplay Effect Spec to get the info from\n\n@return Gameplay Tag Container with the copied tags. The container will be empty if no captured source tags exist." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EffectSpec_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_EffectSpec;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSourceAggregatedTags_Statics::NewProp_EffectSpec = { "EffectSpec", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayModMagnitudeCalculation_eventGetSourceAggregatedTags_Parms, EffectSpec), Z_Construct_UScriptStruct_FGameplayEffectSpec, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EffectSpec_MetaData), NewProp_EffectSpec_MetaData) }; // 272371351
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSourceAggregatedTags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayModMagnitudeCalculation_eventGetSourceAggregatedTags_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(0, nullptr) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSourceAggregatedTags_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSourceAggregatedTags_Statics::NewProp_EffectSpec,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSourceAggregatedTags_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSourceAggregatedTags_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSourceAggregatedTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayModMagnitudeCalculation, nullptr, "GetSourceAggregatedTags", nullptr, nullptr, Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSourceAggregatedTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSourceAggregatedTags_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSourceAggregatedTags_Statics::GameplayModMagnitudeCalculation_eventGetSourceAggregatedTags_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSourceAggregatedTags_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSourceAggregatedTags_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSourceAggregatedTags_Statics::GameplayModMagnitudeCalculation_eventGetSourceAggregatedTags_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSourceAggregatedTags()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSourceAggregatedTags_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGameplayModMagnitudeCalculation::execGetSourceAggregatedTags)
{
	P_GET_STRUCT_REF(FGameplayEffectSpec,Z_Param_Out_EffectSpec);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FGameplayTagContainer*)Z_Param__Result=P_THIS->GetSourceAggregatedTags(Z_Param_Out_EffectSpec);
	P_NATIVE_END;
}
// End Class UGameplayModMagnitudeCalculation Function GetSourceAggregatedTags

// Begin Class UGameplayModMagnitudeCalculation Function GetSourceSpecTags
struct Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSourceSpecTags_Statics
{
	struct GameplayModMagnitudeCalculation_eventGetSourceSpecTags_Parms
	{
		FGameplayEffectSpec EffectSpec;
		FGameplayTagContainer ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ability|GameplayEffect" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Returns the source spec tags from a Gameplay Effect Spec\n\x09 *\n\x09 * @param EffectSpec The Gameplay Effect Spec to get the info from\n\x09 * \n\x09 * @return Gameplay Tag Container with the copied tags. The container will be empty if no captured source tags exist.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayModMagnitudeCalculation.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the source spec tags from a Gameplay Effect Spec\n\n@param EffectSpec The Gameplay Effect Spec to get the info from\n\n@return Gameplay Tag Container with the copied tags. The container will be empty if no captured source tags exist." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EffectSpec_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_EffectSpec;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSourceSpecTags_Statics::NewProp_EffectSpec = { "EffectSpec", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayModMagnitudeCalculation_eventGetSourceSpecTags_Parms, EffectSpec), Z_Construct_UScriptStruct_FGameplayEffectSpec, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EffectSpec_MetaData), NewProp_EffectSpec_MetaData) }; // 272371351
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSourceSpecTags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayModMagnitudeCalculation_eventGetSourceSpecTags_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSourceSpecTags_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSourceSpecTags_Statics::NewProp_EffectSpec,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSourceSpecTags_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSourceSpecTags_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSourceSpecTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayModMagnitudeCalculation, nullptr, "GetSourceSpecTags", nullptr, nullptr, Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSourceSpecTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSourceSpecTags_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSourceSpecTags_Statics::GameplayModMagnitudeCalculation_eventGetSourceSpecTags_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSourceSpecTags_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSourceSpecTags_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSourceSpecTags_Statics::GameplayModMagnitudeCalculation_eventGetSourceSpecTags_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSourceSpecTags()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSourceSpecTags_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGameplayModMagnitudeCalculation::execGetSourceSpecTags)
{
	P_GET_STRUCT_REF(FGameplayEffectSpec,Z_Param_Out_EffectSpec);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FGameplayTagContainer*)Z_Param__Result=P_THIS->GetSourceSpecTags(Z_Param_Out_EffectSpec);
	P_NATIVE_END;
}
// End Class UGameplayModMagnitudeCalculation Function GetSourceSpecTags

// Begin Class UGameplayModMagnitudeCalculation Function GetTargetActorTags
struct Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetTargetActorTags_Statics
{
	struct GameplayModMagnitudeCalculation_eventGetTargetActorTags_Parms
	{
		FGameplayEffectSpec EffectSpec;
		FGameplayTagContainer ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ability|GameplayEffect" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Returns the target actor tags from a Gameplay Effect Spec\n\x09 * Useful for Modifier Magnitude Calculations\n\x09 *\n\x09 * @param EffectSpec The Gameplay Effect Spec to get the info from\n\x09 * \n\x09 * @return Gameplay Tag Container with the copied tags. The container will be empty if no captured source tags exist.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayModMagnitudeCalculation.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the target actor tags from a Gameplay Effect Spec\nUseful for Modifier Magnitude Calculations\n\n@param EffectSpec The Gameplay Effect Spec to get the info from\n\n@return Gameplay Tag Container with the copied tags. The container will be empty if no captured source tags exist." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EffectSpec_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_EffectSpec;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetTargetActorTags_Statics::NewProp_EffectSpec = { "EffectSpec", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayModMagnitudeCalculation_eventGetTargetActorTags_Parms, EffectSpec), Z_Construct_UScriptStruct_FGameplayEffectSpec, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EffectSpec_MetaData), NewProp_EffectSpec_MetaData) }; // 272371351
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetTargetActorTags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayModMagnitudeCalculation_eventGetTargetActorTags_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetTargetActorTags_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetTargetActorTags_Statics::NewProp_EffectSpec,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetTargetActorTags_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetTargetActorTags_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetTargetActorTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayModMagnitudeCalculation, nullptr, "GetTargetActorTags", nullptr, nullptr, Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetTargetActorTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetTargetActorTags_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetTargetActorTags_Statics::GameplayModMagnitudeCalculation_eventGetTargetActorTags_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetTargetActorTags_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetTargetActorTags_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetTargetActorTags_Statics::GameplayModMagnitudeCalculation_eventGetTargetActorTags_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetTargetActorTags()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetTargetActorTags_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGameplayModMagnitudeCalculation::execGetTargetActorTags)
{
	P_GET_STRUCT_REF(FGameplayEffectSpec,Z_Param_Out_EffectSpec);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FGameplayTagContainer*)Z_Param__Result=P_THIS->GetTargetActorTags(Z_Param_Out_EffectSpec);
	P_NATIVE_END;
}
// End Class UGameplayModMagnitudeCalculation Function GetTargetActorTags

// Begin Class UGameplayModMagnitudeCalculation Function GetTargetAggregatedTags
struct Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetTargetAggregatedTags_Statics
{
	struct GameplayModMagnitudeCalculation_eventGetTargetAggregatedTags_Parms
	{
		FGameplayEffectSpec EffectSpec;
		FGameplayTagContainer ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ability|GameplayEffect" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Copies and returns the target aggregated tags from a Gameplay Effect Spec\n\x09 *\n\x09 * @param EffectSpec The Gameplay Effect Spec to get the info from\n\x09 * \n\x09 * @return Gameplay Tag Container with the copied tags. The container will be empty if no captured source tags exist.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayModMagnitudeCalculation.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Copies and returns the target aggregated tags from a Gameplay Effect Spec\n\n@param EffectSpec The Gameplay Effect Spec to get the info from\n\n@return Gameplay Tag Container with the copied tags. The container will be empty if no captured source tags exist." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EffectSpec_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_EffectSpec;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetTargetAggregatedTags_Statics::NewProp_EffectSpec = { "EffectSpec", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayModMagnitudeCalculation_eventGetTargetAggregatedTags_Parms, EffectSpec), Z_Construct_UScriptStruct_FGameplayEffectSpec, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EffectSpec_MetaData), NewProp_EffectSpec_MetaData) }; // 272371351
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetTargetAggregatedTags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayModMagnitudeCalculation_eventGetTargetAggregatedTags_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(0, nullptr) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetTargetAggregatedTags_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetTargetAggregatedTags_Statics::NewProp_EffectSpec,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetTargetAggregatedTags_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetTargetAggregatedTags_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetTargetAggregatedTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayModMagnitudeCalculation, nullptr, "GetTargetAggregatedTags", nullptr, nullptr, Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetTargetAggregatedTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetTargetAggregatedTags_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetTargetAggregatedTags_Statics::GameplayModMagnitudeCalculation_eventGetTargetAggregatedTags_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetTargetAggregatedTags_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetTargetAggregatedTags_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetTargetAggregatedTags_Statics::GameplayModMagnitudeCalculation_eventGetTargetAggregatedTags_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetTargetAggregatedTags()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetTargetAggregatedTags_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGameplayModMagnitudeCalculation::execGetTargetAggregatedTags)
{
	P_GET_STRUCT_REF(FGameplayEffectSpec,Z_Param_Out_EffectSpec);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FGameplayTagContainer*)Z_Param__Result=P_THIS->GetTargetAggregatedTags(Z_Param_Out_EffectSpec);
	P_NATIVE_END;
}
// End Class UGameplayModMagnitudeCalculation Function GetTargetAggregatedTags

// Begin Class UGameplayModMagnitudeCalculation Function GetTargetSpecTags
struct Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetTargetSpecTags_Statics
{
	struct GameplayModMagnitudeCalculation_eventGetTargetSpecTags_Parms
	{
		FGameplayEffectSpec EffectSpec;
		FGameplayTagContainer ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ability|GameplayEffect" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Returns the target spec tags from a Gameplay Effect Spec\n\x09 * Useful for Modifier Magnitude Calculations\n\x09 *\n\x09 * @param EffectSpec The Gameplay Effect Spec to get the info from\n\x09 * \n\x09 * @return Gameplay Tag Container with the copied tags. The container will be empty if no captured source tags exist.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayModMagnitudeCalculation.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the target spec tags from a Gameplay Effect Spec\nUseful for Modifier Magnitude Calculations\n\n@param EffectSpec The Gameplay Effect Spec to get the info from\n\n@return Gameplay Tag Container with the copied tags. The container will be empty if no captured source tags exist." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EffectSpec_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_EffectSpec;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetTargetSpecTags_Statics::NewProp_EffectSpec = { "EffectSpec", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayModMagnitudeCalculation_eventGetTargetSpecTags_Parms, EffectSpec), Z_Construct_UScriptStruct_FGameplayEffectSpec, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EffectSpec_MetaData), NewProp_EffectSpec_MetaData) }; // 272371351
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetTargetSpecTags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayModMagnitudeCalculation_eventGetTargetSpecTags_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetTargetSpecTags_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetTargetSpecTags_Statics::NewProp_EffectSpec,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetTargetSpecTags_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetTargetSpecTags_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetTargetSpecTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayModMagnitudeCalculation, nullptr, "GetTargetSpecTags", nullptr, nullptr, Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetTargetSpecTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetTargetSpecTags_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetTargetSpecTags_Statics::GameplayModMagnitudeCalculation_eventGetTargetSpecTags_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetTargetSpecTags_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetTargetSpecTags_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetTargetSpecTags_Statics::GameplayModMagnitudeCalculation_eventGetTargetSpecTags_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetTargetSpecTags()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetTargetSpecTags_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGameplayModMagnitudeCalculation::execGetTargetSpecTags)
{
	P_GET_STRUCT_REF(FGameplayEffectSpec,Z_Param_Out_EffectSpec);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FGameplayTagContainer*)Z_Param__Result=P_THIS->GetTargetSpecTags(Z_Param_Out_EffectSpec);
	P_NATIVE_END;
}
// End Class UGameplayModMagnitudeCalculation Function GetTargetSpecTags

// Begin Class UGameplayModMagnitudeCalculation Function K2_GetCapturedAttributeMagnitude
struct Z_Construct_UFunction_UGameplayModMagnitudeCalculation_K2_GetCapturedAttributeMagnitude_Statics
{
	struct GameplayModMagnitudeCalculation_eventK2_GetCapturedAttributeMagnitude_Parms
	{
		FGameplayEffectSpec EffectSpec;
		FGameplayAttribute Attribute;
		FGameplayTagContainer SourceTags;
		FGameplayTagContainer TargetTags;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ability|GameplayEffect" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets the captured magnitude value for the given Attribute\n\x09 * For this to work correctly, the Attribute needs to be added to the Relevant Attributes to Capture array\n\x09 *\n\x09 * @param EffectSpec The Gameplay Effect Spec to get the info from\n\x09 * @param Attribute The attribute to query\n\x09 *\n\x09 * @return The magnitude value if found, zero otherwise\n\x09 */" },
#endif
		{ "DisplayName", "Get Captured Attribute Magnitude" },
		{ "ModuleRelativePath", "Public/GameplayModMagnitudeCalculation.h" },
		{ "ScriptName", "GetCapturedAttributeMagnitude" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the captured magnitude value for the given Attribute\nFor this to work correctly, the Attribute needs to be added to the Relevant Attributes to Capture array\n\n@param EffectSpec The Gameplay Effect Spec to get the info from\n@param Attribute The attribute to query\n\n@return The magnitude value if found, zero otherwise" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EffectSpec_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceTags_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetTags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_EffectSpec;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Attribute;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SourceTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetTags;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayModMagnitudeCalculation_K2_GetCapturedAttributeMagnitude_Statics::NewProp_EffectSpec = { "EffectSpec", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayModMagnitudeCalculation_eventK2_GetCapturedAttributeMagnitude_Parms, EffectSpec), Z_Construct_UScriptStruct_FGameplayEffectSpec, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EffectSpec_MetaData), NewProp_EffectSpec_MetaData) }; // 272371351
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayModMagnitudeCalculation_K2_GetCapturedAttributeMagnitude_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayModMagnitudeCalculation_eventK2_GetCapturedAttributeMagnitude_Parms, Attribute), Z_Construct_UScriptStruct_FGameplayAttribute, METADATA_PARAMS(0, nullptr) }; // 884374022
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayModMagnitudeCalculation_K2_GetCapturedAttributeMagnitude_Statics::NewProp_SourceTags = { "SourceTags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayModMagnitudeCalculation_eventK2_GetCapturedAttributeMagnitude_Parms, SourceTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceTags_MetaData), NewProp_SourceTags_MetaData) }; // 3352185621
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayModMagnitudeCalculation_K2_GetCapturedAttributeMagnitude_Statics::NewProp_TargetTags = { "TargetTags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayModMagnitudeCalculation_eventK2_GetCapturedAttributeMagnitude_Parms, TargetTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetTags_MetaData), NewProp_TargetTags_MetaData) }; // 3352185621
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameplayModMagnitudeCalculation_K2_GetCapturedAttributeMagnitude_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayModMagnitudeCalculation_eventK2_GetCapturedAttributeMagnitude_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayModMagnitudeCalculation_K2_GetCapturedAttributeMagnitude_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayModMagnitudeCalculation_K2_GetCapturedAttributeMagnitude_Statics::NewProp_EffectSpec,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayModMagnitudeCalculation_K2_GetCapturedAttributeMagnitude_Statics::NewProp_Attribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayModMagnitudeCalculation_K2_GetCapturedAttributeMagnitude_Statics::NewProp_SourceTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayModMagnitudeCalculation_K2_GetCapturedAttributeMagnitude_Statics::NewProp_TargetTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayModMagnitudeCalculation_K2_GetCapturedAttributeMagnitude_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayModMagnitudeCalculation_K2_GetCapturedAttributeMagnitude_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayModMagnitudeCalculation_K2_GetCapturedAttributeMagnitude_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayModMagnitudeCalculation, nullptr, "K2_GetCapturedAttributeMagnitude", nullptr, nullptr, Z_Construct_UFunction_UGameplayModMagnitudeCalculation_K2_GetCapturedAttributeMagnitude_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayModMagnitudeCalculation_K2_GetCapturedAttributeMagnitude_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGameplayModMagnitudeCalculation_K2_GetCapturedAttributeMagnitude_Statics::GameplayModMagnitudeCalculation_eventK2_GetCapturedAttributeMagnitude_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayModMagnitudeCalculation_K2_GetCapturedAttributeMagnitude_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameplayModMagnitudeCalculation_K2_GetCapturedAttributeMagnitude_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGameplayModMagnitudeCalculation_K2_GetCapturedAttributeMagnitude_Statics::GameplayModMagnitudeCalculation_eventK2_GetCapturedAttributeMagnitude_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGameplayModMagnitudeCalculation_K2_GetCapturedAttributeMagnitude()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayModMagnitudeCalculation_K2_GetCapturedAttributeMagnitude_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGameplayModMagnitudeCalculation::execK2_GetCapturedAttributeMagnitude)
{
	P_GET_STRUCT_REF(FGameplayEffectSpec,Z_Param_Out_EffectSpec);
	P_GET_STRUCT(FGameplayAttribute,Z_Param_Attribute);
	P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_SourceTags);
	P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_TargetTags);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->K2_GetCapturedAttributeMagnitude(Z_Param_Out_EffectSpec,Z_Param_Attribute,Z_Param_Out_SourceTags,Z_Param_Out_TargetTags);
	P_NATIVE_END;
}
// End Class UGameplayModMagnitudeCalculation Function K2_GetCapturedAttributeMagnitude

// Begin Class UGameplayModMagnitudeCalculation
void UGameplayModMagnitudeCalculation::StaticRegisterNativesUGameplayModMagnitudeCalculation()
{
	UClass* Class = UGameplayModMagnitudeCalculation::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CalculateBaseMagnitude", &UGameplayModMagnitudeCalculation::execCalculateBaseMagnitude },
		{ "GetSetByCallerMagnitudeByName", &UGameplayModMagnitudeCalculation::execGetSetByCallerMagnitudeByName },
		{ "GetSetByCallerMagnitudeByTag", &UGameplayModMagnitudeCalculation::execGetSetByCallerMagnitudeByTag },
		{ "GetSourceActorTags", &UGameplayModMagnitudeCalculation::execGetSourceActorTags },
		{ "GetSourceAggregatedTags", &UGameplayModMagnitudeCalculation::execGetSourceAggregatedTags },
		{ "GetSourceSpecTags", &UGameplayModMagnitudeCalculation::execGetSourceSpecTags },
		{ "GetTargetActorTags", &UGameplayModMagnitudeCalculation::execGetTargetActorTags },
		{ "GetTargetAggregatedTags", &UGameplayModMagnitudeCalculation::execGetTargetAggregatedTags },
		{ "GetTargetSpecTags", &UGameplayModMagnitudeCalculation::execGetTargetSpecTags },
		{ "K2_GetCapturedAttributeMagnitude", &UGameplayModMagnitudeCalculation::execK2_GetCapturedAttributeMagnitude },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameplayModMagnitudeCalculation);
UClass* Z_Construct_UClass_UGameplayModMagnitudeCalculation_NoRegister()
{
	return UGameplayModMagnitudeCalculation::StaticClass();
}
struct Z_Construct_UClass_UGameplayModMagnitudeCalculation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Class used to perform custom gameplay effect modifier calculations, either via blueprint or native code */" },
#endif
		{ "IncludePath", "GameplayModMagnitudeCalculation.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/GameplayModMagnitudeCalculation.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Class used to perform custom gameplay effect modifier calculations, either via blueprint or native code" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowNonNetAuthorityDependencyRegistration_MetaData[] = {
		{ "Category", "ExternalDependencies" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n\x09 * Whether the calculation allows non-net authorities to register the external dependency multi-cast delegate or not; Effectively\n\x09 * whether clients are allowed to perform the custom calculation themselves or not\n\x09 * \n\x09 * @Note:\x09This is an advanced use case that should only be enabled under very specific circumstances. This is designed for games\n\x09 *\x09\x09\x09that are utilizing network dormancy and may want to trust the client to update non-gameplay critical attributes client-side without\n\x09 *\x09\x09\x09""causing a network dormancy flush. Usage of this flag is *NOT* compatible with attribute capture within the calculation and will trigger\n\x09 *\x09\x09\x09""an ensure if used in tandem. Clients are incapable of performing custom calculations that require attribute captures. In general,\n\x09 *\x09\x09\x09if your game is not using network dormancy, this should always remain disabled.\n\x09 *\n\x09 * @Note:\x09If enabling this for a custom calculation, be sure that the external delegate is sourced from something guaranteed to be on the client to avoid\n\x09 *\x09\x09\x09timing issues. As an example, binding to a delegate on a GameState is potentially unreliable, as the client reference to that actor may not be\n\x09 *\x09\x09\x09""available during registration.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayModMagnitudeCalculation.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether the calculation allows non-net authorities to register the external dependency multi-cast delegate or not; Effectively\nwhether clients are allowed to perform the custom calculation themselves or not\n\n@Note:       This is an advanced use case that should only be enabled under very specific circumstances. This is designed for games\n                     that are utilizing network dormancy and may want to trust the client to update non-gameplay critical attributes client-side without\n                     causing a network dormancy flush. Usage of this flag is *NOT* compatible with attribute capture within the calculation and will trigger\n                     an ensure if used in tandem. Clients are incapable of performing custom calculations that require attribute captures. In general,\n                     if your game is not using network dormancy, this should always remain disabled.\n\n@Note:       If enabling this for a custom calculation, be sure that the external delegate is sourced from something guaranteed to be on the client to avoid\n                     timing issues. As an example, binding to a delegate on a GameState is potentially unreliable, as the client reference to that actor may not be\n                     available during registration." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bAllowNonNetAuthorityDependencyRegistration_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowNonNetAuthorityDependencyRegistration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGameplayModMagnitudeCalculation_CalculateBaseMagnitude, "CalculateBaseMagnitude" }, // 1015811364
		{ &Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSetByCallerMagnitudeByName, "GetSetByCallerMagnitudeByName" }, // 3622700723
		{ &Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSetByCallerMagnitudeByTag, "GetSetByCallerMagnitudeByTag" }, // 1723088593
		{ &Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSourceActorTags, "GetSourceActorTags" }, // 1366167412
		{ &Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSourceAggregatedTags, "GetSourceAggregatedTags" }, // 2441427621
		{ &Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSourceSpecTags, "GetSourceSpecTags" }, // 2674253052
		{ &Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetTargetActorTags, "GetTargetActorTags" }, // 2041955601
		{ &Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetTargetAggregatedTags, "GetTargetAggregatedTags" }, // 2097530032
		{ &Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetTargetSpecTags, "GetTargetSpecTags" }, // 2742193438
		{ &Z_Construct_UFunction_UGameplayModMagnitudeCalculation_K2_GetCapturedAttributeMagnitude, "K2_GetCapturedAttributeMagnitude" }, // 3724855074
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameplayModMagnitudeCalculation>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UGameplayModMagnitudeCalculation_Statics::NewProp_bAllowNonNetAuthorityDependencyRegistration_SetBit(void* Obj)
{
	((UGameplayModMagnitudeCalculation*)Obj)->bAllowNonNetAuthorityDependencyRegistration = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGameplayModMagnitudeCalculation_Statics::NewProp_bAllowNonNetAuthorityDependencyRegistration = { "bAllowNonNetAuthorityDependencyRegistration", nullptr, (EPropertyFlags)0x00200c0000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGameplayModMagnitudeCalculation), &Z_Construct_UClass_UGameplayModMagnitudeCalculation_Statics::NewProp_bAllowNonNetAuthorityDependencyRegistration_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowNonNetAuthorityDependencyRegistration_MetaData), NewProp_bAllowNonNetAuthorityDependencyRegistration_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameplayModMagnitudeCalculation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayModMagnitudeCalculation_Statics::NewProp_bAllowNonNetAuthorityDependencyRegistration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayModMagnitudeCalculation_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGameplayModMagnitudeCalculation_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameplayEffectCalculation,
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayModMagnitudeCalculation_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameplayModMagnitudeCalculation_Statics::ClassParams = {
	&UGameplayModMagnitudeCalculation::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UGameplayModMagnitudeCalculation_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayModMagnitudeCalculation_Statics::PropPointers),
	0,
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayModMagnitudeCalculation_Statics::Class_MetaDataParams), Z_Construct_UClass_UGameplayModMagnitudeCalculation_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGameplayModMagnitudeCalculation()
{
	if (!Z_Registration_Info_UClass_UGameplayModMagnitudeCalculation.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameplayModMagnitudeCalculation.OuterSingleton, Z_Construct_UClass_UGameplayModMagnitudeCalculation_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGameplayModMagnitudeCalculation.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UClass* StaticClass<UGameplayModMagnitudeCalculation>()
{
	return UGameplayModMagnitudeCalculation::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGameplayModMagnitudeCalculation);
UGameplayModMagnitudeCalculation::~UGameplayModMagnitudeCalculation() {}
// End Class UGameplayModMagnitudeCalculation

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayModMagnitudeCalculation_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGameplayModMagnitudeCalculation, UGameplayModMagnitudeCalculation::StaticClass, TEXT("UGameplayModMagnitudeCalculation"), &Z_Registration_Info_UClass_UGameplayModMagnitudeCalculation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameplayModMagnitudeCalculation), 451630328U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayModMagnitudeCalculation_h_3065534208(TEXT("/Script/GameplayAbilities"),
	Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayModMagnitudeCalculation_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayModMagnitudeCalculation_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
