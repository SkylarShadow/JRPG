// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayAbilities/Public/Abilities/Tasks/AbilityTask_Repeat.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbilityTask_Repeat() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask_Repeat();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask_Repeat_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
GAMEPLAYABILITIES_API UFunction* Z_Construct_UDelegateFunction_GameplayAbilities_RepeatedActionDelegate__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_GameplayAbilities();
// End Cross Module References

// Begin Delegate FRepeatedActionDelegate
struct Z_Construct_UDelegateFunction_GameplayAbilities_RepeatedActionDelegate__DelegateSignature_Statics
{
	struct _Script_GameplayAbilities_eventRepeatedActionDelegate_Parms
	{
		int32 ActionNumber;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_Repeat.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ActionNumber;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_GameplayAbilities_RepeatedActionDelegate__DelegateSignature_Statics::NewProp_ActionNumber = { "ActionNumber", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_GameplayAbilities_eventRepeatedActionDelegate_Parms, ActionNumber), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GameplayAbilities_RepeatedActionDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GameplayAbilities_RepeatedActionDelegate__DelegateSignature_Statics::NewProp_ActionNumber,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameplayAbilities_RepeatedActionDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GameplayAbilities_RepeatedActionDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GameplayAbilities, nullptr, "RepeatedActionDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_GameplayAbilities_RepeatedActionDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameplayAbilities_RepeatedActionDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_GameplayAbilities_RepeatedActionDelegate__DelegateSignature_Statics::_Script_GameplayAbilities_eventRepeatedActionDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameplayAbilities_RepeatedActionDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_GameplayAbilities_RepeatedActionDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_GameplayAbilities_RepeatedActionDelegate__DelegateSignature_Statics::_Script_GameplayAbilities_eventRepeatedActionDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_GameplayAbilities_RepeatedActionDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_GameplayAbilities_RepeatedActionDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FRepeatedActionDelegate_DelegateWrapper(const FMulticastScriptDelegate& RepeatedActionDelegate, int32 ActionNumber)
{
	struct _Script_GameplayAbilities_eventRepeatedActionDelegate_Parms
	{
		int32 ActionNumber;
	};
	_Script_GameplayAbilities_eventRepeatedActionDelegate_Parms Parms;
	Parms.ActionNumber=ActionNumber;
	RepeatedActionDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FRepeatedActionDelegate

// Begin Class UAbilityTask_Repeat Function RepeatAction
struct Z_Construct_UFunction_UAbilityTask_Repeat_RepeatAction_Statics
{
	struct AbilityTask_Repeat_eventRepeatAction_Parms
	{
		UGameplayAbility* OwningAbility;
		float TimeBetweenActions;
		int32 TotalActionCount;
		UAbilityTask_Repeat* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "TRUE" },
		{ "Category", "Ability|Tasks" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Start a task that repeats an action or set of actions. */" },
#endif
		{ "DefaultToSelf", "OwningAbility" },
		{ "HidePin", "OwningAbility" },
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_Repeat.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Start a task that repeats an action or set of actions." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningAbility;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeBetweenActions;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TotalActionCount;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_Repeat_RepeatAction_Statics::NewProp_OwningAbility = { "OwningAbility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_Repeat_eventRepeatAction_Parms, OwningAbility), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAbilityTask_Repeat_RepeatAction_Statics::NewProp_TimeBetweenActions = { "TimeBetweenActions", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_Repeat_eventRepeatAction_Parms, TimeBetweenActions), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAbilityTask_Repeat_RepeatAction_Statics::NewProp_TotalActionCount = { "TotalActionCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_Repeat_eventRepeatAction_Parms, TotalActionCount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_Repeat_RepeatAction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_Repeat_eventRepeatAction_Parms, ReturnValue), Z_Construct_UClass_UAbilityTask_Repeat_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityTask_Repeat_RepeatAction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_Repeat_RepeatAction_Statics::NewProp_OwningAbility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_Repeat_RepeatAction_Statics::NewProp_TimeBetweenActions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_Repeat_RepeatAction_Statics::NewProp_TotalActionCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_Repeat_RepeatAction_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_Repeat_RepeatAction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityTask_Repeat_RepeatAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityTask_Repeat, nullptr, "RepeatAction", nullptr, nullptr, Z_Construct_UFunction_UAbilityTask_Repeat_RepeatAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_Repeat_RepeatAction_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAbilityTask_Repeat_RepeatAction_Statics::AbilityTask_Repeat_eventRepeatAction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_Repeat_RepeatAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilityTask_Repeat_RepeatAction_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAbilityTask_Repeat_RepeatAction_Statics::AbilityTask_Repeat_eventRepeatAction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbilityTask_Repeat_RepeatAction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityTask_Repeat_RepeatAction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilityTask_Repeat::execRepeatAction)
{
	P_GET_OBJECT(UGameplayAbility,Z_Param_OwningAbility);
	P_GET_PROPERTY(FFloatProperty,Z_Param_TimeBetweenActions);
	P_GET_PROPERTY(FIntProperty,Z_Param_TotalActionCount);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAbilityTask_Repeat**)Z_Param__Result=UAbilityTask_Repeat::RepeatAction(Z_Param_OwningAbility,Z_Param_TimeBetweenActions,Z_Param_TotalActionCount);
	P_NATIVE_END;
}
// End Class UAbilityTask_Repeat Function RepeatAction

// Begin Class UAbilityTask_Repeat
void UAbilityTask_Repeat::StaticRegisterNativesUAbilityTask_Repeat()
{
	UClass* Class = UAbilityTask_Repeat::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "RepeatAction", &UAbilityTask_Repeat::execRepeatAction },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAbilityTask_Repeat);
UClass* Z_Construct_UClass_UAbilityTask_Repeat_NoRegister()
{
	return UAbilityTask_Repeat::StaticClass();
}
struct Z_Construct_UClass_UAbilityTask_Repeat_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\x09Repeat a task a certain number of times at a given interval.\n */" },
#endif
		{ "IncludePath", "Abilities/Tasks/AbilityTask_Repeat.h" },
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_Repeat.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Repeat a task a certain number of times at a given interval." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnPerformAction_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_Repeat.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFinished_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_Repeat.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPerformAction;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFinished;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAbilityTask_Repeat_RepeatAction, "RepeatAction" }, // 888324809
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAbilityTask_Repeat>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAbilityTask_Repeat_Statics::NewProp_OnPerformAction = { "OnPerformAction", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityTask_Repeat, OnPerformAction), Z_Construct_UDelegateFunction_GameplayAbilities_RepeatedActionDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnPerformAction_MetaData), NewProp_OnPerformAction_MetaData) }; // 4190695137
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAbilityTask_Repeat_Statics::NewProp_OnFinished = { "OnFinished", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityTask_Repeat, OnFinished), Z_Construct_UDelegateFunction_GameplayAbilities_RepeatedActionDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFinished_MetaData), NewProp_OnFinished_MetaData) }; // 4190695137
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAbilityTask_Repeat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_Repeat_Statics::NewProp_OnPerformAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_Repeat_Statics::NewProp_OnFinished,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_Repeat_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAbilityTask_Repeat_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAbilityTask,
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_Repeat_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAbilityTask_Repeat_Statics::ClassParams = {
	&UAbilityTask_Repeat::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAbilityTask_Repeat_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_Repeat_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_Repeat_Statics::Class_MetaDataParams), Z_Construct_UClass_UAbilityTask_Repeat_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAbilityTask_Repeat()
{
	if (!Z_Registration_Info_UClass_UAbilityTask_Repeat.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAbilityTask_Repeat.OuterSingleton, Z_Construct_UClass_UAbilityTask_Repeat_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAbilityTask_Repeat.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UClass* StaticClass<UAbilityTask_Repeat>()
{
	return UAbilityTask_Repeat::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAbilityTask_Repeat);
UAbilityTask_Repeat::~UAbilityTask_Repeat() {}
// End Class UAbilityTask_Repeat

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_Repeat_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAbilityTask_Repeat, UAbilityTask_Repeat::StaticClass, TEXT("UAbilityTask_Repeat"), &Z_Registration_Info_UClass_UAbilityTask_Repeat, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAbilityTask_Repeat), 2430353407U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_Repeat_h_1631418828(TEXT("/Script/GameplayAbilities"),
	Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_Repeat_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_Repeat_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
