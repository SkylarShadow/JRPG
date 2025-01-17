// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Abilities/Tasks/AbilityTask_PlayMontageAndWait.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAbilityTask_PlayMontageAndWait;
class UAnimMontage;
class UGameplayAbility;
#ifdef GAMEPLAYABILITIES_AbilityTask_PlayMontageAndWait_generated_h
#error "AbilityTask_PlayMontageAndWait.generated.h already included, missing '#pragma once' in AbilityTask_PlayMontageAndWait.h"
#endif
#define GAMEPLAYABILITIES_AbilityTask_PlayMontageAndWait_generated_h

#define FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_PlayMontageAndWait_h_10_DELEGATE \
GAMEPLAYABILITIES_API void FMontageWaitSimpleDelegate_DelegateWrapper(const FMulticastScriptDelegate& MontageWaitSimpleDelegate);


#define FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_PlayMontageAndWait_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCreatePlayMontageAndWaitProxy); \
	DECLARE_FUNCTION(execOnMontageEnded); \
	DECLARE_FUNCTION(execOnGameplayAbilityCancelled); \
	DECLARE_FUNCTION(execOnMontageInterrupted); \
	DECLARE_FUNCTION(execOnMontageBlendingOut);


#define FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_PlayMontageAndWait_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAbilityTask_PlayMontageAndWait(); \
	friend struct Z_Construct_UClass_UAbilityTask_PlayMontageAndWait_Statics; \
public: \
	DECLARE_CLASS(UAbilityTask_PlayMontageAndWait, UAbilityTask, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayAbilities"), NO_API) \
	DECLARE_SERIALIZER(UAbilityTask_PlayMontageAndWait)


#define FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_PlayMontageAndWait_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAbilityTask_PlayMontageAndWait(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAbilityTask_PlayMontageAndWait(UAbilityTask_PlayMontageAndWait&&); \
	UAbilityTask_PlayMontageAndWait(const UAbilityTask_PlayMontageAndWait&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAbilityTask_PlayMontageAndWait); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilityTask_PlayMontageAndWait); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbilityTask_PlayMontageAndWait) \
	NO_API virtual ~UAbilityTask_PlayMontageAndWait();


#define FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_PlayMontageAndWait_h_13_PROLOG
#define FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_PlayMontageAndWait_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_PlayMontageAndWait_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_PlayMontageAndWait_h_16_INCLASS_NO_PURE_DECLS \
	FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_PlayMontageAndWait_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYABILITIES_API UClass* StaticClass<class UAbilityTask_PlayMontageAndWait>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_PlayMontageAndWait_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
