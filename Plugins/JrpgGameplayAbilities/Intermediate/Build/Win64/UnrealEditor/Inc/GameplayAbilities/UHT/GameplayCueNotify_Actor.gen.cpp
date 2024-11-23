// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayAbilities/Public/GameplayCueNotify_Actor.h"
#include "GameplayAbilities/Public/GameplayEffectTypes.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayCueNotify_Actor() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_AGameplayCueNotify_Actor();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_AGameplayCueNotify_Actor_NoRegister();
GAMEPLAYABILITIES_API UEnum* Z_Construct_UEnum_GameplayAbilities_EGameplayCueEvent();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayCueParameters();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
UPackage* Z_Construct_UPackage__Script_GameplayAbilities();
// End Cross Module References

// Begin Class AGameplayCueNotify_Actor Function K2_EndGameplayCue
struct Z_Construct_UFunction_AGameplayCueNotify_Actor_K2_EndGameplayCue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GameplayCueNotify" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Ends the gameplay cue: either destroying it or recycling it. You must call this manually only if you do not use bAutoDestroyOnRemove/AutoDestroyDelay  */" },
#endif
		{ "DisplayName", "End (Recycle) GameplayCue" },
		{ "ModuleRelativePath", "Public/GameplayCueNotify_Actor.h" },
		{ "ScriptName", "EndGameplayCue" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Ends the gameplay cue: either destroying it or recycling it. You must call this manually only if you do not use bAutoDestroyOnRemove/AutoDestroyDelay" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameplayCueNotify_Actor_K2_EndGameplayCue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameplayCueNotify_Actor, nullptr, "K2_EndGameplayCue", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameplayCueNotify_Actor_K2_EndGameplayCue_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGameplayCueNotify_Actor_K2_EndGameplayCue_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AGameplayCueNotify_Actor_K2_EndGameplayCue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameplayCueNotify_Actor_K2_EndGameplayCue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGameplayCueNotify_Actor::execK2_EndGameplayCue)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->K2_EndGameplayCue();
	P_NATIVE_END;
}
// End Class AGameplayCueNotify_Actor Function K2_EndGameplayCue

// Begin Class AGameplayCueNotify_Actor Function K2_HandleGameplayCue
struct GameplayCueNotify_Actor_eventK2_HandleGameplayCue_Parms
{
	AActor* MyTarget;
	TEnumAsByte<EGameplayCueEvent::Type> EventType;
	FGameplayCueParameters Parameters;
};
static FName NAME_AGameplayCueNotify_Actor_K2_HandleGameplayCue = FName(TEXT("K2_HandleGameplayCue"));
void AGameplayCueNotify_Actor::K2_HandleGameplayCue(AActor* MyTarget, EGameplayCueEvent::Type EventType, FGameplayCueParameters const& Parameters)
{
	GameplayCueNotify_Actor_eventK2_HandleGameplayCue_Parms Parms;
	Parms.MyTarget=MyTarget;
	Parms.EventType=EventType;
	Parms.Parameters=Parameters;
	ProcessEvent(FindFunctionChecked(NAME_AGameplayCueNotify_Actor_K2_HandleGameplayCue),&Parms);
}
struct Z_Construct_UFunction_AGameplayCueNotify_Actor_K2_HandleGameplayCue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GameplayCueNotify" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Generic Event Graph event that will get called for every event type */" },
#endif
		{ "DisplayName", "HandleGameplayCue" },
		{ "ModuleRelativePath", "Public/GameplayCueNotify_Actor.h" },
		{ "ScriptName", "HandleGameplayCue" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Generic Event Graph event that will get called for every event type" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Parameters_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MyTarget;
	static const UECodeGen_Private::FBytePropertyParams NewProp_EventType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Parameters;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGameplayCueNotify_Actor_K2_HandleGameplayCue_Statics::NewProp_MyTarget = { "MyTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayCueNotify_Actor_eventK2_HandleGameplayCue_Parms, MyTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AGameplayCueNotify_Actor_K2_HandleGameplayCue_Statics::NewProp_EventType = { "EventType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayCueNotify_Actor_eventK2_HandleGameplayCue_Parms, EventType), Z_Construct_UEnum_GameplayAbilities_EGameplayCueEvent, METADATA_PARAMS(0, nullptr) }; // 1404147860
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGameplayCueNotify_Actor_K2_HandleGameplayCue_Statics::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayCueNotify_Actor_eventK2_HandleGameplayCue_Parms, Parameters), Z_Construct_UScriptStruct_FGameplayCueParameters, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Parameters_MetaData), NewProp_Parameters_MetaData) }; // 1032334605
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameplayCueNotify_Actor_K2_HandleGameplayCue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameplayCueNotify_Actor_K2_HandleGameplayCue_Statics::NewProp_MyTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameplayCueNotify_Actor_K2_HandleGameplayCue_Statics::NewProp_EventType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameplayCueNotify_Actor_K2_HandleGameplayCue_Statics::NewProp_Parameters,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameplayCueNotify_Actor_K2_HandleGameplayCue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameplayCueNotify_Actor_K2_HandleGameplayCue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameplayCueNotify_Actor, nullptr, "K2_HandleGameplayCue", nullptr, nullptr, Z_Construct_UFunction_AGameplayCueNotify_Actor_K2_HandleGameplayCue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameplayCueNotify_Actor_K2_HandleGameplayCue_Statics::PropPointers), sizeof(GameplayCueNotify_Actor_eventK2_HandleGameplayCue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameplayCueNotify_Actor_K2_HandleGameplayCue_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGameplayCueNotify_Actor_K2_HandleGameplayCue_Statics::Function_MetaDataParams) };
static_assert(sizeof(GameplayCueNotify_Actor_eventK2_HandleGameplayCue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGameplayCueNotify_Actor_K2_HandleGameplayCue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameplayCueNotify_Actor_K2_HandleGameplayCue_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AGameplayCueNotify_Actor Function K2_HandleGameplayCue

// Begin Class AGameplayCueNotify_Actor Function OnActive
struct GameplayCueNotify_Actor_eventOnActive_Parms
{
	AActor* MyTarget;
	FGameplayCueParameters Parameters;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	GameplayCueNotify_Actor_eventOnActive_Parms()
		: ReturnValue(false)
	{
	}
};
static FName NAME_AGameplayCueNotify_Actor_OnActive = FName(TEXT("OnActive"));
bool AGameplayCueNotify_Actor::OnActive(AActor* MyTarget, FGameplayCueParameters const& Parameters)
{
	GameplayCueNotify_Actor_eventOnActive_Parms Parms;
	Parms.MyTarget=MyTarget;
	Parms.Parameters=Parameters;
	ProcessEvent(FindFunctionChecked(NAME_AGameplayCueNotify_Actor_OnActive),&Parms);
	return !!Parms.ReturnValue;
}
struct Z_Construct_UFunction_AGameplayCueNotify_Actor_OnActive_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GameplayCueNotify" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Called when a GameplayCue with duration is first activated, this will only be called if the client witnessed the activation */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayCueNotify_Actor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when a GameplayCue with duration is first activated, this will only be called if the client witnessed the activation" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Parameters_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MyTarget;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Parameters;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGameplayCueNotify_Actor_OnActive_Statics::NewProp_MyTarget = { "MyTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayCueNotify_Actor_eventOnActive_Parms, MyTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGameplayCueNotify_Actor_OnActive_Statics::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayCueNotify_Actor_eventOnActive_Parms, Parameters), Z_Construct_UScriptStruct_FGameplayCueParameters, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Parameters_MetaData), NewProp_Parameters_MetaData) }; // 1032334605
void Z_Construct_UFunction_AGameplayCueNotify_Actor_OnActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GameplayCueNotify_Actor_eventOnActive_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGameplayCueNotify_Actor_OnActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GameplayCueNotify_Actor_eventOnActive_Parms), &Z_Construct_UFunction_AGameplayCueNotify_Actor_OnActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameplayCueNotify_Actor_OnActive_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameplayCueNotify_Actor_OnActive_Statics::NewProp_MyTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameplayCueNotify_Actor_OnActive_Statics::NewProp_Parameters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameplayCueNotify_Actor_OnActive_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameplayCueNotify_Actor_OnActive_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameplayCueNotify_Actor_OnActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameplayCueNotify_Actor, nullptr, "OnActive", nullptr, nullptr, Z_Construct_UFunction_AGameplayCueNotify_Actor_OnActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameplayCueNotify_Actor_OnActive_Statics::PropPointers), sizeof(GameplayCueNotify_Actor_eventOnActive_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameplayCueNotify_Actor_OnActive_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGameplayCueNotify_Actor_OnActive_Statics::Function_MetaDataParams) };
static_assert(sizeof(GameplayCueNotify_Actor_eventOnActive_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGameplayCueNotify_Actor_OnActive()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameplayCueNotify_Actor_OnActive_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGameplayCueNotify_Actor::execOnActive)
{
	P_GET_OBJECT(AActor,Z_Param_MyTarget);
	P_GET_STRUCT_REF(FGameplayCueParameters,Z_Param_Out_Parameters);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->OnActive_Implementation(Z_Param_MyTarget,Z_Param_Out_Parameters);
	P_NATIVE_END;
}
// End Class AGameplayCueNotify_Actor Function OnActive

// Begin Class AGameplayCueNotify_Actor Function OnExecute
struct GameplayCueNotify_Actor_eventOnExecute_Parms
{
	AActor* MyTarget;
	FGameplayCueParameters Parameters;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	GameplayCueNotify_Actor_eventOnExecute_Parms()
		: ReturnValue(false)
	{
	}
};
static FName NAME_AGameplayCueNotify_Actor_OnExecute = FName(TEXT("OnExecute"));
bool AGameplayCueNotify_Actor::OnExecute(AActor* MyTarget, FGameplayCueParameters const& Parameters)
{
	GameplayCueNotify_Actor_eventOnExecute_Parms Parms;
	Parms.MyTarget=MyTarget;
	Parms.Parameters=Parameters;
	ProcessEvent(FindFunctionChecked(NAME_AGameplayCueNotify_Actor_OnExecute),&Parms);
	return !!Parms.ReturnValue;
}
struct Z_Construct_UFunction_AGameplayCueNotify_Actor_OnExecute_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GameplayCueNotify" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Called when a GameplayCue is executed, this is used for instant effects or periodic ticks */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayCueNotify_Actor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when a GameplayCue is executed, this is used for instant effects or periodic ticks" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Parameters_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MyTarget;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Parameters;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGameplayCueNotify_Actor_OnExecute_Statics::NewProp_MyTarget = { "MyTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayCueNotify_Actor_eventOnExecute_Parms, MyTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGameplayCueNotify_Actor_OnExecute_Statics::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayCueNotify_Actor_eventOnExecute_Parms, Parameters), Z_Construct_UScriptStruct_FGameplayCueParameters, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Parameters_MetaData), NewProp_Parameters_MetaData) }; // 1032334605
void Z_Construct_UFunction_AGameplayCueNotify_Actor_OnExecute_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GameplayCueNotify_Actor_eventOnExecute_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGameplayCueNotify_Actor_OnExecute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GameplayCueNotify_Actor_eventOnExecute_Parms), &Z_Construct_UFunction_AGameplayCueNotify_Actor_OnExecute_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameplayCueNotify_Actor_OnExecute_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameplayCueNotify_Actor_OnExecute_Statics::NewProp_MyTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameplayCueNotify_Actor_OnExecute_Statics::NewProp_Parameters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameplayCueNotify_Actor_OnExecute_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameplayCueNotify_Actor_OnExecute_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameplayCueNotify_Actor_OnExecute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameplayCueNotify_Actor, nullptr, "OnExecute", nullptr, nullptr, Z_Construct_UFunction_AGameplayCueNotify_Actor_OnExecute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameplayCueNotify_Actor_OnExecute_Statics::PropPointers), sizeof(GameplayCueNotify_Actor_eventOnExecute_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameplayCueNotify_Actor_OnExecute_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGameplayCueNotify_Actor_OnExecute_Statics::Function_MetaDataParams) };
static_assert(sizeof(GameplayCueNotify_Actor_eventOnExecute_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGameplayCueNotify_Actor_OnExecute()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameplayCueNotify_Actor_OnExecute_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGameplayCueNotify_Actor::execOnExecute)
{
	P_GET_OBJECT(AActor,Z_Param_MyTarget);
	P_GET_STRUCT_REF(FGameplayCueParameters,Z_Param_Out_Parameters);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->OnExecute_Implementation(Z_Param_MyTarget,Z_Param_Out_Parameters);
	P_NATIVE_END;
}
// End Class AGameplayCueNotify_Actor Function OnExecute

// Begin Class AGameplayCueNotify_Actor Function OnOwnerDestroyed
struct Z_Construct_UFunction_AGameplayCueNotify_Actor_OnOwnerDestroyed_Statics
{
	struct GameplayCueNotify_Actor_eventOnOwnerDestroyed_Parms
	{
		AActor* DestroyedActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameplayCueNotify_Actor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DestroyedActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGameplayCueNotify_Actor_OnOwnerDestroyed_Statics::NewProp_DestroyedActor = { "DestroyedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayCueNotify_Actor_eventOnOwnerDestroyed_Parms, DestroyedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameplayCueNotify_Actor_OnOwnerDestroyed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameplayCueNotify_Actor_OnOwnerDestroyed_Statics::NewProp_DestroyedActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameplayCueNotify_Actor_OnOwnerDestroyed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameplayCueNotify_Actor_OnOwnerDestroyed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameplayCueNotify_Actor, nullptr, "OnOwnerDestroyed", nullptr, nullptr, Z_Construct_UFunction_AGameplayCueNotify_Actor_OnOwnerDestroyed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameplayCueNotify_Actor_OnOwnerDestroyed_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGameplayCueNotify_Actor_OnOwnerDestroyed_Statics::GameplayCueNotify_Actor_eventOnOwnerDestroyed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameplayCueNotify_Actor_OnOwnerDestroyed_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGameplayCueNotify_Actor_OnOwnerDestroyed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGameplayCueNotify_Actor_OnOwnerDestroyed_Statics::GameplayCueNotify_Actor_eventOnOwnerDestroyed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGameplayCueNotify_Actor_OnOwnerDestroyed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameplayCueNotify_Actor_OnOwnerDestroyed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGameplayCueNotify_Actor::execOnOwnerDestroyed)
{
	P_GET_OBJECT(AActor,Z_Param_DestroyedActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnOwnerDestroyed(Z_Param_DestroyedActor);
	P_NATIVE_END;
}
// End Class AGameplayCueNotify_Actor Function OnOwnerDestroyed

// Begin Class AGameplayCueNotify_Actor Function OnRemove
struct GameplayCueNotify_Actor_eventOnRemove_Parms
{
	AActor* MyTarget;
	FGameplayCueParameters Parameters;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	GameplayCueNotify_Actor_eventOnRemove_Parms()
		: ReturnValue(false)
	{
	}
};
static FName NAME_AGameplayCueNotify_Actor_OnRemove = FName(TEXT("OnRemove"));
bool AGameplayCueNotify_Actor::OnRemove(AActor* MyTarget, FGameplayCueParameters const& Parameters)
{
	GameplayCueNotify_Actor_eventOnRemove_Parms Parms;
	Parms.MyTarget=MyTarget;
	Parms.Parameters=Parameters;
	ProcessEvent(FindFunctionChecked(NAME_AGameplayCueNotify_Actor_OnRemove),&Parms);
	return !!Parms.ReturnValue;
}
struct Z_Construct_UFunction_AGameplayCueNotify_Actor_OnRemove_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GameplayCueNotify" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Called when a GameplayCue with duration is removed */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayCueNotify_Actor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when a GameplayCue with duration is removed" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Parameters_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MyTarget;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Parameters;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGameplayCueNotify_Actor_OnRemove_Statics::NewProp_MyTarget = { "MyTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayCueNotify_Actor_eventOnRemove_Parms, MyTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGameplayCueNotify_Actor_OnRemove_Statics::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayCueNotify_Actor_eventOnRemove_Parms, Parameters), Z_Construct_UScriptStruct_FGameplayCueParameters, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Parameters_MetaData), NewProp_Parameters_MetaData) }; // 1032334605
void Z_Construct_UFunction_AGameplayCueNotify_Actor_OnRemove_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GameplayCueNotify_Actor_eventOnRemove_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGameplayCueNotify_Actor_OnRemove_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GameplayCueNotify_Actor_eventOnRemove_Parms), &Z_Construct_UFunction_AGameplayCueNotify_Actor_OnRemove_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameplayCueNotify_Actor_OnRemove_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameplayCueNotify_Actor_OnRemove_Statics::NewProp_MyTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameplayCueNotify_Actor_OnRemove_Statics::NewProp_Parameters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameplayCueNotify_Actor_OnRemove_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameplayCueNotify_Actor_OnRemove_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameplayCueNotify_Actor_OnRemove_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameplayCueNotify_Actor, nullptr, "OnRemove", nullptr, nullptr, Z_Construct_UFunction_AGameplayCueNotify_Actor_OnRemove_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameplayCueNotify_Actor_OnRemove_Statics::PropPointers), sizeof(GameplayCueNotify_Actor_eventOnRemove_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameplayCueNotify_Actor_OnRemove_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGameplayCueNotify_Actor_OnRemove_Statics::Function_MetaDataParams) };
static_assert(sizeof(GameplayCueNotify_Actor_eventOnRemove_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGameplayCueNotify_Actor_OnRemove()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameplayCueNotify_Actor_OnRemove_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGameplayCueNotify_Actor::execOnRemove)
{
	P_GET_OBJECT(AActor,Z_Param_MyTarget);
	P_GET_STRUCT_REF(FGameplayCueParameters,Z_Param_Out_Parameters);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->OnRemove_Implementation(Z_Param_MyTarget,Z_Param_Out_Parameters);
	P_NATIVE_END;
}
// End Class AGameplayCueNotify_Actor Function OnRemove

// Begin Class AGameplayCueNotify_Actor Function WhileActive
struct GameplayCueNotify_Actor_eventWhileActive_Parms
{
	AActor* MyTarget;
	FGameplayCueParameters Parameters;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	GameplayCueNotify_Actor_eventWhileActive_Parms()
		: ReturnValue(false)
	{
	}
};
static FName NAME_AGameplayCueNotify_Actor_WhileActive = FName(TEXT("WhileActive"));
bool AGameplayCueNotify_Actor::WhileActive(AActor* MyTarget, FGameplayCueParameters const& Parameters)
{
	GameplayCueNotify_Actor_eventWhileActive_Parms Parms;
	Parms.MyTarget=MyTarget;
	Parms.Parameters=Parameters;
	ProcessEvent(FindFunctionChecked(NAME_AGameplayCueNotify_Actor_WhileActive),&Parms);
	return !!Parms.ReturnValue;
}
struct Z_Construct_UFunction_AGameplayCueNotify_Actor_WhileActive_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GameplayCueNotify" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Called when a GameplayCue with duration is first seen as active, even if it wasn't actually just applied (Join in progress, etc) */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayCueNotify_Actor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when a GameplayCue with duration is first seen as active, even if it wasn't actually just applied (Join in progress, etc)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Parameters_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MyTarget;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Parameters;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGameplayCueNotify_Actor_WhileActive_Statics::NewProp_MyTarget = { "MyTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayCueNotify_Actor_eventWhileActive_Parms, MyTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGameplayCueNotify_Actor_WhileActive_Statics::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayCueNotify_Actor_eventWhileActive_Parms, Parameters), Z_Construct_UScriptStruct_FGameplayCueParameters, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Parameters_MetaData), NewProp_Parameters_MetaData) }; // 1032334605
void Z_Construct_UFunction_AGameplayCueNotify_Actor_WhileActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GameplayCueNotify_Actor_eventWhileActive_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGameplayCueNotify_Actor_WhileActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GameplayCueNotify_Actor_eventWhileActive_Parms), &Z_Construct_UFunction_AGameplayCueNotify_Actor_WhileActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameplayCueNotify_Actor_WhileActive_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameplayCueNotify_Actor_WhileActive_Statics::NewProp_MyTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameplayCueNotify_Actor_WhileActive_Statics::NewProp_Parameters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameplayCueNotify_Actor_WhileActive_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameplayCueNotify_Actor_WhileActive_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameplayCueNotify_Actor_WhileActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameplayCueNotify_Actor, nullptr, "WhileActive", nullptr, nullptr, Z_Construct_UFunction_AGameplayCueNotify_Actor_WhileActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameplayCueNotify_Actor_WhileActive_Statics::PropPointers), sizeof(GameplayCueNotify_Actor_eventWhileActive_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameplayCueNotify_Actor_WhileActive_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGameplayCueNotify_Actor_WhileActive_Statics::Function_MetaDataParams) };
static_assert(sizeof(GameplayCueNotify_Actor_eventWhileActive_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGameplayCueNotify_Actor_WhileActive()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameplayCueNotify_Actor_WhileActive_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGameplayCueNotify_Actor::execWhileActive)
{
	P_GET_OBJECT(AActor,Z_Param_MyTarget);
	P_GET_STRUCT_REF(FGameplayCueParameters,Z_Param_Out_Parameters);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->WhileActive_Implementation(Z_Param_MyTarget,Z_Param_Out_Parameters);
	P_NATIVE_END;
}
// End Class AGameplayCueNotify_Actor Function WhileActive

// Begin Class AGameplayCueNotify_Actor
void AGameplayCueNotify_Actor::StaticRegisterNativesAGameplayCueNotify_Actor()
{
	UClass* Class = AGameplayCueNotify_Actor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "K2_EndGameplayCue", &AGameplayCueNotify_Actor::execK2_EndGameplayCue },
		{ "OnActive", &AGameplayCueNotify_Actor::execOnActive },
		{ "OnExecute", &AGameplayCueNotify_Actor::execOnExecute },
		{ "OnOwnerDestroyed", &AGameplayCueNotify_Actor::execOnOwnerDestroyed },
		{ "OnRemove", &AGameplayCueNotify_Actor::execOnRemove },
		{ "WhileActive", &AGameplayCueNotify_Actor::execWhileActive },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGameplayCueNotify_Actor);
UClass* Z_Construct_UClass_AGameplayCueNotify_Actor_NoRegister()
{
	return AGameplayCueNotify_Actor::StaticClass();
}
struct Z_Construct_UClass_AGameplayCueNotify_Actor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\x09""An instantiated Actor that acts as a handler of a GameplayCue. Since they are instantiated, they can maintain state and tick/update every frame if necessary. \n */" },
#endif
		{ "HideCategories", "Replication" },
		{ "IncludePath", "GameplayCueNotify_Actor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/GameplayCueNotify_Actor.h" },
		{ "ShowWorldContextPin", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "An instantiated Actor that acts as a handler of a GameplayCue. Since they are instantiated, they can maintain state and tick/update every frame if necessary." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoDestroyOnRemove_MetaData[] = {
		{ "Category", "Cleanup" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** We will auto destroy (recycle) this GameplayCueActor when the OnRemove event fires (after OnRemove is called). */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayCueNotify_Actor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "We will auto destroy (recycle) this GameplayCueActor when the OnRemove event fires (after OnRemove is called)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AutoDestroyDelay_MetaData[] = {
		{ "Category", "Cleanup" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If bAutoDestroyOnRemove is true, the actor will stay alive for this many seconds before being auto destroyed. */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayCueNotify_Actor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If bAutoDestroyOnRemove is true, the actor will stay alive for this many seconds before being auto destroyed." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WarnIfTimelineIsStillRunning_MetaData[] = {
		{ "Category", "Cleanup" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Warn if we have a timeline running when we cleanup this gameplay cue (we will kill the timeline either way)  */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayCueNotify_Actor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Warn if we have a timeline running when we cleanup this gameplay cue (we will kill the timeline either way)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WarnIfLatentActionIsStillRunning_MetaData[] = {
		{ "Category", "Cleanup" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Warn if we have a latent action (delay, etc) running when we cleanup this gameplay cue (we will kill the latent action either way)  */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayCueNotify_Actor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Warn if we have a latent action (delay, etc) running when we cleanup this gameplay cue (we will kill the latent action either way)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameplayCueTag_MetaData[] = {
		{ "Categories", "GameplayCue" },
		{ "Category", "GameplayCue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Tag this notify is activated by */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayCueNotify_Actor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tag this notify is activated by" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameplayCueName_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Mirrors GameplayCueTag in order to be asset registry searchable */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayCueNotify_Actor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mirrors GameplayCueTag in order to be asset registry searchable" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoAttachToOwner_MetaData[] = {
		{ "Category", "GameplayCue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If true, attach this GameplayCue Actor to the target actor while it is active. Attaching is slightly more expensive than not attaching, so only enable when you need to. */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayCueNotify_Actor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, attach this GameplayCue Actor to the target actor while it is active. Attaching is slightly more expensive than not attaching, so only enable when you need to." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsOverride_MetaData[] = {
		{ "Category", "GameplayCue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Does this Cue override other cues, or is it called in addition to them? E.g., If this is Damage.Physical.Slash, we wont call Damage.Physical afer we run this cue. */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayCueNotify_Actor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Does this Cue override other cues, or is it called in addition to them? E.g., If this is Damage.Physical.Slash, we wont call Damage.Physical afer we run this cue." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUniqueInstancePerInstigator_MetaData[] = {
		{ "Category", "GameplayCue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 *\x09""Does this cue get a new instance for each instigator? For example if two instigators apply a GC to the same source, do we create two of these GameplayCue Notify actors or just one?\n\x09 *\x09If the notify is simply playing FX or sounds on the source, it should not need unique instances. If this Notify is attaching a beam from the instigator to the target, it does need a unique instance per instigator.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayCueNotify_Actor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Does this cue get a new instance for each instigator? For example if two instigators apply a GC to the same source, do we create two of these GameplayCue Notify actors or just one?\nIf the notify is simply playing FX or sounds on the source, it should not need unique instances. If this Notify is attaching a beam from the instigator to the target, it does need a unique instance per instigator." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUniqueInstancePerSourceObject_MetaData[] = {
		{ "Category", "GameplayCue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 *\x09""Does this cue get a new instance for each source object? For example if two source objects apply a GC to the same source, do we create two of these GameplayCue Notify actors or just one?\n\x09 *\x09If the notify is simply playing FX or sounds on the source, it should not need unique instances. If this Notify is attaching a beam from the source object to the target, it does need a unique instance per instigator.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayCueNotify_Actor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Does this cue get a new instance for each source object? For example if two source objects apply a GC to the same source, do we create two of these GameplayCue Notify actors or just one?\nIf the notify is simply playing FX or sounds on the source, it should not need unique instances. If this Notify is attaching a beam from the source object to the target, it does need a unique instance per instigator." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowMultipleOnActiveEvents_MetaData[] = {
		{ "Category", "GameplayCue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 *\x09""Does this cue trigger its OnActive event if it's already been triggered?\n\x09 *  This can occur when the associated tag is triggered by multiple sources and there is no unique instancing.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayCueNotify_Actor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Does this cue trigger its OnActive event if it's already been triggered?\nThis can occur when the associated tag is triggered by multiple sources and there is no unique instancing." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowMultipleWhileActiveEvents_MetaData[] = {
		{ "Category", "GameplayCue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 *\x09""Does this cue trigger its WhileActive event if it's already been triggered?\n\x09 *  This can occur when the associated tag is triggered by multiple sources and there is no unique instancing.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayCueNotify_Actor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Does this cue trigger its WhileActive event if it's already been triggered?\nThis can occur when the associated tag is triggered by multiple sources and there is no unique instancing." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumPreallocatedInstances_MetaData[] = {
		{ "Category", "GameplayCue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** How many instances of the gameplay cue to preallocate */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayCueNotify_Actor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How many instances of the gameplay cue to preallocate" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bAutoDestroyOnRemove_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoDestroyOnRemove;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AutoDestroyDelay;
	static void NewProp_WarnIfTimelineIsStillRunning_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_WarnIfTimelineIsStillRunning;
	static void NewProp_WarnIfLatentActionIsStillRunning_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_WarnIfLatentActionIsStillRunning;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayCueTag;
	static const UECodeGen_Private::FNamePropertyParams NewProp_GameplayCueName;
	static void NewProp_bAutoAttachToOwner_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoAttachToOwner;
	static void NewProp_IsOverride_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsOverride;
	static void NewProp_bUniqueInstancePerInstigator_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUniqueInstancePerInstigator;
	static void NewProp_bUniqueInstancePerSourceObject_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUniqueInstancePerSourceObject;
	static void NewProp_bAllowMultipleOnActiveEvents_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowMultipleOnActiveEvents;
	static void NewProp_bAllowMultipleWhileActiveEvents_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowMultipleWhileActiveEvents;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumPreallocatedInstances;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AGameplayCueNotify_Actor_K2_EndGameplayCue, "K2_EndGameplayCue" }, // 1054362090
		{ &Z_Construct_UFunction_AGameplayCueNotify_Actor_K2_HandleGameplayCue, "K2_HandleGameplayCue" }, // 4105680620
		{ &Z_Construct_UFunction_AGameplayCueNotify_Actor_OnActive, "OnActive" }, // 1282266690
		{ &Z_Construct_UFunction_AGameplayCueNotify_Actor_OnExecute, "OnExecute" }, // 2916048725
		{ &Z_Construct_UFunction_AGameplayCueNotify_Actor_OnOwnerDestroyed, "OnOwnerDestroyed" }, // 319434431
		{ &Z_Construct_UFunction_AGameplayCueNotify_Actor_OnRemove, "OnRemove" }, // 3115544135
		{ &Z_Construct_UFunction_AGameplayCueNotify_Actor_WhileActive, "WhileActive" }, // 2456347055
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGameplayCueNotify_Actor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_AGameplayCueNotify_Actor_Statics::NewProp_bAutoDestroyOnRemove_SetBit(void* Obj)
{
	((AGameplayCueNotify_Actor*)Obj)->bAutoDestroyOnRemove = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGameplayCueNotify_Actor_Statics::NewProp_bAutoDestroyOnRemove = { "bAutoDestroyOnRemove", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGameplayCueNotify_Actor), &Z_Construct_UClass_AGameplayCueNotify_Actor_Statics::NewProp_bAutoDestroyOnRemove_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoDestroyOnRemove_MetaData), NewProp_bAutoDestroyOnRemove_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGameplayCueNotify_Actor_Statics::NewProp_AutoDestroyDelay = { "AutoDestroyDelay", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameplayCueNotify_Actor, AutoDestroyDelay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AutoDestroyDelay_MetaData), NewProp_AutoDestroyDelay_MetaData) };
void Z_Construct_UClass_AGameplayCueNotify_Actor_Statics::NewProp_WarnIfTimelineIsStillRunning_SetBit(void* Obj)
{
	((AGameplayCueNotify_Actor*)Obj)->WarnIfTimelineIsStillRunning = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGameplayCueNotify_Actor_Statics::NewProp_WarnIfTimelineIsStillRunning = { "WarnIfTimelineIsStillRunning", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGameplayCueNotify_Actor), &Z_Construct_UClass_AGameplayCueNotify_Actor_Statics::NewProp_WarnIfTimelineIsStillRunning_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WarnIfTimelineIsStillRunning_MetaData), NewProp_WarnIfTimelineIsStillRunning_MetaData) };
void Z_Construct_UClass_AGameplayCueNotify_Actor_Statics::NewProp_WarnIfLatentActionIsStillRunning_SetBit(void* Obj)
{
	((AGameplayCueNotify_Actor*)Obj)->WarnIfLatentActionIsStillRunning = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGameplayCueNotify_Actor_Statics::NewProp_WarnIfLatentActionIsStillRunning = { "WarnIfLatentActionIsStillRunning", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGameplayCueNotify_Actor), &Z_Construct_UClass_AGameplayCueNotify_Actor_Statics::NewProp_WarnIfLatentActionIsStillRunning_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WarnIfLatentActionIsStillRunning_MetaData), NewProp_WarnIfLatentActionIsStillRunning_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGameplayCueNotify_Actor_Statics::NewProp_GameplayCueTag = { "GameplayCueTag", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameplayCueNotify_Actor, GameplayCueTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameplayCueTag_MetaData), NewProp_GameplayCueTag_MetaData) }; // 1298103297
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AGameplayCueNotify_Actor_Statics::NewProp_GameplayCueName = { "GameplayCueName", nullptr, (EPropertyFlags)0x0010010000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameplayCueNotify_Actor, GameplayCueName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameplayCueName_MetaData), NewProp_GameplayCueName_MetaData) };
void Z_Construct_UClass_AGameplayCueNotify_Actor_Statics::NewProp_bAutoAttachToOwner_SetBit(void* Obj)
{
	((AGameplayCueNotify_Actor*)Obj)->bAutoAttachToOwner = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGameplayCueNotify_Actor_Statics::NewProp_bAutoAttachToOwner = { "bAutoAttachToOwner", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGameplayCueNotify_Actor), &Z_Construct_UClass_AGameplayCueNotify_Actor_Statics::NewProp_bAutoAttachToOwner_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoAttachToOwner_MetaData), NewProp_bAutoAttachToOwner_MetaData) };
void Z_Construct_UClass_AGameplayCueNotify_Actor_Statics::NewProp_IsOverride_SetBit(void* Obj)
{
	((AGameplayCueNotify_Actor*)Obj)->IsOverride = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGameplayCueNotify_Actor_Statics::NewProp_IsOverride = { "IsOverride", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGameplayCueNotify_Actor), &Z_Construct_UClass_AGameplayCueNotify_Actor_Statics::NewProp_IsOverride_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsOverride_MetaData), NewProp_IsOverride_MetaData) };
void Z_Construct_UClass_AGameplayCueNotify_Actor_Statics::NewProp_bUniqueInstancePerInstigator_SetBit(void* Obj)
{
	((AGameplayCueNotify_Actor*)Obj)->bUniqueInstancePerInstigator = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGameplayCueNotify_Actor_Statics::NewProp_bUniqueInstancePerInstigator = { "bUniqueInstancePerInstigator", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGameplayCueNotify_Actor), &Z_Construct_UClass_AGameplayCueNotify_Actor_Statics::NewProp_bUniqueInstancePerInstigator_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUniqueInstancePerInstigator_MetaData), NewProp_bUniqueInstancePerInstigator_MetaData) };
void Z_Construct_UClass_AGameplayCueNotify_Actor_Statics::NewProp_bUniqueInstancePerSourceObject_SetBit(void* Obj)
{
	((AGameplayCueNotify_Actor*)Obj)->bUniqueInstancePerSourceObject = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGameplayCueNotify_Actor_Statics::NewProp_bUniqueInstancePerSourceObject = { "bUniqueInstancePerSourceObject", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGameplayCueNotify_Actor), &Z_Construct_UClass_AGameplayCueNotify_Actor_Statics::NewProp_bUniqueInstancePerSourceObject_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUniqueInstancePerSourceObject_MetaData), NewProp_bUniqueInstancePerSourceObject_MetaData) };
void Z_Construct_UClass_AGameplayCueNotify_Actor_Statics::NewProp_bAllowMultipleOnActiveEvents_SetBit(void* Obj)
{
	((AGameplayCueNotify_Actor*)Obj)->bAllowMultipleOnActiveEvents = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGameplayCueNotify_Actor_Statics::NewProp_bAllowMultipleOnActiveEvents = { "bAllowMultipleOnActiveEvents", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGameplayCueNotify_Actor), &Z_Construct_UClass_AGameplayCueNotify_Actor_Statics::NewProp_bAllowMultipleOnActiveEvents_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowMultipleOnActiveEvents_MetaData), NewProp_bAllowMultipleOnActiveEvents_MetaData) };
void Z_Construct_UClass_AGameplayCueNotify_Actor_Statics::NewProp_bAllowMultipleWhileActiveEvents_SetBit(void* Obj)
{
	((AGameplayCueNotify_Actor*)Obj)->bAllowMultipleWhileActiveEvents = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGameplayCueNotify_Actor_Statics::NewProp_bAllowMultipleWhileActiveEvents = { "bAllowMultipleWhileActiveEvents", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGameplayCueNotify_Actor), &Z_Construct_UClass_AGameplayCueNotify_Actor_Statics::NewProp_bAllowMultipleWhileActiveEvents_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowMultipleWhileActiveEvents_MetaData), NewProp_bAllowMultipleWhileActiveEvents_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AGameplayCueNotify_Actor_Statics::NewProp_NumPreallocatedInstances = { "NumPreallocatedInstances", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameplayCueNotify_Actor, NumPreallocatedInstances), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumPreallocatedInstances_MetaData), NewProp_NumPreallocatedInstances_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGameplayCueNotify_Actor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameplayCueNotify_Actor_Statics::NewProp_bAutoDestroyOnRemove,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameplayCueNotify_Actor_Statics::NewProp_AutoDestroyDelay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameplayCueNotify_Actor_Statics::NewProp_WarnIfTimelineIsStillRunning,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameplayCueNotify_Actor_Statics::NewProp_WarnIfLatentActionIsStillRunning,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameplayCueNotify_Actor_Statics::NewProp_GameplayCueTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameplayCueNotify_Actor_Statics::NewProp_GameplayCueName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameplayCueNotify_Actor_Statics::NewProp_bAutoAttachToOwner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameplayCueNotify_Actor_Statics::NewProp_IsOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameplayCueNotify_Actor_Statics::NewProp_bUniqueInstancePerInstigator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameplayCueNotify_Actor_Statics::NewProp_bUniqueInstancePerSourceObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameplayCueNotify_Actor_Statics::NewProp_bAllowMultipleOnActiveEvents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameplayCueNotify_Actor_Statics::NewProp_bAllowMultipleWhileActiveEvents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameplayCueNotify_Actor_Statics::NewProp_NumPreallocatedInstances,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGameplayCueNotify_Actor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AGameplayCueNotify_Actor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGameplayCueNotify_Actor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGameplayCueNotify_Actor_Statics::ClassParams = {
	&AGameplayCueNotify_Actor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AGameplayCueNotify_Actor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AGameplayCueNotify_Actor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGameplayCueNotify_Actor_Statics::Class_MetaDataParams), Z_Construct_UClass_AGameplayCueNotify_Actor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGameplayCueNotify_Actor()
{
	if (!Z_Registration_Info_UClass_AGameplayCueNotify_Actor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGameplayCueNotify_Actor.OuterSingleton, Z_Construct_UClass_AGameplayCueNotify_Actor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGameplayCueNotify_Actor.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UClass* StaticClass<AGameplayCueNotify_Actor>()
{
	return AGameplayCueNotify_Actor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGameplayCueNotify_Actor);
AGameplayCueNotify_Actor::~AGameplayCueNotify_Actor() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(AGameplayCueNotify_Actor)
// End Class AGameplayCueNotify_Actor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayCueNotify_Actor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGameplayCueNotify_Actor, AGameplayCueNotify_Actor::StaticClass, TEXT("AGameplayCueNotify_Actor"), &Z_Registration_Info_UClass_AGameplayCueNotify_Actor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGameplayCueNotify_Actor), 667916077U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayCueNotify_Actor_h_2720662233(TEXT("/Script/GameplayAbilities"),
	Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayCueNotify_Actor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayCueNotify_Actor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
