// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayAbilitiesEditor/Public/K2Node_GameplayCueEvent.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK2Node_GameplayCueEvent() {}

// Begin Cross Module References
BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_Event();
GAMEPLAYABILITIESEDITOR_API UClass* Z_Construct_UClass_UK2Node_GameplayCueEvent();
GAMEPLAYABILITIESEDITOR_API UClass* Z_Construct_UClass_UK2Node_GameplayCueEvent_NoRegister();
UPackage* Z_Construct_UPackage__Script_GameplayAbilitiesEditor();
// End Cross Module References

// Begin Class UK2Node_GameplayCueEvent
void UK2Node_GameplayCueEvent::StaticRegisterNativesUK2Node_GameplayCueEvent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UK2Node_GameplayCueEvent);
UClass* Z_Construct_UClass_UK2Node_GameplayCueEvent_NoRegister()
{
	return UK2Node_GameplayCueEvent::StaticClass();
}
struct Z_Construct_UClass_UK2Node_GameplayCueEvent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "K2Node_GameplayCueEvent.h" },
		{ "ModuleRelativePath", "Public/K2Node_GameplayCueEvent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_GameplayCueEvent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UK2Node_GameplayCueEvent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UK2Node_Event,
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilitiesEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_GameplayCueEvent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_GameplayCueEvent_Statics::ClassParams = {
	&UK2Node_GameplayCueEvent::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_GameplayCueEvent_Statics::Class_MetaDataParams), Z_Construct_UClass_UK2Node_GameplayCueEvent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UK2Node_GameplayCueEvent()
{
	if (!Z_Registration_Info_UClass_UK2Node_GameplayCueEvent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UK2Node_GameplayCueEvent.OuterSingleton, Z_Construct_UClass_UK2Node_GameplayCueEvent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UK2Node_GameplayCueEvent.OuterSingleton;
}
template<> GAMEPLAYABILITIESEDITOR_API UClass* StaticClass<UK2Node_GameplayCueEvent>()
{
	return UK2Node_GameplayCueEvent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_GameplayCueEvent);
UK2Node_GameplayCueEvent::~UK2Node_GameplayCueEvent() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UK2Node_GameplayCueEvent)
// End Class UK2Node_GameplayCueEvent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilitiesEditor_Public_K2Node_GameplayCueEvent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UK2Node_GameplayCueEvent, UK2Node_GameplayCueEvent::StaticClass, TEXT("UK2Node_GameplayCueEvent"), &Z_Registration_Info_UClass_UK2Node_GameplayCueEvent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UK2Node_GameplayCueEvent), 279145370U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilitiesEditor_Public_K2Node_GameplayCueEvent_h_1610691578(TEXT("/Script/GameplayAbilitiesEditor"),
	Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilitiesEditor_Public_K2Node_GameplayCueEvent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilitiesEditor_Public_K2Node_GameplayCueEvent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
