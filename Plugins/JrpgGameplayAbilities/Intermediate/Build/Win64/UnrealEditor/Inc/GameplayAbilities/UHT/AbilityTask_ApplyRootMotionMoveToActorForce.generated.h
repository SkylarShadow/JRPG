// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Abilities/Tasks/AbilityTask_ApplyRootMotionMoveToActorForce.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UAbilityTask_ApplyRootMotionMoveToActorForce;
class UCurveFloat;
class UCurveVector;
class UGameplayAbility;
class USceneComponent;
enum class ERootMotionFinishVelocityMode : uint8;
enum class ERootMotionMoveToActorTargetOffsetType : uint8;
struct FGameplayAbilityTargetDataHandle;
#ifdef GAMEPLAYABILITIES_AbilityTask_ApplyRootMotionMoveToActorForce_generated_h
#error "AbilityTask_ApplyRootMotionMoveToActorForce.generated.h already included, missing '#pragma once' in AbilityTask_ApplyRootMotionMoveToActorForce.h"
#endif
#define GAMEPLAYABILITIES_AbilityTask_ApplyRootMotionMoveToActorForce_generated_h

#define FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionMoveToActorForce_h_18_DELEGATE \
GAMEPLAYABILITIES_API void FApplyRootMotionMoveToActorForceDelegate_DelegateWrapper(const FMulticastScriptDelegate& ApplyRootMotionMoveToActorForceDelegate, bool DestinationReached, bool TimedOut, FVector FinalTargetLocation);


#define FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionMoveToActorForce_h_39_RPC_WRAPPERS \
	DECLARE_FUNCTION(execOnRep_TargetLocation); \
	DECLARE_FUNCTION(execOnTargetActorSwapped); \
	DECLARE_FUNCTION(execApplyRootMotionMoveToTargetDataActorForce); \
	DECLARE_FUNCTION(execApplyRootMotionMoveToComponentForce); \
	DECLARE_FUNCTION(execApplyRootMotionMoveToActorForce);


#define FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionMoveToActorForce_h_39_INCLASS \
private: \
	static void StaticRegisterNativesUAbilityTask_ApplyRootMotionMoveToActorForce(); \
	friend struct Z_Construct_UClass_UAbilityTask_ApplyRootMotionMoveToActorForce_Statics; \
public: \
	DECLARE_CLASS(UAbilityTask_ApplyRootMotionMoveToActorForce, UAbilityTask_ApplyRootMotion_Base, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayAbilities"), NO_API) \
	DECLARE_SERIALIZER(UAbilityTask_ApplyRootMotionMoveToActorForce) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		StartLocation=NETFIELD_REP_START, \
		TargetLocation, \
		TargetActor, \
		TargetComponent, \
		TargetComponentRelativeLocation, \
		TargetLocationOffset, \
		OffsetAlignment, \
		Duration, \
		bDisableDestinationReachedInterrupt, \
		ReachedDestinationDistance, \
		bSetNewMovementMode, \
		NewMovementMode, \
		bRestrictSpeedToExpected, \
		PathOffsetCurve, \
		TimeMappingCurve, \
		TargetLerpSpeedHorizontalCurve, \
		TargetLerpSpeedVerticalCurve, \
		NETFIELD_REP_END=TargetLerpSpeedVerticalCurve	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionMoveToActorForce_h_39_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAbilityTask_ApplyRootMotionMoveToActorForce(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbilityTask_ApplyRootMotionMoveToActorForce) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAbilityTask_ApplyRootMotionMoveToActorForce); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilityTask_ApplyRootMotionMoveToActorForce); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAbilityTask_ApplyRootMotionMoveToActorForce(UAbilityTask_ApplyRootMotionMoveToActorForce&&); \
	UAbilityTask_ApplyRootMotionMoveToActorForce(const UAbilityTask_ApplyRootMotionMoveToActorForce&); \
public: \
	NO_API virtual ~UAbilityTask_ApplyRootMotionMoveToActorForce();


#define FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionMoveToActorForce_h_36_PROLOG
#define FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionMoveToActorForce_h_39_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionMoveToActorForce_h_39_RPC_WRAPPERS \
	FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionMoveToActorForce_h_39_INCLASS \
	FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionMoveToActorForce_h_39_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYABILITIES_API UClass* StaticClass<class UAbilityTask_ApplyRootMotionMoveToActorForce>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionMoveToActorForce_h


#define FOREACH_ENUM_EROOTMOTIONMOVETOACTORTARGETOFFSETTYPE(op) \
	op(ERootMotionMoveToActorTargetOffsetType::AlignFromTargetToSource) \
	op(ERootMotionMoveToActorTargetOffsetType::AlignToTargetForward) \
	op(ERootMotionMoveToActorTargetOffsetType::AlignToWorldSpace) 

enum class ERootMotionMoveToActorTargetOffsetType : uint8;
template<> struct TIsUEnumClass<ERootMotionMoveToActorTargetOffsetType> { enum { Value = true }; };
template<> GAMEPLAYABILITIES_API UEnum* StaticEnum<ERootMotionMoveToActorTargetOffsetType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
