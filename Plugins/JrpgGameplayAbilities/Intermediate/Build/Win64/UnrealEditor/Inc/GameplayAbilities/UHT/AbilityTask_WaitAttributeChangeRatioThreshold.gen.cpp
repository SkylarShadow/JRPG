// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayAbilities/Public/Abilities/Tasks/AbilityTask_WaitAttributeChangeRatioThreshold.h"
#include "GameplayAbilities/Public/AttributeSet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbilityTask_WaitAttributeChangeRatioThreshold() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask_WaitAttributeChangeRatioThreshold();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask_WaitAttributeChangeRatioThreshold_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
GAMEPLAYABILITIES_API UEnum* Z_Construct_UEnum_GameplayAbilities_EWaitAttributeChangeComparison();
GAMEPLAYABILITIES_API UFunction* Z_Construct_UDelegateFunction_GameplayAbilities_WaitAttributeChangeRatioThresholdDelegate__DelegateSignature();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttribute();
UPackage* Z_Construct_UPackage__Script_GameplayAbilities();
// End Cross Module References

// Begin Delegate FWaitAttributeChangeRatioThresholdDelegate
struct Z_Construct_UDelegateFunction_GameplayAbilities_WaitAttributeChangeRatioThresholdDelegate__DelegateSignature_Statics
{
	struct _Script_GameplayAbilities_eventWaitAttributeChangeRatioThresholdDelegate_Parms
	{
		bool bMatchesComparison;
		float CurrentRatio;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_WaitAttributeChangeRatioThreshold.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bMatchesComparison_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMatchesComparison;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentRatio;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UDelegateFunction_GameplayAbilities_WaitAttributeChangeRatioThresholdDelegate__DelegateSignature_Statics::NewProp_bMatchesComparison_SetBit(void* Obj)
{
	((_Script_GameplayAbilities_eventWaitAttributeChangeRatioThresholdDelegate_Parms*)Obj)->bMatchesComparison = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_GameplayAbilities_WaitAttributeChangeRatioThresholdDelegate__DelegateSignature_Statics::NewProp_bMatchesComparison = { "bMatchesComparison", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_GameplayAbilities_eventWaitAttributeChangeRatioThresholdDelegate_Parms), &Z_Construct_UDelegateFunction_GameplayAbilities_WaitAttributeChangeRatioThresholdDelegate__DelegateSignature_Statics::NewProp_bMatchesComparison_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_GameplayAbilities_WaitAttributeChangeRatioThresholdDelegate__DelegateSignature_Statics::NewProp_CurrentRatio = { "CurrentRatio", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_GameplayAbilities_eventWaitAttributeChangeRatioThresholdDelegate_Parms, CurrentRatio), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GameplayAbilities_WaitAttributeChangeRatioThresholdDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GameplayAbilities_WaitAttributeChangeRatioThresholdDelegate__DelegateSignature_Statics::NewProp_bMatchesComparison,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GameplayAbilities_WaitAttributeChangeRatioThresholdDelegate__DelegateSignature_Statics::NewProp_CurrentRatio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameplayAbilities_WaitAttributeChangeRatioThresholdDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GameplayAbilities_WaitAttributeChangeRatioThresholdDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GameplayAbilities, nullptr, "WaitAttributeChangeRatioThresholdDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_GameplayAbilities_WaitAttributeChangeRatioThresholdDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameplayAbilities_WaitAttributeChangeRatioThresholdDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_GameplayAbilities_WaitAttributeChangeRatioThresholdDelegate__DelegateSignature_Statics::_Script_GameplayAbilities_eventWaitAttributeChangeRatioThresholdDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameplayAbilities_WaitAttributeChangeRatioThresholdDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_GameplayAbilities_WaitAttributeChangeRatioThresholdDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_GameplayAbilities_WaitAttributeChangeRatioThresholdDelegate__DelegateSignature_Statics::_Script_GameplayAbilities_eventWaitAttributeChangeRatioThresholdDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_GameplayAbilities_WaitAttributeChangeRatioThresholdDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_GameplayAbilities_WaitAttributeChangeRatioThresholdDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FWaitAttributeChangeRatioThresholdDelegate_DelegateWrapper(const FMulticastScriptDelegate& WaitAttributeChangeRatioThresholdDelegate, bool bMatchesComparison, float CurrentRatio)
{
	struct _Script_GameplayAbilities_eventWaitAttributeChangeRatioThresholdDelegate_Parms
	{
		bool bMatchesComparison;
		float CurrentRatio;
	};
	_Script_GameplayAbilities_eventWaitAttributeChangeRatioThresholdDelegate_Parms Parms;
	Parms.bMatchesComparison=bMatchesComparison ? true : false;
	Parms.CurrentRatio=CurrentRatio;
	WaitAttributeChangeRatioThresholdDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FWaitAttributeChangeRatioThresholdDelegate

// Begin Class UAbilityTask_WaitAttributeChangeRatioThreshold Function WaitForAttributeChangeRatioThreshold
struct Z_Construct_UFunction_UAbilityTask_WaitAttributeChangeRatioThreshold_WaitForAttributeChangeRatioThreshold_Statics
{
	struct AbilityTask_WaitAttributeChangeRatioThreshold_eventWaitForAttributeChangeRatioThreshold_Parms
	{
		UGameplayAbility* OwningAbility;
		FGameplayAttribute AttributeNumerator;
		FGameplayAttribute AttributeDenominator;
		TEnumAsByte<EWaitAttributeChangeComparison::Type> ComparisonType;
		float ComparisonValue;
		bool bTriggerOnce;
		AActor* OptionalExternalOwner;
		UAbilityTask_WaitAttributeChangeRatioThreshold* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "TRUE" },
		{ "Category", "Ability|Tasks" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Wait on attribute ratio change meeting a comparison threshold. */" },
#endif
		{ "CPP_Default_OptionalExternalOwner", "None" },
		{ "DefaultToSelf", "OwningAbility" },
		{ "HidePin", "OwningAbility" },
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_WaitAttributeChangeRatioThreshold.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Wait on attribute ratio change meeting a comparison threshold." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningAbility;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeNumerator;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeDenominator;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ComparisonType;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ComparisonValue;
	static void NewProp_bTriggerOnce_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTriggerOnce;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OptionalExternalOwner;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_WaitAttributeChangeRatioThreshold_WaitForAttributeChangeRatioThreshold_Statics::NewProp_OwningAbility = { "OwningAbility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_WaitAttributeChangeRatioThreshold_eventWaitForAttributeChangeRatioThreshold_Parms, OwningAbility), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbilityTask_WaitAttributeChangeRatioThreshold_WaitForAttributeChangeRatioThreshold_Statics::NewProp_AttributeNumerator = { "AttributeNumerator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_WaitAttributeChangeRatioThreshold_eventWaitForAttributeChangeRatioThreshold_Parms, AttributeNumerator), Z_Construct_UScriptStruct_FGameplayAttribute, METADATA_PARAMS(0, nullptr) }; // 884374022
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbilityTask_WaitAttributeChangeRatioThreshold_WaitForAttributeChangeRatioThreshold_Statics::NewProp_AttributeDenominator = { "AttributeDenominator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_WaitAttributeChangeRatioThreshold_eventWaitForAttributeChangeRatioThreshold_Parms, AttributeDenominator), Z_Construct_UScriptStruct_FGameplayAttribute, METADATA_PARAMS(0, nullptr) }; // 884374022
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAbilityTask_WaitAttributeChangeRatioThreshold_WaitForAttributeChangeRatioThreshold_Statics::NewProp_ComparisonType = { "ComparisonType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_WaitAttributeChangeRatioThreshold_eventWaitForAttributeChangeRatioThreshold_Parms, ComparisonType), Z_Construct_UEnum_GameplayAbilities_EWaitAttributeChangeComparison, METADATA_PARAMS(0, nullptr) }; // 4098068027
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAbilityTask_WaitAttributeChangeRatioThreshold_WaitForAttributeChangeRatioThreshold_Statics::NewProp_ComparisonValue = { "ComparisonValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_WaitAttributeChangeRatioThreshold_eventWaitForAttributeChangeRatioThreshold_Parms, ComparisonValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAbilityTask_WaitAttributeChangeRatioThreshold_WaitForAttributeChangeRatioThreshold_Statics::NewProp_bTriggerOnce_SetBit(void* Obj)
{
	((AbilityTask_WaitAttributeChangeRatioThreshold_eventWaitForAttributeChangeRatioThreshold_Parms*)Obj)->bTriggerOnce = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAbilityTask_WaitAttributeChangeRatioThreshold_WaitForAttributeChangeRatioThreshold_Statics::NewProp_bTriggerOnce = { "bTriggerOnce", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AbilityTask_WaitAttributeChangeRatioThreshold_eventWaitForAttributeChangeRatioThreshold_Parms), &Z_Construct_UFunction_UAbilityTask_WaitAttributeChangeRatioThreshold_WaitForAttributeChangeRatioThreshold_Statics::NewProp_bTriggerOnce_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_WaitAttributeChangeRatioThreshold_WaitForAttributeChangeRatioThreshold_Statics::NewProp_OptionalExternalOwner = { "OptionalExternalOwner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_WaitAttributeChangeRatioThreshold_eventWaitForAttributeChangeRatioThreshold_Parms, OptionalExternalOwner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_WaitAttributeChangeRatioThreshold_WaitForAttributeChangeRatioThreshold_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_WaitAttributeChangeRatioThreshold_eventWaitForAttributeChangeRatioThreshold_Parms, ReturnValue), Z_Construct_UClass_UAbilityTask_WaitAttributeChangeRatioThreshold_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityTask_WaitAttributeChangeRatioThreshold_WaitForAttributeChangeRatioThreshold_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitAttributeChangeRatioThreshold_WaitForAttributeChangeRatioThreshold_Statics::NewProp_OwningAbility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitAttributeChangeRatioThreshold_WaitForAttributeChangeRatioThreshold_Statics::NewProp_AttributeNumerator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitAttributeChangeRatioThreshold_WaitForAttributeChangeRatioThreshold_Statics::NewProp_AttributeDenominator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitAttributeChangeRatioThreshold_WaitForAttributeChangeRatioThreshold_Statics::NewProp_ComparisonType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitAttributeChangeRatioThreshold_WaitForAttributeChangeRatioThreshold_Statics::NewProp_ComparisonValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitAttributeChangeRatioThreshold_WaitForAttributeChangeRatioThreshold_Statics::NewProp_bTriggerOnce,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitAttributeChangeRatioThreshold_WaitForAttributeChangeRatioThreshold_Statics::NewProp_OptionalExternalOwner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitAttributeChangeRatioThreshold_WaitForAttributeChangeRatioThreshold_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_WaitAttributeChangeRatioThreshold_WaitForAttributeChangeRatioThreshold_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityTask_WaitAttributeChangeRatioThreshold_WaitForAttributeChangeRatioThreshold_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityTask_WaitAttributeChangeRatioThreshold, nullptr, "WaitForAttributeChangeRatioThreshold", nullptr, nullptr, Z_Construct_UFunction_UAbilityTask_WaitAttributeChangeRatioThreshold_WaitForAttributeChangeRatioThreshold_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_WaitAttributeChangeRatioThreshold_WaitForAttributeChangeRatioThreshold_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAbilityTask_WaitAttributeChangeRatioThreshold_WaitForAttributeChangeRatioThreshold_Statics::AbilityTask_WaitAttributeChangeRatioThreshold_eventWaitForAttributeChangeRatioThreshold_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_WaitAttributeChangeRatioThreshold_WaitForAttributeChangeRatioThreshold_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilityTask_WaitAttributeChangeRatioThreshold_WaitForAttributeChangeRatioThreshold_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAbilityTask_WaitAttributeChangeRatioThreshold_WaitForAttributeChangeRatioThreshold_Statics::AbilityTask_WaitAttributeChangeRatioThreshold_eventWaitForAttributeChangeRatioThreshold_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbilityTask_WaitAttributeChangeRatioThreshold_WaitForAttributeChangeRatioThreshold()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityTask_WaitAttributeChangeRatioThreshold_WaitForAttributeChangeRatioThreshold_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilityTask_WaitAttributeChangeRatioThreshold::execWaitForAttributeChangeRatioThreshold)
{
	P_GET_OBJECT(UGameplayAbility,Z_Param_OwningAbility);
	P_GET_STRUCT(FGameplayAttribute,Z_Param_AttributeNumerator);
	P_GET_STRUCT(FGameplayAttribute,Z_Param_AttributeDenominator);
	P_GET_PROPERTY(FByteProperty,Z_Param_ComparisonType);
	P_GET_PROPERTY(FFloatProperty,Z_Param_ComparisonValue);
	P_GET_UBOOL(Z_Param_bTriggerOnce);
	P_GET_OBJECT(AActor,Z_Param_OptionalExternalOwner);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAbilityTask_WaitAttributeChangeRatioThreshold**)Z_Param__Result=UAbilityTask_WaitAttributeChangeRatioThreshold::WaitForAttributeChangeRatioThreshold(Z_Param_OwningAbility,Z_Param_AttributeNumerator,Z_Param_AttributeDenominator,EWaitAttributeChangeComparison::Type(Z_Param_ComparisonType),Z_Param_ComparisonValue,Z_Param_bTriggerOnce,Z_Param_OptionalExternalOwner);
	P_NATIVE_END;
}
// End Class UAbilityTask_WaitAttributeChangeRatioThreshold Function WaitForAttributeChangeRatioThreshold

// Begin Class UAbilityTask_WaitAttributeChangeRatioThreshold
void UAbilityTask_WaitAttributeChangeRatioThreshold::StaticRegisterNativesUAbilityTask_WaitAttributeChangeRatioThreshold()
{
	UClass* Class = UAbilityTask_WaitAttributeChangeRatioThreshold::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "WaitForAttributeChangeRatioThreshold", &UAbilityTask_WaitAttributeChangeRatioThreshold::execWaitForAttributeChangeRatioThreshold },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAbilityTask_WaitAttributeChangeRatioThreshold);
UClass* Z_Construct_UClass_UAbilityTask_WaitAttributeChangeRatioThreshold_NoRegister()
{
	return UAbilityTask_WaitAttributeChangeRatioThreshold::StaticClass();
}
struct Z_Construct_UClass_UAbilityTask_WaitAttributeChangeRatioThreshold_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\x09Waits for the ratio between two attributes to match a threshold\n */" },
#endif
		{ "IncludePath", "Abilities/Tasks/AbilityTask_WaitAttributeChangeRatioThreshold.h" },
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_WaitAttributeChangeRatioThreshold.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Waits for the ratio between two attributes to match a threshold" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnChange_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_WaitAttributeChangeRatioThreshold.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExternalOwner_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_WaitAttributeChangeRatioThreshold.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnChange;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ExternalOwner;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAbilityTask_WaitAttributeChangeRatioThreshold_WaitForAttributeChangeRatioThreshold, "WaitForAttributeChangeRatioThreshold" }, // 2641134284
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAbilityTask_WaitAttributeChangeRatioThreshold>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAbilityTask_WaitAttributeChangeRatioThreshold_Statics::NewProp_OnChange = { "OnChange", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityTask_WaitAttributeChangeRatioThreshold, OnChange), Z_Construct_UDelegateFunction_GameplayAbilities_WaitAttributeChangeRatioThresholdDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnChange_MetaData), NewProp_OnChange_MetaData) }; // 580749499
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAbilityTask_WaitAttributeChangeRatioThreshold_Statics::NewProp_ExternalOwner = { "ExternalOwner", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityTask_WaitAttributeChangeRatioThreshold, ExternalOwner), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExternalOwner_MetaData), NewProp_ExternalOwner_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAbilityTask_WaitAttributeChangeRatioThreshold_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_WaitAttributeChangeRatioThreshold_Statics::NewProp_OnChange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_WaitAttributeChangeRatioThreshold_Statics::NewProp_ExternalOwner,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_WaitAttributeChangeRatioThreshold_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAbilityTask_WaitAttributeChangeRatioThreshold_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAbilityTask,
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_WaitAttributeChangeRatioThreshold_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAbilityTask_WaitAttributeChangeRatioThreshold_Statics::ClassParams = {
	&UAbilityTask_WaitAttributeChangeRatioThreshold::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAbilityTask_WaitAttributeChangeRatioThreshold_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_WaitAttributeChangeRatioThreshold_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_WaitAttributeChangeRatioThreshold_Statics::Class_MetaDataParams), Z_Construct_UClass_UAbilityTask_WaitAttributeChangeRatioThreshold_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAbilityTask_WaitAttributeChangeRatioThreshold()
{
	if (!Z_Registration_Info_UClass_UAbilityTask_WaitAttributeChangeRatioThreshold.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAbilityTask_WaitAttributeChangeRatioThreshold.OuterSingleton, Z_Construct_UClass_UAbilityTask_WaitAttributeChangeRatioThreshold_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAbilityTask_WaitAttributeChangeRatioThreshold.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UClass* StaticClass<UAbilityTask_WaitAttributeChangeRatioThreshold>()
{
	return UAbilityTask_WaitAttributeChangeRatioThreshold::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAbilityTask_WaitAttributeChangeRatioThreshold);
UAbilityTask_WaitAttributeChangeRatioThreshold::~UAbilityTask_WaitAttributeChangeRatioThreshold() {}
// End Class UAbilityTask_WaitAttributeChangeRatioThreshold

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitAttributeChangeRatioThreshold_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAbilityTask_WaitAttributeChangeRatioThreshold, UAbilityTask_WaitAttributeChangeRatioThreshold::StaticClass, TEXT("UAbilityTask_WaitAttributeChangeRatioThreshold"), &Z_Registration_Info_UClass_UAbilityTask_WaitAttributeChangeRatioThreshold, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAbilityTask_WaitAttributeChangeRatioThreshold), 4111114100U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitAttributeChangeRatioThreshold_h_2821847533(TEXT("/Script/GameplayAbilities"),
	Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitAttributeChangeRatioThreshold_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitAttributeChangeRatioThreshold_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
