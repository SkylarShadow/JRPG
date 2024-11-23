// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayAbilities/Public/Abilities/Tasks/AbilityTask_WaitOverlap.h"
#include "GameplayAbilities/Public/Abilities/GameplayAbilityTargetTypes.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbilityTask_WaitOverlap() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask_WaitOverlap();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask_WaitOverlap_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
GAMEPLAYABILITIES_API UFunction* Z_Construct_UDelegateFunction_GameplayAbilities_WaitOverlapDelegate__DelegateSignature();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilityTargetDataHandle();
UPackage* Z_Construct_UPackage__Script_GameplayAbilities();
// End Cross Module References

// Begin Delegate FWaitOverlapDelegate
struct Z_Construct_UDelegateFunction_GameplayAbilities_WaitOverlapDelegate__DelegateSignature_Statics
{
	struct _Script_GameplayAbilities_eventWaitOverlapDelegate_Parms
	{
		FGameplayAbilityTargetDataHandle TargetData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_WaitOverlap.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_GameplayAbilities_WaitOverlapDelegate__DelegateSignature_Statics::NewProp_TargetData = { "TargetData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_GameplayAbilities_eventWaitOverlapDelegate_Parms, TargetData), Z_Construct_UScriptStruct_FGameplayAbilityTargetDataHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetData_MetaData), NewProp_TargetData_MetaData) }; // 802803486
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GameplayAbilities_WaitOverlapDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GameplayAbilities_WaitOverlapDelegate__DelegateSignature_Statics::NewProp_TargetData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameplayAbilities_WaitOverlapDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GameplayAbilities_WaitOverlapDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GameplayAbilities, nullptr, "WaitOverlapDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_GameplayAbilities_WaitOverlapDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameplayAbilities_WaitOverlapDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_GameplayAbilities_WaitOverlapDelegate__DelegateSignature_Statics::_Script_GameplayAbilities_eventWaitOverlapDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameplayAbilities_WaitOverlapDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_GameplayAbilities_WaitOverlapDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_GameplayAbilities_WaitOverlapDelegate__DelegateSignature_Statics::_Script_GameplayAbilities_eventWaitOverlapDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_GameplayAbilities_WaitOverlapDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_GameplayAbilities_WaitOverlapDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FWaitOverlapDelegate_DelegateWrapper(const FMulticastScriptDelegate& WaitOverlapDelegate, FGameplayAbilityTargetDataHandle const& TargetData)
{
	struct _Script_GameplayAbilities_eventWaitOverlapDelegate_Parms
	{
		FGameplayAbilityTargetDataHandle TargetData;
	};
	_Script_GameplayAbilities_eventWaitOverlapDelegate_Parms Parms;
	Parms.TargetData=TargetData;
	WaitOverlapDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FWaitOverlapDelegate

// Begin Class UAbilityTask_WaitOverlap Function OnHitCallback
struct Z_Construct_UFunction_UAbilityTask_WaitOverlap_OnHitCallback_Statics
{
	struct AbilityTask_WaitOverlap_eventOnHitCallback_Parms
	{
		UPrimitiveComponent* HitComp;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		FVector NormalImpulse;
		FHitResult Hit;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_WaitOverlap.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HitComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NormalImpulse;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Hit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_WaitOverlap_OnHitCallback_Statics::NewProp_HitComp = { "HitComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_WaitOverlap_eventOnHitCallback_Parms, HitComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitComp_MetaData), NewProp_HitComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_WaitOverlap_OnHitCallback_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_WaitOverlap_eventOnHitCallback_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_WaitOverlap_OnHitCallback_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_WaitOverlap_eventOnHitCallback_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbilityTask_WaitOverlap_OnHitCallback_Statics::NewProp_NormalImpulse = { "NormalImpulse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_WaitOverlap_eventOnHitCallback_Parms, NormalImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbilityTask_WaitOverlap_OnHitCallback_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_WaitOverlap_eventOnHitCallback_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Hit_MetaData), NewProp_Hit_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityTask_WaitOverlap_OnHitCallback_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitOverlap_OnHitCallback_Statics::NewProp_HitComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitOverlap_OnHitCallback_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitOverlap_OnHitCallback_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitOverlap_OnHitCallback_Statics::NewProp_NormalImpulse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitOverlap_OnHitCallback_Statics::NewProp_Hit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_WaitOverlap_OnHitCallback_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityTask_WaitOverlap_OnHitCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityTask_WaitOverlap, nullptr, "OnHitCallback", nullptr, nullptr, Z_Construct_UFunction_UAbilityTask_WaitOverlap_OnHitCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_WaitOverlap_OnHitCallback_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAbilityTask_WaitOverlap_OnHitCallback_Statics::AbilityTask_WaitOverlap_eventOnHitCallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_WaitOverlap_OnHitCallback_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilityTask_WaitOverlap_OnHitCallback_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAbilityTask_WaitOverlap_OnHitCallback_Statics::AbilityTask_WaitOverlap_eventOnHitCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbilityTask_WaitOverlap_OnHitCallback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityTask_WaitOverlap_OnHitCallback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilityTask_WaitOverlap::execOnHitCallback)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_STRUCT(FVector,Z_Param_NormalImpulse);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnHitCallback(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit);
	P_NATIVE_END;
}
// End Class UAbilityTask_WaitOverlap Function OnHitCallback

// Begin Class UAbilityTask_WaitOverlap Function WaitForOverlap
struct Z_Construct_UFunction_UAbilityTask_WaitOverlap_WaitForOverlap_Statics
{
	struct AbilityTask_WaitOverlap_eventWaitForOverlap_Parms
	{
		UGameplayAbility* OwningAbility;
		UAbilityTask_WaitOverlap* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "TRUE" },
		{ "Category", "Ability|Tasks" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Wait until an overlap occurs. This will need to be better fleshed out so we can specify game specific collision requirements */" },
#endif
		{ "DefaultToSelf", "OwningAbility" },
		{ "HidePin", "OwningAbility" },
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_WaitOverlap.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Wait until an overlap occurs. This will need to be better fleshed out so we can specify game specific collision requirements" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningAbility;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_WaitOverlap_WaitForOverlap_Statics::NewProp_OwningAbility = { "OwningAbility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_WaitOverlap_eventWaitForOverlap_Parms, OwningAbility), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_WaitOverlap_WaitForOverlap_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_WaitOverlap_eventWaitForOverlap_Parms, ReturnValue), Z_Construct_UClass_UAbilityTask_WaitOverlap_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityTask_WaitOverlap_WaitForOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitOverlap_WaitForOverlap_Statics::NewProp_OwningAbility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitOverlap_WaitForOverlap_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_WaitOverlap_WaitForOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityTask_WaitOverlap_WaitForOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityTask_WaitOverlap, nullptr, "WaitForOverlap", nullptr, nullptr, Z_Construct_UFunction_UAbilityTask_WaitOverlap_WaitForOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_WaitOverlap_WaitForOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAbilityTask_WaitOverlap_WaitForOverlap_Statics::AbilityTask_WaitOverlap_eventWaitForOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_WaitOverlap_WaitForOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilityTask_WaitOverlap_WaitForOverlap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAbilityTask_WaitOverlap_WaitForOverlap_Statics::AbilityTask_WaitOverlap_eventWaitForOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbilityTask_WaitOverlap_WaitForOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityTask_WaitOverlap_WaitForOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilityTask_WaitOverlap::execWaitForOverlap)
{
	P_GET_OBJECT(UGameplayAbility,Z_Param_OwningAbility);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAbilityTask_WaitOverlap**)Z_Param__Result=UAbilityTask_WaitOverlap::WaitForOverlap(Z_Param_OwningAbility);
	P_NATIVE_END;
}
// End Class UAbilityTask_WaitOverlap Function WaitForOverlap

// Begin Class UAbilityTask_WaitOverlap
void UAbilityTask_WaitOverlap::StaticRegisterNativesUAbilityTask_WaitOverlap()
{
	UClass* Class = UAbilityTask_WaitOverlap::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnHitCallback", &UAbilityTask_WaitOverlap::execOnHitCallback },
		{ "WaitForOverlap", &UAbilityTask_WaitOverlap::execWaitForOverlap },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAbilityTask_WaitOverlap);
UClass* Z_Construct_UClass_UAbilityTask_WaitOverlap_NoRegister()
{
	return UAbilityTask_WaitOverlap::StaticClass();
}
struct Z_Construct_UClass_UAbilityTask_WaitOverlap_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\x09""Fixme: this is still incomplete and probablyh not what most games want for melee systems.\n *\x09\x09-Only actually activates on Blocking hits\n *\x09\x09-Uses first PrimitiveComponent instead of being able to specify arbitrary component.\n */" },
#endif
		{ "IncludePath", "Abilities/Tasks/AbilityTask_WaitOverlap.h" },
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_WaitOverlap.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fixme: this is still incomplete and probablyh not what most games want for melee systems.\n        -Only actually activates on Blocking hits\n        -Uses first PrimitiveComponent instead of being able to specify arbitrary component." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnOverlap_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_WaitOverlap.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnOverlap;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAbilityTask_WaitOverlap_OnHitCallback, "OnHitCallback" }, // 2304520084
		{ &Z_Construct_UFunction_UAbilityTask_WaitOverlap_WaitForOverlap, "WaitForOverlap" }, // 814201759
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAbilityTask_WaitOverlap>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAbilityTask_WaitOverlap_Statics::NewProp_OnOverlap = { "OnOverlap", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityTask_WaitOverlap, OnOverlap), Z_Construct_UDelegateFunction_GameplayAbilities_WaitOverlapDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnOverlap_MetaData), NewProp_OnOverlap_MetaData) }; // 3434678323
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAbilityTask_WaitOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_WaitOverlap_Statics::NewProp_OnOverlap,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_WaitOverlap_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAbilityTask_WaitOverlap_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAbilityTask,
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_WaitOverlap_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAbilityTask_WaitOverlap_Statics::ClassParams = {
	&UAbilityTask_WaitOverlap::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAbilityTask_WaitOverlap_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_WaitOverlap_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_WaitOverlap_Statics::Class_MetaDataParams), Z_Construct_UClass_UAbilityTask_WaitOverlap_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAbilityTask_WaitOverlap()
{
	if (!Z_Registration_Info_UClass_UAbilityTask_WaitOverlap.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAbilityTask_WaitOverlap.OuterSingleton, Z_Construct_UClass_UAbilityTask_WaitOverlap_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAbilityTask_WaitOverlap.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UClass* StaticClass<UAbilityTask_WaitOverlap>()
{
	return UAbilityTask_WaitOverlap::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAbilityTask_WaitOverlap);
UAbilityTask_WaitOverlap::~UAbilityTask_WaitOverlap() {}
// End Class UAbilityTask_WaitOverlap

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitOverlap_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAbilityTask_WaitOverlap, UAbilityTask_WaitOverlap::StaticClass, TEXT("UAbilityTask_WaitOverlap"), &Z_Registration_Info_UClass_UAbilityTask_WaitOverlap, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAbilityTask_WaitOverlap), 3713297996U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitOverlap_h_3834812359(TEXT("/Script/GameplayAbilities"),
	Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitOverlap_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitOverlap_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
