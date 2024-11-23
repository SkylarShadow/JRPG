// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayAbilities/Public/Abilities/Tasks/AbilityTask_SpawnActor.h"
#include "GameplayAbilities/Public/Abilities/GameplayAbilityTargetTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbilityTask_SpawnActor() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask_SpawnActor();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask_SpawnActor_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
GAMEPLAYABILITIES_API UFunction* Z_Construct_UDelegateFunction_GameplayAbilities_SpawnActorDelegate__DelegateSignature();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilityTargetDataHandle();
UPackage* Z_Construct_UPackage__Script_GameplayAbilities();
// End Cross Module References

// Begin Delegate FSpawnActorDelegate
struct Z_Construct_UDelegateFunction_GameplayAbilities_SpawnActorDelegate__DelegateSignature_Statics
{
	struct _Script_GameplayAbilities_eventSpawnActorDelegate_Parms
	{
		AActor* SpawnedActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_SpawnActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnedActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_GameplayAbilities_SpawnActorDelegate__DelegateSignature_Statics::NewProp_SpawnedActor = { "SpawnedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_GameplayAbilities_eventSpawnActorDelegate_Parms, SpawnedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GameplayAbilities_SpawnActorDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GameplayAbilities_SpawnActorDelegate__DelegateSignature_Statics::NewProp_SpawnedActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameplayAbilities_SpawnActorDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GameplayAbilities_SpawnActorDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GameplayAbilities, nullptr, "SpawnActorDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_GameplayAbilities_SpawnActorDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameplayAbilities_SpawnActorDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_GameplayAbilities_SpawnActorDelegate__DelegateSignature_Statics::_Script_GameplayAbilities_eventSpawnActorDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameplayAbilities_SpawnActorDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_GameplayAbilities_SpawnActorDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_GameplayAbilities_SpawnActorDelegate__DelegateSignature_Statics::_Script_GameplayAbilities_eventSpawnActorDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_GameplayAbilities_SpawnActorDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_GameplayAbilities_SpawnActorDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FSpawnActorDelegate_DelegateWrapper(const FMulticastScriptDelegate& SpawnActorDelegate, AActor* SpawnedActor)
{
	struct _Script_GameplayAbilities_eventSpawnActorDelegate_Parms
	{
		AActor* SpawnedActor;
	};
	_Script_GameplayAbilities_eventSpawnActorDelegate_Parms Parms;
	Parms.SpawnedActor=SpawnedActor;
	SpawnActorDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FSpawnActorDelegate

// Begin Class UAbilityTask_SpawnActor Function BeginSpawningActor
struct Z_Construct_UFunction_UAbilityTask_SpawnActor_BeginSpawningActor_Statics
{
	struct AbilityTask_SpawnActor_eventBeginSpawningActor_Parms
	{
		UGameplayAbility* OwningAbility;
		FGameplayAbilityTargetDataHandle TargetData;
		TSubclassOf<AActor> Class;
		AActor* SpawnedActor;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Abilities" },
		{ "DefaultToSelf", "OwningAbility" },
		{ "HidePin", "OwningAbility" },
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_SpawnActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningAbility;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetData;
	static const UECodeGen_Private::FClassPropertyParams NewProp_Class;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnedActor;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_SpawnActor_BeginSpawningActor_Statics::NewProp_OwningAbility = { "OwningAbility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_SpawnActor_eventBeginSpawningActor_Parms, OwningAbility), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbilityTask_SpawnActor_BeginSpawningActor_Statics::NewProp_TargetData = { "TargetData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_SpawnActor_eventBeginSpawningActor_Parms, TargetData), Z_Construct_UScriptStruct_FGameplayAbilityTargetDataHandle, METADATA_PARAMS(0, nullptr) }; // 802803486
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAbilityTask_SpawnActor_BeginSpawningActor_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_SpawnActor_eventBeginSpawningActor_Parms, Class), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_SpawnActor_BeginSpawningActor_Statics::NewProp_SpawnedActor = { "SpawnedActor", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_SpawnActor_eventBeginSpawningActor_Parms, SpawnedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAbilityTask_SpawnActor_BeginSpawningActor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AbilityTask_SpawnActor_eventBeginSpawningActor_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAbilityTask_SpawnActor_BeginSpawningActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AbilityTask_SpawnActor_eventBeginSpawningActor_Parms), &Z_Construct_UFunction_UAbilityTask_SpawnActor_BeginSpawningActor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityTask_SpawnActor_BeginSpawningActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_SpawnActor_BeginSpawningActor_Statics::NewProp_OwningAbility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_SpawnActor_BeginSpawningActor_Statics::NewProp_TargetData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_SpawnActor_BeginSpawningActor_Statics::NewProp_Class,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_SpawnActor_BeginSpawningActor_Statics::NewProp_SpawnedActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_SpawnActor_BeginSpawningActor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_SpawnActor_BeginSpawningActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityTask_SpawnActor_BeginSpawningActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityTask_SpawnActor, nullptr, "BeginSpawningActor", nullptr, nullptr, Z_Construct_UFunction_UAbilityTask_SpawnActor_BeginSpawningActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_SpawnActor_BeginSpawningActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAbilityTask_SpawnActor_BeginSpawningActor_Statics::AbilityTask_SpawnActor_eventBeginSpawningActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_SpawnActor_BeginSpawningActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilityTask_SpawnActor_BeginSpawningActor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAbilityTask_SpawnActor_BeginSpawningActor_Statics::AbilityTask_SpawnActor_eventBeginSpawningActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbilityTask_SpawnActor_BeginSpawningActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityTask_SpawnActor_BeginSpawningActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilityTask_SpawnActor::execBeginSpawningActor)
{
	P_GET_OBJECT(UGameplayAbility,Z_Param_OwningAbility);
	P_GET_STRUCT(FGameplayAbilityTargetDataHandle,Z_Param_TargetData);
	P_GET_OBJECT(UClass,Z_Param_Class);
	P_GET_OBJECT_REF(AActor,Z_Param_Out_SpawnedActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->BeginSpawningActor(Z_Param_OwningAbility,Z_Param_TargetData,Z_Param_Class,P_ARG_GC_BARRIER(Z_Param_Out_SpawnedActor));
	P_NATIVE_END;
}
// End Class UAbilityTask_SpawnActor Function BeginSpawningActor

// Begin Class UAbilityTask_SpawnActor Function FinishSpawningActor
struct Z_Construct_UFunction_UAbilityTask_SpawnActor_FinishSpawningActor_Statics
{
	struct AbilityTask_SpawnActor_eventFinishSpawningActor_Parms
	{
		UGameplayAbility* OwningAbility;
		FGameplayAbilityTargetDataHandle TargetData;
		AActor* SpawnedActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Abilities" },
		{ "DefaultToSelf", "OwningAbility" },
		{ "HidePin", "OwningAbility" },
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_SpawnActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningAbility;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnedActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_SpawnActor_FinishSpawningActor_Statics::NewProp_OwningAbility = { "OwningAbility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_SpawnActor_eventFinishSpawningActor_Parms, OwningAbility), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbilityTask_SpawnActor_FinishSpawningActor_Statics::NewProp_TargetData = { "TargetData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_SpawnActor_eventFinishSpawningActor_Parms, TargetData), Z_Construct_UScriptStruct_FGameplayAbilityTargetDataHandle, METADATA_PARAMS(0, nullptr) }; // 802803486
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_SpawnActor_FinishSpawningActor_Statics::NewProp_SpawnedActor = { "SpawnedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_SpawnActor_eventFinishSpawningActor_Parms, SpawnedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityTask_SpawnActor_FinishSpawningActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_SpawnActor_FinishSpawningActor_Statics::NewProp_OwningAbility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_SpawnActor_FinishSpawningActor_Statics::NewProp_TargetData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_SpawnActor_FinishSpawningActor_Statics::NewProp_SpawnedActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_SpawnActor_FinishSpawningActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityTask_SpawnActor_FinishSpawningActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityTask_SpawnActor, nullptr, "FinishSpawningActor", nullptr, nullptr, Z_Construct_UFunction_UAbilityTask_SpawnActor_FinishSpawningActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_SpawnActor_FinishSpawningActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAbilityTask_SpawnActor_FinishSpawningActor_Statics::AbilityTask_SpawnActor_eventFinishSpawningActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_SpawnActor_FinishSpawningActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilityTask_SpawnActor_FinishSpawningActor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAbilityTask_SpawnActor_FinishSpawningActor_Statics::AbilityTask_SpawnActor_eventFinishSpawningActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbilityTask_SpawnActor_FinishSpawningActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityTask_SpawnActor_FinishSpawningActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilityTask_SpawnActor::execFinishSpawningActor)
{
	P_GET_OBJECT(UGameplayAbility,Z_Param_OwningAbility);
	P_GET_STRUCT(FGameplayAbilityTargetDataHandle,Z_Param_TargetData);
	P_GET_OBJECT(AActor,Z_Param_SpawnedActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FinishSpawningActor(Z_Param_OwningAbility,Z_Param_TargetData,Z_Param_SpawnedActor);
	P_NATIVE_END;
}
// End Class UAbilityTask_SpawnActor Function FinishSpawningActor

// Begin Class UAbilityTask_SpawnActor Function SpawnActor
struct Z_Construct_UFunction_UAbilityTask_SpawnActor_SpawnActor_Statics
{
	struct AbilityTask_SpawnActor_eventSpawnActor_Parms
	{
		UGameplayAbility* OwningAbility;
		FGameplayAbilityTargetDataHandle TargetData;
		TSubclassOf<AActor> Class;
		UAbilityTask_SpawnActor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Ability|Tasks" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Spawn new Actor on the network authority (server) */" },
#endif
		{ "DefaultToSelf", "OwningAbility" },
		{ "HidePin", "OwningAbility" },
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_SpawnActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Spawn new Actor on the network authority (server)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningAbility;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetData;
	static const UECodeGen_Private::FClassPropertyParams NewProp_Class;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_SpawnActor_SpawnActor_Statics::NewProp_OwningAbility = { "OwningAbility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_SpawnActor_eventSpawnActor_Parms, OwningAbility), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbilityTask_SpawnActor_SpawnActor_Statics::NewProp_TargetData = { "TargetData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_SpawnActor_eventSpawnActor_Parms, TargetData), Z_Construct_UScriptStruct_FGameplayAbilityTargetDataHandle, METADATA_PARAMS(0, nullptr) }; // 802803486
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAbilityTask_SpawnActor_SpawnActor_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_SpawnActor_eventSpawnActor_Parms, Class), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_SpawnActor_SpawnActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_SpawnActor_eventSpawnActor_Parms, ReturnValue), Z_Construct_UClass_UAbilityTask_SpawnActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityTask_SpawnActor_SpawnActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_SpawnActor_SpawnActor_Statics::NewProp_OwningAbility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_SpawnActor_SpawnActor_Statics::NewProp_TargetData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_SpawnActor_SpawnActor_Statics::NewProp_Class,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_SpawnActor_SpawnActor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_SpawnActor_SpawnActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityTask_SpawnActor_SpawnActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityTask_SpawnActor, nullptr, "SpawnActor", nullptr, nullptr, Z_Construct_UFunction_UAbilityTask_SpawnActor_SpawnActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_SpawnActor_SpawnActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAbilityTask_SpawnActor_SpawnActor_Statics::AbilityTask_SpawnActor_eventSpawnActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_SpawnActor_SpawnActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilityTask_SpawnActor_SpawnActor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAbilityTask_SpawnActor_SpawnActor_Statics::AbilityTask_SpawnActor_eventSpawnActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbilityTask_SpawnActor_SpawnActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityTask_SpawnActor_SpawnActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilityTask_SpawnActor::execSpawnActor)
{
	P_GET_OBJECT(UGameplayAbility,Z_Param_OwningAbility);
	P_GET_STRUCT(FGameplayAbilityTargetDataHandle,Z_Param_TargetData);
	P_GET_OBJECT(UClass,Z_Param_Class);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAbilityTask_SpawnActor**)Z_Param__Result=UAbilityTask_SpawnActor::SpawnActor(Z_Param_OwningAbility,Z_Param_TargetData,Z_Param_Class);
	P_NATIVE_END;
}
// End Class UAbilityTask_SpawnActor Function SpawnActor

// Begin Class UAbilityTask_SpawnActor
void UAbilityTask_SpawnActor::StaticRegisterNativesUAbilityTask_SpawnActor()
{
	UClass* Class = UAbilityTask_SpawnActor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BeginSpawningActor", &UAbilityTask_SpawnActor::execBeginSpawningActor },
		{ "FinishSpawningActor", &UAbilityTask_SpawnActor::execFinishSpawningActor },
		{ "SpawnActor", &UAbilityTask_SpawnActor::execSpawnActor },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAbilityTask_SpawnActor);
UClass* Z_Construct_UClass_UAbilityTask_SpawnActor_NoRegister()
{
	return UAbilityTask_SpawnActor::StaticClass();
}
struct Z_Construct_UClass_UAbilityTask_SpawnActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\x09""Convenience task for spawning actors on the network authority. If not the net authority, we will not spawn and Success will not be called.\n *\x09The nice thing this adds is the ability to modify expose on spawn properties while also implicitly checking network role before spawning.\n *\x09\n *\x09Though this task doesn't do much - games can implement similiar tasks that carry out game specific rules. For example a 'SpawnProjectile'\n *\x09task that limits the available classes to the games projectile class, and that does game specific stuff on spawn (for example, determining\n *\x09""firing position from a weapon attachment - logic that we don't necessarily want in ability blueprints).\n *\x09\n *\x09Long term we can also use this task as a sync point. If the executing client could wait execution until the server creates and replicates the \n *\x09""actor down to it. We could potentially also use this to do predictive actor spawning / reconciliation.\n */" },
#endif
		{ "IncludePath", "Abilities/Tasks/AbilityTask_SpawnActor.h" },
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_SpawnActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Convenience task for spawning actors on the network authority. If not the net authority, we will not spawn and Success will not be called.\nThe nice thing this adds is the ability to modify expose on spawn properties while also implicitly checking network role before spawning.\n\nThough this task doesn't do much - games can implement similiar tasks that carry out game specific rules. For example a 'SpawnProjectile'\ntask that limits the available classes to the games projectile class, and that does game specific stuff on spawn (for example, determining\nfiring position from a weapon attachment - logic that we don't necessarily want in ability blueprints).\n\nLong term we can also use this task as a sync point. If the executing client could wait execution until the server creates and replicates the\nactor down to it. We could potentially also use this to do predictive actor spawning / reconciliation." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Success_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_SpawnActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DidNotSpawn_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Called when we can't spawn: on clients or potentially on server if they fail to spawn (rare) */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_SpawnActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when we can't spawn: on clients or potentially on server if they fail to spawn (rare)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_Success;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_DidNotSpawn;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAbilityTask_SpawnActor_BeginSpawningActor, "BeginSpawningActor" }, // 1175757958
		{ &Z_Construct_UFunction_UAbilityTask_SpawnActor_FinishSpawningActor, "FinishSpawningActor" }, // 2107750768
		{ &Z_Construct_UFunction_UAbilityTask_SpawnActor_SpawnActor, "SpawnActor" }, // 22815302
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAbilityTask_SpawnActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAbilityTask_SpawnActor_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityTask_SpawnActor, Success), Z_Construct_UDelegateFunction_GameplayAbilities_SpawnActorDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Success_MetaData), NewProp_Success_MetaData) }; // 2152124968
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAbilityTask_SpawnActor_Statics::NewProp_DidNotSpawn = { "DidNotSpawn", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityTask_SpawnActor, DidNotSpawn), Z_Construct_UDelegateFunction_GameplayAbilities_SpawnActorDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DidNotSpawn_MetaData), NewProp_DidNotSpawn_MetaData) }; // 2152124968
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAbilityTask_SpawnActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_SpawnActor_Statics::NewProp_Success,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_SpawnActor_Statics::NewProp_DidNotSpawn,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_SpawnActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAbilityTask_SpawnActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAbilityTask,
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_SpawnActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAbilityTask_SpawnActor_Statics::ClassParams = {
	&UAbilityTask_SpawnActor::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAbilityTask_SpawnActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_SpawnActor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_SpawnActor_Statics::Class_MetaDataParams), Z_Construct_UClass_UAbilityTask_SpawnActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAbilityTask_SpawnActor()
{
	if (!Z_Registration_Info_UClass_UAbilityTask_SpawnActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAbilityTask_SpawnActor.OuterSingleton, Z_Construct_UClass_UAbilityTask_SpawnActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAbilityTask_SpawnActor.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UClass* StaticClass<UAbilityTask_SpawnActor>()
{
	return UAbilityTask_SpawnActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAbilityTask_SpawnActor);
UAbilityTask_SpawnActor::~UAbilityTask_SpawnActor() {}
// End Class UAbilityTask_SpawnActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_SpawnActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAbilityTask_SpawnActor, UAbilityTask_SpawnActor::StaticClass, TEXT("UAbilityTask_SpawnActor"), &Z_Registration_Info_UClass_UAbilityTask_SpawnActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAbilityTask_SpawnActor), 3394961235U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_SpawnActor_h_1469057703(TEXT("/Script/GameplayAbilities"),
	Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_SpawnActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_SpawnActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
