// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameplayCueInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayCueParameters;
#ifdef GAMEPLAYABILITIES_GameplayCueInterface_generated_h
#error "GameplayCueInterface.generated.h already included, missing '#pragma once' in GameplayCueInterface.h"
#endif
#define GAMEPLAYABILITIES_GameplayCueInterface_generated_h

#define FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayCueInterface_h_27_RPC_WRAPPERS \
	DECLARE_FUNCTION(execForwardGameplayCueToParent);


#define FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayCueInterface_h_27_CALLBACK_WRAPPERS
#define FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayCueInterface_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYABILITIES_API UGameplayCueInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameplayCueInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYABILITIES_API, UGameplayCueInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameplayCueInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGameplayCueInterface(UGameplayCueInterface&&); \
	UGameplayCueInterface(const UGameplayCueInterface&); \
public: \
	GAMEPLAYABILITIES_API virtual ~UGameplayCueInterface();


#define FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayCueInterface_h_27_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUGameplayCueInterface(); \
	friend struct Z_Construct_UClass_UGameplayCueInterface_Statics; \
public: \
	DECLARE_CLASS(UGameplayCueInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/GameplayAbilities"), GAMEPLAYABILITIES_API) \
	DECLARE_SERIALIZER(UGameplayCueInterface)


#define FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayCueInterface_h_27_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayCueInterface_h_27_GENERATED_UINTERFACE_BODY() \
	FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayCueInterface_h_27_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayCueInterface_h_27_INCLASS_IINTERFACE \
protected: \
	virtual ~IGameplayCueInterface() {} \
public: \
	typedef UGameplayCueInterface UClassType; \
	typedef IGameplayCueInterface ThisClass; \
	static void Execute_BlueprintCustomHandler(UObject* O, EGameplayCueEvent::Type EventType, FGameplayCueParameters const& Parameters); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayCueInterface_h_24_PROLOG
#define FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayCueInterface_h_32_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayCueInterface_h_27_RPC_WRAPPERS \
	FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayCueInterface_h_27_CALLBACK_WRAPPERS \
	FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayCueInterface_h_27_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYABILITIES_API UClass* StaticClass<class UGameplayCueInterface>();

#define FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayCueInterface_h_103_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FActiveGameplayCue_Statics; \
	GAMEPLAYABILITIES_API static class UScriptStruct* StaticStruct(); \
	typedef FFastArraySerializerItem Super;


template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<struct FActiveGameplayCue>();

#define FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayCueInterface_h_133_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FActiveGameplayCueContainer_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FFastArraySerializer Super; \
	UE_NET_DECLARE_FASTARRAY(FActiveGameplayCueContainer, GameplayCues, );


template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<struct FActiveGameplayCueContainer>();

#define FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayCueInterface_h_188_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGameplayCueTag_Statics; \
	GAMEPLAYABILITIES_API static class UScriptStruct* StaticStruct();


template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<struct FGameplayCueTag>();

#define FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayCueInterface_h_208_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMinimalGameplayCueReplicationProxy_Statics; \
	static class UScriptStruct* StaticStruct();


template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<struct FMinimalGameplayCueReplicationProxy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayCueInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
