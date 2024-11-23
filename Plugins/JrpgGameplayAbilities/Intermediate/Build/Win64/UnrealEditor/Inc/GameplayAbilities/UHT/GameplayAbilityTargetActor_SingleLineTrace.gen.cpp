// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayAbilities/Public/Abilities/GameplayAbilityTargetActor_SingleLineTrace.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayAbilityTargetActor_SingleLineTrace() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_AGameplayAbilityTargetActor_SingleLineTrace();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_AGameplayAbilityTargetActor_SingleLineTrace_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_AGameplayAbilityTargetActor_Trace();
UPackage* Z_Construct_UPackage__Script_GameplayAbilities();
// End Cross Module References

// Begin Class AGameplayAbilityTargetActor_SingleLineTrace
void AGameplayAbilityTargetActor_SingleLineTrace::StaticRegisterNativesAGameplayAbilityTargetActor_SingleLineTrace()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGameplayAbilityTargetActor_SingleLineTrace);
UClass* Z_Construct_UClass_AGameplayAbilityTargetActor_SingleLineTrace_NoRegister()
{
	return AGameplayAbilityTargetActor_SingleLineTrace::StaticClass();
}
struct Z_Construct_UClass_AGameplayAbilityTargetActor_SingleLineTrace_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Abilities/GameplayAbilityTargetActor_SingleLineTrace.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTargetActor_SingleLineTrace.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGameplayAbilityTargetActor_SingleLineTrace>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AGameplayAbilityTargetActor_SingleLineTrace_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameplayAbilityTargetActor_Trace,
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGameplayAbilityTargetActor_SingleLineTrace_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGameplayAbilityTargetActor_SingleLineTrace_Statics::ClassParams = {
	&AGameplayAbilityTargetActor_SingleLineTrace::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGameplayAbilityTargetActor_SingleLineTrace_Statics::Class_MetaDataParams), Z_Construct_UClass_AGameplayAbilityTargetActor_SingleLineTrace_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGameplayAbilityTargetActor_SingleLineTrace()
{
	if (!Z_Registration_Info_UClass_AGameplayAbilityTargetActor_SingleLineTrace.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGameplayAbilityTargetActor_SingleLineTrace.OuterSingleton, Z_Construct_UClass_AGameplayAbilityTargetActor_SingleLineTrace_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGameplayAbilityTargetActor_SingleLineTrace.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UClass* StaticClass<AGameplayAbilityTargetActor_SingleLineTrace>()
{
	return AGameplayAbilityTargetActor_SingleLineTrace::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGameplayAbilityTargetActor_SingleLineTrace);
AGameplayAbilityTargetActor_SingleLineTrace::~AGameplayAbilityTargetActor_SingleLineTrace() {}
// End Class AGameplayAbilityTargetActor_SingleLineTrace

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityTargetActor_SingleLineTrace_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGameplayAbilityTargetActor_SingleLineTrace, AGameplayAbilityTargetActor_SingleLineTrace::StaticClass, TEXT("AGameplayAbilityTargetActor_SingleLineTrace"), &Z_Registration_Info_UClass_AGameplayAbilityTargetActor_SingleLineTrace, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGameplayAbilityTargetActor_SingleLineTrace), 800657503U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityTargetActor_SingleLineTrace_h_4066337899(TEXT("/Script/GameplayAbilities"),
	Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityTargetActor_SingleLineTrace_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityTargetActor_SingleLineTrace_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
