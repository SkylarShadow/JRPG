// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayAbilitiesEditor/Public/GameplayEffectCreationMenu.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayEffectCreationMenu() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
GAMEPLAYABILITIESEDITOR_API UClass* Z_Construct_UClass_UGameplayEffectCreationMenu();
GAMEPLAYABILITIESEDITOR_API UClass* Z_Construct_UClass_UGameplayEffectCreationMenu_NoRegister();
GAMEPLAYABILITIESEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectCreationData();
UPackage* Z_Construct_UPackage__Script_GameplayAbilitiesEditor();
// End Cross Module References

// Begin ScriptStruct FGameplayEffectCreationData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayEffectCreationData;
class UScriptStruct* FGameplayEffectCreationData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayEffectCreationData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayEffectCreationData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayEffectCreationData, (UObject*)Z_Construct_UPackage__Script_GameplayAbilitiesEditor(), TEXT("GameplayEffectCreationData"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayEffectCreationData.OuterSingleton;
}
template<> GAMEPLAYABILITIESEDITOR_API UScriptStruct* StaticStruct<FGameplayEffectCreationData>()
{
	return FGameplayEffectCreationData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGameplayEffectCreationData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameplayEffectCreationMenu.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MenuPath_MetaData[] = {
		{ "Category", "Gameplay Effect" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Where to show this in the menu. Use \"|\" for sub categories. E.g, \"Status|Hard|Stun|Root\". */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffectCreationMenu.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Where to show this in the menu. Use \"|\" for sub categories. E.g, \"Status|Hard|Stun|Root\"." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseName_MetaData[] = {
		{ "Category", "Gameplay Effect" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The default BaseName of the new asset. E.g \"Damage\" -> GE_Damage or GE_HeroName_AbilityName_Damage */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffectCreationMenu.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The default BaseName of the new asset. E.g \"Damage\" -> GE_Damage or GE_HeroName_AbilityName_Damage" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParentGameplayEffect_MetaData[] = {
		{ "Category", "Gameplay Effect" },
		{ "ModuleRelativePath", "Public/GameplayEffectCreationMenu.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_MenuPath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_BaseName;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ParentGameplayEffect;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayEffectCreationData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGameplayEffectCreationData_Statics::NewProp_MenuPath = { "MenuPath", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayEffectCreationData, MenuPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MenuPath_MetaData), NewProp_MenuPath_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGameplayEffectCreationData_Statics::NewProp_BaseName = { "BaseName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayEffectCreationData, BaseName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseName_MetaData), NewProp_BaseName_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FGameplayEffectCreationData_Statics::NewProp_ParentGameplayEffect = { "ParentGameplayEffect", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayEffectCreationData, ParentGameplayEffect), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParentGameplayEffect_MetaData), NewProp_ParentGameplayEffect_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayEffectCreationData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectCreationData_Statics::NewProp_MenuPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectCreationData_Statics::NewProp_BaseName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectCreationData_Statics::NewProp_ParentGameplayEffect,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectCreationData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayEffectCreationData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilitiesEditor,
	nullptr,
	&NewStructOps,
	"GameplayEffectCreationData",
	Z_Construct_UScriptStruct_FGameplayEffectCreationData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectCreationData_Statics::PropPointers),
	sizeof(FGameplayEffectCreationData),
	alignof(FGameplayEffectCreationData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectCreationData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGameplayEffectCreationData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectCreationData()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayEffectCreationData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayEffectCreationData.InnerSingleton, Z_Construct_UScriptStruct_FGameplayEffectCreationData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GameplayEffectCreationData.InnerSingleton;
}
// End ScriptStruct FGameplayEffectCreationData

// Begin Class UGameplayEffectCreationMenu
void UGameplayEffectCreationMenu::StaticRegisterNativesUGameplayEffectCreationMenu()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameplayEffectCreationMenu);
UClass* Z_Construct_UClass_UGameplayEffectCreationMenu_NoRegister()
{
	return UGameplayEffectCreationMenu::StaticClass();
}
struct Z_Construct_UClass_UGameplayEffectCreationMenu_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Container to hold EventKeywords for PIE testing */" },
#endif
		{ "IncludePath", "GameplayEffectCreationMenu.h" },
		{ "ModuleRelativePath", "Public/GameplayEffectCreationMenu.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Container to hold EventKeywords for PIE testing" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Definitions_MetaData[] = {
		{ "Category", "Gameplay Effect" },
		{ "ModuleRelativePath", "Public/GameplayEffectCreationMenu.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Definitions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Definitions;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameplayEffectCreationMenu>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameplayEffectCreationMenu_Statics::NewProp_Definitions_Inner = { "Definitions", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayEffectCreationData, METADATA_PARAMS(0, nullptr) }; // 1059856579
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameplayEffectCreationMenu_Statics::NewProp_Definitions = { "Definitions", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameplayEffectCreationMenu, Definitions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Definitions_MetaData), NewProp_Definitions_MetaData) }; // 1059856579
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameplayEffectCreationMenu_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayEffectCreationMenu_Statics::NewProp_Definitions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayEffectCreationMenu_Statics::NewProp_Definitions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayEffectCreationMenu_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGameplayEffectCreationMenu_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilitiesEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayEffectCreationMenu_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameplayEffectCreationMenu_Statics::ClassParams = {
	&UGameplayEffectCreationMenu::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGameplayEffectCreationMenu_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayEffectCreationMenu_Statics::PropPointers),
	0,
	0x001000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayEffectCreationMenu_Statics::Class_MetaDataParams), Z_Construct_UClass_UGameplayEffectCreationMenu_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGameplayEffectCreationMenu()
{
	if (!Z_Registration_Info_UClass_UGameplayEffectCreationMenu.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameplayEffectCreationMenu.OuterSingleton, Z_Construct_UClass_UGameplayEffectCreationMenu_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGameplayEffectCreationMenu.OuterSingleton;
}
template<> GAMEPLAYABILITIESEDITOR_API UClass* StaticClass<UGameplayEffectCreationMenu>()
{
	return UGameplayEffectCreationMenu::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGameplayEffectCreationMenu);
UGameplayEffectCreationMenu::~UGameplayEffectCreationMenu() {}
// End Class UGameplayEffectCreationMenu

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilitiesEditor_Public_GameplayEffectCreationMenu_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FGameplayEffectCreationData::StaticStruct, Z_Construct_UScriptStruct_FGameplayEffectCreationData_Statics::NewStructOps, TEXT("GameplayEffectCreationData"), &Z_Registration_Info_UScriptStruct_GameplayEffectCreationData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayEffectCreationData), 1059856579U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGameplayEffectCreationMenu, UGameplayEffectCreationMenu::StaticClass, TEXT("UGameplayEffectCreationMenu"), &Z_Registration_Info_UClass_UGameplayEffectCreationMenu, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameplayEffectCreationMenu), 2001690099U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilitiesEditor_Public_GameplayEffectCreationMenu_h_2178170979(TEXT("/Script/GameplayAbilitiesEditor"),
	Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilitiesEditor_Public_GameplayEffectCreationMenu_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilitiesEditor_Public_GameplayEffectCreationMenu_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilitiesEditor_Public_GameplayEffectCreationMenu_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilitiesEditor_Public_GameplayEffectCreationMenu_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
