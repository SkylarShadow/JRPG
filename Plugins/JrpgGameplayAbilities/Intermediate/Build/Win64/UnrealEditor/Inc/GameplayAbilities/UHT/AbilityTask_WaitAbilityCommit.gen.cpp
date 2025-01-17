// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayAbilities/Public/Abilities/Tasks/AbilityTask_WaitAbilityCommit.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbilityTask_WaitAbilityCommit() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask_WaitAbilityCommit();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask_WaitAbilityCommit_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
GAMEPLAYABILITIES_API UFunction* Z_Construct_UDelegateFunction_GameplayAbilities_WaitAbilityCommitDelegate__DelegateSignature();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagQuery();
UPackage* Z_Construct_UPackage__Script_GameplayAbilities();
// End Cross Module References

// Begin Delegate FWaitAbilityCommitDelegate
struct Z_Construct_UDelegateFunction_GameplayAbilities_WaitAbilityCommitDelegate__DelegateSignature_Statics
{
	struct _Script_GameplayAbilities_eventWaitAbilityCommitDelegate_Parms
	{
		UGameplayAbility* ActivatedAbility;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_WaitAbilityCommit.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActivatedAbility;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_GameplayAbilities_WaitAbilityCommitDelegate__DelegateSignature_Statics::NewProp_ActivatedAbility = { "ActivatedAbility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_GameplayAbilities_eventWaitAbilityCommitDelegate_Parms, ActivatedAbility), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GameplayAbilities_WaitAbilityCommitDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GameplayAbilities_WaitAbilityCommitDelegate__DelegateSignature_Statics::NewProp_ActivatedAbility,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameplayAbilities_WaitAbilityCommitDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GameplayAbilities_WaitAbilityCommitDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GameplayAbilities, nullptr, "WaitAbilityCommitDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_GameplayAbilities_WaitAbilityCommitDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameplayAbilities_WaitAbilityCommitDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_GameplayAbilities_WaitAbilityCommitDelegate__DelegateSignature_Statics::_Script_GameplayAbilities_eventWaitAbilityCommitDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameplayAbilities_WaitAbilityCommitDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_GameplayAbilities_WaitAbilityCommitDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_GameplayAbilities_WaitAbilityCommitDelegate__DelegateSignature_Statics::_Script_GameplayAbilities_eventWaitAbilityCommitDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_GameplayAbilities_WaitAbilityCommitDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_GameplayAbilities_WaitAbilityCommitDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FWaitAbilityCommitDelegate_DelegateWrapper(const FMulticastScriptDelegate& WaitAbilityCommitDelegate, UGameplayAbility* ActivatedAbility)
{
	struct _Script_GameplayAbilities_eventWaitAbilityCommitDelegate_Parms
	{
		UGameplayAbility* ActivatedAbility;
	};
	_Script_GameplayAbilities_eventWaitAbilityCommitDelegate_Parms Parms;
	Parms.ActivatedAbility=ActivatedAbility;
	WaitAbilityCommitDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FWaitAbilityCommitDelegate

// Begin Class UAbilityTask_WaitAbilityCommit Function OnAbilityCommit
struct Z_Construct_UFunction_UAbilityTask_WaitAbilityCommit_OnAbilityCommit_Statics
{
	struct AbilityTask_WaitAbilityCommit_eventOnAbilityCommit_Parms
	{
		UGameplayAbility* ActivatedAbility;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_WaitAbilityCommit.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActivatedAbility;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_WaitAbilityCommit_OnAbilityCommit_Statics::NewProp_ActivatedAbility = { "ActivatedAbility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_WaitAbilityCommit_eventOnAbilityCommit_Parms, ActivatedAbility), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityTask_WaitAbilityCommit_OnAbilityCommit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitAbilityCommit_OnAbilityCommit_Statics::NewProp_ActivatedAbility,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_WaitAbilityCommit_OnAbilityCommit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityTask_WaitAbilityCommit_OnAbilityCommit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityTask_WaitAbilityCommit, nullptr, "OnAbilityCommit", nullptr, nullptr, Z_Construct_UFunction_UAbilityTask_WaitAbilityCommit_OnAbilityCommit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_WaitAbilityCommit_OnAbilityCommit_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAbilityTask_WaitAbilityCommit_OnAbilityCommit_Statics::AbilityTask_WaitAbilityCommit_eventOnAbilityCommit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_WaitAbilityCommit_OnAbilityCommit_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilityTask_WaitAbilityCommit_OnAbilityCommit_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAbilityTask_WaitAbilityCommit_OnAbilityCommit_Statics::AbilityTask_WaitAbilityCommit_eventOnAbilityCommit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbilityTask_WaitAbilityCommit_OnAbilityCommit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityTask_WaitAbilityCommit_OnAbilityCommit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilityTask_WaitAbilityCommit::execOnAbilityCommit)
{
	P_GET_OBJECT(UGameplayAbility,Z_Param_ActivatedAbility);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnAbilityCommit(Z_Param_ActivatedAbility);
	P_NATIVE_END;
}
// End Class UAbilityTask_WaitAbilityCommit Function OnAbilityCommit

// Begin Class UAbilityTask_WaitAbilityCommit Function WaitForAbilityCommit
struct Z_Construct_UFunction_UAbilityTask_WaitAbilityCommit_WaitForAbilityCommit_Statics
{
	struct AbilityTask_WaitAbilityCommit_eventWaitForAbilityCommit_Parms
	{
		UGameplayAbility* OwningAbility;
		FGameplayTag WithTag;
		FGameplayTag WithoutTage;
		bool TriggerOnce;
		UAbilityTask_WaitAbilityCommit* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "TRUE" },
		{ "Category", "Ability|Tasks" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Wait until a new ability (of the same or different type) is commited. */" },
#endif
		{ "CPP_Default_TriggerOnce", "true" },
		{ "DefaultToSelf", "OwningAbility" },
		{ "DisplayName", "Wait For New Ability Commit" },
		{ "HidePin", "OwningAbility" },
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_WaitAbilityCommit.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Wait until a new ability (of the same or different type) is commited." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningAbility;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WithTag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WithoutTage;
	static void NewProp_TriggerOnce_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_TriggerOnce;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_WaitAbilityCommit_WaitForAbilityCommit_Statics::NewProp_OwningAbility = { "OwningAbility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_WaitAbilityCommit_eventWaitForAbilityCommit_Parms, OwningAbility), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbilityTask_WaitAbilityCommit_WaitForAbilityCommit_Statics::NewProp_WithTag = { "WithTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_WaitAbilityCommit_eventWaitForAbilityCommit_Parms, WithTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbilityTask_WaitAbilityCommit_WaitForAbilityCommit_Statics::NewProp_WithoutTage = { "WithoutTage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_WaitAbilityCommit_eventWaitForAbilityCommit_Parms, WithoutTage), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
void Z_Construct_UFunction_UAbilityTask_WaitAbilityCommit_WaitForAbilityCommit_Statics::NewProp_TriggerOnce_SetBit(void* Obj)
{
	((AbilityTask_WaitAbilityCommit_eventWaitForAbilityCommit_Parms*)Obj)->TriggerOnce = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAbilityTask_WaitAbilityCommit_WaitForAbilityCommit_Statics::NewProp_TriggerOnce = { "TriggerOnce", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AbilityTask_WaitAbilityCommit_eventWaitForAbilityCommit_Parms), &Z_Construct_UFunction_UAbilityTask_WaitAbilityCommit_WaitForAbilityCommit_Statics::NewProp_TriggerOnce_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_WaitAbilityCommit_WaitForAbilityCommit_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_WaitAbilityCommit_eventWaitForAbilityCommit_Parms, ReturnValue), Z_Construct_UClass_UAbilityTask_WaitAbilityCommit_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityTask_WaitAbilityCommit_WaitForAbilityCommit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitAbilityCommit_WaitForAbilityCommit_Statics::NewProp_OwningAbility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitAbilityCommit_WaitForAbilityCommit_Statics::NewProp_WithTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitAbilityCommit_WaitForAbilityCommit_Statics::NewProp_WithoutTage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitAbilityCommit_WaitForAbilityCommit_Statics::NewProp_TriggerOnce,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitAbilityCommit_WaitForAbilityCommit_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_WaitAbilityCommit_WaitForAbilityCommit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityTask_WaitAbilityCommit_WaitForAbilityCommit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityTask_WaitAbilityCommit, nullptr, "WaitForAbilityCommit", nullptr, nullptr, Z_Construct_UFunction_UAbilityTask_WaitAbilityCommit_WaitForAbilityCommit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_WaitAbilityCommit_WaitForAbilityCommit_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAbilityTask_WaitAbilityCommit_WaitForAbilityCommit_Statics::AbilityTask_WaitAbilityCommit_eventWaitForAbilityCommit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_WaitAbilityCommit_WaitForAbilityCommit_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilityTask_WaitAbilityCommit_WaitForAbilityCommit_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAbilityTask_WaitAbilityCommit_WaitForAbilityCommit_Statics::AbilityTask_WaitAbilityCommit_eventWaitForAbilityCommit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbilityTask_WaitAbilityCommit_WaitForAbilityCommit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityTask_WaitAbilityCommit_WaitForAbilityCommit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilityTask_WaitAbilityCommit::execWaitForAbilityCommit)
{
	P_GET_OBJECT(UGameplayAbility,Z_Param_OwningAbility);
	P_GET_STRUCT(FGameplayTag,Z_Param_WithTag);
	P_GET_STRUCT(FGameplayTag,Z_Param_WithoutTage);
	P_GET_UBOOL(Z_Param_TriggerOnce);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAbilityTask_WaitAbilityCommit**)Z_Param__Result=UAbilityTask_WaitAbilityCommit::WaitForAbilityCommit(Z_Param_OwningAbility,Z_Param_WithTag,Z_Param_WithoutTage,Z_Param_TriggerOnce);
	P_NATIVE_END;
}
// End Class UAbilityTask_WaitAbilityCommit Function WaitForAbilityCommit

// Begin Class UAbilityTask_WaitAbilityCommit Function WaitForAbilityCommit_Query
struct Z_Construct_UFunction_UAbilityTask_WaitAbilityCommit_WaitForAbilityCommit_Query_Statics
{
	struct AbilityTask_WaitAbilityCommit_eventWaitForAbilityCommit_Query_Parms
	{
		UGameplayAbility* OwningAbility;
		FGameplayTagQuery Query;
		bool TriggerOnce;
		UAbilityTask_WaitAbilityCommit* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "TRUE" },
		{ "Category", "Ability|Tasks" },
		{ "CPP_Default_TriggerOnce", "true" },
		{ "DefaultToSelf", "OwningAbility" },
		{ "DisplayName", "Wait For New Ability Commit Query" },
		{ "HidePin", "OwningAbility" },
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_WaitAbilityCommit.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningAbility;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Query;
	static void NewProp_TriggerOnce_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_TriggerOnce;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_WaitAbilityCommit_WaitForAbilityCommit_Query_Statics::NewProp_OwningAbility = { "OwningAbility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_WaitAbilityCommit_eventWaitForAbilityCommit_Query_Parms, OwningAbility), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbilityTask_WaitAbilityCommit_WaitForAbilityCommit_Query_Statics::NewProp_Query = { "Query", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_WaitAbilityCommit_eventWaitForAbilityCommit_Query_Parms, Query), Z_Construct_UScriptStruct_FGameplayTagQuery, METADATA_PARAMS(0, nullptr) }; // 572225232
void Z_Construct_UFunction_UAbilityTask_WaitAbilityCommit_WaitForAbilityCommit_Query_Statics::NewProp_TriggerOnce_SetBit(void* Obj)
{
	((AbilityTask_WaitAbilityCommit_eventWaitForAbilityCommit_Query_Parms*)Obj)->TriggerOnce = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAbilityTask_WaitAbilityCommit_WaitForAbilityCommit_Query_Statics::NewProp_TriggerOnce = { "TriggerOnce", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AbilityTask_WaitAbilityCommit_eventWaitForAbilityCommit_Query_Parms), &Z_Construct_UFunction_UAbilityTask_WaitAbilityCommit_WaitForAbilityCommit_Query_Statics::NewProp_TriggerOnce_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_WaitAbilityCommit_WaitForAbilityCommit_Query_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_WaitAbilityCommit_eventWaitForAbilityCommit_Query_Parms, ReturnValue), Z_Construct_UClass_UAbilityTask_WaitAbilityCommit_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityTask_WaitAbilityCommit_WaitForAbilityCommit_Query_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitAbilityCommit_WaitForAbilityCommit_Query_Statics::NewProp_OwningAbility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitAbilityCommit_WaitForAbilityCommit_Query_Statics::NewProp_Query,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitAbilityCommit_WaitForAbilityCommit_Query_Statics::NewProp_TriggerOnce,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitAbilityCommit_WaitForAbilityCommit_Query_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_WaitAbilityCommit_WaitForAbilityCommit_Query_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityTask_WaitAbilityCommit_WaitForAbilityCommit_Query_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityTask_WaitAbilityCommit, nullptr, "WaitForAbilityCommit_Query", nullptr, nullptr, Z_Construct_UFunction_UAbilityTask_WaitAbilityCommit_WaitForAbilityCommit_Query_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_WaitAbilityCommit_WaitForAbilityCommit_Query_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAbilityTask_WaitAbilityCommit_WaitForAbilityCommit_Query_Statics::AbilityTask_WaitAbilityCommit_eventWaitForAbilityCommit_Query_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_WaitAbilityCommit_WaitForAbilityCommit_Query_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilityTask_WaitAbilityCommit_WaitForAbilityCommit_Query_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAbilityTask_WaitAbilityCommit_WaitForAbilityCommit_Query_Statics::AbilityTask_WaitAbilityCommit_eventWaitForAbilityCommit_Query_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbilityTask_WaitAbilityCommit_WaitForAbilityCommit_Query()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityTask_WaitAbilityCommit_WaitForAbilityCommit_Query_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilityTask_WaitAbilityCommit::execWaitForAbilityCommit_Query)
{
	P_GET_OBJECT(UGameplayAbility,Z_Param_OwningAbility);
	P_GET_STRUCT(FGameplayTagQuery,Z_Param_Query);
	P_GET_UBOOL(Z_Param_TriggerOnce);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAbilityTask_WaitAbilityCommit**)Z_Param__Result=UAbilityTask_WaitAbilityCommit::WaitForAbilityCommit_Query(Z_Param_OwningAbility,Z_Param_Query,Z_Param_TriggerOnce);
	P_NATIVE_END;
}
// End Class UAbilityTask_WaitAbilityCommit Function WaitForAbilityCommit_Query

// Begin Class UAbilityTask_WaitAbilityCommit
void UAbilityTask_WaitAbilityCommit::StaticRegisterNativesUAbilityTask_WaitAbilityCommit()
{
	UClass* Class = UAbilityTask_WaitAbilityCommit::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnAbilityCommit", &UAbilityTask_WaitAbilityCommit::execOnAbilityCommit },
		{ "WaitForAbilityCommit", &UAbilityTask_WaitAbilityCommit::execWaitForAbilityCommit },
		{ "WaitForAbilityCommit_Query", &UAbilityTask_WaitAbilityCommit::execWaitForAbilityCommit_Query },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAbilityTask_WaitAbilityCommit);
UClass* Z_Construct_UClass_UAbilityTask_WaitAbilityCommit_NoRegister()
{
	return UAbilityTask_WaitAbilityCommit::StaticClass();
}
struct Z_Construct_UClass_UAbilityTask_WaitAbilityCommit_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\x09Waits for the actor to activate another ability\n */" },
#endif
		{ "IncludePath", "Abilities/Tasks/AbilityTask_WaitAbilityCommit.h" },
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_WaitAbilityCommit.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Waits for the actor to activate another ability" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCommit_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_WaitAbilityCommit.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCommit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAbilityTask_WaitAbilityCommit_OnAbilityCommit, "OnAbilityCommit" }, // 3004546461
		{ &Z_Construct_UFunction_UAbilityTask_WaitAbilityCommit_WaitForAbilityCommit, "WaitForAbilityCommit" }, // 1426099854
		{ &Z_Construct_UFunction_UAbilityTask_WaitAbilityCommit_WaitForAbilityCommit_Query, "WaitForAbilityCommit_Query" }, // 825425212
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAbilityTask_WaitAbilityCommit>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAbilityTask_WaitAbilityCommit_Statics::NewProp_OnCommit = { "OnCommit", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityTask_WaitAbilityCommit, OnCommit), Z_Construct_UDelegateFunction_GameplayAbilities_WaitAbilityCommitDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCommit_MetaData), NewProp_OnCommit_MetaData) }; // 2834694073
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAbilityTask_WaitAbilityCommit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_WaitAbilityCommit_Statics::NewProp_OnCommit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_WaitAbilityCommit_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAbilityTask_WaitAbilityCommit_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAbilityTask,
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_WaitAbilityCommit_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAbilityTask_WaitAbilityCommit_Statics::ClassParams = {
	&UAbilityTask_WaitAbilityCommit::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAbilityTask_WaitAbilityCommit_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_WaitAbilityCommit_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_WaitAbilityCommit_Statics::Class_MetaDataParams), Z_Construct_UClass_UAbilityTask_WaitAbilityCommit_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAbilityTask_WaitAbilityCommit()
{
	if (!Z_Registration_Info_UClass_UAbilityTask_WaitAbilityCommit.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAbilityTask_WaitAbilityCommit.OuterSingleton, Z_Construct_UClass_UAbilityTask_WaitAbilityCommit_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAbilityTask_WaitAbilityCommit.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UClass* StaticClass<UAbilityTask_WaitAbilityCommit>()
{
	return UAbilityTask_WaitAbilityCommit::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAbilityTask_WaitAbilityCommit);
UAbilityTask_WaitAbilityCommit::~UAbilityTask_WaitAbilityCommit() {}
// End Class UAbilityTask_WaitAbilityCommit

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitAbilityCommit_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAbilityTask_WaitAbilityCommit, UAbilityTask_WaitAbilityCommit::StaticClass, TEXT("UAbilityTask_WaitAbilityCommit"), &Z_Registration_Info_UClass_UAbilityTask_WaitAbilityCommit, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAbilityTask_WaitAbilityCommit), 2386286937U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitAbilityCommit_h_2298241158(TEXT("/Script/GameplayAbilities"),
	Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitAbilityCommit_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitAbilityCommit_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
