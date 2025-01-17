// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameplayCueFunctionLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FGameplayCueParameters;
struct FGameplayTag;
struct FHitResult;
#ifdef GAMEPLAYABILITIES_GameplayCueFunctionLibrary_generated_h
#error "GameplayCueFunctionLibrary.generated.h already included, missing '#pragma once' in GameplayCueFunctionLibrary.h"
#endif
#define GAMEPLAYABILITIES_GameplayCueFunctionLibrary_generated_h

#define FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayCueFunctionLibrary_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRemoveGameplayCueOnActor); \
	DECLARE_FUNCTION(execAddGameplayCueOnActor); \
	DECLARE_FUNCTION(execExecuteGameplayCueOnActor); \
	DECLARE_FUNCTION(execMakeGameplayCueParametersFromHitResult);


#define FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayCueFunctionLibrary_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameplayCueFunctionLibrary(); \
	friend struct Z_Construct_UClass_UGameplayCueFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UGameplayCueFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayAbilities"), NO_API) \
	DECLARE_SERIALIZER(UGameplayCueFunctionLibrary)


#define FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayCueFunctionLibrary_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameplayCueFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGameplayCueFunctionLibrary(UGameplayCueFunctionLibrary&&); \
	UGameplayCueFunctionLibrary(const UGameplayCueFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameplayCueFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameplayCueFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameplayCueFunctionLibrary) \
	NO_API virtual ~UGameplayCueFunctionLibrary();


#define FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayCueFunctionLibrary_h_20_PROLOG
#define FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayCueFunctionLibrary_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayCueFunctionLibrary_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayCueFunctionLibrary_h_23_INCLASS_NO_PURE_DECLS \
	FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayCueFunctionLibrary_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYABILITIES_API UClass* StaticClass<class UGameplayCueFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayCueFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
