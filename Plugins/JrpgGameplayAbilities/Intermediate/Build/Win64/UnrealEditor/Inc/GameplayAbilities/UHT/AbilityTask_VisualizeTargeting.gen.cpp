// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayAbilities/Public/Abilities/Tasks/AbilityTask_VisualizeTargeting.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbilityTask_VisualizeTargeting() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_AGameplayAbilityTargetActor_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask_VisualizeTargeting();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask_VisualizeTargeting_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
GAMEPLAYABILITIES_API UFunction* Z_Construct_UDelegateFunction_GameplayAbilities_VisualizeTargetingDelegate__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_GameplayAbilities();
// End Cross Module References

// Begin Delegate FVisualizeTargetingDelegate
struct Z_Construct_UDelegateFunction_GameplayAbilities_VisualizeTargetingDelegate__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_VisualizeTargeting.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GameplayAbilities_VisualizeTargetingDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GameplayAbilities, nullptr, "VisualizeTargetingDelegate__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameplayAbilities_VisualizeTargetingDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_GameplayAbilities_VisualizeTargetingDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_GameplayAbilities_VisualizeTargetingDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_GameplayAbilities_VisualizeTargetingDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FVisualizeTargetingDelegate_DelegateWrapper(const FMulticastScriptDelegate& VisualizeTargetingDelegate)
{
	VisualizeTargetingDelegate.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FVisualizeTargetingDelegate

// Begin Class UAbilityTask_VisualizeTargeting Function BeginSpawningActor
struct Z_Construct_UFunction_UAbilityTask_VisualizeTargeting_BeginSpawningActor_Statics
{
	struct AbilityTask_VisualizeTargeting_eventBeginSpawningActor_Parms
	{
		UGameplayAbility* OwningAbility;
		TSubclassOf<AGameplayAbilityTargetActor> Class;
		AGameplayAbilityTargetActor* SpawnedActor;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Abilities" },
		{ "DefaultToSelf", "OwningAbility" },
		{ "HidePin", "OwningAbility" },
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_VisualizeTargeting.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningAbility;
	static const UECodeGen_Private::FClassPropertyParams NewProp_Class;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnedActor;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_VisualizeTargeting_BeginSpawningActor_Statics::NewProp_OwningAbility = { "OwningAbility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_VisualizeTargeting_eventBeginSpawningActor_Parms, OwningAbility), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAbilityTask_VisualizeTargeting_BeginSpawningActor_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_VisualizeTargeting_eventBeginSpawningActor_Parms, Class), Z_Construct_UClass_UClass, Z_Construct_UClass_AGameplayAbilityTargetActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_VisualizeTargeting_BeginSpawningActor_Statics::NewProp_SpawnedActor = { "SpawnedActor", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_VisualizeTargeting_eventBeginSpawningActor_Parms, SpawnedActor), Z_Construct_UClass_AGameplayAbilityTargetActor_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAbilityTask_VisualizeTargeting_BeginSpawningActor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AbilityTask_VisualizeTargeting_eventBeginSpawningActor_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAbilityTask_VisualizeTargeting_BeginSpawningActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AbilityTask_VisualizeTargeting_eventBeginSpawningActor_Parms), &Z_Construct_UFunction_UAbilityTask_VisualizeTargeting_BeginSpawningActor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityTask_VisualizeTargeting_BeginSpawningActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_VisualizeTargeting_BeginSpawningActor_Statics::NewProp_OwningAbility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_VisualizeTargeting_BeginSpawningActor_Statics::NewProp_Class,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_VisualizeTargeting_BeginSpawningActor_Statics::NewProp_SpawnedActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_VisualizeTargeting_BeginSpawningActor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_VisualizeTargeting_BeginSpawningActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityTask_VisualizeTargeting_BeginSpawningActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityTask_VisualizeTargeting, nullptr, "BeginSpawningActor", nullptr, nullptr, Z_Construct_UFunction_UAbilityTask_VisualizeTargeting_BeginSpawningActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_VisualizeTargeting_BeginSpawningActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAbilityTask_VisualizeTargeting_BeginSpawningActor_Statics::AbilityTask_VisualizeTargeting_eventBeginSpawningActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_VisualizeTargeting_BeginSpawningActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilityTask_VisualizeTargeting_BeginSpawningActor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAbilityTask_VisualizeTargeting_BeginSpawningActor_Statics::AbilityTask_VisualizeTargeting_eventBeginSpawningActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbilityTask_VisualizeTargeting_BeginSpawningActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityTask_VisualizeTargeting_BeginSpawningActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilityTask_VisualizeTargeting::execBeginSpawningActor)
{
	P_GET_OBJECT(UGameplayAbility,Z_Param_OwningAbility);
	P_GET_OBJECT(UClass,Z_Param_Class);
	P_GET_OBJECT_REF(AGameplayAbilityTargetActor,Z_Param_Out_SpawnedActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->BeginSpawningActor(Z_Param_OwningAbility,Z_Param_Class,P_ARG_GC_BARRIER(Z_Param_Out_SpawnedActor));
	P_NATIVE_END;
}
// End Class UAbilityTask_VisualizeTargeting Function BeginSpawningActor

// Begin Class UAbilityTask_VisualizeTargeting Function FinishSpawningActor
struct Z_Construct_UFunction_UAbilityTask_VisualizeTargeting_FinishSpawningActor_Statics
{
	struct AbilityTask_VisualizeTargeting_eventFinishSpawningActor_Parms
	{
		UGameplayAbility* OwningAbility;
		AGameplayAbilityTargetActor* SpawnedActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Abilities" },
		{ "DefaultToSelf", "OwningAbility" },
		{ "HidePin", "OwningAbility" },
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_VisualizeTargeting.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningAbility;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnedActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_VisualizeTargeting_FinishSpawningActor_Statics::NewProp_OwningAbility = { "OwningAbility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_VisualizeTargeting_eventFinishSpawningActor_Parms, OwningAbility), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_VisualizeTargeting_FinishSpawningActor_Statics::NewProp_SpawnedActor = { "SpawnedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_VisualizeTargeting_eventFinishSpawningActor_Parms, SpawnedActor), Z_Construct_UClass_AGameplayAbilityTargetActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityTask_VisualizeTargeting_FinishSpawningActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_VisualizeTargeting_FinishSpawningActor_Statics::NewProp_OwningAbility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_VisualizeTargeting_FinishSpawningActor_Statics::NewProp_SpawnedActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_VisualizeTargeting_FinishSpawningActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityTask_VisualizeTargeting_FinishSpawningActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityTask_VisualizeTargeting, nullptr, "FinishSpawningActor", nullptr, nullptr, Z_Construct_UFunction_UAbilityTask_VisualizeTargeting_FinishSpawningActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_VisualizeTargeting_FinishSpawningActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAbilityTask_VisualizeTargeting_FinishSpawningActor_Statics::AbilityTask_VisualizeTargeting_eventFinishSpawningActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_VisualizeTargeting_FinishSpawningActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilityTask_VisualizeTargeting_FinishSpawningActor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAbilityTask_VisualizeTargeting_FinishSpawningActor_Statics::AbilityTask_VisualizeTargeting_eventFinishSpawningActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbilityTask_VisualizeTargeting_FinishSpawningActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityTask_VisualizeTargeting_FinishSpawningActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilityTask_VisualizeTargeting::execFinishSpawningActor)
{
	P_GET_OBJECT(UGameplayAbility,Z_Param_OwningAbility);
	P_GET_OBJECT(AGameplayAbilityTargetActor,Z_Param_SpawnedActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FinishSpawningActor(Z_Param_OwningAbility,Z_Param_SpawnedActor);
	P_NATIVE_END;
}
// End Class UAbilityTask_VisualizeTargeting Function FinishSpawningActor

// Begin Class UAbilityTask_VisualizeTargeting Function VisualizeTargeting
struct Z_Construct_UFunction_UAbilityTask_VisualizeTargeting_VisualizeTargeting_Statics
{
	struct AbilityTask_VisualizeTargeting_eventVisualizeTargeting_Parms
	{
		UGameplayAbility* OwningAbility;
		TSubclassOf<AGameplayAbilityTargetActor> Class;
		FName TaskInstanceName;
		float Duration;
		UAbilityTask_VisualizeTargeting* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Ability|Tasks" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Spawns target actor and uses it for visualization. */" },
#endif
		{ "CPP_Default_Duration", "-1.000000" },
		{ "DefaultToSelf", "OwningAbility" },
		{ "HidePin", "OwningAbility" },
		{ "HideSpawnParms", "Instigator" },
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_VisualizeTargeting.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Spawns target actor and uses it for visualization." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningAbility;
	static const UECodeGen_Private::FClassPropertyParams NewProp_Class;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TaskInstanceName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_VisualizeTargeting_VisualizeTargeting_Statics::NewProp_OwningAbility = { "OwningAbility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_VisualizeTargeting_eventVisualizeTargeting_Parms, OwningAbility), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAbilityTask_VisualizeTargeting_VisualizeTargeting_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_VisualizeTargeting_eventVisualizeTargeting_Parms, Class), Z_Construct_UClass_UClass, Z_Construct_UClass_AGameplayAbilityTargetActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAbilityTask_VisualizeTargeting_VisualizeTargeting_Statics::NewProp_TaskInstanceName = { "TaskInstanceName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_VisualizeTargeting_eventVisualizeTargeting_Parms, TaskInstanceName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAbilityTask_VisualizeTargeting_VisualizeTargeting_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_VisualizeTargeting_eventVisualizeTargeting_Parms, Duration), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_VisualizeTargeting_VisualizeTargeting_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_VisualizeTargeting_eventVisualizeTargeting_Parms, ReturnValue), Z_Construct_UClass_UAbilityTask_VisualizeTargeting_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityTask_VisualizeTargeting_VisualizeTargeting_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_VisualizeTargeting_VisualizeTargeting_Statics::NewProp_OwningAbility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_VisualizeTargeting_VisualizeTargeting_Statics::NewProp_Class,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_VisualizeTargeting_VisualizeTargeting_Statics::NewProp_TaskInstanceName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_VisualizeTargeting_VisualizeTargeting_Statics::NewProp_Duration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_VisualizeTargeting_VisualizeTargeting_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_VisualizeTargeting_VisualizeTargeting_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityTask_VisualizeTargeting_VisualizeTargeting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityTask_VisualizeTargeting, nullptr, "VisualizeTargeting", nullptr, nullptr, Z_Construct_UFunction_UAbilityTask_VisualizeTargeting_VisualizeTargeting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_VisualizeTargeting_VisualizeTargeting_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAbilityTask_VisualizeTargeting_VisualizeTargeting_Statics::AbilityTask_VisualizeTargeting_eventVisualizeTargeting_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_VisualizeTargeting_VisualizeTargeting_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilityTask_VisualizeTargeting_VisualizeTargeting_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAbilityTask_VisualizeTargeting_VisualizeTargeting_Statics::AbilityTask_VisualizeTargeting_eventVisualizeTargeting_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbilityTask_VisualizeTargeting_VisualizeTargeting()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityTask_VisualizeTargeting_VisualizeTargeting_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilityTask_VisualizeTargeting::execVisualizeTargeting)
{
	P_GET_OBJECT(UGameplayAbility,Z_Param_OwningAbility);
	P_GET_OBJECT(UClass,Z_Param_Class);
	P_GET_PROPERTY(FNameProperty,Z_Param_TaskInstanceName);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAbilityTask_VisualizeTargeting**)Z_Param__Result=UAbilityTask_VisualizeTargeting::VisualizeTargeting(Z_Param_OwningAbility,Z_Param_Class,Z_Param_TaskInstanceName,Z_Param_Duration);
	P_NATIVE_END;
}
// End Class UAbilityTask_VisualizeTargeting Function VisualizeTargeting

// Begin Class UAbilityTask_VisualizeTargeting Function VisualizeTargetingUsingActor
struct Z_Construct_UFunction_UAbilityTask_VisualizeTargeting_VisualizeTargetingUsingActor_Statics
{
	struct AbilityTask_VisualizeTargeting_eventVisualizeTargetingUsingActor_Parms
	{
		UGameplayAbility* OwningAbility;
		AGameplayAbilityTargetActor* TargetActor;
		FName TaskInstanceName;
		float Duration;
		UAbilityTask_VisualizeTargeting* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Ability|Tasks" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Visualize target using a specified target actor. */" },
#endif
		{ "CPP_Default_Duration", "-1.000000" },
		{ "DefaultToSelf", "OwningAbility" },
		{ "HidePin", "OwningAbility" },
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_VisualizeTargeting.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Visualize target using a specified target actor." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningAbility;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TaskInstanceName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_VisualizeTargeting_VisualizeTargetingUsingActor_Statics::NewProp_OwningAbility = { "OwningAbility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_VisualizeTargeting_eventVisualizeTargetingUsingActor_Parms, OwningAbility), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_VisualizeTargeting_VisualizeTargetingUsingActor_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_VisualizeTargeting_eventVisualizeTargetingUsingActor_Parms, TargetActor), Z_Construct_UClass_AGameplayAbilityTargetActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAbilityTask_VisualizeTargeting_VisualizeTargetingUsingActor_Statics::NewProp_TaskInstanceName = { "TaskInstanceName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_VisualizeTargeting_eventVisualizeTargetingUsingActor_Parms, TaskInstanceName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAbilityTask_VisualizeTargeting_VisualizeTargetingUsingActor_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_VisualizeTargeting_eventVisualizeTargetingUsingActor_Parms, Duration), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_VisualizeTargeting_VisualizeTargetingUsingActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_VisualizeTargeting_eventVisualizeTargetingUsingActor_Parms, ReturnValue), Z_Construct_UClass_UAbilityTask_VisualizeTargeting_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityTask_VisualizeTargeting_VisualizeTargetingUsingActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_VisualizeTargeting_VisualizeTargetingUsingActor_Statics::NewProp_OwningAbility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_VisualizeTargeting_VisualizeTargetingUsingActor_Statics::NewProp_TargetActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_VisualizeTargeting_VisualizeTargetingUsingActor_Statics::NewProp_TaskInstanceName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_VisualizeTargeting_VisualizeTargetingUsingActor_Statics::NewProp_Duration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_VisualizeTargeting_VisualizeTargetingUsingActor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_VisualizeTargeting_VisualizeTargetingUsingActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityTask_VisualizeTargeting_VisualizeTargetingUsingActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityTask_VisualizeTargeting, nullptr, "VisualizeTargetingUsingActor", nullptr, nullptr, Z_Construct_UFunction_UAbilityTask_VisualizeTargeting_VisualizeTargetingUsingActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_VisualizeTargeting_VisualizeTargetingUsingActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAbilityTask_VisualizeTargeting_VisualizeTargetingUsingActor_Statics::AbilityTask_VisualizeTargeting_eventVisualizeTargetingUsingActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_VisualizeTargeting_VisualizeTargetingUsingActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilityTask_VisualizeTargeting_VisualizeTargetingUsingActor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAbilityTask_VisualizeTargeting_VisualizeTargetingUsingActor_Statics::AbilityTask_VisualizeTargeting_eventVisualizeTargetingUsingActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbilityTask_VisualizeTargeting_VisualizeTargetingUsingActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityTask_VisualizeTargeting_VisualizeTargetingUsingActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilityTask_VisualizeTargeting::execVisualizeTargetingUsingActor)
{
	P_GET_OBJECT(UGameplayAbility,Z_Param_OwningAbility);
	P_GET_OBJECT(AGameplayAbilityTargetActor,Z_Param_TargetActor);
	P_GET_PROPERTY(FNameProperty,Z_Param_TaskInstanceName);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAbilityTask_VisualizeTargeting**)Z_Param__Result=UAbilityTask_VisualizeTargeting::VisualizeTargetingUsingActor(Z_Param_OwningAbility,Z_Param_TargetActor,Z_Param_TaskInstanceName,Z_Param_Duration);
	P_NATIVE_END;
}
// End Class UAbilityTask_VisualizeTargeting Function VisualizeTargetingUsingActor

// Begin Class UAbilityTask_VisualizeTargeting
void UAbilityTask_VisualizeTargeting::StaticRegisterNativesUAbilityTask_VisualizeTargeting()
{
	UClass* Class = UAbilityTask_VisualizeTargeting::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BeginSpawningActor", &UAbilityTask_VisualizeTargeting::execBeginSpawningActor },
		{ "FinishSpawningActor", &UAbilityTask_VisualizeTargeting::execFinishSpawningActor },
		{ "VisualizeTargeting", &UAbilityTask_VisualizeTargeting::execVisualizeTargeting },
		{ "VisualizeTargetingUsingActor", &UAbilityTask_VisualizeTargeting::execVisualizeTargetingUsingActor },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAbilityTask_VisualizeTargeting);
UClass* Z_Construct_UClass_UAbilityTask_VisualizeTargeting_NoRegister()
{
	return UAbilityTask_VisualizeTargeting::StaticClass();
}
struct Z_Construct_UClass_UAbilityTask_VisualizeTargeting_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Abilities/Tasks/AbilityTask_VisualizeTargeting.h" },
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_VisualizeTargeting.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeElapsed_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_VisualizeTargeting.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_TimeElapsed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAbilityTask_VisualizeTargeting_BeginSpawningActor, "BeginSpawningActor" }, // 439979393
		{ &Z_Construct_UFunction_UAbilityTask_VisualizeTargeting_FinishSpawningActor, "FinishSpawningActor" }, // 79892111
		{ &Z_Construct_UFunction_UAbilityTask_VisualizeTargeting_VisualizeTargeting, "VisualizeTargeting" }, // 2500967385
		{ &Z_Construct_UFunction_UAbilityTask_VisualizeTargeting_VisualizeTargetingUsingActor, "VisualizeTargetingUsingActor" }, // 4084059902
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAbilityTask_VisualizeTargeting>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAbilityTask_VisualizeTargeting_Statics::NewProp_TimeElapsed = { "TimeElapsed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityTask_VisualizeTargeting, TimeElapsed), Z_Construct_UDelegateFunction_GameplayAbilities_VisualizeTargetingDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeElapsed_MetaData), NewProp_TimeElapsed_MetaData) }; // 1769798834
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAbilityTask_VisualizeTargeting_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_VisualizeTargeting_Statics::NewProp_TimeElapsed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_VisualizeTargeting_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAbilityTask_VisualizeTargeting_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAbilityTask,
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_VisualizeTargeting_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAbilityTask_VisualizeTargeting_Statics::ClassParams = {
	&UAbilityTask_VisualizeTargeting::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAbilityTask_VisualizeTargeting_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_VisualizeTargeting_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_VisualizeTargeting_Statics::Class_MetaDataParams), Z_Construct_UClass_UAbilityTask_VisualizeTargeting_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAbilityTask_VisualizeTargeting()
{
	if (!Z_Registration_Info_UClass_UAbilityTask_VisualizeTargeting.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAbilityTask_VisualizeTargeting.OuterSingleton, Z_Construct_UClass_UAbilityTask_VisualizeTargeting_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAbilityTask_VisualizeTargeting.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UClass* StaticClass<UAbilityTask_VisualizeTargeting>()
{
	return UAbilityTask_VisualizeTargeting::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAbilityTask_VisualizeTargeting);
UAbilityTask_VisualizeTargeting::~UAbilityTask_VisualizeTargeting() {}
// End Class UAbilityTask_VisualizeTargeting

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_VisualizeTargeting_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAbilityTask_VisualizeTargeting, UAbilityTask_VisualizeTargeting::StaticClass, TEXT("UAbilityTask_VisualizeTargeting"), &Z_Registration_Info_UClass_UAbilityTask_VisualizeTargeting, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAbilityTask_VisualizeTargeting), 3967312146U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_VisualizeTargeting_h_115766489(TEXT("/Script/GameplayAbilities"),
	Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_VisualizeTargeting_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_VisualizeTargeting_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
