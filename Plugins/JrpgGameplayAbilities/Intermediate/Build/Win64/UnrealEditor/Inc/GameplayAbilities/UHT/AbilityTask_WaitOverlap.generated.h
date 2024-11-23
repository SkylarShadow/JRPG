// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Abilities/Tasks/AbilityTask_WaitOverlap.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UAbilityTask_WaitOverlap;
class UGameplayAbility;
class UPrimitiveComponent;
struct FGameplayAbilityTargetDataHandle;
struct FHitResult;
#ifdef GAMEPLAYABILITIES_AbilityTask_WaitOverlap_generated_h
#error "AbilityTask_WaitOverlap.generated.h already included, missing '#pragma once' in AbilityTask_WaitOverlap.h"
#endif
#define GAMEPLAYABILITIES_AbilityTask_WaitOverlap_generated_h

#define FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitOverlap_h_9_DELEGATE \
GAMEPLAYABILITIES_API void FWaitOverlapDelegate_DelegateWrapper(const FMulticastScriptDelegate& WaitOverlapDelegate, FGameplayAbilityTargetDataHandle const& TargetData);


#define FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitOverlap_h_22_RPC_WRAPPERS \
	DECLARE_FUNCTION(execWaitForOverlap); \
	DECLARE_FUNCTION(execOnHitCallback);


#define FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitOverlap_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUAbilityTask_WaitOverlap(); \
	friend struct Z_Construct_UClass_UAbilityTask_WaitOverlap_Statics; \
public: \
	DECLARE_CLASS(UAbilityTask_WaitOverlap, UAbilityTask, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayAbilities"), NO_API) \
	DECLARE_SERIALIZER(UAbilityTask_WaitOverlap)


#define FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitOverlap_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAbilityTask_WaitOverlap(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbilityTask_WaitOverlap) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAbilityTask_WaitOverlap); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilityTask_WaitOverlap); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAbilityTask_WaitOverlap(UAbilityTask_WaitOverlap&&); \
	UAbilityTask_WaitOverlap(const UAbilityTask_WaitOverlap&); \
public: \
	NO_API virtual ~UAbilityTask_WaitOverlap();


#define FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitOverlap_h_19_PROLOG
#define FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitOverlap_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitOverlap_h_22_RPC_WRAPPERS \
	FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitOverlap_h_22_INCLASS \
	FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitOverlap_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYABILITIES_API UClass* StaticClass<class UAbilityTask_WaitOverlap>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitOverlap_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
