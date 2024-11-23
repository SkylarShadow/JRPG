// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayAbilities/Public/GameplayEffectComponents/AssetTagsGameplayEffectComponent.h"
#include "GameplayAbilities/Public/GameplayEffect.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetTagsGameplayEffectComponent() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAssetTagsGameplayEffectComponent();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAssetTagsGameplayEffectComponent_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffectComponent();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FInheritedTagContainer();
UPackage* Z_Construct_UPackage__Script_GameplayAbilities();
// End Cross Module References

// Begin Class UAssetTagsGameplayEffectComponent
void UAssetTagsGameplayEffectComponent::StaticRegisterNativesUAssetTagsGameplayEffectComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAssetTagsGameplayEffectComponent);
UClass* Z_Construct_UClass_UAssetTagsGameplayEffectComponent_NoRegister()
{
	return UAssetTagsGameplayEffectComponent::StaticClass();
}
struct Z_Construct_UClass_UAssetTagsGameplayEffectComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** These are tags that the Gameplay Effect Asset itself 'has' (owns). These do _not_ transfer to any Actors */" },
#endif
		{ "DisplayName", "Tags This Effect Has (Asset Tags)" },
		{ "IncludePath", "GameplayEffectComponents/AssetTagsGameplayEffectComponent.h" },
		{ "ModuleRelativePath", "Public/GameplayEffectComponents/AssetTagsGameplayEffectComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "These are tags that the Gameplay Effect Asset itself 'has' (owns). These do _not_ transfer to any Actors" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InheritableAssetTags_MetaData[] = {
		{ "Categories", "OwnedTagsCategory" },
		{ "Category", "Tags" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The GameplayEffect's Tags: tags the the GE *has* and DOES NOT give to the actor. */" },
#endif
		{ "DisplayName", "AssetTags" },
		{ "ModuleRelativePath", "Public/GameplayEffectComponents/AssetTagsGameplayEffectComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The GameplayEffect's Tags: tags the the GE *has* and DOES NOT give to the actor." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InheritableAssetTags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetTagsGameplayEffectComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAssetTagsGameplayEffectComponent_Statics::NewProp_InheritableAssetTags = { "InheritableAssetTags", nullptr, (EPropertyFlags)0x0040000000010011, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAssetTagsGameplayEffectComponent, InheritableAssetTags), Z_Construct_UScriptStruct_FInheritedTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InheritableAssetTags_MetaData), NewProp_InheritableAssetTags_MetaData) }; // 716965641
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAssetTagsGameplayEffectComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetTagsGameplayEffectComponent_Statics::NewProp_InheritableAssetTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetTagsGameplayEffectComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAssetTagsGameplayEffectComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameplayEffectComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetTagsGameplayEffectComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssetTagsGameplayEffectComponent_Statics::ClassParams = {
	&UAssetTagsGameplayEffectComponent::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAssetTagsGameplayEffectComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAssetTagsGameplayEffectComponent_Statics::PropPointers),
	0,
	0x003130A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetTagsGameplayEffectComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UAssetTagsGameplayEffectComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAssetTagsGameplayEffectComponent()
{
	if (!Z_Registration_Info_UClass_UAssetTagsGameplayEffectComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssetTagsGameplayEffectComponent.OuterSingleton, Z_Construct_UClass_UAssetTagsGameplayEffectComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAssetTagsGameplayEffectComponent.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UClass* StaticClass<UAssetTagsGameplayEffectComponent>()
{
	return UAssetTagsGameplayEffectComponent::StaticClass();
}
UAssetTagsGameplayEffectComponent::UAssetTagsGameplayEffectComponent() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetTagsGameplayEffectComponent);
UAssetTagsGameplayEffectComponent::~UAssetTagsGameplayEffectComponent() {}
// End Class UAssetTagsGameplayEffectComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectComponents_AssetTagsGameplayEffectComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAssetTagsGameplayEffectComponent, UAssetTagsGameplayEffectComponent::StaticClass, TEXT("UAssetTagsGameplayEffectComponent"), &Z_Registration_Info_UClass_UAssetTagsGameplayEffectComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssetTagsGameplayEffectComponent), 1100456599U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectComponents_AssetTagsGameplayEffectComponent_h_2597009980(TEXT("/Script/GameplayAbilities"),
	Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectComponents_AssetTagsGameplayEffectComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectComponents_AssetTagsGameplayEffectComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
