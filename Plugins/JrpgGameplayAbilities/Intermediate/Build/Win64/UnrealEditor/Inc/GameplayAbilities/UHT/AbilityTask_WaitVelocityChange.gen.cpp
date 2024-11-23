// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayAbilities/Public/Abilities/Tasks/AbilityTask_WaitVelocityChange.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbilityTask_WaitVelocityChange() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UMovementComponent_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask_WaitVelocityChange();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask_WaitVelocityChange_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
GAMEPLAYABILITIES_API UFunction* Z_Construct_UDelegateFunction_GameplayAbilities_WaitVelocityChangeDelegate__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_GameplayAbilities();
// End Cross Module References

// Begin Delegate FWaitVelocityChangeDelegate
struct Z_Construct_UDelegateFunction_GameplayAbilities_WaitVelocityChangeDelegate__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_WaitVelocityChange.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GameplayAbilities_WaitVelocityChangeDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GameplayAbilities, nullptr, "WaitVelocityChangeDelegate__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameplayAbilities_WaitVelocityChangeDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_GameplayAbilities_WaitVelocityChangeDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_GameplayAbilities_WaitVelocityChangeDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_GameplayAbilities_WaitVelocityChangeDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FWaitVelocityChangeDelegate_DelegateWrapper(const FMulticastScriptDelegate& WaitVelocityChangeDelegate)
{
	WaitVelocityChangeDelegate.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FWaitVelocityChangeDelegate

// Begin Class UAbilityTask_WaitVelocityChange Function CreateWaitVelocityChange
struct Z_Construct_UFunction_UAbilityTask_WaitVelocityChange_CreateWaitVelocityChange_Statics
{
	struct AbilityTask_WaitVelocityChange_eventCreateWaitVelocityChange_Parms
	{
		UGameplayAbility* OwningAbility;
		FVector Direction;
		float MinimumMagnitude;
		UAbilityTask_WaitVelocityChange* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "TRUE" },
		{ "Category", "Ability|Tasks" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Wait for the actor's movement component velocity to be of minimum magnitude when projected along given direction */" },
#endif
		{ "DefaultToSelf", "OwningAbility" },
		{ "DisplayName", "WaitVelocityChange" },
		{ "HidePin", "OwningAbility" },
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_WaitVelocityChange.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Wait for the actor's movement component velocity to be of minimum magnitude when projected along given direction" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningAbility;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Direction;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinimumMagnitude;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_WaitVelocityChange_CreateWaitVelocityChange_Statics::NewProp_OwningAbility = { "OwningAbility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_WaitVelocityChange_eventCreateWaitVelocityChange_Parms, OwningAbility), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbilityTask_WaitVelocityChange_CreateWaitVelocityChange_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_WaitVelocityChange_eventCreateWaitVelocityChange_Parms, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAbilityTask_WaitVelocityChange_CreateWaitVelocityChange_Statics::NewProp_MinimumMagnitude = { "MinimumMagnitude", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_WaitVelocityChange_eventCreateWaitVelocityChange_Parms, MinimumMagnitude), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_WaitVelocityChange_CreateWaitVelocityChange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_WaitVelocityChange_eventCreateWaitVelocityChange_Parms, ReturnValue), Z_Construct_UClass_UAbilityTask_WaitVelocityChange_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityTask_WaitVelocityChange_CreateWaitVelocityChange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitVelocityChange_CreateWaitVelocityChange_Statics::NewProp_OwningAbility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitVelocityChange_CreateWaitVelocityChange_Statics::NewProp_Direction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitVelocityChange_CreateWaitVelocityChange_Statics::NewProp_MinimumMagnitude,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitVelocityChange_CreateWaitVelocityChange_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_WaitVelocityChange_CreateWaitVelocityChange_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityTask_WaitVelocityChange_CreateWaitVelocityChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityTask_WaitVelocityChange, nullptr, "CreateWaitVelocityChange", nullptr, nullptr, Z_Construct_UFunction_UAbilityTask_WaitVelocityChange_CreateWaitVelocityChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_WaitVelocityChange_CreateWaitVelocityChange_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAbilityTask_WaitVelocityChange_CreateWaitVelocityChange_Statics::AbilityTask_WaitVelocityChange_eventCreateWaitVelocityChange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_WaitVelocityChange_CreateWaitVelocityChange_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilityTask_WaitVelocityChange_CreateWaitVelocityChange_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAbilityTask_WaitVelocityChange_CreateWaitVelocityChange_Statics::AbilityTask_WaitVelocityChange_eventCreateWaitVelocityChange_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbilityTask_WaitVelocityChange_CreateWaitVelocityChange()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityTask_WaitVelocityChange_CreateWaitVelocityChange_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilityTask_WaitVelocityChange::execCreateWaitVelocityChange)
{
	P_GET_OBJECT(UGameplayAbility,Z_Param_OwningAbility);
	P_GET_STRUCT(FVector,Z_Param_Direction);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MinimumMagnitude);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAbilityTask_WaitVelocityChange**)Z_Param__Result=UAbilityTask_WaitVelocityChange::CreateWaitVelocityChange(Z_Param_OwningAbility,Z_Param_Direction,Z_Param_MinimumMagnitude);
	P_NATIVE_END;
}
// End Class UAbilityTask_WaitVelocityChange Function CreateWaitVelocityChange

// Begin Class UAbilityTask_WaitVelocityChange
void UAbilityTask_WaitVelocityChange::StaticRegisterNativesUAbilityTask_WaitVelocityChange()
{
	UClass* Class = UAbilityTask_WaitVelocityChange::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreateWaitVelocityChange", &UAbilityTask_WaitVelocityChange::execCreateWaitVelocityChange },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAbilityTask_WaitVelocityChange);
UClass* Z_Construct_UClass_UAbilityTask_WaitVelocityChange_NoRegister()
{
	return UAbilityTask_WaitVelocityChange::StaticClass();
}
struct Z_Construct_UClass_UAbilityTask_WaitVelocityChange_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Abilities/Tasks/AbilityTask_WaitVelocityChange.h" },
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_WaitVelocityChange.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnVelocityChage_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Delegate called when velocity requirements are met */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_WaitVelocityChange.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Delegate called when velocity requirements are met" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedMovementComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_WaitVelocityChange.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnVelocityChage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CachedMovementComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAbilityTask_WaitVelocityChange_CreateWaitVelocityChange, "CreateWaitVelocityChange" }, // 148398905
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAbilityTask_WaitVelocityChange>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAbilityTask_WaitVelocityChange_Statics::NewProp_OnVelocityChage = { "OnVelocityChage", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityTask_WaitVelocityChange, OnVelocityChage), Z_Construct_UDelegateFunction_GameplayAbilities_WaitVelocityChangeDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnVelocityChage_MetaData), NewProp_OnVelocityChage_MetaData) }; // 3108497742
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAbilityTask_WaitVelocityChange_Statics::NewProp_CachedMovementComponent = { "CachedMovementComponent", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityTask_WaitVelocityChange, CachedMovementComponent), Z_Construct_UClass_UMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedMovementComponent_MetaData), NewProp_CachedMovementComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAbilityTask_WaitVelocityChange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_WaitVelocityChange_Statics::NewProp_OnVelocityChage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_WaitVelocityChange_Statics::NewProp_CachedMovementComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_WaitVelocityChange_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAbilityTask_WaitVelocityChange_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAbilityTask,
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_WaitVelocityChange_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAbilityTask_WaitVelocityChange_Statics::ClassParams = {
	&UAbilityTask_WaitVelocityChange::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAbilityTask_WaitVelocityChange_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_WaitVelocityChange_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_WaitVelocityChange_Statics::Class_MetaDataParams), Z_Construct_UClass_UAbilityTask_WaitVelocityChange_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAbilityTask_WaitVelocityChange()
{
	if (!Z_Registration_Info_UClass_UAbilityTask_WaitVelocityChange.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAbilityTask_WaitVelocityChange.OuterSingleton, Z_Construct_UClass_UAbilityTask_WaitVelocityChange_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAbilityTask_WaitVelocityChange.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UClass* StaticClass<UAbilityTask_WaitVelocityChange>()
{
	return UAbilityTask_WaitVelocityChange::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAbilityTask_WaitVelocityChange);
UAbilityTask_WaitVelocityChange::~UAbilityTask_WaitVelocityChange() {}
// End Class UAbilityTask_WaitVelocityChange

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitVelocityChange_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAbilityTask_WaitVelocityChange, UAbilityTask_WaitVelocityChange::StaticClass, TEXT("UAbilityTask_WaitVelocityChange"), &Z_Registration_Info_UClass_UAbilityTask_WaitVelocityChange, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAbilityTask_WaitVelocityChange), 1188680769U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitVelocityChange_h_2202231503(TEXT("/Script/GameplayAbilities"),
	Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitVelocityChange_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitVelocityChange_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
