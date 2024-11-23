// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayAbilities/Public/TickableAttributeSetInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTickableAttributeSetInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UTickableAttributeSetInterface();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UTickableAttributeSetInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_GameplayAbilities();
// End Cross Module References

// Begin Interface UTickableAttributeSetInterface
void UTickableAttributeSetInterface::StaticRegisterNativesUTickableAttributeSetInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTickableAttributeSetInterface);
UClass* Z_Construct_UClass_UTickableAttributeSetInterface_NoRegister()
{
	return UTickableAttributeSetInterface::StaticClass();
}
struct Z_Construct_UClass_UTickableAttributeSetInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Public/TickableAttributeSetInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ITickableAttributeSetInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UTickableAttributeSetInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTickableAttributeSetInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTickableAttributeSetInterface_Statics::ClassParams = {
	&UTickableAttributeSetInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTickableAttributeSetInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UTickableAttributeSetInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTickableAttributeSetInterface()
{
	if (!Z_Registration_Info_UClass_UTickableAttributeSetInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTickableAttributeSetInterface.OuterSingleton, Z_Construct_UClass_UTickableAttributeSetInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTickableAttributeSetInterface.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UClass* StaticClass<UTickableAttributeSetInterface>()
{
	return UTickableAttributeSetInterface::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTickableAttributeSetInterface);
UTickableAttributeSetInterface::~UTickableAttributeSetInterface() {}
// End Interface UTickableAttributeSetInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_TickableAttributeSetInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTickableAttributeSetInterface, UTickableAttributeSetInterface::StaticClass, TEXT("UTickableAttributeSetInterface"), &Z_Registration_Info_UClass_UTickableAttributeSetInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTickableAttributeSetInterface), 1529332809U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_TickableAttributeSetInterface_h_1659204860(TEXT("/Script/GameplayAbilities"),
	Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_TickableAttributeSetInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_TickableAttributeSetInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
