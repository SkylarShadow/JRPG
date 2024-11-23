// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayAbilities/Public/Abilities/Async/AbilityAsync_WaitGameplayTag.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbilityAsync_WaitGameplayTag() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityAsync();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityAsync_WaitGameplayTag();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityAsync_WaitGameplayTag_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityAsync_WaitGameplayTagAdded();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityAsync_WaitGameplayTagAdded_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityAsync_WaitGameplayTagRemoved();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityAsync_WaitGameplayTagRemoved_NoRegister();
GAMEPLAYABILITIES_API UFunction* Z_Construct_UDelegateFunction_UAbilityAsync_WaitGameplayTag_AsyncWaitGameplayTagDelegate__DelegateSignature();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
UPackage* Z_Construct_UPackage__Script_GameplayAbilities();
// End Cross Module References

// Begin Delegate FAsyncWaitGameplayTagDelegate
struct Z_Construct_UDelegateFunction_UAbilityAsync_WaitGameplayTag_AsyncWaitGameplayTagDelegate__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Abilities/Async/AbilityAsync_WaitGameplayTag.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UAbilityAsync_WaitGameplayTag_AsyncWaitGameplayTagDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityAsync_WaitGameplayTag, nullptr, "AsyncWaitGameplayTagDelegate__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UAbilityAsync_WaitGameplayTag_AsyncWaitGameplayTagDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UAbilityAsync_WaitGameplayTag_AsyncWaitGameplayTagDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_UAbilityAsync_WaitGameplayTag_AsyncWaitGameplayTagDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UAbilityAsync_WaitGameplayTag_AsyncWaitGameplayTagDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UAbilityAsync_WaitGameplayTag::FAsyncWaitGameplayTagDelegate_DelegateWrapper(const FMulticastScriptDelegate& AsyncWaitGameplayTagDelegate)
{
	AsyncWaitGameplayTagDelegate.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FAsyncWaitGameplayTagDelegate

// Begin Class UAbilityAsync_WaitGameplayTag
void UAbilityAsync_WaitGameplayTag::StaticRegisterNativesUAbilityAsync_WaitGameplayTag()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAbilityAsync_WaitGameplayTag);
UClass* Z_Construct_UClass_UAbilityAsync_WaitGameplayTag_NoRegister()
{
	return UAbilityAsync_WaitGameplayTag::StaticClass();
}
struct Z_Construct_UClass_UAbilityAsync_WaitGameplayTag_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Abilities/Async/AbilityAsync_WaitGameplayTag.h" },
		{ "ModuleRelativePath", "Public/Abilities/Async/AbilityAsync_WaitGameplayTag.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UDelegateFunction_UAbilityAsync_WaitGameplayTag_AsyncWaitGameplayTagDelegate__DelegateSignature, "AsyncWaitGameplayTagDelegate__DelegateSignature" }, // 2767614773
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAbilityAsync_WaitGameplayTag>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAbilityAsync_WaitGameplayTag_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAbilityAsync,
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityAsync_WaitGameplayTag_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAbilityAsync_WaitGameplayTag_Statics::ClassParams = {
	&UAbilityAsync_WaitGameplayTag::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityAsync_WaitGameplayTag_Statics::Class_MetaDataParams), Z_Construct_UClass_UAbilityAsync_WaitGameplayTag_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAbilityAsync_WaitGameplayTag()
{
	if (!Z_Registration_Info_UClass_UAbilityAsync_WaitGameplayTag.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAbilityAsync_WaitGameplayTag.OuterSingleton, Z_Construct_UClass_UAbilityAsync_WaitGameplayTag_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAbilityAsync_WaitGameplayTag.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UClass* StaticClass<UAbilityAsync_WaitGameplayTag>()
{
	return UAbilityAsync_WaitGameplayTag::StaticClass();
}
UAbilityAsync_WaitGameplayTag::UAbilityAsync_WaitGameplayTag(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAbilityAsync_WaitGameplayTag);
UAbilityAsync_WaitGameplayTag::~UAbilityAsync_WaitGameplayTag() {}
// End Class UAbilityAsync_WaitGameplayTag

// Begin Class UAbilityAsync_WaitGameplayTagAdded Function WaitGameplayTagAddToActor
struct Z_Construct_UFunction_UAbilityAsync_WaitGameplayTagAdded_WaitGameplayTagAddToActor_Statics
{
	struct AbilityAsync_WaitGameplayTagAdded_eventWaitGameplayTagAddToActor_Parms
	{
		AActor* TargetActor;
		FGameplayTag Tag;
		bool OnlyTriggerOnce;
		UAbilityAsync_WaitGameplayTagAdded* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "TRUE" },
		{ "Category", "Ability|Tasks" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Wait until the specified gameplay tag is Added to Target Actor's ability component\n\x09 * If the tag is already present when this task is started, it will immediately broadcast the Added event. It will keep listening as long as OnlyTriggerOnce = false.\n\x09 * If used in an ability graph, this async action will wait even after activation ends. It's recommended to use WaitGameplayTagAdd instead.\n\x09 */" },
#endif
		{ "CPP_Default_OnlyTriggerOnce", "false" },
		{ "DefaultToSelf", "TargetActor" },
		{ "ModuleRelativePath", "Public/Abilities/Async/AbilityAsync_WaitGameplayTag.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Wait until the specified gameplay tag is Added to Target Actor's ability component\nIf the tag is already present when this task is started, it will immediately broadcast the Added event. It will keep listening as long as OnlyTriggerOnce = false.\nIf used in an ability graph, this async action will wait even after activation ends. It's recommended to use WaitGameplayTagAdd instead." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
	static void NewProp_OnlyTriggerOnce_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_OnlyTriggerOnce;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityAsync_WaitGameplayTagAdded_WaitGameplayTagAddToActor_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityAsync_WaitGameplayTagAdded_eventWaitGameplayTagAddToActor_Parms, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbilityAsync_WaitGameplayTagAdded_WaitGameplayTagAddToActor_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityAsync_WaitGameplayTagAdded_eventWaitGameplayTagAddToActor_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
void Z_Construct_UFunction_UAbilityAsync_WaitGameplayTagAdded_WaitGameplayTagAddToActor_Statics::NewProp_OnlyTriggerOnce_SetBit(void* Obj)
{
	((AbilityAsync_WaitGameplayTagAdded_eventWaitGameplayTagAddToActor_Parms*)Obj)->OnlyTriggerOnce = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAbilityAsync_WaitGameplayTagAdded_WaitGameplayTagAddToActor_Statics::NewProp_OnlyTriggerOnce = { "OnlyTriggerOnce", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AbilityAsync_WaitGameplayTagAdded_eventWaitGameplayTagAddToActor_Parms), &Z_Construct_UFunction_UAbilityAsync_WaitGameplayTagAdded_WaitGameplayTagAddToActor_Statics::NewProp_OnlyTriggerOnce_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityAsync_WaitGameplayTagAdded_WaitGameplayTagAddToActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityAsync_WaitGameplayTagAdded_eventWaitGameplayTagAddToActor_Parms, ReturnValue), Z_Construct_UClass_UAbilityAsync_WaitGameplayTagAdded_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityAsync_WaitGameplayTagAdded_WaitGameplayTagAddToActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityAsync_WaitGameplayTagAdded_WaitGameplayTagAddToActor_Statics::NewProp_TargetActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityAsync_WaitGameplayTagAdded_WaitGameplayTagAddToActor_Statics::NewProp_Tag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityAsync_WaitGameplayTagAdded_WaitGameplayTagAddToActor_Statics::NewProp_OnlyTriggerOnce,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityAsync_WaitGameplayTagAdded_WaitGameplayTagAddToActor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityAsync_WaitGameplayTagAdded_WaitGameplayTagAddToActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityAsync_WaitGameplayTagAdded_WaitGameplayTagAddToActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityAsync_WaitGameplayTagAdded, nullptr, "WaitGameplayTagAddToActor", nullptr, nullptr, Z_Construct_UFunction_UAbilityAsync_WaitGameplayTagAdded_WaitGameplayTagAddToActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityAsync_WaitGameplayTagAdded_WaitGameplayTagAddToActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAbilityAsync_WaitGameplayTagAdded_WaitGameplayTagAddToActor_Statics::AbilityAsync_WaitGameplayTagAdded_eventWaitGameplayTagAddToActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityAsync_WaitGameplayTagAdded_WaitGameplayTagAddToActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilityAsync_WaitGameplayTagAdded_WaitGameplayTagAddToActor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAbilityAsync_WaitGameplayTagAdded_WaitGameplayTagAddToActor_Statics::AbilityAsync_WaitGameplayTagAdded_eventWaitGameplayTagAddToActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbilityAsync_WaitGameplayTagAdded_WaitGameplayTagAddToActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityAsync_WaitGameplayTagAdded_WaitGameplayTagAddToActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilityAsync_WaitGameplayTagAdded::execWaitGameplayTagAddToActor)
{
	P_GET_OBJECT(AActor,Z_Param_TargetActor);
	P_GET_STRUCT(FGameplayTag,Z_Param_Tag);
	P_GET_UBOOL(Z_Param_OnlyTriggerOnce);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAbilityAsync_WaitGameplayTagAdded**)Z_Param__Result=UAbilityAsync_WaitGameplayTagAdded::WaitGameplayTagAddToActor(Z_Param_TargetActor,Z_Param_Tag,Z_Param_OnlyTriggerOnce);
	P_NATIVE_END;
}
// End Class UAbilityAsync_WaitGameplayTagAdded Function WaitGameplayTagAddToActor

// Begin Class UAbilityAsync_WaitGameplayTagAdded
void UAbilityAsync_WaitGameplayTagAdded::StaticRegisterNativesUAbilityAsync_WaitGameplayTagAdded()
{
	UClass* Class = UAbilityAsync_WaitGameplayTagAdded::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "WaitGameplayTagAddToActor", &UAbilityAsync_WaitGameplayTagAdded::execWaitGameplayTagAddToActor },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAbilityAsync_WaitGameplayTagAdded);
UClass* Z_Construct_UClass_UAbilityAsync_WaitGameplayTagAdded_NoRegister()
{
	return UAbilityAsync_WaitGameplayTagAdded::StaticClass();
}
struct Z_Construct_UClass_UAbilityAsync_WaitGameplayTagAdded_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Abilities/Async/AbilityAsync_WaitGameplayTag.h" },
		{ "ModuleRelativePath", "Public/Abilities/Async/AbilityAsync_WaitGameplayTag.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Added_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/Async/AbilityAsync_WaitGameplayTag.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_Added;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAbilityAsync_WaitGameplayTagAdded_WaitGameplayTagAddToActor, "WaitGameplayTagAddToActor" }, // 2328141581
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAbilityAsync_WaitGameplayTagAdded>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAbilityAsync_WaitGameplayTagAdded_Statics::NewProp_Added = { "Added", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityAsync_WaitGameplayTagAdded, Added), Z_Construct_UDelegateFunction_UAbilityAsync_WaitGameplayTag_AsyncWaitGameplayTagDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Added_MetaData), NewProp_Added_MetaData) }; // 2767614773
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAbilityAsync_WaitGameplayTagAdded_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityAsync_WaitGameplayTagAdded_Statics::NewProp_Added,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityAsync_WaitGameplayTagAdded_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAbilityAsync_WaitGameplayTagAdded_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAbilityAsync_WaitGameplayTag,
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityAsync_WaitGameplayTagAdded_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAbilityAsync_WaitGameplayTagAdded_Statics::ClassParams = {
	&UAbilityAsync_WaitGameplayTagAdded::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAbilityAsync_WaitGameplayTagAdded_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityAsync_WaitGameplayTagAdded_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityAsync_WaitGameplayTagAdded_Statics::Class_MetaDataParams), Z_Construct_UClass_UAbilityAsync_WaitGameplayTagAdded_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAbilityAsync_WaitGameplayTagAdded()
{
	if (!Z_Registration_Info_UClass_UAbilityAsync_WaitGameplayTagAdded.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAbilityAsync_WaitGameplayTagAdded.OuterSingleton, Z_Construct_UClass_UAbilityAsync_WaitGameplayTagAdded_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAbilityAsync_WaitGameplayTagAdded.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UClass* StaticClass<UAbilityAsync_WaitGameplayTagAdded>()
{
	return UAbilityAsync_WaitGameplayTagAdded::StaticClass();
}
UAbilityAsync_WaitGameplayTagAdded::UAbilityAsync_WaitGameplayTagAdded(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAbilityAsync_WaitGameplayTagAdded);
UAbilityAsync_WaitGameplayTagAdded::~UAbilityAsync_WaitGameplayTagAdded() {}
// End Class UAbilityAsync_WaitGameplayTagAdded

// Begin Class UAbilityAsync_WaitGameplayTagRemoved Function WaitGameplayTagRemoveFromActor
struct Z_Construct_UFunction_UAbilityAsync_WaitGameplayTagRemoved_WaitGameplayTagRemoveFromActor_Statics
{
	struct AbilityAsync_WaitGameplayTagRemoved_eventWaitGameplayTagRemoveFromActor_Parms
	{
		AActor* TargetActor;
		FGameplayTag Tag;
		bool OnlyTriggerOnce;
		UAbilityAsync_WaitGameplayTagRemoved* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "TRUE" },
		{ "Category", "Ability|Tasks" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Wait until the specified gameplay tag is Removed from Target Actor's ability component\n\x09 * If the tag is not present when this task is started, it will immediately broadcast the Removed event. It will keep listening as long as OnlyTriggerOnce = false.\n\x09 * If used in an ability graph, this async action will wait even after activation ends. It's recommended to use WaitGameplayTagRemove instead.\n\x09 */" },
#endif
		{ "CPP_Default_OnlyTriggerOnce", "false" },
		{ "DefaultToSelf", "TargetActor" },
		{ "ModuleRelativePath", "Public/Abilities/Async/AbilityAsync_WaitGameplayTag.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Wait until the specified gameplay tag is Removed from Target Actor's ability component\nIf the tag is not present when this task is started, it will immediately broadcast the Removed event. It will keep listening as long as OnlyTriggerOnce = false.\nIf used in an ability graph, this async action will wait even after activation ends. It's recommended to use WaitGameplayTagRemove instead." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
	static void NewProp_OnlyTriggerOnce_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_OnlyTriggerOnce;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityAsync_WaitGameplayTagRemoved_WaitGameplayTagRemoveFromActor_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityAsync_WaitGameplayTagRemoved_eventWaitGameplayTagRemoveFromActor_Parms, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbilityAsync_WaitGameplayTagRemoved_WaitGameplayTagRemoveFromActor_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityAsync_WaitGameplayTagRemoved_eventWaitGameplayTagRemoveFromActor_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
void Z_Construct_UFunction_UAbilityAsync_WaitGameplayTagRemoved_WaitGameplayTagRemoveFromActor_Statics::NewProp_OnlyTriggerOnce_SetBit(void* Obj)
{
	((AbilityAsync_WaitGameplayTagRemoved_eventWaitGameplayTagRemoveFromActor_Parms*)Obj)->OnlyTriggerOnce = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAbilityAsync_WaitGameplayTagRemoved_WaitGameplayTagRemoveFromActor_Statics::NewProp_OnlyTriggerOnce = { "OnlyTriggerOnce", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AbilityAsync_WaitGameplayTagRemoved_eventWaitGameplayTagRemoveFromActor_Parms), &Z_Construct_UFunction_UAbilityAsync_WaitGameplayTagRemoved_WaitGameplayTagRemoveFromActor_Statics::NewProp_OnlyTriggerOnce_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityAsync_WaitGameplayTagRemoved_WaitGameplayTagRemoveFromActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityAsync_WaitGameplayTagRemoved_eventWaitGameplayTagRemoveFromActor_Parms, ReturnValue), Z_Construct_UClass_UAbilityAsync_WaitGameplayTagRemoved_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityAsync_WaitGameplayTagRemoved_WaitGameplayTagRemoveFromActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityAsync_WaitGameplayTagRemoved_WaitGameplayTagRemoveFromActor_Statics::NewProp_TargetActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityAsync_WaitGameplayTagRemoved_WaitGameplayTagRemoveFromActor_Statics::NewProp_Tag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityAsync_WaitGameplayTagRemoved_WaitGameplayTagRemoveFromActor_Statics::NewProp_OnlyTriggerOnce,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityAsync_WaitGameplayTagRemoved_WaitGameplayTagRemoveFromActor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityAsync_WaitGameplayTagRemoved_WaitGameplayTagRemoveFromActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityAsync_WaitGameplayTagRemoved_WaitGameplayTagRemoveFromActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityAsync_WaitGameplayTagRemoved, nullptr, "WaitGameplayTagRemoveFromActor", nullptr, nullptr, Z_Construct_UFunction_UAbilityAsync_WaitGameplayTagRemoved_WaitGameplayTagRemoveFromActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityAsync_WaitGameplayTagRemoved_WaitGameplayTagRemoveFromActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAbilityAsync_WaitGameplayTagRemoved_WaitGameplayTagRemoveFromActor_Statics::AbilityAsync_WaitGameplayTagRemoved_eventWaitGameplayTagRemoveFromActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityAsync_WaitGameplayTagRemoved_WaitGameplayTagRemoveFromActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilityAsync_WaitGameplayTagRemoved_WaitGameplayTagRemoveFromActor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAbilityAsync_WaitGameplayTagRemoved_WaitGameplayTagRemoveFromActor_Statics::AbilityAsync_WaitGameplayTagRemoved_eventWaitGameplayTagRemoveFromActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbilityAsync_WaitGameplayTagRemoved_WaitGameplayTagRemoveFromActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityAsync_WaitGameplayTagRemoved_WaitGameplayTagRemoveFromActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilityAsync_WaitGameplayTagRemoved::execWaitGameplayTagRemoveFromActor)
{
	P_GET_OBJECT(AActor,Z_Param_TargetActor);
	P_GET_STRUCT(FGameplayTag,Z_Param_Tag);
	P_GET_UBOOL(Z_Param_OnlyTriggerOnce);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAbilityAsync_WaitGameplayTagRemoved**)Z_Param__Result=UAbilityAsync_WaitGameplayTagRemoved::WaitGameplayTagRemoveFromActor(Z_Param_TargetActor,Z_Param_Tag,Z_Param_OnlyTriggerOnce);
	P_NATIVE_END;
}
// End Class UAbilityAsync_WaitGameplayTagRemoved Function WaitGameplayTagRemoveFromActor

// Begin Class UAbilityAsync_WaitGameplayTagRemoved
void UAbilityAsync_WaitGameplayTagRemoved::StaticRegisterNativesUAbilityAsync_WaitGameplayTagRemoved()
{
	UClass* Class = UAbilityAsync_WaitGameplayTagRemoved::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "WaitGameplayTagRemoveFromActor", &UAbilityAsync_WaitGameplayTagRemoved::execWaitGameplayTagRemoveFromActor },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAbilityAsync_WaitGameplayTagRemoved);
UClass* Z_Construct_UClass_UAbilityAsync_WaitGameplayTagRemoved_NoRegister()
{
	return UAbilityAsync_WaitGameplayTagRemoved::StaticClass();
}
struct Z_Construct_UClass_UAbilityAsync_WaitGameplayTagRemoved_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Abilities/Async/AbilityAsync_WaitGameplayTag.h" },
		{ "ModuleRelativePath", "Public/Abilities/Async/AbilityAsync_WaitGameplayTag.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Removed_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/Async/AbilityAsync_WaitGameplayTag.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_Removed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAbilityAsync_WaitGameplayTagRemoved_WaitGameplayTagRemoveFromActor, "WaitGameplayTagRemoveFromActor" }, // 1269798274
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAbilityAsync_WaitGameplayTagRemoved>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAbilityAsync_WaitGameplayTagRemoved_Statics::NewProp_Removed = { "Removed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityAsync_WaitGameplayTagRemoved, Removed), Z_Construct_UDelegateFunction_UAbilityAsync_WaitGameplayTag_AsyncWaitGameplayTagDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Removed_MetaData), NewProp_Removed_MetaData) }; // 2767614773
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAbilityAsync_WaitGameplayTagRemoved_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityAsync_WaitGameplayTagRemoved_Statics::NewProp_Removed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityAsync_WaitGameplayTagRemoved_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAbilityAsync_WaitGameplayTagRemoved_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAbilityAsync_WaitGameplayTag,
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityAsync_WaitGameplayTagRemoved_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAbilityAsync_WaitGameplayTagRemoved_Statics::ClassParams = {
	&UAbilityAsync_WaitGameplayTagRemoved::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAbilityAsync_WaitGameplayTagRemoved_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityAsync_WaitGameplayTagRemoved_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityAsync_WaitGameplayTagRemoved_Statics::Class_MetaDataParams), Z_Construct_UClass_UAbilityAsync_WaitGameplayTagRemoved_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAbilityAsync_WaitGameplayTagRemoved()
{
	if (!Z_Registration_Info_UClass_UAbilityAsync_WaitGameplayTagRemoved.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAbilityAsync_WaitGameplayTagRemoved.OuterSingleton, Z_Construct_UClass_UAbilityAsync_WaitGameplayTagRemoved_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAbilityAsync_WaitGameplayTagRemoved.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UClass* StaticClass<UAbilityAsync_WaitGameplayTagRemoved>()
{
	return UAbilityAsync_WaitGameplayTagRemoved::StaticClass();
}
UAbilityAsync_WaitGameplayTagRemoved::UAbilityAsync_WaitGameplayTagRemoved(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAbilityAsync_WaitGameplayTagRemoved);
UAbilityAsync_WaitGameplayTagRemoved::~UAbilityAsync_WaitGameplayTagRemoved() {}
// End Class UAbilityAsync_WaitGameplayTagRemoved

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitGameplayTag_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAbilityAsync_WaitGameplayTag, UAbilityAsync_WaitGameplayTag::StaticClass, TEXT("UAbilityAsync_WaitGameplayTag"), &Z_Registration_Info_UClass_UAbilityAsync_WaitGameplayTag, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAbilityAsync_WaitGameplayTag), 2295063078U) },
		{ Z_Construct_UClass_UAbilityAsync_WaitGameplayTagAdded, UAbilityAsync_WaitGameplayTagAdded::StaticClass, TEXT("UAbilityAsync_WaitGameplayTagAdded"), &Z_Registration_Info_UClass_UAbilityAsync_WaitGameplayTagAdded, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAbilityAsync_WaitGameplayTagAdded), 1753550181U) },
		{ Z_Construct_UClass_UAbilityAsync_WaitGameplayTagRemoved, UAbilityAsync_WaitGameplayTagRemoved::StaticClass, TEXT("UAbilityAsync_WaitGameplayTagRemoved"), &Z_Registration_Info_UClass_UAbilityAsync_WaitGameplayTagRemoved, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAbilityAsync_WaitGameplayTagRemoved), 2269041318U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitGameplayTag_h_1944739725(TEXT("/Script/GameplayAbilities"),
	Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitGameplayTag_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitGameplayTag_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
