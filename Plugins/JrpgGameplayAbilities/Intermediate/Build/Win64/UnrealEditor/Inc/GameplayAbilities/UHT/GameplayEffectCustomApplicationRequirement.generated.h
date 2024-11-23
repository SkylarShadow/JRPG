// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameplayEffectCustomApplicationRequirement.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAbilitySystemComponent;
class UGameplayEffect;
struct FGameplayEffectSpec;
#ifdef GAMEPLAYABILITIES_GameplayEffectCustomApplicationRequirement_generated_h
#error "GameplayEffectCustomApplicationRequirement.generated.h already included, missing '#pragma once' in GameplayEffectCustomApplicationRequirement.h"
#endif
#define GAMEPLAYABILITIES_GameplayEffectCustomApplicationRequirement_generated_h

#define FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectCustomApplicationRequirement_h_18_RPC_WRAPPERS \
	virtual bool CanApplyGameplayEffect_Implementation(const UGameplayEffect* GameplayEffect, FGameplayEffectSpec const& Spec, UAbilitySystemComponent* ASC) const; \
	DECLARE_FUNCTION(execCanApplyGameplayEffect);


#define FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectCustomApplicationRequirement_h_18_CALLBACK_WRAPPERS
#define FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectCustomApplicationRequirement_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUGameplayEffectCustomApplicationRequirement(); \
	friend struct Z_Construct_UClass_UGameplayEffectCustomApplicationRequirement_Statics; \
public: \
	DECLARE_CLASS(UGameplayEffectCustomApplicationRequirement, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/GameplayAbilities"), NO_API) \
	DECLARE_SERIALIZER(UGameplayEffectCustomApplicationRequirement)


#define FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectCustomApplicationRequirement_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameplayEffectCustomApplicationRequirement(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameplayEffectCustomApplicationRequirement) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameplayEffectCustomApplicationRequirement); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameplayEffectCustomApplicationRequirement); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGameplayEffectCustomApplicationRequirement(UGameplayEffectCustomApplicationRequirement&&); \
	UGameplayEffectCustomApplicationRequirement(const UGameplayEffectCustomApplicationRequirement&); \
public: \
	NO_API virtual ~UGameplayEffectCustomApplicationRequirement();


#define FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectCustomApplicationRequirement_h_13_PROLOG
#define FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectCustomApplicationRequirement_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectCustomApplicationRequirement_h_18_RPC_WRAPPERS \
	FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectCustomApplicationRequirement_h_18_CALLBACK_WRAPPERS \
	FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectCustomApplicationRequirement_h_18_INCLASS \
	FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectCustomApplicationRequirement_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYABILITIES_API UClass* StaticClass<class UGameplayEffectCustomApplicationRequirement>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectCustomApplicationRequirement_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
