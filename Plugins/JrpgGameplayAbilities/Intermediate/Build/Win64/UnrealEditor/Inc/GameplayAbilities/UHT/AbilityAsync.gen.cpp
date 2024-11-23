// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayAbilities/Public/Abilities/Async/AbilityAsync.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbilityAsync() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UCancellableAsyncAction();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityAsync();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityAsync_NoRegister();
UPackage* Z_Construct_UPackage__Script_GameplayAbilities();
// End Cross Module References

// Begin Class UAbilityAsync Function EndAction
struct Z_Construct_UFunction_UAbilityAsync_EndAction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ability|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Explicitly end the action, will disable any callbacks and allow action to be destroyed */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/Async/AbilityAsync.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Explicitly end the action, will disable any callbacks and allow action to be destroyed" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityAsync_EndAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityAsync, nullptr, "EndAction", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityAsync_EndAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilityAsync_EndAction_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UAbilityAsync_EndAction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityAsync_EndAction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilityAsync::execEndAction)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EndAction();
	P_NATIVE_END;
}
// End Class UAbilityAsync Function EndAction

// Begin Class UAbilityAsync
void UAbilityAsync::StaticRegisterNativesUAbilityAsync()
{
	UClass* Class = UAbilityAsync::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "EndAction", &UAbilityAsync::execEndAction },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAbilityAsync);
UClass* Z_Construct_UClass_UAbilityAsync_NoRegister()
{
	return UAbilityAsync::StaticClass();
}
struct Z_Construct_UClass_UAbilityAsync_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * AbilityAsync is a base class for ability-specific BlueprintAsyncActions.\n * These are similar to ability tasks, but they can be executed from any blueprint like an actor and are not tied to a specific ability lifespan.\n * By default these actions are only kept alive by the blueprint graph that spawns them and will eventually be destroyed if the graph instance is deleted or spawns a replacement.\n * EndAction should be called when a one-time action has succeeded or failed, but for longer-lived actions with multiple triggers it can be called from blueprints.\n */" },
#endif
		{ "ExposedAsyncProxy", "AsyncAction" },
		{ "IncludePath", "Abilities/Async/AbilityAsync.h" },
		{ "ModuleRelativePath", "Public/Abilities/Async/AbilityAsync.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "AbilityAsync is a base class for ability-specific BlueprintAsyncActions.\nThese are similar to ability tasks, but they can be executed from any blueprint like an actor and are not tied to a specific ability lifespan.\nBy default these actions are only kept alive by the blueprint graph that spawns them and will eventually be destroyed if the graph instance is deleted or spawns a replacement.\nEndAction should be called when a one-time action has succeeded or failed, but for longer-lived actions with multiple triggers it can be called from blueprints." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAbilityAsync_EndAction, "EndAction" }, // 3897609384
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAbilityAsync>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAbilityAsync_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCancellableAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityAsync_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAbilityAsync_Statics::ClassParams = {
	&UAbilityAsync::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityAsync_Statics::Class_MetaDataParams), Z_Construct_UClass_UAbilityAsync_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAbilityAsync()
{
	if (!Z_Registration_Info_UClass_UAbilityAsync.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAbilityAsync.OuterSingleton, Z_Construct_UClass_UAbilityAsync_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAbilityAsync.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UClass* StaticClass<UAbilityAsync>()
{
	return UAbilityAsync::StaticClass();
}
UAbilityAsync::UAbilityAsync(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAbilityAsync);
UAbilityAsync::~UAbilityAsync() {}
// End Class UAbilityAsync

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAbilityAsync, UAbilityAsync::StaticClass, TEXT("UAbilityAsync"), &Z_Registration_Info_UClass_UAbilityAsync, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAbilityAsync), 588161180U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_h_413374698(TEXT("/Script/GameplayAbilities"),
	Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
