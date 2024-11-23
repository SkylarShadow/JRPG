// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayAbilities/Public/Abilities/Async/AbilityAsync_WaitGameplayEvent.h"
#include "GameplayAbilities/Public/Abilities/GameplayAbilityTypes.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbilityAsync_WaitGameplayEvent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityAsync();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityAsync_WaitGameplayEvent();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityAsync_WaitGameplayEvent_NoRegister();
GAMEPLAYABILITIES_API UFunction* Z_Construct_UDelegateFunction_UAbilityAsync_WaitGameplayEvent_EventReceivedDelegate__DelegateSignature();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEventData();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
UPackage* Z_Construct_UPackage__Script_GameplayAbilities();
// End Cross Module References

// Begin Delegate FEventReceivedDelegate
struct Z_Construct_UDelegateFunction_UAbilityAsync_WaitGameplayEvent_EventReceivedDelegate__DelegateSignature_Statics
{
	struct AbilityAsync_WaitGameplayEvent_eventEventReceivedDelegate_Parms
	{
		FGameplayEventData Payload;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Abilities/Async/AbilityAsync_WaitGameplayEvent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Payload;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UAbilityAsync_WaitGameplayEvent_EventReceivedDelegate__DelegateSignature_Statics::NewProp_Payload = { "Payload", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityAsync_WaitGameplayEvent_eventEventReceivedDelegate_Parms, Payload), Z_Construct_UScriptStruct_FGameplayEventData, METADATA_PARAMS(0, nullptr) }; // 2042618257
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UAbilityAsync_WaitGameplayEvent_EventReceivedDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UAbilityAsync_WaitGameplayEvent_EventReceivedDelegate__DelegateSignature_Statics::NewProp_Payload,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UAbilityAsync_WaitGameplayEvent_EventReceivedDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UAbilityAsync_WaitGameplayEvent_EventReceivedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityAsync_WaitGameplayEvent, nullptr, "EventReceivedDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UAbilityAsync_WaitGameplayEvent_EventReceivedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UAbilityAsync_WaitGameplayEvent_EventReceivedDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UAbilityAsync_WaitGameplayEvent_EventReceivedDelegate__DelegateSignature_Statics::AbilityAsync_WaitGameplayEvent_eventEventReceivedDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UAbilityAsync_WaitGameplayEvent_EventReceivedDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UAbilityAsync_WaitGameplayEvent_EventReceivedDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UAbilityAsync_WaitGameplayEvent_EventReceivedDelegate__DelegateSignature_Statics::AbilityAsync_WaitGameplayEvent_eventEventReceivedDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UAbilityAsync_WaitGameplayEvent_EventReceivedDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UAbilityAsync_WaitGameplayEvent_EventReceivedDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UAbilityAsync_WaitGameplayEvent::FEventReceivedDelegate_DelegateWrapper(const FMulticastScriptDelegate& EventReceivedDelegate, FGameplayEventData Payload)
{
	struct AbilityAsync_WaitGameplayEvent_eventEventReceivedDelegate_Parms
	{
		FGameplayEventData Payload;
	};
	AbilityAsync_WaitGameplayEvent_eventEventReceivedDelegate_Parms Parms;
	Parms.Payload=Payload;
	EventReceivedDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FEventReceivedDelegate

// Begin Class UAbilityAsync_WaitGameplayEvent Function WaitGameplayEventToActor
struct Z_Construct_UFunction_UAbilityAsync_WaitGameplayEvent_WaitGameplayEventToActor_Statics
{
	struct AbilityAsync_WaitGameplayEvent_eventWaitGameplayEventToActor_Parms
	{
		AActor* TargetActor;
		FGameplayTag EventTag;
		bool OnlyTriggerOnce;
		bool OnlyMatchExact;
		UAbilityAsync_WaitGameplayEvent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "TRUE" },
		{ "Category", "Ability|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Wait until the specified gameplay tag event is triggered on a target ability system component\n\x09 * It will keep listening as long as OnlyTriggerOnce = false\n\x09 * If OnlyMatchExact = false it will trigger for nested tags\n\x09 * If used in an ability graph, this async action will wait even after activation ends. It's recommended to use WaitGameplayEvent instead.\n\x09 */" },
#endif
		{ "CPP_Default_OnlyMatchExact", "true" },
		{ "CPP_Default_OnlyTriggerOnce", "false" },
		{ "DefaultToSelf", "TargetActor" },
		{ "ModuleRelativePath", "Public/Abilities/Async/AbilityAsync_WaitGameplayEvent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Wait until the specified gameplay tag event is triggered on a target ability system component\nIt will keep listening as long as OnlyTriggerOnce = false\nIf OnlyMatchExact = false it will trigger for nested tags\nIf used in an ability graph, this async action will wait even after activation ends. It's recommended to use WaitGameplayEvent instead." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EventTag;
	static void NewProp_OnlyTriggerOnce_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_OnlyTriggerOnce;
	static void NewProp_OnlyMatchExact_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_OnlyMatchExact;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityAsync_WaitGameplayEvent_WaitGameplayEventToActor_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityAsync_WaitGameplayEvent_eventWaitGameplayEventToActor_Parms, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbilityAsync_WaitGameplayEvent_WaitGameplayEventToActor_Statics::NewProp_EventTag = { "EventTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityAsync_WaitGameplayEvent_eventWaitGameplayEventToActor_Parms, EventTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
void Z_Construct_UFunction_UAbilityAsync_WaitGameplayEvent_WaitGameplayEventToActor_Statics::NewProp_OnlyTriggerOnce_SetBit(void* Obj)
{
	((AbilityAsync_WaitGameplayEvent_eventWaitGameplayEventToActor_Parms*)Obj)->OnlyTriggerOnce = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAbilityAsync_WaitGameplayEvent_WaitGameplayEventToActor_Statics::NewProp_OnlyTriggerOnce = { "OnlyTriggerOnce", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AbilityAsync_WaitGameplayEvent_eventWaitGameplayEventToActor_Parms), &Z_Construct_UFunction_UAbilityAsync_WaitGameplayEvent_WaitGameplayEventToActor_Statics::NewProp_OnlyTriggerOnce_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAbilityAsync_WaitGameplayEvent_WaitGameplayEventToActor_Statics::NewProp_OnlyMatchExact_SetBit(void* Obj)
{
	((AbilityAsync_WaitGameplayEvent_eventWaitGameplayEventToActor_Parms*)Obj)->OnlyMatchExact = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAbilityAsync_WaitGameplayEvent_WaitGameplayEventToActor_Statics::NewProp_OnlyMatchExact = { "OnlyMatchExact", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AbilityAsync_WaitGameplayEvent_eventWaitGameplayEventToActor_Parms), &Z_Construct_UFunction_UAbilityAsync_WaitGameplayEvent_WaitGameplayEventToActor_Statics::NewProp_OnlyMatchExact_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityAsync_WaitGameplayEvent_WaitGameplayEventToActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityAsync_WaitGameplayEvent_eventWaitGameplayEventToActor_Parms, ReturnValue), Z_Construct_UClass_UAbilityAsync_WaitGameplayEvent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityAsync_WaitGameplayEvent_WaitGameplayEventToActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityAsync_WaitGameplayEvent_WaitGameplayEventToActor_Statics::NewProp_TargetActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityAsync_WaitGameplayEvent_WaitGameplayEventToActor_Statics::NewProp_EventTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityAsync_WaitGameplayEvent_WaitGameplayEventToActor_Statics::NewProp_OnlyTriggerOnce,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityAsync_WaitGameplayEvent_WaitGameplayEventToActor_Statics::NewProp_OnlyMatchExact,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityAsync_WaitGameplayEvent_WaitGameplayEventToActor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityAsync_WaitGameplayEvent_WaitGameplayEventToActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityAsync_WaitGameplayEvent_WaitGameplayEventToActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityAsync_WaitGameplayEvent, nullptr, "WaitGameplayEventToActor", nullptr, nullptr, Z_Construct_UFunction_UAbilityAsync_WaitGameplayEvent_WaitGameplayEventToActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityAsync_WaitGameplayEvent_WaitGameplayEventToActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAbilityAsync_WaitGameplayEvent_WaitGameplayEventToActor_Statics::AbilityAsync_WaitGameplayEvent_eventWaitGameplayEventToActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityAsync_WaitGameplayEvent_WaitGameplayEventToActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilityAsync_WaitGameplayEvent_WaitGameplayEventToActor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAbilityAsync_WaitGameplayEvent_WaitGameplayEventToActor_Statics::AbilityAsync_WaitGameplayEvent_eventWaitGameplayEventToActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbilityAsync_WaitGameplayEvent_WaitGameplayEventToActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityAsync_WaitGameplayEvent_WaitGameplayEventToActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilityAsync_WaitGameplayEvent::execWaitGameplayEventToActor)
{
	P_GET_OBJECT(AActor,Z_Param_TargetActor);
	P_GET_STRUCT(FGameplayTag,Z_Param_EventTag);
	P_GET_UBOOL(Z_Param_OnlyTriggerOnce);
	P_GET_UBOOL(Z_Param_OnlyMatchExact);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAbilityAsync_WaitGameplayEvent**)Z_Param__Result=UAbilityAsync_WaitGameplayEvent::WaitGameplayEventToActor(Z_Param_TargetActor,Z_Param_EventTag,Z_Param_OnlyTriggerOnce,Z_Param_OnlyMatchExact);
	P_NATIVE_END;
}
// End Class UAbilityAsync_WaitGameplayEvent Function WaitGameplayEventToActor

// Begin Class UAbilityAsync_WaitGameplayEvent
void UAbilityAsync_WaitGameplayEvent::StaticRegisterNativesUAbilityAsync_WaitGameplayEvent()
{
	UClass* Class = UAbilityAsync_WaitGameplayEvent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "WaitGameplayEventToActor", &UAbilityAsync_WaitGameplayEvent::execWaitGameplayEventToActor },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAbilityAsync_WaitGameplayEvent);
UClass* Z_Construct_UClass_UAbilityAsync_WaitGameplayEvent_NoRegister()
{
	return UAbilityAsync_WaitGameplayEvent::StaticClass();
}
struct Z_Construct_UClass_UAbilityAsync_WaitGameplayEvent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Abilities/Async/AbilityAsync_WaitGameplayEvent.h" },
		{ "ModuleRelativePath", "Public/Abilities/Async/AbilityAsync_WaitGameplayEvent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventReceived_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/Async/AbilityAsync_WaitGameplayEvent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_EventReceived;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UDelegateFunction_UAbilityAsync_WaitGameplayEvent_EventReceivedDelegate__DelegateSignature, "EventReceivedDelegate__DelegateSignature" }, // 1617177931
		{ &Z_Construct_UFunction_UAbilityAsync_WaitGameplayEvent_WaitGameplayEventToActor, "WaitGameplayEventToActor" }, // 3983166028
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAbilityAsync_WaitGameplayEvent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAbilityAsync_WaitGameplayEvent_Statics::NewProp_EventReceived = { "EventReceived", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityAsync_WaitGameplayEvent, EventReceived), Z_Construct_UDelegateFunction_UAbilityAsync_WaitGameplayEvent_EventReceivedDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventReceived_MetaData), NewProp_EventReceived_MetaData) }; // 1617177931
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAbilityAsync_WaitGameplayEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityAsync_WaitGameplayEvent_Statics::NewProp_EventReceived,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityAsync_WaitGameplayEvent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAbilityAsync_WaitGameplayEvent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAbilityAsync,
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityAsync_WaitGameplayEvent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAbilityAsync_WaitGameplayEvent_Statics::ClassParams = {
	&UAbilityAsync_WaitGameplayEvent::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAbilityAsync_WaitGameplayEvent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityAsync_WaitGameplayEvent_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityAsync_WaitGameplayEvent_Statics::Class_MetaDataParams), Z_Construct_UClass_UAbilityAsync_WaitGameplayEvent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAbilityAsync_WaitGameplayEvent()
{
	if (!Z_Registration_Info_UClass_UAbilityAsync_WaitGameplayEvent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAbilityAsync_WaitGameplayEvent.OuterSingleton, Z_Construct_UClass_UAbilityAsync_WaitGameplayEvent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAbilityAsync_WaitGameplayEvent.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UClass* StaticClass<UAbilityAsync_WaitGameplayEvent>()
{
	return UAbilityAsync_WaitGameplayEvent::StaticClass();
}
UAbilityAsync_WaitGameplayEvent::UAbilityAsync_WaitGameplayEvent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAbilityAsync_WaitGameplayEvent);
UAbilityAsync_WaitGameplayEvent::~UAbilityAsync_WaitGameplayEvent() {}
// End Class UAbilityAsync_WaitGameplayEvent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitGameplayEvent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAbilityAsync_WaitGameplayEvent, UAbilityAsync_WaitGameplayEvent::StaticClass, TEXT("UAbilityAsync_WaitGameplayEvent"), &Z_Registration_Info_UClass_UAbilityAsync_WaitGameplayEvent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAbilityAsync_WaitGameplayEvent), 4235939974U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitGameplayEvent_h_782879743(TEXT("/Script/GameplayAbilities"),
	Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitGameplayEvent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitGameplayEvent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
