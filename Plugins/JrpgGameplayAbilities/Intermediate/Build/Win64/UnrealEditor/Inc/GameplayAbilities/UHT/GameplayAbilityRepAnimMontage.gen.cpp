// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayAbilities/Public/Abilities/GameplayAbilityRepAnimMontage.h"
#include "GameplayAbilities/Public/GameplayPrediction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayAbilityRepAnimMontage() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimSequenceBase_NoRegister();
GAMEPLAYABILITIES_API UEnum* Z_Construct_UEnum_GameplayAbilities_ERepAnimPositionMethod();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FPredictionKey();
UPackage* Z_Construct_UPackage__Script_GameplayAbilities();
// End Cross Module References

// Begin Enum ERepAnimPositionMethod
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERepAnimPositionMethod;
static UEnum* ERepAnimPositionMethod_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ERepAnimPositionMethod.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ERepAnimPositionMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GameplayAbilities_ERepAnimPositionMethod, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("ERepAnimPositionMethod"));
	}
	return Z_Registration_Info_UEnum_ERepAnimPositionMethod.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UEnum* StaticEnum<ERepAnimPositionMethod>()
{
	return ERepAnimPositionMethod_StaticEnum();
}
struct Z_Construct_UEnum_GameplayAbilities_ERepAnimPositionMethod_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Enum used by the Ability Rep Anim Montage struct to rep the quantized position or the current section id */" },
#endif
		{ "CurrentSectionId.Comment", "// reps the position in the montage to keep the client in sync (heavier, quantized, more precise)\n" },
		{ "CurrentSectionId.Name", "ERepAnimPositionMethod::CurrentSectionId" },
		{ "CurrentSectionId.ToolTip", "reps the position in the montage to keep the client in sync (heavier, quantized, more precise)" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityRepAnimMontage.h" },
		{ "Position.Name", "ERepAnimPositionMethod::Position" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enum used by the Ability Rep Anim Montage struct to rep the quantized position or the current section id" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ERepAnimPositionMethod::Position", (int64)ERepAnimPositionMethod::Position },
		{ "ERepAnimPositionMethod::CurrentSectionId", (int64)ERepAnimPositionMethod::CurrentSectionId },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GameplayAbilities_ERepAnimPositionMethod_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_GameplayAbilities,
	nullptr,
	"ERepAnimPositionMethod",
	"ERepAnimPositionMethod",
	Z_Construct_UEnum_GameplayAbilities_ERepAnimPositionMethod_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayAbilities_ERepAnimPositionMethod_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayAbilities_ERepAnimPositionMethod_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GameplayAbilities_ERepAnimPositionMethod_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_GameplayAbilities_ERepAnimPositionMethod()
{
	if (!Z_Registration_Info_UEnum_ERepAnimPositionMethod.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERepAnimPositionMethod.InnerSingleton, Z_Construct_UEnum_GameplayAbilities_ERepAnimPositionMethod_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ERepAnimPositionMethod.InnerSingleton;
}
// End Enum ERepAnimPositionMethod

// Begin ScriptStruct FGameplayAbilityRepAnimMontage
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayAbilityRepAnimMontage;
class UScriptStruct* FGameplayAbilityRepAnimMontage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayAbilityRepAnimMontage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayAbilityRepAnimMontage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("GameplayAbilityRepAnimMontage"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayAbilityRepAnimMontage.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FGameplayAbilityRepAnimMontage>()
{
	return FGameplayAbilityRepAnimMontage::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Data about montages that is replicated to simulated clients */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityRepAnimMontage.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Data about montages that is replicated to simulated clients" },
#endif
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimMontage_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** AnimMontage ref */" },
#endif
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Use the GetAnimMontage function instead" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityRepAnimMontage.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "AnimMontage ref" },
#endif
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Animation_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Animation ref. When playing a dynamic montage this points to the AnimSequence the montage was created from */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityRepAnimMontage.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Animation ref. When playing a dynamic montage this points to the AnimSequence the montage was created from" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlotName_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Optional slot name used by dynamic montages. */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityRepAnimMontage.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional slot name used by dynamic montages." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayRate_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Play Rate */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityRepAnimMontage.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Play Rate" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Montage position */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityRepAnimMontage.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Montage position" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendTime_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Montage current blend time */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityRepAnimMontage.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Montage current blend time" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendOutTime_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Optional blend out used by dynamic montages. */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityRepAnimMontage.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional blend out used by dynamic montages." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NextSectionID_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** NextSectionID */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityRepAnimMontage.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "NextSectionID" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayInstanceId_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** ID incremented every time a montage is played, used to trigger replication when the same montage is played multiple times. This ID wraps around when it reaches its max value. */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityRepAnimMontage.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ID incremented every time a montage is played, used to trigger replication when the same montage is played multiple times. This ID wraps around when it reaches its max value." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRepPosition_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** flag indicating we should serialize the position or the current section id */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityRepAnimMontage.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "flag indicating we should serialize the position or the current section id" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsStopped_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Bit set when montage has been stopped. */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityRepAnimMontage.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Bit set when montage has been stopped." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkipPositionCorrection_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Stops montage position from replicating at all to save bandwidth */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityRepAnimMontage.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Stops montage position from replicating at all to save bandwidth" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSkipPlayRate_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Stops PlayRate from replicating to save bandwidth. PlayRate will be assumed to be 1.f. */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityRepAnimMontage.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Stops PlayRate from replicating to save bandwidth. PlayRate will be assumed to be 1.f." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PredictionKey_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityRepAnimMontage.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SectionIdToPlay_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The current section Id used by the montage. Will only be valid if bRepPosition is false */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityRepAnimMontage.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The current section Id used by the montage. Will only be valid if bRepPosition is false" },
#endif
	};
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimMontage;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Animation;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SlotName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Position;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendOutTime;
	static const UECodeGen_Private::FBytePropertyParams NewProp_NextSectionID;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PlayInstanceId;
	static void NewProp_bRepPosition_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRepPosition;
	static void NewProp_IsStopped_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsStopped;
	static void NewProp_SkipPositionCorrection_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_SkipPositionCorrection;
	static void NewProp_bSkipPlayRate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSkipPlayRate;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PredictionKey;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SectionIdToPlay;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayAbilityRepAnimMontage>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewProp_AnimMontage = { "AnimMontage", nullptr, (EPropertyFlags)0x0114000820000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayAbilityRepAnimMontage, AnimMontage_DEPRECATED), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimMontage_MetaData), NewProp_AnimMontage_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewProp_Animation = { "Animation", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayAbilityRepAnimMontage, Animation), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Animation_MetaData), NewProp_Animation_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayAbilityRepAnimMontage, SlotName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlotName_MetaData), NewProp_SlotName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewProp_PlayRate = { "PlayRate", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayAbilityRepAnimMontage, PlayRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayRate_MetaData), NewProp_PlayRate_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000080000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayAbilityRepAnimMontage, Position), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Position_MetaData), NewProp_Position_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewProp_BlendTime = { "BlendTime", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayAbilityRepAnimMontage, BlendTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendTime_MetaData), NewProp_BlendTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewProp_BlendOutTime = { "BlendOutTime", nullptr, (EPropertyFlags)0x0010000080000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayAbilityRepAnimMontage, BlendOutTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendOutTime_MetaData), NewProp_BlendOutTime_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewProp_NextSectionID = { "NextSectionID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayAbilityRepAnimMontage, NextSectionID), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NextSectionID_MetaData), NewProp_NextSectionID_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewProp_PlayInstanceId = { "PlayInstanceId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayAbilityRepAnimMontage, PlayInstanceId), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayInstanceId_MetaData), NewProp_PlayInstanceId_MetaData) };
void Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewProp_bRepPosition_SetBit(void* Obj)
{
	((FGameplayAbilityRepAnimMontage*)Obj)->bRepPosition = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewProp_bRepPosition = { "bRepPosition", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FGameplayAbilityRepAnimMontage), &Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewProp_bRepPosition_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRepPosition_MetaData), NewProp_bRepPosition_MetaData) };
void Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewProp_IsStopped_SetBit(void* Obj)
{
	((FGameplayAbilityRepAnimMontage*)Obj)->IsStopped = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewProp_IsStopped = { "IsStopped", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FGameplayAbilityRepAnimMontage), &Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewProp_IsStopped_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsStopped_MetaData), NewProp_IsStopped_MetaData) };
void Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewProp_SkipPositionCorrection_SetBit(void* Obj)
{
	((FGameplayAbilityRepAnimMontage*)Obj)->SkipPositionCorrection = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewProp_SkipPositionCorrection = { "SkipPositionCorrection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FGameplayAbilityRepAnimMontage), &Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewProp_SkipPositionCorrection_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkipPositionCorrection_MetaData), NewProp_SkipPositionCorrection_MetaData) };
void Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewProp_bSkipPlayRate_SetBit(void* Obj)
{
	((FGameplayAbilityRepAnimMontage*)Obj)->bSkipPlayRate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewProp_bSkipPlayRate = { "bSkipPlayRate", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FGameplayAbilityRepAnimMontage), &Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewProp_bSkipPlayRate_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSkipPlayRate_MetaData), NewProp_bSkipPlayRate_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewProp_PredictionKey = { "PredictionKey", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayAbilityRepAnimMontage, PredictionKey), Z_Construct_UScriptStruct_FPredictionKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PredictionKey_MetaData), NewProp_PredictionKey_MetaData) }; // 3974026274
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewProp_SectionIdToPlay = { "SectionIdToPlay", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayAbilityRepAnimMontage, SectionIdToPlay), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SectionIdToPlay_MetaData), NewProp_SectionIdToPlay_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewProp_AnimMontage,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewProp_Animation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewProp_SlotName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewProp_PlayRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewProp_BlendTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewProp_BlendOutTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewProp_NextSectionID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewProp_PlayInstanceId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewProp_bRepPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewProp_IsStopped,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewProp_SkipPositionCorrection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewProp_bSkipPlayRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewProp_PredictionKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewProp_SectionIdToPlay,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
	nullptr,
	&NewStructOps,
	"GameplayAbilityRepAnimMontage",
	Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::PropPointers),
	sizeof(FGameplayAbilityRepAnimMontage),
	alignof(FGameplayAbilityRepAnimMontage),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayAbilityRepAnimMontage.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayAbilityRepAnimMontage.InnerSingleton, Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GameplayAbilityRepAnimMontage.InnerSingleton;
}
// End ScriptStruct FGameplayAbilityRepAnimMontage

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityRepAnimMontage_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ERepAnimPositionMethod_StaticEnum, TEXT("ERepAnimPositionMethod"), &Z_Registration_Info_UEnum_ERepAnimPositionMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2065571027U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FGameplayAbilityRepAnimMontage::StaticStruct, Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewStructOps, TEXT("GameplayAbilityRepAnimMontage"), &Z_Registration_Info_UScriptStruct_GameplayAbilityRepAnimMontage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayAbilityRepAnimMontage), 2573707717U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityRepAnimMontage_h_381698266(TEXT("/Script/GameplayAbilities"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityRepAnimMontage_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityRepAnimMontage_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityRepAnimMontage_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityRepAnimMontage_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
