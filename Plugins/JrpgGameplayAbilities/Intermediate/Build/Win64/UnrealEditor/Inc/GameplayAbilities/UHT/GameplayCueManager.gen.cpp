// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayAbilities/Public/GameplayCueManager.h"
#include "GameplayAbilities/Public/GameplayCue_Types.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayCueManager() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
ENGINE_API UClass* Z_Construct_UClass_UObjectLibrary_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_AGameplayCueNotify_Actor_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayCueManager();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayCueManager_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayCueSet_NoRegister();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayCueObjectLibrary();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayCuePendingExecute();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FPreallocationInfo();
UPackage* Z_Construct_UPackage__Script_GameplayAbilities();
// End Cross Module References

// Begin ScriptStruct FGameplayCueObjectLibrary
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayCueObjectLibrary;
class UScriptStruct* FGameplayCueObjectLibrary::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayCueObjectLibrary.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayCueObjectLibrary.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayCueObjectLibrary, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("GameplayCueObjectLibrary"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayCueObjectLibrary.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FGameplayCueObjectLibrary>()
{
	return FGameplayCueObjectLibrary::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGameplayCueObjectLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** An ObjectLibrary for the GameplayCue Notifies. Wraps 2 underlying UObjectLibraries plus options/delegates for how they are loaded */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayCueManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "An ObjectLibrary for the GameplayCue Notifies. Wraps 2 underlying UObjectLibraries plus options/delegates for how they are loaded" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Paths_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Paths to search for */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayCueManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Paths to search for" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorObjectLibrary_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Object library for actor based notifies */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayCueManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Object library for actor based notifies" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticObjectLibrary_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Object library for object based notifies */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayCueManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Object library for object based notifies" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CueSet_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Set to put the loaded asset data into. If null we will use the global set (RuntimeGameplayCueObjectLibrary.CueSet) */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayCueManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set to put the loaded asset data into. If null we will use the global set (RuntimeGameplayCueObjectLibrary.CueSet)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShouldSyncScan_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Should we force a sync scan on the asset registry in order to discover asset data, or just use what is there */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayCueManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Should we force a sync scan on the asset registry in order to discover asset data, or just use what is there" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShouldAsyncLoad_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Should we start async loading everything that we find (that passes ShouldLoad delegate check) */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayCueManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Should we start async loading everything that we find (that passes ShouldLoad delegate check)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShouldSyncLoad_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Should we sync load everything that we find (that passes ShouldLoad delegate check) */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayCueManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Should we sync load everything that we find (that passes ShouldLoad delegate check)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasBeenInitialized_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** True if this has been initialized with correct data */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayCueManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "True if this has been initialized with correct data" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Paths_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Paths;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorObjectLibrary;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticObjectLibrary;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CueSet;
	static void NewProp_bShouldSyncScan_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldSyncScan;
	static void NewProp_bShouldAsyncLoad_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldAsyncLoad;
	static void NewProp_bShouldSyncLoad_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldSyncLoad;
	static void NewProp_bHasBeenInitialized_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasBeenInitialized;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayCueObjectLibrary>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGameplayCueObjectLibrary_Statics::NewProp_Paths_Inner = { "Paths", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGameplayCueObjectLibrary_Statics::NewProp_Paths = { "Paths", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayCueObjectLibrary, Paths), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Paths_MetaData), NewProp_Paths_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGameplayCueObjectLibrary_Statics::NewProp_ActorObjectLibrary = { "ActorObjectLibrary", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayCueObjectLibrary, ActorObjectLibrary), Z_Construct_UClass_UObjectLibrary_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorObjectLibrary_MetaData), NewProp_ActorObjectLibrary_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGameplayCueObjectLibrary_Statics::NewProp_StaticObjectLibrary = { "StaticObjectLibrary", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayCueObjectLibrary, StaticObjectLibrary), Z_Construct_UClass_UObjectLibrary_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticObjectLibrary_MetaData), NewProp_StaticObjectLibrary_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGameplayCueObjectLibrary_Statics::NewProp_CueSet = { "CueSet", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayCueObjectLibrary, CueSet), Z_Construct_UClass_UGameplayCueSet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CueSet_MetaData), NewProp_CueSet_MetaData) };
void Z_Construct_UScriptStruct_FGameplayCueObjectLibrary_Statics::NewProp_bShouldSyncScan_SetBit(void* Obj)
{
	((FGameplayCueObjectLibrary*)Obj)->bShouldSyncScan = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameplayCueObjectLibrary_Statics::NewProp_bShouldSyncScan = { "bShouldSyncScan", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGameplayCueObjectLibrary), &Z_Construct_UScriptStruct_FGameplayCueObjectLibrary_Statics::NewProp_bShouldSyncScan_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShouldSyncScan_MetaData), NewProp_bShouldSyncScan_MetaData) };
void Z_Construct_UScriptStruct_FGameplayCueObjectLibrary_Statics::NewProp_bShouldAsyncLoad_SetBit(void* Obj)
{
	((FGameplayCueObjectLibrary*)Obj)->bShouldAsyncLoad = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameplayCueObjectLibrary_Statics::NewProp_bShouldAsyncLoad = { "bShouldAsyncLoad", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGameplayCueObjectLibrary), &Z_Construct_UScriptStruct_FGameplayCueObjectLibrary_Statics::NewProp_bShouldAsyncLoad_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShouldAsyncLoad_MetaData), NewProp_bShouldAsyncLoad_MetaData) };
void Z_Construct_UScriptStruct_FGameplayCueObjectLibrary_Statics::NewProp_bShouldSyncLoad_SetBit(void* Obj)
{
	((FGameplayCueObjectLibrary*)Obj)->bShouldSyncLoad = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameplayCueObjectLibrary_Statics::NewProp_bShouldSyncLoad = { "bShouldSyncLoad", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGameplayCueObjectLibrary), &Z_Construct_UScriptStruct_FGameplayCueObjectLibrary_Statics::NewProp_bShouldSyncLoad_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShouldSyncLoad_MetaData), NewProp_bShouldSyncLoad_MetaData) };
void Z_Construct_UScriptStruct_FGameplayCueObjectLibrary_Statics::NewProp_bHasBeenInitialized_SetBit(void* Obj)
{
	((FGameplayCueObjectLibrary*)Obj)->bHasBeenInitialized = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameplayCueObjectLibrary_Statics::NewProp_bHasBeenInitialized = { "bHasBeenInitialized", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGameplayCueObjectLibrary), &Z_Construct_UScriptStruct_FGameplayCueObjectLibrary_Statics::NewProp_bHasBeenInitialized_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasBeenInitialized_MetaData), NewProp_bHasBeenInitialized_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayCueObjectLibrary_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueObjectLibrary_Statics::NewProp_Paths_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueObjectLibrary_Statics::NewProp_Paths,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueObjectLibrary_Statics::NewProp_ActorObjectLibrary,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueObjectLibrary_Statics::NewProp_StaticObjectLibrary,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueObjectLibrary_Statics::NewProp_CueSet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueObjectLibrary_Statics::NewProp_bShouldSyncScan,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueObjectLibrary_Statics::NewProp_bShouldAsyncLoad,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueObjectLibrary_Statics::NewProp_bShouldSyncLoad,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueObjectLibrary_Statics::NewProp_bHasBeenInitialized,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCueObjectLibrary_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayCueObjectLibrary_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
	nullptr,
	&NewStructOps,
	"GameplayCueObjectLibrary",
	Z_Construct_UScriptStruct_FGameplayCueObjectLibrary_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCueObjectLibrary_Statics::PropPointers),
	sizeof(FGameplayCueObjectLibrary),
	alignof(FGameplayCueObjectLibrary),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCueObjectLibrary_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGameplayCueObjectLibrary_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGameplayCueObjectLibrary()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayCueObjectLibrary.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayCueObjectLibrary.InnerSingleton, Z_Construct_UScriptStruct_FGameplayCueObjectLibrary_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GameplayCueObjectLibrary.InnerSingleton;
}
// End ScriptStruct FGameplayCueObjectLibrary

// Begin Class UGameplayCueManager
void UGameplayCueManager::StaticRegisterNativesUGameplayCueManager()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameplayCueManager);
UClass* Z_Construct_UClass_UGameplayCueManager_NoRegister()
{
	return UGameplayCueManager::StaticClass();
}
struct Z_Construct_UClass_UGameplayCueManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Singleton manager object that handles dispatching gameplay cues and spawning GameplayCueNotify actors as needed */" },
#endif
		{ "IncludePath", "GameplayCueManager.h" },
		{ "ModuleRelativePath", "Public/GameplayCueManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Singleton manager object that handles dispatching gameplay cues and spawning GameplayCueNotify actors as needed" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RuntimeGameplayCueObjectLibrary_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayCueManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EditorGameplayCueObjectLibrary_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayCueManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoadedGameplayCueNotifyClasses_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Hardref to the gameplaycue notify classes we have async loaded*/" },
#endif
		{ "ModuleRelativePath", "Public/GameplayCueManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Hardref to the gameplaycue notify classes we have async loaded" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameplayCueClassesForPreallocation_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Classes that we need to preallocate instances for */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayCueManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Classes that we need to preallocate instances for" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PendingExecuteCues_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** List of gameplay cue executes that haven't been processed yet */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayCueManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of gameplay cue executes that haven't been processed yet" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameplayCueSendContextCount_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Number of active gameplay cue send contexts, when it goes to 0 cues are flushed */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayCueManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Number of active gameplay cue send contexts, when it goes to 0 cues are flushed" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreallocationInfoList_Internal_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayCueManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_RuntimeGameplayCueObjectLibrary;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EditorGameplayCueObjectLibrary;
	static const UECodeGen_Private::FClassPropertyParams NewProp_LoadedGameplayCueNotifyClasses_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LoadedGameplayCueNotifyClasses;
	static const UECodeGen_Private::FClassPropertyParams NewProp_GameplayCueClassesForPreallocation_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GameplayCueClassesForPreallocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PendingExecuteCues_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PendingExecuteCues;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GameplayCueSendContextCount;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PreallocationInfoList_Internal_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PreallocationInfoList_Internal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameplayCueManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameplayCueManager_Statics::NewProp_RuntimeGameplayCueObjectLibrary = { "RuntimeGameplayCueObjectLibrary", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameplayCueManager, RuntimeGameplayCueObjectLibrary), Z_Construct_UScriptStruct_FGameplayCueObjectLibrary, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RuntimeGameplayCueObjectLibrary_MetaData), NewProp_RuntimeGameplayCueObjectLibrary_MetaData) }; // 434677564
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameplayCueManager_Statics::NewProp_EditorGameplayCueObjectLibrary = { "EditorGameplayCueObjectLibrary", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameplayCueManager, EditorGameplayCueObjectLibrary), Z_Construct_UScriptStruct_FGameplayCueObjectLibrary, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EditorGameplayCueObjectLibrary_MetaData), NewProp_EditorGameplayCueObjectLibrary_MetaData) }; // 434677564
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UGameplayCueManager_Statics::NewProp_LoadedGameplayCueNotifyClasses_Inner = { "LoadedGameplayCueNotifyClasses", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Class | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameplayCueManager_Statics::NewProp_LoadedGameplayCueNotifyClasses = { "LoadedGameplayCueNotifyClasses", nullptr, (EPropertyFlags)0x0124080000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameplayCueManager, LoadedGameplayCueNotifyClasses), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoadedGameplayCueNotifyClasses_MetaData), NewProp_LoadedGameplayCueNotifyClasses_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UGameplayCueManager_Statics::NewProp_GameplayCueClassesForPreallocation_Inner = { "GameplayCueClassesForPreallocation", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_AGameplayCueNotify_Actor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameplayCueManager_Statics::NewProp_GameplayCueClassesForPreallocation = { "GameplayCueClassesForPreallocation", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameplayCueManager, GameplayCueClassesForPreallocation), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameplayCueClassesForPreallocation_MetaData), NewProp_GameplayCueClassesForPreallocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameplayCueManager_Statics::NewProp_PendingExecuteCues_Inner = { "PendingExecuteCues", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayCuePendingExecute, METADATA_PARAMS(0, nullptr) }; // 1370725318
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameplayCueManager_Statics::NewProp_PendingExecuteCues = { "PendingExecuteCues", nullptr, (EPropertyFlags)0x0020088000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameplayCueManager, PendingExecuteCues), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PendingExecuteCues_MetaData), NewProp_PendingExecuteCues_MetaData) }; // 1370725318
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGameplayCueManager_Statics::NewProp_GameplayCueSendContextCount = { "GameplayCueSendContextCount", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameplayCueManager, GameplayCueSendContextCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameplayCueSendContextCount_MetaData), NewProp_GameplayCueSendContextCount_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameplayCueManager_Statics::NewProp_PreallocationInfoList_Internal_Inner = { "PreallocationInfoList_Internal", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPreallocationInfo, METADATA_PARAMS(0, nullptr) }; // 2313442270
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameplayCueManager_Statics::NewProp_PreallocationInfoList_Internal = { "PreallocationInfoList_Internal", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameplayCueManager, PreallocationInfoList_Internal), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreallocationInfoList_Internal_MetaData), NewProp_PreallocationInfoList_Internal_MetaData) }; // 2313442270
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameplayCueManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayCueManager_Statics::NewProp_RuntimeGameplayCueObjectLibrary,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayCueManager_Statics::NewProp_EditorGameplayCueObjectLibrary,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayCueManager_Statics::NewProp_LoadedGameplayCueNotifyClasses_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayCueManager_Statics::NewProp_LoadedGameplayCueNotifyClasses,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayCueManager_Statics::NewProp_GameplayCueClassesForPreallocation_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayCueManager_Statics::NewProp_GameplayCueClassesForPreallocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayCueManager_Statics::NewProp_PendingExecuteCues_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayCueManager_Statics::NewProp_PendingExecuteCues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayCueManager_Statics::NewProp_GameplayCueSendContextCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayCueManager_Statics::NewProp_PreallocationInfoList_Internal_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayCueManager_Statics::NewProp_PreallocationInfoList_Internal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayCueManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGameplayCueManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayCueManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameplayCueManager_Statics::ClassParams = {
	&UGameplayCueManager::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGameplayCueManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayCueManager_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayCueManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UGameplayCueManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGameplayCueManager()
{
	if (!Z_Registration_Info_UClass_UGameplayCueManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameplayCueManager.OuterSingleton, Z_Construct_UClass_UGameplayCueManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGameplayCueManager.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UClass* StaticClass<UGameplayCueManager>()
{
	return UGameplayCueManager::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGameplayCueManager);
UGameplayCueManager::~UGameplayCueManager() {}
// End Class UGameplayCueManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayCueManager_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FGameplayCueObjectLibrary::StaticStruct, Z_Construct_UScriptStruct_FGameplayCueObjectLibrary_Statics::NewStructOps, TEXT("GameplayCueObjectLibrary"), &Z_Registration_Info_UScriptStruct_GameplayCueObjectLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayCueObjectLibrary), 434677564U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGameplayCueManager, UGameplayCueManager::StaticClass, TEXT("UGameplayCueManager"), &Z_Registration_Info_UClass_UGameplayCueManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameplayCueManager), 76391657U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayCueManager_h_1045166486(TEXT("/Script/GameplayAbilities"),
	Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayCueManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayCueManager_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayCueManager_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayCueManager_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
