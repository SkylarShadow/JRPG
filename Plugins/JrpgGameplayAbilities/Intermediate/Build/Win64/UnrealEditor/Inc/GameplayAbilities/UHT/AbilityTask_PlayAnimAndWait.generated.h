// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Abilities/Tasks/AbilityTask_PlayAnimAndWait.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAbilityTask_PlayAnimAndWait;
class UAnimMontage;
class UAnimSequence;
class UGameplayAbility;
#ifdef GAMEPLAYABILITIES_AbilityTask_PlayAnimAndWait_generated_h
#error "AbilityTask_PlayAnimAndWait.generated.h already included, missing '#pragma once' in AbilityTask_PlayAnimAndWait.h"
#endif
#define GAMEPLAYABILITIES_AbilityTask_PlayAnimAndWait_generated_h

#define FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_PlayAnimAndWait_h_10_DELEGATE \
GAMEPLAYABILITIES_API void FPlayAnimWaitSimpleDelegate_DelegateWrapper(const FMulticastScriptDelegate& PlayAnimWaitSimpleDelegate);


#define FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_PlayAnimAndWait_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCreatePlayAnimAndWaitProxy); \
	DECLARE_FUNCTION(execOnMontageEnded); \
	DECLARE_FUNCTION(execOnMontageInterrupted); \
	DECLARE_FUNCTION(execOnMontageBlendingOut); \
	DECLARE_FUNCTION(execOnMontageBlendedIn);


#define FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_PlayAnimAndWait_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAbilityTask_PlayAnimAndWait(); \
	friend struct Z_Construct_UClass_UAbilityTask_PlayAnimAndWait_Statics; \
public: \
	DECLARE_CLASS(UAbilityTask_PlayAnimAndWait, UAbilityTask, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayAbilities"), NO_API) \
	DECLARE_SERIALIZER(UAbilityTask_PlayAnimAndWait)


#define FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_PlayAnimAndWait_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAbilityTask_PlayAnimAndWait(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAbilityTask_PlayAnimAndWait(UAbilityTask_PlayAnimAndWait&&); \
	UAbilityTask_PlayAnimAndWait(const UAbilityTask_PlayAnimAndWait&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAbilityTask_PlayAnimAndWait); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilityTask_PlayAnimAndWait); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbilityTask_PlayAnimAndWait) \
	NO_API virtual ~UAbilityTask_PlayAnimAndWait();


#define FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_PlayAnimAndWait_h_14_PROLOG
#define FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_PlayAnimAndWait_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_PlayAnimAndWait_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_PlayAnimAndWait_h_17_INCLASS_NO_PURE_DECLS \
	FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_PlayAnimAndWait_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYABILITIES_API UClass* StaticClass<class UAbilityTask_PlayAnimAndWait>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_PlayAnimAndWait_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
