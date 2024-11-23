// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayAbilities/Public/AbilitySystemReplicationProxyInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbilitySystemReplicationProxyInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemReplicationProxyInterface();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemReplicationProxyInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_GameplayAbilities();
// End Cross Module References

// Begin Interface UAbilitySystemReplicationProxyInterface
void UAbilitySystemReplicationProxyInterface::StaticRegisterNativesUAbilitySystemReplicationProxyInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAbilitySystemReplicationProxyInterface);
UClass* Z_Construct_UClass_UAbilitySystemReplicationProxyInterface_NoRegister()
{
	return UAbilitySystemReplicationProxyInterface::StaticClass();
}
struct Z_Construct_UClass_UAbilitySystemReplicationProxyInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Public/AbilitySystemReplicationProxyInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IAbilitySystemReplicationProxyInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAbilitySystemReplicationProxyInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilitySystemReplicationProxyInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAbilitySystemReplicationProxyInterface_Statics::ClassParams = {
	&UAbilitySystemReplicationProxyInterface::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilitySystemReplicationProxyInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UAbilitySystemReplicationProxyInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAbilitySystemReplicationProxyInterface()
{
	if (!Z_Registration_Info_UClass_UAbilitySystemReplicationProxyInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAbilitySystemReplicationProxyInterface.OuterSingleton, Z_Construct_UClass_UAbilitySystemReplicationProxyInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAbilitySystemReplicationProxyInterface.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UClass* StaticClass<UAbilitySystemReplicationProxyInterface>()
{
	return UAbilitySystemReplicationProxyInterface::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAbilitySystemReplicationProxyInterface);
UAbilitySystemReplicationProxyInterface::~UAbilitySystemReplicationProxyInterface() {}
// End Interface UAbilitySystemReplicationProxyInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemReplicationProxyInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAbilitySystemReplicationProxyInterface, UAbilitySystemReplicationProxyInterface::StaticClass, TEXT("UAbilitySystemReplicationProxyInterface"), &Z_Registration_Info_UClass_UAbilitySystemReplicationProxyInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAbilitySystemReplicationProxyInterface), 1110849230U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemReplicationProxyInterface_h_2485824239(TEXT("/Script/GameplayAbilities"),
	Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemReplicationProxyInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemReplicationProxyInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
