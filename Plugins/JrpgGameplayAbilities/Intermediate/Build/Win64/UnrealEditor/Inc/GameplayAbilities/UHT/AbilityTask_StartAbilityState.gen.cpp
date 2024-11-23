// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayAbilities/Public/Abilities/Tasks/AbilityTask_StartAbilityState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbilityTask_StartAbilityState() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask_StartAbilityState();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask_StartAbilityState_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
GAMEPLAYABILITIES_API UFunction* Z_Construct_UDelegateFunction_GameplayAbilities_AbilityStateDelegate__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_GameplayAbilities();
// End Cross Module References

// Begin Delegate FAbilityStateDelegate
struct Z_Construct_UDelegateFunction_GameplayAbilities_AbilityStateDelegate__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_StartAbilityState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GameplayAbilities_AbilityStateDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GameplayAbilities, nullptr, "AbilityStateDelegate__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameplayAbilities_AbilityStateDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_GameplayAbilities_AbilityStateDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_GameplayAbilities_AbilityStateDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_GameplayAbilities_AbilityStateDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FAbilityStateDelegate_DelegateWrapper(const FMulticastScriptDelegate& AbilityStateDelegate)
{
	AbilityStateDelegate.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FAbilityStateDelegate

// Begin Class UAbilityTask_StartAbilityState Function StartAbilityState
struct Z_Construct_UFunction_UAbilityTask_StartAbilityState_StartAbilityState_Statics
{
	struct AbilityTask_StartAbilityState_eventStartAbilityState_Parms
	{
		UGameplayAbility* OwningAbility;
		FName StateName;
		bool bEndCurrentState;
		UAbilityTask_StartAbilityState* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Ability|Tasks" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Starts a new ability state.\n\x09 *\n\x09 * @param StateName The name of the state.\n\x09 * @param bEndCurrentState If true, all other active ability states will be ended.\n\x09 */" },
#endif
		{ "CPP_Default_bEndCurrentState", "true" },
		{ "DefaultToSelf", "OwningAbility" },
		{ "HidePin", "OwningAbility" },
		{ "HideSpawnParms", "Instigator" },
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_StartAbilityState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Starts a new ability state.\n\n@param StateName The name of the state.\n@param bEndCurrentState If true, all other active ability states will be ended." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningAbility;
	static const UECodeGen_Private::FNamePropertyParams NewProp_StateName;
	static void NewProp_bEndCurrentState_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEndCurrentState;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_StartAbilityState_StartAbilityState_Statics::NewProp_OwningAbility = { "OwningAbility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_StartAbilityState_eventStartAbilityState_Parms, OwningAbility), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAbilityTask_StartAbilityState_StartAbilityState_Statics::NewProp_StateName = { "StateName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_StartAbilityState_eventStartAbilityState_Parms, StateName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAbilityTask_StartAbilityState_StartAbilityState_Statics::NewProp_bEndCurrentState_SetBit(void* Obj)
{
	((AbilityTask_StartAbilityState_eventStartAbilityState_Parms*)Obj)->bEndCurrentState = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAbilityTask_StartAbilityState_StartAbilityState_Statics::NewProp_bEndCurrentState = { "bEndCurrentState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AbilityTask_StartAbilityState_eventStartAbilityState_Parms), &Z_Construct_UFunction_UAbilityTask_StartAbilityState_StartAbilityState_Statics::NewProp_bEndCurrentState_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_StartAbilityState_StartAbilityState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_StartAbilityState_eventStartAbilityState_Parms, ReturnValue), Z_Construct_UClass_UAbilityTask_StartAbilityState_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityTask_StartAbilityState_StartAbilityState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_StartAbilityState_StartAbilityState_Statics::NewProp_OwningAbility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_StartAbilityState_StartAbilityState_Statics::NewProp_StateName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_StartAbilityState_StartAbilityState_Statics::NewProp_bEndCurrentState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_StartAbilityState_StartAbilityState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_StartAbilityState_StartAbilityState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityTask_StartAbilityState_StartAbilityState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityTask_StartAbilityState, nullptr, "StartAbilityState", nullptr, nullptr, Z_Construct_UFunction_UAbilityTask_StartAbilityState_StartAbilityState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_StartAbilityState_StartAbilityState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAbilityTask_StartAbilityState_StartAbilityState_Statics::AbilityTask_StartAbilityState_eventStartAbilityState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_StartAbilityState_StartAbilityState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilityTask_StartAbilityState_StartAbilityState_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAbilityTask_StartAbilityState_StartAbilityState_Statics::AbilityTask_StartAbilityState_eventStartAbilityState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbilityTask_StartAbilityState_StartAbilityState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityTask_StartAbilityState_StartAbilityState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilityTask_StartAbilityState::execStartAbilityState)
{
	P_GET_OBJECT(UGameplayAbility,Z_Param_OwningAbility);
	P_GET_PROPERTY(FNameProperty,Z_Param_StateName);
	P_GET_UBOOL(Z_Param_bEndCurrentState);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAbilityTask_StartAbilityState**)Z_Param__Result=UAbilityTask_StartAbilityState::StartAbilityState(Z_Param_OwningAbility,Z_Param_StateName,Z_Param_bEndCurrentState);
	P_NATIVE_END;
}
// End Class UAbilityTask_StartAbilityState Function StartAbilityState

// Begin Class UAbilityTask_StartAbilityState
void UAbilityTask_StartAbilityState::StaticRegisterNativesUAbilityTask_StartAbilityState()
{
	UClass* Class = UAbilityTask_StartAbilityState::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "StartAbilityState", &UAbilityTask_StartAbilityState::execStartAbilityState },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAbilityTask_StartAbilityState);
UClass* Z_Construct_UClass_UAbilityTask_StartAbilityState_NoRegister()
{
	return UAbilityTask_StartAbilityState::StaticClass();
}
struct Z_Construct_UClass_UAbilityTask_StartAbilityState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * An ability state is simply an ability task that provides a way to handle the ability being interrupted.\n * You can use ability states to do state-specific cleanup if the ability ends or was interrupted at a certain point during it's execution.\n *\n * An ability state will always result in either 'OnStateEnded' or 'OnStateInterrupted' being called.\n *\n * 'OnStateEnded' will be called if:\n * - The ability itself ends via AGameplayAbility::EndAbility\n * - The ability state is manually ended via AGameplayAbility::EndAbilityState\n * - Another ability state is started will 'bEndCurrentState' set to true\n *\n * 'OnStateInterrupted' will be called if:\n * - The ability itself is cancelled via AGameplayAbility::CancelAbility\n */" },
#endif
		{ "IncludePath", "Abilities/Tasks/AbilityTask_StartAbilityState.h" },
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_StartAbilityState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "An ability state is simply an ability task that provides a way to handle the ability being interrupted.\nYou can use ability states to do state-specific cleanup if the ability ends or was interrupted at a certain point during it's execution.\n\nAn ability state will always result in either 'OnStateEnded' or 'OnStateInterrupted' being called.\n\n'OnStateEnded' will be called if:\n- The ability itself ends via AGameplayAbility::EndAbility\n- The ability state is manually ended via AGameplayAbility::EndAbilityState\n- Another ability state is started will 'bEndCurrentState' set to true\n\n'OnStateInterrupted' will be called if:\n- The ability itself is cancelled via AGameplayAbility::CancelAbility" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnStateEnded_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Invoked if 'EndAbilityState' is called or if 'EndAbility' is called and this state is active. */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_StartAbilityState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Invoked if 'EndAbilityState' is called or if 'EndAbility' is called and this state is active." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnStateInterrupted_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Invoked if the ability was interrupted and this state is active. */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_StartAbilityState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Invoked if the ability was interrupted and this state is active." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStateEnded;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStateInterrupted;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAbilityTask_StartAbilityState_StartAbilityState, "StartAbilityState" }, // 875256372
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAbilityTask_StartAbilityState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAbilityTask_StartAbilityState_Statics::NewProp_OnStateEnded = { "OnStateEnded", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityTask_StartAbilityState, OnStateEnded), Z_Construct_UDelegateFunction_GameplayAbilities_AbilityStateDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnStateEnded_MetaData), NewProp_OnStateEnded_MetaData) }; // 4185025567
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAbilityTask_StartAbilityState_Statics::NewProp_OnStateInterrupted = { "OnStateInterrupted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityTask_StartAbilityState, OnStateInterrupted), Z_Construct_UDelegateFunction_GameplayAbilities_AbilityStateDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnStateInterrupted_MetaData), NewProp_OnStateInterrupted_MetaData) }; // 4185025567
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAbilityTask_StartAbilityState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_StartAbilityState_Statics::NewProp_OnStateEnded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_StartAbilityState_Statics::NewProp_OnStateInterrupted,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_StartAbilityState_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAbilityTask_StartAbilityState_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAbilityTask,
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_StartAbilityState_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAbilityTask_StartAbilityState_Statics::ClassParams = {
	&UAbilityTask_StartAbilityState::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAbilityTask_StartAbilityState_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_StartAbilityState_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_StartAbilityState_Statics::Class_MetaDataParams), Z_Construct_UClass_UAbilityTask_StartAbilityState_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAbilityTask_StartAbilityState()
{
	if (!Z_Registration_Info_UClass_UAbilityTask_StartAbilityState.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAbilityTask_StartAbilityState.OuterSingleton, Z_Construct_UClass_UAbilityTask_StartAbilityState_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAbilityTask_StartAbilityState.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UClass* StaticClass<UAbilityTask_StartAbilityState>()
{
	return UAbilityTask_StartAbilityState::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAbilityTask_StartAbilityState);
UAbilityTask_StartAbilityState::~UAbilityTask_StartAbilityState() {}
// End Class UAbilityTask_StartAbilityState

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_StartAbilityState_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAbilityTask_StartAbilityState, UAbilityTask_StartAbilityState::StaticClass, TEXT("UAbilityTask_StartAbilityState"), &Z_Registration_Info_UClass_UAbilityTask_StartAbilityState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAbilityTask_StartAbilityState), 941163961U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_StartAbilityState_h_1933389172(TEXT("/Script/GameplayAbilities"),
	Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_StartAbilityState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_StartAbilityState_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
