// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayAbilities/Public/GameplayTagResponseTable.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayTagResponseTable() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayTagReponseTable();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayTagReponseTable_NoRegister();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagReponsePair();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagResponseTableEntry();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
UPackage* Z_Construct_UPackage__Script_GameplayAbilities();
// End Cross Module References

// Begin ScriptStruct FGameplayTagReponsePair
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayTagReponsePair;
class UScriptStruct* FGameplayTagReponsePair::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayTagReponsePair.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayTagReponsePair.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayTagReponsePair, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("GameplayTagReponsePair"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayTagReponsePair.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FGameplayTagReponsePair>()
{
	return FGameplayTagReponsePair::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGameplayTagReponsePair_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameplayTagResponseTable.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[] = {
		{ "Category", "Response" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Tag that triggers this response */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayTagResponseTable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tag that triggers this response" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResponseGameplayEffect_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Deprecated. Replaced with ResponseGameplayEffects */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayTagResponseTable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Deprecated. Replaced with ResponseGameplayEffects" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResponseGameplayEffects_MetaData[] = {
		{ "Category", "Response" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The GameplayEffects to apply in reponse to the tag */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayTagResponseTable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The GameplayEffects to apply in reponse to the tag" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoftCountCap_MetaData[] = {
		{ "Category", "Response" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The max \"count\" this response can achieve. This will not prevent counts from being applied, but will be used when calculating the net count of a tag. 0=no cap. */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayTagResponseTable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The max \"count\" this response can achieve. This will not prevent counts from being applied, but will be used when calculating the net count of a tag. 0=no cap." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ResponseGameplayEffect;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ResponseGameplayEffects_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ResponseGameplayEffects;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SoftCountCap;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayTagReponsePair>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayTagReponsePair_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayTagReponsePair, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tag_MetaData), NewProp_Tag_MetaData) }; // 1298103297
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FGameplayTagReponsePair_Statics::NewProp_ResponseGameplayEffect = { "ResponseGameplayEffect", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayTagReponsePair, ResponseGameplayEffect), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResponseGameplayEffect_MetaData), NewProp_ResponseGameplayEffect_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FGameplayTagReponsePair_Statics::NewProp_ResponseGameplayEffects_Inner = { "ResponseGameplayEffects", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGameplayTagReponsePair_Statics::NewProp_ResponseGameplayEffects = { "ResponseGameplayEffects", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayTagReponsePair, ResponseGameplayEffects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResponseGameplayEffects_MetaData), NewProp_ResponseGameplayEffects_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameplayTagReponsePair_Statics::NewProp_SoftCountCap = { "SoftCountCap", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayTagReponsePair, SoftCountCap), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoftCountCap_MetaData), NewProp_SoftCountCap_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayTagReponsePair_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayTagReponsePair_Statics::NewProp_Tag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayTagReponsePair_Statics::NewProp_ResponseGameplayEffect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayTagReponsePair_Statics::NewProp_ResponseGameplayEffects_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayTagReponsePair_Statics::NewProp_ResponseGameplayEffects,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayTagReponsePair_Statics::NewProp_SoftCountCap,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagReponsePair_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayTagReponsePair_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
	nullptr,
	&NewStructOps,
	"GameplayTagReponsePair",
	Z_Construct_UScriptStruct_FGameplayTagReponsePair_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagReponsePair_Statics::PropPointers),
	sizeof(FGameplayTagReponsePair),
	alignof(FGameplayTagReponsePair),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagReponsePair_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGameplayTagReponsePair_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagReponsePair()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayTagReponsePair.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayTagReponsePair.InnerSingleton, Z_Construct_UScriptStruct_FGameplayTagReponsePair_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GameplayTagReponsePair.InnerSingleton;
}
// End ScriptStruct FGameplayTagReponsePair

// Begin ScriptStruct FGameplayTagResponseTableEntry
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayTagResponseTableEntry;
class UScriptStruct* FGameplayTagResponseTableEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayTagResponseTableEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayTagResponseTableEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayTagResponseTableEntry, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("GameplayTagResponseTableEntry"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayTagResponseTableEntry.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FGameplayTagResponseTableEntry>()
{
	return FGameplayTagResponseTableEntry::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGameplayTagResponseTableEntry_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameplayTagResponseTable.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Positive_MetaData[] = {
		{ "Category", "Response" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Tags that count as \"positive\" toward to final response count. If the overall count is positive, this ResponseGameplayEffect is applied. */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayTagResponseTable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tags that count as \"positive\" toward to final response count. If the overall count is positive, this ResponseGameplayEffect is applied." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Negative_MetaData[] = {
		{ "Category", "Response" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Tags that count as \"negative\" toward to final response count. If the overall count is negative, this ResponseGameplayEffect is applied. */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayTagResponseTable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tags that count as \"negative\" toward to final response count. If the overall count is negative, this ResponseGameplayEffect is applied." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Positive;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Negative;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayTagResponseTableEntry>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayTagResponseTableEntry_Statics::NewProp_Positive = { "Positive", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayTagResponseTableEntry, Positive), Z_Construct_UScriptStruct_FGameplayTagReponsePair, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Positive_MetaData), NewProp_Positive_MetaData) }; // 4234977773
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayTagResponseTableEntry_Statics::NewProp_Negative = { "Negative", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayTagResponseTableEntry, Negative), Z_Construct_UScriptStruct_FGameplayTagReponsePair, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Negative_MetaData), NewProp_Negative_MetaData) }; // 4234977773
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayTagResponseTableEntry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayTagResponseTableEntry_Statics::NewProp_Positive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayTagResponseTableEntry_Statics::NewProp_Negative,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagResponseTableEntry_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayTagResponseTableEntry_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
	nullptr,
	&NewStructOps,
	"GameplayTagResponseTableEntry",
	Z_Construct_UScriptStruct_FGameplayTagResponseTableEntry_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagResponseTableEntry_Statics::PropPointers),
	sizeof(FGameplayTagResponseTableEntry),
	alignof(FGameplayTagResponseTableEntry),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagResponseTableEntry_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGameplayTagResponseTableEntry_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagResponseTableEntry()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayTagResponseTableEntry.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayTagResponseTableEntry.InnerSingleton, Z_Construct_UScriptStruct_FGameplayTagResponseTableEntry_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GameplayTagResponseTableEntry.InnerSingleton;
}
// End ScriptStruct FGameplayTagResponseTableEntry

// Begin Class UGameplayTagReponseTable Function TagResponseEvent
struct Z_Construct_UFunction_UGameplayTagReponseTable_TagResponseEvent_Statics
{
	struct GameplayTagReponseTable_eventTagResponseEvent_Parms
	{
		FGameplayTag Tag;
		int32 NewCount;
		UAbilitySystemComponent* ASC;
		int32 idx;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameplayTagResponseTable.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ASC_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewCount;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ASC;
	static const UECodeGen_Private::FIntPropertyParams NewProp_idx;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayTagReponseTable_TagResponseEvent_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayTagReponseTable_eventTagResponseEvent_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tag_MetaData), NewProp_Tag_MetaData) }; // 1298103297
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGameplayTagReponseTable_TagResponseEvent_Statics::NewProp_NewCount = { "NewCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayTagReponseTable_eventTagResponseEvent_Parms, NewCount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayTagReponseTable_TagResponseEvent_Statics::NewProp_ASC = { "ASC", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayTagReponseTable_eventTagResponseEvent_Parms, ASC), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ASC_MetaData), NewProp_ASC_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGameplayTagReponseTable_TagResponseEvent_Statics::NewProp_idx = { "idx", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayTagReponseTable_eventTagResponseEvent_Parms, idx), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayTagReponseTable_TagResponseEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayTagReponseTable_TagResponseEvent_Statics::NewProp_Tag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayTagReponseTable_TagResponseEvent_Statics::NewProp_NewCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayTagReponseTable_TagResponseEvent_Statics::NewProp_ASC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayTagReponseTable_TagResponseEvent_Statics::NewProp_idx,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayTagReponseTable_TagResponseEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayTagReponseTable_TagResponseEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayTagReponseTable, nullptr, "TagResponseEvent", nullptr, nullptr, Z_Construct_UFunction_UGameplayTagReponseTable_TagResponseEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayTagReponseTable_TagResponseEvent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGameplayTagReponseTable_TagResponseEvent_Statics::GameplayTagReponseTable_eventTagResponseEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayTagReponseTable_TagResponseEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameplayTagReponseTable_TagResponseEvent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGameplayTagReponseTable_TagResponseEvent_Statics::GameplayTagReponseTable_eventTagResponseEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGameplayTagReponseTable_TagResponseEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayTagReponseTable_TagResponseEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGameplayTagReponseTable::execTagResponseEvent)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_Tag);
	P_GET_PROPERTY(FIntProperty,Z_Param_NewCount);
	P_GET_OBJECT(UAbilitySystemComponent,Z_Param_ASC);
	P_GET_PROPERTY(FIntProperty,Z_Param_idx);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TagResponseEvent(Z_Param_Tag,Z_Param_NewCount,Z_Param_ASC,Z_Param_idx);
	P_NATIVE_END;
}
// End Class UGameplayTagReponseTable Function TagResponseEvent

// Begin Class UGameplayTagReponseTable
void UGameplayTagReponseTable::StaticRegisterNativesUGameplayTagReponseTable()
{
	UClass* Class = UGameplayTagReponseTable::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "TagResponseEvent", &UGameplayTagReponseTable::execTagResponseEvent },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameplayTagReponseTable);
UClass* Z_Construct_UClass_UGameplayTagReponseTable_NoRegister()
{
	return UGameplayTagReponseTable::StaticClass();
}
struct Z_Construct_UClass_UGameplayTagReponseTable_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\x09""A data driven table for applying gameplay effects based on tag count. This allows designers to map a \n *\x09\"tag count\" -> \"response Gameplay Effect\" relationship.\n *\x09\n *\x09""For example, \"for every count of \"Status.Haste\" I get 1 level of GE_Response_Haste. This class facilitates\n *\x09""building this table and automatically registering and responding to tag events on the ability system component.\n */" },
#endif
		{ "IncludePath", "GameplayTagResponseTable.h" },
		{ "ModuleRelativePath", "Public/GameplayTagResponseTable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A data driven table for applying gameplay effects based on tag count. This allows designers to map a\n\"tag count\" -> \"response Gameplay Effect\" relationship.\n\nFor example, \"for every count of \"Status.Haste\" I get 1 level of GE_Response_Haste. This class facilitates\nbuilding this table and automatically registering and responding to tag events on the ability system component." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Entries_MetaData[] = {
		{ "Category", "Response" },
		{ "ModuleRelativePath", "Public/GameplayTagResponseTable.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Entries_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Entries;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGameplayTagReponseTable_TagResponseEvent, "TagResponseEvent" }, // 159807565
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameplayTagReponseTable>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameplayTagReponseTable_Statics::NewProp_Entries_Inner = { "Entries", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTagResponseTableEntry, METADATA_PARAMS(0, nullptr) }; // 3093554086
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameplayTagReponseTable_Statics::NewProp_Entries = { "Entries", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameplayTagReponseTable, Entries), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Entries_MetaData), NewProp_Entries_MetaData) }; // 3093554086
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameplayTagReponseTable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTagReponseTable_Statics::NewProp_Entries_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTagReponseTable_Statics::NewProp_Entries,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayTagReponseTable_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGameplayTagReponseTable_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayTagReponseTable_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameplayTagReponseTable_Statics::ClassParams = {
	&UGameplayTagReponseTable::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UGameplayTagReponseTable_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayTagReponseTable_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayTagReponseTable_Statics::Class_MetaDataParams), Z_Construct_UClass_UGameplayTagReponseTable_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGameplayTagReponseTable()
{
	if (!Z_Registration_Info_UClass_UGameplayTagReponseTable.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameplayTagReponseTable.OuterSingleton, Z_Construct_UClass_UGameplayTagReponseTable_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGameplayTagReponseTable.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UClass* StaticClass<UGameplayTagReponseTable>()
{
	return UGameplayTagReponseTable::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGameplayTagReponseTable);
UGameplayTagReponseTable::~UGameplayTagReponseTable() {}
// End Class UGameplayTagReponseTable

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayTagResponseTable_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FGameplayTagReponsePair::StaticStruct, Z_Construct_UScriptStruct_FGameplayTagReponsePair_Statics::NewStructOps, TEXT("GameplayTagReponsePair"), &Z_Registration_Info_UScriptStruct_GameplayTagReponsePair, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayTagReponsePair), 4234977773U) },
		{ FGameplayTagResponseTableEntry::StaticStruct, Z_Construct_UScriptStruct_FGameplayTagResponseTableEntry_Statics::NewStructOps, TEXT("GameplayTagResponseTableEntry"), &Z_Registration_Info_UScriptStruct_GameplayTagResponseTableEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayTagResponseTableEntry), 3093554086U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGameplayTagReponseTable, UGameplayTagReponseTable::StaticClass, TEXT("UGameplayTagReponseTable"), &Z_Registration_Info_UClass_UGameplayTagReponseTable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameplayTagReponseTable), 2816723380U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayTagResponseTable_h_3112308447(TEXT("/Script/GameplayAbilities"),
	Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayTagResponseTable_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayTagResponseTable_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayTagResponseTable_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayTagResponseTable_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
