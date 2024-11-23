// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayAbilities/Public/Abilities/Tasks/AbilityTask_WaitCancel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbilityTask_WaitCancel() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask_WaitCancel();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask_WaitCancel_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
GAMEPLAYABILITIES_API UFunction* Z_Construct_UDelegateFunction_GameplayAbilities_WaitCancelDelegate__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_GameplayAbilities();
// End Cross Module References

// Begin Delegate FWaitCancelDelegate
struct Z_Construct_UDelegateFunction_GameplayAbilities_WaitCancelDelegate__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_WaitCancel.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GameplayAbilities_WaitCancelDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GameplayAbilities, nullptr, "WaitCancelDelegate__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameplayAbilities_WaitCancelDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_GameplayAbilities_WaitCancelDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_GameplayAbilities_WaitCancelDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_GameplayAbilities_WaitCancelDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FWaitCancelDelegate_DelegateWrapper(const FMulticastScriptDelegate& WaitCancelDelegate)
{
	WaitCancelDelegate.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FWaitCancelDelegate

// Begin Class UAbilityTask_WaitCancel Function OnCancelCallback
struct Z_Construct_UFunction_UAbilityTask_WaitCancel_OnCancelCallback_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_WaitCancel.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityTask_WaitCancel_OnCancelCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityTask_WaitCancel, nullptr, "OnCancelCallback", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_WaitCancel_OnCancelCallback_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilityTask_WaitCancel_OnCancelCallback_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UAbilityTask_WaitCancel_OnCancelCallback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityTask_WaitCancel_OnCancelCallback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilityTask_WaitCancel::execOnCancelCallback)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnCancelCallback();
	P_NATIVE_END;
}
// End Class UAbilityTask_WaitCancel Function OnCancelCallback

// Begin Class UAbilityTask_WaitCancel Function OnLocalCancelCallback
struct Z_Construct_UFunction_UAbilityTask_WaitCancel_OnLocalCancelCallback_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_WaitCancel.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityTask_WaitCancel_OnLocalCancelCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityTask_WaitCancel, nullptr, "OnLocalCancelCallback", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_WaitCancel_OnLocalCancelCallback_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilityTask_WaitCancel_OnLocalCancelCallback_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UAbilityTask_WaitCancel_OnLocalCancelCallback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityTask_WaitCancel_OnLocalCancelCallback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilityTask_WaitCancel::execOnLocalCancelCallback)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnLocalCancelCallback();
	P_NATIVE_END;
}
// End Class UAbilityTask_WaitCancel Function OnLocalCancelCallback

// Begin Class UAbilityTask_WaitCancel Function WaitCancel
struct Z_Construct_UFunction_UAbilityTask_WaitCancel_WaitCancel_Statics
{
	struct AbilityTask_WaitCancel_eventWaitCancel_Parms
	{
		UGameplayAbility* OwningAbility;
		UAbilityTask_WaitCancel* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Ability|Tasks" },
		{ "DefaultToSelf", "OwningAbility" },
		{ "DisplayName", "Wait for Cancel Input" },
		{ "HidePin", "OwningAbility" },
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_WaitCancel.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningAbility;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_WaitCancel_WaitCancel_Statics::NewProp_OwningAbility = { "OwningAbility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_WaitCancel_eventWaitCancel_Parms, OwningAbility), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_WaitCancel_WaitCancel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_WaitCancel_eventWaitCancel_Parms, ReturnValue), Z_Construct_UClass_UAbilityTask_WaitCancel_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityTask_WaitCancel_WaitCancel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitCancel_WaitCancel_Statics::NewProp_OwningAbility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitCancel_WaitCancel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_WaitCancel_WaitCancel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityTask_WaitCancel_WaitCancel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityTask_WaitCancel, nullptr, "WaitCancel", nullptr, nullptr, Z_Construct_UFunction_UAbilityTask_WaitCancel_WaitCancel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_WaitCancel_WaitCancel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAbilityTask_WaitCancel_WaitCancel_Statics::AbilityTask_WaitCancel_eventWaitCancel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_WaitCancel_WaitCancel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilityTask_WaitCancel_WaitCancel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAbilityTask_WaitCancel_WaitCancel_Statics::AbilityTask_WaitCancel_eventWaitCancel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbilityTask_WaitCancel_WaitCancel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityTask_WaitCancel_WaitCancel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilityTask_WaitCancel::execWaitCancel)
{
	P_GET_OBJECT(UGameplayAbility,Z_Param_OwningAbility);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAbilityTask_WaitCancel**)Z_Param__Result=UAbilityTask_WaitCancel::WaitCancel(Z_Param_OwningAbility);
	P_NATIVE_END;
}
// End Class UAbilityTask_WaitCancel Function WaitCancel

// Begin Class UAbilityTask_WaitCancel
void UAbilityTask_WaitCancel::StaticRegisterNativesUAbilityTask_WaitCancel()
{
	UClass* Class = UAbilityTask_WaitCancel::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnCancelCallback", &UAbilityTask_WaitCancel::execOnCancelCallback },
		{ "OnLocalCancelCallback", &UAbilityTask_WaitCancel::execOnLocalCancelCallback },
		{ "WaitCancel", &UAbilityTask_WaitCancel::execWaitCancel },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAbilityTask_WaitCancel);
UClass* Z_Construct_UClass_UAbilityTask_WaitCancel_NoRegister()
{
	return UAbilityTask_WaitCancel::StaticClass();
}
struct Z_Construct_UClass_UAbilityTask_WaitCancel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Abilities/Tasks/AbilityTask_WaitCancel.h" },
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_WaitCancel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCancel_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_WaitCancel.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCancel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAbilityTask_WaitCancel_OnCancelCallback, "OnCancelCallback" }, // 4230281243
		{ &Z_Construct_UFunction_UAbilityTask_WaitCancel_OnLocalCancelCallback, "OnLocalCancelCallback" }, // 276668290
		{ &Z_Construct_UFunction_UAbilityTask_WaitCancel_WaitCancel, "WaitCancel" }, // 3066994725
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAbilityTask_WaitCancel>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAbilityTask_WaitCancel_Statics::NewProp_OnCancel = { "OnCancel", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityTask_WaitCancel, OnCancel), Z_Construct_UDelegateFunction_GameplayAbilities_WaitCancelDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCancel_MetaData), NewProp_OnCancel_MetaData) }; // 795156947
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAbilityTask_WaitCancel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_WaitCancel_Statics::NewProp_OnCancel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_WaitCancel_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAbilityTask_WaitCancel_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAbilityTask,
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_WaitCancel_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAbilityTask_WaitCancel_Statics::ClassParams = {
	&UAbilityTask_WaitCancel::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAbilityTask_WaitCancel_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_WaitCancel_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_WaitCancel_Statics::Class_MetaDataParams), Z_Construct_UClass_UAbilityTask_WaitCancel_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAbilityTask_WaitCancel()
{
	if (!Z_Registration_Info_UClass_UAbilityTask_WaitCancel.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAbilityTask_WaitCancel.OuterSingleton, Z_Construct_UClass_UAbilityTask_WaitCancel_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAbilityTask_WaitCancel.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UClass* StaticClass<UAbilityTask_WaitCancel>()
{
	return UAbilityTask_WaitCancel::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAbilityTask_WaitCancel);
UAbilityTask_WaitCancel::~UAbilityTask_WaitCancel() {}
// End Class UAbilityTask_WaitCancel

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitCancel_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAbilityTask_WaitCancel, UAbilityTask_WaitCancel::StaticClass, TEXT("UAbilityTask_WaitCancel"), &Z_Registration_Info_UClass_UAbilityTask_WaitCancel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAbilityTask_WaitCancel), 1714142056U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitCancel_h_1570662269(TEXT("/Script/GameplayAbilities"),
	Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitCancel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitCancel_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
