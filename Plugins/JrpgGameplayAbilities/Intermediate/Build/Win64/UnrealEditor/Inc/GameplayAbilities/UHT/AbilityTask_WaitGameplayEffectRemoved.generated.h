// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Abilities/Tasks/AbilityTask_WaitGameplayEffectRemoved.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAbilityTask_WaitGameplayEffectRemoved;
class UGameplayAbility;
struct FActiveGameplayEffectHandle;
struct FGameplayEffectRemovalInfo;
#ifdef GAMEPLAYABILITIES_AbilityTask_WaitGameplayEffectRemoved_generated_h
#error "AbilityTask_WaitGameplayEffectRemoved.generated.h already included, missing '#pragma once' in AbilityTask_WaitGameplayEffectRemoved.h"
#endif
#define GAMEPLAYABILITIES_AbilityTask_WaitGameplayEffectRemoved_generated_h

#define FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayEffectRemoved_h_10_DELEGATE \
GAMEPLAYABILITIES_API void FWaitGameplayEffectRemovedDelegate_DelegateWrapper(const FMulticastScriptDelegate& WaitGameplayEffectRemovedDelegate, FGameplayEffectRemovalInfo const& GameplayEffectRemovalInfo);


#define FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayEffectRemoved_h_21_RPC_WRAPPERS \
	DECLARE_FUNCTION(execWaitForGameplayEffectRemoved); \
	DECLARE_FUNCTION(execOnGameplayEffectRemoved);


#define FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayEffectRemoved_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUAbilityTask_WaitGameplayEffectRemoved(); \
	friend struct Z_Construct_UClass_UAbilityTask_WaitGameplayEffectRemoved_Statics; \
public: \
	DECLARE_CLASS(UAbilityTask_WaitGameplayEffectRemoved, UAbilityTask, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayAbilities"), NO_API) \
	DECLARE_SERIALIZER(UAbilityTask_WaitGameplayEffectRemoved)


#define FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayEffectRemoved_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAbilityTask_WaitGameplayEffectRemoved(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbilityTask_WaitGameplayEffectRemoved) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAbilityTask_WaitGameplayEffectRemoved); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilityTask_WaitGameplayEffectRemoved); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAbilityTask_WaitGameplayEffectRemoved(UAbilityTask_WaitGameplayEffectRemoved&&); \
	UAbilityTask_WaitGameplayEffectRemoved(const UAbilityTask_WaitGameplayEffectRemoved&); \
public: \
	NO_API virtual ~UAbilityTask_WaitGameplayEffectRemoved();


#define FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayEffectRemoved_h_18_PROLOG
#define FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayEffectRemoved_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayEffectRemoved_h_21_RPC_WRAPPERS \
	FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayEffectRemoved_h_21_INCLASS \
	FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayEffectRemoved_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYABILITIES_API UClass* StaticClass<class UAbilityTask_WaitGameplayEffectRemoved>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayEffectRemoved_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
