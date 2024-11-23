// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayAbilitiesEditor/Public/K2Node_LatentAbilityCall.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK2Node_LatentAbilityCall() {}

// Begin Cross Module References
GAMEPLAYABILITIESEDITOR_API UClass* Z_Construct_UClass_UK2Node_LatentAbilityCall();
GAMEPLAYABILITIESEDITOR_API UClass* Z_Construct_UClass_UK2Node_LatentAbilityCall_NoRegister();
GAMEPLAYTASKSEDITOR_API UClass* Z_Construct_UClass_UK2Node_LatentGameplayTaskCall();
UPackage* Z_Construct_UPackage__Script_GameplayAbilitiesEditor();
// End Cross Module References

// Begin Class UK2Node_LatentAbilityCall
void UK2Node_LatentAbilityCall::StaticRegisterNativesUK2Node_LatentAbilityCall()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UK2Node_LatentAbilityCall);
UClass* Z_Construct_UClass_UK2Node_LatentAbilityCall_NoRegister()
{
	return UK2Node_LatentAbilityCall::StaticClass();
}
struct Z_Construct_UClass_UK2Node_LatentAbilityCall_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "K2Node_LatentAbilityCall.h" },
		{ "ModuleRelativePath", "Public/K2Node_LatentAbilityCall.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_LatentAbilityCall>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UK2Node_LatentAbilityCall_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UK2Node_LatentGameplayTaskCall,
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilitiesEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_LatentAbilityCall_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_LatentAbilityCall_Statics::ClassParams = {
	&UK2Node_LatentAbilityCall::StaticClass,
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
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_LatentAbilityCall_Statics::Class_MetaDataParams), Z_Construct_UClass_UK2Node_LatentAbilityCall_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UK2Node_LatentAbilityCall()
{
	if (!Z_Registration_Info_UClass_UK2Node_LatentAbilityCall.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UK2Node_LatentAbilityCall.OuterSingleton, Z_Construct_UClass_UK2Node_LatentAbilityCall_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UK2Node_LatentAbilityCall.OuterSingleton;
}
template<> GAMEPLAYABILITIESEDITOR_API UClass* StaticClass<UK2Node_LatentAbilityCall>()
{
	return UK2Node_LatentAbilityCall::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_LatentAbilityCall);
UK2Node_LatentAbilityCall::~UK2Node_LatentAbilityCall() {}
// End Class UK2Node_LatentAbilityCall

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilitiesEditor_Public_K2Node_LatentAbilityCall_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UK2Node_LatentAbilityCall, UK2Node_LatentAbilityCall::StaticClass, TEXT("UK2Node_LatentAbilityCall"), &Z_Registration_Info_UClass_UK2Node_LatentAbilityCall, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UK2Node_LatentAbilityCall), 4269018115U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilitiesEditor_Public_K2Node_LatentAbilityCall_h_3853606985(TEXT("/Script/GameplayAbilitiesEditor"),
	Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilitiesEditor_Public_K2Node_LatentAbilityCall_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilitiesEditor_Public_K2Node_LatentAbilityCall_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
