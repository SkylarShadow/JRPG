// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayAbilities/Public/ScalableFloat.h"
#include "DataRegistry/Public/DataRegistryId.h"
#include "Runtime/Engine/Classes/Engine/CurveTable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeScalableFloat() {}

// Begin Cross Module References
DATAREGISTRY_API UScriptStruct* Z_Construct_UScriptStruct_FDataRegistryType();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCurveTableRowHandle();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FScalableFloat();
UPackage* Z_Construct_UPackage__Script_GameplayAbilities();
// End Cross Module References

// Begin ScriptStruct FScalableFloat
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ScalableFloat;
class UScriptStruct* FScalableFloat::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ScalableFloat.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ScalableFloat.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FScalableFloat, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("ScalableFloat"));
	}
	return Z_Registration_Info_UScriptStruct_ScalableFloat.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FScalableFloat>()
{
	return FScalableFloat::StaticStruct();
}
struct Z_Construct_UScriptStruct_FScalableFloat_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Generic numerical value in the form Value * Curve[Level] */" },
#endif
		{ "ModuleRelativePath", "Public/ScalableFloat.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Generic numerical value in the form Value * Curve[Level]" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "ScalableFloat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Raw value, is multiplied by curve */" },
#endif
		{ "ModuleRelativePath", "Public/ScalableFloat.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Raw value, is multiplied by curve" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Curve_MetaData[] = {
		{ "Category", "ScalableFloat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Curve that is evaluated at a specific level. If found, it is multipled by Value */" },
#endif
		{ "ModuleRelativePath", "Public/ScalableFloat.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Curve that is evaluated at a specific level. If found, it is multipled by Value" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RegistryType_MetaData[] = {
		{ "Category", "ScalableFloat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Name of Data Registry containing curve to use. If set the RowName inside Curve is used as the item name */" },
#endif
		{ "ModuleRelativePath", "Public/ScalableFloat.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Name of Data Registry containing curve to use. If set the RowName inside Curve is used as the item name" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Curve;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RegistryType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FScalableFloat>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FScalableFloat_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FScalableFloat, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FScalableFloat_Statics::NewProp_Curve = { "Curve", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FScalableFloat, Curve), Z_Construct_UScriptStruct_FCurveTableRowHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Curve_MetaData), NewProp_Curve_MetaData) }; // 1199935626
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FScalableFloat_Statics::NewProp_RegistryType = { "RegistryType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FScalableFloat, RegistryType), Z_Construct_UScriptStruct_FDataRegistryType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RegistryType_MetaData), NewProp_RegistryType_MetaData) }; // 3231796324
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FScalableFloat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScalableFloat_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScalableFloat_Statics::NewProp_Curve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScalableFloat_Statics::NewProp_RegistryType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScalableFloat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FScalableFloat_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
	nullptr,
	&NewStructOps,
	"ScalableFloat",
	Z_Construct_UScriptStruct_FScalableFloat_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScalableFloat_Statics::PropPointers),
	sizeof(FScalableFloat),
	alignof(FScalableFloat),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScalableFloat_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FScalableFloat_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FScalableFloat()
{
	if (!Z_Registration_Info_UScriptStruct_ScalableFloat.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ScalableFloat.InnerSingleton, Z_Construct_UScriptStruct_FScalableFloat_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ScalableFloat.InnerSingleton;
}
// End ScriptStruct FScalableFloat

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_ScalableFloat_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FScalableFloat::StaticStruct, Z_Construct_UScriptStruct_FScalableFloat_Statics::NewStructOps, TEXT("ScalableFloat"), &Z_Registration_Info_UScriptStruct_ScalableFloat, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FScalableFloat), 1548651388U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_ScalableFloat_h_3209922115(TEXT("/Script/GameplayAbilities"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_ScalableFloat_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_ScalableFloat_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
