// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayAbilities/Public/Abilities/Tasks/AbilityTask_WaitGameplayTagQuery.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbilityTask_WaitGameplayTagQuery() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask_WaitGameplayTagQuery();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask_WaitGameplayTagQuery_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
GAMEPLAYABILITIES_API UEnum* Z_Construct_UEnum_GameplayAbilities_EWaitGameplayTagQueryTriggerCondition();
GAMEPLAYABILITIES_API UFunction* Z_Construct_UDelegateFunction_GameplayAbilities_WaitGameplayTagQueryDelegate__DelegateSignature();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagQuery();
UPackage* Z_Construct_UPackage__Script_GameplayAbilities();
// End Cross Module References

// Begin Delegate FWaitGameplayTagQueryDelegate
struct Z_Construct_UDelegateFunction_GameplayAbilities_WaitGameplayTagQueryDelegate__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_WaitGameplayTagQuery.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GameplayAbilities_WaitGameplayTagQueryDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GameplayAbilities, nullptr, "WaitGameplayTagQueryDelegate__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameplayAbilities_WaitGameplayTagQueryDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_GameplayAbilities_WaitGameplayTagQueryDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_GameplayAbilities_WaitGameplayTagQueryDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_GameplayAbilities_WaitGameplayTagQueryDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FWaitGameplayTagQueryDelegate_DelegateWrapper(const FMulticastScriptDelegate& WaitGameplayTagQueryDelegate)
{
	WaitGameplayTagQueryDelegate.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FWaitGameplayTagQueryDelegate

// Begin Enum EWaitGameplayTagQueryTriggerCondition
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWaitGameplayTagQueryTriggerCondition;
static UEnum* EWaitGameplayTagQueryTriggerCondition_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EWaitGameplayTagQueryTriggerCondition.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EWaitGameplayTagQueryTriggerCondition.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GameplayAbilities_EWaitGameplayTagQueryTriggerCondition, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("EWaitGameplayTagQueryTriggerCondition"));
	}
	return Z_Registration_Info_UEnum_EWaitGameplayTagQueryTriggerCondition.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UEnum* StaticEnum<EWaitGameplayTagQueryTriggerCondition>()
{
	return EWaitGameplayTagQueryTriggerCondition_StaticEnum();
}
struct Z_Construct_UEnum_GameplayAbilities_EWaitGameplayTagQueryTriggerCondition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** This enum defines the condition in which the wait gameplay tag query node will trigger. */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_WaitGameplayTagQuery.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This enum defines the condition in which the wait gameplay tag query node will trigger." },
#endif
		{ "WhenFalse.Name", "EWaitGameplayTagQueryTriggerCondition::WhenFalse" },
		{ "WhenTrue.Name", "EWaitGameplayTagQueryTriggerCondition::WhenTrue" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EWaitGameplayTagQueryTriggerCondition::WhenTrue", (int64)EWaitGameplayTagQueryTriggerCondition::WhenTrue },
		{ "EWaitGameplayTagQueryTriggerCondition::WhenFalse", (int64)EWaitGameplayTagQueryTriggerCondition::WhenFalse },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GameplayAbilities_EWaitGameplayTagQueryTriggerCondition_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_GameplayAbilities,
	nullptr,
	"EWaitGameplayTagQueryTriggerCondition",
	"EWaitGameplayTagQueryTriggerCondition",
	Z_Construct_UEnum_GameplayAbilities_EWaitGameplayTagQueryTriggerCondition_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayAbilities_EWaitGameplayTagQueryTriggerCondition_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayAbilities_EWaitGameplayTagQueryTriggerCondition_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GameplayAbilities_EWaitGameplayTagQueryTriggerCondition_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_GameplayAbilities_EWaitGameplayTagQueryTriggerCondition()
{
	if (!Z_Registration_Info_UEnum_EWaitGameplayTagQueryTriggerCondition.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWaitGameplayTagQueryTriggerCondition.InnerSingleton, Z_Construct_UEnum_GameplayAbilities_EWaitGameplayTagQueryTriggerCondition_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EWaitGameplayTagQueryTriggerCondition.InnerSingleton;
}
// End Enum EWaitGameplayTagQueryTriggerCondition

// Begin Class UAbilityTask_WaitGameplayTagQuery Function UpdateTargetTags
struct Z_Construct_UFunction_UAbilityTask_WaitGameplayTagQuery_UpdateTargetTags_Statics
{
	struct AbilityTask_WaitGameplayTagQuery_eventUpdateTargetTags_Parms
	{
		FGameplayTag Tag;
		int32 NewCount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** This will update the tags in the TargetTags container to reflect that tags that are on the target ASC. */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_WaitGameplayTagQuery.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This will update the tags in the TargetTags container to reflect that tags that are on the target ASC." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbilityTask_WaitGameplayTagQuery_UpdateTargetTags_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_WaitGameplayTagQuery_eventUpdateTargetTags_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tag_MetaData), NewProp_Tag_MetaData) }; // 1298103297
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAbilityTask_WaitGameplayTagQuery_UpdateTargetTags_Statics::NewProp_NewCount = { "NewCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_WaitGameplayTagQuery_eventUpdateTargetTags_Parms, NewCount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityTask_WaitGameplayTagQuery_UpdateTargetTags_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitGameplayTagQuery_UpdateTargetTags_Statics::NewProp_Tag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitGameplayTagQuery_UpdateTargetTags_Statics::NewProp_NewCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_WaitGameplayTagQuery_UpdateTargetTags_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityTask_WaitGameplayTagQuery_UpdateTargetTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityTask_WaitGameplayTagQuery, nullptr, "UpdateTargetTags", nullptr, nullptr, Z_Construct_UFunction_UAbilityTask_WaitGameplayTagQuery_UpdateTargetTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_WaitGameplayTagQuery_UpdateTargetTags_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAbilityTask_WaitGameplayTagQuery_UpdateTargetTags_Statics::AbilityTask_WaitGameplayTagQuery_eventUpdateTargetTags_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_WaitGameplayTagQuery_UpdateTargetTags_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilityTask_WaitGameplayTagQuery_UpdateTargetTags_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAbilityTask_WaitGameplayTagQuery_UpdateTargetTags_Statics::AbilityTask_WaitGameplayTagQuery_eventUpdateTargetTags_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbilityTask_WaitGameplayTagQuery_UpdateTargetTags()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityTask_WaitGameplayTagQuery_UpdateTargetTags_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilityTask_WaitGameplayTagQuery::execUpdateTargetTags)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_Tag);
	P_GET_PROPERTY(FIntProperty,Z_Param_NewCount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateTargetTags(Z_Param_Tag,Z_Param_NewCount);
	P_NATIVE_END;
}
// End Class UAbilityTask_WaitGameplayTagQuery Function UpdateTargetTags

// Begin Class UAbilityTask_WaitGameplayTagQuery Function WaitGameplayTagQuery
struct Z_Construct_UFunction_UAbilityTask_WaitGameplayTagQuery_WaitGameplayTagQuery_Statics
{
	struct AbilityTask_WaitGameplayTagQuery_eventWaitGameplayTagQuery_Parms
	{
		UGameplayAbility* OwningAbility;
		FGameplayTagQuery TagQuery;
		const AActor* InOptionalExternalTarget;
		EWaitGameplayTagQueryTriggerCondition TriggerCondition;
		bool bOnlyTriggerOnce;
		UAbilityTask_WaitGameplayTagQuery* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "TRUE" },
		{ "Category", "Ability|Tasks" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * \x09Wait until the given gameplay tag query has become true or false, based on TriggerCondition. \n\x09 *  By default this will look at the owner of this ability. OptionalExternalTarget can be set to\n\x09 *  make this look at another actor's tags for changes.  If the the tag query already satisfies \n\x09 *  the TriggerCondition when this task is started, it will immediately broadcast the Triggered \n\x09 *  event. It will keep listening as long as bOnlyTriggerOnce = false.\n\x09 */" },
#endif
		{ "CPP_Default_bOnlyTriggerOnce", "false" },
		{ "CPP_Default_InOptionalExternalTarget", "None" },
		{ "CPP_Default_TriggerCondition", "WhenTrue" },
		{ "DefaultToSelf", "OwningAbility" },
		{ "HidePin", "OwningAbility" },
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_WaitGameplayTagQuery.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Wait until the given gameplay tag query has become true or false, based on TriggerCondition.\nBy default this will look at the owner of this ability. OptionalExternalTarget can be set to\nmake this look at another actor's tags for changes.  If the the tag query already satisfies\nthe TriggerCondition when this task is started, it will immediately broadcast the Triggered\nevent. It will keep listening as long as bOnlyTriggerOnce = false." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TagQuery_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InOptionalExternalTarget_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TriggerCondition_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOnlyTriggerOnce_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningAbility;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TagQuery;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InOptionalExternalTarget;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TriggerCondition_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TriggerCondition;
	static void NewProp_bOnlyTriggerOnce_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOnlyTriggerOnce;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_WaitGameplayTagQuery_WaitGameplayTagQuery_Statics::NewProp_OwningAbility = { "OwningAbility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_WaitGameplayTagQuery_eventWaitGameplayTagQuery_Parms, OwningAbility), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbilityTask_WaitGameplayTagQuery_WaitGameplayTagQuery_Statics::NewProp_TagQuery = { "TagQuery", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_WaitGameplayTagQuery_eventWaitGameplayTagQuery_Parms, TagQuery), Z_Construct_UScriptStruct_FGameplayTagQuery, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TagQuery_MetaData), NewProp_TagQuery_MetaData) }; // 572225232
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_WaitGameplayTagQuery_WaitGameplayTagQuery_Statics::NewProp_InOptionalExternalTarget = { "InOptionalExternalTarget", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_WaitGameplayTagQuery_eventWaitGameplayTagQuery_Parms, InOptionalExternalTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InOptionalExternalTarget_MetaData), NewProp_InOptionalExternalTarget_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAbilityTask_WaitGameplayTagQuery_WaitGameplayTagQuery_Statics::NewProp_TriggerCondition_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAbilityTask_WaitGameplayTagQuery_WaitGameplayTagQuery_Statics::NewProp_TriggerCondition = { "TriggerCondition", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_WaitGameplayTagQuery_eventWaitGameplayTagQuery_Parms, TriggerCondition), Z_Construct_UEnum_GameplayAbilities_EWaitGameplayTagQueryTriggerCondition, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TriggerCondition_MetaData), NewProp_TriggerCondition_MetaData) }; // 885390323
void Z_Construct_UFunction_UAbilityTask_WaitGameplayTagQuery_WaitGameplayTagQuery_Statics::NewProp_bOnlyTriggerOnce_SetBit(void* Obj)
{
	((AbilityTask_WaitGameplayTagQuery_eventWaitGameplayTagQuery_Parms*)Obj)->bOnlyTriggerOnce = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAbilityTask_WaitGameplayTagQuery_WaitGameplayTagQuery_Statics::NewProp_bOnlyTriggerOnce = { "bOnlyTriggerOnce", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AbilityTask_WaitGameplayTagQuery_eventWaitGameplayTagQuery_Parms), &Z_Construct_UFunction_UAbilityTask_WaitGameplayTagQuery_WaitGameplayTagQuery_Statics::NewProp_bOnlyTriggerOnce_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOnlyTriggerOnce_MetaData), NewProp_bOnlyTriggerOnce_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_WaitGameplayTagQuery_WaitGameplayTagQuery_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_WaitGameplayTagQuery_eventWaitGameplayTagQuery_Parms, ReturnValue), Z_Construct_UClass_UAbilityTask_WaitGameplayTagQuery_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityTask_WaitGameplayTagQuery_WaitGameplayTagQuery_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitGameplayTagQuery_WaitGameplayTagQuery_Statics::NewProp_OwningAbility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitGameplayTagQuery_WaitGameplayTagQuery_Statics::NewProp_TagQuery,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitGameplayTagQuery_WaitGameplayTagQuery_Statics::NewProp_InOptionalExternalTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitGameplayTagQuery_WaitGameplayTagQuery_Statics::NewProp_TriggerCondition_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitGameplayTagQuery_WaitGameplayTagQuery_Statics::NewProp_TriggerCondition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitGameplayTagQuery_WaitGameplayTagQuery_Statics::NewProp_bOnlyTriggerOnce,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitGameplayTagQuery_WaitGameplayTagQuery_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_WaitGameplayTagQuery_WaitGameplayTagQuery_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityTask_WaitGameplayTagQuery_WaitGameplayTagQuery_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityTask_WaitGameplayTagQuery, nullptr, "WaitGameplayTagQuery", nullptr, nullptr, Z_Construct_UFunction_UAbilityTask_WaitGameplayTagQuery_WaitGameplayTagQuery_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_WaitGameplayTagQuery_WaitGameplayTagQuery_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAbilityTask_WaitGameplayTagQuery_WaitGameplayTagQuery_Statics::AbilityTask_WaitGameplayTagQuery_eventWaitGameplayTagQuery_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_WaitGameplayTagQuery_WaitGameplayTagQuery_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilityTask_WaitGameplayTagQuery_WaitGameplayTagQuery_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAbilityTask_WaitGameplayTagQuery_WaitGameplayTagQuery_Statics::AbilityTask_WaitGameplayTagQuery_eventWaitGameplayTagQuery_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbilityTask_WaitGameplayTagQuery_WaitGameplayTagQuery()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityTask_WaitGameplayTagQuery_WaitGameplayTagQuery_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilityTask_WaitGameplayTagQuery::execWaitGameplayTagQuery)
{
	P_GET_OBJECT(UGameplayAbility,Z_Param_OwningAbility);
	P_GET_STRUCT(FGameplayTagQuery,Z_Param_TagQuery);
	P_GET_OBJECT(AActor,Z_Param_InOptionalExternalTarget);
	P_GET_ENUM(EWaitGameplayTagQueryTriggerCondition,Z_Param_TriggerCondition);
	P_GET_UBOOL(Z_Param_bOnlyTriggerOnce);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAbilityTask_WaitGameplayTagQuery**)Z_Param__Result=UAbilityTask_WaitGameplayTagQuery::WaitGameplayTagQuery(Z_Param_OwningAbility,Z_Param_TagQuery,Z_Param_InOptionalExternalTarget,EWaitGameplayTagQueryTriggerCondition(Z_Param_TriggerCondition),Z_Param_bOnlyTriggerOnce);
	P_NATIVE_END;
}
// End Class UAbilityTask_WaitGameplayTagQuery Function WaitGameplayTagQuery

// Begin Class UAbilityTask_WaitGameplayTagQuery
void UAbilityTask_WaitGameplayTagQuery::StaticRegisterNativesUAbilityTask_WaitGameplayTagQuery()
{
	UClass* Class = UAbilityTask_WaitGameplayTagQuery::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "UpdateTargetTags", &UAbilityTask_WaitGameplayTagQuery::execUpdateTargetTags },
		{ "WaitGameplayTagQuery", &UAbilityTask_WaitGameplayTagQuery::execWaitGameplayTagQuery },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAbilityTask_WaitGameplayTagQuery);
UClass* Z_Construct_UClass_UAbilityTask_WaitGameplayTagQuery_NoRegister()
{
	return UAbilityTask_WaitGameplayTagQuery::StaticClass();
}
struct Z_Construct_UClass_UAbilityTask_WaitGameplayTagQuery_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** This class defines a node to wait on a gameplay tag query. */" },
#endif
		{ "IncludePath", "Abilities/Tasks/AbilityTask_WaitGameplayTagQuery.h" },
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_WaitGameplayTagQuery.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This class defines a node to wait on a gameplay tag query." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Triggered_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** This delegate will be triggered when the trigger condition has been met. */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_WaitGameplayTagQuery.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This delegate will be triggered when the trigger condition has been met." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OptionalExternalTarget_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** This is the optional external target to use when getting the ASC to get tags from. */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_WaitGameplayTagQuery.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is the optional external target to use when getting the ASC to get tags from." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_Triggered;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OptionalExternalTarget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAbilityTask_WaitGameplayTagQuery_UpdateTargetTags, "UpdateTargetTags" }, // 3560291556
		{ &Z_Construct_UFunction_UAbilityTask_WaitGameplayTagQuery_WaitGameplayTagQuery, "WaitGameplayTagQuery" }, // 3535687401
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAbilityTask_WaitGameplayTagQuery>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAbilityTask_WaitGameplayTagQuery_Statics::NewProp_Triggered = { "Triggered", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityTask_WaitGameplayTagQuery, Triggered), Z_Construct_UDelegateFunction_GameplayAbilities_WaitGameplayTagQueryDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Triggered_MetaData), NewProp_Triggered_MetaData) }; // 1189909453
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAbilityTask_WaitGameplayTagQuery_Statics::NewProp_OptionalExternalTarget = { "OptionalExternalTarget", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityTask_WaitGameplayTagQuery, OptionalExternalTarget), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OptionalExternalTarget_MetaData), NewProp_OptionalExternalTarget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAbilityTask_WaitGameplayTagQuery_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_WaitGameplayTagQuery_Statics::NewProp_Triggered,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_WaitGameplayTagQuery_Statics::NewProp_OptionalExternalTarget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_WaitGameplayTagQuery_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAbilityTask_WaitGameplayTagQuery_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAbilityTask,
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_WaitGameplayTagQuery_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAbilityTask_WaitGameplayTagQuery_Statics::ClassParams = {
	&UAbilityTask_WaitGameplayTagQuery::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAbilityTask_WaitGameplayTagQuery_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_WaitGameplayTagQuery_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_WaitGameplayTagQuery_Statics::Class_MetaDataParams), Z_Construct_UClass_UAbilityTask_WaitGameplayTagQuery_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAbilityTask_WaitGameplayTagQuery()
{
	if (!Z_Registration_Info_UClass_UAbilityTask_WaitGameplayTagQuery.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAbilityTask_WaitGameplayTagQuery.OuterSingleton, Z_Construct_UClass_UAbilityTask_WaitGameplayTagQuery_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAbilityTask_WaitGameplayTagQuery.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UClass* StaticClass<UAbilityTask_WaitGameplayTagQuery>()
{
	return UAbilityTask_WaitGameplayTagQuery::StaticClass();
}
UAbilityTask_WaitGameplayTagQuery::UAbilityTask_WaitGameplayTagQuery(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAbilityTask_WaitGameplayTagQuery);
UAbilityTask_WaitGameplayTagQuery::~UAbilityTask_WaitGameplayTagQuery() {}
// End Class UAbilityTask_WaitGameplayTagQuery

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayTagQuery_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EWaitGameplayTagQueryTriggerCondition_StaticEnum, TEXT("EWaitGameplayTagQueryTriggerCondition"), &Z_Registration_Info_UEnum_EWaitGameplayTagQueryTriggerCondition, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 885390323U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAbilityTask_WaitGameplayTagQuery, UAbilityTask_WaitGameplayTagQuery::StaticClass, TEXT("UAbilityTask_WaitGameplayTagQuery"), &Z_Registration_Info_UClass_UAbilityTask_WaitGameplayTagQuery, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAbilityTask_WaitGameplayTagQuery), 1053668932U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayTagQuery_h_4172867940(TEXT("/Script/GameplayAbilities"),
	Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayTagQuery_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayTagQuery_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayTagQuery_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayTagQuery_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
