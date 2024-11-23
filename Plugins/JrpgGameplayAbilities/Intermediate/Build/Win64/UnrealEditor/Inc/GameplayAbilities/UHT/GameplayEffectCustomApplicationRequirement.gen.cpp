// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayAbilities/Public/GameplayEffectCustomApplicationRequirement.h"
#include "GameplayAbilities/Public/GameplayEffect.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayEffectCustomApplicationRequirement() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffectCustomApplicationRequirement();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffectCustomApplicationRequirement_NoRegister();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectSpec();
UPackage* Z_Construct_UPackage__Script_GameplayAbilities();
// End Cross Module References

// Begin Class UGameplayEffectCustomApplicationRequirement Function CanApplyGameplayEffect
struct GameplayEffectCustomApplicationRequirement_eventCanApplyGameplayEffect_Parms
{
	const UGameplayEffect* GameplayEffect;
	FGameplayEffectSpec Spec;
	UAbilitySystemComponent* ASC;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	GameplayEffectCustomApplicationRequirement_eventCanApplyGameplayEffect_Parms()
		: ReturnValue(false)
	{
	}
};
static FName NAME_UGameplayEffectCustomApplicationRequirement_CanApplyGameplayEffect = FName(TEXT("CanApplyGameplayEffect"));
bool UGameplayEffectCustomApplicationRequirement::CanApplyGameplayEffect(const UGameplayEffect* GameplayEffect, FGameplayEffectSpec const& Spec, UAbilitySystemComponent* ASC) const
{
	GameplayEffectCustomApplicationRequirement_eventCanApplyGameplayEffect_Parms Parms;
	Parms.GameplayEffect=GameplayEffect;
	Parms.Spec=Spec;
	Parms.ASC=ASC;
	const_cast<UGameplayEffectCustomApplicationRequirement*>(this)->ProcessEvent(FindFunctionChecked(NAME_UGameplayEffectCustomApplicationRequirement_CanApplyGameplayEffect),&Parms);
	return !!Parms.ReturnValue;
}
struct Z_Construct_UFunction_UGameplayEffectCustomApplicationRequirement_CanApplyGameplayEffect_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Calculation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Return whether the gameplay effect should be applied or not */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffectCustomApplicationRequirement.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Return whether the gameplay effect should be applied or not" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameplayEffect_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Spec_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ASC_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GameplayEffect;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Spec;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ASC;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayEffectCustomApplicationRequirement_CanApplyGameplayEffect_Statics::NewProp_GameplayEffect = { "GameplayEffect", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayEffectCustomApplicationRequirement_eventCanApplyGameplayEffect_Parms, GameplayEffect), Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameplayEffect_MetaData), NewProp_GameplayEffect_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayEffectCustomApplicationRequirement_CanApplyGameplayEffect_Statics::NewProp_Spec = { "Spec", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayEffectCustomApplicationRequirement_eventCanApplyGameplayEffect_Parms, Spec), Z_Construct_UScriptStruct_FGameplayEffectSpec, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Spec_MetaData), NewProp_Spec_MetaData) }; // 272371351
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayEffectCustomApplicationRequirement_CanApplyGameplayEffect_Statics::NewProp_ASC = { "ASC", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayEffectCustomApplicationRequirement_eventCanApplyGameplayEffect_Parms, ASC), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ASC_MetaData), NewProp_ASC_MetaData) };
void Z_Construct_UFunction_UGameplayEffectCustomApplicationRequirement_CanApplyGameplayEffect_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GameplayEffectCustomApplicationRequirement_eventCanApplyGameplayEffect_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameplayEffectCustomApplicationRequirement_CanApplyGameplayEffect_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GameplayEffectCustomApplicationRequirement_eventCanApplyGameplayEffect_Parms), &Z_Construct_UFunction_UGameplayEffectCustomApplicationRequirement_CanApplyGameplayEffect_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayEffectCustomApplicationRequirement_CanApplyGameplayEffect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayEffectCustomApplicationRequirement_CanApplyGameplayEffect_Statics::NewProp_GameplayEffect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayEffectCustomApplicationRequirement_CanApplyGameplayEffect_Statics::NewProp_Spec,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayEffectCustomApplicationRequirement_CanApplyGameplayEffect_Statics::NewProp_ASC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayEffectCustomApplicationRequirement_CanApplyGameplayEffect_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayEffectCustomApplicationRequirement_CanApplyGameplayEffect_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayEffectCustomApplicationRequirement_CanApplyGameplayEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayEffectCustomApplicationRequirement, nullptr, "CanApplyGameplayEffect", nullptr, nullptr, Z_Construct_UFunction_UGameplayEffectCustomApplicationRequirement_CanApplyGameplayEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayEffectCustomApplicationRequirement_CanApplyGameplayEffect_Statics::PropPointers), sizeof(GameplayEffectCustomApplicationRequirement_eventCanApplyGameplayEffect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayEffectCustomApplicationRequirement_CanApplyGameplayEffect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameplayEffectCustomApplicationRequirement_CanApplyGameplayEffect_Statics::Function_MetaDataParams) };
static_assert(sizeof(GameplayEffectCustomApplicationRequirement_eventCanApplyGameplayEffect_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGameplayEffectCustomApplicationRequirement_CanApplyGameplayEffect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayEffectCustomApplicationRequirement_CanApplyGameplayEffect_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGameplayEffectCustomApplicationRequirement::execCanApplyGameplayEffect)
{
	P_GET_OBJECT(UGameplayEffect,Z_Param_GameplayEffect);
	P_GET_STRUCT_REF(FGameplayEffectSpec,Z_Param_Out_Spec);
	P_GET_OBJECT(UAbilitySystemComponent,Z_Param_ASC);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanApplyGameplayEffect_Implementation(Z_Param_GameplayEffect,Z_Param_Out_Spec,Z_Param_ASC);
	P_NATIVE_END;
}
// End Class UGameplayEffectCustomApplicationRequirement Function CanApplyGameplayEffect

// Begin Class UGameplayEffectCustomApplicationRequirement
void UGameplayEffectCustomApplicationRequirement::StaticRegisterNativesUGameplayEffectCustomApplicationRequirement()
{
	UClass* Class = UGameplayEffectCustomApplicationRequirement::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CanApplyGameplayEffect", &UGameplayEffectCustomApplicationRequirement::execCanApplyGameplayEffect },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameplayEffectCustomApplicationRequirement);
UClass* Z_Construct_UClass_UGameplayEffectCustomApplicationRequirement_NoRegister()
{
	return UGameplayEffectCustomApplicationRequirement::StaticClass();
}
struct Z_Construct_UClass_UGameplayEffectCustomApplicationRequirement_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Class used to perform custom gameplay effect modifier calculations, either via blueprint or native code */" },
#endif
		{ "IncludePath", "GameplayEffectCustomApplicationRequirement.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/GameplayEffectCustomApplicationRequirement.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Class used to perform custom gameplay effect modifier calculations, either via blueprint or native code" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGameplayEffectCustomApplicationRequirement_CanApplyGameplayEffect, "CanApplyGameplayEffect" }, // 147153156
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameplayEffectCustomApplicationRequirement>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGameplayEffectCustomApplicationRequirement_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayEffectCustomApplicationRequirement_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameplayEffectCustomApplicationRequirement_Statics::ClassParams = {
	&UGameplayEffectCustomApplicationRequirement::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayEffectCustomApplicationRequirement_Statics::Class_MetaDataParams), Z_Construct_UClass_UGameplayEffectCustomApplicationRequirement_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGameplayEffectCustomApplicationRequirement()
{
	if (!Z_Registration_Info_UClass_UGameplayEffectCustomApplicationRequirement.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameplayEffectCustomApplicationRequirement.OuterSingleton, Z_Construct_UClass_UGameplayEffectCustomApplicationRequirement_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGameplayEffectCustomApplicationRequirement.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UClass* StaticClass<UGameplayEffectCustomApplicationRequirement>()
{
	return UGameplayEffectCustomApplicationRequirement::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGameplayEffectCustomApplicationRequirement);
UGameplayEffectCustomApplicationRequirement::~UGameplayEffectCustomApplicationRequirement() {}
// End Class UGameplayEffectCustomApplicationRequirement

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectCustomApplicationRequirement_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGameplayEffectCustomApplicationRequirement, UGameplayEffectCustomApplicationRequirement::StaticClass, TEXT("UGameplayEffectCustomApplicationRequirement"), &Z_Registration_Info_UClass_UGameplayEffectCustomApplicationRequirement, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameplayEffectCustomApplicationRequirement), 3140063602U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectCustomApplicationRequirement_h_3642523708(TEXT("/Script/GameplayAbilities"),
	Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectCustomApplicationRequirement_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectCustomApplicationRequirement_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
