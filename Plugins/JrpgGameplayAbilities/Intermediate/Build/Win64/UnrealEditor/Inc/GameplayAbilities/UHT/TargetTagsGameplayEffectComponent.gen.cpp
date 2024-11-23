// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayAbilities/Public/GameplayEffectComponents/TargetTagsGameplayEffectComponent.h"
#include "GameplayAbilities/Public/GameplayEffect.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTargetTagsGameplayEffectComponent() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffectComponent();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UTargetTagsGameplayEffectComponent();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UTargetTagsGameplayEffectComponent_NoRegister();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FInheritedTagContainer();
UPackage* Z_Construct_UPackage__Script_GameplayAbilities();
// End Cross Module References

// Begin Class UTargetTagsGameplayEffectComponent
void UTargetTagsGameplayEffectComponent::StaticRegisterNativesUTargetTagsGameplayEffectComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTargetTagsGameplayEffectComponent);
UClass* Z_Construct_UClass_UTargetTagsGameplayEffectComponent_NoRegister()
{
	return UTargetTagsGameplayEffectComponent::StaticClass();
}
struct Z_Construct_UClass_UTargetTagsGameplayEffectComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Handles granting Tags to the Target (sometimes referred to as the Owner) of the Gameplay Effect */" },
#endif
		{ "DisplayName", "Grant Tags to Target Actor" },
		{ "IncludePath", "GameplayEffectComponents/TargetTagsGameplayEffectComponent.h" },
		{ "ModuleRelativePath", "Public/GameplayEffectComponents/TargetTagsGameplayEffectComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Handles granting Tags to the Target (sometimes referred to as the Owner) of the Gameplay Effect" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InheritableGrantedTagsContainer_MetaData[] = {
		{ "Categories", "OwnedTagsCategory" },
		{ "Category", "None" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** These tags are applied (granted) to the target actor of the Gameplay Effect.  The Target would then \"own\" these Tags. */" },
#endif
		{ "DisplayName", "Add Tags" },
		{ "ModuleRelativePath", "Public/GameplayEffectComponents/TargetTagsGameplayEffectComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "These tags are applied (granted) to the target actor of the Gameplay Effect.  The Target would then \"own\" these Tags." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InheritableGrantedTagsContainer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTargetTagsGameplayEffectComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTargetTagsGameplayEffectComponent_Statics::NewProp_InheritableGrantedTagsContainer = { "InheritableGrantedTagsContainer", nullptr, (EPropertyFlags)0x0040000000010011, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTargetTagsGameplayEffectComponent, InheritableGrantedTagsContainer), Z_Construct_UScriptStruct_FInheritedTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InheritableGrantedTagsContainer_MetaData), NewProp_InheritableGrantedTagsContainer_MetaData) }; // 716965641
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTargetTagsGameplayEffectComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetTagsGameplayEffectComponent_Statics::NewProp_InheritableGrantedTagsContainer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTargetTagsGameplayEffectComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTargetTagsGameplayEffectComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameplayEffectComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTargetTagsGameplayEffectComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTargetTagsGameplayEffectComponent_Statics::ClassParams = {
	&UTargetTagsGameplayEffectComponent::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UTargetTagsGameplayEffectComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UTargetTagsGameplayEffectComponent_Statics::PropPointers),
	0,
	0x003130A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTargetTagsGameplayEffectComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UTargetTagsGameplayEffectComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTargetTagsGameplayEffectComponent()
{
	if (!Z_Registration_Info_UClass_UTargetTagsGameplayEffectComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTargetTagsGameplayEffectComponent.OuterSingleton, Z_Construct_UClass_UTargetTagsGameplayEffectComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTargetTagsGameplayEffectComponent.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UClass* StaticClass<UTargetTagsGameplayEffectComponent>()
{
	return UTargetTagsGameplayEffectComponent::StaticClass();
}
UTargetTagsGameplayEffectComponent::UTargetTagsGameplayEffectComponent() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTargetTagsGameplayEffectComponent);
UTargetTagsGameplayEffectComponent::~UTargetTagsGameplayEffectComponent() {}
// End Class UTargetTagsGameplayEffectComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectComponents_TargetTagsGameplayEffectComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTargetTagsGameplayEffectComponent, UTargetTagsGameplayEffectComponent::StaticClass, TEXT("UTargetTagsGameplayEffectComponent"), &Z_Registration_Info_UClass_UTargetTagsGameplayEffectComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTargetTagsGameplayEffectComponent), 2025994485U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectComponents_TargetTagsGameplayEffectComponent_h_1912057738(TEXT("/Script/GameplayAbilities"),
	Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectComponents_TargetTagsGameplayEffectComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectComponents_TargetTagsGameplayEffectComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
