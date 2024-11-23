// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayAbilities/Public/Abilities/GameplayAbilityTargetActor.h"
#include "GameplayAbilities/Public/Abilities/GameplayAbilityTargetDataFilter.h"
#include "GameplayAbilities/Public/Abilities/GameplayAbilityTargetTypes.h"
#include "GameplayAbilities/Public/Abilities/GameplayAbilityWorldReticle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayAbilityTargetActor() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_AGameplayAbilityTargetActor();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_AGameplayAbilityTargetActor_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_AGameplayAbilityWorldReticle_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilityTargetingLocationInfo();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTargetDataFilterHandle();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FWorldReticleParameters();
UPackage* Z_Construct_UPackage__Script_GameplayAbilities();
// End Cross Module References

// Begin Class AGameplayAbilityTargetActor Function CancelTargeting
struct Z_Construct_UFunction_AGameplayAbilityTargetActor_CancelTargeting_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Outside code is saying 'stop everything and just forget about it' */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTargetActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Outside code is saying 'stop everything and just forget about it'" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameplayAbilityTargetActor_CancelTargeting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameplayAbilityTargetActor, nullptr, "CancelTargeting", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameplayAbilityTargetActor_CancelTargeting_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGameplayAbilityTargetActor_CancelTargeting_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AGameplayAbilityTargetActor_CancelTargeting()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameplayAbilityTargetActor_CancelTargeting_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGameplayAbilityTargetActor::execCancelTargeting)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CancelTargeting();
	P_NATIVE_END;
}
// End Class AGameplayAbilityTargetActor Function CancelTargeting

// Begin Class AGameplayAbilityTargetActor Function ConfirmTargeting
struct Z_Construct_UFunction_AGameplayAbilityTargetActor_ConfirmTargeting_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Outside code is saying 'stop and just give me what you have.' Returns true if the ability accepts this and can be forgotten. */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTargetActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Outside code is saying 'stop and just give me what you have.' Returns true if the ability accepts this and can be forgotten." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameplayAbilityTargetActor_ConfirmTargeting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameplayAbilityTargetActor, nullptr, "ConfirmTargeting", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameplayAbilityTargetActor_ConfirmTargeting_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGameplayAbilityTargetActor_ConfirmTargeting_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AGameplayAbilityTargetActor_ConfirmTargeting()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameplayAbilityTargetActor_ConfirmTargeting_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGameplayAbilityTargetActor::execConfirmTargeting)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ConfirmTargeting();
	P_NATIVE_END;
}
// End Class AGameplayAbilityTargetActor Function ConfirmTargeting

// Begin Class AGameplayAbilityTargetActor
void AGameplayAbilityTargetActor::StaticRegisterNativesAGameplayAbilityTargetActor()
{
	UClass* Class = AGameplayAbilityTargetActor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CancelTargeting", &AGameplayAbilityTargetActor::execCancelTargeting },
		{ "ConfirmTargeting", &AGameplayAbilityTargetActor::execConfirmTargeting },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGameplayAbilityTargetActor);
UClass* Z_Construct_UClass_AGameplayAbilityTargetActor_NoRegister()
{
	return AGameplayAbilityTargetActor::StaticClass();
}
struct Z_Construct_UClass_AGameplayAbilityTargetActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * TargetActors are spawned to assist with ability targeting. They are spawned by ability tasks and create/determine the outgoing targeting data passed from one task to another\n *\n * WARNING: These actors are spawned once per ability activation and in their default form are not very efficient\n * For most games you will need to subclass and heavily modify this actor, or you will want to implement similar functions in a game-specific actor or blueprint to avoid actor spawn costs\n * This class is not well tested by internal games, but it is a useful class to look at to learn how target replication occurs\n */" },
#endif
		{ "IncludePath", "Abilities/GameplayAbilityTargetActor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTargetActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "TargetActors are spawned to assist with ability targeting. They are spawned by ability tasks and create/determine the outgoing targeting data passed from one task to another\n\nWARNING: These actors are spawned once per ability activation and in their default form are not very efficient\nFor most games you will need to subclass and heavily modify this actor, or you will want to implement similar functions in a game-specific actor or blueprint to avoid actor spawn costs\nThis class is not well tested by internal games, but it is a useful class to look at to learn how target replication occurs" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShouldProduceTargetDataOnServer_MetaData[] = {
		{ "Category", "Advanced" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The TargetData this class produces can be entirely generated on the server. We don't require the client to send us full or partial TargetData (possibly just a 'confirm') */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTargetActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The TargetData this class produces can be entirely generated on the server. We don't require the client to send us full or partial TargetData (possibly just a 'confirm')" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartLocation_MetaData[] = {
		{ "Category", "Targeting" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Describes where the targeting action starts, usually the player character or a socket on the player character. *///UPROPERTY(BlueprintReadOnly, meta=(ExposeOnSpawn=true), Category=Targeting)\n" },
#endif
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTargetActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Describes where the targeting action starts, usually the player character or a socket on the player character. //UPROPERTY(BlueprintReadOnly, meta=(ExposeOnSpawn=true), Category=Targeting)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrimaryPC_MetaData[] = {
		{ "Category", "Targeting" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTargetActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwningAbility_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTargetActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDestroyOnConfirmation_MetaData[] = {
		{ "Category", "Targeting" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTargetActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceActor_MetaData[] = {
		{ "Category", "Targeting" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTargetActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReticleParams_MetaData[] = {
		{ "Category", "Targeting" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Parameters for world reticle. Usage of these parameters is dependent on the reticle. */" },
#endif
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTargetActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Parameters for world reticle. Usage of these parameters is dependent on the reticle." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReticleClass_MetaData[] = {
		{ "Category", "Targeting" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Reticle that will appear on top of acquired targets. Reticles will be spawned/despawned as targets are acquired/lost. */" },
#endif
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTargetActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Reticle that will appear on top of acquired targets. Reticles will be spawned/despawned as targets are acquired/lost." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Filter_MetaData[] = {
		{ "Category", "Targeting" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Using a special class for replication purposes.\n" },
#endif
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTargetActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Using a special class for replication purposes." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDebug_MetaData[] = {
		{ "Category", "Targeting" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Draw the debug information (if applicable) for this targeting actor. */" },
#endif
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTargetActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Draw the debug information (if applicable) for this targeting actor." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GenericDelegateBoundASC_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTargetActor.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ShouldProduceTargetDataOnServer_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ShouldProduceTargetDataOnServer;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartLocation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PrimaryPC;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningAbility;
	static void NewProp_bDestroyOnConfirmation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDestroyOnConfirmation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceActor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReticleParams;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ReticleClass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Filter;
	static void NewProp_bDebug_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDebug;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GenericDelegateBoundASC;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AGameplayAbilityTargetActor_CancelTargeting, "CancelTargeting" }, // 921582063
		{ &Z_Construct_UFunction_AGameplayAbilityTargetActor_ConfirmTargeting, "ConfirmTargeting" }, // 1565109534
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGameplayAbilityTargetActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::NewProp_ShouldProduceTargetDataOnServer_SetBit(void* Obj)
{
	((AGameplayAbilityTargetActor*)Obj)->ShouldProduceTargetDataOnServer = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::NewProp_ShouldProduceTargetDataOnServer = { "ShouldProduceTargetDataOnServer", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGameplayAbilityTargetActor), &Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::NewProp_ShouldProduceTargetDataOnServer_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShouldProduceTargetDataOnServer_MetaData), NewProp_ShouldProduceTargetDataOnServer_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::NewProp_StartLocation = { "StartLocation", nullptr, (EPropertyFlags)0x0011008000000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameplayAbilityTargetActor, StartLocation), Z_Construct_UScriptStruct_FGameplayAbilityTargetingLocationInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartLocation_MetaData), NewProp_StartLocation_MetaData) }; // 1361378401
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::NewProp_PrimaryPC = { "PrimaryPC", nullptr, (EPropertyFlags)0x0114000000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameplayAbilityTargetActor, PrimaryPC), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrimaryPC_MetaData), NewProp_PrimaryPC_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::NewProp_OwningAbility = { "OwningAbility", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameplayAbilityTargetActor, OwningAbility), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwningAbility_MetaData), NewProp_OwningAbility_MetaData) };
void Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::NewProp_bDestroyOnConfirmation_SetBit(void* Obj)
{
	((AGameplayAbilityTargetActor*)Obj)->bDestroyOnConfirmation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::NewProp_bDestroyOnConfirmation = { "bDestroyOnConfirmation", nullptr, (EPropertyFlags)0x0010000000000034, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGameplayAbilityTargetActor), &Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::NewProp_bDestroyOnConfirmation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDestroyOnConfirmation_MetaData), NewProp_bDestroyOnConfirmation_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::NewProp_SourceActor = { "SourceActor", nullptr, (EPropertyFlags)0x0114000000000034, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameplayAbilityTargetActor, SourceActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceActor_MetaData), NewProp_SourceActor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::NewProp_ReticleParams = { "ReticleParams", nullptr, (EPropertyFlags)0x0011000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameplayAbilityTargetActor, ReticleParams), Z_Construct_UScriptStruct_FWorldReticleParameters, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReticleParams_MetaData), NewProp_ReticleParams_MetaData) }; // 1998791627
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::NewProp_ReticleClass = { "ReticleClass", nullptr, (EPropertyFlags)0x0015000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameplayAbilityTargetActor, ReticleClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AGameplayAbilityWorldReticle_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReticleClass_MetaData), NewProp_ReticleClass_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::NewProp_Filter = { "Filter", nullptr, (EPropertyFlags)0x0011000000000024, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameplayAbilityTargetActor, Filter), Z_Construct_UScriptStruct_FGameplayTargetDataFilterHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Filter_MetaData), NewProp_Filter_MetaData) }; // 1470987265
void Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::NewProp_bDebug_SetBit(void* Obj)
{
	((AGameplayAbilityTargetActor*)Obj)->bDebug = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::NewProp_bDebug = { "bDebug", nullptr, (EPropertyFlags)0x0011000000000025, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGameplayAbilityTargetActor), &Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::NewProp_bDebug_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDebug_MetaData), NewProp_bDebug_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::NewProp_GenericDelegateBoundASC = { "GenericDelegateBoundASC", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameplayAbilityTargetActor, GenericDelegateBoundASC), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GenericDelegateBoundASC_MetaData), NewProp_GenericDelegateBoundASC_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::NewProp_ShouldProduceTargetDataOnServer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::NewProp_StartLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::NewProp_PrimaryPC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::NewProp_OwningAbility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::NewProp_bDestroyOnConfirmation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::NewProp_SourceActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::NewProp_ReticleParams,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::NewProp_ReticleClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::NewProp_Filter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::NewProp_bDebug,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::NewProp_GenericDelegateBoundASC,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::ClassParams = {
	&AGameplayAbilityTargetActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::PropPointers),
	0,
	0x009002A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGameplayAbilityTargetActor()
{
	if (!Z_Registration_Info_UClass_AGameplayAbilityTargetActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGameplayAbilityTargetActor.OuterSingleton, Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGameplayAbilityTargetActor.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UClass* StaticClass<AGameplayAbilityTargetActor>()
{
	return AGameplayAbilityTargetActor::StaticClass();
}
void AGameplayAbilityTargetActor::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_StartLocation(TEXT("StartLocation"));
	static const FName Name_bDestroyOnConfirmation(TEXT("bDestroyOnConfirmation"));
	static const FName Name_SourceActor(TEXT("SourceActor"));
	static const FName Name_Filter(TEXT("Filter"));
	static const FName Name_bDebug(TEXT("bDebug"));
	const bool bIsValid = true
		&& Name_StartLocation == ClassReps[(int32)ENetFields_Private::StartLocation].Property->GetFName()
		&& Name_bDestroyOnConfirmation == ClassReps[(int32)ENetFields_Private::bDestroyOnConfirmation].Property->GetFName()
		&& Name_SourceActor == ClassReps[(int32)ENetFields_Private::SourceActor].Property->GetFName()
		&& Name_Filter == ClassReps[(int32)ENetFields_Private::Filter].Property->GetFName()
		&& Name_bDebug == ClassReps[(int32)ENetFields_Private::bDebug].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AGameplayAbilityTargetActor"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGameplayAbilityTargetActor);
AGameplayAbilityTargetActor::~AGameplayAbilityTargetActor() {}
// End Class AGameplayAbilityTargetActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityTargetActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGameplayAbilityTargetActor, AGameplayAbilityTargetActor::StaticClass, TEXT("AGameplayAbilityTargetActor"), &Z_Registration_Info_UClass_AGameplayAbilityTargetActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGameplayAbilityTargetActor), 4039610669U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityTargetActor_h_2048442462(TEXT("/Script/GameplayAbilities"),
	Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityTargetActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityTargetActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
