// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayAbilities/Public/Abilities/Tasks/AbilityTask_WaitAttributeChange.h"
#include "GameplayAbilities/Public/AttributeSet.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbilityTask_WaitAttributeChange() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask_WaitAttributeChange();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask_WaitAttributeChange_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
GAMEPLAYABILITIES_API UEnum* Z_Construct_UEnum_GameplayAbilities_EWaitAttributeChangeComparison();
GAMEPLAYABILITIES_API UFunction* Z_Construct_UDelegateFunction_GameplayAbilities_WaitAttributeChangeDelegate__DelegateSignature();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttribute();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
UPackage* Z_Construct_UPackage__Script_GameplayAbilities();
// End Cross Module References

// Begin Enum EWaitAttributeChangeComparison
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWaitAttributeChangeComparison;
static UEnum* EWaitAttributeChangeComparison_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EWaitAttributeChangeComparison.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EWaitAttributeChangeComparison.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GameplayAbilities_EWaitAttributeChangeComparison, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("EWaitAttributeChangeComparison"));
	}
	return Z_Registration_Info_UEnum_EWaitAttributeChangeComparison.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UEnum* StaticEnum<EWaitAttributeChangeComparison::Type>()
{
	return EWaitAttributeChangeComparison_StaticEnum();
}
struct Z_Construct_UEnum_GameplayAbilities_EWaitAttributeChangeComparison_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ExactlyEqualTo.Name", "EWaitAttributeChangeComparison::ExactlyEqualTo" },
		{ "GreaterThan.Name", "EWaitAttributeChangeComparison::GreaterThan" },
		{ "GreaterThanOrEqualTo.Name", "EWaitAttributeChangeComparison::GreaterThanOrEqualTo" },
		{ "LessThan.Name", "EWaitAttributeChangeComparison::LessThan" },
		{ "LessThanOrEqualTo.Name", "EWaitAttributeChangeComparison::LessThanOrEqualTo" },
		{ "MAX.Hidden", "" },
		{ "MAX.Name", "EWaitAttributeChangeComparison::MAX" },
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_WaitAttributeChange.h" },
		{ "None.Name", "EWaitAttributeChangeComparison::None" },
		{ "NotEqualTo.Name", "EWaitAttributeChangeComparison::NotEqualTo" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EWaitAttributeChangeComparison::None", (int64)EWaitAttributeChangeComparison::None },
		{ "EWaitAttributeChangeComparison::GreaterThan", (int64)EWaitAttributeChangeComparison::GreaterThan },
		{ "EWaitAttributeChangeComparison::LessThan", (int64)EWaitAttributeChangeComparison::LessThan },
		{ "EWaitAttributeChangeComparison::GreaterThanOrEqualTo", (int64)EWaitAttributeChangeComparison::GreaterThanOrEqualTo },
		{ "EWaitAttributeChangeComparison::LessThanOrEqualTo", (int64)EWaitAttributeChangeComparison::LessThanOrEqualTo },
		{ "EWaitAttributeChangeComparison::NotEqualTo", (int64)EWaitAttributeChangeComparison::NotEqualTo },
		{ "EWaitAttributeChangeComparison::ExactlyEqualTo", (int64)EWaitAttributeChangeComparison::ExactlyEqualTo },
		{ "EWaitAttributeChangeComparison::MAX", (int64)EWaitAttributeChangeComparison::MAX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GameplayAbilities_EWaitAttributeChangeComparison_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_GameplayAbilities,
	nullptr,
	"EWaitAttributeChangeComparison",
	"EWaitAttributeChangeComparison::Type",
	Z_Construct_UEnum_GameplayAbilities_EWaitAttributeChangeComparison_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayAbilities_EWaitAttributeChangeComparison_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Namespaced,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayAbilities_EWaitAttributeChangeComparison_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GameplayAbilities_EWaitAttributeChangeComparison_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_GameplayAbilities_EWaitAttributeChangeComparison()
{
	if (!Z_Registration_Info_UEnum_EWaitAttributeChangeComparison.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWaitAttributeChangeComparison.InnerSingleton, Z_Construct_UEnum_GameplayAbilities_EWaitAttributeChangeComparison_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EWaitAttributeChangeComparison.InnerSingleton;
}
// End Enum EWaitAttributeChangeComparison

// Begin Delegate FWaitAttributeChangeDelegate
struct Z_Construct_UDelegateFunction_GameplayAbilities_WaitAttributeChangeDelegate__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_WaitAttributeChange.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GameplayAbilities_WaitAttributeChangeDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GameplayAbilities, nullptr, "WaitAttributeChangeDelegate__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameplayAbilities_WaitAttributeChangeDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_GameplayAbilities_WaitAttributeChangeDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_GameplayAbilities_WaitAttributeChangeDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_GameplayAbilities_WaitAttributeChangeDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FWaitAttributeChangeDelegate_DelegateWrapper(const FMulticastScriptDelegate& WaitAttributeChangeDelegate)
{
	WaitAttributeChangeDelegate.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FWaitAttributeChangeDelegate

// Begin Class UAbilityTask_WaitAttributeChange Function WaitForAttributeChange
struct Z_Construct_UFunction_UAbilityTask_WaitAttributeChange_WaitForAttributeChange_Statics
{
	struct AbilityTask_WaitAttributeChange_eventWaitForAttributeChange_Parms
	{
		UGameplayAbility* OwningAbility;
		FGameplayAttribute Attribute;
		FGameplayTag WithSrcTag;
		FGameplayTag WithoutSrcTag;
		bool TriggerOnce;
		AActor* OptionalExternalOwner;
		UAbilityTask_WaitAttributeChange* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "TRUE" },
		{ "Category", "Ability|Tasks" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Wait until an attribute changes. */" },
#endif
		{ "CPP_Default_OptionalExternalOwner", "None" },
		{ "CPP_Default_TriggerOnce", "true" },
		{ "DefaultToSelf", "OwningAbility" },
		{ "HidePin", "OwningAbility" },
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_WaitAttributeChange.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Wait until an attribute changes." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningAbility;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Attribute;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WithSrcTag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WithoutSrcTag;
	static void NewProp_TriggerOnce_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_TriggerOnce;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OptionalExternalOwner;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_WaitAttributeChange_WaitForAttributeChange_Statics::NewProp_OwningAbility = { "OwningAbility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_WaitAttributeChange_eventWaitForAttributeChange_Parms, OwningAbility), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbilityTask_WaitAttributeChange_WaitForAttributeChange_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_WaitAttributeChange_eventWaitForAttributeChange_Parms, Attribute), Z_Construct_UScriptStruct_FGameplayAttribute, METADATA_PARAMS(0, nullptr) }; // 884374022
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbilityTask_WaitAttributeChange_WaitForAttributeChange_Statics::NewProp_WithSrcTag = { "WithSrcTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_WaitAttributeChange_eventWaitForAttributeChange_Parms, WithSrcTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbilityTask_WaitAttributeChange_WaitForAttributeChange_Statics::NewProp_WithoutSrcTag = { "WithoutSrcTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_WaitAttributeChange_eventWaitForAttributeChange_Parms, WithoutSrcTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
void Z_Construct_UFunction_UAbilityTask_WaitAttributeChange_WaitForAttributeChange_Statics::NewProp_TriggerOnce_SetBit(void* Obj)
{
	((AbilityTask_WaitAttributeChange_eventWaitForAttributeChange_Parms*)Obj)->TriggerOnce = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAbilityTask_WaitAttributeChange_WaitForAttributeChange_Statics::NewProp_TriggerOnce = { "TriggerOnce", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AbilityTask_WaitAttributeChange_eventWaitForAttributeChange_Parms), &Z_Construct_UFunction_UAbilityTask_WaitAttributeChange_WaitForAttributeChange_Statics::NewProp_TriggerOnce_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_WaitAttributeChange_WaitForAttributeChange_Statics::NewProp_OptionalExternalOwner = { "OptionalExternalOwner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_WaitAttributeChange_eventWaitForAttributeChange_Parms, OptionalExternalOwner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_WaitAttributeChange_WaitForAttributeChange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_WaitAttributeChange_eventWaitForAttributeChange_Parms, ReturnValue), Z_Construct_UClass_UAbilityTask_WaitAttributeChange_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityTask_WaitAttributeChange_WaitForAttributeChange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitAttributeChange_WaitForAttributeChange_Statics::NewProp_OwningAbility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitAttributeChange_WaitForAttributeChange_Statics::NewProp_Attribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitAttributeChange_WaitForAttributeChange_Statics::NewProp_WithSrcTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitAttributeChange_WaitForAttributeChange_Statics::NewProp_WithoutSrcTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitAttributeChange_WaitForAttributeChange_Statics::NewProp_TriggerOnce,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitAttributeChange_WaitForAttributeChange_Statics::NewProp_OptionalExternalOwner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitAttributeChange_WaitForAttributeChange_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_WaitAttributeChange_WaitForAttributeChange_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityTask_WaitAttributeChange_WaitForAttributeChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityTask_WaitAttributeChange, nullptr, "WaitForAttributeChange", nullptr, nullptr, Z_Construct_UFunction_UAbilityTask_WaitAttributeChange_WaitForAttributeChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_WaitAttributeChange_WaitForAttributeChange_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAbilityTask_WaitAttributeChange_WaitForAttributeChange_Statics::AbilityTask_WaitAttributeChange_eventWaitForAttributeChange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_WaitAttributeChange_WaitForAttributeChange_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilityTask_WaitAttributeChange_WaitForAttributeChange_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAbilityTask_WaitAttributeChange_WaitForAttributeChange_Statics::AbilityTask_WaitAttributeChange_eventWaitForAttributeChange_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbilityTask_WaitAttributeChange_WaitForAttributeChange()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityTask_WaitAttributeChange_WaitForAttributeChange_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilityTask_WaitAttributeChange::execWaitForAttributeChange)
{
	P_GET_OBJECT(UGameplayAbility,Z_Param_OwningAbility);
	P_GET_STRUCT(FGameplayAttribute,Z_Param_Attribute);
	P_GET_STRUCT(FGameplayTag,Z_Param_WithSrcTag);
	P_GET_STRUCT(FGameplayTag,Z_Param_WithoutSrcTag);
	P_GET_UBOOL(Z_Param_TriggerOnce);
	P_GET_OBJECT(AActor,Z_Param_OptionalExternalOwner);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAbilityTask_WaitAttributeChange**)Z_Param__Result=UAbilityTask_WaitAttributeChange::WaitForAttributeChange(Z_Param_OwningAbility,Z_Param_Attribute,Z_Param_WithSrcTag,Z_Param_WithoutSrcTag,Z_Param_TriggerOnce,Z_Param_OptionalExternalOwner);
	P_NATIVE_END;
}
// End Class UAbilityTask_WaitAttributeChange Function WaitForAttributeChange

// Begin Class UAbilityTask_WaitAttributeChange Function WaitForAttributeChangeWithComparison
struct Z_Construct_UFunction_UAbilityTask_WaitAttributeChange_WaitForAttributeChangeWithComparison_Statics
{
	struct AbilityTask_WaitAttributeChange_eventWaitForAttributeChangeWithComparison_Parms
	{
		UGameplayAbility* OwningAbility;
		FGameplayAttribute InAttribute;
		FGameplayTag InWithTag;
		FGameplayTag InWithoutTag;
		TEnumAsByte<EWaitAttributeChangeComparison::Type> InComparisonType;
		float InComparisonValue;
		bool TriggerOnce;
		AActor* OptionalExternalOwner;
		UAbilityTask_WaitAttributeChange* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "TRUE" },
		{ "Category", "Ability|Tasks" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Wait until an attribute changes to pass a given test. */" },
#endif
		{ "CPP_Default_OptionalExternalOwner", "None" },
		{ "CPP_Default_TriggerOnce", "true" },
		{ "DefaultToSelf", "OwningAbility" },
		{ "HidePin", "OwningAbility" },
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_WaitAttributeChange.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Wait until an attribute changes to pass a given test." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningAbility;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InAttribute;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InWithTag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InWithoutTag;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InComparisonType;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InComparisonValue;
	static void NewProp_TriggerOnce_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_TriggerOnce;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OptionalExternalOwner;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_WaitAttributeChange_WaitForAttributeChangeWithComparison_Statics::NewProp_OwningAbility = { "OwningAbility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_WaitAttributeChange_eventWaitForAttributeChangeWithComparison_Parms, OwningAbility), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbilityTask_WaitAttributeChange_WaitForAttributeChangeWithComparison_Statics::NewProp_InAttribute = { "InAttribute", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_WaitAttributeChange_eventWaitForAttributeChangeWithComparison_Parms, InAttribute), Z_Construct_UScriptStruct_FGameplayAttribute, METADATA_PARAMS(0, nullptr) }; // 884374022
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbilityTask_WaitAttributeChange_WaitForAttributeChangeWithComparison_Statics::NewProp_InWithTag = { "InWithTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_WaitAttributeChange_eventWaitForAttributeChangeWithComparison_Parms, InWithTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbilityTask_WaitAttributeChange_WaitForAttributeChangeWithComparison_Statics::NewProp_InWithoutTag = { "InWithoutTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_WaitAttributeChange_eventWaitForAttributeChangeWithComparison_Parms, InWithoutTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAbilityTask_WaitAttributeChange_WaitForAttributeChangeWithComparison_Statics::NewProp_InComparisonType = { "InComparisonType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_WaitAttributeChange_eventWaitForAttributeChangeWithComparison_Parms, InComparisonType), Z_Construct_UEnum_GameplayAbilities_EWaitAttributeChangeComparison, METADATA_PARAMS(0, nullptr) }; // 4098068027
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAbilityTask_WaitAttributeChange_WaitForAttributeChangeWithComparison_Statics::NewProp_InComparisonValue = { "InComparisonValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_WaitAttributeChange_eventWaitForAttributeChangeWithComparison_Parms, InComparisonValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAbilityTask_WaitAttributeChange_WaitForAttributeChangeWithComparison_Statics::NewProp_TriggerOnce_SetBit(void* Obj)
{
	((AbilityTask_WaitAttributeChange_eventWaitForAttributeChangeWithComparison_Parms*)Obj)->TriggerOnce = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAbilityTask_WaitAttributeChange_WaitForAttributeChangeWithComparison_Statics::NewProp_TriggerOnce = { "TriggerOnce", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AbilityTask_WaitAttributeChange_eventWaitForAttributeChangeWithComparison_Parms), &Z_Construct_UFunction_UAbilityTask_WaitAttributeChange_WaitForAttributeChangeWithComparison_Statics::NewProp_TriggerOnce_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_WaitAttributeChange_WaitForAttributeChangeWithComparison_Statics::NewProp_OptionalExternalOwner = { "OptionalExternalOwner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_WaitAttributeChange_eventWaitForAttributeChangeWithComparison_Parms, OptionalExternalOwner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_WaitAttributeChange_WaitForAttributeChangeWithComparison_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_WaitAttributeChange_eventWaitForAttributeChangeWithComparison_Parms, ReturnValue), Z_Construct_UClass_UAbilityTask_WaitAttributeChange_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityTask_WaitAttributeChange_WaitForAttributeChangeWithComparison_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitAttributeChange_WaitForAttributeChangeWithComparison_Statics::NewProp_OwningAbility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitAttributeChange_WaitForAttributeChangeWithComparison_Statics::NewProp_InAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitAttributeChange_WaitForAttributeChangeWithComparison_Statics::NewProp_InWithTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitAttributeChange_WaitForAttributeChangeWithComparison_Statics::NewProp_InWithoutTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitAttributeChange_WaitForAttributeChangeWithComparison_Statics::NewProp_InComparisonType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitAttributeChange_WaitForAttributeChangeWithComparison_Statics::NewProp_InComparisonValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitAttributeChange_WaitForAttributeChangeWithComparison_Statics::NewProp_TriggerOnce,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitAttributeChange_WaitForAttributeChangeWithComparison_Statics::NewProp_OptionalExternalOwner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitAttributeChange_WaitForAttributeChangeWithComparison_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_WaitAttributeChange_WaitForAttributeChangeWithComparison_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityTask_WaitAttributeChange_WaitForAttributeChangeWithComparison_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityTask_WaitAttributeChange, nullptr, "WaitForAttributeChangeWithComparison", nullptr, nullptr, Z_Construct_UFunction_UAbilityTask_WaitAttributeChange_WaitForAttributeChangeWithComparison_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_WaitAttributeChange_WaitForAttributeChangeWithComparison_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAbilityTask_WaitAttributeChange_WaitForAttributeChangeWithComparison_Statics::AbilityTask_WaitAttributeChange_eventWaitForAttributeChangeWithComparison_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_WaitAttributeChange_WaitForAttributeChangeWithComparison_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilityTask_WaitAttributeChange_WaitForAttributeChangeWithComparison_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAbilityTask_WaitAttributeChange_WaitForAttributeChangeWithComparison_Statics::AbilityTask_WaitAttributeChange_eventWaitForAttributeChangeWithComparison_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbilityTask_WaitAttributeChange_WaitForAttributeChangeWithComparison()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityTask_WaitAttributeChange_WaitForAttributeChangeWithComparison_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilityTask_WaitAttributeChange::execWaitForAttributeChangeWithComparison)
{
	P_GET_OBJECT(UGameplayAbility,Z_Param_OwningAbility);
	P_GET_STRUCT(FGameplayAttribute,Z_Param_InAttribute);
	P_GET_STRUCT(FGameplayTag,Z_Param_InWithTag);
	P_GET_STRUCT(FGameplayTag,Z_Param_InWithoutTag);
	P_GET_PROPERTY(FByteProperty,Z_Param_InComparisonType);
	P_GET_PROPERTY(FFloatProperty,Z_Param_InComparisonValue);
	P_GET_UBOOL(Z_Param_TriggerOnce);
	P_GET_OBJECT(AActor,Z_Param_OptionalExternalOwner);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAbilityTask_WaitAttributeChange**)Z_Param__Result=UAbilityTask_WaitAttributeChange::WaitForAttributeChangeWithComparison(Z_Param_OwningAbility,Z_Param_InAttribute,Z_Param_InWithTag,Z_Param_InWithoutTag,EWaitAttributeChangeComparison::Type(Z_Param_InComparisonType),Z_Param_InComparisonValue,Z_Param_TriggerOnce,Z_Param_OptionalExternalOwner);
	P_NATIVE_END;
}
// End Class UAbilityTask_WaitAttributeChange Function WaitForAttributeChangeWithComparison

// Begin Class UAbilityTask_WaitAttributeChange
void UAbilityTask_WaitAttributeChange::StaticRegisterNativesUAbilityTask_WaitAttributeChange()
{
	UClass* Class = UAbilityTask_WaitAttributeChange::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "WaitForAttributeChange", &UAbilityTask_WaitAttributeChange::execWaitForAttributeChange },
		{ "WaitForAttributeChangeWithComparison", &UAbilityTask_WaitAttributeChange::execWaitForAttributeChangeWithComparison },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAbilityTask_WaitAttributeChange);
UClass* Z_Construct_UClass_UAbilityTask_WaitAttributeChange_NoRegister()
{
	return UAbilityTask_WaitAttributeChange::StaticClass();
}
struct Z_Construct_UClass_UAbilityTask_WaitAttributeChange_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\x09Waits for the actor to activate another ability\n */" },
#endif
		{ "IncludePath", "Abilities/Tasks/AbilityTask_WaitAttributeChange.h" },
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_WaitAttributeChange.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Waits for the actor to activate another ability" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnChange_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_WaitAttributeChange.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExternalOwner_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_WaitAttributeChange.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnChange;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ExternalOwner;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAbilityTask_WaitAttributeChange_WaitForAttributeChange, "WaitForAttributeChange" }, // 1908760354
		{ &Z_Construct_UFunction_UAbilityTask_WaitAttributeChange_WaitForAttributeChangeWithComparison, "WaitForAttributeChangeWithComparison" }, // 2751652503
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAbilityTask_WaitAttributeChange>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAbilityTask_WaitAttributeChange_Statics::NewProp_OnChange = { "OnChange", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityTask_WaitAttributeChange, OnChange), Z_Construct_UDelegateFunction_GameplayAbilities_WaitAttributeChangeDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnChange_MetaData), NewProp_OnChange_MetaData) }; // 1607921851
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAbilityTask_WaitAttributeChange_Statics::NewProp_ExternalOwner = { "ExternalOwner", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityTask_WaitAttributeChange, ExternalOwner), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExternalOwner_MetaData), NewProp_ExternalOwner_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAbilityTask_WaitAttributeChange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_WaitAttributeChange_Statics::NewProp_OnChange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_WaitAttributeChange_Statics::NewProp_ExternalOwner,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_WaitAttributeChange_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAbilityTask_WaitAttributeChange_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAbilityTask,
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_WaitAttributeChange_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAbilityTask_WaitAttributeChange_Statics::ClassParams = {
	&UAbilityTask_WaitAttributeChange::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAbilityTask_WaitAttributeChange_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_WaitAttributeChange_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_WaitAttributeChange_Statics::Class_MetaDataParams), Z_Construct_UClass_UAbilityTask_WaitAttributeChange_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAbilityTask_WaitAttributeChange()
{
	if (!Z_Registration_Info_UClass_UAbilityTask_WaitAttributeChange.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAbilityTask_WaitAttributeChange.OuterSingleton, Z_Construct_UClass_UAbilityTask_WaitAttributeChange_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAbilityTask_WaitAttributeChange.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UClass* StaticClass<UAbilityTask_WaitAttributeChange>()
{
	return UAbilityTask_WaitAttributeChange::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAbilityTask_WaitAttributeChange);
UAbilityTask_WaitAttributeChange::~UAbilityTask_WaitAttributeChange() {}
// End Class UAbilityTask_WaitAttributeChange

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitAttributeChange_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EWaitAttributeChangeComparison_StaticEnum, TEXT("EWaitAttributeChangeComparison"), &Z_Registration_Info_UEnum_EWaitAttributeChangeComparison, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4098068027U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAbilityTask_WaitAttributeChange, UAbilityTask_WaitAttributeChange::StaticClass, TEXT("UAbilityTask_WaitAttributeChange"), &Z_Registration_Info_UClass_UAbilityTask_WaitAttributeChange, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAbilityTask_WaitAttributeChange), 4104569865U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitAttributeChange_h_3740023648(TEXT("/Script/GameplayAbilities"),
	Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitAttributeChange_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitAttributeChange_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitAttributeChange_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitAttributeChange_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
