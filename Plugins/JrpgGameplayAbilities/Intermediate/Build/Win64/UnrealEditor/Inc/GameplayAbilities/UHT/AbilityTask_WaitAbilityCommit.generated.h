// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Abilities/Tasks/AbilityTask_WaitAbilityCommit.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAbilityTask_WaitAbilityCommit;
class UGameplayAbility;
struct FGameplayTag;
struct FGameplayTagQuery;
#ifdef GAMEPLAYABILITIES_AbilityTask_WaitAbilityCommit_generated_h
#error "AbilityTask_WaitAbilityCommit.generated.h already included, missing '#pragma once' in AbilityTask_WaitAbilityCommit.h"
#endif
#define GAMEPLAYABILITIES_AbilityTask_WaitAbilityCommit_generated_h

#define FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitAbilityCommit_h_10_DELEGATE \
GAMEPLAYABILITIES_API void FWaitAbilityCommitDelegate_DelegateWrapper(const FMulticastScriptDelegate& WaitAbilityCommitDelegate, UGameplayAbility* ActivatedAbility);


#define FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitAbilityCommit_h_18_RPC_WRAPPERS \
	DECLARE_FUNCTION(execWaitForAbilityCommit_Query); \
	DECLARE_FUNCTION(execWaitForAbilityCommit); \
	DECLARE_FUNCTION(execOnAbilityCommit);


#define FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitAbilityCommit_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUAbilityTask_WaitAbilityCommit(); \
	friend struct Z_Construct_UClass_UAbilityTask_WaitAbilityCommit_Statics; \
public: \
	DECLARE_CLASS(UAbilityTask_WaitAbilityCommit, UAbilityTask, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayAbilities"), NO_API) \
	DECLARE_SERIALIZER(UAbilityTask_WaitAbilityCommit)


#define FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitAbilityCommit_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAbilityTask_WaitAbilityCommit(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbilityTask_WaitAbilityCommit) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAbilityTask_WaitAbilityCommit); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilityTask_WaitAbilityCommit); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAbilityTask_WaitAbilityCommit(UAbilityTask_WaitAbilityCommit&&); \
	UAbilityTask_WaitAbilityCommit(const UAbilityTask_WaitAbilityCommit&); \
public: \
	NO_API virtual ~UAbilityTask_WaitAbilityCommit();


#define FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitAbilityCommit_h_15_PROLOG
#define FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitAbilityCommit_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitAbilityCommit_h_18_RPC_WRAPPERS \
	FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitAbilityCommit_h_18_INCLASS \
	FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitAbilityCommit_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYABILITIES_API UClass* StaticClass<class UAbilityTask_WaitAbilityCommit>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitAbilityCommit_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
