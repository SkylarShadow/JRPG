// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayAbilities/Public/Abilities/Tasks/AbilityTask_ApplyRootMotion_Base.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbilityTask_ApplyRootMotion_Base() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERootMotionFinishVelocityMode();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask_ApplyRootMotion_Base();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask_ApplyRootMotion_Base_NoRegister();
UPackage* Z_Construct_UPackage__Script_GameplayAbilities();
// End Cross Module References

// Begin Class UAbilityTask_ApplyRootMotion_Base
void UAbilityTask_ApplyRootMotion_Base::StaticRegisterNativesUAbilityTask_ApplyRootMotion_Base()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAbilityTask_ApplyRootMotion_Base);
UClass* Z_Construct_UClass_UAbilityTask_ApplyRootMotion_Base_NoRegister()
{
	return UAbilityTask_ApplyRootMotion_Base::StaticClass();
}
struct Z_Construct_UClass_UAbilityTask_ApplyRootMotion_Base_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Base class for ability tasks that apply root motion */" },
#endif
		{ "IncludePath", "Abilities/Tasks/AbilityTask_ApplyRootMotion_Base.h" },
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_ApplyRootMotion_Base.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Base class for ability tasks that apply root motion" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ForceName_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_ApplyRootMotion_Base.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FinishVelocityMode_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** What to do with character's Velocity when root motion finishes */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_ApplyRootMotion_Base.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "What to do with character's Velocity when root motion finishes" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FinishSetVelocity_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If FinishVelocityMode mode is \"SetVelocity\", character velocity is set to this value when root motion finishes */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_ApplyRootMotion_Base.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If FinishVelocityMode mode is \"SetVelocity\", character velocity is set to this value when root motion finishes" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FinishClampVelocity_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If FinishVelocityMode mode is \"ClampVelocity\", character velocity is clamped to this value when root motion finishes */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_ApplyRootMotion_Base.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If FinishVelocityMode mode is \"ClampVelocity\", character velocity is clamped to this value when root motion finishes" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_ApplyRootMotion_Base.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ForceName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FinishVelocityMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_FinishVelocityMode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FinishSetVelocity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FinishClampVelocity;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MovementComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAbilityTask_ApplyRootMotion_Base>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAbilityTask_ApplyRootMotion_Base_Statics::NewProp_ForceName = { "ForceName", nullptr, (EPropertyFlags)0x0020080000000020, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityTask_ApplyRootMotion_Base, ForceName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ForceName_MetaData), NewProp_ForceName_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAbilityTask_ApplyRootMotion_Base_Statics::NewProp_FinishVelocityMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAbilityTask_ApplyRootMotion_Base_Statics::NewProp_FinishVelocityMode = { "FinishVelocityMode", nullptr, (EPropertyFlags)0x0020080000000020, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityTask_ApplyRootMotion_Base, FinishVelocityMode), Z_Construct_UEnum_Engine_ERootMotionFinishVelocityMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FinishVelocityMode_MetaData), NewProp_FinishVelocityMode_MetaData) }; // 754916493
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAbilityTask_ApplyRootMotion_Base_Statics::NewProp_FinishSetVelocity = { "FinishSetVelocity", nullptr, (EPropertyFlags)0x0020080000000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityTask_ApplyRootMotion_Base, FinishSetVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FinishSetVelocity_MetaData), NewProp_FinishSetVelocity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAbilityTask_ApplyRootMotion_Base_Statics::NewProp_FinishClampVelocity = { "FinishClampVelocity", nullptr, (EPropertyFlags)0x0020080000000020, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityTask_ApplyRootMotion_Base, FinishClampVelocity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FinishClampVelocity_MetaData), NewProp_FinishClampVelocity_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAbilityTask_ApplyRootMotion_Base_Statics::NewProp_MovementComponent = { "MovementComponent", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityTask_ApplyRootMotion_Base, MovementComponent), Z_Construct_UClass_UCharacterMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementComponent_MetaData), NewProp_MovementComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAbilityTask_ApplyRootMotion_Base_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_ApplyRootMotion_Base_Statics::NewProp_ForceName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_ApplyRootMotion_Base_Statics::NewProp_FinishVelocityMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_ApplyRootMotion_Base_Statics::NewProp_FinishVelocityMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_ApplyRootMotion_Base_Statics::NewProp_FinishSetVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_ApplyRootMotion_Base_Statics::NewProp_FinishClampVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_ApplyRootMotion_Base_Statics::NewProp_MovementComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_ApplyRootMotion_Base_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAbilityTask_ApplyRootMotion_Base_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAbilityTask,
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_ApplyRootMotion_Base_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAbilityTask_ApplyRootMotion_Base_Statics::ClassParams = {
	&UAbilityTask_ApplyRootMotion_Base::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAbilityTask_ApplyRootMotion_Base_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_ApplyRootMotion_Base_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_ApplyRootMotion_Base_Statics::Class_MetaDataParams), Z_Construct_UClass_UAbilityTask_ApplyRootMotion_Base_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAbilityTask_ApplyRootMotion_Base()
{
	if (!Z_Registration_Info_UClass_UAbilityTask_ApplyRootMotion_Base.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAbilityTask_ApplyRootMotion_Base.OuterSingleton, Z_Construct_UClass_UAbilityTask_ApplyRootMotion_Base_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAbilityTask_ApplyRootMotion_Base.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UClass* StaticClass<UAbilityTask_ApplyRootMotion_Base>()
{
	return UAbilityTask_ApplyRootMotion_Base::StaticClass();
}
void UAbilityTask_ApplyRootMotion_Base::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_ForceName(TEXT("ForceName"));
	static const FName Name_FinishVelocityMode(TEXT("FinishVelocityMode"));
	static const FName Name_FinishSetVelocity(TEXT("FinishSetVelocity"));
	static const FName Name_FinishClampVelocity(TEXT("FinishClampVelocity"));
	const bool bIsValid = true
		&& Name_ForceName == ClassReps[(int32)ENetFields_Private::ForceName].Property->GetFName()
		&& Name_FinishVelocityMode == ClassReps[(int32)ENetFields_Private::FinishVelocityMode].Property->GetFName()
		&& Name_FinishSetVelocity == ClassReps[(int32)ENetFields_Private::FinishSetVelocity].Property->GetFName()
		&& Name_FinishClampVelocity == ClassReps[(int32)ENetFields_Private::FinishClampVelocity].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UAbilityTask_ApplyRootMotion_Base"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAbilityTask_ApplyRootMotion_Base);
UAbilityTask_ApplyRootMotion_Base::~UAbilityTask_ApplyRootMotion_Base() {}
// End Class UAbilityTask_ApplyRootMotion_Base

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotion_Base_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAbilityTask_ApplyRootMotion_Base, UAbilityTask_ApplyRootMotion_Base::StaticClass, TEXT("UAbilityTask_ApplyRootMotion_Base"), &Z_Registration_Info_UClass_UAbilityTask_ApplyRootMotion_Base, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAbilityTask_ApplyRootMotion_Base), 1379094819U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotion_Base_h_902900033(TEXT("/Script/GameplayAbilities"),
	Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotion_Base_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotion_Base_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
