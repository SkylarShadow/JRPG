// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayAbilities/Public/GameplayEffectComponents/AbilitiesGameplayEffectComponent.h"
#include "GameplayAbilities/Public/GameplayEffect.h"
#include "GameplayAbilities/Public/ScalableFloat.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbilitiesGameplayEffectComponent() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitiesGameplayEffectComponent();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitiesGameplayEffectComponent_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffectComponent();
GAMEPLAYABILITIES_API UEnum* Z_Construct_UEnum_GameplayAbilities_EGameplayEffectGrantedAbilityRemovePolicy();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilitySpecConfig();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FScalableFloat();
UPackage* Z_Construct_UPackage__Script_GameplayAbilities();
// End Cross Module References

// Begin ScriptStruct FGameplayAbilitySpecConfig
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayAbilitySpecConfig;
class UScriptStruct* FGameplayAbilitySpecConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayAbilitySpecConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayAbilitySpecConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayAbilitySpecConfig, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("GameplayAbilitySpecConfig"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayAbilitySpecConfig.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FGameplayAbilitySpecConfig>()
{
	return FGameplayAbilitySpecConfig::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGameplayAbilitySpecConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Options on how to configure a GameplayAbilitySpec to grant an Actor */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffectComponents/AbilitiesGameplayEffectComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Options on how to configure a GameplayAbilitySpec to grant an Actor" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ability_MetaData[] = {
		{ "Category", "Ability Definition" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** What ability to grant */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffectComponents/AbilitiesGameplayEffectComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "What ability to grant" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LevelScalableFloat_MetaData[] = {
		{ "Category", "Ability Definition" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** What level to grant this ability at */" },
#endif
		{ "DisplayName", "Level" },
		{ "ModuleRelativePath", "Public/GameplayEffectComponents/AbilitiesGameplayEffectComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "What level to grant this ability at" },
#endif
		{ "UIMin", "0.000000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputID_MetaData[] = {
		{ "Category", "Ability Definition" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Input ID to bind this ability to */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffectComponents/AbilitiesGameplayEffectComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input ID to bind this ability to" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RemovalPolicy_MetaData[] = {
		{ "Category", "Ability Definition" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** What will remove this ability later */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffectComponents/AbilitiesGameplayEffectComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "What will remove this ability later" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_Ability;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LevelScalableFloat;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InputID;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RemovalPolicy_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_RemovalPolicy;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayAbilitySpecConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FGameplayAbilitySpecConfig_Statics::NewProp_Ability = { "Ability", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayAbilitySpecConfig, Ability), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ability_MetaData), NewProp_Ability_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayAbilitySpecConfig_Statics::NewProp_LevelScalableFloat = { "LevelScalableFloat", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayAbilitySpecConfig, LevelScalableFloat), Z_Construct_UScriptStruct_FScalableFloat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LevelScalableFloat_MetaData), NewProp_LevelScalableFloat_MetaData) }; // 1548651388
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameplayAbilitySpecConfig_Statics::NewProp_InputID = { "InputID", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayAbilitySpecConfig, InputID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputID_MetaData), NewProp_InputID_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGameplayAbilitySpecConfig_Statics::NewProp_RemovalPolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGameplayAbilitySpecConfig_Statics::NewProp_RemovalPolicy = { "RemovalPolicy", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayAbilitySpecConfig, RemovalPolicy), Z_Construct_UEnum_GameplayAbilities_EGameplayEffectGrantedAbilityRemovePolicy, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RemovalPolicy_MetaData), NewProp_RemovalPolicy_MetaData) }; // 1272165065
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayAbilitySpecConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilitySpecConfig_Statics::NewProp_Ability,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilitySpecConfig_Statics::NewProp_LevelScalableFloat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilitySpecConfig_Statics::NewProp_InputID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilitySpecConfig_Statics::NewProp_RemovalPolicy_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilitySpecConfig_Statics::NewProp_RemovalPolicy,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilitySpecConfig_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayAbilitySpecConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
	nullptr,
	&NewStructOps,
	"GameplayAbilitySpecConfig",
	Z_Construct_UScriptStruct_FGameplayAbilitySpecConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilitySpecConfig_Statics::PropPointers),
	sizeof(FGameplayAbilitySpecConfig),
	alignof(FGameplayAbilitySpecConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilitySpecConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGameplayAbilitySpecConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilitySpecConfig()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayAbilitySpecConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayAbilitySpecConfig.InnerSingleton, Z_Construct_UScriptStruct_FGameplayAbilitySpecConfig_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GameplayAbilitySpecConfig.InnerSingleton;
}
// End ScriptStruct FGameplayAbilitySpecConfig

// Begin Class UAbilitiesGameplayEffectComponent
void UAbilitiesGameplayEffectComponent::StaticRegisterNativesUAbilitiesGameplayEffectComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAbilitiesGameplayEffectComponent);
UClass* Z_Construct_UClass_UAbilitiesGameplayEffectComponent_NoRegister()
{
	return UAbilitiesGameplayEffectComponent::StaticClass();
}
struct Z_Construct_UClass_UAbilitiesGameplayEffectComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Grants additional Gameplay Abilities to the Target of a Gameplay Effect while active\n */" },
#endif
		{ "DisplayName", "Grant Gameplay Abilities" },
		{ "IncludePath", "GameplayEffectComponents/AbilitiesGameplayEffectComponent.h" },
		{ "ModuleRelativePath", "Public/GameplayEffectComponents/AbilitiesGameplayEffectComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Grants additional Gameplay Abilities to the Target of a Gameplay Effect while active" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrantAbilityConfigs_MetaData[] = {
		{ "Category", "GrantAbilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Abilities to Grant to the Target while this Gameplay Effect is active */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffectComponents/AbilitiesGameplayEffectComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Abilities to Grant to the Target while this Gameplay Effect is active" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GrantAbilityConfigs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GrantAbilityConfigs;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAbilitiesGameplayEffectComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAbilitiesGameplayEffectComponent_Statics::NewProp_GrantAbilityConfigs_Inner = { "GrantAbilityConfigs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayAbilitySpecConfig, METADATA_PARAMS(0, nullptr) }; // 2639213310
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAbilitiesGameplayEffectComponent_Statics::NewProp_GrantAbilityConfigs = { "GrantAbilityConfigs", nullptr, (EPropertyFlags)0x0020080000010011, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilitiesGameplayEffectComponent, GrantAbilityConfigs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrantAbilityConfigs_MetaData), NewProp_GrantAbilityConfigs_MetaData) }; // 2639213310
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAbilitiesGameplayEffectComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilitiesGameplayEffectComponent_Statics::NewProp_GrantAbilityConfigs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilitiesGameplayEffectComponent_Statics::NewProp_GrantAbilityConfigs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilitiesGameplayEffectComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAbilitiesGameplayEffectComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameplayEffectComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilitiesGameplayEffectComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAbilitiesGameplayEffectComponent_Statics::ClassParams = {
	&UAbilitiesGameplayEffectComponent::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAbilitiesGameplayEffectComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAbilitiesGameplayEffectComponent_Statics::PropPointers),
	0,
	0x003130A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilitiesGameplayEffectComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UAbilitiesGameplayEffectComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAbilitiesGameplayEffectComponent()
{
	if (!Z_Registration_Info_UClass_UAbilitiesGameplayEffectComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAbilitiesGameplayEffectComponent.OuterSingleton, Z_Construct_UClass_UAbilitiesGameplayEffectComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAbilitiesGameplayEffectComponent.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UClass* StaticClass<UAbilitiesGameplayEffectComponent>()
{
	return UAbilitiesGameplayEffectComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAbilitiesGameplayEffectComponent);
UAbilitiesGameplayEffectComponent::~UAbilitiesGameplayEffectComponent() {}
// End Class UAbilitiesGameplayEffectComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectComponents_AbilitiesGameplayEffectComponent_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FGameplayAbilitySpecConfig::StaticStruct, Z_Construct_UScriptStruct_FGameplayAbilitySpecConfig_Statics::NewStructOps, TEXT("GameplayAbilitySpecConfig"), &Z_Registration_Info_UScriptStruct_GameplayAbilitySpecConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayAbilitySpecConfig), 2639213310U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAbilitiesGameplayEffectComponent, UAbilitiesGameplayEffectComponent::StaticClass, TEXT("UAbilitiesGameplayEffectComponent"), &Z_Registration_Info_UClass_UAbilitiesGameplayEffectComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAbilitiesGameplayEffectComponent), 3758125743U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectComponents_AbilitiesGameplayEffectComponent_h_1221892052(TEXT("/Script/GameplayAbilities"),
	Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectComponents_AbilitiesGameplayEffectComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectComponents_AbilitiesGameplayEffectComponent_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectComponents_AbilitiesGameplayEffectComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectComponents_AbilitiesGameplayEffectComponent_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
