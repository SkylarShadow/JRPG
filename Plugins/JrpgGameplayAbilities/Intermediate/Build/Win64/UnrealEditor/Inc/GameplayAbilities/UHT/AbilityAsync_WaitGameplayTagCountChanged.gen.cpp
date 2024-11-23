// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayAbilities/Public/Abilities/Async/AbilityAsync_WaitGameplayTagCountChanged.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbilityAsync_WaitGameplayTagCountChanged() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityAsync();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityAsync_WaitGameplayTagCountChanged();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityAsync_WaitGameplayTagCountChanged_NoRegister();
GAMEPLAYABILITIES_API UFunction* Z_Construct_UDelegateFunction_UAbilityAsync_WaitGameplayTagCountChanged_AsyncWaitGameplayTagCountDelegate__DelegateSignature();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
UPackage* Z_Construct_UPackage__Script_GameplayAbilities();
// End Cross Module References

// Begin Delegate FAsyncWaitGameplayTagCountDelegate
struct Z_Construct_UDelegateFunction_UAbilityAsync_WaitGameplayTagCountChanged_AsyncWaitGameplayTagCountDelegate__DelegateSignature_Statics
{
	struct AbilityAsync_WaitGameplayTagCountChanged_eventAsyncWaitGameplayTagCountDelegate_Parms
	{
		int32 TagCount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Abilities/Async/AbilityAsync_WaitGameplayTagCountChanged.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_TagCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_UAbilityAsync_WaitGameplayTagCountChanged_AsyncWaitGameplayTagCountDelegate__DelegateSignature_Statics::NewProp_TagCount = { "TagCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityAsync_WaitGameplayTagCountChanged_eventAsyncWaitGameplayTagCountDelegate_Parms, TagCount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UAbilityAsync_WaitGameplayTagCountChanged_AsyncWaitGameplayTagCountDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UAbilityAsync_WaitGameplayTagCountChanged_AsyncWaitGameplayTagCountDelegate__DelegateSignature_Statics::NewProp_TagCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UAbilityAsync_WaitGameplayTagCountChanged_AsyncWaitGameplayTagCountDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UAbilityAsync_WaitGameplayTagCountChanged_AsyncWaitGameplayTagCountDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityAsync_WaitGameplayTagCountChanged, nullptr, "AsyncWaitGameplayTagCountDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UAbilityAsync_WaitGameplayTagCountChanged_AsyncWaitGameplayTagCountDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UAbilityAsync_WaitGameplayTagCountChanged_AsyncWaitGameplayTagCountDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UAbilityAsync_WaitGameplayTagCountChanged_AsyncWaitGameplayTagCountDelegate__DelegateSignature_Statics::AbilityAsync_WaitGameplayTagCountChanged_eventAsyncWaitGameplayTagCountDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UAbilityAsync_WaitGameplayTagCountChanged_AsyncWaitGameplayTagCountDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UAbilityAsync_WaitGameplayTagCountChanged_AsyncWaitGameplayTagCountDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UAbilityAsync_WaitGameplayTagCountChanged_AsyncWaitGameplayTagCountDelegate__DelegateSignature_Statics::AbilityAsync_WaitGameplayTagCountChanged_eventAsyncWaitGameplayTagCountDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UAbilityAsync_WaitGameplayTagCountChanged_AsyncWaitGameplayTagCountDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UAbilityAsync_WaitGameplayTagCountChanged_AsyncWaitGameplayTagCountDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UAbilityAsync_WaitGameplayTagCountChanged::FAsyncWaitGameplayTagCountDelegate_DelegateWrapper(const FMulticastScriptDelegate& AsyncWaitGameplayTagCountDelegate, int32 TagCount)
{
	struct AbilityAsync_WaitGameplayTagCountChanged_eventAsyncWaitGameplayTagCountDelegate_Parms
	{
		int32 TagCount;
	};
	AbilityAsync_WaitGameplayTagCountChanged_eventAsyncWaitGameplayTagCountDelegate_Parms Parms;
	Parms.TagCount=TagCount;
	AsyncWaitGameplayTagCountDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FAsyncWaitGameplayTagCountDelegate

// Begin Class UAbilityAsync_WaitGameplayTagCountChanged Function WaitGameplayTagCountChangedOnActor
struct Z_Construct_UFunction_UAbilityAsync_WaitGameplayTagCountChanged_WaitGameplayTagCountChangedOnActor_Statics
{
	struct AbilityAsync_WaitGameplayTagCountChanged_eventWaitGameplayTagCountChangedOnActor_Parms
	{
		AActor* TargetActor;
		FGameplayTag Tag;
		UAbilityAsync_WaitGameplayTagCountChanged* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "TRUE" },
		{ "Category", "Ability|Tasks" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Wait until the specified gameplay tag count changes on Target Actor's ability component\n\x09 * If used in an ability graph, this async action will wait even after activation ends. It's recommended to use WaitGameplayTagCountChange instead.\n\x09 */" },
#endif
		{ "DefaultToSelf", "TargetActor" },
		{ "ModuleRelativePath", "Public/Abilities/Async/AbilityAsync_WaitGameplayTagCountChanged.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Wait until the specified gameplay tag count changes on Target Actor's ability component\nIf used in an ability graph, this async action will wait even after activation ends. It's recommended to use WaitGameplayTagCountChange instead." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityAsync_WaitGameplayTagCountChanged_WaitGameplayTagCountChangedOnActor_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityAsync_WaitGameplayTagCountChanged_eventWaitGameplayTagCountChangedOnActor_Parms, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbilityAsync_WaitGameplayTagCountChanged_WaitGameplayTagCountChangedOnActor_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityAsync_WaitGameplayTagCountChanged_eventWaitGameplayTagCountChangedOnActor_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityAsync_WaitGameplayTagCountChanged_WaitGameplayTagCountChangedOnActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityAsync_WaitGameplayTagCountChanged_eventWaitGameplayTagCountChangedOnActor_Parms, ReturnValue), Z_Construct_UClass_UAbilityAsync_WaitGameplayTagCountChanged_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityAsync_WaitGameplayTagCountChanged_WaitGameplayTagCountChangedOnActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityAsync_WaitGameplayTagCountChanged_WaitGameplayTagCountChangedOnActor_Statics::NewProp_TargetActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityAsync_WaitGameplayTagCountChanged_WaitGameplayTagCountChangedOnActor_Statics::NewProp_Tag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityAsync_WaitGameplayTagCountChanged_WaitGameplayTagCountChangedOnActor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityAsync_WaitGameplayTagCountChanged_WaitGameplayTagCountChangedOnActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityAsync_WaitGameplayTagCountChanged_WaitGameplayTagCountChangedOnActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityAsync_WaitGameplayTagCountChanged, nullptr, "WaitGameplayTagCountChangedOnActor", nullptr, nullptr, Z_Construct_UFunction_UAbilityAsync_WaitGameplayTagCountChanged_WaitGameplayTagCountChangedOnActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityAsync_WaitGameplayTagCountChanged_WaitGameplayTagCountChangedOnActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAbilityAsync_WaitGameplayTagCountChanged_WaitGameplayTagCountChangedOnActor_Statics::AbilityAsync_WaitGameplayTagCountChanged_eventWaitGameplayTagCountChangedOnActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityAsync_WaitGameplayTagCountChanged_WaitGameplayTagCountChangedOnActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilityAsync_WaitGameplayTagCountChanged_WaitGameplayTagCountChangedOnActor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAbilityAsync_WaitGameplayTagCountChanged_WaitGameplayTagCountChangedOnActor_Statics::AbilityAsync_WaitGameplayTagCountChanged_eventWaitGameplayTagCountChangedOnActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbilityAsync_WaitGameplayTagCountChanged_WaitGameplayTagCountChangedOnActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityAsync_WaitGameplayTagCountChanged_WaitGameplayTagCountChangedOnActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilityAsync_WaitGameplayTagCountChanged::execWaitGameplayTagCountChangedOnActor)
{
	P_GET_OBJECT(AActor,Z_Param_TargetActor);
	P_GET_STRUCT(FGameplayTag,Z_Param_Tag);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAbilityAsync_WaitGameplayTagCountChanged**)Z_Param__Result=UAbilityAsync_WaitGameplayTagCountChanged::WaitGameplayTagCountChangedOnActor(Z_Param_TargetActor,Z_Param_Tag);
	P_NATIVE_END;
}
// End Class UAbilityAsync_WaitGameplayTagCountChanged Function WaitGameplayTagCountChangedOnActor

// Begin Class UAbilityAsync_WaitGameplayTagCountChanged
void UAbilityAsync_WaitGameplayTagCountChanged::StaticRegisterNativesUAbilityAsync_WaitGameplayTagCountChanged()
{
	UClass* Class = UAbilityAsync_WaitGameplayTagCountChanged::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "WaitGameplayTagCountChangedOnActor", &UAbilityAsync_WaitGameplayTagCountChanged::execWaitGameplayTagCountChangedOnActor },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAbilityAsync_WaitGameplayTagCountChanged);
UClass* Z_Construct_UClass_UAbilityAsync_WaitGameplayTagCountChanged_NoRegister()
{
	return UAbilityAsync_WaitGameplayTagCountChanged::StaticClass();
}
struct Z_Construct_UClass_UAbilityAsync_WaitGameplayTagCountChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Abilities/Async/AbilityAsync_WaitGameplayTagCountChanged.h" },
		{ "ModuleRelativePath", "Public/Abilities/Async/AbilityAsync_WaitGameplayTagCountChanged.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TagCountChanged_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/Async/AbilityAsync_WaitGameplayTagCountChanged.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_TagCountChanged;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UDelegateFunction_UAbilityAsync_WaitGameplayTagCountChanged_AsyncWaitGameplayTagCountDelegate__DelegateSignature, "AsyncWaitGameplayTagCountDelegate__DelegateSignature" }, // 2978153388
		{ &Z_Construct_UFunction_UAbilityAsync_WaitGameplayTagCountChanged_WaitGameplayTagCountChangedOnActor, "WaitGameplayTagCountChangedOnActor" }, // 985011295
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAbilityAsync_WaitGameplayTagCountChanged>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAbilityAsync_WaitGameplayTagCountChanged_Statics::NewProp_TagCountChanged = { "TagCountChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityAsync_WaitGameplayTagCountChanged, TagCountChanged), Z_Construct_UDelegateFunction_UAbilityAsync_WaitGameplayTagCountChanged_AsyncWaitGameplayTagCountDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TagCountChanged_MetaData), NewProp_TagCountChanged_MetaData) }; // 2978153388
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAbilityAsync_WaitGameplayTagCountChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityAsync_WaitGameplayTagCountChanged_Statics::NewProp_TagCountChanged,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityAsync_WaitGameplayTagCountChanged_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAbilityAsync_WaitGameplayTagCountChanged_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAbilityAsync,
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityAsync_WaitGameplayTagCountChanged_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAbilityAsync_WaitGameplayTagCountChanged_Statics::ClassParams = {
	&UAbilityAsync_WaitGameplayTagCountChanged::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAbilityAsync_WaitGameplayTagCountChanged_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityAsync_WaitGameplayTagCountChanged_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityAsync_WaitGameplayTagCountChanged_Statics::Class_MetaDataParams), Z_Construct_UClass_UAbilityAsync_WaitGameplayTagCountChanged_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAbilityAsync_WaitGameplayTagCountChanged()
{
	if (!Z_Registration_Info_UClass_UAbilityAsync_WaitGameplayTagCountChanged.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAbilityAsync_WaitGameplayTagCountChanged.OuterSingleton, Z_Construct_UClass_UAbilityAsync_WaitGameplayTagCountChanged_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAbilityAsync_WaitGameplayTagCountChanged.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UClass* StaticClass<UAbilityAsync_WaitGameplayTagCountChanged>()
{
	return UAbilityAsync_WaitGameplayTagCountChanged::StaticClass();
}
UAbilityAsync_WaitGameplayTagCountChanged::UAbilityAsync_WaitGameplayTagCountChanged(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAbilityAsync_WaitGameplayTagCountChanged);
UAbilityAsync_WaitGameplayTagCountChanged::~UAbilityAsync_WaitGameplayTagCountChanged() {}
// End Class UAbilityAsync_WaitGameplayTagCountChanged

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitGameplayTagCountChanged_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAbilityAsync_WaitGameplayTagCountChanged, UAbilityAsync_WaitGameplayTagCountChanged::StaticClass, TEXT("UAbilityAsync_WaitGameplayTagCountChanged"), &Z_Registration_Info_UClass_UAbilityAsync_WaitGameplayTagCountChanged, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAbilityAsync_WaitGameplayTagCountChanged), 1807620737U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitGameplayTagCountChanged_h_162666485(TEXT("/Script/GameplayAbilities"),
	Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitGameplayTagCountChanged_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitGameplayTagCountChanged_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
