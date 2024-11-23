// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Abilities/Tasks/AbilityTask_Repeat.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAbilityTask_Repeat;
class UGameplayAbility;
#ifdef GAMEPLAYABILITIES_AbilityTask_Repeat_generated_h
#error "AbilityTask_Repeat.generated.h already included, missing '#pragma once' in AbilityTask_Repeat.h"
#endif
#define GAMEPLAYABILITIES_AbilityTask_Repeat_generated_h

#define FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_Repeat_h_10_DELEGATE \
GAMEPLAYABILITIES_API void FRepeatedActionDelegate_DelegateWrapper(const FMulticastScriptDelegate& RepeatedActionDelegate, int32 ActionNumber);


#define FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_Repeat_h_18_RPC_WRAPPERS \
	DECLARE_FUNCTION(execRepeatAction);


#define FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_Repeat_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUAbilityTask_Repeat(); \
	friend struct Z_Construct_UClass_UAbilityTask_Repeat_Statics; \
public: \
	DECLARE_CLASS(UAbilityTask_Repeat, UAbilityTask, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayAbilities"), NO_API) \
	DECLARE_SERIALIZER(UAbilityTask_Repeat)


#define FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_Repeat_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAbilityTask_Repeat(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbilityTask_Repeat) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAbilityTask_Repeat); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilityTask_Repeat); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAbilityTask_Repeat(UAbilityTask_Repeat&&); \
	UAbilityTask_Repeat(const UAbilityTask_Repeat&); \
public: \
	NO_API virtual ~UAbilityTask_Repeat();


#define FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_Repeat_h_15_PROLOG
#define FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_Repeat_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_Repeat_h_18_RPC_WRAPPERS \
	FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_Repeat_h_18_INCLASS \
	FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_Repeat_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYABILITIES_API UClass* StaticClass<class UAbilityTask_Repeat>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_Repeat_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
