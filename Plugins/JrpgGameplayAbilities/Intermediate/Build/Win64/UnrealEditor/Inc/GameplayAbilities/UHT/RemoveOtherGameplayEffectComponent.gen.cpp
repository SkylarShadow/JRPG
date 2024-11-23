// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayAbilities/Public/GameplayEffectComponents/RemoveOtherGameplayEffectComponent.h"
#include "GameplayAbilities/Public/GameplayEffect.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRemoveOtherGameplayEffectComponent() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffectComponent();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_URemoveOtherGameplayEffectComponent();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_URemoveOtherGameplayEffectComponent_NoRegister();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectQuery();
UPackage* Z_Construct_UPackage__Script_GameplayAbilities();
// End Cross Module References

// Begin Class URemoveOtherGameplayEffectComponent
void URemoveOtherGameplayEffectComponent::StaticRegisterNativesURemoveOtherGameplayEffectComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URemoveOtherGameplayEffectComponent);
UClass* Z_Construct_UClass_URemoveOtherGameplayEffectComponent_NoRegister()
{
	return URemoveOtherGameplayEffectComponent::StaticClass();
}
struct Z_Construct_UClass_URemoveOtherGameplayEffectComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Remove other Gameplay Effects based on certain conditions */" },
#endif
		{ "DisplayName", "Remove Other Effects" },
		{ "IncludePath", "GameplayEffectComponents/RemoveOtherGameplayEffectComponent.h" },
		{ "ModuleRelativePath", "Public/GameplayEffectComponents/RemoveOtherGameplayEffectComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Remove other Gameplay Effects based on certain conditions" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RemoveGameplayEffectQueries_MetaData[] = {
		{ "Category", "None" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** On Application of the owning Gameplay Effect, any Active GameplayEffects that *match* these queries will be removed. */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffectComponents/RemoveOtherGameplayEffectComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "On Application of the owning Gameplay Effect, any Active GameplayEffects that *match* these queries will be removed." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_RemoveGameplayEffectQueries_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RemoveGameplayEffectQueries;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URemoveOtherGameplayEffectComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URemoveOtherGameplayEffectComponent_Statics::NewProp_RemoveGameplayEffectQueries_Inner = { "RemoveGameplayEffectQueries", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayEffectQuery, METADATA_PARAMS(0, nullptr) }; // 2456179291
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URemoveOtherGameplayEffectComponent_Statics::NewProp_RemoveGameplayEffectQueries = { "RemoveGameplayEffectQueries", nullptr, (EPropertyFlags)0x0010008000010011, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URemoveOtherGameplayEffectComponent, RemoveGameplayEffectQueries), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RemoveGameplayEffectQueries_MetaData), NewProp_RemoveGameplayEffectQueries_MetaData) }; // 2456179291
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URemoveOtherGameplayEffectComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoveOtherGameplayEffectComponent_Statics::NewProp_RemoveGameplayEffectQueries_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoveOtherGameplayEffectComponent_Statics::NewProp_RemoveGameplayEffectQueries,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URemoveOtherGameplayEffectComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_URemoveOtherGameplayEffectComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameplayEffectComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URemoveOtherGameplayEffectComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URemoveOtherGameplayEffectComponent_Statics::ClassParams = {
	&URemoveOtherGameplayEffectComponent::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_URemoveOtherGameplayEffectComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_URemoveOtherGameplayEffectComponent_Statics::PropPointers),
	0,
	0x00B130A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URemoveOtherGameplayEffectComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_URemoveOtherGameplayEffectComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URemoveOtherGameplayEffectComponent()
{
	if (!Z_Registration_Info_UClass_URemoveOtherGameplayEffectComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URemoveOtherGameplayEffectComponent.OuterSingleton, Z_Construct_UClass_URemoveOtherGameplayEffectComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URemoveOtherGameplayEffectComponent.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UClass* StaticClass<URemoveOtherGameplayEffectComponent>()
{
	return URemoveOtherGameplayEffectComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(URemoveOtherGameplayEffectComponent);
URemoveOtherGameplayEffectComponent::~URemoveOtherGameplayEffectComponent() {}
// End Class URemoveOtherGameplayEffectComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectComponents_RemoveOtherGameplayEffectComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URemoveOtherGameplayEffectComponent, URemoveOtherGameplayEffectComponent::StaticClass, TEXT("URemoveOtherGameplayEffectComponent"), &Z_Registration_Info_UClass_URemoveOtherGameplayEffectComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URemoveOtherGameplayEffectComponent), 1869783219U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectComponents_RemoveOtherGameplayEffectComponent_h_3296186354(TEXT("/Script/GameplayAbilities"),
	Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectComponents_RemoveOtherGameplayEffectComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectComponents_RemoveOtherGameplayEffectComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
