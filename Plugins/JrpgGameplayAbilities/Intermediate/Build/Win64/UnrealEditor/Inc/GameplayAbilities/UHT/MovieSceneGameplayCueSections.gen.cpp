// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayAbilities/Public/Sequencer/MovieSceneGameplayCueSections.h"
#include "GameplayAbilities/Public/GameplayCueInterface.h"
#include "Runtime/MovieScene/Public/MovieSceneObjectBindingID.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneGameplayCueSections() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameNumber();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UMovieSceneGameplayCueSection();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UMovieSceneGameplayCueSection_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UMovieSceneGameplayCueTriggerSection();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UMovieSceneGameplayCueTriggerSection_NoRegister();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayCueTag();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneGameplayCueChannel();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneGameplayCueKey();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneHookSection();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneChannel();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneObjectBindingID();
PHYSICSCORE_API UClass* Z_Construct_UClass_UPhysicalMaterial_NoRegister();
UPackage* Z_Construct_UPackage__Script_GameplayAbilities();
// End Cross Module References

// Begin ScriptStruct FMovieSceneGameplayCueKey
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneGameplayCueKey;
class UScriptStruct* FMovieSceneGameplayCueKey::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneGameplayCueKey.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneGameplayCueKey.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneGameplayCueKey, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("MovieSceneGameplayCueKey"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneGameplayCueKey.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FMovieSceneGameplayCueKey>()
{
	return FMovieSceneGameplayCueKey::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMovieSceneGameplayCueKey_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneGameplayCueSections.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Cue_MetaData[] = {
		{ "Category", "Gameplay Cue" },
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneGameplayCueSections.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "Category", "Position" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Location cue took place at - relative to the attached component if applicable */" },
#endif
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneGameplayCueSections.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Location cue took place at - relative to the attached component if applicable" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Normal_MetaData[] = {
		{ "Category", "Position" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Normal of impact that caused cue */" },
#endif
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneGameplayCueSections.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Normal of impact that caused cue" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttachSocketName_MetaData[] = {
		{ "Category", "Position" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** When attached to a skeletal mesh component, specifies a socket to trigger the cue at */" },
#endif
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneGameplayCueSections.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When attached to a skeletal mesh component, specifies a socket to trigger the cue at" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NormalizedMagnitude_MetaData[] = {
		{ "Category", "Gameplay Cue" },
		{ "ClampMax", "1.000000" },
		{ "ClampMin", "0.000000" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Magnitude of source gameplay effect, normalzed from 0-1. Use this for \"how strong is the gameplay effect\" (0=min, 1=,max) */" },
#endif
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneGameplayCueSections.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Magnitude of source gameplay effect, normalzed from 0-1. Use this for \"how strong is the gameplay effect\" (0=min, 1=,max)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Instigator_MetaData[] = {
		{ "Category", "Gameplay Cue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Instigator actor, the actor that owns the ability system component. */" },
#endif
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneGameplayCueSections.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Instigator actor, the actor that owns the ability system component." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EffectCauser_MetaData[] = {
		{ "Category", "Gameplay Cue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The physical actor that actually did the damage, can be a weapon or projectile */" },
#endif
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneGameplayCueSections.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The physical actor that actually did the damage, can be a weapon or projectile" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PhysicalMaterial_MetaData[] = {
		{ "Category", "Gameplay Cue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** PhysMat of the hit, if there was a hit. */" },
#endif
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneGameplayCueSections.h" },
		{ "NativeConstTemplateArg", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "PhysMat of the hit, if there was a hit." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameplayEffectLevel_MetaData[] = {
		{ "Category", "Gameplay Cue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The level of that GameplayEffect */" },
#endif
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneGameplayCueSections.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The level of that GameplayEffect" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityLevel_MetaData[] = {
		{ "Category", "Gameplay Cue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If originating from an ability, this will be the level of that ability */" },
#endif
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneGameplayCueSections.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If originating from an ability, this will be the level of that ability" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAttachToBinding_MetaData[] = {
		{ "Category", "Position" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Attach the gameplay cue to the track's bound object in sequencer */" },
#endif
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneGameplayCueSections.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Attach the gameplay cue to the track's bound object in sequencer" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Cue;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Normal;
	static const UECodeGen_Private::FNamePropertyParams NewProp_AttachSocketName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NormalizedMagnitude;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Instigator;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EffectCauser;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PhysicalMaterial;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GameplayEffectLevel;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AbilityLevel;
	static void NewProp_bAttachToBinding_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAttachToBinding;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneGameplayCueKey>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneGameplayCueKey_Statics::NewProp_Cue = { "Cue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneGameplayCueKey, Cue), Z_Construct_UScriptStruct_FGameplayCueTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Cue_MetaData), NewProp_Cue_MetaData) }; // 4025337855
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneGameplayCueKey_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneGameplayCueKey, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneGameplayCueKey_Statics::NewProp_Normal = { "Normal", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneGameplayCueKey, Normal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Normal_MetaData), NewProp_Normal_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMovieSceneGameplayCueKey_Statics::NewProp_AttachSocketName = { "AttachSocketName", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneGameplayCueKey, AttachSocketName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttachSocketName_MetaData), NewProp_AttachSocketName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMovieSceneGameplayCueKey_Statics::NewProp_NormalizedMagnitude = { "NormalizedMagnitude", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneGameplayCueKey, NormalizedMagnitude), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NormalizedMagnitude_MetaData), NewProp_NormalizedMagnitude_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneGameplayCueKey_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneGameplayCueKey, Instigator), Z_Construct_UScriptStruct_FMovieSceneObjectBindingID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Instigator_MetaData), NewProp_Instigator_MetaData) }; // 2701874266
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneGameplayCueKey_Statics::NewProp_EffectCauser = { "EffectCauser", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneGameplayCueKey, EffectCauser), Z_Construct_UScriptStruct_FMovieSceneObjectBindingID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EffectCauser_MetaData), NewProp_EffectCauser_MetaData) }; // 2701874266
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMovieSceneGameplayCueKey_Statics::NewProp_PhysicalMaterial = { "PhysicalMaterial", nullptr, (EPropertyFlags)0x0114040000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneGameplayCueKey, PhysicalMaterial), Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PhysicalMaterial_MetaData), NewProp_PhysicalMaterial_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMovieSceneGameplayCueKey_Statics::NewProp_GameplayEffectLevel = { "GameplayEffectLevel", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneGameplayCueKey, GameplayEffectLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameplayEffectLevel_MetaData), NewProp_GameplayEffectLevel_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMovieSceneGameplayCueKey_Statics::NewProp_AbilityLevel = { "AbilityLevel", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneGameplayCueKey, AbilityLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityLevel_MetaData), NewProp_AbilityLevel_MetaData) };
void Z_Construct_UScriptStruct_FMovieSceneGameplayCueKey_Statics::NewProp_bAttachToBinding_SetBit(void* Obj)
{
	((FMovieSceneGameplayCueKey*)Obj)->bAttachToBinding = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneGameplayCueKey_Statics::NewProp_bAttachToBinding = { "bAttachToBinding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMovieSceneGameplayCueKey), &Z_Construct_UScriptStruct_FMovieSceneGameplayCueKey_Statics::NewProp_bAttachToBinding_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAttachToBinding_MetaData), NewProp_bAttachToBinding_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneGameplayCueKey_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneGameplayCueKey_Statics::NewProp_Cue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneGameplayCueKey_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneGameplayCueKey_Statics::NewProp_Normal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneGameplayCueKey_Statics::NewProp_AttachSocketName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneGameplayCueKey_Statics::NewProp_NormalizedMagnitude,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneGameplayCueKey_Statics::NewProp_Instigator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneGameplayCueKey_Statics::NewProp_EffectCauser,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneGameplayCueKey_Statics::NewProp_PhysicalMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneGameplayCueKey_Statics::NewProp_GameplayEffectLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneGameplayCueKey_Statics::NewProp_AbilityLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneGameplayCueKey_Statics::NewProp_bAttachToBinding,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneGameplayCueKey_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneGameplayCueKey_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
	nullptr,
	&NewStructOps,
	"MovieSceneGameplayCueKey",
	Z_Construct_UScriptStruct_FMovieSceneGameplayCueKey_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneGameplayCueKey_Statics::PropPointers),
	sizeof(FMovieSceneGameplayCueKey),
	alignof(FMovieSceneGameplayCueKey),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneGameplayCueKey_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieSceneGameplayCueKey_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneGameplayCueKey()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneGameplayCueKey.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneGameplayCueKey.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneGameplayCueKey_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneGameplayCueKey.InnerSingleton;
}
// End ScriptStruct FMovieSceneGameplayCueKey

// Begin ScriptStruct FMovieSceneGameplayCueChannel
static_assert(std::is_polymorphic<FMovieSceneGameplayCueChannel>() == std::is_polymorphic<FMovieSceneChannel>(), "USTRUCT FMovieSceneGameplayCueChannel cannot be polymorphic unless super FMovieSceneChannel is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneGameplayCueChannel;
class UScriptStruct* FMovieSceneGameplayCueChannel::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneGameplayCueChannel.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneGameplayCueChannel.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneGameplayCueChannel, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("MovieSceneGameplayCueChannel"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneGameplayCueChannel.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FMovieSceneGameplayCueChannel>()
{
	return FMovieSceneGameplayCueChannel::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMovieSceneGameplayCueChannel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneGameplayCueSections.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeyTimes_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Array of times for each key */" },
#endif
		{ "KeyTimes", "" },
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneGameplayCueSections.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Array of times for each key" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeyValues_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Array of values that correspond to each key time */" },
#endif
		{ "KeyValues", "" },
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneGameplayCueSections.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Array of values that correspond to each key time" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_KeyTimes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_KeyTimes;
	static const UECodeGen_Private::FStructPropertyParams NewProp_KeyValues_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_KeyValues;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneGameplayCueChannel>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneGameplayCueChannel_Statics::NewProp_KeyTimes_Inner = { "KeyTimes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMovieSceneGameplayCueChannel_Statics::NewProp_KeyTimes = { "KeyTimes", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneGameplayCueChannel, KeyTimes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeyTimes_MetaData), NewProp_KeyTimes_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneGameplayCueChannel_Statics::NewProp_KeyValues_Inner = { "KeyValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMovieSceneGameplayCueKey, METADATA_PARAMS(0, nullptr) }; // 3702727453
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMovieSceneGameplayCueChannel_Statics::NewProp_KeyValues = { "KeyValues", nullptr, (EPropertyFlags)0x0040010000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneGameplayCueChannel, KeyValues), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeyValues_MetaData), NewProp_KeyValues_MetaData) }; // 3702727453
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneGameplayCueChannel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneGameplayCueChannel_Statics::NewProp_KeyTimes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneGameplayCueChannel_Statics::NewProp_KeyTimes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneGameplayCueChannel_Statics::NewProp_KeyValues_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneGameplayCueChannel_Statics::NewProp_KeyValues,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneGameplayCueChannel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneGameplayCueChannel_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
	Z_Construct_UScriptStruct_FMovieSceneChannel,
	&NewStructOps,
	"MovieSceneGameplayCueChannel",
	Z_Construct_UScriptStruct_FMovieSceneGameplayCueChannel_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneGameplayCueChannel_Statics::PropPointers),
	sizeof(FMovieSceneGameplayCueChannel),
	alignof(FMovieSceneGameplayCueChannel),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneGameplayCueChannel_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieSceneGameplayCueChannel_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneGameplayCueChannel()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneGameplayCueChannel.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneGameplayCueChannel.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneGameplayCueChannel_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneGameplayCueChannel.InnerSingleton;
}
// End ScriptStruct FMovieSceneGameplayCueChannel

// Begin Class UMovieSceneGameplayCueTriggerSection
void UMovieSceneGameplayCueTriggerSection::StaticRegisterNativesUMovieSceneGameplayCueTriggerSection()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneGameplayCueTriggerSection);
UClass* Z_Construct_UClass_UMovieSceneGameplayCueTriggerSection_NoRegister()
{
	return UMovieSceneGameplayCueTriggerSection::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneGameplayCueTriggerSection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Implements a movie scene section that triggers gameplay cues\n */" },
#endif
		{ "IncludePath", "Sequencer/MovieSceneGameplayCueSections.h" },
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneGameplayCueSections.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Implements a movie scene section that triggers gameplay cues" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Channel_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneGameplayCueSections.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Channel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneGameplayCueTriggerSection>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneGameplayCueTriggerSection_Statics::NewProp_Channel = { "Channel", nullptr, (EPropertyFlags)0x0040010000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneGameplayCueTriggerSection, Channel), Z_Construct_UScriptStruct_FMovieSceneGameplayCueChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Channel_MetaData), NewProp_Channel_MetaData) }; // 4218307074
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneGameplayCueTriggerSection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneGameplayCueTriggerSection_Statics::NewProp_Channel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneGameplayCueTriggerSection_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMovieSceneGameplayCueTriggerSection_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneHookSection,
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneGameplayCueTriggerSection_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneGameplayCueTriggerSection_Statics::ClassParams = {
	&UMovieSceneGameplayCueTriggerSection::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMovieSceneGameplayCueTriggerSection_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneGameplayCueTriggerSection_Statics::PropPointers),
	0,
	0x002800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneGameplayCueTriggerSection_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneGameplayCueTriggerSection_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneGameplayCueTriggerSection()
{
	if (!Z_Registration_Info_UClass_UMovieSceneGameplayCueTriggerSection.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneGameplayCueTriggerSection.OuterSingleton, Z_Construct_UClass_UMovieSceneGameplayCueTriggerSection_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneGameplayCueTriggerSection.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UClass* StaticClass<UMovieSceneGameplayCueTriggerSection>()
{
	return UMovieSceneGameplayCueTriggerSection::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneGameplayCueTriggerSection);
UMovieSceneGameplayCueTriggerSection::~UMovieSceneGameplayCueTriggerSection() {}
// End Class UMovieSceneGameplayCueTriggerSection

// Begin Class UMovieSceneGameplayCueSection
void UMovieSceneGameplayCueSection::StaticRegisterNativesUMovieSceneGameplayCueSection()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneGameplayCueSection);
UClass* Z_Construct_UClass_UMovieSceneGameplayCueSection_NoRegister()
{
	return UMovieSceneGameplayCueSection::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneGameplayCueSection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Implements a movie scene section that triggers gameplay cues\n */" },
#endif
		{ "IncludePath", "Sequencer/MovieSceneGameplayCueSections.h" },
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneGameplayCueSections.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Implements a movie scene section that triggers gameplay cues" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Cue_MetaData[] = {
		{ "Category", "Cue" },
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneGameplayCueSections.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Cue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneGameplayCueSection>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneGameplayCueSection_Statics::NewProp_Cue = { "Cue", nullptr, (EPropertyFlags)0x0040010000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneGameplayCueSection, Cue), Z_Construct_UScriptStruct_FMovieSceneGameplayCueKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Cue_MetaData), NewProp_Cue_MetaData) }; // 3702727453
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneGameplayCueSection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneGameplayCueSection_Statics::NewProp_Cue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneGameplayCueSection_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMovieSceneGameplayCueSection_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneHookSection,
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneGameplayCueSection_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneGameplayCueSection_Statics::ClassParams = {
	&UMovieSceneGameplayCueSection::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMovieSceneGameplayCueSection_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneGameplayCueSection_Statics::PropPointers),
	0,
	0x002800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneGameplayCueSection_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneGameplayCueSection_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneGameplayCueSection()
{
	if (!Z_Registration_Info_UClass_UMovieSceneGameplayCueSection.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneGameplayCueSection.OuterSingleton, Z_Construct_UClass_UMovieSceneGameplayCueSection_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneGameplayCueSection.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UClass* StaticClass<UMovieSceneGameplayCueSection>()
{
	return UMovieSceneGameplayCueSection::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneGameplayCueSection);
UMovieSceneGameplayCueSection::~UMovieSceneGameplayCueSection() {}
// End Class UMovieSceneGameplayCueSection

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Sequencer_MovieSceneGameplayCueSections_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMovieSceneGameplayCueKey::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneGameplayCueKey_Statics::NewStructOps, TEXT("MovieSceneGameplayCueKey"), &Z_Registration_Info_UScriptStruct_MovieSceneGameplayCueKey, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneGameplayCueKey), 3702727453U) },
		{ FMovieSceneGameplayCueChannel::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneGameplayCueChannel_Statics::NewStructOps, TEXT("MovieSceneGameplayCueChannel"), &Z_Registration_Info_UScriptStruct_MovieSceneGameplayCueChannel, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneGameplayCueChannel), 4218307074U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneGameplayCueTriggerSection, UMovieSceneGameplayCueTriggerSection::StaticClass, TEXT("UMovieSceneGameplayCueTriggerSection"), &Z_Registration_Info_UClass_UMovieSceneGameplayCueTriggerSection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneGameplayCueTriggerSection), 1638391217U) },
		{ Z_Construct_UClass_UMovieSceneGameplayCueSection, UMovieSceneGameplayCueSection::StaticClass, TEXT("UMovieSceneGameplayCueSection"), &Z_Registration_Info_UClass_UMovieSceneGameplayCueSection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneGameplayCueSection), 482883189U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Sequencer_MovieSceneGameplayCueSections_h_2005265123(TEXT("/Script/GameplayAbilities"),
	Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Sequencer_MovieSceneGameplayCueSections_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Sequencer_MovieSceneGameplayCueSections_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Sequencer_MovieSceneGameplayCueSections_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Sequencer_MovieSceneGameplayCueSections_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
