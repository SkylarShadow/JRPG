// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayAbilities/Public/GameplayCue_Types.h"
#include "GameplayAbilities/Public/GameplayEffect.h"
#include "GameplayAbilities/Public/GameplayEffectTypes.h"
#include "GameplayAbilities/Public/GameplayPrediction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayCue_Types() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_AGameplayCueNotify_Actor_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
GAMEPLAYABILITIES_API UEnum* Z_Construct_UEnum_GameplayAbilities_EGameplayCuePayloadType();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayCueNotifyActorArray();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayCueParameters();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayCuePendingExecute();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectSpecForRPC();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FPreallocationInfo();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FPredictionKey();
UPackage* Z_Construct_UPackage__Script_GameplayAbilities();
// End Cross Module References

// Begin Enum EGameplayCuePayloadType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGameplayCuePayloadType;
static UEnum* EGameplayCuePayloadType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGameplayCuePayloadType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGameplayCuePayloadType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GameplayAbilities_EGameplayCuePayloadType, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("EGameplayCuePayloadType"));
	}
	return Z_Registration_Info_UEnum_EGameplayCuePayloadType.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UEnum* StaticEnum<EGameplayCuePayloadType>()
{
	return EGameplayCuePayloadType_StaticEnum();
}
struct Z_Construct_UEnum_GameplayAbilities_EGameplayCuePayloadType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Describes what type of payload is attached to a cue execution, we only replicate what is needed */" },
#endif
		{ "CueParameters.Comment", "/** Uses FGameplayCueParameters */" },
		{ "CueParameters.Name", "EGameplayCuePayloadType::CueParameters" },
		{ "CueParameters.ToolTip", "Uses FGameplayCueParameters" },
		{ "FromSpec.Comment", "/** Uses FGameplayEffectSpecForRPC */" },
		{ "FromSpec.Name", "EGameplayCuePayloadType::FromSpec" },
		{ "FromSpec.ToolTip", "Uses FGameplayEffectSpecForRPC" },
		{ "ModuleRelativePath", "Public/GameplayCue_Types.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Describes what type of payload is attached to a cue execution, we only replicate what is needed" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGameplayCuePayloadType::CueParameters", (int64)EGameplayCuePayloadType::CueParameters },
		{ "EGameplayCuePayloadType::FromSpec", (int64)EGameplayCuePayloadType::FromSpec },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GameplayAbilities_EGameplayCuePayloadType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_GameplayAbilities,
	nullptr,
	"EGameplayCuePayloadType",
	"EGameplayCuePayloadType",
	Z_Construct_UEnum_GameplayAbilities_EGameplayCuePayloadType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayAbilities_EGameplayCuePayloadType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayAbilities_EGameplayCuePayloadType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GameplayAbilities_EGameplayCuePayloadType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_GameplayAbilities_EGameplayCuePayloadType()
{
	if (!Z_Registration_Info_UEnum_EGameplayCuePayloadType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGameplayCuePayloadType.InnerSingleton, Z_Construct_UEnum_GameplayAbilities_EGameplayCuePayloadType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGameplayCuePayloadType.InnerSingleton;
}
// End Enum EGameplayCuePayloadType

// Begin ScriptStruct FGameplayCuePendingExecute
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayCuePendingExecute;
class UScriptStruct* FGameplayCuePendingExecute::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayCuePendingExecute.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayCuePendingExecute.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayCuePendingExecute, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("GameplayCuePendingExecute"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayCuePendingExecute.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FGameplayCuePendingExecute>()
{
	return FGameplayCuePendingExecute::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGameplayCuePendingExecute_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Structure to keep track of pending gameplay cues that haven't been applied yet. */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayCue_Types.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Structure to keep track of pending gameplay cues that haven't been applied yet." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PredictionKey_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Prediction key that spawned this cue */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayCue_Types.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Prediction key that spawned this cue" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PayloadType_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** What type of payload is attached to this cue */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayCue_Types.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "What type of payload is attached to this cue" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwningComponent_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** What component to send the cue on */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GameplayCue_Types.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "What component to send the cue on" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FromSpec_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If this cue is from a spec, here's the copy of that spec */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayCue_Types.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If this cue is from a spec, here's the copy of that spec" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CueParameters_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Store the full cue parameters or just the effect context depending on type */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayCue_Types.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Store the full cue parameters or just the effect context depending on type" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PredictionKey;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PayloadType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PayloadType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningComponent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FromSpec;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CueParameters;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayCuePendingExecute>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayCuePendingExecute_Statics::NewProp_PredictionKey = { "PredictionKey", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayCuePendingExecute, PredictionKey), Z_Construct_UScriptStruct_FPredictionKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PredictionKey_MetaData), NewProp_PredictionKey_MetaData) }; // 3974026274
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGameplayCuePendingExecute_Statics::NewProp_PayloadType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGameplayCuePendingExecute_Statics::NewProp_PayloadType = { "PayloadType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayCuePendingExecute, PayloadType), Z_Construct_UEnum_GameplayAbilities_EGameplayCuePayloadType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PayloadType_MetaData), NewProp_PayloadType_MetaData) }; // 2057438129
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGameplayCuePendingExecute_Statics::NewProp_OwningComponent = { "OwningComponent", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayCuePendingExecute, OwningComponent), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwningComponent_MetaData), NewProp_OwningComponent_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayCuePendingExecute_Statics::NewProp_FromSpec = { "FromSpec", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayCuePendingExecute, FromSpec), Z_Construct_UScriptStruct_FGameplayEffectSpecForRPC, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FromSpec_MetaData), NewProp_FromSpec_MetaData) }; // 1569145257
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayCuePendingExecute_Statics::NewProp_CueParameters = { "CueParameters", nullptr, (EPropertyFlags)0x0010008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayCuePendingExecute, CueParameters), Z_Construct_UScriptStruct_FGameplayCueParameters, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CueParameters_MetaData), NewProp_CueParameters_MetaData) }; // 1032334605
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayCuePendingExecute_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCuePendingExecute_Statics::NewProp_PredictionKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCuePendingExecute_Statics::NewProp_PayloadType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCuePendingExecute_Statics::NewProp_PayloadType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCuePendingExecute_Statics::NewProp_OwningComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCuePendingExecute_Statics::NewProp_FromSpec,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCuePendingExecute_Statics::NewProp_CueParameters,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCuePendingExecute_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayCuePendingExecute_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
	nullptr,
	&NewStructOps,
	"GameplayCuePendingExecute",
	Z_Construct_UScriptStruct_FGameplayCuePendingExecute_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCuePendingExecute_Statics::PropPointers),
	sizeof(FGameplayCuePendingExecute),
	alignof(FGameplayCuePendingExecute),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCuePendingExecute_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGameplayCuePendingExecute_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGameplayCuePendingExecute()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayCuePendingExecute.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayCuePendingExecute.InnerSingleton, Z_Construct_UScriptStruct_FGameplayCuePendingExecute_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GameplayCuePendingExecute.InnerSingleton;
}
// End ScriptStruct FGameplayCuePendingExecute

// Begin ScriptStruct FGameplayCueNotifyActorArray
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayCueNotifyActorArray;
class UScriptStruct* FGameplayCueNotifyActorArray::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayCueNotifyActorArray.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayCueNotifyActorArray.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayCueNotifyActorArray, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("GameplayCueNotifyActorArray"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayCueNotifyActorArray.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FGameplayCueNotifyActorArray>()
{
	return FGameplayCueNotifyActorArray::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGameplayCueNotifyActorArray_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameplayCue_Types.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Actors_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayCue_Types.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Actors;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayCueNotifyActorArray>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGameplayCueNotifyActorArray_Statics::NewProp_Actors_Inner = { "Actors", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AGameplayCueNotify_Actor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGameplayCueNotifyActorArray_Statics::NewProp_Actors = { "Actors", nullptr, (EPropertyFlags)0x0114000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayCueNotifyActorArray, Actors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Actors_MetaData), NewProp_Actors_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayCueNotifyActorArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueNotifyActorArray_Statics::NewProp_Actors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueNotifyActorArray_Statics::NewProp_Actors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCueNotifyActorArray_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayCueNotifyActorArray_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
	nullptr,
	&NewStructOps,
	"GameplayCueNotifyActorArray",
	Z_Construct_UScriptStruct_FGameplayCueNotifyActorArray_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCueNotifyActorArray_Statics::PropPointers),
	sizeof(FGameplayCueNotifyActorArray),
	alignof(FGameplayCueNotifyActorArray),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCueNotifyActorArray_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGameplayCueNotifyActorArray_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGameplayCueNotifyActorArray()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayCueNotifyActorArray.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayCueNotifyActorArray.InnerSingleton, Z_Construct_UScriptStruct_FGameplayCueNotifyActorArray_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GameplayCueNotifyActorArray.InnerSingleton;
}
// End ScriptStruct FGameplayCueNotifyActorArray

// Begin ScriptStruct FPreallocationInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PreallocationInfo;
class UScriptStruct* FPreallocationInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PreallocationInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PreallocationInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPreallocationInfo, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("PreallocationInfo"));
	}
	return Z_Registration_Info_UScriptStruct_PreallocationInfo.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FPreallocationInfo>()
{
	return FPreallocationInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPreallocationInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Struct for pooling and preallocating gameplaycuenotify_actor classes. This data is per world and used to track what actors are available to recycle and which classes need to preallocate instances of those actors */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayCue_Types.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Struct for pooling and preallocating gameplaycuenotify_actor classes. This data is per world and used to track what actors are available to recycle and which classes need to preallocate instances of those actors" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreallocatedInstances_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Raw list of pooled instances. This relies on NotifyGameplayCueActorEndPlay always being called when actor is destroyed */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayCue_Types.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Raw list of pooled instances. This relies on NotifyGameplayCueActorEndPlay always being called when actor is destroyed" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClassesNeedingPreallocation_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** List of classes that will be pooled */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayCue_Types.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of classes that will be pooled" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PreallocatedInstances_ValueProp;
	static const UECodeGen_Private::FClassPropertyParams NewProp_PreallocatedInstances_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_PreallocatedInstances;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ClassesNeedingPreallocation_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ClassesNeedingPreallocation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPreallocationInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPreallocationInfo_Statics::NewProp_PreallocatedInstances_ValueProp = { "PreallocatedInstances", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FGameplayCueNotifyActorArray, METADATA_PARAMS(0, nullptr) }; // 424868405
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FPreallocationInfo_Statics::NewProp_PreallocatedInstances_Key_KeyProp = { "PreallocatedInstances_Key", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FPreallocationInfo_Statics::NewProp_PreallocatedInstances = { "PreallocatedInstances", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPreallocationInfo, PreallocatedInstances), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreallocatedInstances_MetaData), NewProp_PreallocatedInstances_MetaData) }; // 424868405
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FPreallocationInfo_Statics::NewProp_ClassesNeedingPreallocation_Inner = { "ClassesNeedingPreallocation", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_AGameplayCueNotify_Actor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPreallocationInfo_Statics::NewProp_ClassesNeedingPreallocation = { "ClassesNeedingPreallocation", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPreallocationInfo, ClassesNeedingPreallocation), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClassesNeedingPreallocation_MetaData), NewProp_ClassesNeedingPreallocation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPreallocationInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPreallocationInfo_Statics::NewProp_PreallocatedInstances_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPreallocationInfo_Statics::NewProp_PreallocatedInstances_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPreallocationInfo_Statics::NewProp_PreallocatedInstances,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPreallocationInfo_Statics::NewProp_ClassesNeedingPreallocation_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPreallocationInfo_Statics::NewProp_ClassesNeedingPreallocation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPreallocationInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPreallocationInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
	nullptr,
	&NewStructOps,
	"PreallocationInfo",
	Z_Construct_UScriptStruct_FPreallocationInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPreallocationInfo_Statics::PropPointers),
	sizeof(FPreallocationInfo),
	alignof(FPreallocationInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPreallocationInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPreallocationInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPreallocationInfo()
{
	if (!Z_Registration_Info_UScriptStruct_PreallocationInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PreallocationInfo.InnerSingleton, Z_Construct_UScriptStruct_FPreallocationInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PreallocationInfo.InnerSingleton;
}
// End ScriptStruct FPreallocationInfo

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayCue_Types_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EGameplayCuePayloadType_StaticEnum, TEXT("EGameplayCuePayloadType"), &Z_Registration_Info_UEnum_EGameplayCuePayloadType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2057438129U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FGameplayCuePendingExecute::StaticStruct, Z_Construct_UScriptStruct_FGameplayCuePendingExecute_Statics::NewStructOps, TEXT("GameplayCuePendingExecute"), &Z_Registration_Info_UScriptStruct_GameplayCuePendingExecute, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayCuePendingExecute), 1370725318U) },
		{ FGameplayCueNotifyActorArray::StaticStruct, Z_Construct_UScriptStruct_FGameplayCueNotifyActorArray_Statics::NewStructOps, TEXT("GameplayCueNotifyActorArray"), &Z_Registration_Info_UScriptStruct_GameplayCueNotifyActorArray, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayCueNotifyActorArray), 424868405U) },
		{ FPreallocationInfo::StaticStruct, Z_Construct_UScriptStruct_FPreallocationInfo_Statics::NewStructOps, TEXT("PreallocationInfo"), &Z_Registration_Info_UScriptStruct_PreallocationInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPreallocationInfo), 2313442270U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayCue_Types_h_3373186366(TEXT("/Script/GameplayAbilities"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayCue_Types_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayCue_Types_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayCue_Types_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayCue_Types_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
