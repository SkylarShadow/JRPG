// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayAbilities/Public/Abilities/Tasks/AbilityTask_WaitGameplayEffectApplied.h"
#include "GameplayAbilities/Public/ActiveGameplayEffectHandle.h"
#include "GameplayAbilities/Public/GameplayEffect.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbilityTask_WaitGameplayEffectApplied() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask_WaitGameplayEffectApplied();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask_WaitGameplayEffectApplied_NoRegister();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FActiveGameplayEffectHandle();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectSpec();
UPackage* Z_Construct_UPackage__Script_GameplayAbilities();
// End Cross Module References

// Begin Class UAbilityTask_WaitGameplayEffectApplied Function OnApplyGameplayEffectCallback
struct Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectApplied_OnApplyGameplayEffectCallback_Statics
{
	struct AbilityTask_WaitGameplayEffectApplied_eventOnApplyGameplayEffectCallback_Parms
	{
		UAbilitySystemComponent* Target;
		FGameplayEffectSpec SpecApplied;
		FActiveGameplayEffectHandle ActiveHandle;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_WaitGameplayEffectApplied.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpecApplied_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpecApplied;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActiveHandle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectApplied_OnApplyGameplayEffectCallback_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_WaitGameplayEffectApplied_eventOnApplyGameplayEffectCallback_Parms, Target), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectApplied_OnApplyGameplayEffectCallback_Statics::NewProp_SpecApplied = { "SpecApplied", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_WaitGameplayEffectApplied_eventOnApplyGameplayEffectCallback_Parms, SpecApplied), Z_Construct_UScriptStruct_FGameplayEffectSpec, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpecApplied_MetaData), NewProp_SpecApplied_MetaData) }; // 272371351
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectApplied_OnApplyGameplayEffectCallback_Statics::NewProp_ActiveHandle = { "ActiveHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_WaitGameplayEffectApplied_eventOnApplyGameplayEffectCallback_Parms, ActiveHandle), Z_Construct_UScriptStruct_FActiveGameplayEffectHandle, METADATA_PARAMS(0, nullptr) }; // 11669558
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectApplied_OnApplyGameplayEffectCallback_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectApplied_OnApplyGameplayEffectCallback_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectApplied_OnApplyGameplayEffectCallback_Statics::NewProp_SpecApplied,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectApplied_OnApplyGameplayEffectCallback_Statics::NewProp_ActiveHandle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectApplied_OnApplyGameplayEffectCallback_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectApplied_OnApplyGameplayEffectCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityTask_WaitGameplayEffectApplied, nullptr, "OnApplyGameplayEffectCallback", nullptr, nullptr, Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectApplied_OnApplyGameplayEffectCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectApplied_OnApplyGameplayEffectCallback_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectApplied_OnApplyGameplayEffectCallback_Statics::AbilityTask_WaitGameplayEffectApplied_eventOnApplyGameplayEffectCallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectApplied_OnApplyGameplayEffectCallback_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectApplied_OnApplyGameplayEffectCallback_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectApplied_OnApplyGameplayEffectCallback_Statics::AbilityTask_WaitGameplayEffectApplied_eventOnApplyGameplayEffectCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectApplied_OnApplyGameplayEffectCallback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectApplied_OnApplyGameplayEffectCallback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilityTask_WaitGameplayEffectApplied::execOnApplyGameplayEffectCallback)
{
	P_GET_OBJECT(UAbilitySystemComponent,Z_Param_Target);
	P_GET_STRUCT_REF(FGameplayEffectSpec,Z_Param_Out_SpecApplied);
	P_GET_STRUCT(FActiveGameplayEffectHandle,Z_Param_ActiveHandle);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnApplyGameplayEffectCallback(Z_Param_Target,Z_Param_Out_SpecApplied,Z_Param_ActiveHandle);
	P_NATIVE_END;
}
// End Class UAbilityTask_WaitGameplayEffectApplied Function OnApplyGameplayEffectCallback

// Begin Class UAbilityTask_WaitGameplayEffectApplied
void UAbilityTask_WaitGameplayEffectApplied::StaticRegisterNativesUAbilityTask_WaitGameplayEffectApplied()
{
	UClass* Class = UAbilityTask_WaitGameplayEffectApplied::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnApplyGameplayEffectCallback", &UAbilityTask_WaitGameplayEffectApplied::execOnApplyGameplayEffectCallback },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAbilityTask_WaitGameplayEffectApplied);
UClass* Z_Construct_UClass_UAbilityTask_WaitGameplayEffectApplied_NoRegister()
{
	return UAbilityTask_WaitGameplayEffectApplied::StaticClass();
}
struct Z_Construct_UClass_UAbilityTask_WaitGameplayEffectApplied_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Abilities/Tasks/AbilityTask_WaitGameplayEffectApplied.h" },
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_WaitGameplayEffectApplied.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExternalOwner_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_WaitGameplayEffectApplied.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ExternalOwner;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectApplied_OnApplyGameplayEffectCallback, "OnApplyGameplayEffectCallback" }, // 2648812066
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAbilityTask_WaitGameplayEffectApplied>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAbilityTask_WaitGameplayEffectApplied_Statics::NewProp_ExternalOwner = { "ExternalOwner", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityTask_WaitGameplayEffectApplied, ExternalOwner), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExternalOwner_MetaData), NewProp_ExternalOwner_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAbilityTask_WaitGameplayEffectApplied_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_WaitGameplayEffectApplied_Statics::NewProp_ExternalOwner,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_WaitGameplayEffectApplied_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAbilityTask_WaitGameplayEffectApplied_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAbilityTask,
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_WaitGameplayEffectApplied_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAbilityTask_WaitGameplayEffectApplied_Statics::ClassParams = {
	&UAbilityTask_WaitGameplayEffectApplied::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAbilityTask_WaitGameplayEffectApplied_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_WaitGameplayEffectApplied_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_WaitGameplayEffectApplied_Statics::Class_MetaDataParams), Z_Construct_UClass_UAbilityTask_WaitGameplayEffectApplied_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAbilityTask_WaitGameplayEffectApplied()
{
	if (!Z_Registration_Info_UClass_UAbilityTask_WaitGameplayEffectApplied.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAbilityTask_WaitGameplayEffectApplied.OuterSingleton, Z_Construct_UClass_UAbilityTask_WaitGameplayEffectApplied_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAbilityTask_WaitGameplayEffectApplied.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UClass* StaticClass<UAbilityTask_WaitGameplayEffectApplied>()
{
	return UAbilityTask_WaitGameplayEffectApplied::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAbilityTask_WaitGameplayEffectApplied);
UAbilityTask_WaitGameplayEffectApplied::~UAbilityTask_WaitGameplayEffectApplied() {}
// End Class UAbilityTask_WaitGameplayEffectApplied

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayEffectApplied_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAbilityTask_WaitGameplayEffectApplied, UAbilityTask_WaitGameplayEffectApplied::StaticClass, TEXT("UAbilityTask_WaitGameplayEffectApplied"), &Z_Registration_Info_UClass_UAbilityTask_WaitGameplayEffectApplied, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAbilityTask_WaitGameplayEffectApplied), 359728948U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayEffectApplied_h_559005788(TEXT("/Script/GameplayAbilities"),
	Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayEffectApplied_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayEffectApplied_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
