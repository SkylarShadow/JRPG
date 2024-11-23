// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayAbilities/Public/GameplayCueSet.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayCueSet() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayCueSet();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayCueSet_NoRegister();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayCueNotifyData();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
UPackage* Z_Construct_UPackage__Script_GameplayAbilities();
// End Cross Module References

// Begin ScriptStruct FGameplayCueNotifyData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayCueNotifyData;
class UScriptStruct* FGameplayCueNotifyData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayCueNotifyData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayCueNotifyData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayCueNotifyData, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("GameplayCueNotifyData"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayCueNotifyData.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FGameplayCueNotifyData>()
{
	return FGameplayCueNotifyData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGameplayCueNotifyData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameplayCueSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameplayCueTag_MetaData[] = {
		{ "Category", "GameplayCue" },
		{ "ModuleRelativePath", "Public/GameplayCueSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameplayCueNotifyObj_MetaData[] = {
		{ "AllowedClasses", "/Script/GameplayAbilities.GameplayCueNotify_Static, /Script/GameplayAbilities.GameplayCueNotify_Actor" },
		{ "Category", "GameplayCue" },
		{ "ModuleRelativePath", "Public/GameplayCueSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoadedGameplayCueClass_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayCueSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayCueTag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayCueNotifyObj;
	static const UECodeGen_Private::FClassPropertyParams NewProp_LoadedGameplayCueClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayCueNotifyData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayCueNotifyData_Statics::NewProp_GameplayCueTag = { "GameplayCueTag", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayCueNotifyData, GameplayCueTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameplayCueTag_MetaData), NewProp_GameplayCueTag_MetaData) }; // 1298103297
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayCueNotifyData_Statics::NewProp_GameplayCueNotifyObj = { "GameplayCueNotifyObj", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayCueNotifyData, GameplayCueNotifyObj), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameplayCueNotifyObj_MetaData), NewProp_GameplayCueNotifyObj_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FGameplayCueNotifyData_Statics::NewProp_LoadedGameplayCueClass = { "LoadedGameplayCueClass", nullptr, (EPropertyFlags)0x0114000000002000, UECodeGen_Private::EPropertyGenFlags::Class | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayCueNotifyData, LoadedGameplayCueClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoadedGameplayCueClass_MetaData), NewProp_LoadedGameplayCueClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayCueNotifyData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueNotifyData_Statics::NewProp_GameplayCueTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueNotifyData_Statics::NewProp_GameplayCueNotifyObj,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueNotifyData_Statics::NewProp_LoadedGameplayCueClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCueNotifyData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayCueNotifyData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
	nullptr,
	&NewStructOps,
	"GameplayCueNotifyData",
	Z_Construct_UScriptStruct_FGameplayCueNotifyData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCueNotifyData_Statics::PropPointers),
	sizeof(FGameplayCueNotifyData),
	alignof(FGameplayCueNotifyData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCueNotifyData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGameplayCueNotifyData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGameplayCueNotifyData()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayCueNotifyData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayCueNotifyData.InnerSingleton, Z_Construct_UScriptStruct_FGameplayCueNotifyData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GameplayCueNotifyData.InnerSingleton;
}
// End ScriptStruct FGameplayCueNotifyData

// Begin Class UGameplayCueSet
void UGameplayCueSet::StaticRegisterNativesUGameplayCueSet()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameplayCueSet);
UClass* Z_Construct_UClass_UGameplayCueSet_NoRegister()
{
	return UGameplayCueSet::StaticClass();
}
struct Z_Construct_UClass_UGameplayCueSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\x09""A set of gameplay cue actors to handle gameplay cue events\n */" },
#endif
		{ "IncludePath", "GameplayCueSet.h" },
		{ "ModuleRelativePath", "Public/GameplayCueSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A set of gameplay cue actors to handle gameplay cue events" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameplayCueData_MetaData[] = {
		{ "Category", "CueSet" },
		{ "ModuleRelativePath", "Public/GameplayCueSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayCueData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GameplayCueData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameplayCueSet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameplayCueSet_Statics::NewProp_GameplayCueData_Inner = { "GameplayCueData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayCueNotifyData, METADATA_PARAMS(0, nullptr) }; // 28479563
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameplayCueSet_Statics::NewProp_GameplayCueData = { "GameplayCueData", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameplayCueSet, GameplayCueData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameplayCueData_MetaData), NewProp_GameplayCueData_MetaData) }; // 28479563
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameplayCueSet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayCueSet_Statics::NewProp_GameplayCueData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayCueSet_Statics::NewProp_GameplayCueData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayCueSet_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGameplayCueSet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayCueSet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameplayCueSet_Statics::ClassParams = {
	&UGameplayCueSet::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGameplayCueSet_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayCueSet_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayCueSet_Statics::Class_MetaDataParams), Z_Construct_UClass_UGameplayCueSet_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGameplayCueSet()
{
	if (!Z_Registration_Info_UClass_UGameplayCueSet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameplayCueSet.OuterSingleton, Z_Construct_UClass_UGameplayCueSet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGameplayCueSet.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UClass* StaticClass<UGameplayCueSet>()
{
	return UGameplayCueSet::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGameplayCueSet);
UGameplayCueSet::~UGameplayCueSet() {}
// End Class UGameplayCueSet

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayCueSet_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FGameplayCueNotifyData::StaticStruct, Z_Construct_UScriptStruct_FGameplayCueNotifyData_Statics::NewStructOps, TEXT("GameplayCueNotifyData"), &Z_Registration_Info_UScriptStruct_GameplayCueNotifyData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayCueNotifyData), 28479563U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGameplayCueSet, UGameplayCueSet::StaticClass, TEXT("UGameplayCueSet"), &Z_Registration_Info_UClass_UGameplayCueSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameplayCueSet), 3329432196U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayCueSet_h_2138805933(TEXT("/Script/GameplayAbilities"),
	Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayCueSet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayCueSet_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayCueSet_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayCueSet_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
