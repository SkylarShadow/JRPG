// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayAbilities/Private/Tests/GameplayCueTests.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayCueTests() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayCueNotify_Static();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayCueNotify_UnitTest();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayCueNotify_UnitTest_NoRegister();
UPackage* Z_Construct_UPackage__Script_GameplayAbilities();
// End Cross Module References

// Begin Class UGameplayCueNotify_UnitTest
void UGameplayCueNotify_UnitTest::StaticRegisterNativesUGameplayCueNotify_UnitTest()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameplayCueNotify_UnitTest);
UClass* Z_Construct_UClass_UGameplayCueNotify_UnitTest_NoRegister()
{
	return UGameplayCueNotify_UnitTest::StaticClass();
}
struct Z_Construct_UClass_UGameplayCueNotify_UnitTest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Helper GameplayCueNotify that is used for unit testing.  Note: Since this is a GCN_Static, we're using the CDO during testing */" },
#endif
		{ "HideCategories", "Replication" },
		{ "IncludePath", "Tests/GameplayCueTests.h" },
		{ "ModuleRelativePath", "Private/Tests/GameplayCueTests.h" },
		{ "NotBlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Helper GameplayCueNotify that is used for unit testing.  Note: Since this is a GCN_Static, we're using the CDO during testing" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameplayCueNotify_UnitTest>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGameplayCueNotify_UnitTest_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameplayCueNotify_Static,
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayCueNotify_UnitTest_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameplayCueNotify_UnitTest_Statics::ClassParams = {
	&UGameplayCueNotify_UnitTest::StaticClass,
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
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayCueNotify_UnitTest_Statics::Class_MetaDataParams), Z_Construct_UClass_UGameplayCueNotify_UnitTest_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGameplayCueNotify_UnitTest()
{
	if (!Z_Registration_Info_UClass_UGameplayCueNotify_UnitTest.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameplayCueNotify_UnitTest.OuterSingleton, Z_Construct_UClass_UGameplayCueNotify_UnitTest_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGameplayCueNotify_UnitTest.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UClass* StaticClass<UGameplayCueNotify_UnitTest>()
{
	return UGameplayCueNotify_UnitTest::StaticClass();
}
UGameplayCueNotify_UnitTest::UGameplayCueNotify_UnitTest(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGameplayCueNotify_UnitTest);
UGameplayCueNotify_UnitTest::~UGameplayCueNotify_UnitTest() {}
// End Class UGameplayCueNotify_UnitTest

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Private_Tests_GameplayCueTests_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGameplayCueNotify_UnitTest, UGameplayCueNotify_UnitTest::StaticClass, TEXT("UGameplayCueNotify_UnitTest"), &Z_Registration_Info_UClass_UGameplayCueNotify_UnitTest, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameplayCueNotify_UnitTest), 3887187185U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Private_Tests_GameplayCueTests_h_34327745(TEXT("/Script/GameplayAbilities"),
	Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Private_Tests_GameplayCueTests_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Private_Tests_GameplayCueTests_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
