// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameplayAbilityAudit.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAMEPLAYABILITIESEDITOR_GameplayAbilityAudit_generated_h
#error "GameplayAbilityAudit.generated.h already included, missing '#pragma once' in GameplayAbilityAudit.h"
#endif
#define GAMEPLAYABILITIESEDITOR_GameplayAbilityAudit_generated_h

#define FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilitiesEditor_Public_GameplayAbilityAudit_h_46_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGameplayAbilityAuditRow_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> GAMEPLAYABILITIESEDITOR_API UScriptStruct* StaticStruct<struct FGameplayAbilityAuditRow>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilitiesEditor_Public_GameplayAbilityAudit_h


#define FOREACH_ENUM_EGAMEPLAYABILITYACTIVATIONPATH(op) \
	op(EGameplayAbilityActivationPath::Native) \
	op(EGameplayAbilityActivationPath::Blueprint) \
	op(EGameplayAbilityActivationPath::FromEvent) 

enum class EGameplayAbilityActivationPath : uint8;
template<> struct TIsUEnumClass<EGameplayAbilityActivationPath> { enum { Value = true }; };
template<> GAMEPLAYABILITIESEDITOR_API UEnum* StaticEnum<EGameplayAbilityActivationPath>();

#define FOREACH_ENUM_EGAMEPLAYABILITYENDINBLUEPRINTS(op) \
	op(EGameplayAbilityEndInBlueprints::Missing) \
	op(EGameplayAbilityEndInBlueprints::EndAbility) \
	op(EGameplayAbilityEndInBlueprints::EndAbilityLocally) 

enum class EGameplayAbilityEndInBlueprints : uint8;
template<> struct TIsUEnumClass<EGameplayAbilityEndInBlueprints> { enum { Value = true }; };
template<> GAMEPLAYABILITIESEDITOR_API UEnum* StaticEnum<EGameplayAbilityEndInBlueprints>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
