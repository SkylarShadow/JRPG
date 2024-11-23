// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayAbilities/Public/AbilitySystemTestPawn.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbilitySystemTestPawn() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ADefaultPawn();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_AAbilitySystemTestPawn();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_AAbilitySystemTestPawn_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemInterface_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayCueInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_GameplayAbilities();
// End Cross Module References

// Begin Class AAbilitySystemTestPawn
void AAbilitySystemTestPawn::StaticRegisterNativesAAbilitySystemTestPawn()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAbilitySystemTestPawn);
UClass* Z_Construct_UClass_AAbilitySystemTestPawn_NoRegister()
{
	return AAbilitySystemTestPawn::StaticClass();
}
struct Z_Construct_UClass_AAbilitySystemTestPawn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "AbilitySystemTestPawn.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AbilitySystemTestPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AbilitySystem" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** DefaultPawn collision component */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AbilitySystemTestPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DefaultPawn collision component" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilitySystemComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAbilitySystemTestPawn>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAbilitySystemTestPawn_Statics::NewProp_AbilitySystemComponent = { "AbilitySystemComponent", nullptr, (EPropertyFlags)0x01440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAbilitySystemTestPawn, AbilitySystemComponent), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilitySystemComponent_MetaData), NewProp_AbilitySystemComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAbilitySystemTestPawn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAbilitySystemTestPawn_Statics::NewProp_AbilitySystemComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAbilitySystemTestPawn_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AAbilitySystemTestPawn_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ADefaultPawn,
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAbilitySystemTestPawn_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AAbilitySystemTestPawn_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UGameplayCueInterface_NoRegister, (int32)VTABLE_OFFSET(AAbilitySystemTestPawn, IGameplayCueInterface), false },  // 2745734257
	{ Z_Construct_UClass_UAbilitySystemInterface_NoRegister, (int32)VTABLE_OFFSET(AAbilitySystemTestPawn, IAbilitySystemInterface), false },  // 2272790346
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAbilitySystemTestPawn_Statics::ClassParams = {
	&AAbilitySystemTestPawn::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AAbilitySystemTestPawn_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AAbilitySystemTestPawn_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAbilitySystemTestPawn_Statics::Class_MetaDataParams), Z_Construct_UClass_AAbilitySystemTestPawn_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAbilitySystemTestPawn()
{
	if (!Z_Registration_Info_UClass_AAbilitySystemTestPawn.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAbilitySystemTestPawn.OuterSingleton, Z_Construct_UClass_AAbilitySystemTestPawn_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAbilitySystemTestPawn.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UClass* StaticClass<AAbilitySystemTestPawn>()
{
	return AAbilitySystemTestPawn::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAbilitySystemTestPawn);
AAbilitySystemTestPawn::~AAbilitySystemTestPawn() {}
// End Class AAbilitySystemTestPawn

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemTestPawn_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAbilitySystemTestPawn, AAbilitySystemTestPawn::StaticClass, TEXT("AAbilitySystemTestPawn"), &Z_Registration_Info_UClass_AAbilitySystemTestPawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAbilitySystemTestPawn), 429967533U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemTestPawn_h_1205752655(TEXT("/Script/GameplayAbilities"),
	Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemTestPawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemTestPawn_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
