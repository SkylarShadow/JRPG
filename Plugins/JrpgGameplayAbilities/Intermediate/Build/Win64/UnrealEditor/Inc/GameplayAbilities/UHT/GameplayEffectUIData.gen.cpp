// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayAbilities/Public/GameplayEffectUIData.h"
#include "GameplayAbilities/Public/GameplayEffect.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayEffectUIData() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffectComponent();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffectUIData();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffectUIData_NoRegister();
UPackage* Z_Construct_UPackage__Script_GameplayAbilities();
// End Cross Module References

// Begin Class UGameplayEffectUIData
void UGameplayEffectUIData::StaticRegisterNativesUGameplayEffectUIData()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameplayEffectUIData);
UClass* Z_Construct_UClass_UGameplayEffectUIData_NoRegister()
{
	return UGameplayEffectUIData::StaticClass();
}
struct Z_Construct_UClass_UGameplayEffectUIData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * UGameplayEffectUIData\n * Base class to provide game-specific data about how to describe a Gameplay Effect in the UI. Subclass with data to use in your game.\n * In Unreal Engine 5.3, this now derives from UGameplayEffectComponent so you can use it directly as a GameplayEffectComponent.\n */" },
#endif
		{ "IncludePath", "GameplayEffectUIData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/GameplayEffectUIData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UGameplayEffectUIData\nBase class to provide game-specific data about how to describe a Gameplay Effect in the UI. Subclass with data to use in your game.\nIn Unreal Engine 5.3, this now derives from UGameplayEffectComponent so you can use it directly as a GameplayEffectComponent." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameplayEffectUIData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGameplayEffectUIData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameplayEffectComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayEffectUIData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameplayEffectUIData_Statics::ClassParams = {
	&UGameplayEffectUIData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x003130A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayEffectUIData_Statics::Class_MetaDataParams), Z_Construct_UClass_UGameplayEffectUIData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGameplayEffectUIData()
{
	if (!Z_Registration_Info_UClass_UGameplayEffectUIData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameplayEffectUIData.OuterSingleton, Z_Construct_UClass_UGameplayEffectUIData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGameplayEffectUIData.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UClass* StaticClass<UGameplayEffectUIData>()
{
	return UGameplayEffectUIData::StaticClass();
}
UGameplayEffectUIData::UGameplayEffectUIData() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGameplayEffectUIData);
UGameplayEffectUIData::~UGameplayEffectUIData() {}
// End Class UGameplayEffectUIData

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectUIData_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGameplayEffectUIData, UGameplayEffectUIData::StaticClass, TEXT("UGameplayEffectUIData"), &Z_Registration_Info_UClass_UGameplayEffectUIData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameplayEffectUIData), 2256161708U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectUIData_h_3040850197(TEXT("/Script/GameplayAbilities"),
	Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectUIData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectUIData_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
