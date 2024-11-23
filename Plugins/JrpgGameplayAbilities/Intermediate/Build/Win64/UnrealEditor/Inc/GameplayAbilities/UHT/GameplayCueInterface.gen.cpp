// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayAbilities/Public/GameplayCueInterface.h"
#include "GameplayAbilities/Public/GameplayEffectTypes.h"
#include "GameplayAbilities/Public/GameplayPrediction.h"
#include "Net/Serialization/FastArraySerializerImplementation.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayCueInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayCueInterface();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayCueInterface_NoRegister();
GAMEPLAYABILITIES_API UEnum* Z_Construct_UEnum_GameplayAbilities_EGameplayCueEvent();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FActiveGameplayCue();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FActiveGameplayCueContainer();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayCueParameters();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayCueTag();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FMinimalGameplayCueReplicationProxy();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FPredictionKey();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
NETCORE_API UScriptStruct* Z_Construct_UScriptStruct_FFastArraySerializer();
NETCORE_API UScriptStruct* Z_Construct_UScriptStruct_FFastArraySerializerItem();
UPackage* Z_Construct_UPackage__Script_GameplayAbilities();
// End Cross Module References

// Begin Interface UGameplayCueInterface Function BlueprintCustomHandler
struct GameplayCueInterface_eventBlueprintCustomHandler_Parms
{
	TEnumAsByte<EGameplayCueEvent::Type> EventType;
	FGameplayCueParameters Parameters;
};
void IGameplayCueInterface::BlueprintCustomHandler(EGameplayCueEvent::Type EventType, FGameplayCueParameters const& Parameters)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_BlueprintCustomHandler instead.");
}
static FName NAME_UGameplayCueInterface_BlueprintCustomHandler = FName(TEXT("BlueprintCustomHandler"));
void IGameplayCueInterface::Execute_BlueprintCustomHandler(UObject* O, EGameplayCueEvent::Type EventType, FGameplayCueParameters const& Parameters)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UGameplayCueInterface::StaticClass()));
	GameplayCueInterface_eventBlueprintCustomHandler_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UGameplayCueInterface_BlueprintCustomHandler);
	if (Func)
	{
		Parms.EventType=EventType;
		Parms.Parameters=Parameters;
		O->ProcessEvent(Func, &Parms);
	}
}
struct Z_Construct_UFunction_UGameplayCueInterface_BlueprintCustomHandler_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "GameplayCue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Internal function to map ufunctions directly to gameplaycue tags */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayCueInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Internal function to map ufunctions directly to gameplaycue tags" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Parameters_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_EventType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Parameters;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGameplayCueInterface_BlueprintCustomHandler_Statics::NewProp_EventType = { "EventType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayCueInterface_eventBlueprintCustomHandler_Parms, EventType), Z_Construct_UEnum_GameplayAbilities_EGameplayCueEvent, METADATA_PARAMS(0, nullptr) }; // 1404147860
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayCueInterface_BlueprintCustomHandler_Statics::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayCueInterface_eventBlueprintCustomHandler_Parms, Parameters), Z_Construct_UScriptStruct_FGameplayCueParameters, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Parameters_MetaData), NewProp_Parameters_MetaData) }; // 1032334605
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayCueInterface_BlueprintCustomHandler_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayCueInterface_BlueprintCustomHandler_Statics::NewProp_EventType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayCueInterface_BlueprintCustomHandler_Statics::NewProp_Parameters,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayCueInterface_BlueprintCustomHandler_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayCueInterface_BlueprintCustomHandler_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayCueInterface, nullptr, "BlueprintCustomHandler", nullptr, nullptr, Z_Construct_UFunction_UGameplayCueInterface_BlueprintCustomHandler_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayCueInterface_BlueprintCustomHandler_Statics::PropPointers), sizeof(GameplayCueInterface_eventBlueprintCustomHandler_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420808, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayCueInterface_BlueprintCustomHandler_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameplayCueInterface_BlueprintCustomHandler_Statics::Function_MetaDataParams) };
static_assert(sizeof(GameplayCueInterface_eventBlueprintCustomHandler_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGameplayCueInterface_BlueprintCustomHandler()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayCueInterface_BlueprintCustomHandler_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Interface UGameplayCueInterface Function BlueprintCustomHandler

// Begin Interface UGameplayCueInterface Function ForwardGameplayCueToParent
struct Z_Construct_UFunction_UGameplayCueInterface_ForwardGameplayCueToParent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ability|GameplayCue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Call from a Cue handler event to continue checking for additional, more generic handlers. Called from the ability system blueprint library */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayCueInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Call from a Cue handler event to continue checking for additional, more generic handlers. Called from the ability system blueprint library" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayCueInterface_ForwardGameplayCueToParent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayCueInterface, nullptr, "ForwardGameplayCueToParent", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020408, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayCueInterface_ForwardGameplayCueToParent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameplayCueInterface_ForwardGameplayCueToParent_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UGameplayCueInterface_ForwardGameplayCueToParent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayCueInterface_ForwardGameplayCueToParent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IGameplayCueInterface::execForwardGameplayCueToParent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ForwardGameplayCueToParent();
	P_NATIVE_END;
}
// End Interface UGameplayCueInterface Function ForwardGameplayCueToParent

// Begin Interface UGameplayCueInterface
void UGameplayCueInterface::StaticRegisterNativesUGameplayCueInterface()
{
	UClass* Class = UGameplayCueInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ForwardGameplayCueToParent", &IGameplayCueInterface::execForwardGameplayCueToParent },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameplayCueInterface);
UClass* Z_Construct_UClass_UGameplayCueInterface_NoRegister()
{
	return UGameplayCueInterface::StaticClass();
}
struct Z_Construct_UClass_UGameplayCueInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Public/GameplayCueInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGameplayCueInterface_BlueprintCustomHandler, "BlueprintCustomHandler" }, // 2583327307
		{ &Z_Construct_UFunction_UGameplayCueInterface_ForwardGameplayCueToParent, "ForwardGameplayCueToParent" }, // 3122787167
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IGameplayCueInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGameplayCueInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayCueInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameplayCueInterface_Statics::ClassParams = {
	&UGameplayCueInterface::StaticClass,
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
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayCueInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UGameplayCueInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGameplayCueInterface()
{
	if (!Z_Registration_Info_UClass_UGameplayCueInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameplayCueInterface.OuterSingleton, Z_Construct_UClass_UGameplayCueInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGameplayCueInterface.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UClass* StaticClass<UGameplayCueInterface>()
{
	return UGameplayCueInterface::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGameplayCueInterface);
UGameplayCueInterface::~UGameplayCueInterface() {}
// End Interface UGameplayCueInterface

// Begin ScriptStruct FActiveGameplayCue
static_assert(std::is_polymorphic<FActiveGameplayCue>() == std::is_polymorphic<FFastArraySerializerItem>(), "USTRUCT FActiveGameplayCue cannot be polymorphic unless super FFastArraySerializerItem is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ActiveGameplayCue;
class UScriptStruct* FActiveGameplayCue::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ActiveGameplayCue.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ActiveGameplayCue.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FActiveGameplayCue, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("ActiveGameplayCue"));
	}
	return Z_Registration_Info_UScriptStruct_ActiveGameplayCue.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FActiveGameplayCue>()
{
	return FActiveGameplayCue::StaticStruct();
}
struct Z_Construct_UScriptStruct_FActiveGameplayCue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameplayCueInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameplayCueTag_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayCueInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PredictionKey_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayCueInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Parameters_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayCueInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPredictivelyRemoved_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Has this been predictively removed on the client? */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayCueInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Has this been predictively removed on the client?" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayCueTag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PredictionKey;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Parameters;
	static void NewProp_bPredictivelyRemoved_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPredictivelyRemoved;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FActiveGameplayCue>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FActiveGameplayCue_Statics::NewProp_GameplayCueTag = { "GameplayCueTag", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FActiveGameplayCue, GameplayCueTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameplayCueTag_MetaData), NewProp_GameplayCueTag_MetaData) }; // 1298103297
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FActiveGameplayCue_Statics::NewProp_PredictionKey = { "PredictionKey", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FActiveGameplayCue, PredictionKey), Z_Construct_UScriptStruct_FPredictionKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PredictionKey_MetaData), NewProp_PredictionKey_MetaData) }; // 3974026274
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FActiveGameplayCue_Statics::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0010008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FActiveGameplayCue, Parameters), Z_Construct_UScriptStruct_FGameplayCueParameters, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Parameters_MetaData), NewProp_Parameters_MetaData) }; // 1032334605
void Z_Construct_UScriptStruct_FActiveGameplayCue_Statics::NewProp_bPredictivelyRemoved_SetBit(void* Obj)
{
	((FActiveGameplayCue*)Obj)->bPredictivelyRemoved = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FActiveGameplayCue_Statics::NewProp_bPredictivelyRemoved = { "bPredictivelyRemoved", nullptr, (EPropertyFlags)0x0010000080000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FActiveGameplayCue), &Z_Construct_UScriptStruct_FActiveGameplayCue_Statics::NewProp_bPredictivelyRemoved_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPredictivelyRemoved_MetaData), NewProp_bPredictivelyRemoved_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FActiveGameplayCue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActiveGameplayCue_Statics::NewProp_GameplayCueTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActiveGameplayCue_Statics::NewProp_PredictionKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActiveGameplayCue_Statics::NewProp_Parameters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActiveGameplayCue_Statics::NewProp_bPredictivelyRemoved,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActiveGameplayCue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FActiveGameplayCue_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
	Z_Construct_UScriptStruct_FFastArraySerializerItem,
	&NewStructOps,
	"ActiveGameplayCue",
	Z_Construct_UScriptStruct_FActiveGameplayCue_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActiveGameplayCue_Statics::PropPointers),
	sizeof(FActiveGameplayCue),
	alignof(FActiveGameplayCue),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActiveGameplayCue_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FActiveGameplayCue_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FActiveGameplayCue()
{
	if (!Z_Registration_Info_UScriptStruct_ActiveGameplayCue.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ActiveGameplayCue.InnerSingleton, Z_Construct_UScriptStruct_FActiveGameplayCue_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ActiveGameplayCue.InnerSingleton;
}
// End ScriptStruct FActiveGameplayCue

// Begin ScriptStruct FActiveGameplayCueContainer
static_assert(std::is_polymorphic<FActiveGameplayCueContainer>() == std::is_polymorphic<FFastArraySerializer>(), "USTRUCT FActiveGameplayCueContainer cannot be polymorphic unless super FFastArraySerializer is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ActiveGameplayCueContainer;
class UScriptStruct* FActiveGameplayCueContainer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ActiveGameplayCueContainer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ActiveGameplayCueContainer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FActiveGameplayCueContainer, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("ActiveGameplayCueContainer"));
	}
	return Z_Registration_Info_UScriptStruct_ActiveGameplayCueContainer.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FActiveGameplayCueContainer>()
{
	return FActiveGameplayCueContainer::StaticStruct();
}
#if defined(UE_NET_HAS_IRIS_FASTARRAY_BINDING) && UE_NET_HAS_IRIS_FASTARRAY_BINDING
UE_NET_IMPLEMENT_FASTARRAY(FActiveGameplayCueContainer);
#else
UE_NET_IMPLEMENT_FASTARRAY_STUB(FActiveGameplayCueContainer);
#endif
struct Z_Construct_UScriptStruct_FActiveGameplayCueContainer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameplayCueInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameplayCues_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayCueInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Owner_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GameplayCueInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayCues_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GameplayCues;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Owner;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FActiveGameplayCueContainer>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FActiveGameplayCueContainer_Statics::NewProp_GameplayCues_Inner = { "GameplayCues", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FActiveGameplayCue, METADATA_PARAMS(0, nullptr) }; // 4156172458
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FActiveGameplayCueContainer_Statics::NewProp_GameplayCues = { "GameplayCues", nullptr, (EPropertyFlags)0x0010008000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FActiveGameplayCueContainer, GameplayCues), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameplayCues_MetaData), NewProp_GameplayCues_MetaData) }; // 4156172458
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FActiveGameplayCueContainer_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0144000080080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FActiveGameplayCueContainer, Owner), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Owner_MetaData), NewProp_Owner_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FActiveGameplayCueContainer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActiveGameplayCueContainer_Statics::NewProp_GameplayCues_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActiveGameplayCueContainer_Statics::NewProp_GameplayCues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActiveGameplayCueContainer_Statics::NewProp_Owner,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActiveGameplayCueContainer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FActiveGameplayCueContainer_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
	Z_Construct_UScriptStruct_FFastArraySerializer,
	&NewStructOps,
	"ActiveGameplayCueContainer",
	Z_Construct_UScriptStruct_FActiveGameplayCueContainer_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActiveGameplayCueContainer_Statics::PropPointers),
	sizeof(FActiveGameplayCueContainer),
	alignof(FActiveGameplayCueContainer),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000205),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActiveGameplayCueContainer_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FActiveGameplayCueContainer_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FActiveGameplayCueContainer()
{
	if (!Z_Registration_Info_UScriptStruct_ActiveGameplayCueContainer.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ActiveGameplayCueContainer.InnerSingleton, Z_Construct_UScriptStruct_FActiveGameplayCueContainer_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ActiveGameplayCueContainer.InnerSingleton;
}
// End ScriptStruct FActiveGameplayCueContainer

// Begin ScriptStruct FGameplayCueTag
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayCueTag;
class UScriptStruct* FGameplayCueTag::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayCueTag.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayCueTag.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayCueTag, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("GameplayCueTag"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayCueTag.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FGameplayCueTag>()
{
	return FGameplayCueTag::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGameplayCueTag_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\x09Wrapper struct around a gameplaytag with the GameplayCue category. This also allows for a details customization\n */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayCueInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Wrapper struct around a gameplaytag with the GameplayCue category. This also allows for a details customization" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameplayCueTag_MetaData[] = {
		{ "Categories", "GameplayCue" },
		{ "Category", "GameplayCue" },
		{ "ModuleRelativePath", "Public/GameplayCueInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayCueTag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayCueTag>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayCueTag_Statics::NewProp_GameplayCueTag = { "GameplayCueTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayCueTag, GameplayCueTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameplayCueTag_MetaData), NewProp_GameplayCueTag_MetaData) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayCueTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueTag_Statics::NewProp_GameplayCueTag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCueTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayCueTag_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
	nullptr,
	&NewStructOps,
	"GameplayCueTag",
	Z_Construct_UScriptStruct_FGameplayCueTag_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCueTag_Statics::PropPointers),
	sizeof(FGameplayCueTag),
	alignof(FGameplayCueTag),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCueTag_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGameplayCueTag_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGameplayCueTag()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayCueTag.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayCueTag.InnerSingleton, Z_Construct_UScriptStruct_FGameplayCueTag_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GameplayCueTag.InnerSingleton;
}
// End ScriptStruct FGameplayCueTag

// Begin ScriptStruct FMinimalGameplayCueReplicationProxy
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MinimalGameplayCueReplicationProxy;
class UScriptStruct* FMinimalGameplayCueReplicationProxy::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MinimalGameplayCueReplicationProxy.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MinimalGameplayCueReplicationProxy.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMinimalGameplayCueReplicationProxy, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("MinimalGameplayCueReplicationProxy"));
	}
	return Z_Registration_Info_UScriptStruct_MinimalGameplayCueReplicationProxy.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FMinimalGameplayCueReplicationProxy>()
{
	return FMinimalGameplayCueReplicationProxy::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMinimalGameplayCueReplicationProxy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n *\x09""An alternative way to replicating gameplay cues. This does not use fast TArray serialization and does not serialize gameplaycue parameters. The parameters are created on the receiving side with default information.\n *\x09This will be more efficient with server cpu but will take more bandwidth when the array changes.\n *\x09\n *\x09To use, put this on your replication proxy actor (such a the pawn). Call SetOwner, PreReplication and RemoveallCues in the appropriate places.\n */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayCueInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "An alternative way to replicating gameplay cues. This does not use fast TArray serialization and does not serialize gameplaycue parameters. The parameters are created on the receiving side with default information.\nThis will be more efficient with server cpu but will take more bandwidth when the array changes.\n\nTo use, put this on your replication proxy actor (such a the pawn). Call SetOwner, PreReplication and RemoveallCues in the appropriate places." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Owner_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GameplayCueInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Owner;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMinimalGameplayCueReplicationProxy>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMinimalGameplayCueReplicationProxy_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMinimalGameplayCueReplicationProxy, Owner), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Owner_MetaData), NewProp_Owner_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMinimalGameplayCueReplicationProxy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMinimalGameplayCueReplicationProxy_Statics::NewProp_Owner,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMinimalGameplayCueReplicationProxy_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMinimalGameplayCueReplicationProxy_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
	nullptr,
	&NewStructOps,
	"MinimalGameplayCueReplicationProxy",
	Z_Construct_UScriptStruct_FMinimalGameplayCueReplicationProxy_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMinimalGameplayCueReplicationProxy_Statics::PropPointers),
	sizeof(FMinimalGameplayCueReplicationProxy),
	alignof(FMinimalGameplayCueReplicationProxy),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000205),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMinimalGameplayCueReplicationProxy_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMinimalGameplayCueReplicationProxy_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMinimalGameplayCueReplicationProxy()
{
	if (!Z_Registration_Info_UScriptStruct_MinimalGameplayCueReplicationProxy.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MinimalGameplayCueReplicationProxy.InnerSingleton, Z_Construct_UScriptStruct_FMinimalGameplayCueReplicationProxy_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MinimalGameplayCueReplicationProxy.InnerSingleton;
}
// End ScriptStruct FMinimalGameplayCueReplicationProxy

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayCueInterface_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FActiveGameplayCue::StaticStruct, Z_Construct_UScriptStruct_FActiveGameplayCue_Statics::NewStructOps, TEXT("ActiveGameplayCue"), &Z_Registration_Info_UScriptStruct_ActiveGameplayCue, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FActiveGameplayCue), 4156172458U) },
		{ FActiveGameplayCueContainer::StaticStruct, Z_Construct_UScriptStruct_FActiveGameplayCueContainer_Statics::NewStructOps, TEXT("ActiveGameplayCueContainer"), &Z_Registration_Info_UScriptStruct_ActiveGameplayCueContainer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FActiveGameplayCueContainer), 1687127610U) },
		{ FGameplayCueTag::StaticStruct, Z_Construct_UScriptStruct_FGameplayCueTag_Statics::NewStructOps, TEXT("GameplayCueTag"), &Z_Registration_Info_UScriptStruct_GameplayCueTag, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayCueTag), 4025337855U) },
		{ FMinimalGameplayCueReplicationProxy::StaticStruct, Z_Construct_UScriptStruct_FMinimalGameplayCueReplicationProxy_Statics::NewStructOps, TEXT("MinimalGameplayCueReplicationProxy"), &Z_Registration_Info_UScriptStruct_MinimalGameplayCueReplicationProxy, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMinimalGameplayCueReplicationProxy), 2908510004U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGameplayCueInterface, UGameplayCueInterface::StaticClass, TEXT("UGameplayCueInterface"), &Z_Registration_Info_UClass_UGameplayCueInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameplayCueInterface), 2745734257U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayCueInterface_h_2914566273(TEXT("/Script/GameplayAbilities"),
	Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayCueInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayCueInterface_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayCueInterface_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayCueInterface_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
