// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayAbilities/Public/GameplayEffectAttributeCaptureDefinition.h"
#include "GameplayAbilities/Public/AttributeSet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayEffectAttributeCaptureDefinition() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UEnum* Z_Construct_UEnum_GameplayAbilities_EGameplayEffectAttributeCaptureSource();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttribute();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureDefinition();
UPackage* Z_Construct_UPackage__Script_GameplayAbilities();
// End Cross Module References

// Begin Enum EGameplayEffectAttributeCaptureSource
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGameplayEffectAttributeCaptureSource;
static UEnum* EGameplayEffectAttributeCaptureSource_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGameplayEffectAttributeCaptureSource.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGameplayEffectAttributeCaptureSource.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GameplayAbilities_EGameplayEffectAttributeCaptureSource, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("EGameplayEffectAttributeCaptureSource"));
	}
	return Z_Registration_Info_UEnum_EGameplayEffectAttributeCaptureSource.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UEnum* StaticEnum<EGameplayEffectAttributeCaptureSource>()
{
	return EGameplayEffectAttributeCaptureSource_StaticEnum();
}
struct Z_Construct_UEnum_GameplayAbilities_EGameplayEffectAttributeCaptureSource_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Enumeration for options of where to capture gameplay attributes from for gameplay effects. */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffectAttributeCaptureDefinition.h" },
		{ "Source.Comment", "/** Source (caster) of the gameplay effect. */" },
		{ "Source.Name", "EGameplayEffectAttributeCaptureSource::Source" },
		{ "Source.ToolTip", "Source (caster) of the gameplay effect." },
		{ "Target.Comment", "/** Target (recipient) of the gameplay effect. */" },
		{ "Target.Name", "EGameplayEffectAttributeCaptureSource::Target" },
		{ "Target.ToolTip", "Target (recipient) of the gameplay effect." },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enumeration for options of where to capture gameplay attributes from for gameplay effects." },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGameplayEffectAttributeCaptureSource::Source", (int64)EGameplayEffectAttributeCaptureSource::Source },
		{ "EGameplayEffectAttributeCaptureSource::Target", (int64)EGameplayEffectAttributeCaptureSource::Target },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GameplayAbilities_EGameplayEffectAttributeCaptureSource_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_GameplayAbilities,
	nullptr,
	"EGameplayEffectAttributeCaptureSource",
	"EGameplayEffectAttributeCaptureSource",
	Z_Construct_UEnum_GameplayAbilities_EGameplayEffectAttributeCaptureSource_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayAbilities_EGameplayEffectAttributeCaptureSource_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayAbilities_EGameplayEffectAttributeCaptureSource_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GameplayAbilities_EGameplayEffectAttributeCaptureSource_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_GameplayAbilities_EGameplayEffectAttributeCaptureSource()
{
	if (!Z_Registration_Info_UEnum_EGameplayEffectAttributeCaptureSource.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGameplayEffectAttributeCaptureSource.InnerSingleton, Z_Construct_UEnum_GameplayAbilities_EGameplayEffectAttributeCaptureSource_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGameplayEffectAttributeCaptureSource.InnerSingleton;
}
// End Enum EGameplayEffectAttributeCaptureSource

// Begin ScriptStruct FGameplayEffectAttributeCaptureDefinition
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayEffectAttributeCaptureDefinition;
class UScriptStruct* FGameplayEffectAttributeCaptureDefinition::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayEffectAttributeCaptureDefinition.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayEffectAttributeCaptureDefinition.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureDefinition, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("GameplayEffectAttributeCaptureDefinition"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayEffectAttributeCaptureDefinition.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FGameplayEffectAttributeCaptureDefinition>()
{
	return FGameplayEffectAttributeCaptureDefinition::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureDefinition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Struct defining gameplay attribute capture options for gameplay effects */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffectAttributeCaptureDefinition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Struct defining gameplay attribute capture options for gameplay effects" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeToCapture_MetaData[] = {
		{ "Category", "Capture" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Gameplay attribute to capture */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffectAttributeCaptureDefinition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gameplay attribute to capture" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeSource_MetaData[] = {
		{ "Category", "Capture" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Source of the gameplay attribute */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffectAttributeCaptureDefinition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Source of the gameplay attribute" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSnapshot_MetaData[] = {
		{ "Category", "Capture" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether the attribute should be snapshotted or not */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffectAttributeCaptureDefinition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether the attribute should be snapshotted or not" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeToCapture;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AttributeSource_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AttributeSource;
	static void NewProp_bSnapshot_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSnapshot;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayEffectAttributeCaptureDefinition>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureDefinition_Statics::NewProp_AttributeToCapture = { "AttributeToCapture", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayEffectAttributeCaptureDefinition, AttributeToCapture), Z_Construct_UScriptStruct_FGameplayAttribute, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeToCapture_MetaData), NewProp_AttributeToCapture_MetaData) }; // 884374022
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureDefinition_Statics::NewProp_AttributeSource_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureDefinition_Statics::NewProp_AttributeSource = { "AttributeSource", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayEffectAttributeCaptureDefinition, AttributeSource), Z_Construct_UEnum_GameplayAbilities_EGameplayEffectAttributeCaptureSource, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeSource_MetaData), NewProp_AttributeSource_MetaData) }; // 2117372822
void Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureDefinition_Statics::NewProp_bSnapshot_SetBit(void* Obj)
{
	((FGameplayEffectAttributeCaptureDefinition*)Obj)->bSnapshot = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureDefinition_Statics::NewProp_bSnapshot = { "bSnapshot", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGameplayEffectAttributeCaptureDefinition), &Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureDefinition_Statics::NewProp_bSnapshot_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSnapshot_MetaData), NewProp_bSnapshot_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureDefinition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureDefinition_Statics::NewProp_AttributeToCapture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureDefinition_Statics::NewProp_AttributeSource_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureDefinition_Statics::NewProp_AttributeSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureDefinition_Statics::NewProp_bSnapshot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureDefinition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureDefinition_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
	nullptr,
	&NewStructOps,
	"GameplayEffectAttributeCaptureDefinition",
	Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureDefinition_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureDefinition_Statics::PropPointers),
	sizeof(FGameplayEffectAttributeCaptureDefinition),
	alignof(FGameplayEffectAttributeCaptureDefinition),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureDefinition_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureDefinition_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureDefinition()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayEffectAttributeCaptureDefinition.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayEffectAttributeCaptureDefinition.InnerSingleton, Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureDefinition_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GameplayEffectAttributeCaptureDefinition.InnerSingleton;
}
// End ScriptStruct FGameplayEffectAttributeCaptureDefinition

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectAttributeCaptureDefinition_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EGameplayEffectAttributeCaptureSource_StaticEnum, TEXT("EGameplayEffectAttributeCaptureSource"), &Z_Registration_Info_UEnum_EGameplayEffectAttributeCaptureSource, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2117372822U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FGameplayEffectAttributeCaptureDefinition::StaticStruct, Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureDefinition_Statics::NewStructOps, TEXT("GameplayEffectAttributeCaptureDefinition"), &Z_Registration_Info_UScriptStruct_GameplayEffectAttributeCaptureDefinition, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayEffectAttributeCaptureDefinition), 1688717124U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectAttributeCaptureDefinition_h_1695386187(TEXT("/Script/GameplayAbilities"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectAttributeCaptureDefinition_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectAttributeCaptureDefinition_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectAttributeCaptureDefinition_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectAttributeCaptureDefinition_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
