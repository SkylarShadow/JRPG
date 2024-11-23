// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayAbilities/Public/Abilities/Tasks/AbilityTask_WaitGameplayEffectStackChange.h"
#include "GameplayAbilities/Public/ActiveGameplayEffectHandle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbilityTask_WaitGameplayEffectStackChange() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask_WaitGameplayEffectStackChange();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask_WaitGameplayEffectStackChange_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
GAMEPLAYABILITIES_API UFunction* Z_Construct_UDelegateFunction_GameplayAbilities_WaitGameplayEffectStackChangeDelegate__DelegateSignature();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FActiveGameplayEffectHandle();
UPackage* Z_Construct_UPackage__Script_GameplayAbilities();
// End Cross Module References

// Begin Delegate FWaitGameplayEffectStackChangeDelegate
struct Z_Construct_UDelegateFunction_GameplayAbilities_WaitGameplayEffectStackChangeDelegate__DelegateSignature_Statics
{
	struct _Script_GameplayAbilities_eventWaitGameplayEffectStackChangeDelegate_Parms
	{
		FActiveGameplayEffectHandle Handle;
		int32 NewCount;
		int32 OldCount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_WaitGameplayEffectStackChange.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewCount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OldCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_GameplayAbilities_WaitGameplayEffectStackChangeDelegate__DelegateSignature_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_GameplayAbilities_eventWaitGameplayEffectStackChangeDelegate_Parms, Handle), Z_Construct_UScriptStruct_FActiveGameplayEffectHandle, METADATA_PARAMS(0, nullptr) }; // 11669558
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_GameplayAbilities_WaitGameplayEffectStackChangeDelegate__DelegateSignature_Statics::NewProp_NewCount = { "NewCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_GameplayAbilities_eventWaitGameplayEffectStackChangeDelegate_Parms, NewCount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_GameplayAbilities_WaitGameplayEffectStackChangeDelegate__DelegateSignature_Statics::NewProp_OldCount = { "OldCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_GameplayAbilities_eventWaitGameplayEffectStackChangeDelegate_Parms, OldCount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GameplayAbilities_WaitGameplayEffectStackChangeDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GameplayAbilities_WaitGameplayEffectStackChangeDelegate__DelegateSignature_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GameplayAbilities_WaitGameplayEffectStackChangeDelegate__DelegateSignature_Statics::NewProp_NewCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GameplayAbilities_WaitGameplayEffectStackChangeDelegate__DelegateSignature_Statics::NewProp_OldCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameplayAbilities_WaitGameplayEffectStackChangeDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GameplayAbilities_WaitGameplayEffectStackChangeDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GameplayAbilities, nullptr, "WaitGameplayEffectStackChangeDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_GameplayAbilities_WaitGameplayEffectStackChangeDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameplayAbilities_WaitGameplayEffectStackChangeDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_GameplayAbilities_WaitGameplayEffectStackChangeDelegate__DelegateSignature_Statics::_Script_GameplayAbilities_eventWaitGameplayEffectStackChangeDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameplayAbilities_WaitGameplayEffectStackChangeDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_GameplayAbilities_WaitGameplayEffectStackChangeDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_GameplayAbilities_WaitGameplayEffectStackChangeDelegate__DelegateSignature_Statics::_Script_GameplayAbilities_eventWaitGameplayEffectStackChangeDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_GameplayAbilities_WaitGameplayEffectStackChangeDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_GameplayAbilities_WaitGameplayEffectStackChangeDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FWaitGameplayEffectStackChangeDelegate_DelegateWrapper(const FMulticastScriptDelegate& WaitGameplayEffectStackChangeDelegate, FActiveGameplayEffectHandle Handle, int32 NewCount, int32 OldCount)
{
	struct _Script_GameplayAbilities_eventWaitGameplayEffectStackChangeDelegate_Parms
	{
		FActiveGameplayEffectHandle Handle;
		int32 NewCount;
		int32 OldCount;
	};
	_Script_GameplayAbilities_eventWaitGameplayEffectStackChangeDelegate_Parms Parms;
	Parms.Handle=Handle;
	Parms.NewCount=NewCount;
	Parms.OldCount=OldCount;
	WaitGameplayEffectStackChangeDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FWaitGameplayEffectStackChangeDelegate

// Begin Class UAbilityTask_WaitGameplayEffectStackChange Function OnGameplayEffectStackChange
struct Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectStackChange_OnGameplayEffectStackChange_Statics
{
	struct AbilityTask_WaitGameplayEffectStackChange_eventOnGameplayEffectStackChange_Parms
	{
		FActiveGameplayEffectHandle Handle;
		int32 NewCount;
		int32 OldCount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_WaitGameplayEffectStackChange.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewCount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OldCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectStackChange_OnGameplayEffectStackChange_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_WaitGameplayEffectStackChange_eventOnGameplayEffectStackChange_Parms, Handle), Z_Construct_UScriptStruct_FActiveGameplayEffectHandle, METADATA_PARAMS(0, nullptr) }; // 11669558
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectStackChange_OnGameplayEffectStackChange_Statics::NewProp_NewCount = { "NewCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_WaitGameplayEffectStackChange_eventOnGameplayEffectStackChange_Parms, NewCount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectStackChange_OnGameplayEffectStackChange_Statics::NewProp_OldCount = { "OldCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_WaitGameplayEffectStackChange_eventOnGameplayEffectStackChange_Parms, OldCount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectStackChange_OnGameplayEffectStackChange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectStackChange_OnGameplayEffectStackChange_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectStackChange_OnGameplayEffectStackChange_Statics::NewProp_NewCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectStackChange_OnGameplayEffectStackChange_Statics::NewProp_OldCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectStackChange_OnGameplayEffectStackChange_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectStackChange_OnGameplayEffectStackChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityTask_WaitGameplayEffectStackChange, nullptr, "OnGameplayEffectStackChange", nullptr, nullptr, Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectStackChange_OnGameplayEffectStackChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectStackChange_OnGameplayEffectStackChange_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectStackChange_OnGameplayEffectStackChange_Statics::AbilityTask_WaitGameplayEffectStackChange_eventOnGameplayEffectStackChange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectStackChange_OnGameplayEffectStackChange_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectStackChange_OnGameplayEffectStackChange_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectStackChange_OnGameplayEffectStackChange_Statics::AbilityTask_WaitGameplayEffectStackChange_eventOnGameplayEffectStackChange_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectStackChange_OnGameplayEffectStackChange()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectStackChange_OnGameplayEffectStackChange_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilityTask_WaitGameplayEffectStackChange::execOnGameplayEffectStackChange)
{
	P_GET_STRUCT(FActiveGameplayEffectHandle,Z_Param_Handle);
	P_GET_PROPERTY(FIntProperty,Z_Param_NewCount);
	P_GET_PROPERTY(FIntProperty,Z_Param_OldCount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnGameplayEffectStackChange(Z_Param_Handle,Z_Param_NewCount,Z_Param_OldCount);
	P_NATIVE_END;
}
// End Class UAbilityTask_WaitGameplayEffectStackChange Function OnGameplayEffectStackChange

// Begin Class UAbilityTask_WaitGameplayEffectStackChange Function WaitForGameplayEffectStackChange
struct Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectStackChange_WaitForGameplayEffectStackChange_Statics
{
	struct AbilityTask_WaitGameplayEffectStackChange_eventWaitForGameplayEffectStackChange_Parms
	{
		UGameplayAbility* OwningAbility;
		FActiveGameplayEffectHandle Handle;
		UAbilityTask_WaitGameplayEffectStackChange* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "TRUE" },
		{ "Category", "Ability|Tasks" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Wait until the specified gameplay effect is removed. */" },
#endif
		{ "DefaultToSelf", "OwningAbility" },
		{ "HidePin", "OwningAbility" },
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_WaitGameplayEffectStackChange.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Wait until the specified gameplay effect is removed." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningAbility;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectStackChange_WaitForGameplayEffectStackChange_Statics::NewProp_OwningAbility = { "OwningAbility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_WaitGameplayEffectStackChange_eventWaitForGameplayEffectStackChange_Parms, OwningAbility), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectStackChange_WaitForGameplayEffectStackChange_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_WaitGameplayEffectStackChange_eventWaitForGameplayEffectStackChange_Parms, Handle), Z_Construct_UScriptStruct_FActiveGameplayEffectHandle, METADATA_PARAMS(0, nullptr) }; // 11669558
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectStackChange_WaitForGameplayEffectStackChange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_WaitGameplayEffectStackChange_eventWaitForGameplayEffectStackChange_Parms, ReturnValue), Z_Construct_UClass_UAbilityTask_WaitGameplayEffectStackChange_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectStackChange_WaitForGameplayEffectStackChange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectStackChange_WaitForGameplayEffectStackChange_Statics::NewProp_OwningAbility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectStackChange_WaitForGameplayEffectStackChange_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectStackChange_WaitForGameplayEffectStackChange_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectStackChange_WaitForGameplayEffectStackChange_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectStackChange_WaitForGameplayEffectStackChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityTask_WaitGameplayEffectStackChange, nullptr, "WaitForGameplayEffectStackChange", nullptr, nullptr, Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectStackChange_WaitForGameplayEffectStackChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectStackChange_WaitForGameplayEffectStackChange_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectStackChange_WaitForGameplayEffectStackChange_Statics::AbilityTask_WaitGameplayEffectStackChange_eventWaitForGameplayEffectStackChange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectStackChange_WaitForGameplayEffectStackChange_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectStackChange_WaitForGameplayEffectStackChange_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectStackChange_WaitForGameplayEffectStackChange_Statics::AbilityTask_WaitGameplayEffectStackChange_eventWaitForGameplayEffectStackChange_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectStackChange_WaitForGameplayEffectStackChange()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectStackChange_WaitForGameplayEffectStackChange_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilityTask_WaitGameplayEffectStackChange::execWaitForGameplayEffectStackChange)
{
	P_GET_OBJECT(UGameplayAbility,Z_Param_OwningAbility);
	P_GET_STRUCT(FActiveGameplayEffectHandle,Z_Param_Handle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAbilityTask_WaitGameplayEffectStackChange**)Z_Param__Result=UAbilityTask_WaitGameplayEffectStackChange::WaitForGameplayEffectStackChange(Z_Param_OwningAbility,Z_Param_Handle);
	P_NATIVE_END;
}
// End Class UAbilityTask_WaitGameplayEffectStackChange Function WaitForGameplayEffectStackChange

// Begin Class UAbilityTask_WaitGameplayEffectStackChange
void UAbilityTask_WaitGameplayEffectStackChange::StaticRegisterNativesUAbilityTask_WaitGameplayEffectStackChange()
{
	UClass* Class = UAbilityTask_WaitGameplayEffectStackChange::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnGameplayEffectStackChange", &UAbilityTask_WaitGameplayEffectStackChange::execOnGameplayEffectStackChange },
		{ "WaitForGameplayEffectStackChange", &UAbilityTask_WaitGameplayEffectStackChange::execWaitForGameplayEffectStackChange },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAbilityTask_WaitGameplayEffectStackChange);
UClass* Z_Construct_UClass_UAbilityTask_WaitGameplayEffectStackChange_NoRegister()
{
	return UAbilityTask_WaitGameplayEffectStackChange::StaticClass();
}
struct Z_Construct_UClass_UAbilityTask_WaitGameplayEffectStackChange_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\x09Waits for the actor to activate another ability\n */" },
#endif
		{ "IncludePath", "Abilities/Tasks/AbilityTask_WaitGameplayEffectStackChange.h" },
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_WaitGameplayEffectStackChange.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Waits for the actor to activate another ability" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnChange_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_WaitGameplayEffectStackChange.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InvalidHandle_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_WaitGameplayEffectStackChange.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnChange;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_InvalidHandle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectStackChange_OnGameplayEffectStackChange, "OnGameplayEffectStackChange" }, // 3416926003
		{ &Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectStackChange_WaitForGameplayEffectStackChange, "WaitForGameplayEffectStackChange" }, // 1845083098
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAbilityTask_WaitGameplayEffectStackChange>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAbilityTask_WaitGameplayEffectStackChange_Statics::NewProp_OnChange = { "OnChange", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityTask_WaitGameplayEffectStackChange, OnChange), Z_Construct_UDelegateFunction_GameplayAbilities_WaitGameplayEffectStackChangeDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnChange_MetaData), NewProp_OnChange_MetaData) }; // 2991753409
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAbilityTask_WaitGameplayEffectStackChange_Statics::NewProp_InvalidHandle = { "InvalidHandle", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityTask_WaitGameplayEffectStackChange, InvalidHandle), Z_Construct_UDelegateFunction_GameplayAbilities_WaitGameplayEffectStackChangeDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InvalidHandle_MetaData), NewProp_InvalidHandle_MetaData) }; // 2991753409
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAbilityTask_WaitGameplayEffectStackChange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_WaitGameplayEffectStackChange_Statics::NewProp_OnChange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_WaitGameplayEffectStackChange_Statics::NewProp_InvalidHandle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_WaitGameplayEffectStackChange_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAbilityTask_WaitGameplayEffectStackChange_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAbilityTask,
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_WaitGameplayEffectStackChange_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAbilityTask_WaitGameplayEffectStackChange_Statics::ClassParams = {
	&UAbilityTask_WaitGameplayEffectStackChange::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAbilityTask_WaitGameplayEffectStackChange_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_WaitGameplayEffectStackChange_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_WaitGameplayEffectStackChange_Statics::Class_MetaDataParams), Z_Construct_UClass_UAbilityTask_WaitGameplayEffectStackChange_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAbilityTask_WaitGameplayEffectStackChange()
{
	if (!Z_Registration_Info_UClass_UAbilityTask_WaitGameplayEffectStackChange.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAbilityTask_WaitGameplayEffectStackChange.OuterSingleton, Z_Construct_UClass_UAbilityTask_WaitGameplayEffectStackChange_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAbilityTask_WaitGameplayEffectStackChange.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UClass* StaticClass<UAbilityTask_WaitGameplayEffectStackChange>()
{
	return UAbilityTask_WaitGameplayEffectStackChange::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAbilityTask_WaitGameplayEffectStackChange);
UAbilityTask_WaitGameplayEffectStackChange::~UAbilityTask_WaitGameplayEffectStackChange() {}
// End Class UAbilityTask_WaitGameplayEffectStackChange

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayEffectStackChange_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAbilityTask_WaitGameplayEffectStackChange, UAbilityTask_WaitGameplayEffectStackChange::StaticClass, TEXT("UAbilityTask_WaitGameplayEffectStackChange"), &Z_Registration_Info_UClass_UAbilityTask_WaitGameplayEffectStackChange, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAbilityTask_WaitGameplayEffectStackChange), 393625971U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayEffectStackChange_h_1449044204(TEXT("/Script/GameplayAbilities"),
	Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayEffectStackChange_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayEffectStackChange_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
