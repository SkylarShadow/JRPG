// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayAbilities/Public/GameplayEffectComponent.h"
#include "GameplayAbilities/Public/GameplayEffect.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayEffectComponent() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffectComponent();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffectComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_GameplayAbilities();
// End Cross Module References

// Begin Class UGameplayEffectComponent
void UGameplayEffectComponent::StaticRegisterNativesUGameplayEffectComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameplayEffectComponent);
UClass* Z_Construct_UClass_UGameplayEffectComponent_NoRegister()
{
	return UGameplayEffectComponent::StaticClass();
}
struct Z_Construct_UClass_UGameplayEffectComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Gameplay Effect Component (aka GEComponent)\n * \n * GEComponents are what define how a GameplayEffect behaves.  Introduced in UE 5.3, there are very few calls from UGameplayEffect to UGameplayEffectComponent by design.\n * Instead of providing a larger API for all desired functionality, the implementer of a GEComponent must read the GE flow carefully and register desired callbacks\n * to achieve the desired results.  This effectively limits the implementation of GEComponents to native code for the time being.\n * \n * GEComponents live Within a GameplayEffect (which is typically a data-only blueprint asset).  Thus, like GEs, only one GEComponent exists for all applied instances.\n * One of the unintuitive caveats of this is that GEComponent should not contain any runtime manipulated/instanced data (e.g. stored state per execution).\n * One must take careful consideration about where to store any data (and thus when it can be evaluated).  The early implementations typically work around this by\n * storing small amounts of runtime data on the desired callbacks (e.g. by binding extra parameters on the delegate).  This may explain why some functionality is still\n * in UGameplayEffect rather than a UGameplayEffectComponent.  Future implementations may need extra data stored on the FGameplayEffectSpec (i.e. Gameplay Effect Spec Components).\n * \n * @see GameplayEffect.h for further notes, especially on the terminology used (Added vs. Executed vs. Apply).\n */" },
#endif
		{ "IncludePath", "GameplayEffectComponent.h" },
		{ "ModuleRelativePath", "Public/GameplayEffectComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gameplay Effect Component (aka GEComponent)\n\nGEComponents are what define how a GameplayEffect behaves.  Introduced in UE 5.3, there are very few calls from UGameplayEffect to UGameplayEffectComponent by design.\nInstead of providing a larger API for all desired functionality, the implementer of a GEComponent must read the GE flow carefully and register desired callbacks\nto achieve the desired results.  This effectively limits the implementation of GEComponents to native code for the time being.\n\nGEComponents live Within a GameplayEffect (which is typically a data-only blueprint asset).  Thus, like GEs, only one GEComponent exists for all applied instances.\nOne of the unintuitive caveats of this is that GEComponent should not contain any runtime manipulated/instanced data (e.g. stored state per execution).\nOne must take careful consideration about where to store any data (and thus when it can be evaluated).  The early implementations typically work around this by\nstoring small amounts of runtime data on the desired callbacks (e.g. by binding extra parameters on the delegate).  This may explain why some functionality is still\nin UGameplayEffect rather than a UGameplayEffectComponent.  Future implementations may need extra data stored on the FGameplayEffectSpec (i.e. Gameplay Effect Spec Components).\n\n@see GameplayEffect.h for further notes, especially on the terminology used (Added vs. Executed vs. Apply)." },
#endif
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EditorFriendlyName_MetaData[] = {
		{ "Category", "AlwaysHidden" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Friendly name for displaying in the Editor's Gameplay Effect Component Index (@see UGameplayEffect::GEComponents). We set EditCondition False here so it doesn't show up otherwise. */" },
#endif
		{ "EditCondition", "FALSE" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/GameplayEffectComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Friendly name for displaying in the Editor's Gameplay Effect Component Index (@see UGameplayEffect::GEComponents). We set EditCondition False here so it doesn't show up otherwise." },
#endif
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_EditorFriendlyName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameplayEffectComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UGameplayEffectComponent_Statics::NewProp_EditorFriendlyName = { "EditorFriendlyName", nullptr, (EPropertyFlags)0x0020080800032011, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameplayEffectComponent, EditorFriendlyName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EditorFriendlyName_MetaData), NewProp_EditorFriendlyName_MetaData) };
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameplayEffectComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayEffectComponent_Statics::NewProp_EditorFriendlyName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayEffectComponent_Statics::PropPointers) < 2048);
#endif // WITH_EDITORONLY_DATA
UObject* (*const Z_Construct_UClass_UGameplayEffectComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayEffectComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameplayEffectComponent_Statics::ClassParams = {
	&UGameplayEffectComponent::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_UGameplayEffectComponent_Statics::PropPointers, nullptr),
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayEffectComponent_Statics::PropPointers), 0),
	0,
	0x003130A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayEffectComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UGameplayEffectComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGameplayEffectComponent()
{
	if (!Z_Registration_Info_UClass_UGameplayEffectComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameplayEffectComponent.OuterSingleton, Z_Construct_UClass_UGameplayEffectComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGameplayEffectComponent.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UClass* StaticClass<UGameplayEffectComponent>()
{
	return UGameplayEffectComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGameplayEffectComponent);
UGameplayEffectComponent::~UGameplayEffectComponent() {}
// End Class UGameplayEffectComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGameplayEffectComponent, UGameplayEffectComponent::StaticClass, TEXT("UGameplayEffectComponent"), &Z_Registration_Info_UClass_UGameplayEffectComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameplayEffectComponent), 4005318152U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectComponent_h_295854646(TEXT("/Script/GameplayAbilities"),
	Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
