// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameplayEffectExecutionCalculation.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayEffectCustomExecutionOutput;
struct FGameplayEffectCustomExecutionParameters;
#ifdef GAMEPLAYABILITIES_GameplayEffectExecutionCalculation_generated_h
#error "GameplayEffectExecutionCalculation.generated.h already included, missing '#pragma once' in GameplayEffectExecutionCalculation.h"
#endif
#define GAMEPLAYABILITIES_GameplayEffectExecutionCalculation_generated_h

#define FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectExecutionCalculation_h_21_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGameplayEffectCustomExecutionParameters_Statics; \
	static class UScriptStruct* StaticStruct();


template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<struct FGameplayEffectCustomExecutionParameters>();

#define FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectExecutionCalculation_h_201_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGameplayEffectCustomExecutionOutput_Statics; \
	static class UScriptStruct* StaticStruct();


template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<struct FGameplayEffectCustomExecutionOutput>();

#define FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectExecutionCalculation_h_260_RPC_WRAPPERS \
	virtual void Execute_Implementation(FGameplayEffectCustomExecutionParameters const& ExecutionParams, FGameplayEffectCustomExecutionOutput& OutExecutionOutput) const; \
	DECLARE_FUNCTION(execExecute);


#define FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectExecutionCalculation_h_260_CALLBACK_WRAPPERS
#define FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectExecutionCalculation_h_260_INCLASS \
private: \
	static void StaticRegisterNativesUGameplayEffectExecutionCalculation(); \
	friend struct Z_Construct_UClass_UGameplayEffectExecutionCalculation_Statics; \
public: \
	DECLARE_CLASS(UGameplayEffectExecutionCalculation, UGameplayEffectCalculation, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/GameplayAbilities"), NO_API) \
	DECLARE_SERIALIZER(UGameplayEffectExecutionCalculation)


#define FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectExecutionCalculation_h_260_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameplayEffectExecutionCalculation(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameplayEffectExecutionCalculation) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameplayEffectExecutionCalculation); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameplayEffectExecutionCalculation); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGameplayEffectExecutionCalculation(UGameplayEffectExecutionCalculation&&); \
	UGameplayEffectExecutionCalculation(const UGameplayEffectExecutionCalculation&); \
public: \
	NO_API virtual ~UGameplayEffectExecutionCalculation();


#define FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectExecutionCalculation_h_257_PROLOG
#define FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectExecutionCalculation_h_260_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectExecutionCalculation_h_260_RPC_WRAPPERS \
	FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectExecutionCalculation_h_260_CALLBACK_WRAPPERS \
	FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectExecutionCalculation_h_260_INCLASS \
	FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectExecutionCalculation_h_260_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYABILITIES_API UClass* StaticClass<class UGameplayEffectExecutionCalculation>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectExecutionCalculation_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
