// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayAbilities/Public/Abilities/Tasks/AbilityTask_ApplyRootMotionRadialForce.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbilityTask_ApplyRootMotionRadialForce() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERootMotionFinishVelocityMode();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask_ApplyRootMotion_Base();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask_ApplyRootMotionRadialForce();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask_ApplyRootMotionRadialForce_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
GAMEPLAYABILITIES_API UFunction* Z_Construct_UDelegateFunction_GameplayAbilities_ApplyRootMotionRadialForceDelegate__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_GameplayAbilities();
// End Cross Module References

// Begin Delegate FApplyRootMotionRadialForceDelegate
struct Z_Construct_UDelegateFunction_GameplayAbilities_ApplyRootMotionRadialForceDelegate__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_ApplyRootMotionRadialForce.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GameplayAbilities_ApplyRootMotionRadialForceDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GameplayAbilities, nullptr, "ApplyRootMotionRadialForceDelegate__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameplayAbilities_ApplyRootMotionRadialForceDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_GameplayAbilities_ApplyRootMotionRadialForceDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_GameplayAbilities_ApplyRootMotionRadialForceDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_GameplayAbilities_ApplyRootMotionRadialForceDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FApplyRootMotionRadialForceDelegate_DelegateWrapper(const FMulticastScriptDelegate& ApplyRootMotionRadialForceDelegate)
{
	ApplyRootMotionRadialForceDelegate.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FApplyRootMotionRadialForceDelegate

// Begin Class UAbilityTask_ApplyRootMotionRadialForce Function ApplyRootMotionRadialForce
struct Z_Construct_UFunction_UAbilityTask_ApplyRootMotionRadialForce_ApplyRootMotionRadialForce_Statics
{
	struct AbilityTask_ApplyRootMotionRadialForce_eventApplyRootMotionRadialForce_Parms
	{
		UGameplayAbility* OwningAbility;
		FName TaskInstanceName;
		FVector Location;
		AActor* LocationActor;
		float Strength;
		float Duration;
		float Radius;
		bool bIsPush;
		bool bIsAdditive;
		bool bNoZForce;
		UCurveFloat* StrengthDistanceFalloff;
		UCurveFloat* StrengthOverTime;
		bool bUseFixedWorldDirection;
		FRotator FixedWorldDirection;
		ERootMotionFinishVelocityMode VelocityOnFinishMode;
		FVector SetVelocityOnFinish;
		float ClampVelocityOnFinish;
		UAbilityTask_ApplyRootMotionRadialForce* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "TRUE" },
		{ "Category", "Ability|Tasks" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Apply force to character's movement */" },
#endif
		{ "DefaultToSelf", "OwningAbility" },
		{ "HidePin", "OwningAbility" },
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_ApplyRootMotionRadialForce.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Apply force to character's movement" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningAbility;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TaskInstanceName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LocationActor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Strength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static void NewProp_bIsPush_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsPush;
	static void NewProp_bIsAdditive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsAdditive;
	static void NewProp_bNoZForce_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNoZForce;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StrengthDistanceFalloff;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StrengthOverTime;
	static void NewProp_bUseFixedWorldDirection_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseFixedWorldDirection;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FixedWorldDirection;
	static const UECodeGen_Private::FBytePropertyParams NewProp_VelocityOnFinishMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_VelocityOnFinishMode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SetVelocityOnFinish;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ClampVelocityOnFinish;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_ApplyRootMotionRadialForce_ApplyRootMotionRadialForce_Statics::NewProp_OwningAbility = { "OwningAbility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_ApplyRootMotionRadialForce_eventApplyRootMotionRadialForce_Parms, OwningAbility), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAbilityTask_ApplyRootMotionRadialForce_ApplyRootMotionRadialForce_Statics::NewProp_TaskInstanceName = { "TaskInstanceName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_ApplyRootMotionRadialForce_eventApplyRootMotionRadialForce_Parms, TaskInstanceName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbilityTask_ApplyRootMotionRadialForce_ApplyRootMotionRadialForce_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_ApplyRootMotionRadialForce_eventApplyRootMotionRadialForce_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_ApplyRootMotionRadialForce_ApplyRootMotionRadialForce_Statics::NewProp_LocationActor = { "LocationActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_ApplyRootMotionRadialForce_eventApplyRootMotionRadialForce_Parms, LocationActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAbilityTask_ApplyRootMotionRadialForce_ApplyRootMotionRadialForce_Statics::NewProp_Strength = { "Strength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_ApplyRootMotionRadialForce_eventApplyRootMotionRadialForce_Parms, Strength), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAbilityTask_ApplyRootMotionRadialForce_ApplyRootMotionRadialForce_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_ApplyRootMotionRadialForce_eventApplyRootMotionRadialForce_Parms, Duration), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAbilityTask_ApplyRootMotionRadialForce_ApplyRootMotionRadialForce_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_ApplyRootMotionRadialForce_eventApplyRootMotionRadialForce_Parms, Radius), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAbilityTask_ApplyRootMotionRadialForce_ApplyRootMotionRadialForce_Statics::NewProp_bIsPush_SetBit(void* Obj)
{
	((AbilityTask_ApplyRootMotionRadialForce_eventApplyRootMotionRadialForce_Parms*)Obj)->bIsPush = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAbilityTask_ApplyRootMotionRadialForce_ApplyRootMotionRadialForce_Statics::NewProp_bIsPush = { "bIsPush", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AbilityTask_ApplyRootMotionRadialForce_eventApplyRootMotionRadialForce_Parms), &Z_Construct_UFunction_UAbilityTask_ApplyRootMotionRadialForce_ApplyRootMotionRadialForce_Statics::NewProp_bIsPush_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAbilityTask_ApplyRootMotionRadialForce_ApplyRootMotionRadialForce_Statics::NewProp_bIsAdditive_SetBit(void* Obj)
{
	((AbilityTask_ApplyRootMotionRadialForce_eventApplyRootMotionRadialForce_Parms*)Obj)->bIsAdditive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAbilityTask_ApplyRootMotionRadialForce_ApplyRootMotionRadialForce_Statics::NewProp_bIsAdditive = { "bIsAdditive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AbilityTask_ApplyRootMotionRadialForce_eventApplyRootMotionRadialForce_Parms), &Z_Construct_UFunction_UAbilityTask_ApplyRootMotionRadialForce_ApplyRootMotionRadialForce_Statics::NewProp_bIsAdditive_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAbilityTask_ApplyRootMotionRadialForce_ApplyRootMotionRadialForce_Statics::NewProp_bNoZForce_SetBit(void* Obj)
{
	((AbilityTask_ApplyRootMotionRadialForce_eventApplyRootMotionRadialForce_Parms*)Obj)->bNoZForce = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAbilityTask_ApplyRootMotionRadialForce_ApplyRootMotionRadialForce_Statics::NewProp_bNoZForce = { "bNoZForce", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AbilityTask_ApplyRootMotionRadialForce_eventApplyRootMotionRadialForce_Parms), &Z_Construct_UFunction_UAbilityTask_ApplyRootMotionRadialForce_ApplyRootMotionRadialForce_Statics::NewProp_bNoZForce_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_ApplyRootMotionRadialForce_ApplyRootMotionRadialForce_Statics::NewProp_StrengthDistanceFalloff = { "StrengthDistanceFalloff", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_ApplyRootMotionRadialForce_eventApplyRootMotionRadialForce_Parms, StrengthDistanceFalloff), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_ApplyRootMotionRadialForce_ApplyRootMotionRadialForce_Statics::NewProp_StrengthOverTime = { "StrengthOverTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_ApplyRootMotionRadialForce_eventApplyRootMotionRadialForce_Parms, StrengthOverTime), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAbilityTask_ApplyRootMotionRadialForce_ApplyRootMotionRadialForce_Statics::NewProp_bUseFixedWorldDirection_SetBit(void* Obj)
{
	((AbilityTask_ApplyRootMotionRadialForce_eventApplyRootMotionRadialForce_Parms*)Obj)->bUseFixedWorldDirection = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAbilityTask_ApplyRootMotionRadialForce_ApplyRootMotionRadialForce_Statics::NewProp_bUseFixedWorldDirection = { "bUseFixedWorldDirection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AbilityTask_ApplyRootMotionRadialForce_eventApplyRootMotionRadialForce_Parms), &Z_Construct_UFunction_UAbilityTask_ApplyRootMotionRadialForce_ApplyRootMotionRadialForce_Statics::NewProp_bUseFixedWorldDirection_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbilityTask_ApplyRootMotionRadialForce_ApplyRootMotionRadialForce_Statics::NewProp_FixedWorldDirection = { "FixedWorldDirection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_ApplyRootMotionRadialForce_eventApplyRootMotionRadialForce_Parms, FixedWorldDirection), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAbilityTask_ApplyRootMotionRadialForce_ApplyRootMotionRadialForce_Statics::NewProp_VelocityOnFinishMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAbilityTask_ApplyRootMotionRadialForce_ApplyRootMotionRadialForce_Statics::NewProp_VelocityOnFinishMode = { "VelocityOnFinishMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_ApplyRootMotionRadialForce_eventApplyRootMotionRadialForce_Parms, VelocityOnFinishMode), Z_Construct_UEnum_Engine_ERootMotionFinishVelocityMode, METADATA_PARAMS(0, nullptr) }; // 754916493
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbilityTask_ApplyRootMotionRadialForce_ApplyRootMotionRadialForce_Statics::NewProp_SetVelocityOnFinish = { "SetVelocityOnFinish", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_ApplyRootMotionRadialForce_eventApplyRootMotionRadialForce_Parms, SetVelocityOnFinish), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAbilityTask_ApplyRootMotionRadialForce_ApplyRootMotionRadialForce_Statics::NewProp_ClampVelocityOnFinish = { "ClampVelocityOnFinish", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_ApplyRootMotionRadialForce_eventApplyRootMotionRadialForce_Parms, ClampVelocityOnFinish), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_ApplyRootMotionRadialForce_ApplyRootMotionRadialForce_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_ApplyRootMotionRadialForce_eventApplyRootMotionRadialForce_Parms, ReturnValue), Z_Construct_UClass_UAbilityTask_ApplyRootMotionRadialForce_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityTask_ApplyRootMotionRadialForce_ApplyRootMotionRadialForce_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_ApplyRootMotionRadialForce_ApplyRootMotionRadialForce_Statics::NewProp_OwningAbility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_ApplyRootMotionRadialForce_ApplyRootMotionRadialForce_Statics::NewProp_TaskInstanceName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_ApplyRootMotionRadialForce_ApplyRootMotionRadialForce_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_ApplyRootMotionRadialForce_ApplyRootMotionRadialForce_Statics::NewProp_LocationActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_ApplyRootMotionRadialForce_ApplyRootMotionRadialForce_Statics::NewProp_Strength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_ApplyRootMotionRadialForce_ApplyRootMotionRadialForce_Statics::NewProp_Duration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_ApplyRootMotionRadialForce_ApplyRootMotionRadialForce_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_ApplyRootMotionRadialForce_ApplyRootMotionRadialForce_Statics::NewProp_bIsPush,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_ApplyRootMotionRadialForce_ApplyRootMotionRadialForce_Statics::NewProp_bIsAdditive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_ApplyRootMotionRadialForce_ApplyRootMotionRadialForce_Statics::NewProp_bNoZForce,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_ApplyRootMotionRadialForce_ApplyRootMotionRadialForce_Statics::NewProp_StrengthDistanceFalloff,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_ApplyRootMotionRadialForce_ApplyRootMotionRadialForce_Statics::NewProp_StrengthOverTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_ApplyRootMotionRadialForce_ApplyRootMotionRadialForce_Statics::NewProp_bUseFixedWorldDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_ApplyRootMotionRadialForce_ApplyRootMotionRadialForce_Statics::NewProp_FixedWorldDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_ApplyRootMotionRadialForce_ApplyRootMotionRadialForce_Statics::NewProp_VelocityOnFinishMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_ApplyRootMotionRadialForce_ApplyRootMotionRadialForce_Statics::NewProp_VelocityOnFinishMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_ApplyRootMotionRadialForce_ApplyRootMotionRadialForce_Statics::NewProp_SetVelocityOnFinish,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_ApplyRootMotionRadialForce_ApplyRootMotionRadialForce_Statics::NewProp_ClampVelocityOnFinish,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_ApplyRootMotionRadialForce_ApplyRootMotionRadialForce_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_ApplyRootMotionRadialForce_ApplyRootMotionRadialForce_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityTask_ApplyRootMotionRadialForce_ApplyRootMotionRadialForce_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityTask_ApplyRootMotionRadialForce, nullptr, "ApplyRootMotionRadialForce", nullptr, nullptr, Z_Construct_UFunction_UAbilityTask_ApplyRootMotionRadialForce_ApplyRootMotionRadialForce_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_ApplyRootMotionRadialForce_ApplyRootMotionRadialForce_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAbilityTask_ApplyRootMotionRadialForce_ApplyRootMotionRadialForce_Statics::AbilityTask_ApplyRootMotionRadialForce_eventApplyRootMotionRadialForce_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_ApplyRootMotionRadialForce_ApplyRootMotionRadialForce_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilityTask_ApplyRootMotionRadialForce_ApplyRootMotionRadialForce_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAbilityTask_ApplyRootMotionRadialForce_ApplyRootMotionRadialForce_Statics::AbilityTask_ApplyRootMotionRadialForce_eventApplyRootMotionRadialForce_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbilityTask_ApplyRootMotionRadialForce_ApplyRootMotionRadialForce()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityTask_ApplyRootMotionRadialForce_ApplyRootMotionRadialForce_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilityTask_ApplyRootMotionRadialForce::execApplyRootMotionRadialForce)
{
	P_GET_OBJECT(UGameplayAbility,Z_Param_OwningAbility);
	P_GET_PROPERTY(FNameProperty,Z_Param_TaskInstanceName);
	P_GET_STRUCT(FVector,Z_Param_Location);
	P_GET_OBJECT(AActor,Z_Param_LocationActor);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Strength);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
	P_GET_UBOOL(Z_Param_bIsPush);
	P_GET_UBOOL(Z_Param_bIsAdditive);
	P_GET_UBOOL(Z_Param_bNoZForce);
	P_GET_OBJECT(UCurveFloat,Z_Param_StrengthDistanceFalloff);
	P_GET_OBJECT(UCurveFloat,Z_Param_StrengthOverTime);
	P_GET_UBOOL(Z_Param_bUseFixedWorldDirection);
	P_GET_STRUCT(FRotator,Z_Param_FixedWorldDirection);
	P_GET_ENUM(ERootMotionFinishVelocityMode,Z_Param_VelocityOnFinishMode);
	P_GET_STRUCT(FVector,Z_Param_SetVelocityOnFinish);
	P_GET_PROPERTY(FFloatProperty,Z_Param_ClampVelocityOnFinish);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAbilityTask_ApplyRootMotionRadialForce**)Z_Param__Result=UAbilityTask_ApplyRootMotionRadialForce::ApplyRootMotionRadialForce(Z_Param_OwningAbility,Z_Param_TaskInstanceName,Z_Param_Location,Z_Param_LocationActor,Z_Param_Strength,Z_Param_Duration,Z_Param_Radius,Z_Param_bIsPush,Z_Param_bIsAdditive,Z_Param_bNoZForce,Z_Param_StrengthDistanceFalloff,Z_Param_StrengthOverTime,Z_Param_bUseFixedWorldDirection,Z_Param_FixedWorldDirection,ERootMotionFinishVelocityMode(Z_Param_VelocityOnFinishMode),Z_Param_SetVelocityOnFinish,Z_Param_ClampVelocityOnFinish);
	P_NATIVE_END;
}
// End Class UAbilityTask_ApplyRootMotionRadialForce Function ApplyRootMotionRadialForce

// Begin Class UAbilityTask_ApplyRootMotionRadialForce
void UAbilityTask_ApplyRootMotionRadialForce::StaticRegisterNativesUAbilityTask_ApplyRootMotionRadialForce()
{
	UClass* Class = UAbilityTask_ApplyRootMotionRadialForce::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ApplyRootMotionRadialForce", &UAbilityTask_ApplyRootMotionRadialForce::execApplyRootMotionRadialForce },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAbilityTask_ApplyRootMotionRadialForce);
UClass* Z_Construct_UClass_UAbilityTask_ApplyRootMotionRadialForce_NoRegister()
{
	return UAbilityTask_ApplyRootMotionRadialForce::StaticClass();
}
struct Z_Construct_UClass_UAbilityTask_ApplyRootMotionRadialForce_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\x09""Applies force to character's movement\n */" },
#endif
		{ "IncludePath", "Abilities/Tasks/AbilityTask_ApplyRootMotionRadialForce.h" },
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_ApplyRootMotionRadialForce.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Applies force to character's movement" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFinish_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_ApplyRootMotionRadialForce.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_ApplyRootMotionRadialForce.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocationActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_ApplyRootMotionRadialForce.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Strength_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_ApplyRootMotionRadialForce.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_ApplyRootMotionRadialForce.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_ApplyRootMotionRadialForce.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsPush_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_ApplyRootMotionRadialForce.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsAdditive_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_ApplyRootMotionRadialForce.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bNoZForce_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_ApplyRootMotionRadialForce.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StrengthDistanceFalloff_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n\x09 *  Strength of the force over distance to Location\n\x09 *  Curve Y is 0 to 1 which is percent of full Strength parameter to apply\n\x09 *  Curve X is 0 to 1 normalized distance (0 = 0cm, 1 = what Strength % at Radius units out)\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_ApplyRootMotionRadialForce.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Strength of the force over distance to Location\nCurve Y is 0 to 1 which is percent of full Strength parameter to apply\nCurve X is 0 to 1 normalized distance (0 = 0cm, 1 = what Strength % at Radius units out)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StrengthOverTime_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n\x09 *  Strength of the force over time\n\x09 *  Curve Y is 0 to 1 which is percent of full Strength parameter to apply\n\x09 *  Curve X is 0 to 1 normalized time if this force has a limited duration (Duration > 0), or\n\x09 *          is in units of seconds if this force has unlimited duration (Duration < 0)\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_ApplyRootMotionRadialForce.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Strength of the force over time\nCurve Y is 0 to 1 which is percent of full Strength parameter to apply\nCurve X is 0 to 1 normalized time if this force has a limited duration (Duration > 0), or\n        is in units of seconds if this force has unlimited duration (Duration < 0)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseFixedWorldDirection_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_ApplyRootMotionRadialForce.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FixedWorldDirection_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_ApplyRootMotionRadialForce.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFinish;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LocationActor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Strength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static void NewProp_bIsPush_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsPush;
	static void NewProp_bIsAdditive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsAdditive;
	static void NewProp_bNoZForce_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNoZForce;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StrengthDistanceFalloff;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StrengthOverTime;
	static void NewProp_bUseFixedWorldDirection_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseFixedWorldDirection;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FixedWorldDirection;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAbilityTask_ApplyRootMotionRadialForce_ApplyRootMotionRadialForce, "ApplyRootMotionRadialForce" }, // 2342615348
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAbilityTask_ApplyRootMotionRadialForce>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAbilityTask_ApplyRootMotionRadialForce_Statics::NewProp_OnFinish = { "OnFinish", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityTask_ApplyRootMotionRadialForce, OnFinish), Z_Construct_UDelegateFunction_GameplayAbilities_ApplyRootMotionRadialForceDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFinish_MetaData), NewProp_OnFinish_MetaData) }; // 2073042083
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAbilityTask_ApplyRootMotionRadialForce_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0020080000000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityTask_ApplyRootMotionRadialForce, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAbilityTask_ApplyRootMotionRadialForce_Statics::NewProp_LocationActor = { "LocationActor", nullptr, (EPropertyFlags)0x0124080000000020, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityTask_ApplyRootMotionRadialForce, LocationActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocationActor_MetaData), NewProp_LocationActor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAbilityTask_ApplyRootMotionRadialForce_Statics::NewProp_Strength = { "Strength", nullptr, (EPropertyFlags)0x0020080000000020, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityTask_ApplyRootMotionRadialForce, Strength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Strength_MetaData), NewProp_Strength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAbilityTask_ApplyRootMotionRadialForce_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0020080000000020, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityTask_ApplyRootMotionRadialForce, Duration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Duration_MetaData), NewProp_Duration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAbilityTask_ApplyRootMotionRadialForce_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0020080000000020, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityTask_ApplyRootMotionRadialForce, Radius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Radius_MetaData), NewProp_Radius_MetaData) };
void Z_Construct_UClass_UAbilityTask_ApplyRootMotionRadialForce_Statics::NewProp_bIsPush_SetBit(void* Obj)
{
	((UAbilityTask_ApplyRootMotionRadialForce*)Obj)->bIsPush = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAbilityTask_ApplyRootMotionRadialForce_Statics::NewProp_bIsPush = { "bIsPush", nullptr, (EPropertyFlags)0x0020080000000020, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAbilityTask_ApplyRootMotionRadialForce), &Z_Construct_UClass_UAbilityTask_ApplyRootMotionRadialForce_Statics::NewProp_bIsPush_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsPush_MetaData), NewProp_bIsPush_MetaData) };
void Z_Construct_UClass_UAbilityTask_ApplyRootMotionRadialForce_Statics::NewProp_bIsAdditive_SetBit(void* Obj)
{
	((UAbilityTask_ApplyRootMotionRadialForce*)Obj)->bIsAdditive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAbilityTask_ApplyRootMotionRadialForce_Statics::NewProp_bIsAdditive = { "bIsAdditive", nullptr, (EPropertyFlags)0x0020080000000020, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAbilityTask_ApplyRootMotionRadialForce), &Z_Construct_UClass_UAbilityTask_ApplyRootMotionRadialForce_Statics::NewProp_bIsAdditive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsAdditive_MetaData), NewProp_bIsAdditive_MetaData) };
void Z_Construct_UClass_UAbilityTask_ApplyRootMotionRadialForce_Statics::NewProp_bNoZForce_SetBit(void* Obj)
{
	((UAbilityTask_ApplyRootMotionRadialForce*)Obj)->bNoZForce = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAbilityTask_ApplyRootMotionRadialForce_Statics::NewProp_bNoZForce = { "bNoZForce", nullptr, (EPropertyFlags)0x0020080000000020, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAbilityTask_ApplyRootMotionRadialForce), &Z_Construct_UClass_UAbilityTask_ApplyRootMotionRadialForce_Statics::NewProp_bNoZForce_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bNoZForce_MetaData), NewProp_bNoZForce_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAbilityTask_ApplyRootMotionRadialForce_Statics::NewProp_StrengthDistanceFalloff = { "StrengthDistanceFalloff", nullptr, (EPropertyFlags)0x0124080000000020, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityTask_ApplyRootMotionRadialForce, StrengthDistanceFalloff), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StrengthDistanceFalloff_MetaData), NewProp_StrengthDistanceFalloff_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAbilityTask_ApplyRootMotionRadialForce_Statics::NewProp_StrengthOverTime = { "StrengthOverTime", nullptr, (EPropertyFlags)0x0124080000000020, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityTask_ApplyRootMotionRadialForce, StrengthOverTime), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StrengthOverTime_MetaData), NewProp_StrengthOverTime_MetaData) };
void Z_Construct_UClass_UAbilityTask_ApplyRootMotionRadialForce_Statics::NewProp_bUseFixedWorldDirection_SetBit(void* Obj)
{
	((UAbilityTask_ApplyRootMotionRadialForce*)Obj)->bUseFixedWorldDirection = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAbilityTask_ApplyRootMotionRadialForce_Statics::NewProp_bUseFixedWorldDirection = { "bUseFixedWorldDirection", nullptr, (EPropertyFlags)0x0020080000000020, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAbilityTask_ApplyRootMotionRadialForce), &Z_Construct_UClass_UAbilityTask_ApplyRootMotionRadialForce_Statics::NewProp_bUseFixedWorldDirection_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseFixedWorldDirection_MetaData), NewProp_bUseFixedWorldDirection_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAbilityTask_ApplyRootMotionRadialForce_Statics::NewProp_FixedWorldDirection = { "FixedWorldDirection", nullptr, (EPropertyFlags)0x0020080000000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityTask_ApplyRootMotionRadialForce, FixedWorldDirection), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FixedWorldDirection_MetaData), NewProp_FixedWorldDirection_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAbilityTask_ApplyRootMotionRadialForce_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_ApplyRootMotionRadialForce_Statics::NewProp_OnFinish,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_ApplyRootMotionRadialForce_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_ApplyRootMotionRadialForce_Statics::NewProp_LocationActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_ApplyRootMotionRadialForce_Statics::NewProp_Strength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_ApplyRootMotionRadialForce_Statics::NewProp_Duration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_ApplyRootMotionRadialForce_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_ApplyRootMotionRadialForce_Statics::NewProp_bIsPush,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_ApplyRootMotionRadialForce_Statics::NewProp_bIsAdditive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_ApplyRootMotionRadialForce_Statics::NewProp_bNoZForce,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_ApplyRootMotionRadialForce_Statics::NewProp_StrengthDistanceFalloff,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_ApplyRootMotionRadialForce_Statics::NewProp_StrengthOverTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_ApplyRootMotionRadialForce_Statics::NewProp_bUseFixedWorldDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_ApplyRootMotionRadialForce_Statics::NewProp_FixedWorldDirection,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_ApplyRootMotionRadialForce_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAbilityTask_ApplyRootMotionRadialForce_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAbilityTask_ApplyRootMotion_Base,
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_ApplyRootMotionRadialForce_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAbilityTask_ApplyRootMotionRadialForce_Statics::ClassParams = {
	&UAbilityTask_ApplyRootMotionRadialForce::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAbilityTask_ApplyRootMotionRadialForce_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_ApplyRootMotionRadialForce_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_ApplyRootMotionRadialForce_Statics::Class_MetaDataParams), Z_Construct_UClass_UAbilityTask_ApplyRootMotionRadialForce_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAbilityTask_ApplyRootMotionRadialForce()
{
	if (!Z_Registration_Info_UClass_UAbilityTask_ApplyRootMotionRadialForce.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAbilityTask_ApplyRootMotionRadialForce.OuterSingleton, Z_Construct_UClass_UAbilityTask_ApplyRootMotionRadialForce_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAbilityTask_ApplyRootMotionRadialForce.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UClass* StaticClass<UAbilityTask_ApplyRootMotionRadialForce>()
{
	return UAbilityTask_ApplyRootMotionRadialForce::StaticClass();
}
void UAbilityTask_ApplyRootMotionRadialForce::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_Location(TEXT("Location"));
	static const FName Name_LocationActor(TEXT("LocationActor"));
	static const FName Name_Strength(TEXT("Strength"));
	static const FName Name_Duration(TEXT("Duration"));
	static const FName Name_Radius(TEXT("Radius"));
	static const FName Name_bIsPush(TEXT("bIsPush"));
	static const FName Name_bIsAdditive(TEXT("bIsAdditive"));
	static const FName Name_bNoZForce(TEXT("bNoZForce"));
	static const FName Name_StrengthDistanceFalloff(TEXT("StrengthDistanceFalloff"));
	static const FName Name_StrengthOverTime(TEXT("StrengthOverTime"));
	static const FName Name_bUseFixedWorldDirection(TEXT("bUseFixedWorldDirection"));
	static const FName Name_FixedWorldDirection(TEXT("FixedWorldDirection"));
	const bool bIsValid = true
		&& Name_Location == ClassReps[(int32)ENetFields_Private::Location].Property->GetFName()
		&& Name_LocationActor == ClassReps[(int32)ENetFields_Private::LocationActor].Property->GetFName()
		&& Name_Strength == ClassReps[(int32)ENetFields_Private::Strength].Property->GetFName()
		&& Name_Duration == ClassReps[(int32)ENetFields_Private::Duration].Property->GetFName()
		&& Name_Radius == ClassReps[(int32)ENetFields_Private::Radius].Property->GetFName()
		&& Name_bIsPush == ClassReps[(int32)ENetFields_Private::bIsPush].Property->GetFName()
		&& Name_bIsAdditive == ClassReps[(int32)ENetFields_Private::bIsAdditive].Property->GetFName()
		&& Name_bNoZForce == ClassReps[(int32)ENetFields_Private::bNoZForce].Property->GetFName()
		&& Name_StrengthDistanceFalloff == ClassReps[(int32)ENetFields_Private::StrengthDistanceFalloff].Property->GetFName()
		&& Name_StrengthOverTime == ClassReps[(int32)ENetFields_Private::StrengthOverTime].Property->GetFName()
		&& Name_bUseFixedWorldDirection == ClassReps[(int32)ENetFields_Private::bUseFixedWorldDirection].Property->GetFName()
		&& Name_FixedWorldDirection == ClassReps[(int32)ENetFields_Private::FixedWorldDirection].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UAbilityTask_ApplyRootMotionRadialForce"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAbilityTask_ApplyRootMotionRadialForce);
UAbilityTask_ApplyRootMotionRadialForce::~UAbilityTask_ApplyRootMotionRadialForce() {}
// End Class UAbilityTask_ApplyRootMotionRadialForce

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionRadialForce_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAbilityTask_ApplyRootMotionRadialForce, UAbilityTask_ApplyRootMotionRadialForce::StaticClass, TEXT("UAbilityTask_ApplyRootMotionRadialForce"), &Z_Registration_Info_UClass_UAbilityTask_ApplyRootMotionRadialForce, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAbilityTask_ApplyRootMotionRadialForce), 3027158000U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionRadialForce_h_225532483(TEXT("/Script/GameplayAbilities"),
	Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionRadialForce_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionRadialForce_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
