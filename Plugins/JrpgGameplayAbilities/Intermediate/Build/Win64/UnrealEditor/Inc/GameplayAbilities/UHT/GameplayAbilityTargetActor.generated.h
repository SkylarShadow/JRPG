// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Abilities/GameplayAbilityTargetActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAMEPLAYABILITIES_GameplayAbilityTargetActor_generated_h
#error "GameplayAbilityTargetActor.generated.h already included, missing '#pragma once' in GameplayAbilityTargetActor.h"
#endif
#define GAMEPLAYABILITIES_GameplayAbilityTargetActor_generated_h

#define FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityTargetActor_h_27_RPC_WRAPPERS \
	DECLARE_FUNCTION(execCancelTargeting); \
	DECLARE_FUNCTION(execConfirmTargeting);


#define FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityTargetActor_h_27_INCLASS \
private: \
	static void StaticRegisterNativesAGameplayAbilityTargetActor(); \
	friend struct Z_Construct_UClass_AGameplayAbilityTargetActor_Statics; \
public: \
	DECLARE_CLASS(AGameplayAbilityTargetActor, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayAbilities"), NO_API) \
	DECLARE_SERIALIZER(AGameplayAbilityTargetActor) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		StartLocation=NETFIELD_REP_START, \
		bDestroyOnConfirmation, \
		SourceActor, \
		Filter, \
		bDebug, \
		NETFIELD_REP_END=bDebug	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityTargetActor_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGameplayAbilityTargetActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGameplayAbilityTargetActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGameplayAbilityTargetActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameplayAbilityTargetActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AGameplayAbilityTargetActor(AGameplayAbilityTargetActor&&); \
	AGameplayAbilityTargetActor(const AGameplayAbilityTargetActor&); \
public: \
	NO_API virtual ~AGameplayAbilityTargetActor();


#define FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityTargetActor_h_24_PROLOG
#define FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityTargetActor_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityTargetActor_h_27_RPC_WRAPPERS \
	FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityTargetActor_h_27_INCLASS \
	FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityTargetActor_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYABILITIES_API UClass* StaticClass<class AGameplayAbilityTargetActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityTargetActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
