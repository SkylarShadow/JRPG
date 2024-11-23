// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayAbilities/Public/Abilities/GameplayAbilityTargetActor_ActorPlacement.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayAbilityTargetActor_ActorPlacement() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_AGameplayAbilityTargetActor_ActorPlacement();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_AGameplayAbilityTargetActor_ActorPlacement_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_AGameplayAbilityTargetActor_GroundTrace();
UPackage* Z_Construct_UPackage__Script_GameplayAbilities();
// End Cross Module References

// Begin Class AGameplayAbilityTargetActor_ActorPlacement
void AGameplayAbilityTargetActor_ActorPlacement::StaticRegisterNativesAGameplayAbilityTargetActor_ActorPlacement()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGameplayAbilityTargetActor_ActorPlacement);
UClass* Z_Construct_UClass_AGameplayAbilityTargetActor_ActorPlacement_NoRegister()
{
	return AGameplayAbilityTargetActor_ActorPlacement::StaticClass();
}
struct Z_Construct_UClass_AGameplayAbilityTargetActor_ActorPlacement_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Abilities/GameplayAbilityTargetActor_ActorPlacement.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTargetActor_ActorPlacement.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlacedActorClass_MetaData[] = {
		{ "Category", "Targeting" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Actor we intend to place. */" },
#endif
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTargetActor_ActorPlacement.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Actor we intend to place." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlacedActorMaterial_MetaData[] = {
		{ "Category", "Projectile" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Override Material 0 on our placed actor's meshes with this material for visualization. */" },
#endif
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTargetActor_ActorPlacement.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Override Material 0 on our placed actor's meshes with this material for visualization." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_PlacedActorClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlacedActorMaterial;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGameplayAbilityTargetActor_ActorPlacement>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGameplayAbilityTargetActor_ActorPlacement_Statics::NewProp_PlacedActorClass = { "PlacedActorClass", nullptr, (EPropertyFlags)0x0115000000000005, UECodeGen_Private::EPropertyGenFlags::Class | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameplayAbilityTargetActor_ActorPlacement, PlacedActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlacedActorClass_MetaData), NewProp_PlacedActorClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGameplayAbilityTargetActor_ActorPlacement_Statics::NewProp_PlacedActorMaterial = { "PlacedActorMaterial", nullptr, (EPropertyFlags)0x0115000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameplayAbilityTargetActor_ActorPlacement, PlacedActorMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlacedActorMaterial_MetaData), NewProp_PlacedActorMaterial_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGameplayAbilityTargetActor_ActorPlacement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameplayAbilityTargetActor_ActorPlacement_Statics::NewProp_PlacedActorClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameplayAbilityTargetActor_ActorPlacement_Statics::NewProp_PlacedActorMaterial,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGameplayAbilityTargetActor_ActorPlacement_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AGameplayAbilityTargetActor_ActorPlacement_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameplayAbilityTargetActor_GroundTrace,
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGameplayAbilityTargetActor_ActorPlacement_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGameplayAbilityTargetActor_ActorPlacement_Statics::ClassParams = {
	&AGameplayAbilityTargetActor_ActorPlacement::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AGameplayAbilityTargetActor_ActorPlacement_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AGameplayAbilityTargetActor_ActorPlacement_Statics::PropPointers),
	0,
	0x008002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGameplayAbilityTargetActor_ActorPlacement_Statics::Class_MetaDataParams), Z_Construct_UClass_AGameplayAbilityTargetActor_ActorPlacement_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGameplayAbilityTargetActor_ActorPlacement()
{
	if (!Z_Registration_Info_UClass_AGameplayAbilityTargetActor_ActorPlacement.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGameplayAbilityTargetActor_ActorPlacement.OuterSingleton, Z_Construct_UClass_AGameplayAbilityTargetActor_ActorPlacement_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGameplayAbilityTargetActor_ActorPlacement.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UClass* StaticClass<AGameplayAbilityTargetActor_ActorPlacement>()
{
	return AGameplayAbilityTargetActor_ActorPlacement::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGameplayAbilityTargetActor_ActorPlacement);
AGameplayAbilityTargetActor_ActorPlacement::~AGameplayAbilityTargetActor_ActorPlacement() {}
// End Class AGameplayAbilityTargetActor_ActorPlacement

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityTargetActor_ActorPlacement_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGameplayAbilityTargetActor_ActorPlacement, AGameplayAbilityTargetActor_ActorPlacement::StaticClass, TEXT("AGameplayAbilityTargetActor_ActorPlacement"), &Z_Registration_Info_UClass_AGameplayAbilityTargetActor_ActorPlacement, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGameplayAbilityTargetActor_ActorPlacement), 2165551749U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityTargetActor_ActorPlacement_h_2754892415(TEXT("/Script/GameplayAbilities"),
	Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityTargetActor_ActorPlacement_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityTargetActor_ActorPlacement_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
