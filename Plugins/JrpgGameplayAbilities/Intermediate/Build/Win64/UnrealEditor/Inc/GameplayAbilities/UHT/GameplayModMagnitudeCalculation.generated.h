// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameplayModMagnitudeCalculation.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayAttribute;
struct FGameplayEffectSpec;
struct FGameplayTag;
struct FGameplayTagContainer;
#ifdef GAMEPLAYABILITIES_GameplayModMagnitudeCalculation_generated_h
#error "GameplayModMagnitudeCalculation.generated.h already included, missing '#pragma once' in GameplayModMagnitudeCalculation.h"
#endif
#define GAMEPLAYABILITIES_GameplayModMagnitudeCalculation_generated_h

#define FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayModMagnitudeCalculation_h_17_RPC_WRAPPERS \
	virtual float CalculateBaseMagnitude_Implementation(FGameplayEffectSpec const& Spec) const; \
	DECLARE_FUNCTION(execGetTargetSpecTags); \
	DECLARE_FUNCTION(execGetTargetActorTags); \
	DECLARE_FUNCTION(execGetTargetAggregatedTags); \
	DECLARE_FUNCTION(execGetSourceSpecTags); \
	DECLARE_FUNCTION(execGetSourceActorTags); \
	DECLARE_FUNCTION(execGetSourceAggregatedTags); \
	DECLARE_FUNCTION(execGetSetByCallerMagnitudeByName); \
	DECLARE_FUNCTION(execGetSetByCallerMagnitudeByTag); \
	DECLARE_FUNCTION(execK2_GetCapturedAttributeMagnitude); \
	DECLARE_FUNCTION(execCalculateBaseMagnitude);


#define FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayModMagnitudeCalculation_h_17_CALLBACK_WRAPPERS
#define FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayModMagnitudeCalculation_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUGameplayModMagnitudeCalculation(); \
	friend struct Z_Construct_UClass_UGameplayModMagnitudeCalculation_Statics; \
public: \
	DECLARE_CLASS(UGameplayModMagnitudeCalculation, UGameplayEffectCalculation, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/GameplayAbilities"), NO_API) \
	DECLARE_SERIALIZER(UGameplayModMagnitudeCalculation)


#define FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayModMagnitudeCalculation_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameplayModMagnitudeCalculation(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameplayModMagnitudeCalculation) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameplayModMagnitudeCalculation); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameplayModMagnitudeCalculation); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGameplayModMagnitudeCalculation(UGameplayModMagnitudeCalculation&&); \
	UGameplayModMagnitudeCalculation(const UGameplayModMagnitudeCalculation&); \
public: \
	NO_API virtual ~UGameplayModMagnitudeCalculation();


#define FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayModMagnitudeCalculation_h_12_PROLOG
#define FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayModMagnitudeCalculation_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayModMagnitudeCalculation_h_17_RPC_WRAPPERS \
	FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayModMagnitudeCalculation_h_17_CALLBACK_WRAPPERS \
	FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayModMagnitudeCalculation_h_17_INCLASS \
	FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayModMagnitudeCalculation_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYABILITIES_API UClass* StaticClass<class UGameplayModMagnitudeCalculation>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayModMagnitudeCalculation_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
