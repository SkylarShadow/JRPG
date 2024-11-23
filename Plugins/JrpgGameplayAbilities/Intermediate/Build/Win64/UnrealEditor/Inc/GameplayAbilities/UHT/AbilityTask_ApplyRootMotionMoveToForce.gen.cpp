// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayAbilities/Public/Abilities/Tasks/AbilityTask_ApplyRootMotionMoveToForce.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbilityTask_ApplyRootMotionMoveToForce() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UCurveVector_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMovementMode();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERootMotionFinishVelocityMode();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask_ApplyRootMotion_Base();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask_ApplyRootMotionMoveToForce();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask_ApplyRootMotionMoveToForce_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
GAMEPLAYABILITIES_API UFunction* Z_Construct_UDelegateFunction_GameplayAbilities_ApplyRootMotionMoveToForceDelegate__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_GameplayAbilities();
// End Cross Module References

// Begin Delegate FApplyRootMotionMoveToForceDelegate
struct Z_Construct_UDelegateFunction_GameplayAbilities_ApplyRootMotionMoveToForceDelegate__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_ApplyRootMotionMoveToForce.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GameplayAbilities_ApplyRootMotionMoveToForceDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GameplayAbilities, nullptr, "ApplyRootMotionMoveToForceDelegate__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameplayAbilities_ApplyRootMotionMoveToForceDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_GameplayAbilities_ApplyRootMotionMoveToForceDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_GameplayAbilities_ApplyRootMotionMoveToForceDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_GameplayAbilities_ApplyRootMotionMoveToForceDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FApplyRootMotionMoveToForceDelegate_DelegateWrapper(const FMulticastScriptDelegate& ApplyRootMotionMoveToForceDelegate)
{
	ApplyRootMotionMoveToForceDelegate.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FApplyRootMotionMoveToForceDelegate

// Begin Class UAbilityTask_ApplyRootMotionMoveToForce Function ApplyRootMotionMoveToForce
struct Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToForce_ApplyRootMotionMoveToForce_Statics
{
	struct AbilityTask_ApplyRootMotionMoveToForce_eventApplyRootMotionMoveToForce_Parms
	{
		UGameplayAbility* OwningAbility;
		FName TaskInstanceName;
		FVector TargetLocation;
		float Duration;
		bool bSetNewMovementMode;
		TEnumAsByte<EMovementMode> MovementMode;
		bool bRestrictSpeedToExpected;
		UCurveVector* PathOffsetCurve;
		ERootMotionFinishVelocityMode VelocityOnFinishMode;
		FVector SetVelocityOnFinish;
		float ClampVelocityOnFinish;
		UAbilityTask_ApplyRootMotionMoveToForce* ReturnValue;
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
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_ApplyRootMotionMoveToForce.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Apply force to character's movement" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningAbility;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TaskInstanceName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetLocation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
	static void NewProp_bSetNewMovementMode_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetNewMovementMode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MovementMode;
	static void NewProp_bRestrictSpeedToExpected_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRestrictSpeedToExpected;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PathOffsetCurve;
	static const UECodeGen_Private::FBytePropertyParams NewProp_VelocityOnFinishMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_VelocityOnFinishMode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SetVelocityOnFinish;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ClampVelocityOnFinish;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToForce_ApplyRootMotionMoveToForce_Statics::NewProp_OwningAbility = { "OwningAbility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_ApplyRootMotionMoveToForce_eventApplyRootMotionMoveToForce_Parms, OwningAbility), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToForce_ApplyRootMotionMoveToForce_Statics::NewProp_TaskInstanceName = { "TaskInstanceName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_ApplyRootMotionMoveToForce_eventApplyRootMotionMoveToForce_Parms, TaskInstanceName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToForce_ApplyRootMotionMoveToForce_Statics::NewProp_TargetLocation = { "TargetLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_ApplyRootMotionMoveToForce_eventApplyRootMotionMoveToForce_Parms, TargetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToForce_ApplyRootMotionMoveToForce_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_ApplyRootMotionMoveToForce_eventApplyRootMotionMoveToForce_Parms, Duration), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToForce_ApplyRootMotionMoveToForce_Statics::NewProp_bSetNewMovementMode_SetBit(void* Obj)
{
	((AbilityTask_ApplyRootMotionMoveToForce_eventApplyRootMotionMoveToForce_Parms*)Obj)->bSetNewMovementMode = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToForce_ApplyRootMotionMoveToForce_Statics::NewProp_bSetNewMovementMode = { "bSetNewMovementMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AbilityTask_ApplyRootMotionMoveToForce_eventApplyRootMotionMoveToForce_Parms), &Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToForce_ApplyRootMotionMoveToForce_Statics::NewProp_bSetNewMovementMode_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToForce_ApplyRootMotionMoveToForce_Statics::NewProp_MovementMode = { "MovementMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_ApplyRootMotionMoveToForce_eventApplyRootMotionMoveToForce_Parms, MovementMode), Z_Construct_UEnum_Engine_EMovementMode, METADATA_PARAMS(0, nullptr) }; // 1967555749
void Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToForce_ApplyRootMotionMoveToForce_Statics::NewProp_bRestrictSpeedToExpected_SetBit(void* Obj)
{
	((AbilityTask_ApplyRootMotionMoveToForce_eventApplyRootMotionMoveToForce_Parms*)Obj)->bRestrictSpeedToExpected = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToForce_ApplyRootMotionMoveToForce_Statics::NewProp_bRestrictSpeedToExpected = { "bRestrictSpeedToExpected", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AbilityTask_ApplyRootMotionMoveToForce_eventApplyRootMotionMoveToForce_Parms), &Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToForce_ApplyRootMotionMoveToForce_Statics::NewProp_bRestrictSpeedToExpected_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToForce_ApplyRootMotionMoveToForce_Statics::NewProp_PathOffsetCurve = { "PathOffsetCurve", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_ApplyRootMotionMoveToForce_eventApplyRootMotionMoveToForce_Parms, PathOffsetCurve), Z_Construct_UClass_UCurveVector_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToForce_ApplyRootMotionMoveToForce_Statics::NewProp_VelocityOnFinishMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToForce_ApplyRootMotionMoveToForce_Statics::NewProp_VelocityOnFinishMode = { "VelocityOnFinishMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_ApplyRootMotionMoveToForce_eventApplyRootMotionMoveToForce_Parms, VelocityOnFinishMode), Z_Construct_UEnum_Engine_ERootMotionFinishVelocityMode, METADATA_PARAMS(0, nullptr) }; // 754916493
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToForce_ApplyRootMotionMoveToForce_Statics::NewProp_SetVelocityOnFinish = { "SetVelocityOnFinish", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_ApplyRootMotionMoveToForce_eventApplyRootMotionMoveToForce_Parms, SetVelocityOnFinish), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToForce_ApplyRootMotionMoveToForce_Statics::NewProp_ClampVelocityOnFinish = { "ClampVelocityOnFinish", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_ApplyRootMotionMoveToForce_eventApplyRootMotionMoveToForce_Parms, ClampVelocityOnFinish), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToForce_ApplyRootMotionMoveToForce_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_ApplyRootMotionMoveToForce_eventApplyRootMotionMoveToForce_Parms, ReturnValue), Z_Construct_UClass_UAbilityTask_ApplyRootMotionMoveToForce_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToForce_ApplyRootMotionMoveToForce_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToForce_ApplyRootMotionMoveToForce_Statics::NewProp_OwningAbility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToForce_ApplyRootMotionMoveToForce_Statics::NewProp_TaskInstanceName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToForce_ApplyRootMotionMoveToForce_Statics::NewProp_TargetLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToForce_ApplyRootMotionMoveToForce_Statics::NewProp_Duration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToForce_ApplyRootMotionMoveToForce_Statics::NewProp_bSetNewMovementMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToForce_ApplyRootMotionMoveToForce_Statics::NewProp_MovementMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToForce_ApplyRootMotionMoveToForce_Statics::NewProp_bRestrictSpeedToExpected,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToForce_ApplyRootMotionMoveToForce_Statics::NewProp_PathOffsetCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToForce_ApplyRootMotionMoveToForce_Statics::NewProp_VelocityOnFinishMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToForce_ApplyRootMotionMoveToForce_Statics::NewProp_VelocityOnFinishMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToForce_ApplyRootMotionMoveToForce_Statics::NewProp_SetVelocityOnFinish,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToForce_ApplyRootMotionMoveToForce_Statics::NewProp_ClampVelocityOnFinish,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToForce_ApplyRootMotionMoveToForce_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToForce_ApplyRootMotionMoveToForce_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToForce_ApplyRootMotionMoveToForce_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityTask_ApplyRootMotionMoveToForce, nullptr, "ApplyRootMotionMoveToForce", nullptr, nullptr, Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToForce_ApplyRootMotionMoveToForce_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToForce_ApplyRootMotionMoveToForce_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToForce_ApplyRootMotionMoveToForce_Statics::AbilityTask_ApplyRootMotionMoveToForce_eventApplyRootMotionMoveToForce_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToForce_ApplyRootMotionMoveToForce_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToForce_ApplyRootMotionMoveToForce_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToForce_ApplyRootMotionMoveToForce_Statics::AbilityTask_ApplyRootMotionMoveToForce_eventApplyRootMotionMoveToForce_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToForce_ApplyRootMotionMoveToForce()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToForce_ApplyRootMotionMoveToForce_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilityTask_ApplyRootMotionMoveToForce::execApplyRootMotionMoveToForce)
{
	P_GET_OBJECT(UGameplayAbility,Z_Param_OwningAbility);
	P_GET_PROPERTY(FNameProperty,Z_Param_TaskInstanceName);
	P_GET_STRUCT(FVector,Z_Param_TargetLocation);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
	P_GET_UBOOL(Z_Param_bSetNewMovementMode);
	P_GET_PROPERTY(FByteProperty,Z_Param_MovementMode);
	P_GET_UBOOL(Z_Param_bRestrictSpeedToExpected);
	P_GET_OBJECT(UCurveVector,Z_Param_PathOffsetCurve);
	P_GET_ENUM(ERootMotionFinishVelocityMode,Z_Param_VelocityOnFinishMode);
	P_GET_STRUCT(FVector,Z_Param_SetVelocityOnFinish);
	P_GET_PROPERTY(FFloatProperty,Z_Param_ClampVelocityOnFinish);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAbilityTask_ApplyRootMotionMoveToForce**)Z_Param__Result=UAbilityTask_ApplyRootMotionMoveToForce::ApplyRootMotionMoveToForce(Z_Param_OwningAbility,Z_Param_TaskInstanceName,Z_Param_TargetLocation,Z_Param_Duration,Z_Param_bSetNewMovementMode,EMovementMode(Z_Param_MovementMode),Z_Param_bRestrictSpeedToExpected,Z_Param_PathOffsetCurve,ERootMotionFinishVelocityMode(Z_Param_VelocityOnFinishMode),Z_Param_SetVelocityOnFinish,Z_Param_ClampVelocityOnFinish);
	P_NATIVE_END;
}
// End Class UAbilityTask_ApplyRootMotionMoveToForce Function ApplyRootMotionMoveToForce

// Begin Class UAbilityTask_ApplyRootMotionMoveToForce
void UAbilityTask_ApplyRootMotionMoveToForce::StaticRegisterNativesUAbilityTask_ApplyRootMotionMoveToForce()
{
	UClass* Class = UAbilityTask_ApplyRootMotionMoveToForce::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ApplyRootMotionMoveToForce", &UAbilityTask_ApplyRootMotionMoveToForce::execApplyRootMotionMoveToForce },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAbilityTask_ApplyRootMotionMoveToForce);
UClass* Z_Construct_UClass_UAbilityTask_ApplyRootMotionMoveToForce_NoRegister()
{
	return UAbilityTask_ApplyRootMotionMoveToForce::StaticClass();
}
struct Z_Construct_UClass_UAbilityTask_ApplyRootMotionMoveToForce_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\x09""Applies force to character's movement\n */" },
#endif
		{ "IncludePath", "Abilities/Tasks/AbilityTask_ApplyRootMotionMoveToForce.h" },
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_ApplyRootMotionMoveToForce.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Applies force to character's movement" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnTimedOut_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_ApplyRootMotionMoveToForce.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnTimedOutAndDestinationReached_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_ApplyRootMotionMoveToForce.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartLocation_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_ApplyRootMotionMoveToForce.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetLocation_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_ApplyRootMotionMoveToForce.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_ApplyRootMotionMoveToForce.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSetNewMovementMode_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_ApplyRootMotionMoveToForce.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewMovementMode_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_ApplyRootMotionMoveToForce.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRestrictSpeedToExpected_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If enabled, we limit velocity to the initial expected velocity to go distance to the target over Duration.\n\x09 *  This prevents cases of getting really high velocity the last few frames of the root motion if you were being blocked by\n\x09 *  collision. Disabled means we do everything we can to velocity during the move to get to the TargetLocation. */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_ApplyRootMotionMoveToForce.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If enabled, we limit velocity to the initial expected velocity to go distance to the target over Duration.\nThis prevents cases of getting really high velocity the last few frames of the root motion if you were being blocked by\ncollision. Disabled means we do everything we can to velocity during the move to get to the TargetLocation." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PathOffsetCurve_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_ApplyRootMotionMoveToForce.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTimedOut;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTimedOutAndDestinationReached;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetLocation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
	static void NewProp_bSetNewMovementMode_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetNewMovementMode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewMovementMode;
	static void NewProp_bRestrictSpeedToExpected_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRestrictSpeedToExpected;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PathOffsetCurve;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToForce_ApplyRootMotionMoveToForce, "ApplyRootMotionMoveToForce" }, // 1508156839
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAbilityTask_ApplyRootMotionMoveToForce>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAbilityTask_ApplyRootMotionMoveToForce_Statics::NewProp_OnTimedOut = { "OnTimedOut", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityTask_ApplyRootMotionMoveToForce, OnTimedOut), Z_Construct_UDelegateFunction_GameplayAbilities_ApplyRootMotionMoveToForceDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnTimedOut_MetaData), NewProp_OnTimedOut_MetaData) }; // 2097647674
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAbilityTask_ApplyRootMotionMoveToForce_Statics::NewProp_OnTimedOutAndDestinationReached = { "OnTimedOutAndDestinationReached", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityTask_ApplyRootMotionMoveToForce, OnTimedOutAndDestinationReached), Z_Construct_UDelegateFunction_GameplayAbilities_ApplyRootMotionMoveToForceDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnTimedOutAndDestinationReached_MetaData), NewProp_OnTimedOutAndDestinationReached_MetaData) }; // 2097647674
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAbilityTask_ApplyRootMotionMoveToForce_Statics::NewProp_StartLocation = { "StartLocation", nullptr, (EPropertyFlags)0x0020080000000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityTask_ApplyRootMotionMoveToForce, StartLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartLocation_MetaData), NewProp_StartLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAbilityTask_ApplyRootMotionMoveToForce_Statics::NewProp_TargetLocation = { "TargetLocation", nullptr, (EPropertyFlags)0x0020080000000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityTask_ApplyRootMotionMoveToForce, TargetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetLocation_MetaData), NewProp_TargetLocation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAbilityTask_ApplyRootMotionMoveToForce_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0020080000000020, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityTask_ApplyRootMotionMoveToForce, Duration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Duration_MetaData), NewProp_Duration_MetaData) };
void Z_Construct_UClass_UAbilityTask_ApplyRootMotionMoveToForce_Statics::NewProp_bSetNewMovementMode_SetBit(void* Obj)
{
	((UAbilityTask_ApplyRootMotionMoveToForce*)Obj)->bSetNewMovementMode = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAbilityTask_ApplyRootMotionMoveToForce_Statics::NewProp_bSetNewMovementMode = { "bSetNewMovementMode", nullptr, (EPropertyFlags)0x0020080000000020, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAbilityTask_ApplyRootMotionMoveToForce), &Z_Construct_UClass_UAbilityTask_ApplyRootMotionMoveToForce_Statics::NewProp_bSetNewMovementMode_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSetNewMovementMode_MetaData), NewProp_bSetNewMovementMode_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAbilityTask_ApplyRootMotionMoveToForce_Statics::NewProp_NewMovementMode = { "NewMovementMode", nullptr, (EPropertyFlags)0x0020080000000020, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityTask_ApplyRootMotionMoveToForce, NewMovementMode), Z_Construct_UEnum_Engine_EMovementMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewMovementMode_MetaData), NewProp_NewMovementMode_MetaData) }; // 1967555749
void Z_Construct_UClass_UAbilityTask_ApplyRootMotionMoveToForce_Statics::NewProp_bRestrictSpeedToExpected_SetBit(void* Obj)
{
	((UAbilityTask_ApplyRootMotionMoveToForce*)Obj)->bRestrictSpeedToExpected = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAbilityTask_ApplyRootMotionMoveToForce_Statics::NewProp_bRestrictSpeedToExpected = { "bRestrictSpeedToExpected", nullptr, (EPropertyFlags)0x0020080000000020, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAbilityTask_ApplyRootMotionMoveToForce), &Z_Construct_UClass_UAbilityTask_ApplyRootMotionMoveToForce_Statics::NewProp_bRestrictSpeedToExpected_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRestrictSpeedToExpected_MetaData), NewProp_bRestrictSpeedToExpected_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAbilityTask_ApplyRootMotionMoveToForce_Statics::NewProp_PathOffsetCurve = { "PathOffsetCurve", nullptr, (EPropertyFlags)0x0124080000000020, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityTask_ApplyRootMotionMoveToForce, PathOffsetCurve), Z_Construct_UClass_UCurveVector_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PathOffsetCurve_MetaData), NewProp_PathOffsetCurve_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAbilityTask_ApplyRootMotionMoveToForce_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_ApplyRootMotionMoveToForce_Statics::NewProp_OnTimedOut,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_ApplyRootMotionMoveToForce_Statics::NewProp_OnTimedOutAndDestinationReached,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_ApplyRootMotionMoveToForce_Statics::NewProp_StartLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_ApplyRootMotionMoveToForce_Statics::NewProp_TargetLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_ApplyRootMotionMoveToForce_Statics::NewProp_Duration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_ApplyRootMotionMoveToForce_Statics::NewProp_bSetNewMovementMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_ApplyRootMotionMoveToForce_Statics::NewProp_NewMovementMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_ApplyRootMotionMoveToForce_Statics::NewProp_bRestrictSpeedToExpected,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_ApplyRootMotionMoveToForce_Statics::NewProp_PathOffsetCurve,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_ApplyRootMotionMoveToForce_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAbilityTask_ApplyRootMotionMoveToForce_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAbilityTask_ApplyRootMotion_Base,
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_ApplyRootMotionMoveToForce_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAbilityTask_ApplyRootMotionMoveToForce_Statics::ClassParams = {
	&UAbilityTask_ApplyRootMotionMoveToForce::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAbilityTask_ApplyRootMotionMoveToForce_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_ApplyRootMotionMoveToForce_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_ApplyRootMotionMoveToForce_Statics::Class_MetaDataParams), Z_Construct_UClass_UAbilityTask_ApplyRootMotionMoveToForce_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAbilityTask_ApplyRootMotionMoveToForce()
{
	if (!Z_Registration_Info_UClass_UAbilityTask_ApplyRootMotionMoveToForce.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAbilityTask_ApplyRootMotionMoveToForce.OuterSingleton, Z_Construct_UClass_UAbilityTask_ApplyRootMotionMoveToForce_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAbilityTask_ApplyRootMotionMoveToForce.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UClass* StaticClass<UAbilityTask_ApplyRootMotionMoveToForce>()
{
	return UAbilityTask_ApplyRootMotionMoveToForce::StaticClass();
}
void UAbilityTask_ApplyRootMotionMoveToForce::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_StartLocation(TEXT("StartLocation"));
	static const FName Name_TargetLocation(TEXT("TargetLocation"));
	static const FName Name_Duration(TEXT("Duration"));
	static const FName Name_bSetNewMovementMode(TEXT("bSetNewMovementMode"));
	static const FName Name_NewMovementMode(TEXT("NewMovementMode"));
	static const FName Name_bRestrictSpeedToExpected(TEXT("bRestrictSpeedToExpected"));
	static const FName Name_PathOffsetCurve(TEXT("PathOffsetCurve"));
	const bool bIsValid = true
		&& Name_StartLocation == ClassReps[(int32)ENetFields_Private::StartLocation].Property->GetFName()
		&& Name_TargetLocation == ClassReps[(int32)ENetFields_Private::TargetLocation].Property->GetFName()
		&& Name_Duration == ClassReps[(int32)ENetFields_Private::Duration].Property->GetFName()
		&& Name_bSetNewMovementMode == ClassReps[(int32)ENetFields_Private::bSetNewMovementMode].Property->GetFName()
		&& Name_NewMovementMode == ClassReps[(int32)ENetFields_Private::NewMovementMode].Property->GetFName()
		&& Name_bRestrictSpeedToExpected == ClassReps[(int32)ENetFields_Private::bRestrictSpeedToExpected].Property->GetFName()
		&& Name_PathOffsetCurve == ClassReps[(int32)ENetFields_Private::PathOffsetCurve].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UAbilityTask_ApplyRootMotionMoveToForce"));
}
UAbilityTask_ApplyRootMotionMoveToForce::UAbilityTask_ApplyRootMotionMoveToForce(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAbilityTask_ApplyRootMotionMoveToForce);
UAbilityTask_ApplyRootMotionMoveToForce::~UAbilityTask_ApplyRootMotionMoveToForce() {}
// End Class UAbilityTask_ApplyRootMotionMoveToForce

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionMoveToForce_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAbilityTask_ApplyRootMotionMoveToForce, UAbilityTask_ApplyRootMotionMoveToForce::StaticClass, TEXT("UAbilityTask_ApplyRootMotionMoveToForce"), &Z_Registration_Info_UClass_UAbilityTask_ApplyRootMotionMoveToForce, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAbilityTask_ApplyRootMotionMoveToForce), 1020087557U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionMoveToForce_h_2827793327(TEXT("/Script/GameplayAbilities"),
	Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionMoveToForce_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionMoveToForce_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
