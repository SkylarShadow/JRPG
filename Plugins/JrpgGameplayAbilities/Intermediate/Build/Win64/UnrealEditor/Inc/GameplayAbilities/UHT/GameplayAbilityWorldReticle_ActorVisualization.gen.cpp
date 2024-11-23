// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayAbilities/Public/Abilities/GameplayAbilityWorldReticle_ActorVisualization.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayAbilityWorldReticle_ActorVisualization() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_AGameplayAbilityWorldReticle();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_AGameplayAbilityWorldReticle_ActorVisualization();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_AGameplayAbilityWorldReticle_ActorVisualization_NoRegister();
UPackage* Z_Construct_UPackage__Script_GameplayAbilities();
// End Cross Module References

// Begin Class AGameplayAbilityWorldReticle_ActorVisualization
void AGameplayAbilityWorldReticle_ActorVisualization::StaticRegisterNativesAGameplayAbilityWorldReticle_ActorVisualization()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGameplayAbilityWorldReticle_ActorVisualization);
UClass* Z_Construct_UClass_AGameplayAbilityWorldReticle_ActorVisualization_NoRegister()
{
	return AGameplayAbilityWorldReticle_ActorVisualization::StaticClass();
}
struct Z_Construct_UClass_AGameplayAbilityWorldReticle_ActorVisualization_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** This is a dummy reticle for internal use by visualization placement tasks. It builds a custom visual model of the visualization being placed. */" },
#endif
		{ "IncludePath", "Abilities/GameplayAbilityWorldReticle_ActorVisualization.h" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityWorldReticle_ActorVisualization.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is a dummy reticle for internal use by visualization placement tasks. It builds a custom visual model of the visualization being placed." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionComponent_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Hardcoded collision component, so other objects don't think they can collide with the visualization actor */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityWorldReticle_ActorVisualization.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Hardcoded collision component, so other objects don't think they can collide with the visualization actor" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VisualizationComponents_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityWorldReticle_ActorVisualization.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CollisionComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VisualizationComponents_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_VisualizationComponents;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGameplayAbilityWorldReticle_ActorVisualization>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGameplayAbilityWorldReticle_ActorVisualization_Statics::NewProp_CollisionComponent = { "CollisionComponent", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameplayAbilityWorldReticle_ActorVisualization, CollisionComponent), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionComponent_MetaData), NewProp_CollisionComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGameplayAbilityWorldReticle_ActorVisualization_Statics::NewProp_VisualizationComponents_Inner = { "VisualizationComponents", nullptr, (EPropertyFlags)0x0104000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AGameplayAbilityWorldReticle_ActorVisualization_Statics::NewProp_VisualizationComponents = { "VisualizationComponents", nullptr, (EPropertyFlags)0x0114008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameplayAbilityWorldReticle_ActorVisualization, VisualizationComponents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VisualizationComponents_MetaData), NewProp_VisualizationComponents_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGameplayAbilityWorldReticle_ActorVisualization_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameplayAbilityWorldReticle_ActorVisualization_Statics::NewProp_CollisionComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameplayAbilityWorldReticle_ActorVisualization_Statics::NewProp_VisualizationComponents_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameplayAbilityWorldReticle_ActorVisualization_Statics::NewProp_VisualizationComponents,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGameplayAbilityWorldReticle_ActorVisualization_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AGameplayAbilityWorldReticle_ActorVisualization_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameplayAbilityWorldReticle,
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGameplayAbilityWorldReticle_ActorVisualization_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGameplayAbilityWorldReticle_ActorVisualization_Statics::ClassParams = {
	&AGameplayAbilityWorldReticle_ActorVisualization::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AGameplayAbilityWorldReticle_ActorVisualization_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AGameplayAbilityWorldReticle_ActorVisualization_Statics::PropPointers),
	0,
	0x008002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGameplayAbilityWorldReticle_ActorVisualization_Statics::Class_MetaDataParams), Z_Construct_UClass_AGameplayAbilityWorldReticle_ActorVisualization_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGameplayAbilityWorldReticle_ActorVisualization()
{
	if (!Z_Registration_Info_UClass_AGameplayAbilityWorldReticle_ActorVisualization.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGameplayAbilityWorldReticle_ActorVisualization.OuterSingleton, Z_Construct_UClass_AGameplayAbilityWorldReticle_ActorVisualization_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGameplayAbilityWorldReticle_ActorVisualization.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UClass* StaticClass<AGameplayAbilityWorldReticle_ActorVisualization>()
{
	return AGameplayAbilityWorldReticle_ActorVisualization::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGameplayAbilityWorldReticle_ActorVisualization);
AGameplayAbilityWorldReticle_ActorVisualization::~AGameplayAbilityWorldReticle_ActorVisualization() {}
// End Class AGameplayAbilityWorldReticle_ActorVisualization

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityWorldReticle_ActorVisualization_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGameplayAbilityWorldReticle_ActorVisualization, AGameplayAbilityWorldReticle_ActorVisualization::StaticClass, TEXT("AGameplayAbilityWorldReticle_ActorVisualization"), &Z_Registration_Info_UClass_AGameplayAbilityWorldReticle_ActorVisualization, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGameplayAbilityWorldReticle_ActorVisualization), 482279190U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityWorldReticle_ActorVisualization_h_178982406(TEXT("/Script/GameplayAbilities"),
	Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityWorldReticle_ActorVisualization_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityWorldReticle_ActorVisualization_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
