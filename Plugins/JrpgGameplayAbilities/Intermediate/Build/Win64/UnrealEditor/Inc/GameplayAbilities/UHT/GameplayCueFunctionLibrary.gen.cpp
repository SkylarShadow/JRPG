// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayAbilities/Public/GameplayCueFunctionLibrary.h"
#include "GameplayAbilities/Public/GameplayEffectTypes.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayCueFunctionLibrary() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayCueFunctionLibrary();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayCueFunctionLibrary_NoRegister();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayCueParameters();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
UPackage* Z_Construct_UPackage__Script_GameplayAbilities();
// End Cross Module References

// Begin Class UGameplayCueFunctionLibrary Function AddGameplayCueOnActor
struct Z_Construct_UFunction_UGameplayCueFunctionLibrary_AddGameplayCueOnActor_Statics
{
	struct GameplayCueFunctionLibrary_eventAddGameplayCueOnActor_Parms
	{
		AActor* Target;
		FGameplayTag GameplayCueTag;
		FGameplayCueParameters Parameters;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GameplayCue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Invoke the added event for a gameplay cue on the target actor. This should be paired with a RemoveGameplayCueOnActor call.\n// * If the actor has an ability system, the event will fire on authority only and will be replicated.\n// * If the actor does not have an ability system, the event will only be fired locally.\n" },
#endif
		{ "DisplayName", "Add GameplayCue On Actor (Looping)" },
		{ "GameplayTagFilter", "GameplayCue" },
		{ "ModuleRelativePath", "Public/GameplayCueFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Invoke the added event for a gameplay cue on the target actor. This should be paired with a RemoveGameplayCueOnActor call.\n* If the actor has an ability system, the event will fire on authority only and will be replicated.\n* If the actor does not have an ability system, the event will only be fired locally." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameplayCueTag_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Parameters_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayCueTag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Parameters;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayCueFunctionLibrary_AddGameplayCueOnActor_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayCueFunctionLibrary_eventAddGameplayCueOnActor_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayCueFunctionLibrary_AddGameplayCueOnActor_Statics::NewProp_GameplayCueTag = { "GameplayCueTag", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayCueFunctionLibrary_eventAddGameplayCueOnActor_Parms, GameplayCueTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameplayCueTag_MetaData), NewProp_GameplayCueTag_MetaData) }; // 1298103297
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayCueFunctionLibrary_AddGameplayCueOnActor_Statics::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayCueFunctionLibrary_eventAddGameplayCueOnActor_Parms, Parameters), Z_Construct_UScriptStruct_FGameplayCueParameters, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Parameters_MetaData), NewProp_Parameters_MetaData) }; // 1032334605
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayCueFunctionLibrary_AddGameplayCueOnActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayCueFunctionLibrary_AddGameplayCueOnActor_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayCueFunctionLibrary_AddGameplayCueOnActor_Statics::NewProp_GameplayCueTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayCueFunctionLibrary_AddGameplayCueOnActor_Statics::NewProp_Parameters,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayCueFunctionLibrary_AddGameplayCueOnActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayCueFunctionLibrary_AddGameplayCueOnActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayCueFunctionLibrary, nullptr, "AddGameplayCueOnActor", nullptr, nullptr, Z_Construct_UFunction_UGameplayCueFunctionLibrary_AddGameplayCueOnActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayCueFunctionLibrary_AddGameplayCueOnActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGameplayCueFunctionLibrary_AddGameplayCueOnActor_Statics::GameplayCueFunctionLibrary_eventAddGameplayCueOnActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayCueFunctionLibrary_AddGameplayCueOnActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameplayCueFunctionLibrary_AddGameplayCueOnActor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGameplayCueFunctionLibrary_AddGameplayCueOnActor_Statics::GameplayCueFunctionLibrary_eventAddGameplayCueOnActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGameplayCueFunctionLibrary_AddGameplayCueOnActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayCueFunctionLibrary_AddGameplayCueOnActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGameplayCueFunctionLibrary::execAddGameplayCueOnActor)
{
	P_GET_OBJECT(AActor,Z_Param_Target);
	P_GET_STRUCT(FGameplayTag,Z_Param_GameplayCueTag);
	P_GET_STRUCT_REF(FGameplayCueParameters,Z_Param_Out_Parameters);
	P_FINISH;
	P_NATIVE_BEGIN;
	UGameplayCueFunctionLibrary::AddGameplayCueOnActor(Z_Param_Target,Z_Param_GameplayCueTag,Z_Param_Out_Parameters);
	P_NATIVE_END;
}
// End Class UGameplayCueFunctionLibrary Function AddGameplayCueOnActor

// Begin Class UGameplayCueFunctionLibrary Function ExecuteGameplayCueOnActor
struct Z_Construct_UFunction_UGameplayCueFunctionLibrary_ExecuteGameplayCueOnActor_Statics
{
	struct GameplayCueFunctionLibrary_eventExecuteGameplayCueOnActor_Parms
	{
		AActor* Target;
		FGameplayTag GameplayCueTag;
		FGameplayCueParameters Parameters;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GameplayCue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Invoke a one time \"instant\" execute event for a gameplay cue on the target actor.\n// * If the actor has an ability system, the event will fire on authority only and will be replicated.\n// * If the actor does not have an ability system, the event will only be fired locally.\n" },
#endif
		{ "DisplayName", "Execute GameplayCue On Actor (Burst)" },
		{ "GameplayTagFilter", "GameplayCue" },
		{ "ModuleRelativePath", "Public/GameplayCueFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Invoke a one time \"instant\" execute event for a gameplay cue on the target actor.\n* If the actor has an ability system, the event will fire on authority only and will be replicated.\n* If the actor does not have an ability system, the event will only be fired locally." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameplayCueTag_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Parameters_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayCueTag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Parameters;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayCueFunctionLibrary_ExecuteGameplayCueOnActor_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayCueFunctionLibrary_eventExecuteGameplayCueOnActor_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayCueFunctionLibrary_ExecuteGameplayCueOnActor_Statics::NewProp_GameplayCueTag = { "GameplayCueTag", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayCueFunctionLibrary_eventExecuteGameplayCueOnActor_Parms, GameplayCueTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameplayCueTag_MetaData), NewProp_GameplayCueTag_MetaData) }; // 1298103297
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayCueFunctionLibrary_ExecuteGameplayCueOnActor_Statics::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayCueFunctionLibrary_eventExecuteGameplayCueOnActor_Parms, Parameters), Z_Construct_UScriptStruct_FGameplayCueParameters, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Parameters_MetaData), NewProp_Parameters_MetaData) }; // 1032334605
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayCueFunctionLibrary_ExecuteGameplayCueOnActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayCueFunctionLibrary_ExecuteGameplayCueOnActor_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayCueFunctionLibrary_ExecuteGameplayCueOnActor_Statics::NewProp_GameplayCueTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayCueFunctionLibrary_ExecuteGameplayCueOnActor_Statics::NewProp_Parameters,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayCueFunctionLibrary_ExecuteGameplayCueOnActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayCueFunctionLibrary_ExecuteGameplayCueOnActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayCueFunctionLibrary, nullptr, "ExecuteGameplayCueOnActor", nullptr, nullptr, Z_Construct_UFunction_UGameplayCueFunctionLibrary_ExecuteGameplayCueOnActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayCueFunctionLibrary_ExecuteGameplayCueOnActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGameplayCueFunctionLibrary_ExecuteGameplayCueOnActor_Statics::GameplayCueFunctionLibrary_eventExecuteGameplayCueOnActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayCueFunctionLibrary_ExecuteGameplayCueOnActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameplayCueFunctionLibrary_ExecuteGameplayCueOnActor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGameplayCueFunctionLibrary_ExecuteGameplayCueOnActor_Statics::GameplayCueFunctionLibrary_eventExecuteGameplayCueOnActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGameplayCueFunctionLibrary_ExecuteGameplayCueOnActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayCueFunctionLibrary_ExecuteGameplayCueOnActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGameplayCueFunctionLibrary::execExecuteGameplayCueOnActor)
{
	P_GET_OBJECT(AActor,Z_Param_Target);
	P_GET_STRUCT(FGameplayTag,Z_Param_GameplayCueTag);
	P_GET_STRUCT_REF(FGameplayCueParameters,Z_Param_Out_Parameters);
	P_FINISH;
	P_NATIVE_BEGIN;
	UGameplayCueFunctionLibrary::ExecuteGameplayCueOnActor(Z_Param_Target,Z_Param_GameplayCueTag,Z_Param_Out_Parameters);
	P_NATIVE_END;
}
// End Class UGameplayCueFunctionLibrary Function ExecuteGameplayCueOnActor

// Begin Class UGameplayCueFunctionLibrary Function MakeGameplayCueParametersFromHitResult
struct Z_Construct_UFunction_UGameplayCueFunctionLibrary_MakeGameplayCueParametersFromHitResult_Statics
{
	struct GameplayCueFunctionLibrary_eventMakeGameplayCueParametersFromHitResult_Parms
	{
		FHitResult HitResult;
		FGameplayCueParameters ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GameplayCue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Builds gameplay cue parameters using data from a hit result.\n" },
#endif
		{ "ModuleRelativePath", "Public/GameplayCueFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Builds gameplay cue parameters using data from a hit result." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitResult;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayCueFunctionLibrary_MakeGameplayCueParametersFromHitResult_Statics::NewProp_HitResult = { "HitResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayCueFunctionLibrary_eventMakeGameplayCueParametersFromHitResult_Parms, HitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitResult_MetaData), NewProp_HitResult_MetaData) }; // 4100991306
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayCueFunctionLibrary_MakeGameplayCueParametersFromHitResult_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayCueFunctionLibrary_eventMakeGameplayCueParametersFromHitResult_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayCueParameters, METADATA_PARAMS(0, nullptr) }; // 1032334605
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayCueFunctionLibrary_MakeGameplayCueParametersFromHitResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayCueFunctionLibrary_MakeGameplayCueParametersFromHitResult_Statics::NewProp_HitResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayCueFunctionLibrary_MakeGameplayCueParametersFromHitResult_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayCueFunctionLibrary_MakeGameplayCueParametersFromHitResult_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayCueFunctionLibrary_MakeGameplayCueParametersFromHitResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayCueFunctionLibrary, nullptr, "MakeGameplayCueParametersFromHitResult", nullptr, nullptr, Z_Construct_UFunction_UGameplayCueFunctionLibrary_MakeGameplayCueParametersFromHitResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayCueFunctionLibrary_MakeGameplayCueParametersFromHitResult_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGameplayCueFunctionLibrary_MakeGameplayCueParametersFromHitResult_Statics::GameplayCueFunctionLibrary_eventMakeGameplayCueParametersFromHitResult_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayCueFunctionLibrary_MakeGameplayCueParametersFromHitResult_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameplayCueFunctionLibrary_MakeGameplayCueParametersFromHitResult_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGameplayCueFunctionLibrary_MakeGameplayCueParametersFromHitResult_Statics::GameplayCueFunctionLibrary_eventMakeGameplayCueParametersFromHitResult_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGameplayCueFunctionLibrary_MakeGameplayCueParametersFromHitResult()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayCueFunctionLibrary_MakeGameplayCueParametersFromHitResult_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGameplayCueFunctionLibrary::execMakeGameplayCueParametersFromHitResult)
{
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_HitResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FGameplayCueParameters*)Z_Param__Result=UGameplayCueFunctionLibrary::MakeGameplayCueParametersFromHitResult(Z_Param_Out_HitResult);
	P_NATIVE_END;
}
// End Class UGameplayCueFunctionLibrary Function MakeGameplayCueParametersFromHitResult

// Begin Class UGameplayCueFunctionLibrary Function RemoveGameplayCueOnActor
struct Z_Construct_UFunction_UGameplayCueFunctionLibrary_RemoveGameplayCueOnActor_Statics
{
	struct GameplayCueFunctionLibrary_eventRemoveGameplayCueOnActor_Parms
	{
		AActor* Target;
		FGameplayTag GameplayCueTag;
		FGameplayCueParameters Parameters;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GameplayCue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Invoke the removed event for a gameplay cue on the target actor. This should be paired with an AddGameplayCueOnActor call.\n// * If the actor has an ability system, the event will fire on authority only and will be replicated.\n// * If the actor does not have an ability system, the event will only be fired locally.\n" },
#endif
		{ "DisplayName", "Remove GameplayCue On Actor (Looping)" },
		{ "GameplayTagFilter", "GameplayCue" },
		{ "ModuleRelativePath", "Public/GameplayCueFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Invoke the removed event for a gameplay cue on the target actor. This should be paired with an AddGameplayCueOnActor call.\n* If the actor has an ability system, the event will fire on authority only and will be replicated.\n* If the actor does not have an ability system, the event will only be fired locally." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameplayCueTag_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Parameters_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayCueTag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Parameters;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayCueFunctionLibrary_RemoveGameplayCueOnActor_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayCueFunctionLibrary_eventRemoveGameplayCueOnActor_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayCueFunctionLibrary_RemoveGameplayCueOnActor_Statics::NewProp_GameplayCueTag = { "GameplayCueTag", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayCueFunctionLibrary_eventRemoveGameplayCueOnActor_Parms, GameplayCueTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameplayCueTag_MetaData), NewProp_GameplayCueTag_MetaData) }; // 1298103297
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayCueFunctionLibrary_RemoveGameplayCueOnActor_Statics::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayCueFunctionLibrary_eventRemoveGameplayCueOnActor_Parms, Parameters), Z_Construct_UScriptStruct_FGameplayCueParameters, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Parameters_MetaData), NewProp_Parameters_MetaData) }; // 1032334605
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayCueFunctionLibrary_RemoveGameplayCueOnActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayCueFunctionLibrary_RemoveGameplayCueOnActor_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayCueFunctionLibrary_RemoveGameplayCueOnActor_Statics::NewProp_GameplayCueTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayCueFunctionLibrary_RemoveGameplayCueOnActor_Statics::NewProp_Parameters,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayCueFunctionLibrary_RemoveGameplayCueOnActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayCueFunctionLibrary_RemoveGameplayCueOnActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayCueFunctionLibrary, nullptr, "RemoveGameplayCueOnActor", nullptr, nullptr, Z_Construct_UFunction_UGameplayCueFunctionLibrary_RemoveGameplayCueOnActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayCueFunctionLibrary_RemoveGameplayCueOnActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGameplayCueFunctionLibrary_RemoveGameplayCueOnActor_Statics::GameplayCueFunctionLibrary_eventRemoveGameplayCueOnActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayCueFunctionLibrary_RemoveGameplayCueOnActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameplayCueFunctionLibrary_RemoveGameplayCueOnActor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGameplayCueFunctionLibrary_RemoveGameplayCueOnActor_Statics::GameplayCueFunctionLibrary_eventRemoveGameplayCueOnActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGameplayCueFunctionLibrary_RemoveGameplayCueOnActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayCueFunctionLibrary_RemoveGameplayCueOnActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGameplayCueFunctionLibrary::execRemoveGameplayCueOnActor)
{
	P_GET_OBJECT(AActor,Z_Param_Target);
	P_GET_STRUCT(FGameplayTag,Z_Param_GameplayCueTag);
	P_GET_STRUCT_REF(FGameplayCueParameters,Z_Param_Out_Parameters);
	P_FINISH;
	P_NATIVE_BEGIN;
	UGameplayCueFunctionLibrary::RemoveGameplayCueOnActor(Z_Param_Target,Z_Param_GameplayCueTag,Z_Param_Out_Parameters);
	P_NATIVE_END;
}
// End Class UGameplayCueFunctionLibrary Function RemoveGameplayCueOnActor

// Begin Class UGameplayCueFunctionLibrary
void UGameplayCueFunctionLibrary::StaticRegisterNativesUGameplayCueFunctionLibrary()
{
	UClass* Class = UGameplayCueFunctionLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddGameplayCueOnActor", &UGameplayCueFunctionLibrary::execAddGameplayCueOnActor },
		{ "ExecuteGameplayCueOnActor", &UGameplayCueFunctionLibrary::execExecuteGameplayCueOnActor },
		{ "MakeGameplayCueParametersFromHitResult", &UGameplayCueFunctionLibrary::execMakeGameplayCueParametersFromHitResult },
		{ "RemoveGameplayCueOnActor", &UGameplayCueFunctionLibrary::execRemoveGameplayCueOnActor },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameplayCueFunctionLibrary);
UClass* Z_Construct_UClass_UGameplayCueFunctionLibrary_NoRegister()
{
	return UGameplayCueFunctionLibrary::StaticClass();
}
struct Z_Construct_UClass_UGameplayCueFunctionLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * UGameplayCueFunctionLibrary\n *\n *\x09Helpful utility function for working with gameplay cues.\n */" },
#endif
		{ "IncludePath", "GameplayCueFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/GameplayCueFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UGameplayCueFunctionLibrary\n\n    Helpful utility function for working with gameplay cues." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGameplayCueFunctionLibrary_AddGameplayCueOnActor, "AddGameplayCueOnActor" }, // 3895428487
		{ &Z_Construct_UFunction_UGameplayCueFunctionLibrary_ExecuteGameplayCueOnActor, "ExecuteGameplayCueOnActor" }, // 3529672629
		{ &Z_Construct_UFunction_UGameplayCueFunctionLibrary_MakeGameplayCueParametersFromHitResult, "MakeGameplayCueParametersFromHitResult" }, // 2408150627
		{ &Z_Construct_UFunction_UGameplayCueFunctionLibrary_RemoveGameplayCueOnActor, "RemoveGameplayCueOnActor" }, // 4290372545
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameplayCueFunctionLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGameplayCueFunctionLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayCueFunctionLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameplayCueFunctionLibrary_Statics::ClassParams = {
	&UGameplayCueFunctionLibrary::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayCueFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UGameplayCueFunctionLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGameplayCueFunctionLibrary()
{
	if (!Z_Registration_Info_UClass_UGameplayCueFunctionLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameplayCueFunctionLibrary.OuterSingleton, Z_Construct_UClass_UGameplayCueFunctionLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGameplayCueFunctionLibrary.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UClass* StaticClass<UGameplayCueFunctionLibrary>()
{
	return UGameplayCueFunctionLibrary::StaticClass();
}
UGameplayCueFunctionLibrary::UGameplayCueFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGameplayCueFunctionLibrary);
UGameplayCueFunctionLibrary::~UGameplayCueFunctionLibrary() {}
// End Class UGameplayCueFunctionLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayCueFunctionLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGameplayCueFunctionLibrary, UGameplayCueFunctionLibrary::StaticClass, TEXT("UGameplayCueFunctionLibrary"), &Z_Registration_Info_UClass_UGameplayCueFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameplayCueFunctionLibrary), 2995319612U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayCueFunctionLibrary_h_1657127755(TEXT("/Script/GameplayAbilities"),
	Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayCueFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayCueFunctionLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
