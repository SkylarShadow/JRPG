// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Abilities/Tasks/AbilityTask_SpawnActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UAbilityTask_SpawnActor;
class UGameplayAbility;
struct FGameplayAbilityTargetDataHandle;
#ifdef GAMEPLAYABILITIES_AbilityTask_SpawnActor_generated_h
#error "AbilityTask_SpawnActor.generated.h already included, missing '#pragma once' in AbilityTask_SpawnActor.h"
#endif
#define GAMEPLAYABILITIES_AbilityTask_SpawnActor_generated_h

#define FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_SpawnActor_h_12_DELEGATE \
GAMEPLAYABILITIES_API void FSpawnActorDelegate_DelegateWrapper(const FMulticastScriptDelegate& SpawnActorDelegate, AActor* SpawnedActor);


#define FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_SpawnActor_h_29_RPC_WRAPPERS \
	DECLARE_FUNCTION(execFinishSpawningActor); \
	DECLARE_FUNCTION(execBeginSpawningActor); \
	DECLARE_FUNCTION(execSpawnActor);


#define FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_SpawnActor_h_29_INCLASS \
private: \
	static void StaticRegisterNativesUAbilityTask_SpawnActor(); \
	friend struct Z_Construct_UClass_UAbilityTask_SpawnActor_Statics; \
public: \
	DECLARE_CLASS(UAbilityTask_SpawnActor, UAbilityTask, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayAbilities"), NO_API) \
	DECLARE_SERIALIZER(UAbilityTask_SpawnActor)


#define FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_SpawnActor_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAbilityTask_SpawnActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbilityTask_SpawnActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAbilityTask_SpawnActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilityTask_SpawnActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAbilityTask_SpawnActor(UAbilityTask_SpawnActor&&); \
	UAbilityTask_SpawnActor(const UAbilityTask_SpawnActor&); \
public: \
	NO_API virtual ~UAbilityTask_SpawnActor();


#define FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_SpawnActor_h_26_PROLOG
#define FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_SpawnActor_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_SpawnActor_h_29_RPC_WRAPPERS \
	FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_SpawnActor_h_29_INCLASS \
	FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_SpawnActor_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYABILITIES_API UClass* StaticClass<class UAbilityTask_SpawnActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_SpawnActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
