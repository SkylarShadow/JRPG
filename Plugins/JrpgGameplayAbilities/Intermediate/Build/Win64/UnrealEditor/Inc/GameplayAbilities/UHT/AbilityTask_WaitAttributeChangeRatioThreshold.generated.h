// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Abilities/Tasks/AbilityTask_WaitAttributeChangeRatioThreshold.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UAbilityTask_WaitAttributeChangeRatioThreshold;
class UGameplayAbility;
struct FGameplayAttribute;
#ifdef GAMEPLAYABILITIES_AbilityTask_WaitAttributeChangeRatioThreshold_generated_h
#error "AbilityTask_WaitAttributeChangeRatioThreshold.generated.h already included, missing '#pragma once' in AbilityTask_WaitAttributeChangeRatioThreshold.h"
#endif
#define GAMEPLAYABILITIES_AbilityTask_WaitAttributeChangeRatioThreshold_generated_h

#define FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitAttributeChangeRatioThreshold_h_14_DELEGATE \
GAMEPLAYABILITIES_API void FWaitAttributeChangeRatioThresholdDelegate_DelegateWrapper(const FMulticastScriptDelegate& WaitAttributeChangeRatioThresholdDelegate, bool bMatchesComparison, float CurrentRatio);


#define FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitAttributeChangeRatioThreshold_h_22_RPC_WRAPPERS \
	DECLARE_FUNCTION(execWaitForAttributeChangeRatioThreshold);


#define FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitAttributeChangeRatioThreshold_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUAbilityTask_WaitAttributeChangeRatioThreshold(); \
	friend struct Z_Construct_UClass_UAbilityTask_WaitAttributeChangeRatioThreshold_Statics; \
public: \
	DECLARE_CLASS(UAbilityTask_WaitAttributeChangeRatioThreshold, UAbilityTask, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayAbilities"), NO_API) \
	DECLARE_SERIALIZER(UAbilityTask_WaitAttributeChangeRatioThreshold)


#define FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitAttributeChangeRatioThreshold_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAbilityTask_WaitAttributeChangeRatioThreshold(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbilityTask_WaitAttributeChangeRatioThreshold) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAbilityTask_WaitAttributeChangeRatioThreshold); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilityTask_WaitAttributeChangeRatioThreshold); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAbilityTask_WaitAttributeChangeRatioThreshold(UAbilityTask_WaitAttributeChangeRatioThreshold&&); \
	UAbilityTask_WaitAttributeChangeRatioThreshold(const UAbilityTask_WaitAttributeChangeRatioThreshold&); \
public: \
	NO_API virtual ~UAbilityTask_WaitAttributeChangeRatioThreshold();


#define FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitAttributeChangeRatioThreshold_h_19_PROLOG
#define FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitAttributeChangeRatioThreshold_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitAttributeChangeRatioThreshold_h_22_RPC_WRAPPERS \
	FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitAttributeChangeRatioThreshold_h_22_INCLASS \
	FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitAttributeChangeRatioThreshold_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYABILITIES_API UClass* StaticClass<class UAbilityTask_WaitAttributeChangeRatioThreshold>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitAttributeChangeRatioThreshold_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
