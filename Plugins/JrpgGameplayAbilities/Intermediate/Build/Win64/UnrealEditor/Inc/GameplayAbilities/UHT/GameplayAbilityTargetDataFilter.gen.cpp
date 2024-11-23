// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayAbilities/Public/Abilities/GameplayAbilityTargetDataFilter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayAbilityTargetDataFilter() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
GAMEPLAYABILITIES_API UEnum* Z_Construct_UEnum_GameplayAbilities_ETargetDataFilterSelf();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTargetDataFilter();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTargetDataFilterHandle();
UPackage* Z_Construct_UPackage__Script_GameplayAbilities();
// End Cross Module References

// Begin Enum ETargetDataFilterSelf
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETargetDataFilterSelf;
static UEnum* ETargetDataFilterSelf_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ETargetDataFilterSelf.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ETargetDataFilterSelf.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GameplayAbilities_ETargetDataFilterSelf, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("ETargetDataFilterSelf"));
	}
	return Z_Registration_Info_UEnum_ETargetDataFilterSelf.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UEnum* StaticEnum<ETargetDataFilterSelf::Type>()
{
	return ETargetDataFilterSelf_StaticEnum();
}
struct Z_Construct_UEnum_GameplayAbilities_ETargetDataFilterSelf_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Set rather it is possible to target self */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTargetDataFilter.h" },
		{ "TDFS_Any.DisplayName", "Allow self or others" },
		{ "TDFS_Any.Name", "ETargetDataFilterSelf::TDFS_Any" },
		{ "TDFS_NoOthers.DisplayName", "Filter others out" },
		{ "TDFS_NoOthers.Name", "ETargetDataFilterSelf::TDFS_NoOthers" },
		{ "TDFS_NoSelf.DisplayName", "Filter self out" },
		{ "TDFS_NoSelf.Name", "ETargetDataFilterSelf::TDFS_NoSelf" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set rather it is possible to target self" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ETargetDataFilterSelf::TDFS_Any", (int64)ETargetDataFilterSelf::TDFS_Any },
		{ "ETargetDataFilterSelf::TDFS_NoSelf", (int64)ETargetDataFilterSelf::TDFS_NoSelf },
		{ "ETargetDataFilterSelf::TDFS_NoOthers", (int64)ETargetDataFilterSelf::TDFS_NoOthers },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GameplayAbilities_ETargetDataFilterSelf_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_GameplayAbilities,
	nullptr,
	"ETargetDataFilterSelf",
	"ETargetDataFilterSelf::Type",
	Z_Construct_UEnum_GameplayAbilities_ETargetDataFilterSelf_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayAbilities_ETargetDataFilterSelf_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Namespaced,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayAbilities_ETargetDataFilterSelf_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GameplayAbilities_ETargetDataFilterSelf_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_GameplayAbilities_ETargetDataFilterSelf()
{
	if (!Z_Registration_Info_UEnum_ETargetDataFilterSelf.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETargetDataFilterSelf.InnerSingleton, Z_Construct_UEnum_GameplayAbilities_ETargetDataFilterSelf_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ETargetDataFilterSelf.InnerSingleton;
}
// End Enum ETargetDataFilterSelf

// Begin ScriptStruct FGameplayTargetDataFilter
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayTargetDataFilter;
class UScriptStruct* FGameplayTargetDataFilter::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayTargetDataFilter.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayTargetDataFilter.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayTargetDataFilter, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("GameplayTargetDataFilter"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayTargetDataFilter.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FGameplayTargetDataFilter>()
{
	return FGameplayTargetDataFilter::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGameplayTargetDataFilter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Simple actor target filter, games can subclass this */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTargetDataFilter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple actor target filter, games can subclass this" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelfActor_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Actor we're comparing against. */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTargetDataFilter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Actor we're comparing against." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequiredActorClass_MetaData[] = {
		{ "Category", "Filter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Subclass actors must be to pass the filter. */" },
#endif
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTargetDataFilter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Subclass actors must be to pass the filter." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelfFilter_MetaData[] = {
		{ "Category", "Filter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Filter based on whether or not this actor is \"self.\" */" },
#endif
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTargetDataFilter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Filter based on whether or not this actor is \"self.\"" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bReverseFilter_MetaData[] = {
		{ "Category", "Filter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Reverses the meaning of the filter, so it will exclude all actors that pass. */" },
#endif
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTargetDataFilter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Reverses the meaning of the filter, so it will exclude all actors that pass." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SelfActor;
	static const UECodeGen_Private::FClassPropertyParams NewProp_RequiredActorClass;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SelfFilter;
	static void NewProp_bReverseFilter_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReverseFilter;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayTargetDataFilter>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGameplayTargetDataFilter_Statics::NewProp_SelfActor = { "SelfActor", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayTargetDataFilter, SelfActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelfActor_MetaData), NewProp_SelfActor_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FGameplayTargetDataFilter_Statics::NewProp_RequiredActorClass = { "RequiredActorClass", nullptr, (EPropertyFlags)0x0015000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayTargetDataFilter, RequiredActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequiredActorClass_MetaData), NewProp_RequiredActorClass_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGameplayTargetDataFilter_Statics::NewProp_SelfFilter = { "SelfFilter", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayTargetDataFilter, SelfFilter), Z_Construct_UEnum_GameplayAbilities_ETargetDataFilterSelf, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelfFilter_MetaData), NewProp_SelfFilter_MetaData) }; // 1233775921
void Z_Construct_UScriptStruct_FGameplayTargetDataFilter_Statics::NewProp_bReverseFilter_SetBit(void* Obj)
{
	((FGameplayTargetDataFilter*)Obj)->bReverseFilter = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameplayTargetDataFilter_Statics::NewProp_bReverseFilter = { "bReverseFilter", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGameplayTargetDataFilter), &Z_Construct_UScriptStruct_FGameplayTargetDataFilter_Statics::NewProp_bReverseFilter_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bReverseFilter_MetaData), NewProp_bReverseFilter_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayTargetDataFilter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayTargetDataFilter_Statics::NewProp_SelfActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayTargetDataFilter_Statics::NewProp_RequiredActorClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayTargetDataFilter_Statics::NewProp_SelfFilter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayTargetDataFilter_Statics::NewProp_bReverseFilter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTargetDataFilter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayTargetDataFilter_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
	nullptr,
	&NewStructOps,
	"GameplayTargetDataFilter",
	Z_Construct_UScriptStruct_FGameplayTargetDataFilter_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTargetDataFilter_Statics::PropPointers),
	sizeof(FGameplayTargetDataFilter),
	alignof(FGameplayTargetDataFilter),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTargetDataFilter_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGameplayTargetDataFilter_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGameplayTargetDataFilter()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayTargetDataFilter.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayTargetDataFilter.InnerSingleton, Z_Construct_UScriptStruct_FGameplayTargetDataFilter_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GameplayTargetDataFilter.InnerSingleton;
}
// End ScriptStruct FGameplayTargetDataFilter

// Begin ScriptStruct FGameplayTargetDataFilterHandle
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayTargetDataFilterHandle;
class UScriptStruct* FGameplayTargetDataFilterHandle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayTargetDataFilterHandle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayTargetDataFilterHandle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayTargetDataFilterHandle, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("GameplayTargetDataFilterHandle"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayTargetDataFilterHandle.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FGameplayTargetDataFilterHandle>()
{
	return FGameplayTargetDataFilterHandle::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGameplayTargetDataFilterHandle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Polymorphic handle to filter structure that handles checking if actors should be targeted */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTargetDataFilter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Polymorphic handle to filter structure that handles checking if actors should be targeted" },
#endif
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayTargetDataFilterHandle>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayTargetDataFilterHandle_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
	nullptr,
	&NewStructOps,
	"GameplayTargetDataFilterHandle",
	nullptr,
	0,
	sizeof(FGameplayTargetDataFilterHandle),
	alignof(FGameplayTargetDataFilterHandle),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTargetDataFilterHandle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGameplayTargetDataFilterHandle_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGameplayTargetDataFilterHandle()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayTargetDataFilterHandle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayTargetDataFilterHandle.InnerSingleton, Z_Construct_UScriptStruct_FGameplayTargetDataFilterHandle_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GameplayTargetDataFilterHandle.InnerSingleton;
}
// End ScriptStruct FGameplayTargetDataFilterHandle

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityTargetDataFilter_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ETargetDataFilterSelf_StaticEnum, TEXT("ETargetDataFilterSelf"), &Z_Registration_Info_UEnum_ETargetDataFilterSelf, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1233775921U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FGameplayTargetDataFilter::StaticStruct, Z_Construct_UScriptStruct_FGameplayTargetDataFilter_Statics::NewStructOps, TEXT("GameplayTargetDataFilter"), &Z_Registration_Info_UScriptStruct_GameplayTargetDataFilter, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayTargetDataFilter), 3861258559U) },
		{ FGameplayTargetDataFilterHandle::StaticStruct, Z_Construct_UScriptStruct_FGameplayTargetDataFilterHandle_Statics::NewStructOps, TEXT("GameplayTargetDataFilterHandle"), &Z_Registration_Info_UScriptStruct_GameplayTargetDataFilterHandle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayTargetDataFilterHandle), 1470987265U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityTargetDataFilter_h_1128353944(TEXT("/Script/GameplayAbilities"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityTargetDataFilter_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityTargetDataFilter_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityTargetDataFilter_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityTargetDataFilter_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
