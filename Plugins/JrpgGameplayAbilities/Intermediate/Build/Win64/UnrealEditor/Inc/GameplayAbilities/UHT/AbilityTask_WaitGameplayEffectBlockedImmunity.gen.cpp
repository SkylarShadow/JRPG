// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayAbilities/Public/Abilities/Tasks/AbilityTask_WaitGameplayEffectBlockedImmunity.h"
#include "GameplayAbilities/Public/ActiveGameplayEffectHandle.h"
#include "GameplayAbilities/Public/GameplayEffectTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbilityTask_WaitGameplayEffectBlockedImmunity() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask_WaitGameplayEffectBlockedImmunity();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask_WaitGameplayEffectBlockedImmunity_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
GAMEPLAYABILITIES_API UFunction* Z_Construct_UDelegateFunction_GameplayAbilities_GameplayEffectBlockedDelegate__DelegateSignature();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FActiveGameplayEffectHandle();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectSpecHandle();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagRequirements();
UPackage* Z_Construct_UPackage__Script_GameplayAbilities();
// End Cross Module References

// Begin Delegate FGameplayEffectBlockedDelegate
struct Z_Construct_UDelegateFunction_GameplayAbilities_GameplayEffectBlockedDelegate__DelegateSignature_Statics
{
	struct _Script_GameplayAbilities_eventGameplayEffectBlockedDelegate_Parms
	{
		FGameplayEffectSpecHandle BlockedSpec;
		FActiveGameplayEffectHandle ImmunityGameplayEffectHandle;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_WaitGameplayEffectBlockedImmunity.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_BlockedSpec;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ImmunityGameplayEffectHandle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_GameplayAbilities_GameplayEffectBlockedDelegate__DelegateSignature_Statics::NewProp_BlockedSpec = { "BlockedSpec", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_GameplayAbilities_eventGameplayEffectBlockedDelegate_Parms, BlockedSpec), Z_Construct_UScriptStruct_FGameplayEffectSpecHandle, METADATA_PARAMS(0, nullptr) }; // 853282864
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_GameplayAbilities_GameplayEffectBlockedDelegate__DelegateSignature_Statics::NewProp_ImmunityGameplayEffectHandle = { "ImmunityGameplayEffectHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_GameplayAbilities_eventGameplayEffectBlockedDelegate_Parms, ImmunityGameplayEffectHandle), Z_Construct_UScriptStruct_FActiveGameplayEffectHandle, METADATA_PARAMS(0, nullptr) }; // 11669558
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GameplayAbilities_GameplayEffectBlockedDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GameplayAbilities_GameplayEffectBlockedDelegate__DelegateSignature_Statics::NewProp_BlockedSpec,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GameplayAbilities_GameplayEffectBlockedDelegate__DelegateSignature_Statics::NewProp_ImmunityGameplayEffectHandle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameplayAbilities_GameplayEffectBlockedDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GameplayAbilities_GameplayEffectBlockedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GameplayAbilities, nullptr, "GameplayEffectBlockedDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_GameplayAbilities_GameplayEffectBlockedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameplayAbilities_GameplayEffectBlockedDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_GameplayAbilities_GameplayEffectBlockedDelegate__DelegateSignature_Statics::_Script_GameplayAbilities_eventGameplayEffectBlockedDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameplayAbilities_GameplayEffectBlockedDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_GameplayAbilities_GameplayEffectBlockedDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_GameplayAbilities_GameplayEffectBlockedDelegate__DelegateSignature_Statics::_Script_GameplayAbilities_eventGameplayEffectBlockedDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_GameplayAbilities_GameplayEffectBlockedDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_GameplayAbilities_GameplayEffectBlockedDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FGameplayEffectBlockedDelegate_DelegateWrapper(const FMulticastScriptDelegate& GameplayEffectBlockedDelegate, FGameplayEffectSpecHandle BlockedSpec, FActiveGameplayEffectHandle ImmunityGameplayEffectHandle)
{
	struct _Script_GameplayAbilities_eventGameplayEffectBlockedDelegate_Parms
	{
		FGameplayEffectSpecHandle BlockedSpec;
		FActiveGameplayEffectHandle ImmunityGameplayEffectHandle;
	};
	_Script_GameplayAbilities_eventGameplayEffectBlockedDelegate_Parms Parms;
	Parms.BlockedSpec=BlockedSpec;
	Parms.ImmunityGameplayEffectHandle=ImmunityGameplayEffectHandle;
	GameplayEffectBlockedDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FGameplayEffectBlockedDelegate

// Begin Class UAbilityTask_WaitGameplayEffectBlockedImmunity Function WaitGameplayEffectBlockedByImmunity
struct Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectBlockedImmunity_WaitGameplayEffectBlockedByImmunity_Statics
{
	struct AbilityTask_WaitGameplayEffectBlockedImmunity_eventWaitGameplayEffectBlockedByImmunity_Parms
	{
		UGameplayAbility* OwningAbility;
		FGameplayTagRequirements SourceTagRequirements;
		FGameplayTagRequirements TargetTagRequirements;
		AActor* OptionalExternalTarget;
		bool OnlyTriggerOnce;
		UAbilityTask_WaitGameplayEffectBlockedImmunity* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "TRUE" },
		{ "Category", "Ability|Tasks" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Listens for GE immunity. By default this means \"this hero blocked a GE due to immunity\". Setting OptionalExternalTarget will listen for a GE being blocked on an external target. Note this only works on the server. */" },
#endif
		{ "CPP_Default_OnlyTriggerOnce", "false" },
		{ "CPP_Default_OptionalExternalTarget", "None" },
		{ "DefaultToSelf", "OwningAbility" },
		{ "HidePin", "OwningAbility" },
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_WaitGameplayEffectBlockedImmunity.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Listens for GE immunity. By default this means \"this hero blocked a GE due to immunity\". Setting OptionalExternalTarget will listen for a GE being blocked on an external target. Note this only works on the server." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningAbility;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SourceTagRequirements;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetTagRequirements;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OptionalExternalTarget;
	static void NewProp_OnlyTriggerOnce_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_OnlyTriggerOnce;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectBlockedImmunity_WaitGameplayEffectBlockedByImmunity_Statics::NewProp_OwningAbility = { "OwningAbility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_WaitGameplayEffectBlockedImmunity_eventWaitGameplayEffectBlockedByImmunity_Parms, OwningAbility), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectBlockedImmunity_WaitGameplayEffectBlockedByImmunity_Statics::NewProp_SourceTagRequirements = { "SourceTagRequirements", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_WaitGameplayEffectBlockedImmunity_eventWaitGameplayEffectBlockedByImmunity_Parms, SourceTagRequirements), Z_Construct_UScriptStruct_FGameplayTagRequirements, METADATA_PARAMS(0, nullptr) }; // 3067797139
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectBlockedImmunity_WaitGameplayEffectBlockedByImmunity_Statics::NewProp_TargetTagRequirements = { "TargetTagRequirements", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_WaitGameplayEffectBlockedImmunity_eventWaitGameplayEffectBlockedByImmunity_Parms, TargetTagRequirements), Z_Construct_UScriptStruct_FGameplayTagRequirements, METADATA_PARAMS(0, nullptr) }; // 3067797139
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectBlockedImmunity_WaitGameplayEffectBlockedByImmunity_Statics::NewProp_OptionalExternalTarget = { "OptionalExternalTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_WaitGameplayEffectBlockedImmunity_eventWaitGameplayEffectBlockedByImmunity_Parms, OptionalExternalTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectBlockedImmunity_WaitGameplayEffectBlockedByImmunity_Statics::NewProp_OnlyTriggerOnce_SetBit(void* Obj)
{
	((AbilityTask_WaitGameplayEffectBlockedImmunity_eventWaitGameplayEffectBlockedByImmunity_Parms*)Obj)->OnlyTriggerOnce = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectBlockedImmunity_WaitGameplayEffectBlockedByImmunity_Statics::NewProp_OnlyTriggerOnce = { "OnlyTriggerOnce", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AbilityTask_WaitGameplayEffectBlockedImmunity_eventWaitGameplayEffectBlockedByImmunity_Parms), &Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectBlockedImmunity_WaitGameplayEffectBlockedByImmunity_Statics::NewProp_OnlyTriggerOnce_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectBlockedImmunity_WaitGameplayEffectBlockedByImmunity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_WaitGameplayEffectBlockedImmunity_eventWaitGameplayEffectBlockedByImmunity_Parms, ReturnValue), Z_Construct_UClass_UAbilityTask_WaitGameplayEffectBlockedImmunity_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectBlockedImmunity_WaitGameplayEffectBlockedByImmunity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectBlockedImmunity_WaitGameplayEffectBlockedByImmunity_Statics::NewProp_OwningAbility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectBlockedImmunity_WaitGameplayEffectBlockedByImmunity_Statics::NewProp_SourceTagRequirements,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectBlockedImmunity_WaitGameplayEffectBlockedByImmunity_Statics::NewProp_TargetTagRequirements,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectBlockedImmunity_WaitGameplayEffectBlockedByImmunity_Statics::NewProp_OptionalExternalTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectBlockedImmunity_WaitGameplayEffectBlockedByImmunity_Statics::NewProp_OnlyTriggerOnce,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectBlockedImmunity_WaitGameplayEffectBlockedByImmunity_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectBlockedImmunity_WaitGameplayEffectBlockedByImmunity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectBlockedImmunity_WaitGameplayEffectBlockedByImmunity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityTask_WaitGameplayEffectBlockedImmunity, nullptr, "WaitGameplayEffectBlockedByImmunity", nullptr, nullptr, Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectBlockedImmunity_WaitGameplayEffectBlockedByImmunity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectBlockedImmunity_WaitGameplayEffectBlockedByImmunity_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectBlockedImmunity_WaitGameplayEffectBlockedByImmunity_Statics::AbilityTask_WaitGameplayEffectBlockedImmunity_eventWaitGameplayEffectBlockedByImmunity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectBlockedImmunity_WaitGameplayEffectBlockedByImmunity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectBlockedImmunity_WaitGameplayEffectBlockedByImmunity_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectBlockedImmunity_WaitGameplayEffectBlockedByImmunity_Statics::AbilityTask_WaitGameplayEffectBlockedImmunity_eventWaitGameplayEffectBlockedByImmunity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectBlockedImmunity_WaitGameplayEffectBlockedByImmunity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectBlockedImmunity_WaitGameplayEffectBlockedByImmunity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilityTask_WaitGameplayEffectBlockedImmunity::execWaitGameplayEffectBlockedByImmunity)
{
	P_GET_OBJECT(UGameplayAbility,Z_Param_OwningAbility);
	P_GET_STRUCT(FGameplayTagRequirements,Z_Param_SourceTagRequirements);
	P_GET_STRUCT(FGameplayTagRequirements,Z_Param_TargetTagRequirements);
	P_GET_OBJECT(AActor,Z_Param_OptionalExternalTarget);
	P_GET_UBOOL(Z_Param_OnlyTriggerOnce);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAbilityTask_WaitGameplayEffectBlockedImmunity**)Z_Param__Result=UAbilityTask_WaitGameplayEffectBlockedImmunity::WaitGameplayEffectBlockedByImmunity(Z_Param_OwningAbility,Z_Param_SourceTagRequirements,Z_Param_TargetTagRequirements,Z_Param_OptionalExternalTarget,Z_Param_OnlyTriggerOnce);
	P_NATIVE_END;
}
// End Class UAbilityTask_WaitGameplayEffectBlockedImmunity Function WaitGameplayEffectBlockedByImmunity

// Begin Class UAbilityTask_WaitGameplayEffectBlockedImmunity
void UAbilityTask_WaitGameplayEffectBlockedImmunity::StaticRegisterNativesUAbilityTask_WaitGameplayEffectBlockedImmunity()
{
	UClass* Class = UAbilityTask_WaitGameplayEffectBlockedImmunity::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "WaitGameplayEffectBlockedByImmunity", &UAbilityTask_WaitGameplayEffectBlockedImmunity::execWaitGameplayEffectBlockedByImmunity },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAbilityTask_WaitGameplayEffectBlockedImmunity);
UClass* Z_Construct_UClass_UAbilityTask_WaitGameplayEffectBlockedImmunity_NoRegister()
{
	return UAbilityTask_WaitGameplayEffectBlockedImmunity::StaticClass();
}
struct Z_Construct_UClass_UAbilityTask_WaitGameplayEffectBlockedImmunity_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Abilities/Tasks/AbilityTask_WaitGameplayEffectBlockedImmunity.h" },
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_WaitGameplayEffectBlockedImmunity.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Blocked_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_WaitGameplayEffectBlockedImmunity.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExternalOwner_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_WaitGameplayEffectBlockedImmunity.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_Blocked;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ExternalOwner;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectBlockedImmunity_WaitGameplayEffectBlockedByImmunity, "WaitGameplayEffectBlockedByImmunity" }, // 1163174083
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAbilityTask_WaitGameplayEffectBlockedImmunity>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAbilityTask_WaitGameplayEffectBlockedImmunity_Statics::NewProp_Blocked = { "Blocked", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityTask_WaitGameplayEffectBlockedImmunity, Blocked), Z_Construct_UDelegateFunction_GameplayAbilities_GameplayEffectBlockedDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Blocked_MetaData), NewProp_Blocked_MetaData) }; // 2275817959
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAbilityTask_WaitGameplayEffectBlockedImmunity_Statics::NewProp_ExternalOwner = { "ExternalOwner", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityTask_WaitGameplayEffectBlockedImmunity, ExternalOwner), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExternalOwner_MetaData), NewProp_ExternalOwner_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAbilityTask_WaitGameplayEffectBlockedImmunity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_WaitGameplayEffectBlockedImmunity_Statics::NewProp_Blocked,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_WaitGameplayEffectBlockedImmunity_Statics::NewProp_ExternalOwner,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_WaitGameplayEffectBlockedImmunity_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAbilityTask_WaitGameplayEffectBlockedImmunity_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAbilityTask,
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_WaitGameplayEffectBlockedImmunity_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAbilityTask_WaitGameplayEffectBlockedImmunity_Statics::ClassParams = {
	&UAbilityTask_WaitGameplayEffectBlockedImmunity::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAbilityTask_WaitGameplayEffectBlockedImmunity_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_WaitGameplayEffectBlockedImmunity_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_WaitGameplayEffectBlockedImmunity_Statics::Class_MetaDataParams), Z_Construct_UClass_UAbilityTask_WaitGameplayEffectBlockedImmunity_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAbilityTask_WaitGameplayEffectBlockedImmunity()
{
	if (!Z_Registration_Info_UClass_UAbilityTask_WaitGameplayEffectBlockedImmunity.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAbilityTask_WaitGameplayEffectBlockedImmunity.OuterSingleton, Z_Construct_UClass_UAbilityTask_WaitGameplayEffectBlockedImmunity_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAbilityTask_WaitGameplayEffectBlockedImmunity.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UClass* StaticClass<UAbilityTask_WaitGameplayEffectBlockedImmunity>()
{
	return UAbilityTask_WaitGameplayEffectBlockedImmunity::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAbilityTask_WaitGameplayEffectBlockedImmunity);
UAbilityTask_WaitGameplayEffectBlockedImmunity::~UAbilityTask_WaitGameplayEffectBlockedImmunity() {}
// End Class UAbilityTask_WaitGameplayEffectBlockedImmunity

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayEffectBlockedImmunity_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAbilityTask_WaitGameplayEffectBlockedImmunity, UAbilityTask_WaitGameplayEffectBlockedImmunity::StaticClass, TEXT("UAbilityTask_WaitGameplayEffectBlockedImmunity"), &Z_Registration_Info_UClass_UAbilityTask_WaitGameplayEffectBlockedImmunity, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAbilityTask_WaitGameplayEffectBlockedImmunity), 4001850577U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayEffectBlockedImmunity_h_3540466878(TEXT("/Script/GameplayAbilities"),
	Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayEffectBlockedImmunity_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayEffectBlockedImmunity_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
