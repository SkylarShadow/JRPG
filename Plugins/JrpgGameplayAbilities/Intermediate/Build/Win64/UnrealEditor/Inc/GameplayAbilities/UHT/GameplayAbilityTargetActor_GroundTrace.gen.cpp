// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayAbilities/Public/Abilities/GameplayAbilityTargetActor_GroundTrace.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayAbilityTargetActor_GroundTrace() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_AGameplayAbilityTargetActor_GroundTrace();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_AGameplayAbilityTargetActor_GroundTrace_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_AGameplayAbilityTargetActor_Trace();
UPackage* Z_Construct_UPackage__Script_GameplayAbilities();
// End Cross Module References

// Begin Class AGameplayAbilityTargetActor_GroundTrace
void AGameplayAbilityTargetActor_GroundTrace::StaticRegisterNativesAGameplayAbilityTargetActor_GroundTrace()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGameplayAbilityTargetActor_GroundTrace);
UClass* Z_Construct_UClass_AGameplayAbilityTargetActor_GroundTrace_NoRegister()
{
	return AGameplayAbilityTargetActor_GroundTrace::StaticClass();
}
struct Z_Construct_UClass_AGameplayAbilityTargetActor_GroundTrace_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Abilities/GameplayAbilityTargetActor_GroundTrace.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTargetActor_GroundTrace.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionRadius_MetaData[] = {
		{ "Category", "Targeting" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Radius for a sphere or capsule. */" },
#endif
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTargetActor_GroundTrace.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Radius for a sphere or capsule." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionHeight_MetaData[] = {
		{ "Category", "Targeting" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Height for a capsule. Implicitly indicates a capsule is desired if this is greater than zero. */" },
#endif
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTargetActor_GroundTrace.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Height for a capsule. Implicitly indicates a capsule is desired if this is greater than zero." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CollisionRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CollisionHeight;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGameplayAbilityTargetActor_GroundTrace>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGameplayAbilityTargetActor_GroundTrace_Statics::NewProp_CollisionRadius = { "CollisionRadius", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameplayAbilityTargetActor_GroundTrace, CollisionRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionRadius_MetaData), NewProp_CollisionRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGameplayAbilityTargetActor_GroundTrace_Statics::NewProp_CollisionHeight = { "CollisionHeight", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameplayAbilityTargetActor_GroundTrace, CollisionHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionHeight_MetaData), NewProp_CollisionHeight_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGameplayAbilityTargetActor_GroundTrace_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameplayAbilityTargetActor_GroundTrace_Statics::NewProp_CollisionRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameplayAbilityTargetActor_GroundTrace_Statics::NewProp_CollisionHeight,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGameplayAbilityTargetActor_GroundTrace_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AGameplayAbilityTargetActor_GroundTrace_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameplayAbilityTargetActor_Trace,
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGameplayAbilityTargetActor_GroundTrace_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGameplayAbilityTargetActor_GroundTrace_Statics::ClassParams = {
	&AGameplayAbilityTargetActor_GroundTrace::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AGameplayAbilityTargetActor_GroundTrace_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AGameplayAbilityTargetActor_GroundTrace_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGameplayAbilityTargetActor_GroundTrace_Statics::Class_MetaDataParams), Z_Construct_UClass_AGameplayAbilityTargetActor_GroundTrace_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGameplayAbilityTargetActor_GroundTrace()
{
	if (!Z_Registration_Info_UClass_AGameplayAbilityTargetActor_GroundTrace.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGameplayAbilityTargetActor_GroundTrace.OuterSingleton, Z_Construct_UClass_AGameplayAbilityTargetActor_GroundTrace_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGameplayAbilityTargetActor_GroundTrace.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UClass* StaticClass<AGameplayAbilityTargetActor_GroundTrace>()
{
	return AGameplayAbilityTargetActor_GroundTrace::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGameplayAbilityTargetActor_GroundTrace);
AGameplayAbilityTargetActor_GroundTrace::~AGameplayAbilityTargetActor_GroundTrace() {}
// End Class AGameplayAbilityTargetActor_GroundTrace

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityTargetActor_GroundTrace_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGameplayAbilityTargetActor_GroundTrace, AGameplayAbilityTargetActor_GroundTrace::StaticClass, TEXT("AGameplayAbilityTargetActor_GroundTrace"), &Z_Registration_Info_UClass_AGameplayAbilityTargetActor_GroundTrace, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGameplayAbilityTargetActor_GroundTrace), 1648004758U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityTargetActor_GroundTrace_h_402167677(TEXT("/Script/GameplayAbilities"),
	Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityTargetActor_GroundTrace_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityTargetActor_GroundTrace_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
