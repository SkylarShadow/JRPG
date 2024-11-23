// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Abilities/Async/AbilityAsync_WaitAttributeChanged.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UAbilityAsync_WaitAttributeChanged;
struct FGameplayAttribute;
#ifdef GAMEPLAYABILITIES_AbilityAsync_WaitAttributeChanged_generated_h
#error "AbilityAsync_WaitAttributeChanged.generated.h already included, missing '#pragma once' in AbilityAsync_WaitAttributeChanged.h"
#endif
#define GAMEPLAYABILITIES_AbilityAsync_WaitAttributeChanged_generated_h

#define FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitAttributeChanged_h_27_DELEGATE \
static void FAsyncWaitAttributeChangedDelegate_DelegateWrapper(const FMulticastScriptDelegate& AsyncWaitAttributeChangedDelegate, FGameplayAttribute Attribute, float NewValue, float OldValue);


#define FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitAttributeChanged_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execWaitForAttributeChanged);


#define FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitAttributeChanged_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAbilityAsync_WaitAttributeChanged(); \
	friend struct Z_Construct_UClass_UAbilityAsync_WaitAttributeChanged_Statics; \
public: \
	DECLARE_CLASS(UAbilityAsync_WaitAttributeChanged, UAbilityAsync, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayAbilities"), NO_API) \
	DECLARE_SERIALIZER(UAbilityAsync_WaitAttributeChanged)


#define FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitAttributeChanged_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAbilityAsync_WaitAttributeChanged(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAbilityAsync_WaitAttributeChanged(UAbilityAsync_WaitAttributeChanged&&); \
	UAbilityAsync_WaitAttributeChanged(const UAbilityAsync_WaitAttributeChanged&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAbilityAsync_WaitAttributeChanged); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilityAsync_WaitAttributeChanged); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbilityAsync_WaitAttributeChanged) \
	NO_API virtual ~UAbilityAsync_WaitAttributeChanged();


#define FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitAttributeChanged_h_12_PROLOG
#define FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitAttributeChanged_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitAttributeChanged_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitAttributeChanged_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitAttributeChanged_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYABILITIES_API UClass* StaticClass<class UAbilityAsync_WaitAttributeChanged>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitAttributeChanged_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
