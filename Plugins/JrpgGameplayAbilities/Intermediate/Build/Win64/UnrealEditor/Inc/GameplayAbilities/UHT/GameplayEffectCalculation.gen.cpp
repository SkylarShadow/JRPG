// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayAbilities/Public/GameplayEffectCalculation.h"
#include "GameplayAbilities/Public/GameplayEffectAttributeCaptureDefinition.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayEffectCalculation() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffectCalculation();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffectCalculation_NoRegister();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureDefinition();
UPackage* Z_Construct_UPackage__Script_GameplayAbilities();
// End Cross Module References

// Begin Class UGameplayEffectCalculation
void UGameplayEffectCalculation::StaticRegisterNativesUGameplayEffectCalculation()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameplayEffectCalculation);
UClass* Z_Construct_UClass_UGameplayEffectCalculation_NoRegister()
{
	return UGameplayEffectCalculation::StaticClass();
}
struct Z_Construct_UClass_UGameplayEffectCalculation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Abstract base for specialized gameplay effect calculations; Capable of specifing attribute captures */" },
#endif
		{ "IncludePath", "GameplayEffectCalculation.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/GameplayEffectCalculation.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Abstract base for specialized gameplay effect calculations; Capable of specifing attribute captures" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RelevantAttributesToCapture_MetaData[] = {
		{ "Category", "Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Attributes to capture that are relevant to the calculation */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffectCalculation.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Attributes to capture that are relevant to the calculation" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_RelevantAttributesToCapture_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RelevantAttributesToCapture;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameplayEffectCalculation>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameplayEffectCalculation_Statics::NewProp_RelevantAttributesToCapture_Inner = { "RelevantAttributesToCapture", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureDefinition, METADATA_PARAMS(0, nullptr) }; // 1688717124
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameplayEffectCalculation_Statics::NewProp_RelevantAttributesToCapture = { "RelevantAttributesToCapture", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameplayEffectCalculation, RelevantAttributesToCapture), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RelevantAttributesToCapture_MetaData), NewProp_RelevantAttributesToCapture_MetaData) }; // 1688717124
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameplayEffectCalculation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayEffectCalculation_Statics::NewProp_RelevantAttributesToCapture_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayEffectCalculation_Statics::NewProp_RelevantAttributesToCapture,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayEffectCalculation_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGameplayEffectCalculation_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayEffectCalculation_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameplayEffectCalculation_Statics::ClassParams = {
	&UGameplayEffectCalculation::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGameplayEffectCalculation_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayEffectCalculation_Statics::PropPointers),
	0,
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayEffectCalculation_Statics::Class_MetaDataParams), Z_Construct_UClass_UGameplayEffectCalculation_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGameplayEffectCalculation()
{
	if (!Z_Registration_Info_UClass_UGameplayEffectCalculation.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameplayEffectCalculation.OuterSingleton, Z_Construct_UClass_UGameplayEffectCalculation_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGameplayEffectCalculation.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UClass* StaticClass<UGameplayEffectCalculation>()
{
	return UGameplayEffectCalculation::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGameplayEffectCalculation);
UGameplayEffectCalculation::~UGameplayEffectCalculation() {}
// End Class UGameplayEffectCalculation

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectCalculation_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGameplayEffectCalculation, UGameplayEffectCalculation::StaticClass, TEXT("UGameplayEffectCalculation"), &Z_Registration_Info_UClass_UGameplayEffectCalculation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameplayEffectCalculation), 3114049017U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectCalculation_h_3760609896(TEXT("/Script/GameplayAbilities"),
	Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectCalculation_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectCalculation_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
