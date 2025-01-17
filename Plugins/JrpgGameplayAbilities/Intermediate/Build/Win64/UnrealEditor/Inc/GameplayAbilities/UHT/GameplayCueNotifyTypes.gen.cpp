// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayAbilities/Public/GameplayCueNotifyTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayCueNotifyTypes() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCameraLensEffectInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCameraShakeBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UDecalComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UForceFeedbackAttenuation_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UForceFeedbackComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UForceFeedbackEffect_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UFXSystemComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UInputDeviceProperty_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAttachmentRule();
GAMEPLAYABILITIES_API UEnum* Z_Construct_UEnum_GameplayAbilities_EGameplayCueNotify_AttachPolicy();
GAMEPLAYABILITIES_API UEnum* Z_Construct_UEnum_GameplayAbilities_EGameplayCueNotify_EffectPlaySpace();
GAMEPLAYABILITIES_API UEnum* Z_Construct_UEnum_GameplayAbilities_EGameplayCueNotify_LocallyControlledPolicy();
GAMEPLAYABILITIES_API UEnum* Z_Construct_UEnum_GameplayAbilities_EGameplayCueNotify_LocallyControlledSource();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayCueNotify_BurstEffects();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayCueNotify_CameraLensEffectInfo();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayCueNotify_CameraShakeInfo();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayCueNotify_DecalInfo();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayCueNotify_ForceFeedbackInfo();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayCueNotify_InputDevicePropertyInfo();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayCueNotify_LoopingEffects();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayCueNotify_ParticleInfo();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayCueNotify_PlacementInfo();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayCueNotify_SoundInfo();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayCueNotify_SoundParameterInterfaceInfo();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayCueNotify_SpawnCondition();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayCueNotify_SpawnResult();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
PHYSICSCORE_API UEnum* Z_Construct_UEnum_PhysicsCore_EPhysicalSurface();
UPackage* Z_Construct_UPackage__Script_GameplayAbilities();
// End Cross Module References

// Begin Enum EGameplayCueNotify_EffectPlaySpace
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGameplayCueNotify_EffectPlaySpace;
static UEnum* EGameplayCueNotify_EffectPlaySpace_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGameplayCueNotify_EffectPlaySpace.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGameplayCueNotify_EffectPlaySpace.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GameplayAbilities_EGameplayCueNotify_EffectPlaySpace, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("EGameplayCueNotify_EffectPlaySpace"));
	}
	return Z_Registration_Info_UEnum_EGameplayCueNotify_EffectPlaySpace.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UEnum* StaticEnum<EGameplayCueNotify_EffectPlaySpace>()
{
	return EGameplayCueNotify_EffectPlaySpace_StaticEnum();
}
struct Z_Construct_UEnum_GameplayAbilities_EGameplayCueNotify_EffectPlaySpace_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CameraSpace.Comment", "// Play the effect in camera space.\n" },
		{ "CameraSpace.Name", "EGameplayCueNotify_EffectPlaySpace::CameraSpace" },
		{ "CameraSpace.ToolTip", "Play the effect in camera space." },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * EGameplayCueNotify_EffectPlaySpace\n *\n *\x09Used by some effects (like camera shakes) to specify what coordinate space the they should be applied in.\n */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayCueNotifyTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "EGameplayCueNotify_EffectPlaySpace\n\n    Used by some effects (like camera shakes) to specify what coordinate space the they should be applied in." },
#endif
		{ "WorldSpace.Comment", "// Play the effect in world space.\n" },
		{ "WorldSpace.Name", "EGameplayCueNotify_EffectPlaySpace::WorldSpace" },
		{ "WorldSpace.ToolTip", "Play the effect in world space." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGameplayCueNotify_EffectPlaySpace::WorldSpace", (int64)EGameplayCueNotify_EffectPlaySpace::WorldSpace },
		{ "EGameplayCueNotify_EffectPlaySpace::CameraSpace", (int64)EGameplayCueNotify_EffectPlaySpace::CameraSpace },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GameplayAbilities_EGameplayCueNotify_EffectPlaySpace_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_GameplayAbilities,
	nullptr,
	"EGameplayCueNotify_EffectPlaySpace",
	"EGameplayCueNotify_EffectPlaySpace",
	Z_Construct_UEnum_GameplayAbilities_EGameplayCueNotify_EffectPlaySpace_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayAbilities_EGameplayCueNotify_EffectPlaySpace_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayAbilities_EGameplayCueNotify_EffectPlaySpace_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GameplayAbilities_EGameplayCueNotify_EffectPlaySpace_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_GameplayAbilities_EGameplayCueNotify_EffectPlaySpace()
{
	if (!Z_Registration_Info_UEnum_EGameplayCueNotify_EffectPlaySpace.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGameplayCueNotify_EffectPlaySpace.InnerSingleton, Z_Construct_UEnum_GameplayAbilities_EGameplayCueNotify_EffectPlaySpace_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGameplayCueNotify_EffectPlaySpace.InnerSingleton;
}
// End Enum EGameplayCueNotify_EffectPlaySpace

// Begin Enum EGameplayCueNotify_LocallyControlledSource
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGameplayCueNotify_LocallyControlledSource;
static UEnum* EGameplayCueNotify_LocallyControlledSource_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGameplayCueNotify_LocallyControlledSource.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGameplayCueNotify_LocallyControlledSource.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GameplayAbilities_EGameplayCueNotify_LocallyControlledSource, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("EGameplayCueNotify_LocallyControlledSource"));
	}
	return Z_Registration_Info_UEnum_EGameplayCueNotify_LocallyControlledSource.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UEnum* StaticEnum<EGameplayCueNotify_LocallyControlledSource>()
{
	return EGameplayCueNotify_LocallyControlledSource_StaticEnum();
}
struct Z_Construct_UEnum_GameplayAbilities_EGameplayCueNotify_LocallyControlledSource_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * EGameplayCueNotify_LocallyControlledSource\n *\n *\x09Specifies what actor to use when determining if the gameplay cue notify is locally controlled.\n */" },
#endif
		{ "InstigatorActor.Comment", "// Use the instigator actor as the source when deciding the locally controlled policy.\n" },
		{ "InstigatorActor.Name", "EGameplayCueNotify_LocallyControlledSource::InstigatorActor" },
		{ "InstigatorActor.ToolTip", "Use the instigator actor as the source when deciding the locally controlled policy." },
		{ "ModuleRelativePath", "Public/GameplayCueNotifyTypes.h" },
		{ "TargetActor.Comment", "// Use the target actor as the source when deciding the locally controlled policy.\n" },
		{ "TargetActor.Name", "EGameplayCueNotify_LocallyControlledSource::TargetActor" },
		{ "TargetActor.ToolTip", "Use the target actor as the source when deciding the locally controlled policy." },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "EGameplayCueNotify_LocallyControlledSource\n\n    Specifies what actor to use when determining if the gameplay cue notify is locally controlled." },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGameplayCueNotify_LocallyControlledSource::InstigatorActor", (int64)EGameplayCueNotify_LocallyControlledSource::InstigatorActor },
		{ "EGameplayCueNotify_LocallyControlledSource::TargetActor", (int64)EGameplayCueNotify_LocallyControlledSource::TargetActor },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GameplayAbilities_EGameplayCueNotify_LocallyControlledSource_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_GameplayAbilities,
	nullptr,
	"EGameplayCueNotify_LocallyControlledSource",
	"EGameplayCueNotify_LocallyControlledSource",
	Z_Construct_UEnum_GameplayAbilities_EGameplayCueNotify_LocallyControlledSource_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayAbilities_EGameplayCueNotify_LocallyControlledSource_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayAbilities_EGameplayCueNotify_LocallyControlledSource_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GameplayAbilities_EGameplayCueNotify_LocallyControlledSource_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_GameplayAbilities_EGameplayCueNotify_LocallyControlledSource()
{
	if (!Z_Registration_Info_UEnum_EGameplayCueNotify_LocallyControlledSource.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGameplayCueNotify_LocallyControlledSource.InnerSingleton, Z_Construct_UEnum_GameplayAbilities_EGameplayCueNotify_LocallyControlledSource_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGameplayCueNotify_LocallyControlledSource.InnerSingleton;
}
// End Enum EGameplayCueNotify_LocallyControlledSource

// Begin Enum EGameplayCueNotify_LocallyControlledPolicy
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGameplayCueNotify_LocallyControlledPolicy;
static UEnum* EGameplayCueNotify_LocallyControlledPolicy_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGameplayCueNotify_LocallyControlledPolicy.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGameplayCueNotify_LocallyControlledPolicy.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GameplayAbilities_EGameplayCueNotify_LocallyControlledPolicy, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("EGameplayCueNotify_LocallyControlledPolicy"));
	}
	return Z_Registration_Info_UEnum_EGameplayCueNotify_LocallyControlledPolicy.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UEnum* StaticEnum<EGameplayCueNotify_LocallyControlledPolicy>()
{
	return EGameplayCueNotify_LocallyControlledPolicy_StaticEnum();
}
struct Z_Construct_UEnum_GameplayAbilities_EGameplayCueNotify_LocallyControlledPolicy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Always.Comment", "// Always spawns regardless of locally controlled.\n" },
		{ "Always.Name", "EGameplayCueNotify_LocallyControlledPolicy::Always" },
		{ "Always.ToolTip", "Always spawns regardless of locally controlled." },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * EGameplayCueNotify_LocallyControlledPolicy\n *\n *\x09Specifies if the gameplay cue notify should spawn based on it being locally controlled.\n */" },
#endif
		{ "LocalOnly.Comment", "// Only spawn if the source actor is locally controlled.\n" },
		{ "LocalOnly.Name", "EGameplayCueNotify_LocallyControlledPolicy::LocalOnly" },
		{ "LocalOnly.ToolTip", "Only spawn if the source actor is locally controlled." },
		{ "ModuleRelativePath", "Public/GameplayCueNotifyTypes.h" },
		{ "NotLocal.Comment", "// Only spawn if the source actor is NOT locally controlled.\n" },
		{ "NotLocal.Name", "EGameplayCueNotify_LocallyControlledPolicy::NotLocal" },
		{ "NotLocal.ToolTip", "Only spawn if the source actor is NOT locally controlled." },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "EGameplayCueNotify_LocallyControlledPolicy\n\n    Specifies if the gameplay cue notify should spawn based on it being locally controlled." },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGameplayCueNotify_LocallyControlledPolicy::Always", (int64)EGameplayCueNotify_LocallyControlledPolicy::Always },
		{ "EGameplayCueNotify_LocallyControlledPolicy::LocalOnly", (int64)EGameplayCueNotify_LocallyControlledPolicy::LocalOnly },
		{ "EGameplayCueNotify_LocallyControlledPolicy::NotLocal", (int64)EGameplayCueNotify_LocallyControlledPolicy::NotLocal },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GameplayAbilities_EGameplayCueNotify_LocallyControlledPolicy_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_GameplayAbilities,
	nullptr,
	"EGameplayCueNotify_LocallyControlledPolicy",
	"EGameplayCueNotify_LocallyControlledPolicy",
	Z_Construct_UEnum_GameplayAbilities_EGameplayCueNotify_LocallyControlledPolicy_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayAbilities_EGameplayCueNotify_LocallyControlledPolicy_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayAbilities_EGameplayCueNotify_LocallyControlledPolicy_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GameplayAbilities_EGameplayCueNotify_LocallyControlledPolicy_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_GameplayAbilities_EGameplayCueNotify_LocallyControlledPolicy()
{
	if (!Z_Registration_Info_UEnum_EGameplayCueNotify_LocallyControlledPolicy.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGameplayCueNotify_LocallyControlledPolicy.InnerSingleton, Z_Construct_UEnum_GameplayAbilities_EGameplayCueNotify_LocallyControlledPolicy_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGameplayCueNotify_LocallyControlledPolicy.InnerSingleton;
}
// End Enum EGameplayCueNotify_LocallyControlledPolicy

// Begin ScriptStruct FGameplayCueNotify_SpawnCondition
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayCueNotify_SpawnCondition;
class UScriptStruct* FGameplayCueNotify_SpawnCondition::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayCueNotify_SpawnCondition.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayCueNotify_SpawnCondition.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayCueNotify_SpawnCondition, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("GameplayCueNotify_SpawnCondition"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayCueNotify_SpawnCondition.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FGameplayCueNotify_SpawnCondition>()
{
	return FGameplayCueNotify_SpawnCondition::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGameplayCueNotify_SpawnCondition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * FGameplayCueNotify_SpawnCondition\n *\n *\x09""Conditions used to determine if the gameplay cue notify should spawn.\n */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayCueNotifyTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "FGameplayCueNotify_SpawnCondition\n\n    Conditions used to determine if the gameplay cue notify should spawn." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocallyControlledSource_MetaData[] = {
		{ "Category", "GameplayCueNotify" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Source actor to use when determining if it is locally controlled.\n" },
#endif
		{ "ModuleRelativePath", "Public/GameplayCueNotifyTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Source actor to use when determining if it is locally controlled." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocallyControlledPolicy_MetaData[] = {
		{ "Category", "GameplayCueNotify" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Locally controlled policy used to determine if the gameplay cue effects should spawn.\n" },
#endif
		{ "ModuleRelativePath", "Public/GameplayCueNotifyTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Locally controlled policy used to determine if the gameplay cue effects should spawn." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChanceToPlay_MetaData[] = {
		{ "Category", "GameplayCueNotify" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Random chance to play the effects.  (1.0 = always play,  0.0 = never play)\n" },
#endif
		{ "ModuleRelativePath", "Public/GameplayCueNotifyTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Random chance to play the effects.  (1.0 = always play,  0.0 = never play)" },
#endif
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AllowedSurfaceTypes_MetaData[] = {
		{ "Category", "GameplayCueNotify" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The gameplay cue effects will only spawn if the surface type is in this list.\n// An empty list means everything is allowed.\n" },
#endif
		{ "ModuleRelativePath", "Public/GameplayCueNotifyTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The gameplay cue effects will only spawn if the surface type is in this list.\nAn empty list means everything is allowed." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RejectedSurfaceTypes_MetaData[] = {
		{ "Category", "GameplayCueNotify" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The gameplay cue effects will only spawn if the surface type is NOT in this list.\n// An empty list means nothing will be rejected.\n" },
#endif
		{ "ModuleRelativePath", "Public/GameplayCueNotifyTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The gameplay cue effects will only spawn if the surface type is NOT in this list.\nAn empty list means nothing will be rejected." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_LocallyControlledSource_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LocallyControlledSource;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LocallyControlledPolicy_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LocallyControlledPolicy;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ChanceToPlay;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AllowedSurfaceTypes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AllowedSurfaceTypes;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RejectedSurfaceTypes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RejectedSurfaceTypes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayCueNotify_SpawnCondition>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGameplayCueNotify_SpawnCondition_Statics::NewProp_LocallyControlledSource_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGameplayCueNotify_SpawnCondition_Statics::NewProp_LocallyControlledSource = { "LocallyControlledSource", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayCueNotify_SpawnCondition, LocallyControlledSource), Z_Construct_UEnum_GameplayAbilities_EGameplayCueNotify_LocallyControlledSource, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocallyControlledSource_MetaData), NewProp_LocallyControlledSource_MetaData) }; // 1600032526
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGameplayCueNotify_SpawnCondition_Statics::NewProp_LocallyControlledPolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGameplayCueNotify_SpawnCondition_Statics::NewProp_LocallyControlledPolicy = { "LocallyControlledPolicy", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayCueNotify_SpawnCondition, LocallyControlledPolicy), Z_Construct_UEnum_GameplayAbilities_EGameplayCueNotify_LocallyControlledPolicy, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocallyControlledPolicy_MetaData), NewProp_LocallyControlledPolicy_MetaData) }; // 2587487789
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGameplayCueNotify_SpawnCondition_Statics::NewProp_ChanceToPlay = { "ChanceToPlay", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayCueNotify_SpawnCondition, ChanceToPlay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChanceToPlay_MetaData), NewProp_ChanceToPlay_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGameplayCueNotify_SpawnCondition_Statics::NewProp_AllowedSurfaceTypes_Inner = { "AllowedSurfaceTypes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_PhysicsCore_EPhysicalSurface, METADATA_PARAMS(0, nullptr) }; // 161619406
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGameplayCueNotify_SpawnCondition_Statics::NewProp_AllowedSurfaceTypes = { "AllowedSurfaceTypes", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayCueNotify_SpawnCondition, AllowedSurfaceTypes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AllowedSurfaceTypes_MetaData), NewProp_AllowedSurfaceTypes_MetaData) }; // 161619406
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGameplayCueNotify_SpawnCondition_Statics::NewProp_RejectedSurfaceTypes_Inner = { "RejectedSurfaceTypes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_PhysicsCore_EPhysicalSurface, METADATA_PARAMS(0, nullptr) }; // 161619406
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGameplayCueNotify_SpawnCondition_Statics::NewProp_RejectedSurfaceTypes = { "RejectedSurfaceTypes", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayCueNotify_SpawnCondition, RejectedSurfaceTypes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RejectedSurfaceTypes_MetaData), NewProp_RejectedSurfaceTypes_MetaData) }; // 161619406
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayCueNotify_SpawnCondition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueNotify_SpawnCondition_Statics::NewProp_LocallyControlledSource_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueNotify_SpawnCondition_Statics::NewProp_LocallyControlledSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueNotify_SpawnCondition_Statics::NewProp_LocallyControlledPolicy_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueNotify_SpawnCondition_Statics::NewProp_LocallyControlledPolicy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueNotify_SpawnCondition_Statics::NewProp_ChanceToPlay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueNotify_SpawnCondition_Statics::NewProp_AllowedSurfaceTypes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueNotify_SpawnCondition_Statics::NewProp_AllowedSurfaceTypes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueNotify_SpawnCondition_Statics::NewProp_RejectedSurfaceTypes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueNotify_SpawnCondition_Statics::NewProp_RejectedSurfaceTypes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCueNotify_SpawnCondition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayCueNotify_SpawnCondition_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
	nullptr,
	&NewStructOps,
	"GameplayCueNotify_SpawnCondition",
	Z_Construct_UScriptStruct_FGameplayCueNotify_SpawnCondition_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCueNotify_SpawnCondition_Statics::PropPointers),
	sizeof(FGameplayCueNotify_SpawnCondition),
	alignof(FGameplayCueNotify_SpawnCondition),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCueNotify_SpawnCondition_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGameplayCueNotify_SpawnCondition_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGameplayCueNotify_SpawnCondition()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayCueNotify_SpawnCondition.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayCueNotify_SpawnCondition.InnerSingleton, Z_Construct_UScriptStruct_FGameplayCueNotify_SpawnCondition_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GameplayCueNotify_SpawnCondition.InnerSingleton;
}
// End ScriptStruct FGameplayCueNotify_SpawnCondition

// Begin Enum EGameplayCueNotify_AttachPolicy
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGameplayCueNotify_AttachPolicy;
static UEnum* EGameplayCueNotify_AttachPolicy_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGameplayCueNotify_AttachPolicy.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGameplayCueNotify_AttachPolicy.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GameplayAbilities_EGameplayCueNotify_AttachPolicy, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("EGameplayCueNotify_AttachPolicy"));
	}
	return Z_Registration_Info_UEnum_EGameplayCueNotify_AttachPolicy.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UEnum* StaticEnum<EGameplayCueNotify_AttachPolicy>()
{
	return EGameplayCueNotify_AttachPolicy_StaticEnum();
}
struct Z_Construct_UEnum_GameplayAbilities_EGameplayCueNotify_AttachPolicy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AttachToTarget.Comment", "// Attach to the target actor if possible.\n" },
		{ "AttachToTarget.Name", "EGameplayCueNotify_AttachPolicy::AttachToTarget" },
		{ "AttachToTarget.ToolTip", "Attach to the target actor if possible." },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * EGameplayCueNotify_AttachPolicy\n *\n *\x09Specifies if the gameplay cue notify should attach to the target actor.\n */" },
#endif
		{ "DoNotAttach.Comment", "// Do not attach to the target actor.  The target may still be used to get location and other information.\n" },
		{ "DoNotAttach.Name", "EGameplayCueNotify_AttachPolicy::DoNotAttach" },
		{ "DoNotAttach.ToolTip", "Do not attach to the target actor.  The target may still be used to get location and other information." },
		{ "ModuleRelativePath", "Public/GameplayCueNotifyTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "EGameplayCueNotify_AttachPolicy\n\n    Specifies if the gameplay cue notify should attach to the target actor." },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGameplayCueNotify_AttachPolicy::DoNotAttach", (int64)EGameplayCueNotify_AttachPolicy::DoNotAttach },
		{ "EGameplayCueNotify_AttachPolicy::AttachToTarget", (int64)EGameplayCueNotify_AttachPolicy::AttachToTarget },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GameplayAbilities_EGameplayCueNotify_AttachPolicy_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_GameplayAbilities,
	nullptr,
	"EGameplayCueNotify_AttachPolicy",
	"EGameplayCueNotify_AttachPolicy",
	Z_Construct_UEnum_GameplayAbilities_EGameplayCueNotify_AttachPolicy_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayAbilities_EGameplayCueNotify_AttachPolicy_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayAbilities_EGameplayCueNotify_AttachPolicy_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GameplayAbilities_EGameplayCueNotify_AttachPolicy_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_GameplayAbilities_EGameplayCueNotify_AttachPolicy()
{
	if (!Z_Registration_Info_UEnum_EGameplayCueNotify_AttachPolicy.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGameplayCueNotify_AttachPolicy.InnerSingleton, Z_Construct_UEnum_GameplayAbilities_EGameplayCueNotify_AttachPolicy_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGameplayCueNotify_AttachPolicy.InnerSingleton;
}
// End Enum EGameplayCueNotify_AttachPolicy

// Begin ScriptStruct FGameplayCueNotify_PlacementInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayCueNotify_PlacementInfo;
class UScriptStruct* FGameplayCueNotify_PlacementInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayCueNotify_PlacementInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayCueNotify_PlacementInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayCueNotify_PlacementInfo, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("GameplayCueNotify_PlacementInfo"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayCueNotify_PlacementInfo.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FGameplayCueNotify_PlacementInfo>()
{
	return FGameplayCueNotify_PlacementInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGameplayCueNotify_PlacementInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * FGameplayCueNotify_PlacementInfo\n *\n *\x09Specifies how the gameplay cue notify will be positioned in the world.\n */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayCueNotifyTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "FGameplayCueNotify_PlacementInfo\n\n    Specifies how the gameplay cue notify will be positioned in the world." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SocketName_MetaData[] = {
		{ "Category", "GameplayCueNotify" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Target's socket (or bone) used for location and rotation.  If \"None\", it uses the target's root.\n" },
#endif
		{ "ModuleRelativePath", "Public/GameplayCueNotifyTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Target's socket (or bone) used for location and rotation.  If \"None\", it uses the target's root." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttachPolicy_MetaData[] = {
		{ "Category", "GameplayCueNotify" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Whether to attach to the target actor or not attach.\n" },
#endif
		{ "ModuleRelativePath", "Public/GameplayCueNotifyTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether to attach to the target actor or not attach." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttachmentRule_MetaData[] = {
		{ "Category", "GameplayCueNotify" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// How the transform is handled when attached.\n" },
#endif
		{ "ModuleRelativePath", "Public/GameplayCueNotifyTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How the transform is handled when attached." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideRotation_MetaData[] = {
		{ "Category", "GameplayCueNotify" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If enabled, will always spawn using rotation override.\n" },
#endif
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/GameplayCueNotifyTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If enabled, will always spawn using rotation override." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideScale_MetaData[] = {
		{ "Category", "GameplayCueNotify" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If enabled, will always spawn using the scale override.\n" },
#endif
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/GameplayCueNotifyTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If enabled, will always spawn using the scale override." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationOverride_MetaData[] = {
		{ "Category", "GameplayCueNotify" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If enabled, will always spawn using rotation override.\n// This will also set the rotation to be absolute, so any changes to the parent's rotation will be ignored after attachment.\n" },
#endif
		{ "EditCondition", "bOverrideRotation" },
		{ "ModuleRelativePath", "Public/GameplayCueNotifyTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If enabled, will always spawn using rotation override.\nThis will also set the rotation to be absolute, so any changes to the parent's rotation will be ignored after attachment." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScaleOverride_MetaData[] = {
		{ "Category", "GameplayCueNotify" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If enabled, will always spawn using scale override.\n// This will also set the scale to be absolute, so any changes to the parent's scale will be ignored after attachment.\n" },
#endif
		{ "EditCondition", "bOverrideScale" },
		{ "ModuleRelativePath", "Public/GameplayCueNotifyTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If enabled, will always spawn using scale override.\nThis will also set the scale to be absolute, so any changes to the parent's scale will be ignored after attachment." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_SocketName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AttachPolicy_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AttachPolicy;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AttachmentRule_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AttachmentRule;
	static void NewProp_bOverrideRotation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideRotation;
	static void NewProp_bOverrideScale_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideScale;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RotationOverride;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ScaleOverride;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayCueNotify_PlacementInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FGameplayCueNotify_PlacementInfo_Statics::NewProp_SocketName = { "SocketName", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayCueNotify_PlacementInfo, SocketName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SocketName_MetaData), NewProp_SocketName_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGameplayCueNotify_PlacementInfo_Statics::NewProp_AttachPolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGameplayCueNotify_PlacementInfo_Statics::NewProp_AttachPolicy = { "AttachPolicy", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayCueNotify_PlacementInfo, AttachPolicy), Z_Construct_UEnum_GameplayAbilities_EGameplayCueNotify_AttachPolicy, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttachPolicy_MetaData), NewProp_AttachPolicy_MetaData) }; // 161263170
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGameplayCueNotify_PlacementInfo_Statics::NewProp_AttachmentRule_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGameplayCueNotify_PlacementInfo_Statics::NewProp_AttachmentRule = { "AttachmentRule", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayCueNotify_PlacementInfo, AttachmentRule), Z_Construct_UEnum_Engine_EAttachmentRule, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttachmentRule_MetaData), NewProp_AttachmentRule_MetaData) }; // 366982490
void Z_Construct_UScriptStruct_FGameplayCueNotify_PlacementInfo_Statics::NewProp_bOverrideRotation_SetBit(void* Obj)
{
	((FGameplayCueNotify_PlacementInfo*)Obj)->bOverrideRotation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameplayCueNotify_PlacementInfo_Statics::NewProp_bOverrideRotation = { "bOverrideRotation", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FGameplayCueNotify_PlacementInfo), &Z_Construct_UScriptStruct_FGameplayCueNotify_PlacementInfo_Statics::NewProp_bOverrideRotation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideRotation_MetaData), NewProp_bOverrideRotation_MetaData) };
void Z_Construct_UScriptStruct_FGameplayCueNotify_PlacementInfo_Statics::NewProp_bOverrideScale_SetBit(void* Obj)
{
	((FGameplayCueNotify_PlacementInfo*)Obj)->bOverrideScale = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameplayCueNotify_PlacementInfo_Statics::NewProp_bOverrideScale = { "bOverrideScale", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FGameplayCueNotify_PlacementInfo), &Z_Construct_UScriptStruct_FGameplayCueNotify_PlacementInfo_Statics::NewProp_bOverrideScale_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideScale_MetaData), NewProp_bOverrideScale_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayCueNotify_PlacementInfo_Statics::NewProp_RotationOverride = { "RotationOverride", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayCueNotify_PlacementInfo, RotationOverride), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationOverride_MetaData), NewProp_RotationOverride_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayCueNotify_PlacementInfo_Statics::NewProp_ScaleOverride = { "ScaleOverride", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayCueNotify_PlacementInfo, ScaleOverride), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScaleOverride_MetaData), NewProp_ScaleOverride_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayCueNotify_PlacementInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueNotify_PlacementInfo_Statics::NewProp_SocketName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueNotify_PlacementInfo_Statics::NewProp_AttachPolicy_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueNotify_PlacementInfo_Statics::NewProp_AttachPolicy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueNotify_PlacementInfo_Statics::NewProp_AttachmentRule_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueNotify_PlacementInfo_Statics::NewProp_AttachmentRule,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueNotify_PlacementInfo_Statics::NewProp_bOverrideRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueNotify_PlacementInfo_Statics::NewProp_bOverrideScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueNotify_PlacementInfo_Statics::NewProp_RotationOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueNotify_PlacementInfo_Statics::NewProp_ScaleOverride,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCueNotify_PlacementInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayCueNotify_PlacementInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
	nullptr,
	&NewStructOps,
	"GameplayCueNotify_PlacementInfo",
	Z_Construct_UScriptStruct_FGameplayCueNotify_PlacementInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCueNotify_PlacementInfo_Statics::PropPointers),
	sizeof(FGameplayCueNotify_PlacementInfo),
	alignof(FGameplayCueNotify_PlacementInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCueNotify_PlacementInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGameplayCueNotify_PlacementInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGameplayCueNotify_PlacementInfo()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayCueNotify_PlacementInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayCueNotify_PlacementInfo.InnerSingleton, Z_Construct_UScriptStruct_FGameplayCueNotify_PlacementInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GameplayCueNotify_PlacementInfo.InnerSingleton;
}
// End ScriptStruct FGameplayCueNotify_PlacementInfo

// Begin ScriptStruct FGameplayCueNotify_SpawnResult
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayCueNotify_SpawnResult;
class UScriptStruct* FGameplayCueNotify_SpawnResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayCueNotify_SpawnResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayCueNotify_SpawnResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayCueNotify_SpawnResult, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("GameplayCueNotify_SpawnResult"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayCueNotify_SpawnResult.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FGameplayCueNotify_SpawnResult>()
{
	return FGameplayCueNotify_SpawnResult::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGameplayCueNotify_SpawnResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * FGameplayCueNotify_SpawnResult\n *\n *\x09Temporary structure used to track results of spawning components.\n */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayCueNotifyTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "FGameplayCueNotify_SpawnResult\n\n    Temporary structure used to track results of spawning components." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FxSystemComponents_MetaData[] = {
		{ "Category", "GameplayCueNotify" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// List of FX components spawned.  There may be null pointers here as it matches the defined order.\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GameplayCueNotifyTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of FX components spawned.  There may be null pointers here as it matches the defined order." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AudioComponents_MetaData[] = {
		{ "Category", "GameplayCueNotify" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// List of audio components spawned.  There may be null pointers here as it matches the defined order.\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GameplayCueNotifyTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of audio components spawned.  There may be null pointers here as it matches the defined order." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraShakes_MetaData[] = {
		{ "Category", "GameplayCueNotify" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// List of camera shakes played.  There will be one camera shake per local player controller if shake is played in world.\n" },
#endif
		{ "ModuleRelativePath", "Public/GameplayCueNotifyTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of camera shakes played.  There will be one camera shake per local player controller if shake is played in world." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraLensEffects_MetaData[] = {
		{ "Category", "GameplayCueNotify" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// List of camera len effects spawned.  There will be one camera lens effect per local player controller if the effect is played in world.\n" },
#endif
		{ "ModuleRelativePath", "Public/GameplayCueNotifyTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of camera len effects spawned.  There will be one camera lens effect per local player controller if the effect is played in world." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ForceFeedbackComponent_MetaData[] = {
		{ "Category", "GameplayCueNotify" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Force feedback component that was spawned.  This is only valid when force feedback is set to play in world.\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GameplayCueNotifyTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Force feedback component that was spawned.  This is only valid when force feedback is set to play in world." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ForceFeedbackTargetPC_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Player controller used to play the force feedback effect.  Used to stop the effect later.\n" },
#endif
		{ "ModuleRelativePath", "Public/GameplayCueNotifyTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Player controller used to play the force feedback effect.  Used to stop the effect later." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DecalComponent_MetaData[] = {
		{ "Category", "GameplayCueNotify" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Spawned decal component.  This may be null.\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GameplayCueNotifyTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Spawned decal component.  This may be null." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FxSystemComponents_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_FxSystemComponents;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AudioComponents_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AudioComponents;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraShakes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CameraShakes;
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_CameraLensEffects_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CameraLensEffects;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ForceFeedbackComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ForceFeedbackTargetPC;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DecalComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayCueNotify_SpawnResult>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGameplayCueNotify_SpawnResult_Statics::NewProp_FxSystemComponents_Inner = { "FxSystemComponents", nullptr, (EPropertyFlags)0x0104000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UFXSystemComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGameplayCueNotify_SpawnResult_Statics::NewProp_FxSystemComponents = { "FxSystemComponents", nullptr, (EPropertyFlags)0x011400800000201c, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayCueNotify_SpawnResult, FxSystemComponents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FxSystemComponents_MetaData), NewProp_FxSystemComponents_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGameplayCueNotify_SpawnResult_Statics::NewProp_AudioComponents_Inner = { "AudioComponents", nullptr, (EPropertyFlags)0x0104000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGameplayCueNotify_SpawnResult_Statics::NewProp_AudioComponents = { "AudioComponents", nullptr, (EPropertyFlags)0x011400800000201c, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayCueNotify_SpawnResult, AudioComponents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AudioComponents_MetaData), NewProp_AudioComponents_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGameplayCueNotify_SpawnResult_Statics::NewProp_CameraShakes_Inner = { "CameraShakes", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UCameraShakeBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGameplayCueNotify_SpawnResult_Statics::NewProp_CameraShakes = { "CameraShakes", nullptr, (EPropertyFlags)0x0114000000002014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayCueNotify_SpawnResult, CameraShakes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraShakes_MetaData), NewProp_CameraShakes_MetaData) };
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UScriptStruct_FGameplayCueNotify_SpawnResult_Statics::NewProp_CameraLensEffects_Inner = { "CameraLensEffects", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UCameraLensEffectInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGameplayCueNotify_SpawnResult_Statics::NewProp_CameraLensEffects = { "CameraLensEffects", nullptr, (EPropertyFlags)0x0014000000002014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayCueNotify_SpawnResult, CameraLensEffects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraLensEffects_MetaData), NewProp_CameraLensEffects_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGameplayCueNotify_SpawnResult_Statics::NewProp_ForceFeedbackComponent = { "ForceFeedbackComponent", nullptr, (EPropertyFlags)0x011400000008201c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayCueNotify_SpawnResult, ForceFeedbackComponent), Z_Construct_UClass_UForceFeedbackComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ForceFeedbackComponent_MetaData), NewProp_ForceFeedbackComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGameplayCueNotify_SpawnResult_Statics::NewProp_ForceFeedbackTargetPC = { "ForceFeedbackTargetPC", nullptr, (EPropertyFlags)0x0114000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayCueNotify_SpawnResult, ForceFeedbackTargetPC), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ForceFeedbackTargetPC_MetaData), NewProp_ForceFeedbackTargetPC_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGameplayCueNotify_SpawnResult_Statics::NewProp_DecalComponent = { "DecalComponent", nullptr, (EPropertyFlags)0x011400000008201c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayCueNotify_SpawnResult, DecalComponent), Z_Construct_UClass_UDecalComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DecalComponent_MetaData), NewProp_DecalComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayCueNotify_SpawnResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueNotify_SpawnResult_Statics::NewProp_FxSystemComponents_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueNotify_SpawnResult_Statics::NewProp_FxSystemComponents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueNotify_SpawnResult_Statics::NewProp_AudioComponents_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueNotify_SpawnResult_Statics::NewProp_AudioComponents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueNotify_SpawnResult_Statics::NewProp_CameraShakes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueNotify_SpawnResult_Statics::NewProp_CameraShakes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueNotify_SpawnResult_Statics::NewProp_CameraLensEffects_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueNotify_SpawnResult_Statics::NewProp_CameraLensEffects,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueNotify_SpawnResult_Statics::NewProp_ForceFeedbackComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueNotify_SpawnResult_Statics::NewProp_ForceFeedbackTargetPC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueNotify_SpawnResult_Statics::NewProp_DecalComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCueNotify_SpawnResult_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayCueNotify_SpawnResult_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
	nullptr,
	&NewStructOps,
	"GameplayCueNotify_SpawnResult",
	Z_Construct_UScriptStruct_FGameplayCueNotify_SpawnResult_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCueNotify_SpawnResult_Statics::PropPointers),
	sizeof(FGameplayCueNotify_SpawnResult),
	alignof(FGameplayCueNotify_SpawnResult),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCueNotify_SpawnResult_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGameplayCueNotify_SpawnResult_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGameplayCueNotify_SpawnResult()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayCueNotify_SpawnResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayCueNotify_SpawnResult.InnerSingleton, Z_Construct_UScriptStruct_FGameplayCueNotify_SpawnResult_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GameplayCueNotify_SpawnResult.InnerSingleton;
}
// End ScriptStruct FGameplayCueNotify_SpawnResult

// Begin ScriptStruct FGameplayCueNotify_ParticleInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayCueNotify_ParticleInfo;
class UScriptStruct* FGameplayCueNotify_ParticleInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayCueNotify_ParticleInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayCueNotify_ParticleInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayCueNotify_ParticleInfo, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("GameplayCueNotify_ParticleInfo"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayCueNotify_ParticleInfo.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FGameplayCueNotify_ParticleInfo>()
{
	return FGameplayCueNotify_ParticleInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGameplayCueNotify_ParticleInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * FGameplayCueNotify_ParticleInfo\n *\n *\x09Properties that specify how to play a particle effect.\n */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayCueNotifyTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "FGameplayCueNotify_ParticleInfo\n\n    Properties that specify how to play a particle effect." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnConditionOverride_MetaData[] = {
		{ "Category", "GameplayCueNotify" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Condition to check before spawning the particle system.\n" },
#endif
		{ "EditCondition", "bOverrideSpawnCondition" },
		{ "ModuleRelativePath", "Public/GameplayCueNotifyTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Condition to check before spawning the particle system." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlacementInfoOverride_MetaData[] = {
		{ "Category", "GameplayCueNotify" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Defines how the particle system will be placed.\n" },
#endif
		{ "EditCondition", "bOverridePlacementInfo" },
		{ "ModuleRelativePath", "Public/GameplayCueNotifyTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Defines how the particle system will be placed." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NiagaraSystem_MetaData[] = {
		{ "Category", "GameplayCueNotify" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Niagara FX system to spawn.\n" },
#endif
		{ "ModuleRelativePath", "Public/GameplayCueNotifyTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Niagara FX system to spawn." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideSpawnCondition_MetaData[] = {
		{ "Category", "GameplayCueNotify" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If enabled, use the spawn condition override and not the default one.\n" },
#endif
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/GameplayCueNotifyTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If enabled, use the spawn condition override and not the default one." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverridePlacementInfo_MetaData[] = {
		{ "Category", "GameplayCueNotify" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If enabled, use the placement info override and not the default one.\n" },
#endif
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/GameplayCueNotifyTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If enabled, use the placement info override and not the default one." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCastShadow_MetaData[] = {
		{ "Category", "GameplayCueNotify" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If enabled, this particle system will cast a shadow.\n" },
#endif
		{ "ModuleRelativePath", "Public/GameplayCueNotifyTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If enabled, this particle system will cast a shadow." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnConditionOverride;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlacementInfoOverride;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NiagaraSystem;
	static void NewProp_bOverrideSpawnCondition_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideSpawnCondition;
	static void NewProp_bOverridePlacementInfo_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverridePlacementInfo;
	static void NewProp_bCastShadow_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCastShadow;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayCueNotify_ParticleInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayCueNotify_ParticleInfo_Statics::NewProp_SpawnConditionOverride = { "SpawnConditionOverride", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayCueNotify_ParticleInfo, SpawnConditionOverride), Z_Construct_UScriptStruct_FGameplayCueNotify_SpawnCondition, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnConditionOverride_MetaData), NewProp_SpawnConditionOverride_MetaData) }; // 3352541212
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayCueNotify_ParticleInfo_Statics::NewProp_PlacementInfoOverride = { "PlacementInfoOverride", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayCueNotify_ParticleInfo, PlacementInfoOverride), Z_Construct_UScriptStruct_FGameplayCueNotify_PlacementInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlacementInfoOverride_MetaData), NewProp_PlacementInfoOverride_MetaData) }; // 2555742544
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGameplayCueNotify_ParticleInfo_Statics::NewProp_NiagaraSystem = { "NiagaraSystem", nullptr, (EPropertyFlags)0x0114000000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayCueNotify_ParticleInfo, NiagaraSystem), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NiagaraSystem_MetaData), NewProp_NiagaraSystem_MetaData) };
void Z_Construct_UScriptStruct_FGameplayCueNotify_ParticleInfo_Statics::NewProp_bOverrideSpawnCondition_SetBit(void* Obj)
{
	((FGameplayCueNotify_ParticleInfo*)Obj)->bOverrideSpawnCondition = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameplayCueNotify_ParticleInfo_Statics::NewProp_bOverrideSpawnCondition = { "bOverrideSpawnCondition", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FGameplayCueNotify_ParticleInfo), &Z_Construct_UScriptStruct_FGameplayCueNotify_ParticleInfo_Statics::NewProp_bOverrideSpawnCondition_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideSpawnCondition_MetaData), NewProp_bOverrideSpawnCondition_MetaData) };
void Z_Construct_UScriptStruct_FGameplayCueNotify_ParticleInfo_Statics::NewProp_bOverridePlacementInfo_SetBit(void* Obj)
{
	((FGameplayCueNotify_ParticleInfo*)Obj)->bOverridePlacementInfo = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameplayCueNotify_ParticleInfo_Statics::NewProp_bOverridePlacementInfo = { "bOverridePlacementInfo", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FGameplayCueNotify_ParticleInfo), &Z_Construct_UScriptStruct_FGameplayCueNotify_ParticleInfo_Statics::NewProp_bOverridePlacementInfo_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverridePlacementInfo_MetaData), NewProp_bOverridePlacementInfo_MetaData) };
void Z_Construct_UScriptStruct_FGameplayCueNotify_ParticleInfo_Statics::NewProp_bCastShadow_SetBit(void* Obj)
{
	((FGameplayCueNotify_ParticleInfo*)Obj)->bCastShadow = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameplayCueNotify_ParticleInfo_Statics::NewProp_bCastShadow = { "bCastShadow", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FGameplayCueNotify_ParticleInfo), &Z_Construct_UScriptStruct_FGameplayCueNotify_ParticleInfo_Statics::NewProp_bCastShadow_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCastShadow_MetaData), NewProp_bCastShadow_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayCueNotify_ParticleInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueNotify_ParticleInfo_Statics::NewProp_SpawnConditionOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueNotify_ParticleInfo_Statics::NewProp_PlacementInfoOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueNotify_ParticleInfo_Statics::NewProp_NiagaraSystem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueNotify_ParticleInfo_Statics::NewProp_bOverrideSpawnCondition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueNotify_ParticleInfo_Statics::NewProp_bOverridePlacementInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueNotify_ParticleInfo_Statics::NewProp_bCastShadow,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCueNotify_ParticleInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayCueNotify_ParticleInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
	nullptr,
	&NewStructOps,
	"GameplayCueNotify_ParticleInfo",
	Z_Construct_UScriptStruct_FGameplayCueNotify_ParticleInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCueNotify_ParticleInfo_Statics::PropPointers),
	sizeof(FGameplayCueNotify_ParticleInfo),
	alignof(FGameplayCueNotify_ParticleInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCueNotify_ParticleInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGameplayCueNotify_ParticleInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGameplayCueNotify_ParticleInfo()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayCueNotify_ParticleInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayCueNotify_ParticleInfo.InnerSingleton, Z_Construct_UScriptStruct_FGameplayCueNotify_ParticleInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GameplayCueNotify_ParticleInfo.InnerSingleton;
}
// End ScriptStruct FGameplayCueNotify_ParticleInfo

// Begin ScriptStruct FGameplayCueNotify_SoundParameterInterfaceInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayCueNotify_SoundParameterInterfaceInfo;
class UScriptStruct* FGameplayCueNotify_SoundParameterInterfaceInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayCueNotify_SoundParameterInterfaceInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayCueNotify_SoundParameterInterfaceInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayCueNotify_SoundParameterInterfaceInfo, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("GameplayCueNotify_SoundParameterInterfaceInfo"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayCueNotify_SoundParameterInterfaceInfo.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FGameplayCueNotify_SoundParameterInterfaceInfo>()
{
	return FGameplayCueNotify_SoundParameterInterfaceInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGameplayCueNotify_SoundParameterInterfaceInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * FGameplayCueNotify_SoundParameterInterfaceInfo\n *\n *\x09Properties that specify how to interface with the ISoundParameterControllerInterface\n */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayCueNotifyTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "FGameplayCueNotify_SoundParameterInterfaceInfo\n\n    Properties that specify how to interface with the ISoundParameterControllerInterface" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StopTriggerName_MetaData[] = {
		{ "Category", "GameplayCueNotify" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The name of the stop trigger set via the parameter interface\n" },
#endif
		{ "ModuleRelativePath", "Public/GameplayCueNotifyTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The name of the stop trigger set via the parameter interface" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_StopTriggerName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayCueNotify_SoundParameterInterfaceInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FGameplayCueNotify_SoundParameterInterfaceInfo_Statics::NewProp_StopTriggerName = { "StopTriggerName", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayCueNotify_SoundParameterInterfaceInfo, StopTriggerName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StopTriggerName_MetaData), NewProp_StopTriggerName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayCueNotify_SoundParameterInterfaceInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueNotify_SoundParameterInterfaceInfo_Statics::NewProp_StopTriggerName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCueNotify_SoundParameterInterfaceInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayCueNotify_SoundParameterInterfaceInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
	nullptr,
	&NewStructOps,
	"GameplayCueNotify_SoundParameterInterfaceInfo",
	Z_Construct_UScriptStruct_FGameplayCueNotify_SoundParameterInterfaceInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCueNotify_SoundParameterInterfaceInfo_Statics::PropPointers),
	sizeof(FGameplayCueNotify_SoundParameterInterfaceInfo),
	alignof(FGameplayCueNotify_SoundParameterInterfaceInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCueNotify_SoundParameterInterfaceInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGameplayCueNotify_SoundParameterInterfaceInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGameplayCueNotify_SoundParameterInterfaceInfo()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayCueNotify_SoundParameterInterfaceInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayCueNotify_SoundParameterInterfaceInfo.InnerSingleton, Z_Construct_UScriptStruct_FGameplayCueNotify_SoundParameterInterfaceInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GameplayCueNotify_SoundParameterInterfaceInfo.InnerSingleton;
}
// End ScriptStruct FGameplayCueNotify_SoundParameterInterfaceInfo

// Begin ScriptStruct FGameplayCueNotify_SoundInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayCueNotify_SoundInfo;
class UScriptStruct* FGameplayCueNotify_SoundInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayCueNotify_SoundInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayCueNotify_SoundInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayCueNotify_SoundInfo, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("GameplayCueNotify_SoundInfo"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayCueNotify_SoundInfo.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FGameplayCueNotify_SoundInfo>()
{
	return FGameplayCueNotify_SoundInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGameplayCueNotify_SoundInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * FGameplayCueNotify_SoundInfo\n *\n *\x09Properties that specify how to play a sound effect.\n */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayCueNotifyTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "FGameplayCueNotify_SoundInfo\n\n    Properties that specify how to play a sound effect." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnConditionOverride_MetaData[] = {
		{ "Category", "GameplayCueNotify" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Condition to check before playing the sound.\n" },
#endif
		{ "EditCondition", "bOverrideSpawnCondition" },
		{ "ModuleRelativePath", "Public/GameplayCueNotifyTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Condition to check before playing the sound." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlacementInfoOverride_MetaData[] = {
		{ "Category", "GameplayCueNotify" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Defines how the sound will be placed.\n" },
#endif
		{ "EditCondition", "bOverridePlacementInfo" },
		{ "ModuleRelativePath", "Public/GameplayCueNotifyTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Defines how the sound will be placed." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Sound_MetaData[] = {
		{ "Category", "GameplayCueNotify" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Sound to play.\n" },
#endif
		{ "ModuleRelativePath", "Public/GameplayCueNotifyTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sound to play." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoundCue_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "5.0 - SoundCue is deprecated. Instead use the Sound property. The type is USoundBase not USoundCue." },
		{ "ModuleRelativePath", "Public/GameplayCueNotifyTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoopingFadeOutDuration_MetaData[] = {
		{ "Category", "GameplayCueNotify" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// How long it should take to fade out.  Only used on looping gameplay cues.\n" },
#endif
		{ "ModuleRelativePath", "Public/GameplayCueNotifyTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How long it should take to fade out.  Only used on looping gameplay cues." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoopingFadeVolumeLevel_MetaData[] = {
		{ "Category", "GameplayCueNotify" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The volume level you want the sound to fade out to over the 'Looping Fade Out Duration' before stopping.\n// This value is irrelevant if the 'Looping Fade Out Duration' is zero.\n// NOTE: If the fade out duration is positive and this value is not lower than the volume the sound is playing at, the sound will never stop!\n" },
#endif
		{ "ModuleRelativePath", "Public/GameplayCueNotifyTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The volume level you want the sound to fade out to over the 'Looping Fade Out Duration' before stopping.\nThis value is irrelevant if the 'Looping Fade Out Duration' is zero.\nNOTE: If the fade out duration is positive and this value is not lower than the volume the sound is playing at, the sound will never stop!" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoundParameterInterfaceInfo_MetaData[] = {
		{ "Category", "GameplayCueNotify" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Defines how to interface with the sound.\n" },
#endif
		{ "EditCondition", "bUseSoundParameterInterface" },
		{ "ModuleRelativePath", "Public/GameplayCueNotifyTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Defines how to interface with the sound." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideSpawnCondition_MetaData[] = {
		{ "Category", "GameplayCueNotify" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If enabled, use the spawn condition override and not the default one.\n" },
#endif
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/GameplayCueNotifyTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If enabled, use the spawn condition override and not the default one." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverridePlacementInfo_MetaData[] = {
		{ "Category", "GameplayCueNotify" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If enabled, use the placement info override and not the default one.\n" },
#endif
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/GameplayCueNotifyTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If enabled, use the placement info override and not the default one." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseSoundParameterInterface_MetaData[] = {
		{ "Category", "GameplayCueNotify" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If enabled, use the placement info override and not the default one.\n" },
#endif
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/GameplayCueNotifyTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If enabled, use the placement info override and not the default one." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnConditionOverride;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlacementInfoOverride;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Sound;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SoundCue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LoopingFadeOutDuration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LoopingFadeVolumeLevel;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SoundParameterInterfaceInfo;
	static void NewProp_bOverrideSpawnCondition_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideSpawnCondition;
	static void NewProp_bOverridePlacementInfo_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverridePlacementInfo;
	static void NewProp_bUseSoundParameterInterface_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseSoundParameterInterface;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayCueNotify_SoundInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayCueNotify_SoundInfo_Statics::NewProp_SpawnConditionOverride = { "SpawnConditionOverride", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayCueNotify_SoundInfo, SpawnConditionOverride), Z_Construct_UScriptStruct_FGameplayCueNotify_SpawnCondition, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnConditionOverride_MetaData), NewProp_SpawnConditionOverride_MetaData) }; // 3352541212
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayCueNotify_SoundInfo_Statics::NewProp_PlacementInfoOverride = { "PlacementInfoOverride", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayCueNotify_SoundInfo, PlacementInfoOverride), Z_Construct_UScriptStruct_FGameplayCueNotify_PlacementInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlacementInfoOverride_MetaData), NewProp_PlacementInfoOverride_MetaData) }; // 2555742544
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGameplayCueNotify_SoundInfo_Statics::NewProp_Sound = { "Sound", nullptr, (EPropertyFlags)0x0114000000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayCueNotify_SoundInfo, Sound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Sound_MetaData), NewProp_Sound_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGameplayCueNotify_SoundInfo_Statics::NewProp_SoundCue = { "SoundCue", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayCueNotify_SoundInfo, SoundCue), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoundCue_MetaData), NewProp_SoundCue_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGameplayCueNotify_SoundInfo_Statics::NewProp_LoopingFadeOutDuration = { "LoopingFadeOutDuration", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayCueNotify_SoundInfo, LoopingFadeOutDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoopingFadeOutDuration_MetaData), NewProp_LoopingFadeOutDuration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGameplayCueNotify_SoundInfo_Statics::NewProp_LoopingFadeVolumeLevel = { "LoopingFadeVolumeLevel", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayCueNotify_SoundInfo, LoopingFadeVolumeLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoopingFadeVolumeLevel_MetaData), NewProp_LoopingFadeVolumeLevel_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayCueNotify_SoundInfo_Statics::NewProp_SoundParameterInterfaceInfo = { "SoundParameterInterfaceInfo", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayCueNotify_SoundInfo, SoundParameterInterfaceInfo), Z_Construct_UScriptStruct_FGameplayCueNotify_SoundParameterInterfaceInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoundParameterInterfaceInfo_MetaData), NewProp_SoundParameterInterfaceInfo_MetaData) }; // 2289423333
void Z_Construct_UScriptStruct_FGameplayCueNotify_SoundInfo_Statics::NewProp_bOverrideSpawnCondition_SetBit(void* Obj)
{
	((FGameplayCueNotify_SoundInfo*)Obj)->bOverrideSpawnCondition = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameplayCueNotify_SoundInfo_Statics::NewProp_bOverrideSpawnCondition = { "bOverrideSpawnCondition", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FGameplayCueNotify_SoundInfo), &Z_Construct_UScriptStruct_FGameplayCueNotify_SoundInfo_Statics::NewProp_bOverrideSpawnCondition_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideSpawnCondition_MetaData), NewProp_bOverrideSpawnCondition_MetaData) };
void Z_Construct_UScriptStruct_FGameplayCueNotify_SoundInfo_Statics::NewProp_bOverridePlacementInfo_SetBit(void* Obj)
{
	((FGameplayCueNotify_SoundInfo*)Obj)->bOverridePlacementInfo = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameplayCueNotify_SoundInfo_Statics::NewProp_bOverridePlacementInfo = { "bOverridePlacementInfo", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FGameplayCueNotify_SoundInfo), &Z_Construct_UScriptStruct_FGameplayCueNotify_SoundInfo_Statics::NewProp_bOverridePlacementInfo_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverridePlacementInfo_MetaData), NewProp_bOverridePlacementInfo_MetaData) };
void Z_Construct_UScriptStruct_FGameplayCueNotify_SoundInfo_Statics::NewProp_bUseSoundParameterInterface_SetBit(void* Obj)
{
	((FGameplayCueNotify_SoundInfo*)Obj)->bUseSoundParameterInterface = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameplayCueNotify_SoundInfo_Statics::NewProp_bUseSoundParameterInterface = { "bUseSoundParameterInterface", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FGameplayCueNotify_SoundInfo), &Z_Construct_UScriptStruct_FGameplayCueNotify_SoundInfo_Statics::NewProp_bUseSoundParameterInterface_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseSoundParameterInterface_MetaData), NewProp_bUseSoundParameterInterface_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayCueNotify_SoundInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueNotify_SoundInfo_Statics::NewProp_SpawnConditionOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueNotify_SoundInfo_Statics::NewProp_PlacementInfoOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueNotify_SoundInfo_Statics::NewProp_Sound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueNotify_SoundInfo_Statics::NewProp_SoundCue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueNotify_SoundInfo_Statics::NewProp_LoopingFadeOutDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueNotify_SoundInfo_Statics::NewProp_LoopingFadeVolumeLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueNotify_SoundInfo_Statics::NewProp_SoundParameterInterfaceInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueNotify_SoundInfo_Statics::NewProp_bOverrideSpawnCondition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueNotify_SoundInfo_Statics::NewProp_bOverridePlacementInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueNotify_SoundInfo_Statics::NewProp_bUseSoundParameterInterface,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCueNotify_SoundInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayCueNotify_SoundInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
	nullptr,
	&NewStructOps,
	"GameplayCueNotify_SoundInfo",
	Z_Construct_UScriptStruct_FGameplayCueNotify_SoundInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCueNotify_SoundInfo_Statics::PropPointers),
	sizeof(FGameplayCueNotify_SoundInfo),
	alignof(FGameplayCueNotify_SoundInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCueNotify_SoundInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGameplayCueNotify_SoundInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGameplayCueNotify_SoundInfo()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayCueNotify_SoundInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayCueNotify_SoundInfo.InnerSingleton, Z_Construct_UScriptStruct_FGameplayCueNotify_SoundInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GameplayCueNotify_SoundInfo.InnerSingleton;
}
// End ScriptStruct FGameplayCueNotify_SoundInfo

// Begin ScriptStruct FGameplayCueNotify_CameraShakeInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayCueNotify_CameraShakeInfo;
class UScriptStruct* FGameplayCueNotify_CameraShakeInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayCueNotify_CameraShakeInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayCueNotify_CameraShakeInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayCueNotify_CameraShakeInfo, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("GameplayCueNotify_CameraShakeInfo"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayCueNotify_CameraShakeInfo.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FGameplayCueNotify_CameraShakeInfo>()
{
	return FGameplayCueNotify_CameraShakeInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGameplayCueNotify_CameraShakeInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * FGameplayCueNotify_CameraShakeInfo\n *\n *\x09Properties that specify how to play a camera shake.\n */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayCueNotifyTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "FGameplayCueNotify_CameraShakeInfo\n\n    Properties that specify how to play a camera shake." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnConditionOverride_MetaData[] = {
		{ "Category", "GameplayCueNotify" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Condition to check before playing the camera shake.\n" },
#endif
		{ "EditCondition", "bOverrideSpawnCondition" },
		{ "ModuleRelativePath", "Public/GameplayCueNotifyTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Condition to check before playing the camera shake." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlacementInfoOverride_MetaData[] = {
		{ "Category", "GameplayCueNotify" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Defines how the camera shake will be placed.\n" },
#endif
		{ "EditCondition", "bOverridePlacementInfo" },
		{ "ModuleRelativePath", "Public/GameplayCueNotifyTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Defines how the camera shake will be placed." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraShake_MetaData[] = {
		{ "Category", "GameplayCueNotify" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Camera shake to play.\n" },
#endif
		{ "ModuleRelativePath", "Public/GameplayCueNotifyTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera shake to play." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShakeScale_MetaData[] = {
		{ "Category", "GameplayCueNotify" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Scale applied to the camera shake.\n" },
#endif
		{ "ModuleRelativePath", "Public/GameplayCueNotifyTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Scale applied to the camera shake." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlaySpace_MetaData[] = {
		{ "Category", "GameplayCueNotify" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// What coordinate space to play the camera shake relative to.\n" },
#endif
		{ "ModuleRelativePath", "Public/GameplayCueNotifyTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "What coordinate space to play the camera shake relative to." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideSpawnCondition_MetaData[] = {
		{ "Category", "GameplayCueNotify" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If enabled, use the spawn condition override and not the default one.\n" },
#endif
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/GameplayCueNotifyTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If enabled, use the spawn condition override and not the default one." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverridePlacementInfo_MetaData[] = {
		{ "Category", "GameplayCueNotify" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If enabled, use the placement info override and not the default one.\n" },
#endif
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/GameplayCueNotifyTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If enabled, use the placement info override and not the default one." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPlayInWorld_MetaData[] = {
		{ "Category", "GameplayCueNotify" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If enabled, the camera shake will be played in the world and affect all players.\n" },
#endif
		{ "ModuleRelativePath", "Public/GameplayCueNotifyTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If enabled, the camera shake will be played in the world and affect all players." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldInnerRadius_MetaData[] = {
		{ "Category", "GameplayCueNotify" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Players inside this radius get the full intensity camera shake.\n" },
#endif
		{ "EditCondition", "bPlayInWorld" },
		{ "ModuleRelativePath", "Public/GameplayCueNotifyTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Players inside this radius get the full intensity camera shake." },
#endif
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldOuterRadius_MetaData[] = {
		{ "Category", "GameplayCueNotify" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Players outside this radius do not get the camera shake applied.\n" },
#endif
		{ "EditCondition", "bPlayInWorld" },
		{ "ModuleRelativePath", "Public/GameplayCueNotifyTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Players outside this radius do not get the camera shake applied." },
#endif
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldFalloffExponent_MetaData[] = {
		{ "Category", "GameplayCueNotify" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Exponent that describes the shake intensity falloff curve between the inner and outer radii.  (1.0 is linear)\n" },
#endif
		{ "EditCondition", "bPlayInWorld" },
		{ "ModuleRelativePath", "Public/GameplayCueNotifyTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Exponent that describes the shake intensity falloff curve between the inner and outer radii.  (1.0 is linear)" },
#endif
		{ "UIMin", "0.0" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnConditionOverride;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlacementInfoOverride;
	static const UECodeGen_Private::FClassPropertyParams NewProp_CameraShake;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ShakeScale;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PlaySpace_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PlaySpace;
	static void NewProp_bOverrideSpawnCondition_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideSpawnCondition;
	static void NewProp_bOverridePlacementInfo_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverridePlacementInfo;
	static void NewProp_bPlayInWorld_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPlayInWorld;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WorldInnerRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WorldOuterRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WorldFalloffExponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayCueNotify_CameraShakeInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayCueNotify_CameraShakeInfo_Statics::NewProp_SpawnConditionOverride = { "SpawnConditionOverride", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayCueNotify_CameraShakeInfo, SpawnConditionOverride), Z_Construct_UScriptStruct_FGameplayCueNotify_SpawnCondition, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnConditionOverride_MetaData), NewProp_SpawnConditionOverride_MetaData) }; // 3352541212
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayCueNotify_CameraShakeInfo_Statics::NewProp_PlacementInfoOverride = { "PlacementInfoOverride", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayCueNotify_CameraShakeInfo, PlacementInfoOverride), Z_Construct_UScriptStruct_FGameplayCueNotify_PlacementInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlacementInfoOverride_MetaData), NewProp_PlacementInfoOverride_MetaData) }; // 2555742544
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FGameplayCueNotify_CameraShakeInfo_Statics::NewProp_CameraShake = { "CameraShake", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayCueNotify_CameraShakeInfo, CameraShake), Z_Construct_UClass_UClass, Z_Construct_UClass_UCameraShakeBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraShake_MetaData), NewProp_CameraShake_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGameplayCueNotify_CameraShakeInfo_Statics::NewProp_ShakeScale = { "ShakeScale", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayCueNotify_CameraShakeInfo, ShakeScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShakeScale_MetaData), NewProp_ShakeScale_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGameplayCueNotify_CameraShakeInfo_Statics::NewProp_PlaySpace_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGameplayCueNotify_CameraShakeInfo_Statics::NewProp_PlaySpace = { "PlaySpace", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayCueNotify_CameraShakeInfo, PlaySpace), Z_Construct_UEnum_GameplayAbilities_EGameplayCueNotify_EffectPlaySpace, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlaySpace_MetaData), NewProp_PlaySpace_MetaData) }; // 3785554324
void Z_Construct_UScriptStruct_FGameplayCueNotify_CameraShakeInfo_Statics::NewProp_bOverrideSpawnCondition_SetBit(void* Obj)
{
	((FGameplayCueNotify_CameraShakeInfo*)Obj)->bOverrideSpawnCondition = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameplayCueNotify_CameraShakeInfo_Statics::NewProp_bOverrideSpawnCondition = { "bOverrideSpawnCondition", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FGameplayCueNotify_CameraShakeInfo), &Z_Construct_UScriptStruct_FGameplayCueNotify_CameraShakeInfo_Statics::NewProp_bOverrideSpawnCondition_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideSpawnCondition_MetaData), NewProp_bOverrideSpawnCondition_MetaData) };
void Z_Construct_UScriptStruct_FGameplayCueNotify_CameraShakeInfo_Statics::NewProp_bOverridePlacementInfo_SetBit(void* Obj)
{
	((FGameplayCueNotify_CameraShakeInfo*)Obj)->bOverridePlacementInfo = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameplayCueNotify_CameraShakeInfo_Statics::NewProp_bOverridePlacementInfo = { "bOverridePlacementInfo", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FGameplayCueNotify_CameraShakeInfo), &Z_Construct_UScriptStruct_FGameplayCueNotify_CameraShakeInfo_Statics::NewProp_bOverridePlacementInfo_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverridePlacementInfo_MetaData), NewProp_bOverridePlacementInfo_MetaData) };
void Z_Construct_UScriptStruct_FGameplayCueNotify_CameraShakeInfo_Statics::NewProp_bPlayInWorld_SetBit(void* Obj)
{
	((FGameplayCueNotify_CameraShakeInfo*)Obj)->bPlayInWorld = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameplayCueNotify_CameraShakeInfo_Statics::NewProp_bPlayInWorld = { "bPlayInWorld", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FGameplayCueNotify_CameraShakeInfo), &Z_Construct_UScriptStruct_FGameplayCueNotify_CameraShakeInfo_Statics::NewProp_bPlayInWorld_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPlayInWorld_MetaData), NewProp_bPlayInWorld_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGameplayCueNotify_CameraShakeInfo_Statics::NewProp_WorldInnerRadius = { "WorldInnerRadius", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayCueNotify_CameraShakeInfo, WorldInnerRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldInnerRadius_MetaData), NewProp_WorldInnerRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGameplayCueNotify_CameraShakeInfo_Statics::NewProp_WorldOuterRadius = { "WorldOuterRadius", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayCueNotify_CameraShakeInfo, WorldOuterRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldOuterRadius_MetaData), NewProp_WorldOuterRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGameplayCueNotify_CameraShakeInfo_Statics::NewProp_WorldFalloffExponent = { "WorldFalloffExponent", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayCueNotify_CameraShakeInfo, WorldFalloffExponent), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldFalloffExponent_MetaData), NewProp_WorldFalloffExponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayCueNotify_CameraShakeInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueNotify_CameraShakeInfo_Statics::NewProp_SpawnConditionOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueNotify_CameraShakeInfo_Statics::NewProp_PlacementInfoOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueNotify_CameraShakeInfo_Statics::NewProp_CameraShake,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueNotify_CameraShakeInfo_Statics::NewProp_ShakeScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueNotify_CameraShakeInfo_Statics::NewProp_PlaySpace_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueNotify_CameraShakeInfo_Statics::NewProp_PlaySpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueNotify_CameraShakeInfo_Statics::NewProp_bOverrideSpawnCondition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueNotify_CameraShakeInfo_Statics::NewProp_bOverridePlacementInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueNotify_CameraShakeInfo_Statics::NewProp_bPlayInWorld,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueNotify_CameraShakeInfo_Statics::NewProp_WorldInnerRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueNotify_CameraShakeInfo_Statics::NewProp_WorldOuterRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueNotify_CameraShakeInfo_Statics::NewProp_WorldFalloffExponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCueNotify_CameraShakeInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayCueNotify_CameraShakeInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
	nullptr,
	&NewStructOps,
	"GameplayCueNotify_CameraShakeInfo",
	Z_Construct_UScriptStruct_FGameplayCueNotify_CameraShakeInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCueNotify_CameraShakeInfo_Statics::PropPointers),
	sizeof(FGameplayCueNotify_CameraShakeInfo),
	alignof(FGameplayCueNotify_CameraShakeInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCueNotify_CameraShakeInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGameplayCueNotify_CameraShakeInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGameplayCueNotify_CameraShakeInfo()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayCueNotify_CameraShakeInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayCueNotify_CameraShakeInfo.InnerSingleton, Z_Construct_UScriptStruct_FGameplayCueNotify_CameraShakeInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GameplayCueNotify_CameraShakeInfo.InnerSingleton;
}
// End ScriptStruct FGameplayCueNotify_CameraShakeInfo

// Begin ScriptStruct FGameplayCueNotify_CameraLensEffectInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayCueNotify_CameraLensEffectInfo;
class UScriptStruct* FGameplayCueNotify_CameraLensEffectInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayCueNotify_CameraLensEffectInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayCueNotify_CameraLensEffectInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayCueNotify_CameraLensEffectInfo, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("GameplayCueNotify_CameraLensEffectInfo"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayCueNotify_CameraLensEffectInfo.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FGameplayCueNotify_CameraLensEffectInfo>()
{
	return FGameplayCueNotify_CameraLensEffectInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGameplayCueNotify_CameraLensEffectInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * FGameplayCueNotify_CameraLensEffectInfo\n *\n *\x09Properties that specify how to play a camera lens effect.\n */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayCueNotifyTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "FGameplayCueNotify_CameraLensEffectInfo\n\n    Properties that specify how to play a camera lens effect." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnConditionOverride_MetaData[] = {
		{ "Category", "GameplayCueNotify" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Condition to check before playing the camera lens effect.\n" },
#endif
		{ "EditCondition", "bOverrideSpawnCondition" },
		{ "ModuleRelativePath", "Public/GameplayCueNotifyTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Condition to check before playing the camera lens effect." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlacementInfoOverride_MetaData[] = {
		{ "Category", "GameplayCueNotify" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Defines how the camera lens effect will be placed.\n" },
#endif
		{ "EditCondition", "bOverridePlacementInfo" },
		{ "ModuleRelativePath", "Public/GameplayCueNotifyTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Defines how the camera lens effect will be placed." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraLensEffect_MetaData[] = {
		{ "Category", "GameplayCueNotify" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Camera lens effect to play.\n" },
#endif
		{ "ModuleRelativePath", "Public/GameplayCueNotifyTypes.h" },
		{ "MustImplement", "/Script/Engine.CameraLensEffectInterface" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera lens effect to play." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideSpawnCondition_MetaData[] = {
		{ "Category", "GameplayCueNotify" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If enabled, use the spawn condition override and not the default one.\n" },
#endif
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/GameplayCueNotifyTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If enabled, use the spawn condition override and not the default one." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverridePlacementInfo_MetaData[] = {
		{ "Category", "GameplayCueNotify" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If enabled, use the placement info override and not the default one.\n" },
#endif
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/GameplayCueNotifyTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If enabled, use the placement info override and not the default one." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPlayInWorld_MetaData[] = {
		{ "Category", "GameplayCueNotify" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If enabled, the camera lens effect will be played in the world and affect all players.\n" },
#endif
		{ "ModuleRelativePath", "Public/GameplayCueNotifyTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If enabled, the camera lens effect will be played in the world and affect all players." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldInnerRadius_MetaData[] = {
		{ "Category", "GameplayCueNotify" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Players inside this radius get the full intensity camera lens effect.\n" },
#endif
		{ "EditCondition", "bPlayInWorld" },
		{ "ModuleRelativePath", "Public/GameplayCueNotifyTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Players inside this radius get the full intensity camera lens effect." },
#endif
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldOuterRadius_MetaData[] = {
		{ "Category", "GameplayCueNotify" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Players outside this radius do not get the camera lens effect applied.\n" },
#endif
		{ "EditCondition", "bPlayInWorld" },
		{ "ModuleRelativePath", "Public/GameplayCueNotifyTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Players outside this radius do not get the camera lens effect applied." },
#endif
		{ "UIMin", "0.0" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnConditionOverride;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlacementInfoOverride;
	static const UECodeGen_Private::FClassPropertyParams NewProp_CameraLensEffect;
	static void NewProp_bOverrideSpawnCondition_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideSpawnCondition;
	static void NewProp_bOverridePlacementInfo_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverridePlacementInfo;
	static void NewProp_bPlayInWorld_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPlayInWorld;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WorldInnerRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WorldOuterRadius;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayCueNotify_CameraLensEffectInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayCueNotify_CameraLensEffectInfo_Statics::NewProp_SpawnConditionOverride = { "SpawnConditionOverride", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayCueNotify_CameraLensEffectInfo, SpawnConditionOverride), Z_Construct_UScriptStruct_FGameplayCueNotify_SpawnCondition, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnConditionOverride_MetaData), NewProp_SpawnConditionOverride_MetaData) }; // 3352541212
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayCueNotify_CameraLensEffectInfo_Statics::NewProp_PlacementInfoOverride = { "PlacementInfoOverride", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayCueNotify_CameraLensEffectInfo, PlacementInfoOverride), Z_Construct_UScriptStruct_FGameplayCueNotify_PlacementInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlacementInfoOverride_MetaData), NewProp_PlacementInfoOverride_MetaData) }; // 2555742544
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FGameplayCueNotify_CameraLensEffectInfo_Statics::NewProp_CameraLensEffect = { "CameraLensEffect", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayCueNotify_CameraLensEffectInfo, CameraLensEffect), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraLensEffect_MetaData), NewProp_CameraLensEffect_MetaData) };
void Z_Construct_UScriptStruct_FGameplayCueNotify_CameraLensEffectInfo_Statics::NewProp_bOverrideSpawnCondition_SetBit(void* Obj)
{
	((FGameplayCueNotify_CameraLensEffectInfo*)Obj)->bOverrideSpawnCondition = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameplayCueNotify_CameraLensEffectInfo_Statics::NewProp_bOverrideSpawnCondition = { "bOverrideSpawnCondition", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FGameplayCueNotify_CameraLensEffectInfo), &Z_Construct_UScriptStruct_FGameplayCueNotify_CameraLensEffectInfo_Statics::NewProp_bOverrideSpawnCondition_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideSpawnCondition_MetaData), NewProp_bOverrideSpawnCondition_MetaData) };
void Z_Construct_UScriptStruct_FGameplayCueNotify_CameraLensEffectInfo_Statics::NewProp_bOverridePlacementInfo_SetBit(void* Obj)
{
	((FGameplayCueNotify_CameraLensEffectInfo*)Obj)->bOverridePlacementInfo = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameplayCueNotify_CameraLensEffectInfo_Statics::NewProp_bOverridePlacementInfo = { "bOverridePlacementInfo", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FGameplayCueNotify_CameraLensEffectInfo), &Z_Construct_UScriptStruct_FGameplayCueNotify_CameraLensEffectInfo_Statics::NewProp_bOverridePlacementInfo_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverridePlacementInfo_MetaData), NewProp_bOverridePlacementInfo_MetaData) };
void Z_Construct_UScriptStruct_FGameplayCueNotify_CameraLensEffectInfo_Statics::NewProp_bPlayInWorld_SetBit(void* Obj)
{
	((FGameplayCueNotify_CameraLensEffectInfo*)Obj)->bPlayInWorld = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameplayCueNotify_CameraLensEffectInfo_Statics::NewProp_bPlayInWorld = { "bPlayInWorld", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FGameplayCueNotify_CameraLensEffectInfo), &Z_Construct_UScriptStruct_FGameplayCueNotify_CameraLensEffectInfo_Statics::NewProp_bPlayInWorld_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPlayInWorld_MetaData), NewProp_bPlayInWorld_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGameplayCueNotify_CameraLensEffectInfo_Statics::NewProp_WorldInnerRadius = { "WorldInnerRadius", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayCueNotify_CameraLensEffectInfo, WorldInnerRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldInnerRadius_MetaData), NewProp_WorldInnerRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGameplayCueNotify_CameraLensEffectInfo_Statics::NewProp_WorldOuterRadius = { "WorldOuterRadius", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayCueNotify_CameraLensEffectInfo, WorldOuterRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldOuterRadius_MetaData), NewProp_WorldOuterRadius_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayCueNotify_CameraLensEffectInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueNotify_CameraLensEffectInfo_Statics::NewProp_SpawnConditionOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueNotify_CameraLensEffectInfo_Statics::NewProp_PlacementInfoOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueNotify_CameraLensEffectInfo_Statics::NewProp_CameraLensEffect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueNotify_CameraLensEffectInfo_Statics::NewProp_bOverrideSpawnCondition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueNotify_CameraLensEffectInfo_Statics::NewProp_bOverridePlacementInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueNotify_CameraLensEffectInfo_Statics::NewProp_bPlayInWorld,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueNotify_CameraLensEffectInfo_Statics::NewProp_WorldInnerRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueNotify_CameraLensEffectInfo_Statics::NewProp_WorldOuterRadius,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCueNotify_CameraLensEffectInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayCueNotify_CameraLensEffectInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
	nullptr,
	&NewStructOps,
	"GameplayCueNotify_CameraLensEffectInfo",
	Z_Construct_UScriptStruct_FGameplayCueNotify_CameraLensEffectInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCueNotify_CameraLensEffectInfo_Statics::PropPointers),
	sizeof(FGameplayCueNotify_CameraLensEffectInfo),
	alignof(FGameplayCueNotify_CameraLensEffectInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCueNotify_CameraLensEffectInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGameplayCueNotify_CameraLensEffectInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGameplayCueNotify_CameraLensEffectInfo()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayCueNotify_CameraLensEffectInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayCueNotify_CameraLensEffectInfo.InnerSingleton, Z_Construct_UScriptStruct_FGameplayCueNotify_CameraLensEffectInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GameplayCueNotify_CameraLensEffectInfo.InnerSingleton;
}
// End ScriptStruct FGameplayCueNotify_CameraLensEffectInfo

// Begin ScriptStruct FGameplayCueNotify_ForceFeedbackInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayCueNotify_ForceFeedbackInfo;
class UScriptStruct* FGameplayCueNotify_ForceFeedbackInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayCueNotify_ForceFeedbackInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayCueNotify_ForceFeedbackInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayCueNotify_ForceFeedbackInfo, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("GameplayCueNotify_ForceFeedbackInfo"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayCueNotify_ForceFeedbackInfo.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FGameplayCueNotify_ForceFeedbackInfo>()
{
	return FGameplayCueNotify_ForceFeedbackInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGameplayCueNotify_ForceFeedbackInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * FGameplayCueNotify_ForceFeedbackInfo\n *\n *\x09Properties that specify how to play a force feedback effect.\n */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayCueNotifyTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "FGameplayCueNotify_ForceFeedbackInfo\n\n    Properties that specify how to play a force feedback effect." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnConditionOverride_MetaData[] = {
		{ "Category", "GameplayCueNotify" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Condition to check before playing the force feedback.\n" },
#endif
		{ "EditCondition", "bOverrideSpawnCondition" },
		{ "ModuleRelativePath", "Public/GameplayCueNotifyTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Condition to check before playing the force feedback." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlacementInfoOverride_MetaData[] = {
		{ "Category", "GameplayCueNotify" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Defines how the force feedback will be placed.\n" },
#endif
		{ "EditCondition", "bOverridePlacementInfo" },
		{ "ModuleRelativePath", "Public/GameplayCueNotifyTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Defines how the force feedback will be placed." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ForceFeedbackEffect_MetaData[] = {
		{ "Category", "GameplayCueNotify" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Force feedback effect to play.\n" },
#endif
		{ "ModuleRelativePath", "Public/GameplayCueNotifyTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Force feedback effect to play." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ForceFeedbackTag_MetaData[] = {
		{ "Category", "GameplayCueNotify" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Tag used to identify the force feedback effect so it can later be canceled.\n// Warning: If this is \"None\" it will stop ALL force feedback effects if it is canceled.\n" },
#endif
		{ "ModuleRelativePath", "Public/GameplayCueNotifyTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tag used to identify the force feedback effect so it can later be canceled.\nWarning: If this is \"None\" it will stop ALL force feedback effects if it is canceled." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsLooping_MetaData[] = {
		{ "Category", "GameplayCueNotify" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If enabled, the force feedback will be set to loop.\n" },
#endif
		{ "ModuleRelativePath", "Public/GameplayCueNotifyTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If enabled, the force feedback will be set to loop." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideSpawnCondition_MetaData[] = {
		{ "Category", "GameplayCueNotify" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If enabled, use the spawn condition override and not the default one.\n" },
#endif
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/GameplayCueNotifyTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If enabled, use the spawn condition override and not the default one." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverridePlacementInfo_MetaData[] = {
		{ "Category", "GameplayCueNotify" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If enabled, use the placement info override and not the default one.\n" },
#endif
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/GameplayCueNotifyTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If enabled, use the placement info override and not the default one." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPlayInWorld_MetaData[] = {
		{ "Category", "GameplayCueNotify" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If enabled, the force feedback will be played in the world and affect all players.\n" },
#endif
		{ "ModuleRelativePath", "Public/GameplayCueNotifyTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If enabled, the force feedback will be played in the world and affect all players." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldIntensity_MetaData[] = {
		{ "Category", "GameplayCueNotify" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Multiplier applied to the force feedback when played in world.\n" },
#endif
		{ "EditCondition", "bPlayInWorld" },
		{ "ModuleRelativePath", "Public/GameplayCueNotifyTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Multiplier applied to the force feedback when played in world." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldAttenuation_MetaData[] = {
		{ "Category", "GameplayCueNotify" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// How the force feedback is attenuated over distance when played in world.\n" },
#endif
		{ "EditCondition", "bPlayInWorld" },
		{ "ModuleRelativePath", "Public/GameplayCueNotifyTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How the force feedback is attenuated over distance when played in world." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnConditionOverride;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlacementInfoOverride;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ForceFeedbackEffect;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ForceFeedbackTag;
	static void NewProp_bIsLooping_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsLooping;
	static void NewProp_bOverrideSpawnCondition_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideSpawnCondition;
	static void NewProp_bOverridePlacementInfo_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverridePlacementInfo;
	static void NewProp_bPlayInWorld_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPlayInWorld;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WorldIntensity;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldAttenuation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayCueNotify_ForceFeedbackInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayCueNotify_ForceFeedbackInfo_Statics::NewProp_SpawnConditionOverride = { "SpawnConditionOverride", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayCueNotify_ForceFeedbackInfo, SpawnConditionOverride), Z_Construct_UScriptStruct_FGameplayCueNotify_SpawnCondition, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnConditionOverride_MetaData), NewProp_SpawnConditionOverride_MetaData) }; // 3352541212
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayCueNotify_ForceFeedbackInfo_Statics::NewProp_PlacementInfoOverride = { "PlacementInfoOverride", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayCueNotify_ForceFeedbackInfo, PlacementInfoOverride), Z_Construct_UScriptStruct_FGameplayCueNotify_PlacementInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlacementInfoOverride_MetaData), NewProp_PlacementInfoOverride_MetaData) }; // 2555742544
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGameplayCueNotify_ForceFeedbackInfo_Statics::NewProp_ForceFeedbackEffect = { "ForceFeedbackEffect", nullptr, (EPropertyFlags)0x0114000000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayCueNotify_ForceFeedbackInfo, ForceFeedbackEffect), Z_Construct_UClass_UForceFeedbackEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ForceFeedbackEffect_MetaData), NewProp_ForceFeedbackEffect_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FGameplayCueNotify_ForceFeedbackInfo_Statics::NewProp_ForceFeedbackTag = { "ForceFeedbackTag", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayCueNotify_ForceFeedbackInfo, ForceFeedbackTag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ForceFeedbackTag_MetaData), NewProp_ForceFeedbackTag_MetaData) };
void Z_Construct_UScriptStruct_FGameplayCueNotify_ForceFeedbackInfo_Statics::NewProp_bIsLooping_SetBit(void* Obj)
{
	((FGameplayCueNotify_ForceFeedbackInfo*)Obj)->bIsLooping = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameplayCueNotify_ForceFeedbackInfo_Statics::NewProp_bIsLooping = { "bIsLooping", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FGameplayCueNotify_ForceFeedbackInfo), &Z_Construct_UScriptStruct_FGameplayCueNotify_ForceFeedbackInfo_Statics::NewProp_bIsLooping_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsLooping_MetaData), NewProp_bIsLooping_MetaData) };
void Z_Construct_UScriptStruct_FGameplayCueNotify_ForceFeedbackInfo_Statics::NewProp_bOverrideSpawnCondition_SetBit(void* Obj)
{
	((FGameplayCueNotify_ForceFeedbackInfo*)Obj)->bOverrideSpawnCondition = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameplayCueNotify_ForceFeedbackInfo_Statics::NewProp_bOverrideSpawnCondition = { "bOverrideSpawnCondition", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FGameplayCueNotify_ForceFeedbackInfo), &Z_Construct_UScriptStruct_FGameplayCueNotify_ForceFeedbackInfo_Statics::NewProp_bOverrideSpawnCondition_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideSpawnCondition_MetaData), NewProp_bOverrideSpawnCondition_MetaData) };
void Z_Construct_UScriptStruct_FGameplayCueNotify_ForceFeedbackInfo_Statics::NewProp_bOverridePlacementInfo_SetBit(void* Obj)
{
	((FGameplayCueNotify_ForceFeedbackInfo*)Obj)->bOverridePlacementInfo = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameplayCueNotify_ForceFeedbackInfo_Statics::NewProp_bOverridePlacementInfo = { "bOverridePlacementInfo", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FGameplayCueNotify_ForceFeedbackInfo), &Z_Construct_UScriptStruct_FGameplayCueNotify_ForceFeedbackInfo_Statics::NewProp_bOverridePlacementInfo_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverridePlacementInfo_MetaData), NewProp_bOverridePlacementInfo_MetaData) };
void Z_Construct_UScriptStruct_FGameplayCueNotify_ForceFeedbackInfo_Statics::NewProp_bPlayInWorld_SetBit(void* Obj)
{
	((FGameplayCueNotify_ForceFeedbackInfo*)Obj)->bPlayInWorld = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameplayCueNotify_ForceFeedbackInfo_Statics::NewProp_bPlayInWorld = { "bPlayInWorld", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FGameplayCueNotify_ForceFeedbackInfo), &Z_Construct_UScriptStruct_FGameplayCueNotify_ForceFeedbackInfo_Statics::NewProp_bPlayInWorld_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPlayInWorld_MetaData), NewProp_bPlayInWorld_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGameplayCueNotify_ForceFeedbackInfo_Statics::NewProp_WorldIntensity = { "WorldIntensity", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayCueNotify_ForceFeedbackInfo, WorldIntensity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldIntensity_MetaData), NewProp_WorldIntensity_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGameplayCueNotify_ForceFeedbackInfo_Statics::NewProp_WorldAttenuation = { "WorldAttenuation", nullptr, (EPropertyFlags)0x0114000000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayCueNotify_ForceFeedbackInfo, WorldAttenuation), Z_Construct_UClass_UForceFeedbackAttenuation_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldAttenuation_MetaData), NewProp_WorldAttenuation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayCueNotify_ForceFeedbackInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueNotify_ForceFeedbackInfo_Statics::NewProp_SpawnConditionOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueNotify_ForceFeedbackInfo_Statics::NewProp_PlacementInfoOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueNotify_ForceFeedbackInfo_Statics::NewProp_ForceFeedbackEffect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueNotify_ForceFeedbackInfo_Statics::NewProp_ForceFeedbackTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueNotify_ForceFeedbackInfo_Statics::NewProp_bIsLooping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueNotify_ForceFeedbackInfo_Statics::NewProp_bOverrideSpawnCondition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueNotify_ForceFeedbackInfo_Statics::NewProp_bOverridePlacementInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueNotify_ForceFeedbackInfo_Statics::NewProp_bPlayInWorld,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueNotify_ForceFeedbackInfo_Statics::NewProp_WorldIntensity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueNotify_ForceFeedbackInfo_Statics::NewProp_WorldAttenuation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCueNotify_ForceFeedbackInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayCueNotify_ForceFeedbackInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
	nullptr,
	&NewStructOps,
	"GameplayCueNotify_ForceFeedbackInfo",
	Z_Construct_UScriptStruct_FGameplayCueNotify_ForceFeedbackInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCueNotify_ForceFeedbackInfo_Statics::PropPointers),
	sizeof(FGameplayCueNotify_ForceFeedbackInfo),
	alignof(FGameplayCueNotify_ForceFeedbackInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCueNotify_ForceFeedbackInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGameplayCueNotify_ForceFeedbackInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGameplayCueNotify_ForceFeedbackInfo()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayCueNotify_ForceFeedbackInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayCueNotify_ForceFeedbackInfo.InnerSingleton, Z_Construct_UScriptStruct_FGameplayCueNotify_ForceFeedbackInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GameplayCueNotify_ForceFeedbackInfo.InnerSingleton;
}
// End ScriptStruct FGameplayCueNotify_ForceFeedbackInfo

// Begin ScriptStruct FGameplayCueNotify_InputDevicePropertyInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayCueNotify_InputDevicePropertyInfo;
class UScriptStruct* FGameplayCueNotify_InputDevicePropertyInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayCueNotify_InputDevicePropertyInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayCueNotify_InputDevicePropertyInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayCueNotify_InputDevicePropertyInfo, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("GameplayCueNotify_InputDevicePropertyInfo"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayCueNotify_InputDevicePropertyInfo.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FGameplayCueNotify_InputDevicePropertyInfo>()
{
	return FGameplayCueNotify_InputDevicePropertyInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGameplayCueNotify_InputDevicePropertyInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * FGameplayCueNotify_InputDevicePropertyInfo\n *\n * Properties that specify how to set input device properties during a gameplay cue notify\n */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayCueNotifyTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "FGameplayCueNotify_InputDevicePropertyInfo\n\nProperties that specify how to set input device properties during a gameplay cue notify" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeviceProperties_MetaData[] = {
		{ "Category", "GameplayCueNotify" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Input Device properties to apply */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayCueNotifyTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input Device properties to apply" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_DeviceProperties_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DeviceProperties;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayCueNotify_InputDevicePropertyInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FGameplayCueNotify_InputDevicePropertyInfo_Statics::NewProp_DeviceProperties_Inner = { "DeviceProperties", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UInputDeviceProperty_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGameplayCueNotify_InputDevicePropertyInfo_Statics::NewProp_DeviceProperties = { "DeviceProperties", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayCueNotify_InputDevicePropertyInfo, DeviceProperties), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeviceProperties_MetaData), NewProp_DeviceProperties_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayCueNotify_InputDevicePropertyInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueNotify_InputDevicePropertyInfo_Statics::NewProp_DeviceProperties_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueNotify_InputDevicePropertyInfo_Statics::NewProp_DeviceProperties,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCueNotify_InputDevicePropertyInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayCueNotify_InputDevicePropertyInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
	nullptr,
	&NewStructOps,
	"GameplayCueNotify_InputDevicePropertyInfo",
	Z_Construct_UScriptStruct_FGameplayCueNotify_InputDevicePropertyInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCueNotify_InputDevicePropertyInfo_Statics::PropPointers),
	sizeof(FGameplayCueNotify_InputDevicePropertyInfo),
	alignof(FGameplayCueNotify_InputDevicePropertyInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCueNotify_InputDevicePropertyInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGameplayCueNotify_InputDevicePropertyInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGameplayCueNotify_InputDevicePropertyInfo()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayCueNotify_InputDevicePropertyInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayCueNotify_InputDevicePropertyInfo.InnerSingleton, Z_Construct_UScriptStruct_FGameplayCueNotify_InputDevicePropertyInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GameplayCueNotify_InputDevicePropertyInfo.InnerSingleton;
}
// End ScriptStruct FGameplayCueNotify_InputDevicePropertyInfo

// Begin ScriptStruct FGameplayCueNotify_DecalInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayCueNotify_DecalInfo;
class UScriptStruct* FGameplayCueNotify_DecalInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayCueNotify_DecalInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayCueNotify_DecalInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayCueNotify_DecalInfo, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("GameplayCueNotify_DecalInfo"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayCueNotify_DecalInfo.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FGameplayCueNotify_DecalInfo>()
{
	return FGameplayCueNotify_DecalInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGameplayCueNotify_DecalInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * FGameplayCueNotify_DecalInfo\n *\n *\x09Properties that specify how to spawn a decal.\n */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayCueNotifyTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "FGameplayCueNotify_DecalInfo\n\n    Properties that specify how to spawn a decal." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnConditionOverride_MetaData[] = {
		{ "Category", "GameplayCueNotify" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Condition to check before spawning the decal.\n" },
#endif
		{ "EditCondition", "bOverrideSpawnCondition" },
		{ "ModuleRelativePath", "Public/GameplayCueNotifyTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Condition to check before spawning the decal." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlacementInfoOverride_MetaData[] = {
		{ "Category", "GameplayCueNotify" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Defines how the decal will be placed.\n" },
#endif
		{ "EditCondition", "bOverridePlacementInfo" },
		{ "ModuleRelativePath", "Public/GameplayCueNotifyTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Defines how the decal will be placed." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DecalMaterial_MetaData[] = {
		{ "Category", "GameplayCueNotify" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Decal material to spawn.\n" },
#endif
		{ "ModuleRelativePath", "Public/GameplayCueNotifyTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Decal material to spawn." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DecalSize_MetaData[] = {
		{ "AllowPreserveRatio", "true" },
		{ "Category", "GameplayCueNotify" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Decal size in local space (does not include the component scale).\n" },
#endif
		{ "ModuleRelativePath", "Public/GameplayCueNotifyTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Decal size in local space (does not include the component scale)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideSpawnCondition_MetaData[] = {
		{ "Category", "GameplayCueNotify" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If enabled, use the spawn condition override and not the default one.\n" },
#endif
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/GameplayCueNotifyTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If enabled, use the spawn condition override and not the default one." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverridePlacementInfo_MetaData[] = {
		{ "Category", "GameplayCueNotify" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If enabled, use the placement info override and not the default one.\n" },
#endif
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/GameplayCueNotifyTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If enabled, use the placement info override and not the default one." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideFadeOut_MetaData[] = {
		{ "Category", "GameplayCueNotify" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If enabled, override default decal actor fade out values.\n" },
#endif
		{ "ModuleRelativePath", "Public/GameplayCueNotifyTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If enabled, override default decal actor fade out values." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FadeOutStartDelay_MetaData[] = {
		{ "Category", "GameplayCueNotify" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Sets when the decal actor will start fading out.  Will override setting in class.\n" },
#endif
		{ "EditCondition", "bOverrideFadeOut" },
		{ "ModuleRelativePath", "Public/GameplayCueNotifyTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets when the decal actor will start fading out.  Will override setting in class." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FadeOutDuration_MetaData[] = {
		{ "Category", "GameplayCueNotify" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Sets how long it takes for decal actor to fade out.  Will override setting in class.\n" },
#endif
		{ "EditCondition", "bOverrideFadeOut" },
		{ "ModuleRelativePath", "Public/GameplayCueNotifyTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets how long it takes for decal actor to fade out.  Will override setting in class." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnConditionOverride;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlacementInfoOverride;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DecalMaterial;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DecalSize;
	static void NewProp_bOverrideSpawnCondition_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideSpawnCondition;
	static void NewProp_bOverridePlacementInfo_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverridePlacementInfo;
	static void NewProp_bOverrideFadeOut_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideFadeOut;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FadeOutStartDelay;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FadeOutDuration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayCueNotify_DecalInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayCueNotify_DecalInfo_Statics::NewProp_SpawnConditionOverride = { "SpawnConditionOverride", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayCueNotify_DecalInfo, SpawnConditionOverride), Z_Construct_UScriptStruct_FGameplayCueNotify_SpawnCondition, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnConditionOverride_MetaData), NewProp_SpawnConditionOverride_MetaData) }; // 3352541212
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayCueNotify_DecalInfo_Statics::NewProp_PlacementInfoOverride = { "PlacementInfoOverride", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayCueNotify_DecalInfo, PlacementInfoOverride), Z_Construct_UScriptStruct_FGameplayCueNotify_PlacementInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlacementInfoOverride_MetaData), NewProp_PlacementInfoOverride_MetaData) }; // 2555742544
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGameplayCueNotify_DecalInfo_Statics::NewProp_DecalMaterial = { "DecalMaterial", nullptr, (EPropertyFlags)0x0114000000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayCueNotify_DecalInfo, DecalMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DecalMaterial_MetaData), NewProp_DecalMaterial_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayCueNotify_DecalInfo_Statics::NewProp_DecalSize = { "DecalSize", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayCueNotify_DecalInfo, DecalSize), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DecalSize_MetaData), NewProp_DecalSize_MetaData) };
void Z_Construct_UScriptStruct_FGameplayCueNotify_DecalInfo_Statics::NewProp_bOverrideSpawnCondition_SetBit(void* Obj)
{
	((FGameplayCueNotify_DecalInfo*)Obj)->bOverrideSpawnCondition = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameplayCueNotify_DecalInfo_Statics::NewProp_bOverrideSpawnCondition = { "bOverrideSpawnCondition", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FGameplayCueNotify_DecalInfo), &Z_Construct_UScriptStruct_FGameplayCueNotify_DecalInfo_Statics::NewProp_bOverrideSpawnCondition_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideSpawnCondition_MetaData), NewProp_bOverrideSpawnCondition_MetaData) };
void Z_Construct_UScriptStruct_FGameplayCueNotify_DecalInfo_Statics::NewProp_bOverridePlacementInfo_SetBit(void* Obj)
{
	((FGameplayCueNotify_DecalInfo*)Obj)->bOverridePlacementInfo = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameplayCueNotify_DecalInfo_Statics::NewProp_bOverridePlacementInfo = { "bOverridePlacementInfo", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FGameplayCueNotify_DecalInfo), &Z_Construct_UScriptStruct_FGameplayCueNotify_DecalInfo_Statics::NewProp_bOverridePlacementInfo_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverridePlacementInfo_MetaData), NewProp_bOverridePlacementInfo_MetaData) };
void Z_Construct_UScriptStruct_FGameplayCueNotify_DecalInfo_Statics::NewProp_bOverrideFadeOut_SetBit(void* Obj)
{
	((FGameplayCueNotify_DecalInfo*)Obj)->bOverrideFadeOut = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameplayCueNotify_DecalInfo_Statics::NewProp_bOverrideFadeOut = { "bOverrideFadeOut", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FGameplayCueNotify_DecalInfo), &Z_Construct_UScriptStruct_FGameplayCueNotify_DecalInfo_Statics::NewProp_bOverrideFadeOut_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideFadeOut_MetaData), NewProp_bOverrideFadeOut_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGameplayCueNotify_DecalInfo_Statics::NewProp_FadeOutStartDelay = { "FadeOutStartDelay", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayCueNotify_DecalInfo, FadeOutStartDelay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FadeOutStartDelay_MetaData), NewProp_FadeOutStartDelay_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGameplayCueNotify_DecalInfo_Statics::NewProp_FadeOutDuration = { "FadeOutDuration", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayCueNotify_DecalInfo, FadeOutDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FadeOutDuration_MetaData), NewProp_FadeOutDuration_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayCueNotify_DecalInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueNotify_DecalInfo_Statics::NewProp_SpawnConditionOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueNotify_DecalInfo_Statics::NewProp_PlacementInfoOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueNotify_DecalInfo_Statics::NewProp_DecalMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueNotify_DecalInfo_Statics::NewProp_DecalSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueNotify_DecalInfo_Statics::NewProp_bOverrideSpawnCondition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueNotify_DecalInfo_Statics::NewProp_bOverridePlacementInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueNotify_DecalInfo_Statics::NewProp_bOverrideFadeOut,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueNotify_DecalInfo_Statics::NewProp_FadeOutStartDelay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueNotify_DecalInfo_Statics::NewProp_FadeOutDuration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCueNotify_DecalInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayCueNotify_DecalInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
	nullptr,
	&NewStructOps,
	"GameplayCueNotify_DecalInfo",
	Z_Construct_UScriptStruct_FGameplayCueNotify_DecalInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCueNotify_DecalInfo_Statics::PropPointers),
	sizeof(FGameplayCueNotify_DecalInfo),
	alignof(FGameplayCueNotify_DecalInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCueNotify_DecalInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGameplayCueNotify_DecalInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGameplayCueNotify_DecalInfo()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayCueNotify_DecalInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayCueNotify_DecalInfo.InnerSingleton, Z_Construct_UScriptStruct_FGameplayCueNotify_DecalInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GameplayCueNotify_DecalInfo.InnerSingleton;
}
// End ScriptStruct FGameplayCueNotify_DecalInfo

// Begin ScriptStruct FGameplayCueNotify_BurstEffects
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayCueNotify_BurstEffects;
class UScriptStruct* FGameplayCueNotify_BurstEffects::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayCueNotify_BurstEffects.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayCueNotify_BurstEffects.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayCueNotify_BurstEffects, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("GameplayCueNotify_BurstEffects"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayCueNotify_BurstEffects.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FGameplayCueNotify_BurstEffects>()
{
	return FGameplayCueNotify_BurstEffects::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGameplayCueNotify_BurstEffects_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * FGameplayCueNotify_BurstEffects\n *\n *\x09Set of effects to spawn for a single event, used by all gameplay cue notify types.\n */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayCueNotifyTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "FGameplayCueNotify_BurstEffects\n\n    Set of effects to spawn for a single event, used by all gameplay cue notify types." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BurstParticles_MetaData[] = {
		{ "Category", "GameplayCueNotify" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Particle systems to be spawned on gameplay cue execution.  These should never use looping effects!\n" },
#endif
		{ "ModuleRelativePath", "Public/GameplayCueNotifyTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Particle systems to be spawned on gameplay cue execution.  These should never use looping effects!" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BurstSounds_MetaData[] = {
		{ "Category", "GameplayCueNotify" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Sound to be played on gameplay cue execution.  These should never use looping effects!\n" },
#endif
		{ "ModuleRelativePath", "Public/GameplayCueNotifyTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sound to be played on gameplay cue execution.  These should never use looping effects!" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BurstCameraShake_MetaData[] = {
		{ "Category", "GameplayCueNotify" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Camera shake to be played on gameplay cue execution.  This should never use a looping effect!\n" },
#endif
		{ "ModuleRelativePath", "Public/GameplayCueNotifyTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera shake to be played on gameplay cue execution.  This should never use a looping effect!" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BurstCameraLensEffect_MetaData[] = {
		{ "Category", "GameplayCueNotify" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Camera lens effect to be played on gameplay cue execution.  This should never use a looping effect!\n" },
#endif
		{ "ModuleRelativePath", "Public/GameplayCueNotifyTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera lens effect to be played on gameplay cue execution.  This should never use a looping effect!" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BurstForceFeedback_MetaData[] = {
		{ "Category", "GameplayCueNotify" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Force feedback to be played on gameplay cue execution.  This should never use a looping effect!\n" },
#endif
		{ "ModuleRelativePath", "Public/GameplayCueNotifyTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Force feedback to be played on gameplay cue execution.  This should never use a looping effect!" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BurstDevicePropertyEffect_MetaData[] = {
		{ "Category", "GameplayCueNotify" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Input device properties to be applied on gameplay cue execution\n" },
#endif
		{ "ModuleRelativePath", "Public/GameplayCueNotifyTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input device properties to be applied on gameplay cue execution" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BurstDecal_MetaData[] = {
		{ "Category", "GameplayCueNotify" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Decal to be spawned on gameplay cue execution.  Actor should have fade out time or override should be set so it will clean up properly.\n" },
#endif
		{ "ModuleRelativePath", "Public/GameplayCueNotifyTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Decal to be spawned on gameplay cue execution.  Actor should have fade out time or override should be set so it will clean up properly." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_BurstParticles_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BurstParticles;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BurstSounds_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BurstSounds;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BurstCameraShake;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BurstCameraLensEffect;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BurstForceFeedback;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BurstDevicePropertyEffect;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BurstDecal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayCueNotify_BurstEffects>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayCueNotify_BurstEffects_Statics::NewProp_BurstParticles_Inner = { "BurstParticles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayCueNotify_ParticleInfo, METADATA_PARAMS(0, nullptr) }; // 4226410018
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGameplayCueNotify_BurstEffects_Statics::NewProp_BurstParticles = { "BurstParticles", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayCueNotify_BurstEffects, BurstParticles), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BurstParticles_MetaData), NewProp_BurstParticles_MetaData) }; // 4226410018
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayCueNotify_BurstEffects_Statics::NewProp_BurstSounds_Inner = { "BurstSounds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayCueNotify_SoundInfo, METADATA_PARAMS(0, nullptr) }; // 4271075407
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGameplayCueNotify_BurstEffects_Statics::NewProp_BurstSounds = { "BurstSounds", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayCueNotify_BurstEffects, BurstSounds), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BurstSounds_MetaData), NewProp_BurstSounds_MetaData) }; // 4271075407
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayCueNotify_BurstEffects_Statics::NewProp_BurstCameraShake = { "BurstCameraShake", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayCueNotify_BurstEffects, BurstCameraShake), Z_Construct_UScriptStruct_FGameplayCueNotify_CameraShakeInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BurstCameraShake_MetaData), NewProp_BurstCameraShake_MetaData) }; // 3383353938
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayCueNotify_BurstEffects_Statics::NewProp_BurstCameraLensEffect = { "BurstCameraLensEffect", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayCueNotify_BurstEffects, BurstCameraLensEffect), Z_Construct_UScriptStruct_FGameplayCueNotify_CameraLensEffectInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BurstCameraLensEffect_MetaData), NewProp_BurstCameraLensEffect_MetaData) }; // 1083410531
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayCueNotify_BurstEffects_Statics::NewProp_BurstForceFeedback = { "BurstForceFeedback", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayCueNotify_BurstEffects, BurstForceFeedback), Z_Construct_UScriptStruct_FGameplayCueNotify_ForceFeedbackInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BurstForceFeedback_MetaData), NewProp_BurstForceFeedback_MetaData) }; // 2527062042
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayCueNotify_BurstEffects_Statics::NewProp_BurstDevicePropertyEffect = { "BurstDevicePropertyEffect", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayCueNotify_BurstEffects, BurstDevicePropertyEffect), Z_Construct_UScriptStruct_FGameplayCueNotify_InputDevicePropertyInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BurstDevicePropertyEffect_MetaData), NewProp_BurstDevicePropertyEffect_MetaData) }; // 2210968747
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayCueNotify_BurstEffects_Statics::NewProp_BurstDecal = { "BurstDecal", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayCueNotify_BurstEffects, BurstDecal), Z_Construct_UScriptStruct_FGameplayCueNotify_DecalInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BurstDecal_MetaData), NewProp_BurstDecal_MetaData) }; // 197271899
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayCueNotify_BurstEffects_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueNotify_BurstEffects_Statics::NewProp_BurstParticles_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueNotify_BurstEffects_Statics::NewProp_BurstParticles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueNotify_BurstEffects_Statics::NewProp_BurstSounds_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueNotify_BurstEffects_Statics::NewProp_BurstSounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueNotify_BurstEffects_Statics::NewProp_BurstCameraShake,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueNotify_BurstEffects_Statics::NewProp_BurstCameraLensEffect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueNotify_BurstEffects_Statics::NewProp_BurstForceFeedback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueNotify_BurstEffects_Statics::NewProp_BurstDevicePropertyEffect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueNotify_BurstEffects_Statics::NewProp_BurstDecal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCueNotify_BurstEffects_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayCueNotify_BurstEffects_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
	nullptr,
	&NewStructOps,
	"GameplayCueNotify_BurstEffects",
	Z_Construct_UScriptStruct_FGameplayCueNotify_BurstEffects_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCueNotify_BurstEffects_Statics::PropPointers),
	sizeof(FGameplayCueNotify_BurstEffects),
	alignof(FGameplayCueNotify_BurstEffects),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCueNotify_BurstEffects_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGameplayCueNotify_BurstEffects_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGameplayCueNotify_BurstEffects()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayCueNotify_BurstEffects.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayCueNotify_BurstEffects.InnerSingleton, Z_Construct_UScriptStruct_FGameplayCueNotify_BurstEffects_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GameplayCueNotify_BurstEffects.InnerSingleton;
}
// End ScriptStruct FGameplayCueNotify_BurstEffects

// Begin ScriptStruct FGameplayCueNotify_LoopingEffects
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayCueNotify_LoopingEffects;
class UScriptStruct* FGameplayCueNotify_LoopingEffects::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayCueNotify_LoopingEffects.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayCueNotify_LoopingEffects.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayCueNotify_LoopingEffects, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("GameplayCueNotify_LoopingEffects"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayCueNotify_LoopingEffects.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FGameplayCueNotify_LoopingEffects>()
{
	return FGameplayCueNotify_LoopingEffects::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGameplayCueNotify_LoopingEffects_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * FGameplayCueNotify_LoopingEffects\n *\n *\x09Set of looping effects to spawn for looping gameplay cues.\n */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayCueNotifyTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "FGameplayCueNotify_LoopingEffects\n\n    Set of looping effects to spawn for looping gameplay cues." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoopingParticles_MetaData[] = {
		{ "Category", "GameplayCueNotify" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Particle systems to be spawned on gameplay cue loop start.\n" },
#endif
		{ "ModuleRelativePath", "Public/GameplayCueNotifyTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Particle systems to be spawned on gameplay cue loop start." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoopingSounds_MetaData[] = {
		{ "Category", "GameplayCueNotify" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Sound to be played on gameplay cue loop start.\n" },
#endif
		{ "ModuleRelativePath", "Public/GameplayCueNotifyTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sound to be played on gameplay cue loop start." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoopingCameraShake_MetaData[] = {
		{ "Category", "GameplayCueNotify" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Camera shake to be played on gameplay cue loop start.\n" },
#endif
		{ "ModuleRelativePath", "Public/GameplayCueNotifyTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera shake to be played on gameplay cue loop start." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoopingCameraLensEffect_MetaData[] = {
		{ "Category", "GameplayCueNotify" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Camera lens effect to be played on gameplay cue loop start.\n" },
#endif
		{ "ModuleRelativePath", "Public/GameplayCueNotifyTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera lens effect to be played on gameplay cue loop start." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoopingForceFeedback_MetaData[] = {
		{ "Category", "GameplayCueNotify" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Force feedback to be played on gameplay cue loop start.\n" },
#endif
		{ "ModuleRelativePath", "Public/GameplayCueNotifyTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Force feedback to be played on gameplay cue loop start." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoopingInputDevicePropertyEffect_MetaData[] = {
		{ "Category", "GameplayCueNotify" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Input device properties to be applied on gameplay cue loop start.\n" },
#endif
		{ "ModuleRelativePath", "Public/GameplayCueNotifyTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input device properties to be applied on gameplay cue loop start." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LoopingParticles_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LoopingParticles;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LoopingSounds_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LoopingSounds;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LoopingCameraShake;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LoopingCameraLensEffect;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LoopingForceFeedback;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LoopingInputDevicePropertyEffect;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayCueNotify_LoopingEffects>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayCueNotify_LoopingEffects_Statics::NewProp_LoopingParticles_Inner = { "LoopingParticles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayCueNotify_ParticleInfo, METADATA_PARAMS(0, nullptr) }; // 4226410018
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGameplayCueNotify_LoopingEffects_Statics::NewProp_LoopingParticles = { "LoopingParticles", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayCueNotify_LoopingEffects, LoopingParticles), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoopingParticles_MetaData), NewProp_LoopingParticles_MetaData) }; // 4226410018
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayCueNotify_LoopingEffects_Statics::NewProp_LoopingSounds_Inner = { "LoopingSounds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayCueNotify_SoundInfo, METADATA_PARAMS(0, nullptr) }; // 4271075407
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGameplayCueNotify_LoopingEffects_Statics::NewProp_LoopingSounds = { "LoopingSounds", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayCueNotify_LoopingEffects, LoopingSounds), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoopingSounds_MetaData), NewProp_LoopingSounds_MetaData) }; // 4271075407
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayCueNotify_LoopingEffects_Statics::NewProp_LoopingCameraShake = { "LoopingCameraShake", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayCueNotify_LoopingEffects, LoopingCameraShake), Z_Construct_UScriptStruct_FGameplayCueNotify_CameraShakeInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoopingCameraShake_MetaData), NewProp_LoopingCameraShake_MetaData) }; // 3383353938
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayCueNotify_LoopingEffects_Statics::NewProp_LoopingCameraLensEffect = { "LoopingCameraLensEffect", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayCueNotify_LoopingEffects, LoopingCameraLensEffect), Z_Construct_UScriptStruct_FGameplayCueNotify_CameraLensEffectInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoopingCameraLensEffect_MetaData), NewProp_LoopingCameraLensEffect_MetaData) }; // 1083410531
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayCueNotify_LoopingEffects_Statics::NewProp_LoopingForceFeedback = { "LoopingForceFeedback", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayCueNotify_LoopingEffects, LoopingForceFeedback), Z_Construct_UScriptStruct_FGameplayCueNotify_ForceFeedbackInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoopingForceFeedback_MetaData), NewProp_LoopingForceFeedback_MetaData) }; // 2527062042
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayCueNotify_LoopingEffects_Statics::NewProp_LoopingInputDevicePropertyEffect = { "LoopingInputDevicePropertyEffect", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayCueNotify_LoopingEffects, LoopingInputDevicePropertyEffect), Z_Construct_UScriptStruct_FGameplayCueNotify_InputDevicePropertyInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoopingInputDevicePropertyEffect_MetaData), NewProp_LoopingInputDevicePropertyEffect_MetaData) }; // 2210968747
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayCueNotify_LoopingEffects_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueNotify_LoopingEffects_Statics::NewProp_LoopingParticles_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueNotify_LoopingEffects_Statics::NewProp_LoopingParticles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueNotify_LoopingEffects_Statics::NewProp_LoopingSounds_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueNotify_LoopingEffects_Statics::NewProp_LoopingSounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueNotify_LoopingEffects_Statics::NewProp_LoopingCameraShake,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueNotify_LoopingEffects_Statics::NewProp_LoopingCameraLensEffect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueNotify_LoopingEffects_Statics::NewProp_LoopingForceFeedback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueNotify_LoopingEffects_Statics::NewProp_LoopingInputDevicePropertyEffect,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCueNotify_LoopingEffects_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayCueNotify_LoopingEffects_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
	nullptr,
	&NewStructOps,
	"GameplayCueNotify_LoopingEffects",
	Z_Construct_UScriptStruct_FGameplayCueNotify_LoopingEffects_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCueNotify_LoopingEffects_Statics::PropPointers),
	sizeof(FGameplayCueNotify_LoopingEffects),
	alignof(FGameplayCueNotify_LoopingEffects),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCueNotify_LoopingEffects_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGameplayCueNotify_LoopingEffects_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGameplayCueNotify_LoopingEffects()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayCueNotify_LoopingEffects.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayCueNotify_LoopingEffects.InnerSingleton, Z_Construct_UScriptStruct_FGameplayCueNotify_LoopingEffects_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GameplayCueNotify_LoopingEffects.InnerSingleton;
}
// End ScriptStruct FGameplayCueNotify_LoopingEffects

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayCueNotifyTypes_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EGameplayCueNotify_EffectPlaySpace_StaticEnum, TEXT("EGameplayCueNotify_EffectPlaySpace"), &Z_Registration_Info_UEnum_EGameplayCueNotify_EffectPlaySpace, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3785554324U) },
		{ EGameplayCueNotify_LocallyControlledSource_StaticEnum, TEXT("EGameplayCueNotify_LocallyControlledSource"), &Z_Registration_Info_UEnum_EGameplayCueNotify_LocallyControlledSource, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1600032526U) },
		{ EGameplayCueNotify_LocallyControlledPolicy_StaticEnum, TEXT("EGameplayCueNotify_LocallyControlledPolicy"), &Z_Registration_Info_UEnum_EGameplayCueNotify_LocallyControlledPolicy, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2587487789U) },
		{ EGameplayCueNotify_AttachPolicy_StaticEnum, TEXT("EGameplayCueNotify_AttachPolicy"), &Z_Registration_Info_UEnum_EGameplayCueNotify_AttachPolicy, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 161263170U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FGameplayCueNotify_SpawnCondition::StaticStruct, Z_Construct_UScriptStruct_FGameplayCueNotify_SpawnCondition_Statics::NewStructOps, TEXT("GameplayCueNotify_SpawnCondition"), &Z_Registration_Info_UScriptStruct_GameplayCueNotify_SpawnCondition, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayCueNotify_SpawnCondition), 3352541212U) },
		{ FGameplayCueNotify_PlacementInfo::StaticStruct, Z_Construct_UScriptStruct_FGameplayCueNotify_PlacementInfo_Statics::NewStructOps, TEXT("GameplayCueNotify_PlacementInfo"), &Z_Registration_Info_UScriptStruct_GameplayCueNotify_PlacementInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayCueNotify_PlacementInfo), 2555742544U) },
		{ FGameplayCueNotify_SpawnResult::StaticStruct, Z_Construct_UScriptStruct_FGameplayCueNotify_SpawnResult_Statics::NewStructOps, TEXT("GameplayCueNotify_SpawnResult"), &Z_Registration_Info_UScriptStruct_GameplayCueNotify_SpawnResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayCueNotify_SpawnResult), 925001605U) },
		{ FGameplayCueNotify_ParticleInfo::StaticStruct, Z_Construct_UScriptStruct_FGameplayCueNotify_ParticleInfo_Statics::NewStructOps, TEXT("GameplayCueNotify_ParticleInfo"), &Z_Registration_Info_UScriptStruct_GameplayCueNotify_ParticleInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayCueNotify_ParticleInfo), 4226410018U) },
		{ FGameplayCueNotify_SoundParameterInterfaceInfo::StaticStruct, Z_Construct_UScriptStruct_FGameplayCueNotify_SoundParameterInterfaceInfo_Statics::NewStructOps, TEXT("GameplayCueNotify_SoundParameterInterfaceInfo"), &Z_Registration_Info_UScriptStruct_GameplayCueNotify_SoundParameterInterfaceInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayCueNotify_SoundParameterInterfaceInfo), 2289423333U) },
		{ FGameplayCueNotify_SoundInfo::StaticStruct, Z_Construct_UScriptStruct_FGameplayCueNotify_SoundInfo_Statics::NewStructOps, TEXT("GameplayCueNotify_SoundInfo"), &Z_Registration_Info_UScriptStruct_GameplayCueNotify_SoundInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayCueNotify_SoundInfo), 4271075407U) },
		{ FGameplayCueNotify_CameraShakeInfo::StaticStruct, Z_Construct_UScriptStruct_FGameplayCueNotify_CameraShakeInfo_Statics::NewStructOps, TEXT("GameplayCueNotify_CameraShakeInfo"), &Z_Registration_Info_UScriptStruct_GameplayCueNotify_CameraShakeInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayCueNotify_CameraShakeInfo), 3383353938U) },
		{ FGameplayCueNotify_CameraLensEffectInfo::StaticStruct, Z_Construct_UScriptStruct_FGameplayCueNotify_CameraLensEffectInfo_Statics::NewStructOps, TEXT("GameplayCueNotify_CameraLensEffectInfo"), &Z_Registration_Info_UScriptStruct_GameplayCueNotify_CameraLensEffectInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayCueNotify_CameraLensEffectInfo), 1083410531U) },
		{ FGameplayCueNotify_ForceFeedbackInfo::StaticStruct, Z_Construct_UScriptStruct_FGameplayCueNotify_ForceFeedbackInfo_Statics::NewStructOps, TEXT("GameplayCueNotify_ForceFeedbackInfo"), &Z_Registration_Info_UScriptStruct_GameplayCueNotify_ForceFeedbackInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayCueNotify_ForceFeedbackInfo), 2527062042U) },
		{ FGameplayCueNotify_InputDevicePropertyInfo::StaticStruct, Z_Construct_UScriptStruct_FGameplayCueNotify_InputDevicePropertyInfo_Statics::NewStructOps, TEXT("GameplayCueNotify_InputDevicePropertyInfo"), &Z_Registration_Info_UScriptStruct_GameplayCueNotify_InputDevicePropertyInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayCueNotify_InputDevicePropertyInfo), 2210968747U) },
		{ FGameplayCueNotify_DecalInfo::StaticStruct, Z_Construct_UScriptStruct_FGameplayCueNotify_DecalInfo_Statics::NewStructOps, TEXT("GameplayCueNotify_DecalInfo"), &Z_Registration_Info_UScriptStruct_GameplayCueNotify_DecalInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayCueNotify_DecalInfo), 197271899U) },
		{ FGameplayCueNotify_BurstEffects::StaticStruct, Z_Construct_UScriptStruct_FGameplayCueNotify_BurstEffects_Statics::NewStructOps, TEXT("GameplayCueNotify_BurstEffects"), &Z_Registration_Info_UScriptStruct_GameplayCueNotify_BurstEffects, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayCueNotify_BurstEffects), 694216403U) },
		{ FGameplayCueNotify_LoopingEffects::StaticStruct, Z_Construct_UScriptStruct_FGameplayCueNotify_LoopingEffects_Statics::NewStructOps, TEXT("GameplayCueNotify_LoopingEffects"), &Z_Registration_Info_UScriptStruct_GameplayCueNotify_LoopingEffects, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayCueNotify_LoopingEffects), 4021849128U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayCueNotifyTypes_h_3794427171(TEXT("/Script/GameplayAbilities"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayCueNotifyTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayCueNotifyTypes_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayCueNotifyTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayCueNotifyTypes_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
