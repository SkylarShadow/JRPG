// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayAbilities/Public/Abilities/GameplayAbilityTypes.h"
#include "GameplayAbilities/Public/Abilities/GameplayAbilityTargetTypes.h"
#include "GameplayAbilities/Public/GameplayAbilitySpecHandle.h"
#include "GameplayAbilities/Public/GameplayEffectTypes.h"
#include "GameplayAbilities/Public/GameplayPrediction.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayAbilityTypes() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimInstance_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMovementComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
GAMEPLAYABILITIES_API UEnum* Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityInstancingPolicy();
GAMEPLAYABILITIES_API UEnum* Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityNetExecutionPolicy();
GAMEPLAYABILITIES_API UEnum* Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityNetSecurityPolicy();
GAMEPLAYABILITIES_API UEnum* Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityReplicationPolicy();
GAMEPLAYABILITIES_API UEnum* Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityTriggerSource();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FAbilityEndedData();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FAbilityTaskDebugMessage();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FAttributeDefaults();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilityActorInfo();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilityLocalAnimMontage();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilitySpecHandleAndPredictionKey();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilityTargetDataHandle();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectContextHandle();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEventData();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FPredictionKey();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FServerAbilityRPCBatch();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
GAMEPLAYTASKS_API UClass* Z_Construct_UClass_UGameplayTask_NoRegister();
UPackage* Z_Construct_UPackage__Script_GameplayAbilities();
// End Cross Module References

// Begin Enum EGameplayAbilityInstancingPolicy
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGameplayAbilityInstancingPolicy;
static UEnum* EGameplayAbilityInstancingPolicy_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGameplayAbilityInstancingPolicy.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGameplayAbilityInstancingPolicy.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityInstancingPolicy, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("EGameplayAbilityInstancingPolicy"));
	}
	return Z_Registration_Info_UEnum_EGameplayAbilityInstancingPolicy.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UEnum* StaticEnum<EGameplayAbilityInstancingPolicy::Type>()
{
	return EGameplayAbilityInstancingPolicy_StaticEnum();
}
struct Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityInstancingPolicy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 *\x09How the ability is instanced when executed. This limits what an ability can do in its implementation. For example, a NonInstanced\n\x09 *\x09""Ability cannot have state. It is probably unsafe for an InstancedPerActor ability to have latent actions, etc.\n\x09 */" },
#endif
		{ "InstancedPerActor.Comment", "// Each actor gets their own instance of this ability. State can be saved, replication is possible.\n" },
		{ "InstancedPerActor.Name", "EGameplayAbilityInstancingPolicy::InstancedPerActor" },
		{ "InstancedPerActor.ToolTip", "Each actor gets their own instance of this ability. State can be saved, replication is possible." },
		{ "InstancedPerExecution.Comment", "// We instance this ability each time it is executed. Replication currently unsupported.\n" },
		{ "InstancedPerExecution.Name", "EGameplayAbilityInstancingPolicy::InstancedPerExecution" },
		{ "InstancedPerExecution.ToolTip", "We instance this ability each time it is executed. Replication currently unsupported." },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTypes.h" },
		{ "NonInstanced.Comment", "// This ability is never instanced. Anything that executes the ability is operating on the CDO.\n" },
		{ "NonInstanced.Name", "EGameplayAbilityInstancingPolicy::NonInstanced" },
		{ "NonInstanced.ToolTip", "This ability is never instanced. Anything that executes the ability is operating on the CDO." },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How the ability is instanced when executed. This limits what an ability can do in its implementation. For example, a NonInstanced\nAbility cannot have state. It is probably unsafe for an InstancedPerActor ability to have latent actions, etc." },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGameplayAbilityInstancingPolicy::NonInstanced", (int64)EGameplayAbilityInstancingPolicy::NonInstanced },
		{ "EGameplayAbilityInstancingPolicy::InstancedPerActor", (int64)EGameplayAbilityInstancingPolicy::InstancedPerActor },
		{ "EGameplayAbilityInstancingPolicy::InstancedPerExecution", (int64)EGameplayAbilityInstancingPolicy::InstancedPerExecution },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityInstancingPolicy_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_GameplayAbilities,
	nullptr,
	"EGameplayAbilityInstancingPolicy",
	"EGameplayAbilityInstancingPolicy::Type",
	Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityInstancingPolicy_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityInstancingPolicy_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Namespaced,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityInstancingPolicy_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityInstancingPolicy_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityInstancingPolicy()
{
	if (!Z_Registration_Info_UEnum_EGameplayAbilityInstancingPolicy.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGameplayAbilityInstancingPolicy.InnerSingleton, Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityInstancingPolicy_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGameplayAbilityInstancingPolicy.InnerSingleton;
}
// End Enum EGameplayAbilityInstancingPolicy

// Begin Enum EGameplayAbilityNetExecutionPolicy
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGameplayAbilityNetExecutionPolicy;
static UEnum* EGameplayAbilityNetExecutionPolicy_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGameplayAbilityNetExecutionPolicy.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGameplayAbilityNetExecutionPolicy.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityNetExecutionPolicy, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("EGameplayAbilityNetExecutionPolicy"));
	}
	return Z_Registration_Info_UEnum_EGameplayAbilityNetExecutionPolicy.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UEnum* StaticEnum<EGameplayAbilityNetExecutionPolicy::Type>()
{
	return EGameplayAbilityNetExecutionPolicy_StaticEnum();
}
struct Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityNetExecutionPolicy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Where does an ability execute on the network. Does a client \"ask and predict\", \"ask and wait\", \"don't ask (just do it)\" */" },
#endif
		{ "LocalOnly.Comment", "// This ability will only run on the client or server that has local control\n" },
		{ "LocalOnly.DisplayName", "Local Only" },
		{ "LocalOnly.Name", "EGameplayAbilityNetExecutionPolicy::LocalOnly" },
		{ "LocalOnly.ToolTip", "This ability will only run on the client or server that has local control" },
		{ "LocalPredicted.Comment", "// Part of this ability runs predictively on the local client if there is one\n" },
		{ "LocalPredicted.DisplayName", "Local Predicted" },
		{ "LocalPredicted.Name", "EGameplayAbilityNetExecutionPolicy::LocalPredicted" },
		{ "LocalPredicted.ToolTip", "Part of this ability runs predictively on the local client if there is one" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTypes.h" },
		{ "ServerInitiated.Comment", "// This ability is initiated by the server, but will also run on the local client if one exists\n" },
		{ "ServerInitiated.DisplayName", "Server Initiated" },
		{ "ServerInitiated.Name", "EGameplayAbilityNetExecutionPolicy::ServerInitiated" },
		{ "ServerInitiated.ToolTip", "This ability is initiated by the server, but will also run on the local client if one exists" },
		{ "ServerOnly.Comment", "// This ability will only run on the server\n" },
		{ "ServerOnly.DisplayName", "Server Only" },
		{ "ServerOnly.Name", "EGameplayAbilityNetExecutionPolicy::ServerOnly" },
		{ "ServerOnly.ToolTip", "This ability will only run on the server" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Where does an ability execute on the network. Does a client \"ask and predict\", \"ask and wait\", \"don't ask (just do it)\"" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGameplayAbilityNetExecutionPolicy::LocalPredicted", (int64)EGameplayAbilityNetExecutionPolicy::LocalPredicted },
		{ "EGameplayAbilityNetExecutionPolicy::LocalOnly", (int64)EGameplayAbilityNetExecutionPolicy::LocalOnly },
		{ "EGameplayAbilityNetExecutionPolicy::ServerInitiated", (int64)EGameplayAbilityNetExecutionPolicy::ServerInitiated },
		{ "EGameplayAbilityNetExecutionPolicy::ServerOnly", (int64)EGameplayAbilityNetExecutionPolicy::ServerOnly },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityNetExecutionPolicy_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_GameplayAbilities,
	nullptr,
	"EGameplayAbilityNetExecutionPolicy",
	"EGameplayAbilityNetExecutionPolicy::Type",
	Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityNetExecutionPolicy_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityNetExecutionPolicy_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Namespaced,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityNetExecutionPolicy_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityNetExecutionPolicy_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityNetExecutionPolicy()
{
	if (!Z_Registration_Info_UEnum_EGameplayAbilityNetExecutionPolicy.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGameplayAbilityNetExecutionPolicy.InnerSingleton, Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityNetExecutionPolicy_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGameplayAbilityNetExecutionPolicy.InnerSingleton;
}
// End Enum EGameplayAbilityNetExecutionPolicy

// Begin Enum EGameplayAbilityNetSecurityPolicy
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGameplayAbilityNetSecurityPolicy;
static UEnum* EGameplayAbilityNetSecurityPolicy_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGameplayAbilityNetSecurityPolicy.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGameplayAbilityNetSecurityPolicy.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityNetSecurityPolicy, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("EGameplayAbilityNetSecurityPolicy"));
	}
	return Z_Registration_Info_UEnum_EGameplayAbilityNetSecurityPolicy.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UEnum* StaticEnum<EGameplayAbilityNetSecurityPolicy::Type>()
{
	return EGameplayAbilityNetSecurityPolicy_StaticEnum();
}
struct Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityNetSecurityPolicy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClientOrServer.Comment", "// No security requirements. Client or server can trigger execution and termination of this ability freely.\n" },
		{ "ClientOrServer.DisplayName", "Client Or Server" },
		{ "ClientOrServer.Name", "EGameplayAbilityNetSecurityPolicy::ClientOrServer" },
		{ "ClientOrServer.ToolTip", "No security requirements. Client or server can trigger execution and termination of this ability freely." },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** What protections does this ability have? Should the client be allowed to request changes to the execution of the ability? */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTypes.h" },
		{ "ServerOnly.Comment", "// Server controls both execution and termination of this ability. A client making any requests will be ignored.\n" },
		{ "ServerOnly.DisplayName", "Server Only" },
		{ "ServerOnly.Name", "EGameplayAbilityNetSecurityPolicy::ServerOnly" },
		{ "ServerOnly.ToolTip", "Server controls both execution and termination of this ability. A client making any requests will be ignored." },
		{ "ServerOnlyExecution.Comment", "// A client requesting execution of this ability will be ignored by the server. Clients can still request that the server cancel or end this ability.\n" },
		{ "ServerOnlyExecution.DisplayName", "Server Only Execution" },
		{ "ServerOnlyExecution.Name", "EGameplayAbilityNetSecurityPolicy::ServerOnlyExecution" },
		{ "ServerOnlyExecution.ToolTip", "A client requesting execution of this ability will be ignored by the server. Clients can still request that the server cancel or end this ability." },
		{ "ServerOnlyTermination.Comment", "// A client requesting cancellation or ending of this ability will be ignored by the server. Clients can still request execution of the ability.\n" },
		{ "ServerOnlyTermination.DisplayName", "Server Only Termination" },
		{ "ServerOnlyTermination.Name", "EGameplayAbilityNetSecurityPolicy::ServerOnlyTermination" },
		{ "ServerOnlyTermination.ToolTip", "A client requesting cancellation or ending of this ability will be ignored by the server. Clients can still request execution of the ability." },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "What protections does this ability have? Should the client be allowed to request changes to the execution of the ability?" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGameplayAbilityNetSecurityPolicy::ClientOrServer", (int64)EGameplayAbilityNetSecurityPolicy::ClientOrServer },
		{ "EGameplayAbilityNetSecurityPolicy::ServerOnlyExecution", (int64)EGameplayAbilityNetSecurityPolicy::ServerOnlyExecution },
		{ "EGameplayAbilityNetSecurityPolicy::ServerOnlyTermination", (int64)EGameplayAbilityNetSecurityPolicy::ServerOnlyTermination },
		{ "EGameplayAbilityNetSecurityPolicy::ServerOnly", (int64)EGameplayAbilityNetSecurityPolicy::ServerOnly },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityNetSecurityPolicy_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_GameplayAbilities,
	nullptr,
	"EGameplayAbilityNetSecurityPolicy",
	"EGameplayAbilityNetSecurityPolicy::Type",
	Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityNetSecurityPolicy_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityNetSecurityPolicy_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Namespaced,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityNetSecurityPolicy_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityNetSecurityPolicy_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityNetSecurityPolicy()
{
	if (!Z_Registration_Info_UEnum_EGameplayAbilityNetSecurityPolicy.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGameplayAbilityNetSecurityPolicy.InnerSingleton, Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityNetSecurityPolicy_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGameplayAbilityNetSecurityPolicy.InnerSingleton;
}
// End Enum EGameplayAbilityNetSecurityPolicy

// Begin Enum EGameplayAbilityReplicationPolicy
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGameplayAbilityReplicationPolicy;
static UEnum* EGameplayAbilityReplicationPolicy_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGameplayAbilityReplicationPolicy.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGameplayAbilityReplicationPolicy.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityReplicationPolicy, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("EGameplayAbilityReplicationPolicy"));
	}
	return Z_Registration_Info_UEnum_EGameplayAbilityReplicationPolicy.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UEnum* StaticEnum<EGameplayAbilityReplicationPolicy::Type>()
{
	return EGameplayAbilityReplicationPolicy_StaticEnum();
}
struct Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityReplicationPolicy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** How an ability replicates state/events to everyone on the network */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTypes.h" },
		{ "ReplicateNo.Comment", "// We don't replicate the instance of the ability to anyone.\n" },
		{ "ReplicateNo.DisplayName", "Do Not Replicate" },
		{ "ReplicateNo.Name", "EGameplayAbilityReplicationPolicy::ReplicateNo" },
		{ "ReplicateNo.ToolTip", "We don't replicate the instance of the ability to anyone." },
		{ "ReplicateYes.Comment", "// We replicate the instance of the ability to the owner.\n" },
		{ "ReplicateYes.DisplayName", "Replicate" },
		{ "ReplicateYes.Name", "EGameplayAbilityReplicationPolicy::ReplicateYes" },
		{ "ReplicateYes.ToolTip", "We replicate the instance of the ability to the owner." },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How an ability replicates state/events to everyone on the network" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGameplayAbilityReplicationPolicy::ReplicateNo", (int64)EGameplayAbilityReplicationPolicy::ReplicateNo },
		{ "EGameplayAbilityReplicationPolicy::ReplicateYes", (int64)EGameplayAbilityReplicationPolicy::ReplicateYes },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityReplicationPolicy_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_GameplayAbilities,
	nullptr,
	"EGameplayAbilityReplicationPolicy",
	"EGameplayAbilityReplicationPolicy::Type",
	Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityReplicationPolicy_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityReplicationPolicy_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Namespaced,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityReplicationPolicy_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityReplicationPolicy_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityReplicationPolicy()
{
	if (!Z_Registration_Info_UEnum_EGameplayAbilityReplicationPolicy.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGameplayAbilityReplicationPolicy.InnerSingleton, Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityReplicationPolicy_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGameplayAbilityReplicationPolicy.InnerSingleton;
}
// End Enum EGameplayAbilityReplicationPolicy

// Begin Enum EGameplayAbilityTriggerSource
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGameplayAbilityTriggerSource;
static UEnum* EGameplayAbilityTriggerSource_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGameplayAbilityTriggerSource.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGameplayAbilityTriggerSource.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityTriggerSource, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("EGameplayAbilityTriggerSource"));
	}
	return Z_Registration_Info_UEnum_EGameplayAbilityTriggerSource.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UEnum* StaticEnum<EGameplayAbilityTriggerSource::Type>()
{
	return EGameplayAbilityTriggerSource_StaticEnum();
}
struct Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityTriggerSource_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\x09""Defines what type of trigger will activate the ability, paired to a tag */" },
#endif
		{ "GameplayEvent.Comment", "// Triggered from a gameplay event, will come with payload\n" },
		{ "GameplayEvent.Name", "EGameplayAbilityTriggerSource::GameplayEvent" },
		{ "GameplayEvent.ToolTip", "Triggered from a gameplay event, will come with payload" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTypes.h" },
		{ "OwnedTagAdded.Comment", "// Triggered if the ability's owner gets a tag added, triggered once whenever it's added\n" },
		{ "OwnedTagAdded.Name", "EGameplayAbilityTriggerSource::OwnedTagAdded" },
		{ "OwnedTagAdded.ToolTip", "Triggered if the ability's owner gets a tag added, triggered once whenever it's added" },
		{ "OwnedTagPresent.Comment", "// Triggered if the ability's owner gets tag added, removed when the tag is removed\n" },
		{ "OwnedTagPresent.Name", "EGameplayAbilityTriggerSource::OwnedTagPresent" },
		{ "OwnedTagPresent.ToolTip", "Triggered if the ability's owner gets tag added, removed when the tag is removed" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Defines what type of trigger will activate the ability, paired to a tag" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGameplayAbilityTriggerSource::GameplayEvent", (int64)EGameplayAbilityTriggerSource::GameplayEvent },
		{ "EGameplayAbilityTriggerSource::OwnedTagAdded", (int64)EGameplayAbilityTriggerSource::OwnedTagAdded },
		{ "EGameplayAbilityTriggerSource::OwnedTagPresent", (int64)EGameplayAbilityTriggerSource::OwnedTagPresent },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityTriggerSource_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_GameplayAbilities,
	nullptr,
	"EGameplayAbilityTriggerSource",
	"EGameplayAbilityTriggerSource::Type",
	Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityTriggerSource_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityTriggerSource_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Namespaced,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityTriggerSource_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityTriggerSource_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityTriggerSource()
{
	if (!Z_Registration_Info_UEnum_EGameplayAbilityTriggerSource.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGameplayAbilityTriggerSource.InnerSingleton, Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityTriggerSource_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGameplayAbilityTriggerSource.InnerSingleton;
}
// End Enum EGameplayAbilityTriggerSource

// Begin ScriptStruct FGameplayAbilityActorInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayAbilityActorInfo;
class UScriptStruct* FGameplayAbilityActorInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayAbilityActorInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayAbilityActorInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayAbilityActorInfo, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("GameplayAbilityActorInfo"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayAbilityActorInfo.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FGameplayAbilityActorInfo>()
{
	return FGameplayAbilityActorInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGameplayAbilityActorInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\x09""FGameplayAbilityActorInfo\n *\n *\x09""Cached data associated with an Actor using an Ability.\n *\x09\x09-Initialized from an AActor* in InitFromActor\n *\x09\x09-Abilities use this to know what to actor upon. E.g., instead of being coupled to a specific actor class.\n *\x09\x09-These are generally passed around as pointers to support polymorphism.\n *\x09\x09-Projects can override UAbilitySystemGlobals::AllocAbilityActorInfo to override the default struct type that is created.\n *\n */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "FGameplayAbilityActorInfo\n\nCached data associated with an Actor using an Ability.\n        -Initialized from an AActor* in InitFromActor\n        -Abilities use this to know what to actor upon. E.g., instead of being coupled to a specific actor class.\n        -These are generally passed around as pointers to support polymorphism.\n        -Projects can override UAbilitySystemGlobals::AllocAbilityActorInfo to override the default struct type that is created." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerActor_MetaData[] = {
		{ "Category", "ActorInfo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The actor that owns the abilities, shouldn't be null */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The actor that owns the abilities, shouldn't be null" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AvatarActor_MetaData[] = {
		{ "Category", "ActorInfo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The physical representation of the owner, used for targeting and animation. This will often be null! */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The physical representation of the owner, used for targeting and animation. This will often be null!" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerController_MetaData[] = {
		{ "Category", "ActorInfo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** PlayerController associated with the owning actor. This will often be null! */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "PlayerController associated with the owning actor. This will often be null!" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemComponent_MetaData[] = {
		{ "Category", "ActorInfo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Ability System component associated with the owner actor, shouldn't be null */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Ability System component associated with the owner actor, shouldn't be null" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMeshComponent_MetaData[] = {
		{ "Category", "ActorInfo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Skeletal mesh of the avatar actor. Often null */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Skeletal mesh of the avatar actor. Often null" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimInstance_MetaData[] = {
		{ "Category", "ActorInfo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Anim instance of the avatar actor. Often null */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Anim instance of the avatar actor. Often null" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementComponent_MetaData[] = {
		{ "Category", "ActorInfo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Movement component of the avatar actor. Often null */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Movement component of the avatar actor. Often null" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AffectedAnimInstanceTag_MetaData[] = {
		{ "Category", "ActorInfo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The linked Anim Instance that this component will play montages in. Use NAME_None for the main anim instance. */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The linked Anim Instance that this component will play montages in. Use NAME_None for the main anim instance." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_OwnerActor;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_AvatarActor;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_PlayerController;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_AbilitySystemComponent;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_SkeletalMeshComponent;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_AnimInstance;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_MovementComponent;
	static const UECodeGen_Private::FNamePropertyParams NewProp_AffectedAnimInstanceTag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayAbilityActorInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FGameplayAbilityActorInfo_Statics::NewProp_OwnerActor = { "OwnerActor", nullptr, (EPropertyFlags)0x0014000000000014, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayAbilityActorInfo, OwnerActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerActor_MetaData), NewProp_OwnerActor_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FGameplayAbilityActorInfo_Statics::NewProp_AvatarActor = { "AvatarActor", nullptr, (EPropertyFlags)0x0014000000000014, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayAbilityActorInfo, AvatarActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AvatarActor_MetaData), NewProp_AvatarActor_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FGameplayAbilityActorInfo_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0014000000000014, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayAbilityActorInfo, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerController_MetaData), NewProp_PlayerController_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FGameplayAbilityActorInfo_Statics::NewProp_AbilitySystemComponent = { "AbilitySystemComponent", nullptr, (EPropertyFlags)0x001400000008001c, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayAbilityActorInfo, AbilitySystemComponent), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilitySystemComponent_MetaData), NewProp_AbilitySystemComponent_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FGameplayAbilityActorInfo_Statics::NewProp_SkeletalMeshComponent = { "SkeletalMeshComponent", nullptr, (EPropertyFlags)0x001400000008001c, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayAbilityActorInfo, SkeletalMeshComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkeletalMeshComponent_MetaData), NewProp_SkeletalMeshComponent_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FGameplayAbilityActorInfo_Statics::NewProp_AnimInstance = { "AnimInstance", nullptr, (EPropertyFlags)0x0014000000000014, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayAbilityActorInfo, AnimInstance), Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimInstance_MetaData), NewProp_AnimInstance_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FGameplayAbilityActorInfo_Statics::NewProp_MovementComponent = { "MovementComponent", nullptr, (EPropertyFlags)0x001400000008001c, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayAbilityActorInfo, MovementComponent), Z_Construct_UClass_UMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementComponent_MetaData), NewProp_MovementComponent_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FGameplayAbilityActorInfo_Statics::NewProp_AffectedAnimInstanceTag = { "AffectedAnimInstanceTag", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayAbilityActorInfo, AffectedAnimInstanceTag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AffectedAnimInstanceTag_MetaData), NewProp_AffectedAnimInstanceTag_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayAbilityActorInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilityActorInfo_Statics::NewProp_OwnerActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilityActorInfo_Statics::NewProp_AvatarActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilityActorInfo_Statics::NewProp_PlayerController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilityActorInfo_Statics::NewProp_AbilitySystemComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilityActorInfo_Statics::NewProp_SkeletalMeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilityActorInfo_Statics::NewProp_AnimInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilityActorInfo_Statics::NewProp_MovementComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilityActorInfo_Statics::NewProp_AffectedAnimInstanceTag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilityActorInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayAbilityActorInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
	nullptr,
	&NewStructOps,
	"GameplayAbilityActorInfo",
	Z_Construct_UScriptStruct_FGameplayAbilityActorInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilityActorInfo_Statics::PropPointers),
	sizeof(FGameplayAbilityActorInfo),
	alignof(FGameplayAbilityActorInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000205),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilityActorInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGameplayAbilityActorInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilityActorInfo()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayAbilityActorInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayAbilityActorInfo.InnerSingleton, Z_Construct_UScriptStruct_FGameplayAbilityActorInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GameplayAbilityActorInfo.InnerSingleton;
}
// End ScriptStruct FGameplayAbilityActorInfo

// Begin ScriptStruct FGameplayAbilityLocalAnimMontage
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayAbilityLocalAnimMontage;
class UScriptStruct* FGameplayAbilityLocalAnimMontage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayAbilityLocalAnimMontage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayAbilityLocalAnimMontage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayAbilityLocalAnimMontage, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("GameplayAbilityLocalAnimMontage"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayAbilityLocalAnimMontage.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FGameplayAbilityLocalAnimMontage>()
{
	return FGameplayAbilityLocalAnimMontage::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGameplayAbilityLocalAnimMontage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Data about montages that were played locally (all montages in case of server. predictive montages in case of client). Never replicated directly. */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Data about montages that were played locally (all montages in case of server. predictive montages in case of client). Never replicated directly." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimMontage_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** What montage is being played */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "What montage is being played" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayInstanceId_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** ID tied to a particular play of a montage, used to trigger replication when the same montage is played multiple times. This ID wraps around when it reaches its max value.  */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ID tied to a particular play of a montage, used to trigger replication when the same montage is played multiple times. This ID wraps around when it reaches its max value." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PredictionKey_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Prediction key that started the montage play */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Prediction key that started the montage play" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimatingAbility_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The ability, if any, that instigated this montage */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The ability, if any, that instigated this montage" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimMontage;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PlayInstanceId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PredictionKey;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_AnimatingAbility;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayAbilityLocalAnimMontage>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGameplayAbilityLocalAnimMontage_Statics::NewProp_AnimMontage = { "AnimMontage", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayAbilityLocalAnimMontage, AnimMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimMontage_MetaData), NewProp_AnimMontage_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGameplayAbilityLocalAnimMontage_Statics::NewProp_PlayInstanceId = { "PlayInstanceId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayAbilityLocalAnimMontage, PlayInstanceId), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayInstanceId_MetaData), NewProp_PlayInstanceId_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayAbilityLocalAnimMontage_Statics::NewProp_PredictionKey = { "PredictionKey", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayAbilityLocalAnimMontage, PredictionKey), Z_Construct_UScriptStruct_FPredictionKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PredictionKey_MetaData), NewProp_PredictionKey_MetaData) }; // 3974026274
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FGameplayAbilityLocalAnimMontage_Statics::NewProp_AnimatingAbility = { "AnimatingAbility", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayAbilityLocalAnimMontage, AnimatingAbility), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimatingAbility_MetaData), NewProp_AnimatingAbility_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayAbilityLocalAnimMontage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilityLocalAnimMontage_Statics::NewProp_AnimMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilityLocalAnimMontage_Statics::NewProp_PlayInstanceId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilityLocalAnimMontage_Statics::NewProp_PredictionKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilityLocalAnimMontage_Statics::NewProp_AnimatingAbility,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilityLocalAnimMontage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayAbilityLocalAnimMontage_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
	nullptr,
	&NewStructOps,
	"GameplayAbilityLocalAnimMontage",
	Z_Construct_UScriptStruct_FGameplayAbilityLocalAnimMontage_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilityLocalAnimMontage_Statics::PropPointers),
	sizeof(FGameplayAbilityLocalAnimMontage),
	alignof(FGameplayAbilityLocalAnimMontage),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilityLocalAnimMontage_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGameplayAbilityLocalAnimMontage_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilityLocalAnimMontage()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayAbilityLocalAnimMontage.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayAbilityLocalAnimMontage.InnerSingleton, Z_Construct_UScriptStruct_FGameplayAbilityLocalAnimMontage_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GameplayAbilityLocalAnimMontage.InnerSingleton;
}
// End ScriptStruct FGameplayAbilityLocalAnimMontage

// Begin ScriptStruct FGameplayEventData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayEventData;
class UScriptStruct* FGameplayEventData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayEventData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayEventData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayEventData, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("GameplayEventData"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayEventData.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FGameplayEventData>()
{
	return FGameplayEventData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGameplayEventData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Metadata for a tag-based Gameplay Event, that can activate other abilities or run ability-specific logic */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Metadata for a tag-based Gameplay Event, that can activate other abilities or run ability-specific logic" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventTag_MetaData[] = {
		{ "Category", "GameplayAbilityTriggerPayload" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Tag of the event that triggered this */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tag of the event that triggered this" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Instigator_MetaData[] = {
		{ "Category", "GameplayAbilityTriggerPayload" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The instigator of the event */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTypes.h" },
		{ "NativeConstTemplateArg", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The instigator of the event" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "Category", "GameplayAbilityTriggerPayload" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The target of the event */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTypes.h" },
		{ "NativeConstTemplateArg", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The target of the event" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OptionalObject_MetaData[] = {
		{ "Category", "GameplayAbilityTriggerPayload" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** An optional ability-specific object to be passed though the event */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTypes.h" },
		{ "NativeConstTemplateArg", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "An optional ability-specific object to be passed though the event" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OptionalObject2_MetaData[] = {
		{ "Category", "GameplayAbilityTriggerPayload" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** A second optional ability-specific object to be passed though the event */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTypes.h" },
		{ "NativeConstTemplateArg", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A second optional ability-specific object to be passed though the event" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContextHandle_MetaData[] = {
		{ "Category", "GameplayAbilityTriggerPayload" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Polymorphic context information */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Polymorphic context information" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InstigatorTags_MetaData[] = {
		{ "Category", "GameplayAbilityTriggerPayload" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Tags that the instigator has */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tags that the instigator has" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetTags_MetaData[] = {
		{ "Category", "GameplayAbilityTriggerPayload" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Tags that the target has */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tags that the target has" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventMagnitude_MetaData[] = {
		{ "Category", "GameplayAbilityTriggerPayload" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The magnitude of the triggering event */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The magnitude of the triggering event" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetData_MetaData[] = {
		{ "Category", "GameplayAbilityTriggerPayload" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The polymorphic target information for the event */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The polymorphic target information for the event" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_EventTag;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Instigator;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OptionalObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OptionalObject2;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ContextHandle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InstigatorTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetTags;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EventMagnitude;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayEventData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayEventData_Statics::NewProp_EventTag = { "EventTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayEventData, EventTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventTag_MetaData), NewProp_EventTag_MetaData) }; // 1298103297
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGameplayEventData_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayEventData, Instigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Instigator_MetaData), NewProp_Instigator_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGameplayEventData_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayEventData, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGameplayEventData_Statics::NewProp_OptionalObject = { "OptionalObject", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayEventData, OptionalObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OptionalObject_MetaData), NewProp_OptionalObject_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGameplayEventData_Statics::NewProp_OptionalObject2 = { "OptionalObject2", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayEventData, OptionalObject2), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OptionalObject2_MetaData), NewProp_OptionalObject2_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayEventData_Statics::NewProp_ContextHandle = { "ContextHandle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayEventData, ContextHandle), Z_Construct_UScriptStruct_FGameplayEffectContextHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContextHandle_MetaData), NewProp_ContextHandle_MetaData) }; // 3292467274
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayEventData_Statics::NewProp_InstigatorTags = { "InstigatorTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayEventData, InstigatorTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InstigatorTags_MetaData), NewProp_InstigatorTags_MetaData) }; // 3352185621
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayEventData_Statics::NewProp_TargetTags = { "TargetTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayEventData, TargetTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetTags_MetaData), NewProp_TargetTags_MetaData) }; // 3352185621
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGameplayEventData_Statics::NewProp_EventMagnitude = { "EventMagnitude", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayEventData, EventMagnitude), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventMagnitude_MetaData), NewProp_EventMagnitude_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayEventData_Statics::NewProp_TargetData = { "TargetData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayEventData, TargetData), Z_Construct_UScriptStruct_FGameplayAbilityTargetDataHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetData_MetaData), NewProp_TargetData_MetaData) }; // 802803486
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayEventData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEventData_Statics::NewProp_EventTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEventData_Statics::NewProp_Instigator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEventData_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEventData_Statics::NewProp_OptionalObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEventData_Statics::NewProp_OptionalObject2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEventData_Statics::NewProp_ContextHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEventData_Statics::NewProp_InstigatorTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEventData_Statics::NewProp_TargetTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEventData_Statics::NewProp_EventMagnitude,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEventData_Statics::NewProp_TargetData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEventData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayEventData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
	nullptr,
	&NewStructOps,
	"GameplayEventData",
	Z_Construct_UScriptStruct_FGameplayEventData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEventData_Statics::PropPointers),
	sizeof(FGameplayEventData),
	alignof(FGameplayEventData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEventData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGameplayEventData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGameplayEventData()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayEventData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayEventData.InnerSingleton, Z_Construct_UScriptStruct_FGameplayEventData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GameplayEventData.InnerSingleton;
}
// End ScriptStruct FGameplayEventData

// Begin ScriptStruct FAbilityEndedData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AbilityEndedData;
class UScriptStruct* FAbilityEndedData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AbilityEndedData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AbilityEndedData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAbilityEndedData, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("AbilityEndedData"));
	}
	return Z_Registration_Info_UScriptStruct_AbilityEndedData.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FAbilityEndedData>()
{
	return FAbilityEndedData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAbilityEndedData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Ability Ended Data */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Ability Ended Data" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityThatEnded_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Ability that ended, normally instance but could be CDO */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Ability that ended, normally instance but could be CDO" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySpecHandle_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Specific ability spec that ended */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Specific ability spec that ended" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bReplicateEndAbility_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Rather to replicate the ability to ending */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Rather to replicate the ability to ending" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWasCancelled_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** True if this was cancelled deliberately, false if it ended normally */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "True if this was cancelled deliberately, false if it ended normally" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilityThatEnded;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AbilitySpecHandle;
	static void NewProp_bReplicateEndAbility_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReplicateEndAbility;
	static void NewProp_bWasCancelled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasCancelled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAbilityEndedData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAbilityEndedData_Statics::NewProp_AbilityThatEnded = { "AbilityThatEnded", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAbilityEndedData, AbilityThatEnded), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityThatEnded_MetaData), NewProp_AbilityThatEnded_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAbilityEndedData_Statics::NewProp_AbilitySpecHandle = { "AbilitySpecHandle", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAbilityEndedData, AbilitySpecHandle), Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilitySpecHandle_MetaData), NewProp_AbilitySpecHandle_MetaData) }; // 1889603138
void Z_Construct_UScriptStruct_FAbilityEndedData_Statics::NewProp_bReplicateEndAbility_SetBit(void* Obj)
{
	((FAbilityEndedData*)Obj)->bReplicateEndAbility = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAbilityEndedData_Statics::NewProp_bReplicateEndAbility = { "bReplicateEndAbility", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAbilityEndedData), &Z_Construct_UScriptStruct_FAbilityEndedData_Statics::NewProp_bReplicateEndAbility_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bReplicateEndAbility_MetaData), NewProp_bReplicateEndAbility_MetaData) };
void Z_Construct_UScriptStruct_FAbilityEndedData_Statics::NewProp_bWasCancelled_SetBit(void* Obj)
{
	((FAbilityEndedData*)Obj)->bWasCancelled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAbilityEndedData_Statics::NewProp_bWasCancelled = { "bWasCancelled", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAbilityEndedData), &Z_Construct_UScriptStruct_FAbilityEndedData_Statics::NewProp_bWasCancelled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWasCancelled_MetaData), NewProp_bWasCancelled_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAbilityEndedData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbilityEndedData_Statics::NewProp_AbilityThatEnded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbilityEndedData_Statics::NewProp_AbilitySpecHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbilityEndedData_Statics::NewProp_bReplicateEndAbility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbilityEndedData_Statics::NewProp_bWasCancelled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAbilityEndedData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAbilityEndedData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
	nullptr,
	&NewStructOps,
	"AbilityEndedData",
	Z_Construct_UScriptStruct_FAbilityEndedData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAbilityEndedData_Statics::PropPointers),
	sizeof(FAbilityEndedData),
	alignof(FAbilityEndedData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAbilityEndedData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAbilityEndedData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAbilityEndedData()
{
	if (!Z_Registration_Info_UScriptStruct_AbilityEndedData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AbilityEndedData.InnerSingleton, Z_Construct_UScriptStruct_FAbilityEndedData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AbilityEndedData.InnerSingleton;
}
// End ScriptStruct FAbilityEndedData

// Begin ScriptStruct FAttributeDefaults
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AttributeDefaults;
class UScriptStruct* FAttributeDefaults::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AttributeDefaults.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AttributeDefaults.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAttributeDefaults, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("AttributeDefaults"));
	}
	return Z_Registration_Info_UScriptStruct_AttributeDefaults.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FAttributeDefaults>()
{
	return FAttributeDefaults::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAttributeDefaults_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Used to initialize default values for attributes */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Used to initialize default values for attributes" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Attributes_MetaData[] = {
		{ "Category", "AttributeTest" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultStartingTable_MetaData[] = {
		{ "Category", "AttributeTest" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_Attributes;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultStartingTable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAttributeDefaults>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FAttributeDefaults_Statics::NewProp_Attributes = { "Attributes", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAttributeDefaults, Attributes), Z_Construct_UClass_UClass, Z_Construct_UClass_UAttributeSet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Attributes_MetaData), NewProp_Attributes_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAttributeDefaults_Statics::NewProp_DefaultStartingTable = { "DefaultStartingTable", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAttributeDefaults, DefaultStartingTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultStartingTable_MetaData), NewProp_DefaultStartingTable_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAttributeDefaults_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttributeDefaults_Statics::NewProp_Attributes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttributeDefaults_Statics::NewProp_DefaultStartingTable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttributeDefaults_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAttributeDefaults_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
	nullptr,
	&NewStructOps,
	"AttributeDefaults",
	Z_Construct_UScriptStruct_FAttributeDefaults_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttributeDefaults_Statics::PropPointers),
	sizeof(FAttributeDefaults),
	alignof(FAttributeDefaults),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttributeDefaults_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAttributeDefaults_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAttributeDefaults()
{
	if (!Z_Registration_Info_UScriptStruct_AttributeDefaults.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AttributeDefaults.InnerSingleton, Z_Construct_UScriptStruct_FAttributeDefaults_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AttributeDefaults.InnerSingleton;
}
// End ScriptStruct FAttributeDefaults

// Begin ScriptStruct FAbilityTaskDebugMessage
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AbilityTaskDebugMessage;
class UScriptStruct* FAbilityTaskDebugMessage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AbilityTaskDebugMessage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AbilityTaskDebugMessage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAbilityTaskDebugMessage, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("AbilityTaskDebugMessage"));
	}
	return Z_Registration_Info_UScriptStruct_AbilityTaskDebugMessage.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FAbilityTaskDebugMessage>()
{
	return FAbilityTaskDebugMessage::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAbilityTaskDebugMessage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Debug message emitted by ability tasks */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Debug message emitted by ability tasks" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FromTask_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FromTask;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAbilityTaskDebugMessage>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAbilityTaskDebugMessage_Statics::NewProp_FromTask = { "FromTask", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAbilityTaskDebugMessage, FromTask), Z_Construct_UClass_UGameplayTask_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FromTask_MetaData), NewProp_FromTask_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAbilityTaskDebugMessage_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAbilityTaskDebugMessage, Message), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Message_MetaData), NewProp_Message_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAbilityTaskDebugMessage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbilityTaskDebugMessage_Statics::NewProp_FromTask,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbilityTaskDebugMessage_Statics::NewProp_Message,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAbilityTaskDebugMessage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAbilityTaskDebugMessage_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
	nullptr,
	&NewStructOps,
	"AbilityTaskDebugMessage",
	Z_Construct_UScriptStruct_FAbilityTaskDebugMessage_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAbilityTaskDebugMessage_Statics::PropPointers),
	sizeof(FAbilityTaskDebugMessage),
	alignof(FAbilityTaskDebugMessage),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAbilityTaskDebugMessage_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAbilityTaskDebugMessage_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAbilityTaskDebugMessage()
{
	if (!Z_Registration_Info_UScriptStruct_AbilityTaskDebugMessage.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AbilityTaskDebugMessage.InnerSingleton, Z_Construct_UScriptStruct_FAbilityTaskDebugMessage_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AbilityTaskDebugMessage.InnerSingleton;
}
// End ScriptStruct FAbilityTaskDebugMessage

// Begin ScriptStruct FServerAbilityRPCBatch
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ServerAbilityRPCBatch;
class UScriptStruct* FServerAbilityRPCBatch::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ServerAbilityRPCBatch.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ServerAbilityRPCBatch.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FServerAbilityRPCBatch, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("ServerAbilityRPCBatch"));
	}
	return Z_Registration_Info_UScriptStruct_ServerAbilityRPCBatch.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FServerAbilityRPCBatch>()
{
	return FServerAbilityRPCBatch::StaticStruct();
}
struct Z_Construct_UScriptStruct_FServerAbilityRPCBatch_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** This struct holds state to batch server RPC calls: ServerTryActivateAbility, ServerSetReplicatedTargetData, ServerEndAbility.  */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This struct holds state to batch server RPC calls: ServerTryActivateAbility, ServerSetReplicatedTargetData, ServerEndAbility." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySpecHandle_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PredictionKey_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetData_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputPressed_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ended_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Started_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Safety bool to make sure ServerTryActivate was called exactly one time in a batch */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Safety bool to make sure ServerTryActivate was called exactly one time in a batch" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AbilitySpecHandle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PredictionKey;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetData;
	static void NewProp_InputPressed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_InputPressed;
	static void NewProp_Ended_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Ended;
	static void NewProp_Started_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Started;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FServerAbilityRPCBatch>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FServerAbilityRPCBatch_Statics::NewProp_AbilitySpecHandle = { "AbilitySpecHandle", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FServerAbilityRPCBatch, AbilitySpecHandle), Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilitySpecHandle_MetaData), NewProp_AbilitySpecHandle_MetaData) }; // 1889603138
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FServerAbilityRPCBatch_Statics::NewProp_PredictionKey = { "PredictionKey", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FServerAbilityRPCBatch, PredictionKey), Z_Construct_UScriptStruct_FPredictionKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PredictionKey_MetaData), NewProp_PredictionKey_MetaData) }; // 3974026274
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FServerAbilityRPCBatch_Statics::NewProp_TargetData = { "TargetData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FServerAbilityRPCBatch, TargetData), Z_Construct_UScriptStruct_FGameplayAbilityTargetDataHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetData_MetaData), NewProp_TargetData_MetaData) }; // 802803486
void Z_Construct_UScriptStruct_FServerAbilityRPCBatch_Statics::NewProp_InputPressed_SetBit(void* Obj)
{
	((FServerAbilityRPCBatch*)Obj)->InputPressed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FServerAbilityRPCBatch_Statics::NewProp_InputPressed = { "InputPressed", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FServerAbilityRPCBatch), &Z_Construct_UScriptStruct_FServerAbilityRPCBatch_Statics::NewProp_InputPressed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputPressed_MetaData), NewProp_InputPressed_MetaData) };
void Z_Construct_UScriptStruct_FServerAbilityRPCBatch_Statics::NewProp_Ended_SetBit(void* Obj)
{
	((FServerAbilityRPCBatch*)Obj)->Ended = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FServerAbilityRPCBatch_Statics::NewProp_Ended = { "Ended", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FServerAbilityRPCBatch), &Z_Construct_UScriptStruct_FServerAbilityRPCBatch_Statics::NewProp_Ended_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ended_MetaData), NewProp_Ended_MetaData) };
void Z_Construct_UScriptStruct_FServerAbilityRPCBatch_Statics::NewProp_Started_SetBit(void* Obj)
{
	((FServerAbilityRPCBatch*)Obj)->Started = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FServerAbilityRPCBatch_Statics::NewProp_Started = { "Started", nullptr, (EPropertyFlags)0x0010000080000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FServerAbilityRPCBatch), &Z_Construct_UScriptStruct_FServerAbilityRPCBatch_Statics::NewProp_Started_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Started_MetaData), NewProp_Started_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FServerAbilityRPCBatch_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerAbilityRPCBatch_Statics::NewProp_AbilitySpecHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerAbilityRPCBatch_Statics::NewProp_PredictionKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerAbilityRPCBatch_Statics::NewProp_TargetData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerAbilityRPCBatch_Statics::NewProp_InputPressed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerAbilityRPCBatch_Statics::NewProp_Ended,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerAbilityRPCBatch_Statics::NewProp_Started,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerAbilityRPCBatch_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FServerAbilityRPCBatch_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
	nullptr,
	&NewStructOps,
	"ServerAbilityRPCBatch",
	Z_Construct_UScriptStruct_FServerAbilityRPCBatch_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerAbilityRPCBatch_Statics::PropPointers),
	sizeof(FServerAbilityRPCBatch),
	alignof(FServerAbilityRPCBatch),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerAbilityRPCBatch_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FServerAbilityRPCBatch_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FServerAbilityRPCBatch()
{
	if (!Z_Registration_Info_UScriptStruct_ServerAbilityRPCBatch.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ServerAbilityRPCBatch.InnerSingleton, Z_Construct_UScriptStruct_FServerAbilityRPCBatch_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ServerAbilityRPCBatch.InnerSingleton;
}
// End ScriptStruct FServerAbilityRPCBatch

// Begin ScriptStruct FGameplayAbilitySpecHandleAndPredictionKey
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayAbilitySpecHandleAndPredictionKey;
class UScriptStruct* FGameplayAbilitySpecHandleAndPredictionKey::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayAbilitySpecHandleAndPredictionKey.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayAbilitySpecHandleAndPredictionKey.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayAbilitySpecHandleAndPredictionKey, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("GameplayAbilitySpecHandleAndPredictionKey"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayAbilitySpecHandleAndPredictionKey.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FGameplayAbilitySpecHandleAndPredictionKey>()
{
	return FGameplayAbilitySpecHandleAndPredictionKey::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGameplayAbilitySpecHandleAndPredictionKey_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Used as a key for storing internal ability data */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Used as a key for storing internal ability data" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityHandle_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PredictionKeyAtCreation_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityHandle;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PredictionKeyAtCreation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayAbilitySpecHandleAndPredictionKey>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayAbilitySpecHandleAndPredictionKey_Statics::NewProp_AbilityHandle = { "AbilityHandle", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayAbilitySpecHandleAndPredictionKey, AbilityHandle), Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityHandle_MetaData), NewProp_AbilityHandle_MetaData) }; // 1889603138
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameplayAbilitySpecHandleAndPredictionKey_Statics::NewProp_PredictionKeyAtCreation = { "PredictionKeyAtCreation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayAbilitySpecHandleAndPredictionKey, PredictionKeyAtCreation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PredictionKeyAtCreation_MetaData), NewProp_PredictionKeyAtCreation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayAbilitySpecHandleAndPredictionKey_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilitySpecHandleAndPredictionKey_Statics::NewProp_AbilityHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilitySpecHandleAndPredictionKey_Statics::NewProp_PredictionKeyAtCreation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilitySpecHandleAndPredictionKey_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayAbilitySpecHandleAndPredictionKey_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
	nullptr,
	&NewStructOps,
	"GameplayAbilitySpecHandleAndPredictionKey",
	Z_Construct_UScriptStruct_FGameplayAbilitySpecHandleAndPredictionKey_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilitySpecHandleAndPredictionKey_Statics::PropPointers),
	sizeof(FGameplayAbilitySpecHandleAndPredictionKey),
	alignof(FGameplayAbilitySpecHandleAndPredictionKey),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilitySpecHandleAndPredictionKey_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGameplayAbilitySpecHandleAndPredictionKey_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilitySpecHandleAndPredictionKey()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayAbilitySpecHandleAndPredictionKey.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayAbilitySpecHandleAndPredictionKey.InnerSingleton, Z_Construct_UScriptStruct_FGameplayAbilitySpecHandleAndPredictionKey_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GameplayAbilitySpecHandleAndPredictionKey.InnerSingleton;
}
// End ScriptStruct FGameplayAbilitySpecHandleAndPredictionKey

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityTypes_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EGameplayAbilityInstancingPolicy_StaticEnum, TEXT("EGameplayAbilityInstancingPolicy"), &Z_Registration_Info_UEnum_EGameplayAbilityInstancingPolicy, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4260304452U) },
		{ EGameplayAbilityNetExecutionPolicy_StaticEnum, TEXT("EGameplayAbilityNetExecutionPolicy"), &Z_Registration_Info_UEnum_EGameplayAbilityNetExecutionPolicy, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2122806753U) },
		{ EGameplayAbilityNetSecurityPolicy_StaticEnum, TEXT("EGameplayAbilityNetSecurityPolicy"), &Z_Registration_Info_UEnum_EGameplayAbilityNetSecurityPolicy, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2339085336U) },
		{ EGameplayAbilityReplicationPolicy_StaticEnum, TEXT("EGameplayAbilityReplicationPolicy"), &Z_Registration_Info_UEnum_EGameplayAbilityReplicationPolicy, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2877877848U) },
		{ EGameplayAbilityTriggerSource_StaticEnum, TEXT("EGameplayAbilityTriggerSource"), &Z_Registration_Info_UEnum_EGameplayAbilityTriggerSource, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1303384273U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FGameplayAbilityActorInfo::StaticStruct, Z_Construct_UScriptStruct_FGameplayAbilityActorInfo_Statics::NewStructOps, TEXT("GameplayAbilityActorInfo"), &Z_Registration_Info_UScriptStruct_GameplayAbilityActorInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayAbilityActorInfo), 3163670790U) },
		{ FGameplayAbilityLocalAnimMontage::StaticStruct, Z_Construct_UScriptStruct_FGameplayAbilityLocalAnimMontage_Statics::NewStructOps, TEXT("GameplayAbilityLocalAnimMontage"), &Z_Registration_Info_UScriptStruct_GameplayAbilityLocalAnimMontage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayAbilityLocalAnimMontage), 3704641749U) },
		{ FGameplayEventData::StaticStruct, Z_Construct_UScriptStruct_FGameplayEventData_Statics::NewStructOps, TEXT("GameplayEventData"), &Z_Registration_Info_UScriptStruct_GameplayEventData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayEventData), 2042618257U) },
		{ FAbilityEndedData::StaticStruct, Z_Construct_UScriptStruct_FAbilityEndedData_Statics::NewStructOps, TEXT("AbilityEndedData"), &Z_Registration_Info_UScriptStruct_AbilityEndedData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAbilityEndedData), 2532671147U) },
		{ FAttributeDefaults::StaticStruct, Z_Construct_UScriptStruct_FAttributeDefaults_Statics::NewStructOps, TEXT("AttributeDefaults"), &Z_Registration_Info_UScriptStruct_AttributeDefaults, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAttributeDefaults), 1221481984U) },
		{ FAbilityTaskDebugMessage::StaticStruct, Z_Construct_UScriptStruct_FAbilityTaskDebugMessage_Statics::NewStructOps, TEXT("AbilityTaskDebugMessage"), &Z_Registration_Info_UScriptStruct_AbilityTaskDebugMessage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAbilityTaskDebugMessage), 1598865662U) },
		{ FServerAbilityRPCBatch::StaticStruct, Z_Construct_UScriptStruct_FServerAbilityRPCBatch_Statics::NewStructOps, TEXT("ServerAbilityRPCBatch"), &Z_Registration_Info_UScriptStruct_ServerAbilityRPCBatch, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FServerAbilityRPCBatch), 1937807222U) },
		{ FGameplayAbilitySpecHandleAndPredictionKey::StaticStruct, Z_Construct_UScriptStruct_FGameplayAbilitySpecHandleAndPredictionKey_Statics::NewStructOps, TEXT("GameplayAbilitySpecHandleAndPredictionKey"), &Z_Registration_Info_UScriptStruct_GameplayAbilitySpecHandleAndPredictionKey, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayAbilitySpecHandleAndPredictionKey), 3341146851U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityTypes_h_1264851067(TEXT("/Script/GameplayAbilities"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityTypes_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityTypes_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
