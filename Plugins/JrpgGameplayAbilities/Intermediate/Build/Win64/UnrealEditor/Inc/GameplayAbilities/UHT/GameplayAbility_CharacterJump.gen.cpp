// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayAbilities/Public/Abilities/GameplayAbility_CharacterJump.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayAbility_CharacterJump() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_CharacterJump();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_CharacterJump_NoRegister();
UPackage* Z_Construct_UPackage__Script_GameplayAbilities();
// End Cross Module References

// Begin Class UGameplayAbility_CharacterJump
void UGameplayAbility_CharacterJump::StaticRegisterNativesUGameplayAbility_CharacterJump()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameplayAbility_CharacterJump);
UClass* Z_Construct_UClass_UGameplayAbility_CharacterJump_NoRegister()
{
	return UGameplayAbility_CharacterJump::StaticClass();
}
struct Z_Construct_UClass_UGameplayAbility_CharacterJump_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\x09""Ability that jumps with a character.\n */" },
#endif
		{ "IncludePath", "Abilities/GameplayAbility_CharacterJump.h" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbility_CharacterJump.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Ability that jumps with a character." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameplayAbility_CharacterJump>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGameplayAbility_CharacterJump_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameplayAbility,
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayAbility_CharacterJump_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameplayAbility_CharacterJump_Statics::ClassParams = {
	&UGameplayAbility_CharacterJump::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayAbility_CharacterJump_Statics::Class_MetaDataParams), Z_Construct_UClass_UGameplayAbility_CharacterJump_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGameplayAbility_CharacterJump()
{
	if (!Z_Registration_Info_UClass_UGameplayAbility_CharacterJump.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameplayAbility_CharacterJump.OuterSingleton, Z_Construct_UClass_UGameplayAbility_CharacterJump_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGameplayAbility_CharacterJump.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UClass* StaticClass<UGameplayAbility_CharacterJump>()
{
	return UGameplayAbility_CharacterJump::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGameplayAbility_CharacterJump);
UGameplayAbility_CharacterJump::~UGameplayAbility_CharacterJump() {}
// End Class UGameplayAbility_CharacterJump

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbility_CharacterJump_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGameplayAbility_CharacterJump, UGameplayAbility_CharacterJump::StaticClass, TEXT("UGameplayAbility_CharacterJump"), &Z_Registration_Info_UClass_UGameplayAbility_CharacterJump, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameplayAbility_CharacterJump), 2014509690U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbility_CharacterJump_h_2310388876(TEXT("/Script/GameplayAbilities"),
	Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbility_CharacterJump_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbility_CharacterJump_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
