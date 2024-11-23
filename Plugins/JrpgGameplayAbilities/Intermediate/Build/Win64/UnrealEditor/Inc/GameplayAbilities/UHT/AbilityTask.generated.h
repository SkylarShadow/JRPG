// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Abilities/Tasks/AbilityTask.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAMEPLAYABILITIES_AbilityTask_generated_h
#error "AbilityTask.generated.h already included, missing '#pragma once' in AbilityTask.h"
#endif
#define GAMEPLAYABILITIES_AbilityTask_generated_h

#define FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_h_90_INCLASS \
private: \
	static void StaticRegisterNativesUAbilityTask(); \
	friend struct Z_Construct_UClass_UAbilityTask_Statics; \
public: \
	DECLARE_CLASS(UAbilityTask, UGameplayTask, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayAbilities"), NO_API) \
	DECLARE_SERIALIZER(UAbilityTask)


#define FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_h_90_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAbilityTask(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbilityTask) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAbilityTask); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilityTask); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAbilityTask(UAbilityTask&&); \
	UAbilityTask(const UAbilityTask&); \
public: \
	NO_API virtual ~UAbilityTask();


#define FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_h_87_PROLOG
#define FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_h_90_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_h_90_INCLASS \
	FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_h_90_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYABILITIES_API UClass* StaticClass<class UAbilityTask>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_h


#define FOREACH_ENUM_EABILITYTASKWAITSTATE(op) \
	op(EAbilityTaskWaitState::WaitingOnGame) \
	op(EAbilityTaskWaitState::WaitingOnUser) \
	op(EAbilityTaskWaitState::WaitingOnAvatar) 

enum class EAbilityTaskWaitState : uint8;
template<> struct TIsUEnumClass<EAbilityTaskWaitState> { enum { Value = true }; };
template<> GAMEPLAYABILITIES_API UEnum* StaticEnum<EAbilityTaskWaitState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
