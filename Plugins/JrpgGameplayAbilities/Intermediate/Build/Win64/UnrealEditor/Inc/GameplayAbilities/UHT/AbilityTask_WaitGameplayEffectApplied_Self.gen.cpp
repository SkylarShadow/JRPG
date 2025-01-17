// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayAbilities/Public/Abilities/Tasks/AbilityTask_WaitGameplayEffectApplied_Self.h"
#include "GameplayAbilities/Public/Abilities/GameplayAbilityTargetDataFilter.h"
#include "GameplayAbilities/Public/ActiveGameplayEffectHandle.h"
#include "GameplayAbilities/Public/GameplayEffectTypes.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbilityTask_WaitGameplayEffectApplied_Self() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask_WaitGameplayEffectApplied();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask_WaitGameplayEffectApplied_Self();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask_WaitGameplayEffectApplied_Self_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
GAMEPLAYABILITIES_API UFunction* Z_Construct_UDelegateFunction_GameplayAbilities_GameplayEffectAppliedSelfDelegate__DelegateSignature();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FActiveGameplayEffectHandle();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectSpecHandle();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagRequirements();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTargetDataFilterHandle();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagQuery();
UPackage* Z_Construct_UPackage__Script_GameplayAbilities();
// End Cross Module References

// Begin Delegate FGameplayEffectAppliedSelfDelegate
struct Z_Construct_UDelegateFunction_GameplayAbilities_GameplayEffectAppliedSelfDelegate__DelegateSignature_Statics
{
	struct _Script_GameplayAbilities_eventGameplayEffectAppliedSelfDelegate_Parms
	{
		AActor* Source;
		FGameplayEffectSpecHandle SpecHandle;
		FActiveGameplayEffectHandle ActiveHandle;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_WaitGameplayEffectApplied_Self.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Source;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpecHandle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActiveHandle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_GameplayAbilities_GameplayEffectAppliedSelfDelegate__DelegateSignature_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_GameplayAbilities_eventGameplayEffectAppliedSelfDelegate_Parms, Source), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_GameplayAbilities_GameplayEffectAppliedSelfDelegate__DelegateSignature_Statics::NewProp_SpecHandle = { "SpecHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_GameplayAbilities_eventGameplayEffectAppliedSelfDelegate_Parms, SpecHandle), Z_Construct_UScriptStruct_FGameplayEffectSpecHandle, METADATA_PARAMS(0, nullptr) }; // 853282864
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_GameplayAbilities_GameplayEffectAppliedSelfDelegate__DelegateSignature_Statics::NewProp_ActiveHandle = { "ActiveHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_GameplayAbilities_eventGameplayEffectAppliedSelfDelegate_Parms, ActiveHandle), Z_Construct_UScriptStruct_FActiveGameplayEffectHandle, METADATA_PARAMS(0, nullptr) }; // 11669558
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GameplayAbilities_GameplayEffectAppliedSelfDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GameplayAbilities_GameplayEffectAppliedSelfDelegate__DelegateSignature_Statics::NewProp_Source,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GameplayAbilities_GameplayEffectAppliedSelfDelegate__DelegateSignature_Statics::NewProp_SpecHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GameplayAbilities_GameplayEffectAppliedSelfDelegate__DelegateSignature_Statics::NewProp_ActiveHandle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameplayAbilities_GameplayEffectAppliedSelfDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GameplayAbilities_GameplayEffectAppliedSelfDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GameplayAbilities, nullptr, "GameplayEffectAppliedSelfDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_GameplayAbilities_GameplayEffectAppliedSelfDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameplayAbilities_GameplayEffectAppliedSelfDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_GameplayAbilities_GameplayEffectAppliedSelfDelegate__DelegateSignature_Statics::_Script_GameplayAbilities_eventGameplayEffectAppliedSelfDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameplayAbilities_GameplayEffectAppliedSelfDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_GameplayAbilities_GameplayEffectAppliedSelfDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_GameplayAbilities_GameplayEffectAppliedSelfDelegate__DelegateSignature_Statics::_Script_GameplayAbilities_eventGameplayEffectAppliedSelfDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_GameplayAbilities_GameplayEffectAppliedSelfDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_GameplayAbilities_GameplayEffectAppliedSelfDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FGameplayEffectAppliedSelfDelegate_DelegateWrapper(const FMulticastScriptDelegate& GameplayEffectAppliedSelfDelegate, AActor* Source, FGameplayEffectSpecHandle SpecHandle, FActiveGameplayEffectHandle ActiveHandle)
{
	struct _Script_GameplayAbilities_eventGameplayEffectAppliedSelfDelegate_Parms
	{
		AActor* Source;
		FGameplayEffectSpecHandle SpecHandle;
		FActiveGameplayEffectHandle ActiveHandle;
	};
	_Script_GameplayAbilities_eventGameplayEffectAppliedSelfDelegate_Parms Parms;
	Parms.Source=Source;
	Parms.SpecHandle=SpecHandle;
	Parms.ActiveHandle=ActiveHandle;
	GameplayEffectAppliedSelfDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FGameplayEffectAppliedSelfDelegate

// Begin Class UAbilityTask_WaitGameplayEffectApplied_Self Function WaitGameplayEffectAppliedToSelf
struct Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectApplied_Self_WaitGameplayEffectAppliedToSelf_Statics
{
	struct AbilityTask_WaitGameplayEffectApplied_Self_eventWaitGameplayEffectAppliedToSelf_Parms
	{
		UGameplayAbility* OwningAbility;
		FGameplayTargetDataFilterHandle SourceFilter;
		FGameplayTagRequirements SourceTagRequirements;
		FGameplayTagRequirements TargetTagRequirements;
		bool TriggerOnce;
		AActor* OptionalExternalOwner;
		bool ListenForPeriodicEffect;
		UAbilityTask_WaitGameplayEffectApplied_Self* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "TRUE" },
		{ "Category", "Ability|Tasks" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\x09 \n\x09 * Wait until the owner *receives* a GameplayEffect from a given source (the source may be the owner too!). If TriggerOnce is true, this task will only return one time. Otherwise it will return everytime a GE is applied that meets the requirements over the life of the ability\n\x09 * Optional External Owner can be used to run this task on someone else (not the owner of the ability). By default you can leave this empty.\n\x09 */" },
#endif
		{ "CPP_Default_ListenForPeriodicEffect", "false" },
		{ "CPP_Default_OptionalExternalOwner", "None" },
		{ "CPP_Default_TriggerOnce", "false" },
		{ "DefaultToSelf", "OwningAbility" },
		{ "HidePin", "OwningAbility" },
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_WaitGameplayEffectApplied_Self.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Wait until the owner *receives* a GameplayEffect from a given source (the source may be the owner too!). If TriggerOnce is true, this task will only return one time. Otherwise it will return everytime a GE is applied that meets the requirements over the life of the ability\nOptional External Owner can be used to run this task on someone else (not the owner of the ability). By default you can leave this empty." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceFilter_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningAbility;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SourceFilter;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SourceTagRequirements;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetTagRequirements;
	static void NewProp_TriggerOnce_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_TriggerOnce;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OptionalExternalOwner;
	static void NewProp_ListenForPeriodicEffect_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ListenForPeriodicEffect;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectApplied_Self_WaitGameplayEffectAppliedToSelf_Statics::NewProp_OwningAbility = { "OwningAbility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_WaitGameplayEffectApplied_Self_eventWaitGameplayEffectAppliedToSelf_Parms, OwningAbility), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectApplied_Self_WaitGameplayEffectAppliedToSelf_Statics::NewProp_SourceFilter = { "SourceFilter", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_WaitGameplayEffectApplied_Self_eventWaitGameplayEffectAppliedToSelf_Parms, SourceFilter), Z_Construct_UScriptStruct_FGameplayTargetDataFilterHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceFilter_MetaData), NewProp_SourceFilter_MetaData) }; // 1470987265
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectApplied_Self_WaitGameplayEffectAppliedToSelf_Statics::NewProp_SourceTagRequirements = { "SourceTagRequirements", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_WaitGameplayEffectApplied_Self_eventWaitGameplayEffectAppliedToSelf_Parms, SourceTagRequirements), Z_Construct_UScriptStruct_FGameplayTagRequirements, METADATA_PARAMS(0, nullptr) }; // 3067797139
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectApplied_Self_WaitGameplayEffectAppliedToSelf_Statics::NewProp_TargetTagRequirements = { "TargetTagRequirements", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_WaitGameplayEffectApplied_Self_eventWaitGameplayEffectAppliedToSelf_Parms, TargetTagRequirements), Z_Construct_UScriptStruct_FGameplayTagRequirements, METADATA_PARAMS(0, nullptr) }; // 3067797139
void Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectApplied_Self_WaitGameplayEffectAppliedToSelf_Statics::NewProp_TriggerOnce_SetBit(void* Obj)
{
	((AbilityTask_WaitGameplayEffectApplied_Self_eventWaitGameplayEffectAppliedToSelf_Parms*)Obj)->TriggerOnce = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectApplied_Self_WaitGameplayEffectAppliedToSelf_Statics::NewProp_TriggerOnce = { "TriggerOnce", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AbilityTask_WaitGameplayEffectApplied_Self_eventWaitGameplayEffectAppliedToSelf_Parms), &Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectApplied_Self_WaitGameplayEffectAppliedToSelf_Statics::NewProp_TriggerOnce_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectApplied_Self_WaitGameplayEffectAppliedToSelf_Statics::NewProp_OptionalExternalOwner = { "OptionalExternalOwner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_WaitGameplayEffectApplied_Self_eventWaitGameplayEffectAppliedToSelf_Parms, OptionalExternalOwner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectApplied_Self_WaitGameplayEffectAppliedToSelf_Statics::NewProp_ListenForPeriodicEffect_SetBit(void* Obj)
{
	((AbilityTask_WaitGameplayEffectApplied_Self_eventWaitGameplayEffectAppliedToSelf_Parms*)Obj)->ListenForPeriodicEffect = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectApplied_Self_WaitGameplayEffectAppliedToSelf_Statics::NewProp_ListenForPeriodicEffect = { "ListenForPeriodicEffect", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AbilityTask_WaitGameplayEffectApplied_Self_eventWaitGameplayEffectAppliedToSelf_Parms), &Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectApplied_Self_WaitGameplayEffectAppliedToSelf_Statics::NewProp_ListenForPeriodicEffect_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectApplied_Self_WaitGameplayEffectAppliedToSelf_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_WaitGameplayEffectApplied_Self_eventWaitGameplayEffectAppliedToSelf_Parms, ReturnValue), Z_Construct_UClass_UAbilityTask_WaitGameplayEffectApplied_Self_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectApplied_Self_WaitGameplayEffectAppliedToSelf_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectApplied_Self_WaitGameplayEffectAppliedToSelf_Statics::NewProp_OwningAbility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectApplied_Self_WaitGameplayEffectAppliedToSelf_Statics::NewProp_SourceFilter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectApplied_Self_WaitGameplayEffectAppliedToSelf_Statics::NewProp_SourceTagRequirements,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectApplied_Self_WaitGameplayEffectAppliedToSelf_Statics::NewProp_TargetTagRequirements,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectApplied_Self_WaitGameplayEffectAppliedToSelf_Statics::NewProp_TriggerOnce,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectApplied_Self_WaitGameplayEffectAppliedToSelf_Statics::NewProp_OptionalExternalOwner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectApplied_Self_WaitGameplayEffectAppliedToSelf_Statics::NewProp_ListenForPeriodicEffect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectApplied_Self_WaitGameplayEffectAppliedToSelf_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectApplied_Self_WaitGameplayEffectAppliedToSelf_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectApplied_Self_WaitGameplayEffectAppliedToSelf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityTask_WaitGameplayEffectApplied_Self, nullptr, "WaitGameplayEffectAppliedToSelf", nullptr, nullptr, Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectApplied_Self_WaitGameplayEffectAppliedToSelf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectApplied_Self_WaitGameplayEffectAppliedToSelf_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectApplied_Self_WaitGameplayEffectAppliedToSelf_Statics::AbilityTask_WaitGameplayEffectApplied_Self_eventWaitGameplayEffectAppliedToSelf_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectApplied_Self_WaitGameplayEffectAppliedToSelf_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectApplied_Self_WaitGameplayEffectAppliedToSelf_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectApplied_Self_WaitGameplayEffectAppliedToSelf_Statics::AbilityTask_WaitGameplayEffectApplied_Self_eventWaitGameplayEffectAppliedToSelf_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectApplied_Self_WaitGameplayEffectAppliedToSelf()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectApplied_Self_WaitGameplayEffectAppliedToSelf_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilityTask_WaitGameplayEffectApplied_Self::execWaitGameplayEffectAppliedToSelf)
{
	P_GET_OBJECT(UGameplayAbility,Z_Param_OwningAbility);
	P_GET_STRUCT(FGameplayTargetDataFilterHandle,Z_Param_SourceFilter);
	P_GET_STRUCT(FGameplayTagRequirements,Z_Param_SourceTagRequirements);
	P_GET_STRUCT(FGameplayTagRequirements,Z_Param_TargetTagRequirements);
	P_GET_UBOOL(Z_Param_TriggerOnce);
	P_GET_OBJECT(AActor,Z_Param_OptionalExternalOwner);
	P_GET_UBOOL(Z_Param_ListenForPeriodicEffect);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAbilityTask_WaitGameplayEffectApplied_Self**)Z_Param__Result=UAbilityTask_WaitGameplayEffectApplied_Self::WaitGameplayEffectAppliedToSelf(Z_Param_OwningAbility,Z_Param_SourceFilter,Z_Param_SourceTagRequirements,Z_Param_TargetTagRequirements,Z_Param_TriggerOnce,Z_Param_OptionalExternalOwner,Z_Param_ListenForPeriodicEffect);
	P_NATIVE_END;
}
// End Class UAbilityTask_WaitGameplayEffectApplied_Self Function WaitGameplayEffectAppliedToSelf

// Begin Class UAbilityTask_WaitGameplayEffectApplied_Self Function WaitGameplayEffectAppliedToSelf_Query
struct Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectApplied_Self_WaitGameplayEffectAppliedToSelf_Query_Statics
{
	struct AbilityTask_WaitGameplayEffectApplied_Self_eventWaitGameplayEffectAppliedToSelf_Query_Parms
	{
		UGameplayAbility* OwningAbility;
		FGameplayTargetDataFilterHandle SourceFilter;
		FGameplayTagQuery SourceTagQuery;
		FGameplayTagQuery TargetTagQuery;
		bool TriggerOnce;
		AActor* OptionalExternalOwner;
		bool ListenForPeriodicEffect;
		UAbilityTask_WaitGameplayEffectApplied_Self* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "TRUE" },
		{ "Category", "Ability|Tasks" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\x09 \n\x09 * Wait until the owner *receives* a GameplayEffect from a given source (the source may be the owner too!). If TriggerOnce is true, this task will only return one time. Otherwise it will return everytime a GE is applied that meets the requirements over the life of the ability\n\x09 * Optional External Owner can be used to run this task on someone else (not the owner of the ability). By default you can leave this empty.\n\x09 *\n\x09 * This version uses FGameplayTagQuery (more power) instead of FGameplayTagRequirements (faster)\n\x09 */" },
#endif
		{ "CPP_Default_ListenForPeriodicEffect", "false" },
		{ "CPP_Default_OptionalExternalOwner", "None" },
		{ "CPP_Default_TriggerOnce", "false" },
		{ "DefaultToSelf", "OwningAbility" },
		{ "HidePin", "OwningAbility" },
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_WaitGameplayEffectApplied_Self.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Wait until the owner *receives* a GameplayEffect from a given source (the source may be the owner too!). If TriggerOnce is true, this task will only return one time. Otherwise it will return everytime a GE is applied that meets the requirements over the life of the ability\nOptional External Owner can be used to run this task on someone else (not the owner of the ability). By default you can leave this empty.\n\nThis version uses FGameplayTagQuery (more power) instead of FGameplayTagRequirements (faster)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceFilter_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningAbility;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SourceFilter;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SourceTagQuery;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetTagQuery;
	static void NewProp_TriggerOnce_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_TriggerOnce;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OptionalExternalOwner;
	static void NewProp_ListenForPeriodicEffect_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ListenForPeriodicEffect;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectApplied_Self_WaitGameplayEffectAppliedToSelf_Query_Statics::NewProp_OwningAbility = { "OwningAbility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_WaitGameplayEffectApplied_Self_eventWaitGameplayEffectAppliedToSelf_Query_Parms, OwningAbility), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectApplied_Self_WaitGameplayEffectAppliedToSelf_Query_Statics::NewProp_SourceFilter = { "SourceFilter", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_WaitGameplayEffectApplied_Self_eventWaitGameplayEffectAppliedToSelf_Query_Parms, SourceFilter), Z_Construct_UScriptStruct_FGameplayTargetDataFilterHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceFilter_MetaData), NewProp_SourceFilter_MetaData) }; // 1470987265
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectApplied_Self_WaitGameplayEffectAppliedToSelf_Query_Statics::NewProp_SourceTagQuery = { "SourceTagQuery", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_WaitGameplayEffectApplied_Self_eventWaitGameplayEffectAppliedToSelf_Query_Parms, SourceTagQuery), Z_Construct_UScriptStruct_FGameplayTagQuery, METADATA_PARAMS(0, nullptr) }; // 572225232
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectApplied_Self_WaitGameplayEffectAppliedToSelf_Query_Statics::NewProp_TargetTagQuery = { "TargetTagQuery", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_WaitGameplayEffectApplied_Self_eventWaitGameplayEffectAppliedToSelf_Query_Parms, TargetTagQuery), Z_Construct_UScriptStruct_FGameplayTagQuery, METADATA_PARAMS(0, nullptr) }; // 572225232
void Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectApplied_Self_WaitGameplayEffectAppliedToSelf_Query_Statics::NewProp_TriggerOnce_SetBit(void* Obj)
{
	((AbilityTask_WaitGameplayEffectApplied_Self_eventWaitGameplayEffectAppliedToSelf_Query_Parms*)Obj)->TriggerOnce = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectApplied_Self_WaitGameplayEffectAppliedToSelf_Query_Statics::NewProp_TriggerOnce = { "TriggerOnce", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AbilityTask_WaitGameplayEffectApplied_Self_eventWaitGameplayEffectAppliedToSelf_Query_Parms), &Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectApplied_Self_WaitGameplayEffectAppliedToSelf_Query_Statics::NewProp_TriggerOnce_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectApplied_Self_WaitGameplayEffectAppliedToSelf_Query_Statics::NewProp_OptionalExternalOwner = { "OptionalExternalOwner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_WaitGameplayEffectApplied_Self_eventWaitGameplayEffectAppliedToSelf_Query_Parms, OptionalExternalOwner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectApplied_Self_WaitGameplayEffectAppliedToSelf_Query_Statics::NewProp_ListenForPeriodicEffect_SetBit(void* Obj)
{
	((AbilityTask_WaitGameplayEffectApplied_Self_eventWaitGameplayEffectAppliedToSelf_Query_Parms*)Obj)->ListenForPeriodicEffect = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectApplied_Self_WaitGameplayEffectAppliedToSelf_Query_Statics::NewProp_ListenForPeriodicEffect = { "ListenForPeriodicEffect", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AbilityTask_WaitGameplayEffectApplied_Self_eventWaitGameplayEffectAppliedToSelf_Query_Parms), &Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectApplied_Self_WaitGameplayEffectAppliedToSelf_Query_Statics::NewProp_ListenForPeriodicEffect_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectApplied_Self_WaitGameplayEffectAppliedToSelf_Query_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_WaitGameplayEffectApplied_Self_eventWaitGameplayEffectAppliedToSelf_Query_Parms, ReturnValue), Z_Construct_UClass_UAbilityTask_WaitGameplayEffectApplied_Self_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectApplied_Self_WaitGameplayEffectAppliedToSelf_Query_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectApplied_Self_WaitGameplayEffectAppliedToSelf_Query_Statics::NewProp_OwningAbility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectApplied_Self_WaitGameplayEffectAppliedToSelf_Query_Statics::NewProp_SourceFilter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectApplied_Self_WaitGameplayEffectAppliedToSelf_Query_Statics::NewProp_SourceTagQuery,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectApplied_Self_WaitGameplayEffectAppliedToSelf_Query_Statics::NewProp_TargetTagQuery,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectApplied_Self_WaitGameplayEffectAppliedToSelf_Query_Statics::NewProp_TriggerOnce,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectApplied_Self_WaitGameplayEffectAppliedToSelf_Query_Statics::NewProp_OptionalExternalOwner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectApplied_Self_WaitGameplayEffectAppliedToSelf_Query_Statics::NewProp_ListenForPeriodicEffect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectApplied_Self_WaitGameplayEffectAppliedToSelf_Query_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectApplied_Self_WaitGameplayEffectAppliedToSelf_Query_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectApplied_Self_WaitGameplayEffectAppliedToSelf_Query_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityTask_WaitGameplayEffectApplied_Self, nullptr, "WaitGameplayEffectAppliedToSelf_Query", nullptr, nullptr, Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectApplied_Self_WaitGameplayEffectAppliedToSelf_Query_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectApplied_Self_WaitGameplayEffectAppliedToSelf_Query_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectApplied_Self_WaitGameplayEffectAppliedToSelf_Query_Statics::AbilityTask_WaitGameplayEffectApplied_Self_eventWaitGameplayEffectAppliedToSelf_Query_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectApplied_Self_WaitGameplayEffectAppliedToSelf_Query_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectApplied_Self_WaitGameplayEffectAppliedToSelf_Query_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectApplied_Self_WaitGameplayEffectAppliedToSelf_Query_Statics::AbilityTask_WaitGameplayEffectApplied_Self_eventWaitGameplayEffectAppliedToSelf_Query_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectApplied_Self_WaitGameplayEffectAppliedToSelf_Query()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectApplied_Self_WaitGameplayEffectAppliedToSelf_Query_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilityTask_WaitGameplayEffectApplied_Self::execWaitGameplayEffectAppliedToSelf_Query)
{
	P_GET_OBJECT(UGameplayAbility,Z_Param_OwningAbility);
	P_GET_STRUCT(FGameplayTargetDataFilterHandle,Z_Param_SourceFilter);
	P_GET_STRUCT(FGameplayTagQuery,Z_Param_SourceTagQuery);
	P_GET_STRUCT(FGameplayTagQuery,Z_Param_TargetTagQuery);
	P_GET_UBOOL(Z_Param_TriggerOnce);
	P_GET_OBJECT(AActor,Z_Param_OptionalExternalOwner);
	P_GET_UBOOL(Z_Param_ListenForPeriodicEffect);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAbilityTask_WaitGameplayEffectApplied_Self**)Z_Param__Result=UAbilityTask_WaitGameplayEffectApplied_Self::WaitGameplayEffectAppliedToSelf_Query(Z_Param_OwningAbility,Z_Param_SourceFilter,Z_Param_SourceTagQuery,Z_Param_TargetTagQuery,Z_Param_TriggerOnce,Z_Param_OptionalExternalOwner,Z_Param_ListenForPeriodicEffect);
	P_NATIVE_END;
}
// End Class UAbilityTask_WaitGameplayEffectApplied_Self Function WaitGameplayEffectAppliedToSelf_Query

// Begin Class UAbilityTask_WaitGameplayEffectApplied_Self
void UAbilityTask_WaitGameplayEffectApplied_Self::StaticRegisterNativesUAbilityTask_WaitGameplayEffectApplied_Self()
{
	UClass* Class = UAbilityTask_WaitGameplayEffectApplied_Self::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "WaitGameplayEffectAppliedToSelf", &UAbilityTask_WaitGameplayEffectApplied_Self::execWaitGameplayEffectAppliedToSelf },
		{ "WaitGameplayEffectAppliedToSelf_Query", &UAbilityTask_WaitGameplayEffectApplied_Self::execWaitGameplayEffectAppliedToSelf_Query },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAbilityTask_WaitGameplayEffectApplied_Self);
UClass* Z_Construct_UClass_UAbilityTask_WaitGameplayEffectApplied_Self_NoRegister()
{
	return UAbilityTask_WaitGameplayEffectApplied_Self::StaticClass();
}
struct Z_Construct_UClass_UAbilityTask_WaitGameplayEffectApplied_Self_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Abilities/Tasks/AbilityTask_WaitGameplayEffectApplied_Self.h" },
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_WaitGameplayEffectApplied_Self.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnApplied_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_WaitGameplayEffectApplied_Self.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnApplied;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectApplied_Self_WaitGameplayEffectAppliedToSelf, "WaitGameplayEffectAppliedToSelf" }, // 1317121907
		{ &Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectApplied_Self_WaitGameplayEffectAppliedToSelf_Query, "WaitGameplayEffectAppliedToSelf_Query" }, // 1135837462
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAbilityTask_WaitGameplayEffectApplied_Self>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAbilityTask_WaitGameplayEffectApplied_Self_Statics::NewProp_OnApplied = { "OnApplied", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityTask_WaitGameplayEffectApplied_Self, OnApplied), Z_Construct_UDelegateFunction_GameplayAbilities_GameplayEffectAppliedSelfDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnApplied_MetaData), NewProp_OnApplied_MetaData) }; // 3370075298
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAbilityTask_WaitGameplayEffectApplied_Self_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_WaitGameplayEffectApplied_Self_Statics::NewProp_OnApplied,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_WaitGameplayEffectApplied_Self_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAbilityTask_WaitGameplayEffectApplied_Self_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAbilityTask_WaitGameplayEffectApplied,
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_WaitGameplayEffectApplied_Self_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAbilityTask_WaitGameplayEffectApplied_Self_Statics::ClassParams = {
	&UAbilityTask_WaitGameplayEffectApplied_Self::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAbilityTask_WaitGameplayEffectApplied_Self_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_WaitGameplayEffectApplied_Self_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_WaitGameplayEffectApplied_Self_Statics::Class_MetaDataParams), Z_Construct_UClass_UAbilityTask_WaitGameplayEffectApplied_Self_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAbilityTask_WaitGameplayEffectApplied_Self()
{
	if (!Z_Registration_Info_UClass_UAbilityTask_WaitGameplayEffectApplied_Self.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAbilityTask_WaitGameplayEffectApplied_Self.OuterSingleton, Z_Construct_UClass_UAbilityTask_WaitGameplayEffectApplied_Self_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAbilityTask_WaitGameplayEffectApplied_Self.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UClass* StaticClass<UAbilityTask_WaitGameplayEffectApplied_Self>()
{
	return UAbilityTask_WaitGameplayEffectApplied_Self::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAbilityTask_WaitGameplayEffectApplied_Self);
UAbilityTask_WaitGameplayEffectApplied_Self::~UAbilityTask_WaitGameplayEffectApplied_Self() {}
// End Class UAbilityTask_WaitGameplayEffectApplied_Self

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayEffectApplied_Self_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAbilityTask_WaitGameplayEffectApplied_Self, UAbilityTask_WaitGameplayEffectApplied_Self::StaticClass, TEXT("UAbilityTask_WaitGameplayEffectApplied_Self"), &Z_Registration_Info_UClass_UAbilityTask_WaitGameplayEffectApplied_Self, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAbilityTask_WaitGameplayEffectApplied_Self), 3471407933U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayEffectApplied_Self_h_745776013(TEXT("/Script/GameplayAbilities"),
	Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayEffectApplied_Self_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayEffectApplied_Self_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
