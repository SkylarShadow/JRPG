// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayAbilities/Public/GameplayCueNotify_Looping.h"
#include "GameplayAbilities/Public/GameplayCueNotifyTypes.h"
#include "GameplayAbilities/Public/GameplayEffectTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayCueNotify_Looping() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_AGameplayCueNotify_Actor();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_AGameplayCueNotify_Looping();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_AGameplayCueNotify_Looping_NoRegister();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayCueNotify_BurstEffects();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayCueNotify_LoopingEffects();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayCueNotify_PlacementInfo();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayCueNotify_SpawnCondition();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayCueNotify_SpawnResult();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayCueParameters();
UPackage* Z_Construct_UPackage__Script_GameplayAbilities();
// End Cross Module References

// Begin Class AGameplayCueNotify_Looping Function OnApplication
struct GameplayCueNotify_Looping_eventOnApplication_Parms
{
	AActor* Target;
	FGameplayCueParameters Parameters;
	FGameplayCueNotify_SpawnResult SpawnResults;
};
static FName NAME_AGameplayCueNotify_Looping_OnApplication = FName(TEXT("OnApplication"));
void AGameplayCueNotify_Looping::OnApplication(AActor* Target, FGameplayCueParameters const& Parameters, FGameplayCueNotify_SpawnResult const& SpawnResults)
{
	GameplayCueNotify_Looping_eventOnApplication_Parms Parms;
	Parms.Target=Target;
	Parms.Parameters=Parameters;
	Parms.SpawnResults=SpawnResults;
	ProcessEvent(FindFunctionChecked(NAME_AGameplayCueNotify_Looping_OnApplication),&Parms);
}
struct Z_Construct_UFunction_AGameplayCueNotify_Looping_OnApplication_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameplayCueNotify_Looping.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Parameters_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnResults_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Parameters;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnResults;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGameplayCueNotify_Looping_OnApplication_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayCueNotify_Looping_eventOnApplication_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGameplayCueNotify_Looping_OnApplication_Statics::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayCueNotify_Looping_eventOnApplication_Parms, Parameters), Z_Construct_UScriptStruct_FGameplayCueParameters, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Parameters_MetaData), NewProp_Parameters_MetaData) }; // 1032334605
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGameplayCueNotify_Looping_OnApplication_Statics::NewProp_SpawnResults = { "SpawnResults", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayCueNotify_Looping_eventOnApplication_Parms, SpawnResults), Z_Construct_UScriptStruct_FGameplayCueNotify_SpawnResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnResults_MetaData), NewProp_SpawnResults_MetaData) }; // 925001605
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameplayCueNotify_Looping_OnApplication_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameplayCueNotify_Looping_OnApplication_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameplayCueNotify_Looping_OnApplication_Statics::NewProp_Parameters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameplayCueNotify_Looping_OnApplication_Statics::NewProp_SpawnResults,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameplayCueNotify_Looping_OnApplication_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameplayCueNotify_Looping_OnApplication_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameplayCueNotify_Looping, nullptr, "OnApplication", nullptr, nullptr, Z_Construct_UFunction_AGameplayCueNotify_Looping_OnApplication_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameplayCueNotify_Looping_OnApplication_Statics::PropPointers), sizeof(GameplayCueNotify_Looping_eventOnApplication_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08480800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameplayCueNotify_Looping_OnApplication_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGameplayCueNotify_Looping_OnApplication_Statics::Function_MetaDataParams) };
static_assert(sizeof(GameplayCueNotify_Looping_eventOnApplication_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGameplayCueNotify_Looping_OnApplication()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameplayCueNotify_Looping_OnApplication_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AGameplayCueNotify_Looping Function OnApplication

// Begin Class AGameplayCueNotify_Looping Function OnLoopingStart
struct GameplayCueNotify_Looping_eventOnLoopingStart_Parms
{
	AActor* Target;
	FGameplayCueParameters Parameters;
	FGameplayCueNotify_SpawnResult SpawnResults;
};
static FName NAME_AGameplayCueNotify_Looping_OnLoopingStart = FName(TEXT("OnLoopingStart"));
void AGameplayCueNotify_Looping::OnLoopingStart(AActor* Target, FGameplayCueParameters const& Parameters, FGameplayCueNotify_SpawnResult const& SpawnResults)
{
	GameplayCueNotify_Looping_eventOnLoopingStart_Parms Parms;
	Parms.Target=Target;
	Parms.Parameters=Parameters;
	Parms.SpawnResults=SpawnResults;
	ProcessEvent(FindFunctionChecked(NAME_AGameplayCueNotify_Looping_OnLoopingStart),&Parms);
}
struct Z_Construct_UFunction_AGameplayCueNotify_Looping_OnLoopingStart_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameplayCueNotify_Looping.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Parameters_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnResults_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Parameters;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnResults;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGameplayCueNotify_Looping_OnLoopingStart_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayCueNotify_Looping_eventOnLoopingStart_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGameplayCueNotify_Looping_OnLoopingStart_Statics::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayCueNotify_Looping_eventOnLoopingStart_Parms, Parameters), Z_Construct_UScriptStruct_FGameplayCueParameters, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Parameters_MetaData), NewProp_Parameters_MetaData) }; // 1032334605
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGameplayCueNotify_Looping_OnLoopingStart_Statics::NewProp_SpawnResults = { "SpawnResults", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayCueNotify_Looping_eventOnLoopingStart_Parms, SpawnResults), Z_Construct_UScriptStruct_FGameplayCueNotify_SpawnResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnResults_MetaData), NewProp_SpawnResults_MetaData) }; // 925001605
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameplayCueNotify_Looping_OnLoopingStart_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameplayCueNotify_Looping_OnLoopingStart_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameplayCueNotify_Looping_OnLoopingStart_Statics::NewProp_Parameters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameplayCueNotify_Looping_OnLoopingStart_Statics::NewProp_SpawnResults,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameplayCueNotify_Looping_OnLoopingStart_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameplayCueNotify_Looping_OnLoopingStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameplayCueNotify_Looping, nullptr, "OnLoopingStart", nullptr, nullptr, Z_Construct_UFunction_AGameplayCueNotify_Looping_OnLoopingStart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameplayCueNotify_Looping_OnLoopingStart_Statics::PropPointers), sizeof(GameplayCueNotify_Looping_eventOnLoopingStart_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08480800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameplayCueNotify_Looping_OnLoopingStart_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGameplayCueNotify_Looping_OnLoopingStart_Statics::Function_MetaDataParams) };
static_assert(sizeof(GameplayCueNotify_Looping_eventOnLoopingStart_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGameplayCueNotify_Looping_OnLoopingStart()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameplayCueNotify_Looping_OnLoopingStart_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AGameplayCueNotify_Looping Function OnLoopingStart

// Begin Class AGameplayCueNotify_Looping Function OnRecurring
struct GameplayCueNotify_Looping_eventOnRecurring_Parms
{
	AActor* Target;
	FGameplayCueParameters Parameters;
	FGameplayCueNotify_SpawnResult SpawnResults;
};
static FName NAME_AGameplayCueNotify_Looping_OnRecurring = FName(TEXT("OnRecurring"));
void AGameplayCueNotify_Looping::OnRecurring(AActor* Target, FGameplayCueParameters const& Parameters, FGameplayCueNotify_SpawnResult const& SpawnResults)
{
	GameplayCueNotify_Looping_eventOnRecurring_Parms Parms;
	Parms.Target=Target;
	Parms.Parameters=Parameters;
	Parms.SpawnResults=SpawnResults;
	ProcessEvent(FindFunctionChecked(NAME_AGameplayCueNotify_Looping_OnRecurring),&Parms);
}
struct Z_Construct_UFunction_AGameplayCueNotify_Looping_OnRecurring_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameplayCueNotify_Looping.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Parameters_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnResults_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Parameters;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnResults;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGameplayCueNotify_Looping_OnRecurring_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayCueNotify_Looping_eventOnRecurring_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGameplayCueNotify_Looping_OnRecurring_Statics::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayCueNotify_Looping_eventOnRecurring_Parms, Parameters), Z_Construct_UScriptStruct_FGameplayCueParameters, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Parameters_MetaData), NewProp_Parameters_MetaData) }; // 1032334605
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGameplayCueNotify_Looping_OnRecurring_Statics::NewProp_SpawnResults = { "SpawnResults", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayCueNotify_Looping_eventOnRecurring_Parms, SpawnResults), Z_Construct_UScriptStruct_FGameplayCueNotify_SpawnResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnResults_MetaData), NewProp_SpawnResults_MetaData) }; // 925001605
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameplayCueNotify_Looping_OnRecurring_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameplayCueNotify_Looping_OnRecurring_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameplayCueNotify_Looping_OnRecurring_Statics::NewProp_Parameters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameplayCueNotify_Looping_OnRecurring_Statics::NewProp_SpawnResults,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameplayCueNotify_Looping_OnRecurring_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameplayCueNotify_Looping_OnRecurring_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameplayCueNotify_Looping, nullptr, "OnRecurring", nullptr, nullptr, Z_Construct_UFunction_AGameplayCueNotify_Looping_OnRecurring_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameplayCueNotify_Looping_OnRecurring_Statics::PropPointers), sizeof(GameplayCueNotify_Looping_eventOnRecurring_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08480800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameplayCueNotify_Looping_OnRecurring_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGameplayCueNotify_Looping_OnRecurring_Statics::Function_MetaDataParams) };
static_assert(sizeof(GameplayCueNotify_Looping_eventOnRecurring_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGameplayCueNotify_Looping_OnRecurring()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameplayCueNotify_Looping_OnRecurring_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AGameplayCueNotify_Looping Function OnRecurring

// Begin Class AGameplayCueNotify_Looping Function OnRemoval
struct GameplayCueNotify_Looping_eventOnRemoval_Parms
{
	AActor* Target;
	FGameplayCueParameters Parameters;
	FGameplayCueNotify_SpawnResult SpawnResults;
};
static FName NAME_AGameplayCueNotify_Looping_OnRemoval = FName(TEXT("OnRemoval"));
void AGameplayCueNotify_Looping::OnRemoval(AActor* Target, FGameplayCueParameters const& Parameters, FGameplayCueNotify_SpawnResult const& SpawnResults)
{
	GameplayCueNotify_Looping_eventOnRemoval_Parms Parms;
	Parms.Target=Target;
	Parms.Parameters=Parameters;
	Parms.SpawnResults=SpawnResults;
	ProcessEvent(FindFunctionChecked(NAME_AGameplayCueNotify_Looping_OnRemoval),&Parms);
}
struct Z_Construct_UFunction_AGameplayCueNotify_Looping_OnRemoval_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameplayCueNotify_Looping.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Parameters_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnResults_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Parameters;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnResults;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGameplayCueNotify_Looping_OnRemoval_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayCueNotify_Looping_eventOnRemoval_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGameplayCueNotify_Looping_OnRemoval_Statics::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayCueNotify_Looping_eventOnRemoval_Parms, Parameters), Z_Construct_UScriptStruct_FGameplayCueParameters, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Parameters_MetaData), NewProp_Parameters_MetaData) }; // 1032334605
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGameplayCueNotify_Looping_OnRemoval_Statics::NewProp_SpawnResults = { "SpawnResults", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayCueNotify_Looping_eventOnRemoval_Parms, SpawnResults), Z_Construct_UScriptStruct_FGameplayCueNotify_SpawnResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnResults_MetaData), NewProp_SpawnResults_MetaData) }; // 925001605
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameplayCueNotify_Looping_OnRemoval_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameplayCueNotify_Looping_OnRemoval_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameplayCueNotify_Looping_OnRemoval_Statics::NewProp_Parameters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameplayCueNotify_Looping_OnRemoval_Statics::NewProp_SpawnResults,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameplayCueNotify_Looping_OnRemoval_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameplayCueNotify_Looping_OnRemoval_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameplayCueNotify_Looping, nullptr, "OnRemoval", nullptr, nullptr, Z_Construct_UFunction_AGameplayCueNotify_Looping_OnRemoval_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameplayCueNotify_Looping_OnRemoval_Statics::PropPointers), sizeof(GameplayCueNotify_Looping_eventOnRemoval_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08480800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameplayCueNotify_Looping_OnRemoval_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGameplayCueNotify_Looping_OnRemoval_Statics::Function_MetaDataParams) };
static_assert(sizeof(GameplayCueNotify_Looping_eventOnRemoval_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGameplayCueNotify_Looping_OnRemoval()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameplayCueNotify_Looping_OnRemoval_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AGameplayCueNotify_Looping Function OnRemoval

// Begin Class AGameplayCueNotify_Looping
void AGameplayCueNotify_Looping::StaticRegisterNativesAGameplayCueNotify_Looping()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGameplayCueNotify_Looping);
UClass* Z_Construct_UClass_AGameplayCueNotify_Looping_NoRegister()
{
	return AGameplayCueNotify_Looping::StaticClass();
}
struct Z_Construct_UClass_AGameplayCueNotify_Looping_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "GameplayCueNotify" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * AGameplayCueNotify_Looping\n *\n *\x09This is an instanced gameplay cue notify for continuous looping effects.\n *\x09The game is responsible for defining the start/stop by adding/removing the gameplay cue.\n */" },
#endif
		{ "DisplayName", "GCN Looping" },
		{ "HideCategories", "Replication" },
		{ "IncludePath", "GameplayCueNotify_Looping.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/GameplayCueNotify_Looping.h" },
		{ "ShortTooltip", "A GameplayCueNotify that has a duration that is driven by the game." },
		{ "ShowWorldContextPin", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "AGameplayCueNotify_Looping\n\n    This is an instanced gameplay cue notify for continuous looping effects.\n    The game is responsible for defining the start/stop by adding/removing the gameplay cue." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultSpawnCondition_MetaData[] = {
		{ "Category", "GCN Defaults" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Default condition to check before spawning anything.  Applies for all spawns unless overridden.\n" },
#endif
		{ "ModuleRelativePath", "Public/GameplayCueNotify_Looping.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Default condition to check before spawning anything.  Applies for all spawns unless overridden." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultPlacementInfo_MetaData[] = {
		{ "Category", "GCN Defaults" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Default placement rules.  Applies for all spawns unless overridden.\n" },
#endif
		{ "ModuleRelativePath", "Public/GameplayCueNotify_Looping.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Default placement rules.  Applies for all spawns unless overridden." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ApplicationEffects_MetaData[] = {
		{ "Category", "GCN Application Effects (On Active)" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// List of effects to spawn on application.  These should not be looping effects!\n" },
#endif
		{ "ModuleRelativePath", "Public/GameplayCueNotify_Looping.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of effects to spawn on application.  These should not be looping effects!" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ApplicationSpawnResults_MetaData[] = {
		{ "Category", "GCN Application Effects (On Active)" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Results of spawned application effects.\n" },
#endif
		{ "ModuleRelativePath", "Public/GameplayCueNotify_Looping.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Results of spawned application effects." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoopingEffects_MetaData[] = {
		{ "Category", "GCN Looping Effects (While Active)" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// List of effects to spawn on loop start.\n" },
#endif
		{ "ModuleRelativePath", "Public/GameplayCueNotify_Looping.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of effects to spawn on loop start." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoopingSpawnResults_MetaData[] = {
		{ "Category", "GCN Looping Effects (While Active)" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Results of spawned looping effects.\n" },
#endif
		{ "ModuleRelativePath", "Public/GameplayCueNotify_Looping.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Results of spawned looping effects." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RecurringEffects_MetaData[] = {
		{ "Category", "GCN Recurring Effects (On Execute)" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// List of effects to spawn for a recurring gameplay effect (e.g. each time a DOT ticks).  These should not be looping effects!\n" },
#endif
		{ "ModuleRelativePath", "Public/GameplayCueNotify_Looping.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of effects to spawn for a recurring gameplay effect (e.g. each time a DOT ticks).  These should not be looping effects!" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RecurringSpawnResults_MetaData[] = {
		{ "Category", "GCN Recurring Effects (On Execute)" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Results of spawned recurring effects.\n" },
#endif
		{ "ModuleRelativePath", "Public/GameplayCueNotify_Looping.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Results of spawned recurring effects." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RemovalEffects_MetaData[] = {
		{ "Category", "GCN Removal Effects (On Remove)" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// List of effects to spawn on removal.  These should not be looping effects!\n" },
#endif
		{ "ModuleRelativePath", "Public/GameplayCueNotify_Looping.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of effects to spawn on removal.  These should not be looping effects!" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RemovalSpawnResults_MetaData[] = {
		{ "Category", "GCN Removal Effects (On Remove)" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Results of spawned removal effects.\n" },
#endif
		{ "ModuleRelativePath", "Public/GameplayCueNotify_Looping.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Results of spawned removal effects." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultSpawnCondition;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultPlacementInfo;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ApplicationEffects;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ApplicationSpawnResults;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LoopingEffects;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LoopingSpawnResults;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RecurringEffects;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RecurringSpawnResults;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RemovalEffects;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RemovalSpawnResults;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AGameplayCueNotify_Looping_OnApplication, "OnApplication" }, // 3156272648
		{ &Z_Construct_UFunction_AGameplayCueNotify_Looping_OnLoopingStart, "OnLoopingStart" }, // 196248431
		{ &Z_Construct_UFunction_AGameplayCueNotify_Looping_OnRecurring, "OnRecurring" }, // 1524405961
		{ &Z_Construct_UFunction_AGameplayCueNotify_Looping_OnRemoval, "OnRemoval" }, // 700596008
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGameplayCueNotify_Looping>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGameplayCueNotify_Looping_Statics::NewProp_DefaultSpawnCondition = { "DefaultSpawnCondition", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameplayCueNotify_Looping, DefaultSpawnCondition), Z_Construct_UScriptStruct_FGameplayCueNotify_SpawnCondition, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultSpawnCondition_MetaData), NewProp_DefaultSpawnCondition_MetaData) }; // 3352541212
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGameplayCueNotify_Looping_Statics::NewProp_DefaultPlacementInfo = { "DefaultPlacementInfo", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameplayCueNotify_Looping, DefaultPlacementInfo), Z_Construct_UScriptStruct_FGameplayCueNotify_PlacementInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultPlacementInfo_MetaData), NewProp_DefaultPlacementInfo_MetaData) }; // 2555742544
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGameplayCueNotify_Looping_Statics::NewProp_ApplicationEffects = { "ApplicationEffects", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameplayCueNotify_Looping, ApplicationEffects), Z_Construct_UScriptStruct_FGameplayCueNotify_BurstEffects, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ApplicationEffects_MetaData), NewProp_ApplicationEffects_MetaData) }; // 694216403
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGameplayCueNotify_Looping_Statics::NewProp_ApplicationSpawnResults = { "ApplicationSpawnResults", nullptr, (EPropertyFlags)0x0020088000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameplayCueNotify_Looping, ApplicationSpawnResults), Z_Construct_UScriptStruct_FGameplayCueNotify_SpawnResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ApplicationSpawnResults_MetaData), NewProp_ApplicationSpawnResults_MetaData) }; // 925001605
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGameplayCueNotify_Looping_Statics::NewProp_LoopingEffects = { "LoopingEffects", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameplayCueNotify_Looping, LoopingEffects), Z_Construct_UScriptStruct_FGameplayCueNotify_LoopingEffects, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoopingEffects_MetaData), NewProp_LoopingEffects_MetaData) }; // 4021849128
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGameplayCueNotify_Looping_Statics::NewProp_LoopingSpawnResults = { "LoopingSpawnResults", nullptr, (EPropertyFlags)0x0020088000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameplayCueNotify_Looping, LoopingSpawnResults), Z_Construct_UScriptStruct_FGameplayCueNotify_SpawnResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoopingSpawnResults_MetaData), NewProp_LoopingSpawnResults_MetaData) }; // 925001605
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGameplayCueNotify_Looping_Statics::NewProp_RecurringEffects = { "RecurringEffects", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameplayCueNotify_Looping, RecurringEffects), Z_Construct_UScriptStruct_FGameplayCueNotify_BurstEffects, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RecurringEffects_MetaData), NewProp_RecurringEffects_MetaData) }; // 694216403
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGameplayCueNotify_Looping_Statics::NewProp_RecurringSpawnResults = { "RecurringSpawnResults", nullptr, (EPropertyFlags)0x0020088000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameplayCueNotify_Looping, RecurringSpawnResults), Z_Construct_UScriptStruct_FGameplayCueNotify_SpawnResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RecurringSpawnResults_MetaData), NewProp_RecurringSpawnResults_MetaData) }; // 925001605
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGameplayCueNotify_Looping_Statics::NewProp_RemovalEffects = { "RemovalEffects", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameplayCueNotify_Looping, RemovalEffects), Z_Construct_UScriptStruct_FGameplayCueNotify_BurstEffects, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RemovalEffects_MetaData), NewProp_RemovalEffects_MetaData) }; // 694216403
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGameplayCueNotify_Looping_Statics::NewProp_RemovalSpawnResults = { "RemovalSpawnResults", nullptr, (EPropertyFlags)0x0020088000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameplayCueNotify_Looping, RemovalSpawnResults), Z_Construct_UScriptStruct_FGameplayCueNotify_SpawnResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RemovalSpawnResults_MetaData), NewProp_RemovalSpawnResults_MetaData) }; // 925001605
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGameplayCueNotify_Looping_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameplayCueNotify_Looping_Statics::NewProp_DefaultSpawnCondition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameplayCueNotify_Looping_Statics::NewProp_DefaultPlacementInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameplayCueNotify_Looping_Statics::NewProp_ApplicationEffects,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameplayCueNotify_Looping_Statics::NewProp_ApplicationSpawnResults,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameplayCueNotify_Looping_Statics::NewProp_LoopingEffects,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameplayCueNotify_Looping_Statics::NewProp_LoopingSpawnResults,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameplayCueNotify_Looping_Statics::NewProp_RecurringEffects,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameplayCueNotify_Looping_Statics::NewProp_RecurringSpawnResults,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameplayCueNotify_Looping_Statics::NewProp_RemovalEffects,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameplayCueNotify_Looping_Statics::NewProp_RemovalSpawnResults,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGameplayCueNotify_Looping_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AGameplayCueNotify_Looping_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameplayCueNotify_Actor,
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGameplayCueNotify_Looping_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGameplayCueNotify_Looping_Statics::ClassParams = {
	&AGameplayCueNotify_Looping::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AGameplayCueNotify_Looping_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AGameplayCueNotify_Looping_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGameplayCueNotify_Looping_Statics::Class_MetaDataParams), Z_Construct_UClass_AGameplayCueNotify_Looping_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGameplayCueNotify_Looping()
{
	if (!Z_Registration_Info_UClass_AGameplayCueNotify_Looping.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGameplayCueNotify_Looping.OuterSingleton, Z_Construct_UClass_AGameplayCueNotify_Looping_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGameplayCueNotify_Looping.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UClass* StaticClass<AGameplayCueNotify_Looping>()
{
	return AGameplayCueNotify_Looping::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGameplayCueNotify_Looping);
AGameplayCueNotify_Looping::~AGameplayCueNotify_Looping() {}
// End Class AGameplayCueNotify_Looping

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayCueNotify_Looping_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGameplayCueNotify_Looping, AGameplayCueNotify_Looping::StaticClass, TEXT("AGameplayCueNotify_Looping"), &Z_Registration_Info_UClass_AGameplayCueNotify_Looping, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGameplayCueNotify_Looping), 42985115U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayCueNotify_Looping_h_1793344935(TEXT("/Script/GameplayAbilities"),
	Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayCueNotify_Looping_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayCueNotify_Looping_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
