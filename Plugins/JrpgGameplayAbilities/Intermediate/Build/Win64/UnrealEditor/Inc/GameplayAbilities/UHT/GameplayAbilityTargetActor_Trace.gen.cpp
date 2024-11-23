// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayAbilities/Public/Abilities/GameplayAbilityTargetActor_Trace.h"
#include "Runtime/Engine/Classes/Engine/CollisionProfile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayAbilityTargetActor_Trace() {}

// Begin Cross Module References
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCollisionProfileName();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_AGameplayAbilityTargetActor();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_AGameplayAbilityTargetActor_Trace();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_AGameplayAbilityTargetActor_Trace_NoRegister();
UPackage* Z_Construct_UPackage__Script_GameplayAbilities();
// End Cross Module References

// Begin Class AGameplayAbilityTargetActor_Trace
void AGameplayAbilityTargetActor_Trace::StaticRegisterNativesAGameplayAbilityTargetActor_Trace()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGameplayAbilityTargetActor_Trace);
UClass* Z_Construct_UClass_AGameplayAbilityTargetActor_Trace_NoRegister()
{
	return AGameplayAbilityTargetActor_Trace::StaticClass();
}
struct Z_Construct_UClass_AGameplayAbilityTargetActor_Trace_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Intermediate base class for all line-trace type targeting actors. */" },
#endif
		{ "IncludePath", "Abilities/GameplayAbilityTargetActor_Trace.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTargetActor_Trace.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Intermediate base class for all line-trace type targeting actors." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxRange_MetaData[] = {
		{ "Category", "Trace" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTargetActor_Trace.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraceProfile_MetaData[] = {
		{ "Category", "Trace" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTargetActor_Trace.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTraceAffectsAimPitch_MetaData[] = {
		{ "Category", "Trace" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Does the trace affect the aiming pitch\n" },
#endif
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTargetActor_Trace.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Does the trace affect the aiming pitch" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxRange;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TraceProfile;
	static void NewProp_bTraceAffectsAimPitch_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTraceAffectsAimPitch;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGameplayAbilityTargetActor_Trace>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGameplayAbilityTargetActor_Trace_Statics::NewProp_MaxRange = { "MaxRange", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameplayAbilityTargetActor_Trace, MaxRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxRange_MetaData), NewProp_MaxRange_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGameplayAbilityTargetActor_Trace_Statics::NewProp_TraceProfile = { "TraceProfile", nullptr, (EPropertyFlags)0x0011000000004005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameplayAbilityTargetActor_Trace, TraceProfile), Z_Construct_UScriptStruct_FCollisionProfileName, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraceProfile_MetaData), NewProp_TraceProfile_MetaData) }; // 3816324900
void Z_Construct_UClass_AGameplayAbilityTargetActor_Trace_Statics::NewProp_bTraceAffectsAimPitch_SetBit(void* Obj)
{
	((AGameplayAbilityTargetActor_Trace*)Obj)->bTraceAffectsAimPitch = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGameplayAbilityTargetActor_Trace_Statics::NewProp_bTraceAffectsAimPitch = { "bTraceAffectsAimPitch", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGameplayAbilityTargetActor_Trace), &Z_Construct_UClass_AGameplayAbilityTargetActor_Trace_Statics::NewProp_bTraceAffectsAimPitch_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTraceAffectsAimPitch_MetaData), NewProp_bTraceAffectsAimPitch_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGameplayAbilityTargetActor_Trace_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameplayAbilityTargetActor_Trace_Statics::NewProp_MaxRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameplayAbilityTargetActor_Trace_Statics::NewProp_TraceProfile,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameplayAbilityTargetActor_Trace_Statics::NewProp_bTraceAffectsAimPitch,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGameplayAbilityTargetActor_Trace_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AGameplayAbilityTargetActor_Trace_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameplayAbilityTargetActor,
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGameplayAbilityTargetActor_Trace_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGameplayAbilityTargetActor_Trace_Statics::ClassParams = {
	&AGameplayAbilityTargetActor_Trace::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AGameplayAbilityTargetActor_Trace_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AGameplayAbilityTargetActor_Trace_Statics::PropPointers),
	0,
	0x009002A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGameplayAbilityTargetActor_Trace_Statics::Class_MetaDataParams), Z_Construct_UClass_AGameplayAbilityTargetActor_Trace_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGameplayAbilityTargetActor_Trace()
{
	if (!Z_Registration_Info_UClass_AGameplayAbilityTargetActor_Trace.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGameplayAbilityTargetActor_Trace.OuterSingleton, Z_Construct_UClass_AGameplayAbilityTargetActor_Trace_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGameplayAbilityTargetActor_Trace.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UClass* StaticClass<AGameplayAbilityTargetActor_Trace>()
{
	return AGameplayAbilityTargetActor_Trace::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGameplayAbilityTargetActor_Trace);
AGameplayAbilityTargetActor_Trace::~AGameplayAbilityTargetActor_Trace() {}
// End Class AGameplayAbilityTargetActor_Trace

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityTargetActor_Trace_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGameplayAbilityTargetActor_Trace, AGameplayAbilityTargetActor_Trace::StaticClass, TEXT("AGameplayAbilityTargetActor_Trace"), &Z_Registration_Info_UClass_AGameplayAbilityTargetActor_Trace, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGameplayAbilityTargetActor_Trace), 4186702270U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityTargetActor_Trace_h_1835155907(TEXT("/Script/GameplayAbilities"),
	Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityTargetActor_Trace_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityTargetActor_Trace_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
