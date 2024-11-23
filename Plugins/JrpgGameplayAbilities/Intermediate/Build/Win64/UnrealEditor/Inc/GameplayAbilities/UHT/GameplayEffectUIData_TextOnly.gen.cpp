// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayAbilities/Public/GameplayEffectUIData_TextOnly.h"
#include "GameplayAbilities/Public/GameplayEffect.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayEffectUIData_TextOnly() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffectUIData();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffectUIData_TextOnly();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffectUIData_TextOnly_NoRegister();
UPackage* Z_Construct_UPackage__Script_GameplayAbilities();
// End Cross Module References

// Begin Class UGameplayEffectUIData_TextOnly
void UGameplayEffectUIData_TextOnly::StaticRegisterNativesUGameplayEffectUIData_TextOnly()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameplayEffectUIData_TextOnly);
UClass* Z_Construct_UClass_UGameplayEffectUIData_TextOnly_NoRegister()
{
	return UGameplayEffectUIData_TextOnly::StaticClass();
}
struct Z_Construct_UClass_UGameplayEffectUIData_TextOnly_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * UI data that contains only text. This is mostly used as an example of a subclass of UGameplayEffectUIData.\n * If your game needs only text, this is a reasonable class to use. To include more data, make a custom subclass of UGameplayEffectUIData.\n */" },
#endif
		{ "DisplayName", "UI Data (Text Only)" },
		{ "IncludePath", "GameplayEffectUIData_TextOnly.h" },
		{ "ModuleRelativePath", "Public/GameplayEffectUIData_TextOnly.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UI data that contains only text. This is mostly used as an example of a subclass of UGameplayEffectUIData.\nIf your game needs only text, this is a reasonable class to use. To include more data, make a custom subclass of UGameplayEffectUIData." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/GameplayEffectUIData_TextOnly.h" },
		{ "MultiLine", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_Description;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameplayEffectUIData_TextOnly>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UGameplayEffectUIData_TextOnly_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameplayEffectUIData_TextOnly, Description), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Description_MetaData), NewProp_Description_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameplayEffectUIData_TextOnly_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayEffectUIData_TextOnly_Statics::NewProp_Description,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayEffectUIData_TextOnly_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGameplayEffectUIData_TextOnly_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameplayEffectUIData,
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayEffectUIData_TextOnly_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameplayEffectUIData_TextOnly_Statics::ClassParams = {
	&UGameplayEffectUIData_TextOnly::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGameplayEffectUIData_TextOnly_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayEffectUIData_TextOnly_Statics::PropPointers),
	0,
	0x003130A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayEffectUIData_TextOnly_Statics::Class_MetaDataParams), Z_Construct_UClass_UGameplayEffectUIData_TextOnly_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGameplayEffectUIData_TextOnly()
{
	if (!Z_Registration_Info_UClass_UGameplayEffectUIData_TextOnly.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameplayEffectUIData_TextOnly.OuterSingleton, Z_Construct_UClass_UGameplayEffectUIData_TextOnly_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGameplayEffectUIData_TextOnly.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UClass* StaticClass<UGameplayEffectUIData_TextOnly>()
{
	return UGameplayEffectUIData_TextOnly::StaticClass();
}
UGameplayEffectUIData_TextOnly::UGameplayEffectUIData_TextOnly() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGameplayEffectUIData_TextOnly);
UGameplayEffectUIData_TextOnly::~UGameplayEffectUIData_TextOnly() {}
// End Class UGameplayEffectUIData_TextOnly

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectUIData_TextOnly_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGameplayEffectUIData_TextOnly, UGameplayEffectUIData_TextOnly::StaticClass, TEXT("UGameplayEffectUIData_TextOnly"), &Z_Registration_Info_UClass_UGameplayEffectUIData_TextOnly, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameplayEffectUIData_TextOnly), 3814102123U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectUIData_TextOnly_h_4063897398(TEXT("/Script/GameplayAbilities"),
	Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectUIData_TextOnly_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectUIData_TextOnly_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS