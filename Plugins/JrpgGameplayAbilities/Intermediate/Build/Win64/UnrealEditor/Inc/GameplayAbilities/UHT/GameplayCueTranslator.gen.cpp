// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayAbilities/Public/GameplayCueTranslator.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayCueTranslator() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayCueTranslator();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayCueTranslator_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayCueTranslator_Test();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayCueTranslator_Test_NoRegister();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayCueTranslationLink();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayCueTranslationManager();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayCueTranslatorNode();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayCueTranslatorNodeIndex();
GAMEPLAYTAGS_API UClass* Z_Construct_UClass_UGameplayTagsManager_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
UPackage* Z_Construct_UPackage__Script_GameplayAbilities();
// End Cross Module References

// Begin ScriptStruct FGameplayCueTranslatorNodeIndex
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayCueTranslatorNodeIndex;
class UScriptStruct* FGameplayCueTranslatorNodeIndex::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayCueTranslatorNodeIndex.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayCueTranslatorNodeIndex.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayCueTranslatorNodeIndex, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("GameplayCueTranslatorNodeIndex"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayCueTranslatorNodeIndex.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FGameplayCueTranslatorNodeIndex>()
{
	return FGameplayCueTranslatorNodeIndex::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGameplayCueTranslatorNodeIndex_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Simple index/handle for referencing items in FGameplayCueTranslationManager::TranslationLUT  */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayCueTranslator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple index/handle for referencing items in FGameplayCueTranslationManager::TranslationLUT" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayCueTranslator.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayCueTranslatorNodeIndex>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameplayCueTranslatorNodeIndex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayCueTranslatorNodeIndex, Index), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Index_MetaData), NewProp_Index_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayCueTranslatorNodeIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueTranslatorNodeIndex_Statics::NewProp_Index,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCueTranslatorNodeIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayCueTranslatorNodeIndex_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
	nullptr,
	&NewStructOps,
	"GameplayCueTranslatorNodeIndex",
	Z_Construct_UScriptStruct_FGameplayCueTranslatorNodeIndex_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCueTranslatorNodeIndex_Statics::PropPointers),
	sizeof(FGameplayCueTranslatorNodeIndex),
	alignof(FGameplayCueTranslatorNodeIndex),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCueTranslatorNodeIndex_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGameplayCueTranslatorNodeIndex_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGameplayCueTranslatorNodeIndex()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayCueTranslatorNodeIndex.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayCueTranslatorNodeIndex.InnerSingleton, Z_Construct_UScriptStruct_FGameplayCueTranslatorNodeIndex_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GameplayCueTranslatorNodeIndex.InnerSingleton;
}
// End ScriptStruct FGameplayCueTranslatorNodeIndex

// Begin ScriptStruct FGameplayCueTranslationLink
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayCueTranslationLink;
class UScriptStruct* FGameplayCueTranslationLink::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayCueTranslationLink.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayCueTranslationLink.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayCueTranslationLink, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("GameplayCueTranslationLink"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayCueTranslationLink.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FGameplayCueTranslationLink>()
{
	return FGameplayCueTranslationLink::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGameplayCueTranslationLink_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Represents a translation from one FGameplayCueTranslatorNode to many others. You will have one of these links per UGameplayCueTranslator that can translate a node. */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayCueTranslator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Represents a translation from one FGameplayCueTranslatorNode to many others. You will have one of these links per UGameplayCueTranslator that can translate a node." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RulesCDO_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The rule that provides this translation */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayCueTranslator.h" },
		{ "NativeConstTemplateArg", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The rule that provides this translation" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RulesCDO;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayCueTranslationLink>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGameplayCueTranslationLink_Statics::NewProp_RulesCDO = { "RulesCDO", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayCueTranslationLink, RulesCDO), Z_Construct_UClass_UGameplayCueTranslator_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RulesCDO_MetaData), NewProp_RulesCDO_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayCueTranslationLink_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueTranslationLink_Statics::NewProp_RulesCDO,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCueTranslationLink_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayCueTranslationLink_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
	nullptr,
	&NewStructOps,
	"GameplayCueTranslationLink",
	Z_Construct_UScriptStruct_FGameplayCueTranslationLink_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCueTranslationLink_Statics::PropPointers),
	sizeof(FGameplayCueTranslationLink),
	alignof(FGameplayCueTranslationLink),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCueTranslationLink_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGameplayCueTranslationLink_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGameplayCueTranslationLink()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayCueTranslationLink.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayCueTranslationLink.InnerSingleton, Z_Construct_UScriptStruct_FGameplayCueTranslationLink_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GameplayCueTranslationLink.InnerSingleton;
}
// End ScriptStruct FGameplayCueTranslationLink

// Begin ScriptStruct FGameplayCueTranslatorNode
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayCueTranslatorNode;
class UScriptStruct* FGameplayCueTranslatorNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayCueTranslatorNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayCueTranslatorNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayCueTranslatorNode, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("GameplayCueTranslatorNode"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayCueTranslatorNode.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FGameplayCueTranslatorNode>()
{
	return FGameplayCueTranslatorNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGameplayCueTranslatorNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** A node in our translation table/graph. The node represents an actual gameplaytag or a possible gameplay tag, with links to what it can be translated into. */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayCueTranslator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A node in our translation table/graph. The node represents an actual gameplaytag or a possible gameplay tag, with links to what it can be translated into." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Links_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Ways we can be translated into another FGameplayCueTranslatorNode */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayCueTranslator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Ways we can be translated into another FGameplayCueTranslatorNode" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedIndex_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Our index into FGameplayCueTranslationManager::TranslationLUT  */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayCueTranslator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Our index into FGameplayCueTranslationManager::TranslationLUT" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedGameplayTag_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The FGameplayTag if this tag actually exists. This will always exist at runtime. In editor builds, it may not (GameplayCueEditor) */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayCueTranslator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The FGameplayTag if this tag actually exists. This will always exist at runtime. In editor builds, it may not (GameplayCueEditor)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedGameplayTagName_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** FName of the tag. This will always be valid, whether the tag is in the GameplayTag dictionary or not. */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayCueTranslator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "FName of the tag. This will always be valid, whether the tag is in the GameplayTag dictionary or not." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Links_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Links;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CachedIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CachedGameplayTag;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CachedGameplayTagName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayCueTranslatorNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayCueTranslatorNode_Statics::NewProp_Links_Inner = { "Links", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayCueTranslationLink, METADATA_PARAMS(0, nullptr) }; // 819448443
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGameplayCueTranslatorNode_Statics::NewProp_Links = { "Links", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayCueTranslatorNode, Links), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Links_MetaData), NewProp_Links_MetaData) }; // 819448443
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayCueTranslatorNode_Statics::NewProp_CachedIndex = { "CachedIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayCueTranslatorNode, CachedIndex), Z_Construct_UScriptStruct_FGameplayCueTranslatorNodeIndex, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedIndex_MetaData), NewProp_CachedIndex_MetaData) }; // 3278562
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayCueTranslatorNode_Statics::NewProp_CachedGameplayTag = { "CachedGameplayTag", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayCueTranslatorNode, CachedGameplayTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedGameplayTag_MetaData), NewProp_CachedGameplayTag_MetaData) }; // 1298103297
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FGameplayCueTranslatorNode_Statics::NewProp_CachedGameplayTagName = { "CachedGameplayTagName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayCueTranslatorNode, CachedGameplayTagName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedGameplayTagName_MetaData), NewProp_CachedGameplayTagName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayCueTranslatorNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueTranslatorNode_Statics::NewProp_Links_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueTranslatorNode_Statics::NewProp_Links,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueTranslatorNode_Statics::NewProp_CachedIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueTranslatorNode_Statics::NewProp_CachedGameplayTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueTranslatorNode_Statics::NewProp_CachedGameplayTagName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCueTranslatorNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayCueTranslatorNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
	nullptr,
	&NewStructOps,
	"GameplayCueTranslatorNode",
	Z_Construct_UScriptStruct_FGameplayCueTranslatorNode_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCueTranslatorNode_Statics::PropPointers),
	sizeof(FGameplayCueTranslatorNode),
	alignof(FGameplayCueTranslatorNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCueTranslatorNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGameplayCueTranslatorNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGameplayCueTranslatorNode()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayCueTranslatorNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayCueTranslatorNode.InnerSingleton, Z_Construct_UScriptStruct_FGameplayCueTranslatorNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GameplayCueTranslatorNode.InnerSingleton;
}
// End ScriptStruct FGameplayCueTranslatorNode

// Begin ScriptStruct FGameplayCueTranslationManager
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayCueTranslationManager;
class UScriptStruct* FGameplayCueTranslationManager::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayCueTranslationManager.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayCueTranslationManager.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayCueTranslationManager, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("GameplayCueTranslationManager"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayCueTranslationManager.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FGameplayCueTranslationManager>()
{
	return FGameplayCueTranslationManager::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGameplayCueTranslationManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** This is the struct that does the actual translation. It lives on the GameplayCueManager and encapsulates all translation logic. */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayCueTranslator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is the struct that does the actual translation. It lives on the GameplayCueManager and encapsulates all translation logic." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TranslationLUT_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The Look Up Table */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayCueTranslator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Look Up Table" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TranslationNameToIndexMap_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Acceleration map from gameplay tag name to index into TranslationLUT  */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayCueTranslator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Acceleration map from gameplay tag name to index into TranslationLUT" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TagManager_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Cached reference to tag manager */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayCueTranslator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cached reference to tag manager" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TranslationLUT_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TranslationLUT;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TranslationNameToIndexMap_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TranslationNameToIndexMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_TranslationNameToIndexMap;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TagManager;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayCueTranslationManager>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayCueTranslationManager_Statics::NewProp_TranslationLUT_Inner = { "TranslationLUT", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayCueTranslatorNode, METADATA_PARAMS(0, nullptr) }; // 2167159303
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGameplayCueTranslationManager_Statics::NewProp_TranslationLUT = { "TranslationLUT", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayCueTranslationManager, TranslationLUT), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TranslationLUT_MetaData), NewProp_TranslationLUT_MetaData) }; // 2167159303
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayCueTranslationManager_Statics::NewProp_TranslationNameToIndexMap_ValueProp = { "TranslationNameToIndexMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FGameplayCueTranslatorNodeIndex, METADATA_PARAMS(0, nullptr) }; // 3278562
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FGameplayCueTranslationManager_Statics::NewProp_TranslationNameToIndexMap_Key_KeyProp = { "TranslationNameToIndexMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FGameplayCueTranslationManager_Statics::NewProp_TranslationNameToIndexMap = { "TranslationNameToIndexMap", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayCueTranslationManager, TranslationNameToIndexMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TranslationNameToIndexMap_MetaData), NewProp_TranslationNameToIndexMap_MetaData) }; // 3278562
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGameplayCueTranslationManager_Statics::NewProp_TagManager = { "TagManager", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayCueTranslationManager, TagManager), Z_Construct_UClass_UGameplayTagsManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TagManager_MetaData), NewProp_TagManager_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayCueTranslationManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueTranslationManager_Statics::NewProp_TranslationLUT_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueTranslationManager_Statics::NewProp_TranslationLUT,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueTranslationManager_Statics::NewProp_TranslationNameToIndexMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueTranslationManager_Statics::NewProp_TranslationNameToIndexMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueTranslationManager_Statics::NewProp_TranslationNameToIndexMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueTranslationManager_Statics::NewProp_TagManager,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCueTranslationManager_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayCueTranslationManager_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
	nullptr,
	&NewStructOps,
	"GameplayCueTranslationManager",
	Z_Construct_UScriptStruct_FGameplayCueTranslationManager_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCueTranslationManager_Statics::PropPointers),
	sizeof(FGameplayCueTranslationManager),
	alignof(FGameplayCueTranslationManager),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCueTranslationManager_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGameplayCueTranslationManager_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGameplayCueTranslationManager()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayCueTranslationManager.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayCueTranslationManager.InnerSingleton, Z_Construct_UScriptStruct_FGameplayCueTranslationManager_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GameplayCueTranslationManager.InnerSingleton;
}
// End ScriptStruct FGameplayCueTranslationManager

// Begin Class UGameplayCueTranslator
void UGameplayCueTranslator::StaticRegisterNativesUGameplayCueTranslator()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameplayCueTranslator);
UClass* Z_Construct_UClass_UGameplayCueTranslator_NoRegister()
{
	return UGameplayCueTranslator::StaticClass();
}
struct Z_Construct_UClass_UGameplayCueTranslator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\x09This is the base class for GameplayCue Translators. This is what games must extend from in order to add their own rules.\n *\x09These are not instantiated, and are basically just a holder for virtual functions that are called on the CDO.\n *\n *\x09There are two main things this class provides:\n *\x09\x09""1. A set of translation rules. E.g., \"I translate GameplayCue.A.B.C into GameplayCue.X.B.C\", or rather \"I translate A into X\". (GetTranslationNameSpawns)\n *\x09\x09""2. A runtime function to actually do the translation, based on the actors and parameters involved in the gameplay cue event. (GameplayCueToTranslationIndex)\n *\n *\n */" },
#endif
		{ "IncludePath", "GameplayCueTranslator.h" },
		{ "ModuleRelativePath", "Public/GameplayCueTranslator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is the base class for GameplayCue Translators. This is what games must extend from in order to add their own rules.\nThese are not instantiated, and are basically just a holder for virtual functions that are called on the CDO.\n\nThere are two main things this class provides:\n        1. A set of translation rules. E.g., \"I translate GameplayCue.A.B.C into GameplayCue.X.B.C\", or rather \"I translate A into X\". (GetTranslationNameSpawns)\n        2. A runtime function to actually do the translation, based on the actors and parameters involved in the gameplay cue event. (GameplayCueToTranslationIndex)" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameplayCueTranslator>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGameplayCueTranslator_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayCueTranslator_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameplayCueTranslator_Statics::ClassParams = {
	&UGameplayCueTranslator::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayCueTranslator_Statics::Class_MetaDataParams), Z_Construct_UClass_UGameplayCueTranslator_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGameplayCueTranslator()
{
	if (!Z_Registration_Info_UClass_UGameplayCueTranslator.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameplayCueTranslator.OuterSingleton, Z_Construct_UClass_UGameplayCueTranslator_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGameplayCueTranslator.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UClass* StaticClass<UGameplayCueTranslator>()
{
	return UGameplayCueTranslator::StaticClass();
}
UGameplayCueTranslator::UGameplayCueTranslator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGameplayCueTranslator);
UGameplayCueTranslator::~UGameplayCueTranslator() {}
// End Class UGameplayCueTranslator

// Begin Class UGameplayCueTranslator_Test
void UGameplayCueTranslator_Test::StaticRegisterNativesUGameplayCueTranslator_Test()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameplayCueTranslator_Test);
UClass* Z_Construct_UClass_UGameplayCueTranslator_Test_NoRegister()
{
	return UGameplayCueTranslator_Test::StaticClass();
}
struct Z_Construct_UClass_UGameplayCueTranslator_Test_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\x09This is an example translator class.\n */" },
#endif
		{ "IncludePath", "GameplayCueTranslator.h" },
		{ "ModuleRelativePath", "Public/GameplayCueTranslator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is an example translator class." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameplayCueTranslator_Test>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGameplayCueTranslator_Test_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameplayCueTranslator,
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayCueTranslator_Test_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameplayCueTranslator_Test_Statics::ClassParams = {
	&UGameplayCueTranslator_Test::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayCueTranslator_Test_Statics::Class_MetaDataParams), Z_Construct_UClass_UGameplayCueTranslator_Test_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGameplayCueTranslator_Test()
{
	if (!Z_Registration_Info_UClass_UGameplayCueTranslator_Test.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameplayCueTranslator_Test.OuterSingleton, Z_Construct_UClass_UGameplayCueTranslator_Test_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGameplayCueTranslator_Test.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UClass* StaticClass<UGameplayCueTranslator_Test>()
{
	return UGameplayCueTranslator_Test::StaticClass();
}
UGameplayCueTranslator_Test::UGameplayCueTranslator_Test(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGameplayCueTranslator_Test);
UGameplayCueTranslator_Test::~UGameplayCueTranslator_Test() {}
// End Class UGameplayCueTranslator_Test

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayCueTranslator_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FGameplayCueTranslatorNodeIndex::StaticStruct, Z_Construct_UScriptStruct_FGameplayCueTranslatorNodeIndex_Statics::NewStructOps, TEXT("GameplayCueTranslatorNodeIndex"), &Z_Registration_Info_UScriptStruct_GameplayCueTranslatorNodeIndex, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayCueTranslatorNodeIndex), 3278562U) },
		{ FGameplayCueTranslationLink::StaticStruct, Z_Construct_UScriptStruct_FGameplayCueTranslationLink_Statics::NewStructOps, TEXT("GameplayCueTranslationLink"), &Z_Registration_Info_UScriptStruct_GameplayCueTranslationLink, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayCueTranslationLink), 819448443U) },
		{ FGameplayCueTranslatorNode::StaticStruct, Z_Construct_UScriptStruct_FGameplayCueTranslatorNode_Statics::NewStructOps, TEXT("GameplayCueTranslatorNode"), &Z_Registration_Info_UScriptStruct_GameplayCueTranslatorNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayCueTranslatorNode), 2167159303U) },
		{ FGameplayCueTranslationManager::StaticStruct, Z_Construct_UScriptStruct_FGameplayCueTranslationManager_Statics::NewStructOps, TEXT("GameplayCueTranslationManager"), &Z_Registration_Info_UScriptStruct_GameplayCueTranslationManager, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayCueTranslationManager), 3346247631U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGameplayCueTranslator, UGameplayCueTranslator::StaticClass, TEXT("UGameplayCueTranslator"), &Z_Registration_Info_UClass_UGameplayCueTranslator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameplayCueTranslator), 172020805U) },
		{ Z_Construct_UClass_UGameplayCueTranslator_Test, UGameplayCueTranslator_Test::StaticClass, TEXT("UGameplayCueTranslator_Test"), &Z_Registration_Info_UClass_UGameplayCueTranslator_Test, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameplayCueTranslator_Test), 3577489703U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayCueTranslator_h_2569087358(TEXT("/Script/GameplayAbilities"),
	Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayCueTranslator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayCueTranslator_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayCueTranslator_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayCueTranslator_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
