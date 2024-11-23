// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayAbilities/Public/GameplayAbilityBlueprint.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayAbilityBlueprint() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprint();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbilityBlueprint();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbilityBlueprint_NoRegister();
UPackage* Z_Construct_UPackage__Script_GameplayAbilities();
// End Cross Module References

// Begin Class UGameplayAbilityBlueprint
void UGameplayAbilityBlueprint::StaticRegisterNativesUGameplayAbilityBlueprint()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameplayAbilityBlueprint);
UClass* Z_Construct_UClass_UGameplayAbilityBlueprint_NoRegister()
{
	return UGameplayAbilityBlueprint::StaticClass();
}
struct Z_Construct_UClass_UGameplayAbilityBlueprint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * A Gameplay Ability Blueprint is essentially a specialized Blueprint whose graphs control a gameplay ability\n * The ability factory should pick this for you automatically\n */" },
#endif
		{ "IncludePath", "GameplayAbilityBlueprint.h" },
		{ "ModuleRelativePath", "Public/GameplayAbilityBlueprint.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A Gameplay Ability Blueprint is essentially a specialized Blueprint whose graphs control a gameplay ability\nThe ability factory should pick this for you automatically" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameplayAbilityBlueprint>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGameplayAbilityBlueprint_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprint,
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayAbilityBlueprint_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameplayAbilityBlueprint_Statics::ClassParams = {
	&UGameplayAbilityBlueprint::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayAbilityBlueprint_Statics::Class_MetaDataParams), Z_Construct_UClass_UGameplayAbilityBlueprint_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGameplayAbilityBlueprint()
{
	if (!Z_Registration_Info_UClass_UGameplayAbilityBlueprint.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameplayAbilityBlueprint.OuterSingleton, Z_Construct_UClass_UGameplayAbilityBlueprint_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGameplayAbilityBlueprint.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UClass* StaticClass<UGameplayAbilityBlueprint>()
{
	return UGameplayAbilityBlueprint::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGameplayAbilityBlueprint);
UGameplayAbilityBlueprint::~UGameplayAbilityBlueprint() {}
// End Class UGameplayAbilityBlueprint

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayAbilityBlueprint_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGameplayAbilityBlueprint, UGameplayAbilityBlueprint::StaticClass, TEXT("UGameplayAbilityBlueprint"), &Z_Registration_Info_UClass_UGameplayAbilityBlueprint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameplayAbilityBlueprint), 1023294776U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayAbilityBlueprint_h_1370119283(TEXT("/Script/GameplayAbilities"),
	Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayAbilityBlueprint_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayAbilityBlueprint_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
