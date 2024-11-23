// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Abilities/Tasks/AbilityTask_WaitMovementModeChange.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ACharacter;
class UAbilityTask_WaitMovementModeChange;
class UGameplayAbility;
#ifdef GAMEPLAYABILITIES_AbilityTask_WaitMovementModeChange_generated_h
#error "AbilityTask_WaitMovementModeChange.generated.h already included, missing '#pragma once' in AbilityTask_WaitMovementModeChange.h"
#endif
#define GAMEPLAYABILITIES_AbilityTask_WaitMovementModeChange_generated_h

#define FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitMovementModeChange_h_11_DELEGATE \
GAMEPLAYABILITIES_API void FMovementModeChangedDelegate_DelegateWrapper(const FMulticastScriptDelegate& MovementModeChangedDelegate, EMovementMode NewMovementMode);


#define FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitMovementModeChange_h_18_RPC_WRAPPERS \
	DECLARE_FUNCTION(execCreateWaitMovementModeChange); \
	DECLARE_FUNCTION(execOnMovementModeChange);


#define FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitMovementModeChange_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUAbilityTask_WaitMovementModeChange(); \
	friend struct Z_Construct_UClass_UAbilityTask_WaitMovementModeChange_Statics; \
public: \
	DECLARE_CLASS(UAbilityTask_WaitMovementModeChange, UAbilityTask, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayAbilities"), NO_API) \
	DECLARE_SERIALIZER(UAbilityTask_WaitMovementModeChange)


#define FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitMovementModeChange_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAbilityTask_WaitMovementModeChange(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbilityTask_WaitMovementModeChange) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAbilityTask_WaitMovementModeChange); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilityTask_WaitMovementModeChange); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAbilityTask_WaitMovementModeChange(UAbilityTask_WaitMovementModeChange&&); \
	UAbilityTask_WaitMovementModeChange(const UAbilityTask_WaitMovementModeChange&); \
public: \
	NO_API virtual ~UAbilityTask_WaitMovementModeChange();


#define FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitMovementModeChange_h_15_PROLOG
#define FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitMovementModeChange_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitMovementModeChange_h_18_RPC_WRAPPERS \
	FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitMovementModeChange_h_18_INCLASS \
	FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitMovementModeChange_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYABILITIES_API UClass* StaticClass<class UAbilityTask_WaitMovementModeChange>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitMovementModeChange_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
