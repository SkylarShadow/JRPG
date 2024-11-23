// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayAbilities/Public/GameplayCueNotify_HitImpact.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayCueNotify_HitImpact() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayCueNotify_HitImpact();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayCueNotify_HitImpact_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayCueNotify_Static();
UPackage* Z_Construct_UPackage__Script_GameplayAbilities();
// End Cross Module References

// Begin Class UGameplayCueNotify_HitImpact
void UGameplayCueNotify_HitImpact::StaticRegisterNativesUGameplayCueNotify_HitImpact()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameplayCueNotify_HitImpact);
UClass* Z_Construct_UClass_UGameplayCueNotify_HitImpact_NoRegister()
{
	return UGameplayCueNotify_HitImpact::StaticClass();
}
struct Z_Construct_UClass_UGameplayCueNotify_HitImpact_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "GameplayCue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\x09Non instanced GameplayCueNotify for spawning particle and sound FX.\n *\x09Still WIP - needs to be fleshed out more.\n */" },
#endif
		{ "DisplayName", "GCN Hit Impact (Deprecated)" },
		{ "HideCategories", "Replication" },
		{ "IncludePath", "GameplayCueNotify_HitImpact.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/GameplayCueNotify_HitImpact.h" },
		{ "ShortTooltip", "This class is deprecated. Use UFortGameplayCueNotify_Burst (GCN Burst) instead." },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Non instanced GameplayCueNotify for spawning particle and sound FX.\nStill WIP - needs to be fleshed out more." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Sound_MetaData[] = {
		{ "Category", "GameplayCue" },
		{ "ModuleRelativePath", "Public/GameplayCueNotify_HitImpact.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParticleSystem_MetaData[] = {
		{ "Category", "GameplayCue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Effects to play for weapon attacks against specific surfaces */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayCueNotify_HitImpact.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Effects to play for weapon attacks against specific surfaces" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Sound;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ParticleSystem;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameplayCueNotify_HitImpact>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameplayCueNotify_HitImpact_Statics::NewProp_Sound = { "Sound", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameplayCueNotify_HitImpact, Sound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Sound_MetaData), NewProp_Sound_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameplayCueNotify_HitImpact_Statics::NewProp_ParticleSystem = { "ParticleSystem", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameplayCueNotify_HitImpact, ParticleSystem), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParticleSystem_MetaData), NewProp_ParticleSystem_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameplayCueNotify_HitImpact_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayCueNotify_HitImpact_Statics::NewProp_Sound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayCueNotify_HitImpact_Statics::NewProp_ParticleSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayCueNotify_HitImpact_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGameplayCueNotify_HitImpact_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameplayCueNotify_Static,
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayCueNotify_HitImpact_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameplayCueNotify_HitImpact_Statics::ClassParams = {
	&UGameplayCueNotify_HitImpact::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGameplayCueNotify_HitImpact_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayCueNotify_HitImpact_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayCueNotify_HitImpact_Statics::Class_MetaDataParams), Z_Construct_UClass_UGameplayCueNotify_HitImpact_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGameplayCueNotify_HitImpact()
{
	if (!Z_Registration_Info_UClass_UGameplayCueNotify_HitImpact.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameplayCueNotify_HitImpact.OuterSingleton, Z_Construct_UClass_UGameplayCueNotify_HitImpact_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGameplayCueNotify_HitImpact.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UClass* StaticClass<UGameplayCueNotify_HitImpact>()
{
	return UGameplayCueNotify_HitImpact::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGameplayCueNotify_HitImpact);
UGameplayCueNotify_HitImpact::~UGameplayCueNotify_HitImpact() {}
// End Class UGameplayCueNotify_HitImpact

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayCueNotify_HitImpact_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGameplayCueNotify_HitImpact, UGameplayCueNotify_HitImpact::StaticClass, TEXT("UGameplayCueNotify_HitImpact"), &Z_Registration_Info_UClass_UGameplayCueNotify_HitImpact, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameplayCueNotify_HitImpact), 2882337066U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayCueNotify_HitImpact_h_3424846161(TEXT("/Script/GameplayAbilities"),
	Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayCueNotify_HitImpact_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayCueNotify_HitImpact_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
