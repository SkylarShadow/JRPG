// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Abilities/Tasks/AbilityTask_WaitAttributeChangeThreshold.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UAbilityTask_WaitAttributeChangeThreshold;
class UGameplayAbility;
struct FGameplayAttribute;
#ifdef GAMEPLAYABILITIES_AbilityTask_WaitAttributeChangeThreshold_generated_h
#error "AbilityTask_WaitAttributeChangeThreshold.generated.h already included, missing '#pragma once' in AbilityTask_WaitAttributeChangeThreshold.h"
#endif
#define GAMEPLAYABILITIES_AbilityTask_WaitAttributeChangeThreshold_generated_h

#define FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitAttributeChangeThreshold_h_13_DELEGATE \
GAMEPLAYABILITIES_API void FWaitAttributeChangeThresholdDelegate_DelegateWrapper(const FMulticastScriptDelegate& WaitAttributeChangeThresholdDelegate, bool bMatchesComparison, float CurrentValue);


#define FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitAttributeChangeThreshold_h_21_RPC_WRAPPERS \
	DECLARE_FUNCTION(execWaitForAttributeChangeThreshold);


#define FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitAttributeChangeThreshold_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUAbilityTask_WaitAttributeChangeThreshold(); \
	friend struct Z_Construct_UClass_UAbilityTask_WaitAttributeChangeThreshold_Statics; \
public: \
	DECLARE_CLASS(UAbilityTask_WaitAttributeChangeThreshold, UAbilityTask, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayAbilities"), NO_API) \
	DECLARE_SERIALIZER(UAbilityTask_WaitAttributeChangeThreshold)


#define FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitAttributeChangeThreshold_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAbilityTask_WaitAttributeChangeThreshold(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbilityTask_WaitAttributeChangeThreshold) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAbilityTask_WaitAttributeChangeThreshold); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilityTask_WaitAttributeChangeThreshold); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAbilityTask_WaitAttributeChangeThreshold(UAbilityTask_WaitAttributeChangeThreshold&&); \
	UAbilityTask_WaitAttributeChangeThreshold(const UAbilityTask_WaitAttributeChangeThreshold&); \
public: \
	NO_API virtual ~UAbilityTask_WaitAttributeChangeThreshold();


#define FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitAttributeChangeThreshold_h_18_PROLOG
#define FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitAttributeChangeThreshold_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitAttributeChangeThreshold_h_21_RPC_WRAPPERS \
	FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitAttributeChangeThreshold_h_21_INCLASS \
	FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitAttributeChangeThreshold_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYABILITIES_API UClass* StaticClass<class UAbilityTask_WaitAttributeChangeThreshold>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitAttributeChangeThreshold_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
