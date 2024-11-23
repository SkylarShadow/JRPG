// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Abilities/Tasks/AbilityTask_WaitConfirmCancel.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAbilityTask_WaitConfirmCancel;
class UGameplayAbility;
#ifdef GAMEPLAYABILITIES_AbilityTask_WaitConfirmCancel_generated_h
#error "AbilityTask_WaitConfirmCancel.generated.h already included, missing '#pragma once' in AbilityTask_WaitConfirmCancel.h"
#endif
#define GAMEPLAYABILITIES_AbilityTask_WaitConfirmCancel_generated_h

#define FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitConfirmCancel_h_9_DELEGATE \
GAMEPLAYABILITIES_API void FWaitConfirmCancelDelegate_DelegateWrapper(const FMulticastScriptDelegate& WaitConfirmCancelDelegate);


#define FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitConfirmCancel_h_18_RPC_WRAPPERS \
	DECLARE_FUNCTION(execWaitConfirmCancel); \
	DECLARE_FUNCTION(execOnLocalCancelCallback); \
	DECLARE_FUNCTION(execOnLocalConfirmCallback); \
	DECLARE_FUNCTION(execOnCancelCallback); \
	DECLARE_FUNCTION(execOnConfirmCallback);


#define FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitConfirmCancel_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUAbilityTask_WaitConfirmCancel(); \
	friend struct Z_Construct_UClass_UAbilityTask_WaitConfirmCancel_Statics; \
public: \
	DECLARE_CLASS(UAbilityTask_WaitConfirmCancel, UAbilityTask, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayAbilities"), NO_API) \
	DECLARE_SERIALIZER(UAbilityTask_WaitConfirmCancel)


#define FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitConfirmCancel_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAbilityTask_WaitConfirmCancel(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbilityTask_WaitConfirmCancel) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAbilityTask_WaitConfirmCancel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilityTask_WaitConfirmCancel); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAbilityTask_WaitConfirmCancel(UAbilityTask_WaitConfirmCancel&&); \
	UAbilityTask_WaitConfirmCancel(const UAbilityTask_WaitConfirmCancel&); \
public: \
	NO_API virtual ~UAbilityTask_WaitConfirmCancel();


#define FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitConfirmCancel_h_15_PROLOG
#define FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitConfirmCancel_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitConfirmCancel_h_18_RPC_WRAPPERS \
	FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitConfirmCancel_h_18_INCLASS \
	FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitConfirmCancel_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYABILITIES_API UClass* StaticClass<class UAbilityTask_WaitConfirmCancel>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitConfirmCancel_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
