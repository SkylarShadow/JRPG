// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Abilities/Tasks/AbilityTask_VisualizeTargeting.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AGameplayAbilityTargetActor;
class UAbilityTask_VisualizeTargeting;
class UGameplayAbility;
#ifdef GAMEPLAYABILITIES_AbilityTask_VisualizeTargeting_generated_h
#error "AbilityTask_VisualizeTargeting.generated.h already included, missing '#pragma once' in AbilityTask_VisualizeTargeting.h"
#endif
#define GAMEPLAYABILITIES_AbilityTask_VisualizeTargeting_generated_h

#define FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_VisualizeTargeting_h_12_DELEGATE \
GAMEPLAYABILITIES_API void FVisualizeTargetingDelegate_DelegateWrapper(const FMulticastScriptDelegate& VisualizeTargetingDelegate);


#define FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_VisualizeTargeting_h_17_RPC_WRAPPERS \
	DECLARE_FUNCTION(execFinishSpawningActor); \
	DECLARE_FUNCTION(execBeginSpawningActor); \
	DECLARE_FUNCTION(execVisualizeTargetingUsingActor); \
	DECLARE_FUNCTION(execVisualizeTargeting);


#define FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_VisualizeTargeting_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUAbilityTask_VisualizeTargeting(); \
	friend struct Z_Construct_UClass_UAbilityTask_VisualizeTargeting_Statics; \
public: \
	DECLARE_CLASS(UAbilityTask_VisualizeTargeting, UAbilityTask, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayAbilities"), NO_API) \
	DECLARE_SERIALIZER(UAbilityTask_VisualizeTargeting)


#define FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_VisualizeTargeting_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAbilityTask_VisualizeTargeting(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbilityTask_VisualizeTargeting) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAbilityTask_VisualizeTargeting); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilityTask_VisualizeTargeting); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAbilityTask_VisualizeTargeting(UAbilityTask_VisualizeTargeting&&); \
	UAbilityTask_VisualizeTargeting(const UAbilityTask_VisualizeTargeting&); \
public: \
	NO_API virtual ~UAbilityTask_VisualizeTargeting();


#define FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_VisualizeTargeting_h_14_PROLOG
#define FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_VisualizeTargeting_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_VisualizeTargeting_h_17_RPC_WRAPPERS \
	FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_VisualizeTargeting_h_17_INCLASS \
	FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_VisualizeTargeting_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYABILITIES_API UClass* StaticClass<class UAbilityTask_VisualizeTargeting>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_VisualizeTargeting_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
