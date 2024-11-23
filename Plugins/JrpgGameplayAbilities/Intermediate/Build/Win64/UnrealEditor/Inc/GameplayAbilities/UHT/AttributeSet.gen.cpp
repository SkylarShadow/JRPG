// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayAbilities/Public/AttributeSet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAttributeSet() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UStruct();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet_NoRegister();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FAttributeMetaData();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttribute();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttributeData();
UPackage* Z_Construct_UPackage__Script_GameplayAbilities();
// End Cross Module References

// Begin ScriptStruct FGameplayAttributeData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayAttributeData;
class UScriptStruct* FGameplayAttributeData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayAttributeData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayAttributeData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayAttributeData, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("GameplayAttributeData"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayAttributeData.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FGameplayAttributeData>()
{
	return FGameplayAttributeData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGameplayAttributeData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Place in an AttributeSet to create an attribute that can be accesed using FGameplayAttribute. It is strongly encouraged to use this instead of raw float attributes */" },
#endif
		{ "ModuleRelativePath", "Public/AttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Place in an AttributeSet to create an attribute that can be accesed using FGameplayAttribute. It is strongly encouraged to use this instead of raw float attributes" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseValue_MetaData[] = {
		{ "Category", "Attribute" },
		{ "ModuleRelativePath", "Public/AttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentValue_MetaData[] = {
		{ "Category", "Attribute" },
		{ "ModuleRelativePath", "Public/AttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayAttributeData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGameplayAttributeData_Statics::NewProp_BaseValue = { "BaseValue", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayAttributeData, BaseValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseValue_MetaData), NewProp_BaseValue_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGameplayAttributeData_Statics::NewProp_CurrentValue = { "CurrentValue", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayAttributeData, CurrentValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentValue_MetaData), NewProp_CurrentValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayAttributeData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAttributeData_Statics::NewProp_BaseValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAttributeData_Statics::NewProp_CurrentValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAttributeData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayAttributeData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
	nullptr,
	&NewStructOps,
	"GameplayAttributeData",
	Z_Construct_UScriptStruct_FGameplayAttributeData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAttributeData_Statics::PropPointers),
	sizeof(FGameplayAttributeData),
	alignof(FGameplayAttributeData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAttributeData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGameplayAttributeData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttributeData()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayAttributeData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayAttributeData.InnerSingleton, Z_Construct_UScriptStruct_FGameplayAttributeData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GameplayAttributeData.InnerSingleton;
}
// End ScriptStruct FGameplayAttributeData

// Begin ScriptStruct FGameplayAttribute
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayAttribute;
class UScriptStruct* FGameplayAttribute::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayAttribute.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayAttribute.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayAttribute, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("GameplayAttribute"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayAttribute.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FGameplayAttribute>()
{
	return FGameplayAttribute::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGameplayAttribute_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Describes a FGameplayAttributeData or float property inside an attribute set. Using this provides editor UI and helper functions */" },
#endif
		{ "ModuleRelativePath", "Public/AttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Describes a FGameplayAttributeData or float property inside an attribute set. Using this provides editor UI and helper functions" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeName_MetaData[] = {
		{ "Category", "GameplayAttribute" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Name of the attribute, usually the same as property name */" },
#endif
		{ "ModuleRelativePath", "Public/AttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Name of the attribute, usually the same as property name" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Attribute_MetaData[] = {
		{ "Category", "GameplayAttribute" },
		{ "ModuleRelativePath", "Public/AttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeOwner_MetaData[] = {
		{ "Category", "GameplayAttribute" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//FProperty*\x09""Attribute;\n" },
#endif
		{ "ModuleRelativePath", "Public/AttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "FProperty*      Attribute;" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_AttributeName;
	static const UECodeGen_Private::FFieldPathPropertyParams NewProp_Attribute;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AttributeOwner;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayAttribute>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGameplayAttribute_Statics::NewProp_AttributeName = { "AttributeName", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayAttribute, AttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeName_MetaData), NewProp_AttributeName_MetaData) };
const UECodeGen_Private::FFieldPathPropertyParams Z_Construct_UScriptStruct_FGameplayAttribute_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::FieldPath, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayAttribute, Attribute), &FProperty::StaticClass, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Attribute_MetaData), NewProp_Attribute_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGameplayAttribute_Statics::NewProp_AttributeOwner = { "AttributeOwner", nullptr, (EPropertyFlags)0x0144000000020001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayAttribute, AttributeOwner), Z_Construct_UClass_UStruct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeOwner_MetaData), NewProp_AttributeOwner_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayAttribute_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAttribute_Statics::NewProp_AttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAttribute_Statics::NewProp_Attribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAttribute_Statics::NewProp_AttributeOwner,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAttribute_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayAttribute_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
	nullptr,
	&NewStructOps,
	"GameplayAttribute",
	Z_Construct_UScriptStruct_FGameplayAttribute_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAttribute_Statics::PropPointers),
	sizeof(FGameplayAttribute),
	alignof(FGameplayAttribute),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAttribute_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGameplayAttribute_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttribute()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayAttribute.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayAttribute.InnerSingleton, Z_Construct_UScriptStruct_FGameplayAttribute_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GameplayAttribute.InnerSingleton;
}
// End ScriptStruct FGameplayAttribute

// Begin Class UAttributeSet
void UAttributeSet::StaticRegisterNativesUAttributeSet()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAttributeSet);
UClass* Z_Construct_UClass_UAttributeSet_NoRegister()
{
	return UAttributeSet::StaticClass();
}
struct Z_Construct_UClass_UAttributeSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Defines the set of all GameplayAttributes for your game\n * Games should subclass this and add FGameplayAttributeData properties to represent attributes like health, damage, etc\n * AttributeSets are added to the actors as subobjects, and then registered with the AbilitySystemComponent\n * It often desired to have several sets per project that inherit from each other\n * You could make a base health set, then have a player set that inherits from it and adds more attributes\n */" },
#endif
		{ "IncludePath", "AttributeSet.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Defines the set of all GameplayAttributes for your game\nGames should subclass this and add FGameplayAttributeData properties to represent attributes like health, damage, etc\nAttributeSets are added to the actors as subobjects, and then registered with the AbilitySystemComponent\nIt often desired to have several sets per project that inherit from each other\nYou could make a base health set, then have a player set that inherits from it and adds more attributes" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAttributeSet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAttributeSet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeSet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAttributeSet_Statics::ClassParams = {
	&UAttributeSet::StaticClass,
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
	0x003000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeSet_Statics::Class_MetaDataParams), Z_Construct_UClass_UAttributeSet_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAttributeSet()
{
	if (!Z_Registration_Info_UClass_UAttributeSet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAttributeSet.OuterSingleton, Z_Construct_UClass_UAttributeSet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAttributeSet.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UClass* StaticClass<UAttributeSet>()
{
	return UAttributeSet::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAttributeSet);
UAttributeSet::~UAttributeSet() {}
// End Class UAttributeSet

// Begin ScriptStruct FAttributeMetaData
static_assert(std::is_polymorphic<FAttributeMetaData>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FAttributeMetaData cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AttributeMetaData;
class UScriptStruct* FAttributeMetaData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AttributeMetaData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AttributeMetaData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAttributeMetaData, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("AttributeMetaData"));
	}
	return Z_Registration_Info_UScriptStruct_AttributeMetaData.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FAttributeMetaData>()
{
	return FAttributeMetaData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAttributeMetaData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\x09""DataTable that allows us to define meta data about attributes. Still a work in progress.\n */" },
#endif
		{ "ModuleRelativePath", "Public/AttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DataTable that allows us to define meta data about attributes. Still a work in progress." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseValue_MetaData[] = {
		{ "Category", "Gameplay Attribute" },
		{ "ModuleRelativePath", "Public/AttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinValue_MetaData[] = {
		{ "Category", "Gameplay Attribute" },
		{ "ModuleRelativePath", "Public/AttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxValue_MetaData[] = {
		{ "Category", "Gameplay Attribute" },
		{ "ModuleRelativePath", "Public/AttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DerivedAttributeInfo_MetaData[] = {
		{ "ModuleRelativePath", "Public/AttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanStack_MetaData[] = {
		{ "Category", "Gameplay Attribute" },
		{ "ModuleRelativePath", "Public/AttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxValue;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DerivedAttributeInfo;
	static void NewProp_bCanStack_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanStack;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAttributeMetaData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAttributeMetaData_Statics::NewProp_BaseValue = { "BaseValue", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAttributeMetaData, BaseValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseValue_MetaData), NewProp_BaseValue_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAttributeMetaData_Statics::NewProp_MinValue = { "MinValue", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAttributeMetaData, MinValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinValue_MetaData), NewProp_MinValue_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAttributeMetaData_Statics::NewProp_MaxValue = { "MaxValue", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAttributeMetaData, MaxValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxValue_MetaData), NewProp_MaxValue_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAttributeMetaData_Statics::NewProp_DerivedAttributeInfo = { "DerivedAttributeInfo", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAttributeMetaData, DerivedAttributeInfo), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DerivedAttributeInfo_MetaData), NewProp_DerivedAttributeInfo_MetaData) };
void Z_Construct_UScriptStruct_FAttributeMetaData_Statics::NewProp_bCanStack_SetBit(void* Obj)
{
	((FAttributeMetaData*)Obj)->bCanStack = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAttributeMetaData_Statics::NewProp_bCanStack = { "bCanStack", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAttributeMetaData), &Z_Construct_UScriptStruct_FAttributeMetaData_Statics::NewProp_bCanStack_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanStack_MetaData), NewProp_bCanStack_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAttributeMetaData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttributeMetaData_Statics::NewProp_BaseValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttributeMetaData_Statics::NewProp_MinValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttributeMetaData_Statics::NewProp_MaxValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttributeMetaData_Statics::NewProp_DerivedAttributeInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttributeMetaData_Statics::NewProp_bCanStack,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttributeMetaData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAttributeMetaData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"AttributeMetaData",
	Z_Construct_UScriptStruct_FAttributeMetaData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttributeMetaData_Statics::PropPointers),
	sizeof(FAttributeMetaData),
	alignof(FAttributeMetaData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttributeMetaData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAttributeMetaData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAttributeMetaData()
{
	if (!Z_Registration_Info_UScriptStruct_AttributeMetaData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AttributeMetaData.InnerSingleton, Z_Construct_UScriptStruct_FAttributeMetaData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AttributeMetaData.InnerSingleton;
}
// End ScriptStruct FAttributeMetaData

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_AttributeSet_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FGameplayAttributeData::StaticStruct, Z_Construct_UScriptStruct_FGameplayAttributeData_Statics::NewStructOps, TEXT("GameplayAttributeData"), &Z_Registration_Info_UScriptStruct_GameplayAttributeData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayAttributeData), 829963770U) },
		{ FGameplayAttribute::StaticStruct, Z_Construct_UScriptStruct_FGameplayAttribute_Statics::NewStructOps, TEXT("GameplayAttribute"), &Z_Registration_Info_UScriptStruct_GameplayAttribute, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayAttribute), 884374022U) },
		{ FAttributeMetaData::StaticStruct, Z_Construct_UScriptStruct_FAttributeMetaData_Statics::NewStructOps, TEXT("AttributeMetaData"), &Z_Registration_Info_UScriptStruct_AttributeMetaData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAttributeMetaData), 2838233669U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAttributeSet, UAttributeSet::StaticClass, TEXT("UAttributeSet"), &Z_Registration_Info_UClass_UAttributeSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAttributeSet), 1042156131U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_AttributeSet_h_4229758159(TEXT("/Script/GameplayAbilities"),
	Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_AttributeSet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_AttributeSet_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_AttributeSet_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_AttributeSet_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
