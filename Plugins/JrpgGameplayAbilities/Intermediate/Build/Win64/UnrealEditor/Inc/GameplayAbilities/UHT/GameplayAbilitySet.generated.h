// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameplayAbilitySet.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAMEPLAYABILITIES_GameplayAbilitySet_generated_h
#error "GameplayAbilitySet.generated.h already included, missing '#pragma once' in GameplayAbilitySet.h"
#endif
#define GAMEPLAYABILITIES_GameplayAbilitySet_generated_h

#define FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayAbilitySet_h_45_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGameplayAbilityBindInfo_Statics; \
	GAMEPLAYABILITIES_API static class UScriptStruct* StaticStruct();


template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<struct FGameplayAbilityBindInfo>();

#define FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayAbilitySet_h_63_INCLASS \
private: \
	static void StaticRegisterNativesUGameplayAbilitySet(); \
	friend struct Z_Construct_UClass_UGameplayAbilitySet_Statics; \
public: \
	DECLARE_CLASS(UGameplayAbilitySet, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayAbilities"), NO_API) \
	DECLARE_SERIALIZER(UGameplayAbilitySet)


#define FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayAbilitySet_h_63_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameplayAbilitySet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameplayAbilitySet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameplayAbilitySet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameplayAbilitySet); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGameplayAbilitySet(UGameplayAbilitySet&&); \
	UGameplayAbilitySet(const UGameplayAbilitySet&); \
public: \
	NO_API virtual ~UGameplayAbilitySet();


#define FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayAbilitySet_h_60_PROLOG
#define FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayAbilitySet_h_63_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayAbilitySet_h_63_INCLASS \
	FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayAbilitySet_h_63_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYABILITIES_API UClass* StaticClass<class UGameplayAbilitySet>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayAbilitySet_h


#define FOREACH_ENUM_EGAMEPLAYABILITYINPUTBINDS(op) \
	op(EGameplayAbilityInputBinds::Ability1) \
	op(EGameplayAbilityInputBinds::Ability2) \
	op(EGameplayAbilityInputBinds::Ability3) \
	op(EGameplayAbilityInputBinds::Ability4) \
	op(EGameplayAbilityInputBinds::Ability5) \
	op(EGameplayAbilityInputBinds::Ability6) \
	op(EGameplayAbilityInputBinds::Ability7) \
	op(EGameplayAbilityInputBinds::Ability8) \
	op(EGameplayAbilityInputBinds::Ability9) 

namespace EGameplayAbilityInputBinds { enum Type : int; }
template<> GAMEPLAYABILITIES_API UEnum* StaticEnum<EGameplayAbilityInputBinds::Type>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
