// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayAbilities/Private/AbilitySystemCheatManagerExtension.h"
#include "Runtime/Engine/Classes/GameFramework/CheatManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbilitySystemCheatManagerExtension() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UCheatManagerExtension();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemCheatManagerExtension();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemCheatManagerExtension_NoRegister();
UPackage* Z_Construct_UPackage__Script_GameplayAbilities();
// End Cross Module References

// Begin Class UAbilitySystemCheatManagerExtension Function AbilityActivate
struct Z_Construct_UFunction_UAbilitySystemCheatManagerExtension_AbilityActivate_Statics
{
	struct AbilitySystemCheatManagerExtension_eventAbilityActivate_Parms
	{
		FString PartialName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Activate a previously granted GameplayAbility on the owning Player */" },
#endif
		{ "ModuleRelativePath", "Private/AbilitySystemCheatManagerExtension.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Activate a previously granted GameplayAbility on the owning Player" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PartialName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_PartialName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAbilitySystemCheatManagerExtension_AbilityActivate_Statics::NewProp_PartialName = { "PartialName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilitySystemCheatManagerExtension_eventAbilityActivate_Parms, PartialName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PartialName_MetaData), NewProp_PartialName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilitySystemCheatManagerExtension_AbilityActivate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitySystemCheatManagerExtension_AbilityActivate_Statics::NewProp_PartialName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitySystemCheatManagerExtension_AbilityActivate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilitySystemCheatManagerExtension_AbilityActivate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilitySystemCheatManagerExtension, nullptr, "AbilityActivate", nullptr, nullptr, Z_Construct_UFunction_UAbilitySystemCheatManagerExtension_AbilityActivate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitySystemCheatManagerExtension_AbilityActivate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAbilitySystemCheatManagerExtension_AbilityActivate_Statics::AbilitySystemCheatManagerExtension_eventAbilityActivate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020601, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitySystemCheatManagerExtension_AbilityActivate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilitySystemCheatManagerExtension_AbilityActivate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAbilitySystemCheatManagerExtension_AbilityActivate_Statics::AbilitySystemCheatManagerExtension_eventAbilityActivate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbilitySystemCheatManagerExtension_AbilityActivate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilitySystemCheatManagerExtension_AbilityActivate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilitySystemCheatManagerExtension::execAbilityActivate)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_PartialName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AbilityActivate(Z_Param_PartialName);
	P_NATIVE_END;
}
// End Class UAbilitySystemCheatManagerExtension Function AbilityActivate

// Begin Class UAbilitySystemCheatManagerExtension Function AbilityCancel
struct Z_Construct_UFunction_UAbilitySystemCheatManagerExtension_AbilityCancel_Statics
{
	struct AbilitySystemCheatManagerExtension_eventAbilityCancel_Parms
	{
		FString PartialName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Cancel a previously activated GameplayAbility on the owning Player */" },
#endif
		{ "ModuleRelativePath", "Private/AbilitySystemCheatManagerExtension.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cancel a previously activated GameplayAbility on the owning Player" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PartialName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_PartialName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAbilitySystemCheatManagerExtension_AbilityCancel_Statics::NewProp_PartialName = { "PartialName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilitySystemCheatManagerExtension_eventAbilityCancel_Parms, PartialName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PartialName_MetaData), NewProp_PartialName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilitySystemCheatManagerExtension_AbilityCancel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitySystemCheatManagerExtension_AbilityCancel_Statics::NewProp_PartialName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitySystemCheatManagerExtension_AbilityCancel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilitySystemCheatManagerExtension_AbilityCancel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilitySystemCheatManagerExtension, nullptr, "AbilityCancel", nullptr, nullptr, Z_Construct_UFunction_UAbilitySystemCheatManagerExtension_AbilityCancel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitySystemCheatManagerExtension_AbilityCancel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAbilitySystemCheatManagerExtension_AbilityCancel_Statics::AbilitySystemCheatManagerExtension_eventAbilityCancel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020601, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitySystemCheatManagerExtension_AbilityCancel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilitySystemCheatManagerExtension_AbilityCancel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAbilitySystemCheatManagerExtension_AbilityCancel_Statics::AbilitySystemCheatManagerExtension_eventAbilityCancel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbilitySystemCheatManagerExtension_AbilityCancel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilitySystemCheatManagerExtension_AbilityCancel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilitySystemCheatManagerExtension::execAbilityCancel)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_PartialName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AbilityCancel(Z_Param_PartialName);
	P_NATIVE_END;
}
// End Class UAbilitySystemCheatManagerExtension Function AbilityCancel

// Begin Class UAbilitySystemCheatManagerExtension Function AbilityGrant
struct Z_Construct_UFunction_UAbilitySystemCheatManagerExtension_AbilityGrant_Statics
{
	struct AbilitySystemCheatManagerExtension_eventAbilityGrant_Parms
	{
		FString AssetSearchString;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Grant a specified GameplayAbility to the owning Player */" },
#endif
		{ "ModuleRelativePath", "Private/AbilitySystemCheatManagerExtension.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Grant a specified GameplayAbility to the owning Player" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetSearchString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_AssetSearchString;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAbilitySystemCheatManagerExtension_AbilityGrant_Statics::NewProp_AssetSearchString = { "AssetSearchString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilitySystemCheatManagerExtension_eventAbilityGrant_Parms, AssetSearchString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetSearchString_MetaData), NewProp_AssetSearchString_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilitySystemCheatManagerExtension_AbilityGrant_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitySystemCheatManagerExtension_AbilityGrant_Statics::NewProp_AssetSearchString,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitySystemCheatManagerExtension_AbilityGrant_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilitySystemCheatManagerExtension_AbilityGrant_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilitySystemCheatManagerExtension, nullptr, "AbilityGrant", nullptr, nullptr, Z_Construct_UFunction_UAbilitySystemCheatManagerExtension_AbilityGrant_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitySystemCheatManagerExtension_AbilityGrant_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAbilitySystemCheatManagerExtension_AbilityGrant_Statics::AbilitySystemCheatManagerExtension_eventAbilityGrant_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020601, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitySystemCheatManagerExtension_AbilityGrant_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilitySystemCheatManagerExtension_AbilityGrant_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAbilitySystemCheatManagerExtension_AbilityGrant_Statics::AbilitySystemCheatManagerExtension_eventAbilityGrant_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbilitySystemCheatManagerExtension_AbilityGrant()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilitySystemCheatManagerExtension_AbilityGrant_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilitySystemCheatManagerExtension::execAbilityGrant)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_AssetSearchString);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AbilityGrant(Z_Param_AssetSearchString);
	P_NATIVE_END;
}
// End Class UAbilitySystemCheatManagerExtension Function AbilityGrant

// Begin Class UAbilitySystemCheatManagerExtension Function AbilityListGranted
struct Z_Construct_UFunction_UAbilitySystemCheatManagerExtension_AbilityListGranted_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** List all of the Abilities Granted to the owning Player */" },
#endif
		{ "ModuleRelativePath", "Private/AbilitySystemCheatManagerExtension.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List all of the Abilities Granted to the owning Player" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilitySystemCheatManagerExtension_AbilityListGranted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilitySystemCheatManagerExtension, nullptr, "AbilityListGranted", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020601, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitySystemCheatManagerExtension_AbilityListGranted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilitySystemCheatManagerExtension_AbilityListGranted_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UAbilitySystemCheatManagerExtension_AbilityListGranted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilitySystemCheatManagerExtension_AbilityListGranted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilitySystemCheatManagerExtension::execAbilityListGranted)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AbilityListGranted();
	P_NATIVE_END;
}
// End Class UAbilitySystemCheatManagerExtension Function AbilityListGranted

// Begin Class UAbilitySystemCheatManagerExtension Function EffectApply
struct Z_Construct_UFunction_UAbilitySystemCheatManagerExtension_EffectApply_Statics
{
	struct AbilitySystemCheatManagerExtension_eventEffectApply_Parms
	{
		FString PartialName;
		float EffectLevel;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Apply a Gameplay Effect on the owning Player */" },
#endif
		{ "CPP_Default_EffectLevel", "-1.000000" },
		{ "ModuleRelativePath", "Private/AbilitySystemCheatManagerExtension.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Apply a Gameplay Effect on the owning Player" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PartialName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_PartialName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EffectLevel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAbilitySystemCheatManagerExtension_EffectApply_Statics::NewProp_PartialName = { "PartialName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilitySystemCheatManagerExtension_eventEffectApply_Parms, PartialName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PartialName_MetaData), NewProp_PartialName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAbilitySystemCheatManagerExtension_EffectApply_Statics::NewProp_EffectLevel = { "EffectLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilitySystemCheatManagerExtension_eventEffectApply_Parms, EffectLevel), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilitySystemCheatManagerExtension_EffectApply_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitySystemCheatManagerExtension_EffectApply_Statics::NewProp_PartialName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitySystemCheatManagerExtension_EffectApply_Statics::NewProp_EffectLevel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitySystemCheatManagerExtension_EffectApply_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilitySystemCheatManagerExtension_EffectApply_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilitySystemCheatManagerExtension, nullptr, "EffectApply", nullptr, nullptr, Z_Construct_UFunction_UAbilitySystemCheatManagerExtension_EffectApply_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitySystemCheatManagerExtension_EffectApply_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAbilitySystemCheatManagerExtension_EffectApply_Statics::AbilitySystemCheatManagerExtension_eventEffectApply_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020601, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitySystemCheatManagerExtension_EffectApply_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilitySystemCheatManagerExtension_EffectApply_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAbilitySystemCheatManagerExtension_EffectApply_Statics::AbilitySystemCheatManagerExtension_eventEffectApply_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbilitySystemCheatManagerExtension_EffectApply()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilitySystemCheatManagerExtension_EffectApply_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilitySystemCheatManagerExtension::execEffectApply)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_PartialName);
	P_GET_PROPERTY(FFloatProperty,Z_Param_EffectLevel);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EffectApply(Z_Param_PartialName,Z_Param_EffectLevel);
	P_NATIVE_END;
}
// End Class UAbilitySystemCheatManagerExtension Function EffectApply

// Begin Class UAbilitySystemCheatManagerExtension Function EffectListActive
struct Z_Construct_UFunction_UAbilitySystemCheatManagerExtension_EffectListActive_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** List the Active Gameplay Effects on the owning Player */" },
#endif
		{ "ModuleRelativePath", "Private/AbilitySystemCheatManagerExtension.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List the Active Gameplay Effects on the owning Player" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilitySystemCheatManagerExtension_EffectListActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilitySystemCheatManagerExtension, nullptr, "EffectListActive", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020601, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitySystemCheatManagerExtension_EffectListActive_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilitySystemCheatManagerExtension_EffectListActive_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UAbilitySystemCheatManagerExtension_EffectListActive()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilitySystemCheatManagerExtension_EffectListActive_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilitySystemCheatManagerExtension::execEffectListActive)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EffectListActive();
	P_NATIVE_END;
}
// End Class UAbilitySystemCheatManagerExtension Function EffectListActive

// Begin Class UAbilitySystemCheatManagerExtension Function EffectRemove
struct Z_Construct_UFunction_UAbilitySystemCheatManagerExtension_EffectRemove_Statics
{
	struct AbilitySystemCheatManagerExtension_eventEffectRemove_Parms
	{
		FString NameOrHandle;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Remove an Active Gameplay Effect on the owning Player */" },
#endif
		{ "ModuleRelativePath", "Private/AbilitySystemCheatManagerExtension.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Remove an Active Gameplay Effect on the owning Player" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NameOrHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_NameOrHandle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAbilitySystemCheatManagerExtension_EffectRemove_Statics::NewProp_NameOrHandle = { "NameOrHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilitySystemCheatManagerExtension_eventEffectRemove_Parms, NameOrHandle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NameOrHandle_MetaData), NewProp_NameOrHandle_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilitySystemCheatManagerExtension_EffectRemove_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitySystemCheatManagerExtension_EffectRemove_Statics::NewProp_NameOrHandle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitySystemCheatManagerExtension_EffectRemove_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilitySystemCheatManagerExtension_EffectRemove_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilitySystemCheatManagerExtension, nullptr, "EffectRemove", nullptr, nullptr, Z_Construct_UFunction_UAbilitySystemCheatManagerExtension_EffectRemove_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitySystemCheatManagerExtension_EffectRemove_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAbilitySystemCheatManagerExtension_EffectRemove_Statics::AbilitySystemCheatManagerExtension_eventEffectRemove_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020601, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitySystemCheatManagerExtension_EffectRemove_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilitySystemCheatManagerExtension_EffectRemove_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAbilitySystemCheatManagerExtension_EffectRemove_Statics::AbilitySystemCheatManagerExtension_eventEffectRemove_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbilitySystemCheatManagerExtension_EffectRemove()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilitySystemCheatManagerExtension_EffectRemove_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilitySystemCheatManagerExtension::execEffectRemove)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_NameOrHandle);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EffectRemove(Z_Param_NameOrHandle);
	P_NATIVE_END;
}
// End Class UAbilitySystemCheatManagerExtension Function EffectRemove

// Begin Class UAbilitySystemCheatManagerExtension
void UAbilitySystemCheatManagerExtension::StaticRegisterNativesUAbilitySystemCheatManagerExtension()
{
	UClass* Class = UAbilitySystemCheatManagerExtension::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AbilityActivate", &UAbilitySystemCheatManagerExtension::execAbilityActivate },
		{ "AbilityCancel", &UAbilitySystemCheatManagerExtension::execAbilityCancel },
		{ "AbilityGrant", &UAbilitySystemCheatManagerExtension::execAbilityGrant },
		{ "AbilityListGranted", &UAbilitySystemCheatManagerExtension::execAbilityListGranted },
		{ "EffectApply", &UAbilitySystemCheatManagerExtension::execEffectApply },
		{ "EffectListActive", &UAbilitySystemCheatManagerExtension::execEffectListActive },
		{ "EffectRemove", &UAbilitySystemCheatManagerExtension::execEffectRemove },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAbilitySystemCheatManagerExtension);
UClass* Z_Construct_UClass_UAbilitySystemCheatManagerExtension_NoRegister()
{
	return UAbilitySystemCheatManagerExtension::StaticClass();
}
struct Z_Construct_UClass_UAbilitySystemCheatManagerExtension_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Cheats related to GAS */" },
#endif
		{ "IncludePath", "AbilitySystemCheatManagerExtension.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Private/AbilitySystemCheatManagerExtension.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cheats related to GAS" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAbilitySystemCheatManagerExtension_AbilityActivate, "AbilityActivate" }, // 376258915
		{ &Z_Construct_UFunction_UAbilitySystemCheatManagerExtension_AbilityCancel, "AbilityCancel" }, // 2755269826
		{ &Z_Construct_UFunction_UAbilitySystemCheatManagerExtension_AbilityGrant, "AbilityGrant" }, // 722572472
		{ &Z_Construct_UFunction_UAbilitySystemCheatManagerExtension_AbilityListGranted, "AbilityListGranted" }, // 2472341360
		{ &Z_Construct_UFunction_UAbilitySystemCheatManagerExtension_EffectApply, "EffectApply" }, // 1855260787
		{ &Z_Construct_UFunction_UAbilitySystemCheatManagerExtension_EffectListActive, "EffectListActive" }, // 3038756464
		{ &Z_Construct_UFunction_UAbilitySystemCheatManagerExtension_EffectRemove, "EffectRemove" }, // 606169639
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAbilitySystemCheatManagerExtension>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAbilitySystemCheatManagerExtension_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCheatManagerExtension,
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilitySystemCheatManagerExtension_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAbilitySystemCheatManagerExtension_Statics::ClassParams = {
	&UAbilitySystemCheatManagerExtension::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilitySystemCheatManagerExtension_Statics::Class_MetaDataParams), Z_Construct_UClass_UAbilitySystemCheatManagerExtension_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAbilitySystemCheatManagerExtension()
{
	if (!Z_Registration_Info_UClass_UAbilitySystemCheatManagerExtension.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAbilitySystemCheatManagerExtension.OuterSingleton, Z_Construct_UClass_UAbilitySystemCheatManagerExtension_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAbilitySystemCheatManagerExtension.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UClass* StaticClass<UAbilitySystemCheatManagerExtension>()
{
	return UAbilitySystemCheatManagerExtension::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAbilitySystemCheatManagerExtension);
UAbilitySystemCheatManagerExtension::~UAbilitySystemCheatManagerExtension() {}
// End Class UAbilitySystemCheatManagerExtension

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Private_AbilitySystemCheatManagerExtension_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAbilitySystemCheatManagerExtension, UAbilitySystemCheatManagerExtension::StaticClass, TEXT("UAbilitySystemCheatManagerExtension"), &Z_Registration_Info_UClass_UAbilitySystemCheatManagerExtension, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAbilitySystemCheatManagerExtension), 1459265591U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Private_AbilitySystemCheatManagerExtension_h_55245358(TEXT("/Script/GameplayAbilities"),
	Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Private_AbilitySystemCheatManagerExtension_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Private_AbilitySystemCheatManagerExtension_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
