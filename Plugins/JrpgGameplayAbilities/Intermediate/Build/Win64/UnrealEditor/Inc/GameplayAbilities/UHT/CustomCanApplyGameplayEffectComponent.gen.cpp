// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayAbilities/Public/GameplayEffectComponents/CustomCanApplyGameplayEffectComponent.h"
#include "GameplayAbilities/Public/GameplayEffect.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomCanApplyGameplayEffectComponent() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UCustomCanApplyGameplayEffectComponent();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UCustomCanApplyGameplayEffectComponent_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffectComponent();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffectCustomApplicationRequirement_NoRegister();
UPackage* Z_Construct_UPackage__Script_GameplayAbilities();
// End Cross Module References

// Begin Class UCustomCanApplyGameplayEffectComponent
void UCustomCanApplyGameplayEffectComponent::StaticRegisterNativesUCustomCanApplyGameplayEffectComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCustomCanApplyGameplayEffectComponent);
UClass* Z_Construct_UClass_UCustomCanApplyGameplayEffectComponent_NoRegister()
{
	return UCustomCanApplyGameplayEffectComponent::StaticClass();
}
struct Z_Construct_UClass_UCustomCanApplyGameplayEffectComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Handles configuration of a CustomApplicationRequirement function to see if this GameplayEffect should apply */" },
#endif
		{ "DisplayName", "Custom Can Apply This Effect" },
		{ "IncludePath", "GameplayEffectComponents/CustomCanApplyGameplayEffectComponent.h" },
		{ "ModuleRelativePath", "Public/GameplayEffectComponents/CustomCanApplyGameplayEffectComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Handles configuration of a CustomApplicationRequirement function to see if this GameplayEffect should apply" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ApplicationRequirements_MetaData[] = {
		{ "Category", "Application" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Custom application requirements */" },
#endif
		{ "DisplayName", "Custom Application Requirement" },
		{ "ModuleRelativePath", "Public/GameplayEffectComponents/CustomCanApplyGameplayEffectComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Custom application requirements" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ApplicationRequirements_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ApplicationRequirements;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomCanApplyGameplayEffectComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCustomCanApplyGameplayEffectComponent_Statics::NewProp_ApplicationRequirements_Inner = { "ApplicationRequirements", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffectCustomApplicationRequirement_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCustomCanApplyGameplayEffectComponent_Statics::NewProp_ApplicationRequirements = { "ApplicationRequirements", nullptr, (EPropertyFlags)0x0014000000010011, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomCanApplyGameplayEffectComponent, ApplicationRequirements), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ApplicationRequirements_MetaData), NewProp_ApplicationRequirements_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCustomCanApplyGameplayEffectComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomCanApplyGameplayEffectComponent_Statics::NewProp_ApplicationRequirements_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomCanApplyGameplayEffectComponent_Statics::NewProp_ApplicationRequirements,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomCanApplyGameplayEffectComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCustomCanApplyGameplayEffectComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameplayEffectComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomCanApplyGameplayEffectComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCustomCanApplyGameplayEffectComponent_Statics::ClassParams = {
	&UCustomCanApplyGameplayEffectComponent::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCustomCanApplyGameplayEffectComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCustomCanApplyGameplayEffectComponent_Statics::PropPointers),
	0,
	0x003130A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomCanApplyGameplayEffectComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UCustomCanApplyGameplayEffectComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCustomCanApplyGameplayEffectComponent()
{
	if (!Z_Registration_Info_UClass_UCustomCanApplyGameplayEffectComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCustomCanApplyGameplayEffectComponent.OuterSingleton, Z_Construct_UClass_UCustomCanApplyGameplayEffectComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCustomCanApplyGameplayEffectComponent.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UClass* StaticClass<UCustomCanApplyGameplayEffectComponent>()
{
	return UCustomCanApplyGameplayEffectComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomCanApplyGameplayEffectComponent);
UCustomCanApplyGameplayEffectComponent::~UCustomCanApplyGameplayEffectComponent() {}
// End Class UCustomCanApplyGameplayEffectComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectComponents_CustomCanApplyGameplayEffectComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCustomCanApplyGameplayEffectComponent, UCustomCanApplyGameplayEffectComponent::StaticClass, TEXT("UCustomCanApplyGameplayEffectComponent"), &Z_Registration_Info_UClass_UCustomCanApplyGameplayEffectComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCustomCanApplyGameplayEffectComponent), 4069816860U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectComponents_CustomCanApplyGameplayEffectComponent_h_1459548006(TEXT("/Script/GameplayAbilities"),
	Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectComponents_CustomCanApplyGameplayEffectComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectComponents_CustomCanApplyGameplayEffectComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
