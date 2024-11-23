// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayAbilitiesEditor/Public/GameplayAbilitiesBlueprintFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayAbilitiesBlueprintFactory() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EBlueprintType();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
GAMEPLAYABILITIESEDITOR_API UClass* Z_Construct_UClass_UGameplayAbilitiesBlueprintFactory();
GAMEPLAYABILITIESEDITOR_API UClass* Z_Construct_UClass_UGameplayAbilitiesBlueprintFactory_NoRegister();
UNREALED_API UClass* Z_Construct_UClass_UFactory();
UPackage* Z_Construct_UPackage__Script_GameplayAbilitiesEditor();
// End Cross Module References

// Begin Class UGameplayAbilitiesBlueprintFactory
void UGameplayAbilitiesBlueprintFactory::StaticRegisterNativesUGameplayAbilitiesBlueprintFactory()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameplayAbilitiesBlueprintFactory);
UClass* Z_Construct_UClass_UGameplayAbilitiesBlueprintFactory_NoRegister()
{
	return UGameplayAbilitiesBlueprintFactory::StaticClass();
}
struct Z_Construct_UClass_UGameplayAbilitiesBlueprintFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "GameplayAbilitiesBlueprintFactory.h" },
		{ "ModuleRelativePath", "Public/GameplayAbilitiesBlueprintFactory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlueprintType_MetaData[] = {
		{ "Category", "GameplayAbilitiesBlueprintFactory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The type of blueprint that will be created\n" },
#endif
		{ "ModuleRelativePath", "Public/GameplayAbilitiesBlueprintFactory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The type of blueprint that will be created" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParentClass_MetaData[] = {
		{ "Category", "GameplayAbilitiesBlueprintFactory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The parent class of the created blueprint\n" },
#endif
		{ "ModuleRelativePath", "Public/GameplayAbilitiesBlueprintFactory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The parent class of the created blueprint" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_BlueprintType;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ParentClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameplayAbilitiesBlueprintFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGameplayAbilitiesBlueprintFactory_Statics::NewProp_BlueprintType = { "BlueprintType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameplayAbilitiesBlueprintFactory, BlueprintType), Z_Construct_UEnum_Engine_EBlueprintType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlueprintType_MetaData), NewProp_BlueprintType_MetaData) }; // 3915063642
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UGameplayAbilitiesBlueprintFactory_Statics::NewProp_ParentClass = { "ParentClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameplayAbilitiesBlueprintFactory, ParentClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParentClass_MetaData), NewProp_ParentClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameplayAbilitiesBlueprintFactory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayAbilitiesBlueprintFactory_Statics::NewProp_BlueprintType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayAbilitiesBlueprintFactory_Statics::NewProp_ParentClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayAbilitiesBlueprintFactory_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGameplayAbilitiesBlueprintFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilitiesEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayAbilitiesBlueprintFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameplayAbilitiesBlueprintFactory_Statics::ClassParams = {
	&UGameplayAbilitiesBlueprintFactory::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGameplayAbilitiesBlueprintFactory_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayAbilitiesBlueprintFactory_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayAbilitiesBlueprintFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UGameplayAbilitiesBlueprintFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGameplayAbilitiesBlueprintFactory()
{
	if (!Z_Registration_Info_UClass_UGameplayAbilitiesBlueprintFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameplayAbilitiesBlueprintFactory.OuterSingleton, Z_Construct_UClass_UGameplayAbilitiesBlueprintFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGameplayAbilitiesBlueprintFactory.OuterSingleton;
}
template<> GAMEPLAYABILITIESEDITOR_API UClass* StaticClass<UGameplayAbilitiesBlueprintFactory>()
{
	return UGameplayAbilitiesBlueprintFactory::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGameplayAbilitiesBlueprintFactory);
UGameplayAbilitiesBlueprintFactory::~UGameplayAbilitiesBlueprintFactory() {}
// End Class UGameplayAbilitiesBlueprintFactory

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilitiesEditor_Public_GameplayAbilitiesBlueprintFactory_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGameplayAbilitiesBlueprintFactory, UGameplayAbilitiesBlueprintFactory::StaticClass, TEXT("UGameplayAbilitiesBlueprintFactory"), &Z_Registration_Info_UClass_UGameplayAbilitiesBlueprintFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameplayAbilitiesBlueprintFactory), 1545952455U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilitiesEditor_Public_GameplayAbilitiesBlueprintFactory_h_3628224302(TEXT("/Script/GameplayAbilitiesEditor"),
	Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilitiesEditor_Public_GameplayAbilitiesBlueprintFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilitiesEditor_Public_GameplayAbilitiesBlueprintFactory_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
