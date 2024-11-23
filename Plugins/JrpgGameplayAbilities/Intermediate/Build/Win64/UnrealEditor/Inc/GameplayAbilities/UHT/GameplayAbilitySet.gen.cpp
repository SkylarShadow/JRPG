// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayAbilities/Public/GameplayAbilitySet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayAbilitySet() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbilitySet();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbilitySet_NoRegister();
GAMEPLAYABILITIES_API UEnum* Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityInputBinds();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilityBindInfo();
UPackage* Z_Construct_UPackage__Script_GameplayAbilities();
// End Cross Module References

// Begin Enum EGameplayAbilityInputBinds
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGameplayAbilityInputBinds;
static UEnum* EGameplayAbilityInputBinds_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGameplayAbilityInputBinds.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGameplayAbilityInputBinds.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityInputBinds, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("EGameplayAbilityInputBinds"));
	}
	return Z_Registration_Info_UEnum_EGameplayAbilityInputBinds.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UEnum* StaticEnum<EGameplayAbilityInputBinds::Type>()
{
	return EGameplayAbilityInputBinds_StaticEnum();
}
struct Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityInputBinds_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Ability1.DisplayName", "Ability1 (LMB)" },
		{ "Ability1.Name", "EGameplayAbilityInputBinds::Ability1" },
		{ "Ability2.DisplayName", "Ability2 (RMB)" },
		{ "Ability2.Name", "EGameplayAbilityInputBinds::Ability2" },
		{ "Ability3.DisplayName", "Ability3 (Q)" },
		{ "Ability3.Name", "EGameplayAbilityInputBinds::Ability3" },
		{ "Ability4.DisplayName", "Ability4 (E)" },
		{ "Ability4.Name", "EGameplayAbilityInputBinds::Ability4" },
		{ "Ability5.DisplayName", "Ability5 (R)" },
		{ "Ability5.Name", "EGameplayAbilityInputBinds::Ability5" },
		{ "Ability6.DisplayName", "Ability6 (Shift)" },
		{ "Ability6.Name", "EGameplayAbilityInputBinds::Ability6" },
		{ "Ability7.DisplayName", "Ability7 (Space)" },
		{ "Ability7.Name", "EGameplayAbilityInputBinds::Ability7" },
		{ "Ability8.DisplayName", "Ability8 (B)" },
		{ "Ability8.Name", "EGameplayAbilityInputBinds::Ability8" },
		{ "Ability9.DisplayName", "Ability9 (T)" },
		{ "Ability9.Name", "EGameplayAbilityInputBinds::Ability9" },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\x09This is an example input binding enum for GameplayAbilities. Your project may want to create its own.\n *\x09The MetaData default bind keys (LMB, RMB, Q, E, etc) are a convenience for designers setting up abilities sets\n *\x09or whatever other data you have that gives an ability with a default key binding. Actual key binding is up to DefaultInput.ini\n *\x09\n *\x09""E.g., \"Ability1\" is the command string that is bound to AbilitySystemComponent::ActivateAbility(1). The Meta data only *suggests*\n *\x09that you are binding \"Ability1\" to LMB by default in your projects DefaultInput.ini.\n */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayAbilitySet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is an example input binding enum for GameplayAbilities. Your project may want to create its own.\nThe MetaData default bind keys (LMB, RMB, Q, E, etc) are a convenience for designers setting up abilities sets\nor whatever other data you have that gives an ability with a default key binding. Actual key binding is up to DefaultInput.ini\n\nE.g., \"Ability1\" is the command string that is bound to AbilitySystemComponent::ActivateAbility(1). The Meta data only *suggests*\nthat you are binding \"Ability1\" to LMB by default in your projects DefaultInput.ini." },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGameplayAbilityInputBinds::Ability1", (int64)EGameplayAbilityInputBinds::Ability1 },
		{ "EGameplayAbilityInputBinds::Ability2", (int64)EGameplayAbilityInputBinds::Ability2 },
		{ "EGameplayAbilityInputBinds::Ability3", (int64)EGameplayAbilityInputBinds::Ability3 },
		{ "EGameplayAbilityInputBinds::Ability4", (int64)EGameplayAbilityInputBinds::Ability4 },
		{ "EGameplayAbilityInputBinds::Ability5", (int64)EGameplayAbilityInputBinds::Ability5 },
		{ "EGameplayAbilityInputBinds::Ability6", (int64)EGameplayAbilityInputBinds::Ability6 },
		{ "EGameplayAbilityInputBinds::Ability7", (int64)EGameplayAbilityInputBinds::Ability7 },
		{ "EGameplayAbilityInputBinds::Ability8", (int64)EGameplayAbilityInputBinds::Ability8 },
		{ "EGameplayAbilityInputBinds::Ability9", (int64)EGameplayAbilityInputBinds::Ability9 },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityInputBinds_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_GameplayAbilities,
	nullptr,
	"EGameplayAbilityInputBinds",
	"EGameplayAbilityInputBinds::Type",
	Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityInputBinds_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityInputBinds_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Namespaced,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityInputBinds_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityInputBinds_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityInputBinds()
{
	if (!Z_Registration_Info_UEnum_EGameplayAbilityInputBinds.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGameplayAbilityInputBinds.InnerSingleton, Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityInputBinds_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGameplayAbilityInputBinds.InnerSingleton;
}
// End Enum EGameplayAbilityInputBinds

// Begin ScriptStruct FGameplayAbilityBindInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayAbilityBindInfo;
class UScriptStruct* FGameplayAbilityBindInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayAbilityBindInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayAbilityBindInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayAbilityBindInfo, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("GameplayAbilityBindInfo"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayAbilityBindInfo.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FGameplayAbilityBindInfo>()
{
	return FGameplayAbilityBindInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGameplayAbilityBindInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\x09""Example struct that pairs a enum input command to a GameplayAbilityClass.6\n */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayAbilitySet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Example struct that pairs a enum input command to a GameplayAbilityClass.6" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Command_MetaData[] = {
		{ "Category", "BindInfo" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameplayAbilityClass_MetaData[] = {
		{ "Category", "BindInfo" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Command;
	static const UECodeGen_Private::FClassPropertyParams NewProp_GameplayAbilityClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayAbilityBindInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGameplayAbilityBindInfo_Statics::NewProp_Command = { "Command", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayAbilityBindInfo, Command), Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityInputBinds, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Command_MetaData), NewProp_Command_MetaData) }; // 4043760372
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FGameplayAbilityBindInfo_Statics::NewProp_GameplayAbilityClass = { "GameplayAbilityClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayAbilityBindInfo, GameplayAbilityClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameplayAbilityClass_MetaData), NewProp_GameplayAbilityClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayAbilityBindInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilityBindInfo_Statics::NewProp_Command,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilityBindInfo_Statics::NewProp_GameplayAbilityClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilityBindInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayAbilityBindInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
	nullptr,
	&NewStructOps,
	"GameplayAbilityBindInfo",
	Z_Construct_UScriptStruct_FGameplayAbilityBindInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilityBindInfo_Statics::PropPointers),
	sizeof(FGameplayAbilityBindInfo),
	alignof(FGameplayAbilityBindInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilityBindInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGameplayAbilityBindInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilityBindInfo()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayAbilityBindInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayAbilityBindInfo.InnerSingleton, Z_Construct_UScriptStruct_FGameplayAbilityBindInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GameplayAbilityBindInfo.InnerSingleton;
}
// End ScriptStruct FGameplayAbilityBindInfo

// Begin Class UGameplayAbilitySet
void UGameplayAbilitySet::StaticRegisterNativesUGameplayAbilitySet()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameplayAbilitySet);
UClass* Z_Construct_UClass_UGameplayAbilitySet_NoRegister()
{
	return UGameplayAbilitySet::StaticClass();
}
struct Z_Construct_UClass_UGameplayAbilitySet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\x09This is an example DataAsset that could be used for defining a set of abilities to give to an AbilitySystemComponent and bind to an input command.\n *\x09Your project is free to implement this however it wants!\n *\x09\n *\x09\n */" },
#endif
		{ "IncludePath", "GameplayAbilitySet.h" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is an example DataAsset that could be used for defining a set of abilities to give to an AbilitySystemComponent and bind to an input command.\nYour project is free to implement this however it wants!" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Abilities_MetaData[] = {
		{ "Category", "AbilitySet" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Abilities_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Abilities;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameplayAbilitySet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameplayAbilitySet_Statics::NewProp_Abilities_Inner = { "Abilities", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayAbilityBindInfo, METADATA_PARAMS(0, nullptr) }; // 164420188
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameplayAbilitySet_Statics::NewProp_Abilities = { "Abilities", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameplayAbilitySet, Abilities), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Abilities_MetaData), NewProp_Abilities_MetaData) }; // 164420188
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameplayAbilitySet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayAbilitySet_Statics::NewProp_Abilities_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayAbilitySet_Statics::NewProp_Abilities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayAbilitySet_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGameplayAbilitySet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayAbilitySet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameplayAbilitySet_Statics::ClassParams = {
	&UGameplayAbilitySet::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGameplayAbilitySet_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayAbilitySet_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayAbilitySet_Statics::Class_MetaDataParams), Z_Construct_UClass_UGameplayAbilitySet_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGameplayAbilitySet()
{
	if (!Z_Registration_Info_UClass_UGameplayAbilitySet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameplayAbilitySet.OuterSingleton, Z_Construct_UClass_UGameplayAbilitySet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGameplayAbilitySet.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UClass* StaticClass<UGameplayAbilitySet>()
{
	return UGameplayAbilitySet::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGameplayAbilitySet);
UGameplayAbilitySet::~UGameplayAbilitySet() {}
// End Class UGameplayAbilitySet

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayAbilitySet_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EGameplayAbilityInputBinds_StaticEnum, TEXT("EGameplayAbilityInputBinds"), &Z_Registration_Info_UEnum_EGameplayAbilityInputBinds, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4043760372U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FGameplayAbilityBindInfo::StaticStruct, Z_Construct_UScriptStruct_FGameplayAbilityBindInfo_Statics::NewStructOps, TEXT("GameplayAbilityBindInfo"), &Z_Registration_Info_UScriptStruct_GameplayAbilityBindInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayAbilityBindInfo), 164420188U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGameplayAbilitySet, UGameplayAbilitySet::StaticClass, TEXT("UGameplayAbilitySet"), &Z_Registration_Info_UClass_UGameplayAbilitySet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameplayAbilitySet), 3637498699U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayAbilitySet_h_3537256379(TEXT("/Script/GameplayAbilities"),
	Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayAbilitySet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayAbilitySet_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayAbilitySet_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayAbilitySet_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayAbilitySet_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayAbilitySet_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
