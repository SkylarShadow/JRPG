// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayAbilities/Public/Abilities/Tasks/AbilityTask_WaitGameplayEffectRemoved.h"
#include "GameplayAbilities/Public/ActiveGameplayEffectHandle.h"
#include "GameplayAbilities/Public/GameplayEffectTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbilityTask_WaitGameplayEffectRemoved() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask_WaitGameplayEffectRemoved();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask_WaitGameplayEffectRemoved_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
GAMEPLAYABILITIES_API UFunction* Z_Construct_UDelegateFunction_GameplayAbilities_WaitGameplayEffectRemovedDelegate__DelegateSignature();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FActiveGameplayEffectHandle();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectRemovalInfo();
UPackage* Z_Construct_UPackage__Script_GameplayAbilities();
// End Cross Module References

// Begin Delegate FWaitGameplayEffectRemovedDelegate
struct Z_Construct_UDelegateFunction_GameplayAbilities_WaitGameplayEffectRemovedDelegate__DelegateSignature_Statics
{
	struct _Script_GameplayAbilities_eventWaitGameplayEffectRemovedDelegate_Parms
	{
		FGameplayEffectRemovalInfo GameplayEffectRemovalInfo;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_WaitGameplayEffectRemoved.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameplayEffectRemovalInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayEffectRemovalInfo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_GameplayAbilities_WaitGameplayEffectRemovedDelegate__DelegateSignature_Statics::NewProp_GameplayEffectRemovalInfo = { "GameplayEffectRemovalInfo", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_GameplayAbilities_eventWaitGameplayEffectRemovedDelegate_Parms, GameplayEffectRemovalInfo), Z_Construct_UScriptStruct_FGameplayEffectRemovalInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameplayEffectRemovalInfo_MetaData), NewProp_GameplayEffectRemovalInfo_MetaData) }; // 3453242020
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GameplayAbilities_WaitGameplayEffectRemovedDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GameplayAbilities_WaitGameplayEffectRemovedDelegate__DelegateSignature_Statics::NewProp_GameplayEffectRemovalInfo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameplayAbilities_WaitGameplayEffectRemovedDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GameplayAbilities_WaitGameplayEffectRemovedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GameplayAbilities, nullptr, "WaitGameplayEffectRemovedDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_GameplayAbilities_WaitGameplayEffectRemovedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameplayAbilities_WaitGameplayEffectRemovedDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_GameplayAbilities_WaitGameplayEffectRemovedDelegate__DelegateSignature_Statics::_Script_GameplayAbilities_eventWaitGameplayEffectRemovedDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameplayAbilities_WaitGameplayEffectRemovedDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_GameplayAbilities_WaitGameplayEffectRemovedDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_GameplayAbilities_WaitGameplayEffectRemovedDelegate__DelegateSignature_Statics::_Script_GameplayAbilities_eventWaitGameplayEffectRemovedDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_GameplayAbilities_WaitGameplayEffectRemovedDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_GameplayAbilities_WaitGameplayEffectRemovedDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FWaitGameplayEffectRemovedDelegate_DelegateWrapper(const FMulticastScriptDelegate& WaitGameplayEffectRemovedDelegate, FGameplayEffectRemovalInfo const& GameplayEffectRemovalInfo)
{
	struct _Script_GameplayAbilities_eventWaitGameplayEffectRemovedDelegate_Parms
	{
		FGameplayEffectRemovalInfo GameplayEffectRemovalInfo;
	};
	_Script_GameplayAbilities_eventWaitGameplayEffectRemovedDelegate_Parms Parms;
	Parms.GameplayEffectRemovalInfo=GameplayEffectRemovalInfo;
	WaitGameplayEffectRemovedDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FWaitGameplayEffectRemovedDelegate

// Begin Class UAbilityTask_WaitGameplayEffectRemoved Function OnGameplayEffectRemoved
struct Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectRemoved_OnGameplayEffectRemoved_Statics
{
	struct AbilityTask_WaitGameplayEffectRemoved_eventOnGameplayEffectRemoved_Parms
	{
		FGameplayEffectRemovalInfo InGameplayEffectRemovalInfo;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_WaitGameplayEffectRemoved.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InGameplayEffectRemovalInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InGameplayEffectRemovalInfo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectRemoved_OnGameplayEffectRemoved_Statics::NewProp_InGameplayEffectRemovalInfo = { "InGameplayEffectRemovalInfo", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_WaitGameplayEffectRemoved_eventOnGameplayEffectRemoved_Parms, InGameplayEffectRemovalInfo), Z_Construct_UScriptStruct_FGameplayEffectRemovalInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InGameplayEffectRemovalInfo_MetaData), NewProp_InGameplayEffectRemovalInfo_MetaData) }; // 3453242020
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectRemoved_OnGameplayEffectRemoved_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectRemoved_OnGameplayEffectRemoved_Statics::NewProp_InGameplayEffectRemovalInfo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectRemoved_OnGameplayEffectRemoved_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectRemoved_OnGameplayEffectRemoved_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityTask_WaitGameplayEffectRemoved, nullptr, "OnGameplayEffectRemoved", nullptr, nullptr, Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectRemoved_OnGameplayEffectRemoved_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectRemoved_OnGameplayEffectRemoved_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectRemoved_OnGameplayEffectRemoved_Statics::AbilityTask_WaitGameplayEffectRemoved_eventOnGameplayEffectRemoved_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectRemoved_OnGameplayEffectRemoved_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectRemoved_OnGameplayEffectRemoved_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectRemoved_OnGameplayEffectRemoved_Statics::AbilityTask_WaitGameplayEffectRemoved_eventOnGameplayEffectRemoved_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectRemoved_OnGameplayEffectRemoved()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectRemoved_OnGameplayEffectRemoved_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilityTask_WaitGameplayEffectRemoved::execOnGameplayEffectRemoved)
{
	P_GET_STRUCT_REF(FGameplayEffectRemovalInfo,Z_Param_Out_InGameplayEffectRemovalInfo);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnGameplayEffectRemoved(Z_Param_Out_InGameplayEffectRemovalInfo);
	P_NATIVE_END;
}
// End Class UAbilityTask_WaitGameplayEffectRemoved Function OnGameplayEffectRemoved

// Begin Class UAbilityTask_WaitGameplayEffectRemoved Function WaitForGameplayEffectRemoved
struct Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectRemoved_WaitForGameplayEffectRemoved_Statics
{
	struct AbilityTask_WaitGameplayEffectRemoved_eventWaitForGameplayEffectRemoved_Parms
	{
		UGameplayAbility* OwningAbility;
		FActiveGameplayEffectHandle Handle;
		UAbilityTask_WaitGameplayEffectRemoved* ReturnValue;
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
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_WaitGameplayEffectRemoved.h" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectRemoved_WaitForGameplayEffectRemoved_Statics::NewProp_OwningAbility = { "OwningAbility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_WaitGameplayEffectRemoved_eventWaitForGameplayEffectRemoved_Parms, OwningAbility), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectRemoved_WaitForGameplayEffectRemoved_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_WaitGameplayEffectRemoved_eventWaitForGameplayEffectRemoved_Parms, Handle), Z_Construct_UScriptStruct_FActiveGameplayEffectHandle, METADATA_PARAMS(0, nullptr) }; // 11669558
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectRemoved_WaitForGameplayEffectRemoved_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_WaitGameplayEffectRemoved_eventWaitForGameplayEffectRemoved_Parms, ReturnValue), Z_Construct_UClass_UAbilityTask_WaitGameplayEffectRemoved_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectRemoved_WaitForGameplayEffectRemoved_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectRemoved_WaitForGameplayEffectRemoved_Statics::NewProp_OwningAbility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectRemoved_WaitForGameplayEffectRemoved_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectRemoved_WaitForGameplayEffectRemoved_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectRemoved_WaitForGameplayEffectRemoved_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectRemoved_WaitForGameplayEffectRemoved_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityTask_WaitGameplayEffectRemoved, nullptr, "WaitForGameplayEffectRemoved", nullptr, nullptr, Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectRemoved_WaitForGameplayEffectRemoved_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectRemoved_WaitForGameplayEffectRemoved_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectRemoved_WaitForGameplayEffectRemoved_Statics::AbilityTask_WaitGameplayEffectRemoved_eventWaitForGameplayEffectRemoved_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectRemoved_WaitForGameplayEffectRemoved_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectRemoved_WaitForGameplayEffectRemoved_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectRemoved_WaitForGameplayEffectRemoved_Statics::AbilityTask_WaitGameplayEffectRemoved_eventWaitForGameplayEffectRemoved_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectRemoved_WaitForGameplayEffectRemoved()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectRemoved_WaitForGameplayEffectRemoved_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilityTask_WaitGameplayEffectRemoved::execWaitForGameplayEffectRemoved)
{
	P_GET_OBJECT(UGameplayAbility,Z_Param_OwningAbility);
	P_GET_STRUCT(FActiveGameplayEffectHandle,Z_Param_Handle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAbilityTask_WaitGameplayEffectRemoved**)Z_Param__Result=UAbilityTask_WaitGameplayEffectRemoved::WaitForGameplayEffectRemoved(Z_Param_OwningAbility,Z_Param_Handle);
	P_NATIVE_END;
}
// End Class UAbilityTask_WaitGameplayEffectRemoved Function WaitForGameplayEffectRemoved

// Begin Class UAbilityTask_WaitGameplayEffectRemoved
void UAbilityTask_WaitGameplayEffectRemoved::StaticRegisterNativesUAbilityTask_WaitGameplayEffectRemoved()
{
	UClass* Class = UAbilityTask_WaitGameplayEffectRemoved::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnGameplayEffectRemoved", &UAbilityTask_WaitGameplayEffectRemoved::execOnGameplayEffectRemoved },
		{ "WaitForGameplayEffectRemoved", &UAbilityTask_WaitGameplayEffectRemoved::execWaitForGameplayEffectRemoved },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAbilityTask_WaitGameplayEffectRemoved);
UClass* Z_Construct_UClass_UAbilityTask_WaitGameplayEffectRemoved_NoRegister()
{
	return UAbilityTask_WaitGameplayEffectRemoved::StaticClass();
}
struct Z_Construct_UClass_UAbilityTask_WaitGameplayEffectRemoved_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\x09Waits for the actor to activate another ability\n */" },
#endif
		{ "IncludePath", "Abilities/Tasks/AbilityTask_WaitGameplayEffectRemoved.h" },
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_WaitGameplayEffectRemoved.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Waits for the actor to activate another ability" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnRemoved_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_WaitGameplayEffectRemoved.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InvalidHandle_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_WaitGameplayEffectRemoved.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRemoved;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_InvalidHandle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectRemoved_OnGameplayEffectRemoved, "OnGameplayEffectRemoved" }, // 4270014918
		{ &Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectRemoved_WaitForGameplayEffectRemoved, "WaitForGameplayEffectRemoved" }, // 3347719361
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAbilityTask_WaitGameplayEffectRemoved>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAbilityTask_WaitGameplayEffectRemoved_Statics::NewProp_OnRemoved = { "OnRemoved", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityTask_WaitGameplayEffectRemoved, OnRemoved), Z_Construct_UDelegateFunction_GameplayAbilities_WaitGameplayEffectRemovedDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnRemoved_MetaData), NewProp_OnRemoved_MetaData) }; // 4002351405
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAbilityTask_WaitGameplayEffectRemoved_Statics::NewProp_InvalidHandle = { "InvalidHandle", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityTask_WaitGameplayEffectRemoved, InvalidHandle), Z_Construct_UDelegateFunction_GameplayAbilities_WaitGameplayEffectRemovedDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InvalidHandle_MetaData), NewProp_InvalidHandle_MetaData) }; // 4002351405
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAbilityTask_WaitGameplayEffectRemoved_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_WaitGameplayEffectRemoved_Statics::NewProp_OnRemoved,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_WaitGameplayEffectRemoved_Statics::NewProp_InvalidHandle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_WaitGameplayEffectRemoved_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAbilityTask_WaitGameplayEffectRemoved_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAbilityTask,
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_WaitGameplayEffectRemoved_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAbilityTask_WaitGameplayEffectRemoved_Statics::ClassParams = {
	&UAbilityTask_WaitGameplayEffectRemoved::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAbilityTask_WaitGameplayEffectRemoved_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_WaitGameplayEffectRemoved_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_WaitGameplayEffectRemoved_Statics::Class_MetaDataParams), Z_Construct_UClass_UAbilityTask_WaitGameplayEffectRemoved_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAbilityTask_WaitGameplayEffectRemoved()
{
	if (!Z_Registration_Info_UClass_UAbilityTask_WaitGameplayEffectRemoved.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAbilityTask_WaitGameplayEffectRemoved.OuterSingleton, Z_Construct_UClass_UAbilityTask_WaitGameplayEffectRemoved_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAbilityTask_WaitGameplayEffectRemoved.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UClass* StaticClass<UAbilityTask_WaitGameplayEffectRemoved>()
{
	return UAbilityTask_WaitGameplayEffectRemoved::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAbilityTask_WaitGameplayEffectRemoved);
UAbilityTask_WaitGameplayEffectRemoved::~UAbilityTask_WaitGameplayEffectRemoved() {}
// End Class UAbilityTask_WaitGameplayEffectRemoved

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayEffectRemoved_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAbilityTask_WaitGameplayEffectRemoved, UAbilityTask_WaitGameplayEffectRemoved::StaticClass, TEXT("UAbilityTask_WaitGameplayEffectRemoved"), &Z_Registration_Info_UClass_UAbilityTask_WaitGameplayEffectRemoved, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAbilityTask_WaitGameplayEffectRemoved), 544540560U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayEffectRemoved_h_3254729823(TEXT("/Script/GameplayAbilities"),
	Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayEffectRemoved_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayEffectRemoved_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
