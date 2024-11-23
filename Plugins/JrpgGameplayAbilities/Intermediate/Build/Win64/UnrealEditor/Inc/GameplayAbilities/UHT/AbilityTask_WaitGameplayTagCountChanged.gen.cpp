// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayAbilities/Public/Abilities/Tasks/AbilityTask_WaitGameplayTagCountChanged.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbilityTask_WaitGameplayTagCountChanged() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask_WaitGameplayTagCountChanged();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask_WaitGameplayTagCountChanged_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
GAMEPLAYABILITIES_API UFunction* Z_Construct_UDelegateFunction_GameplayAbilities_WaitGameplayTagCountDelegate__DelegateSignature();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
UPackage* Z_Construct_UPackage__Script_GameplayAbilities();
// End Cross Module References

// Begin Delegate FWaitGameplayTagCountDelegate
struct Z_Construct_UDelegateFunction_GameplayAbilities_WaitGameplayTagCountDelegate__DelegateSignature_Statics
{
	struct _Script_GameplayAbilities_eventWaitGameplayTagCountDelegate_Parms
	{
		int32 TagCount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_WaitGameplayTagCountChanged.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_TagCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_GameplayAbilities_WaitGameplayTagCountDelegate__DelegateSignature_Statics::NewProp_TagCount = { "TagCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_GameplayAbilities_eventWaitGameplayTagCountDelegate_Parms, TagCount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GameplayAbilities_WaitGameplayTagCountDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GameplayAbilities_WaitGameplayTagCountDelegate__DelegateSignature_Statics::NewProp_TagCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameplayAbilities_WaitGameplayTagCountDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GameplayAbilities_WaitGameplayTagCountDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GameplayAbilities, nullptr, "WaitGameplayTagCountDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_GameplayAbilities_WaitGameplayTagCountDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameplayAbilities_WaitGameplayTagCountDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_GameplayAbilities_WaitGameplayTagCountDelegate__DelegateSignature_Statics::_Script_GameplayAbilities_eventWaitGameplayTagCountDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameplayAbilities_WaitGameplayTagCountDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_GameplayAbilities_WaitGameplayTagCountDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_GameplayAbilities_WaitGameplayTagCountDelegate__DelegateSignature_Statics::_Script_GameplayAbilities_eventWaitGameplayTagCountDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_GameplayAbilities_WaitGameplayTagCountDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_GameplayAbilities_WaitGameplayTagCountDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FWaitGameplayTagCountDelegate_DelegateWrapper(const FMulticastScriptDelegate& WaitGameplayTagCountDelegate, int32 TagCount)
{
	struct _Script_GameplayAbilities_eventWaitGameplayTagCountDelegate_Parms
	{
		int32 TagCount;
	};
	_Script_GameplayAbilities_eventWaitGameplayTagCountDelegate_Parms Parms;
	Parms.TagCount=TagCount;
	WaitGameplayTagCountDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FWaitGameplayTagCountDelegate

// Begin Class UAbilityTask_WaitGameplayTagCountChanged Function WaitGameplayTagCountChange
struct Z_Construct_UFunction_UAbilityTask_WaitGameplayTagCountChanged_WaitGameplayTagCountChange_Statics
{
	struct AbilityTask_WaitGameplayTagCountChanged_eventWaitGameplayTagCountChange_Parms
	{
		UGameplayAbility* OwningAbility;
		FGameplayTag Tag;
		AActor* InOptionalExternalTarget;
		UAbilityTask_WaitGameplayTagCountChanged* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "TRUE" },
		{ "Category", "Ability|Tasks" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * \x09Wait until the specified gameplay tag count has changed. By default this will look at the owner of this ability. OptionalExternalTarget can be set to make this look at another actor's tags for changes. \n\x09 */" },
#endif
		{ "CPP_Default_InOptionalExternalTarget", "None" },
		{ "DefaultToSelf", "OwningAbility" },
		{ "HidePin", "OwningAbility" },
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_WaitGameplayTagCountChanged.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Wait until the specified gameplay tag count has changed. By default this will look at the owner of this ability. OptionalExternalTarget can be set to make this look at another actor's tags for changes." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningAbility;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InOptionalExternalTarget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_WaitGameplayTagCountChanged_WaitGameplayTagCountChange_Statics::NewProp_OwningAbility = { "OwningAbility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_WaitGameplayTagCountChanged_eventWaitGameplayTagCountChange_Parms, OwningAbility), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbilityTask_WaitGameplayTagCountChanged_WaitGameplayTagCountChange_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_WaitGameplayTagCountChanged_eventWaitGameplayTagCountChange_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_WaitGameplayTagCountChanged_WaitGameplayTagCountChange_Statics::NewProp_InOptionalExternalTarget = { "InOptionalExternalTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_WaitGameplayTagCountChanged_eventWaitGameplayTagCountChange_Parms, InOptionalExternalTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_WaitGameplayTagCountChanged_WaitGameplayTagCountChange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_WaitGameplayTagCountChanged_eventWaitGameplayTagCountChange_Parms, ReturnValue), Z_Construct_UClass_UAbilityTask_WaitGameplayTagCountChanged_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityTask_WaitGameplayTagCountChanged_WaitGameplayTagCountChange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitGameplayTagCountChanged_WaitGameplayTagCountChange_Statics::NewProp_OwningAbility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitGameplayTagCountChanged_WaitGameplayTagCountChange_Statics::NewProp_Tag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitGameplayTagCountChanged_WaitGameplayTagCountChange_Statics::NewProp_InOptionalExternalTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitGameplayTagCountChanged_WaitGameplayTagCountChange_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_WaitGameplayTagCountChanged_WaitGameplayTagCountChange_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityTask_WaitGameplayTagCountChanged_WaitGameplayTagCountChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityTask_WaitGameplayTagCountChanged, nullptr, "WaitGameplayTagCountChange", nullptr, nullptr, Z_Construct_UFunction_UAbilityTask_WaitGameplayTagCountChanged_WaitGameplayTagCountChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_WaitGameplayTagCountChanged_WaitGameplayTagCountChange_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAbilityTask_WaitGameplayTagCountChanged_WaitGameplayTagCountChange_Statics::AbilityTask_WaitGameplayTagCountChanged_eventWaitGameplayTagCountChange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04082401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_WaitGameplayTagCountChanged_WaitGameplayTagCountChange_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilityTask_WaitGameplayTagCountChanged_WaitGameplayTagCountChange_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAbilityTask_WaitGameplayTagCountChanged_WaitGameplayTagCountChange_Statics::AbilityTask_WaitGameplayTagCountChanged_eventWaitGameplayTagCountChange_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbilityTask_WaitGameplayTagCountChanged_WaitGameplayTagCountChange()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityTask_WaitGameplayTagCountChanged_WaitGameplayTagCountChange_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilityTask_WaitGameplayTagCountChanged::execWaitGameplayTagCountChange)
{
	P_GET_OBJECT(UGameplayAbility,Z_Param_OwningAbility);
	P_GET_STRUCT(FGameplayTag,Z_Param_Tag);
	P_GET_OBJECT(AActor,Z_Param_InOptionalExternalTarget);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAbilityTask_WaitGameplayTagCountChanged**)Z_Param__Result=UAbilityTask_WaitGameplayTagCountChanged::WaitGameplayTagCountChange(Z_Param_OwningAbility,Z_Param_Tag,Z_Param_InOptionalExternalTarget);
	P_NATIVE_END;
}
// End Class UAbilityTask_WaitGameplayTagCountChanged Function WaitGameplayTagCountChange

// Begin Class UAbilityTask_WaitGameplayTagCountChanged
void UAbilityTask_WaitGameplayTagCountChanged::StaticRegisterNativesUAbilityTask_WaitGameplayTagCountChanged()
{
	UClass* Class = UAbilityTask_WaitGameplayTagCountChanged::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "WaitGameplayTagCountChange", &UAbilityTask_WaitGameplayTagCountChanged::execWaitGameplayTagCountChange },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAbilityTask_WaitGameplayTagCountChanged);
UClass* Z_Construct_UClass_UAbilityTask_WaitGameplayTagCountChanged_NoRegister()
{
	return UAbilityTask_WaitGameplayTagCountChanged::StaticClass();
}
struct Z_Construct_UClass_UAbilityTask_WaitGameplayTagCountChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Abilities/Tasks/AbilityTask_WaitGameplayTagCountChanged.h" },
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_WaitGameplayTagCountChanged.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TagCountChanged_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_WaitGameplayTagCountChanged.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OptionalExternalTarget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_WaitGameplayTagCountChanged.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_TagCountChanged;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OptionalExternalTarget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAbilityTask_WaitGameplayTagCountChanged_WaitGameplayTagCountChange, "WaitGameplayTagCountChange" }, // 2414910509
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAbilityTask_WaitGameplayTagCountChanged>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAbilityTask_WaitGameplayTagCountChanged_Statics::NewProp_TagCountChanged = { "TagCountChanged", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityTask_WaitGameplayTagCountChanged, TagCountChanged), Z_Construct_UDelegateFunction_GameplayAbilities_WaitGameplayTagCountDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TagCountChanged_MetaData), NewProp_TagCountChanged_MetaData) }; // 451049872
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAbilityTask_WaitGameplayTagCountChanged_Statics::NewProp_OptionalExternalTarget = { "OptionalExternalTarget", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityTask_WaitGameplayTagCountChanged, OptionalExternalTarget), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OptionalExternalTarget_MetaData), NewProp_OptionalExternalTarget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAbilityTask_WaitGameplayTagCountChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_WaitGameplayTagCountChanged_Statics::NewProp_TagCountChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_WaitGameplayTagCountChanged_Statics::NewProp_OptionalExternalTarget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_WaitGameplayTagCountChanged_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAbilityTask_WaitGameplayTagCountChanged_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAbilityTask,
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_WaitGameplayTagCountChanged_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAbilityTask_WaitGameplayTagCountChanged_Statics::ClassParams = {
	&UAbilityTask_WaitGameplayTagCountChanged::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAbilityTask_WaitGameplayTagCountChanged_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_WaitGameplayTagCountChanged_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_WaitGameplayTagCountChanged_Statics::Class_MetaDataParams), Z_Construct_UClass_UAbilityTask_WaitGameplayTagCountChanged_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAbilityTask_WaitGameplayTagCountChanged()
{
	if (!Z_Registration_Info_UClass_UAbilityTask_WaitGameplayTagCountChanged.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAbilityTask_WaitGameplayTagCountChanged.OuterSingleton, Z_Construct_UClass_UAbilityTask_WaitGameplayTagCountChanged_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAbilityTask_WaitGameplayTagCountChanged.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UClass* StaticClass<UAbilityTask_WaitGameplayTagCountChanged>()
{
	return UAbilityTask_WaitGameplayTagCountChanged::StaticClass();
}
UAbilityTask_WaitGameplayTagCountChanged::UAbilityTask_WaitGameplayTagCountChanged(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAbilityTask_WaitGameplayTagCountChanged);
UAbilityTask_WaitGameplayTagCountChanged::~UAbilityTask_WaitGameplayTagCountChanged() {}
// End Class UAbilityTask_WaitGameplayTagCountChanged

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayTagCountChanged_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAbilityTask_WaitGameplayTagCountChanged, UAbilityTask_WaitGameplayTagCountChanged::StaticClass, TEXT("UAbilityTask_WaitGameplayTagCountChanged"), &Z_Registration_Info_UClass_UAbilityTask_WaitGameplayTagCountChanged, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAbilityTask_WaitGameplayTagCountChanged), 1473798874U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayTagCountChanged_h_1441452420(TEXT("/Script/GameplayAbilities"),
	Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayTagCountChanged_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayTagCountChanged_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
