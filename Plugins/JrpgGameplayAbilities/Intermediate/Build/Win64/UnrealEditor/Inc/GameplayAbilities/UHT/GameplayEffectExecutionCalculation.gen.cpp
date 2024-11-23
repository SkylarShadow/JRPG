// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayAbilities/Public/GameplayEffectExecutionCalculation.h"
#include "GameplayAbilities/Public/GameplayEffectAttributeCaptureDefinition.h"
#include "GameplayAbilities/Public/GameplayEffectTypes.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayEffectExecutionCalculation() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffectCalculation();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffectExecutionCalculation();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffectExecutionCalculation_NoRegister();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureDefinition();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectCustomExecutionOutput();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectCustomExecutionParameters();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayModifierEvaluatedData();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
UPackage* Z_Construct_UPackage__Script_GameplayAbilities();
// End Cross Module References

// Begin ScriptStruct FGameplayEffectCustomExecutionParameters
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayEffectCustomExecutionParameters;
class UScriptStruct* FGameplayEffectCustomExecutionParameters::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayEffectCustomExecutionParameters.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayEffectCustomExecutionParameters.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayEffectCustomExecutionParameters, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("GameplayEffectCustomExecutionParameters"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayEffectCustomExecutionParameters.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FGameplayEffectCustomExecutionParameters>()
{
	return FGameplayEffectCustomExecutionParameters::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGameplayEffectCustomExecutionParameters_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Struct representing parameters for a custom gameplay effect execution. Should not be held onto via reference, used just for the scope of the execution */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffectExecutionCalculation.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Struct representing parameters for a custom gameplay effect execution. Should not be held onto via reference, used just for the scope of the execution" },
#endif
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayEffectCustomExecutionParameters>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayEffectCustomExecutionParameters_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
	nullptr,
	&NewStructOps,
	"GameplayEffectCustomExecutionParameters",
	nullptr,
	0,
	sizeof(FGameplayEffectCustomExecutionParameters),
	alignof(FGameplayEffectCustomExecutionParameters),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectCustomExecutionParameters_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGameplayEffectCustomExecutionParameters_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectCustomExecutionParameters()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayEffectCustomExecutionParameters.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayEffectCustomExecutionParameters.InnerSingleton, Z_Construct_UScriptStruct_FGameplayEffectCustomExecutionParameters_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GameplayEffectCustomExecutionParameters.InnerSingleton;
}
// End ScriptStruct FGameplayEffectCustomExecutionParameters

// Begin ScriptStruct FGameplayEffectCustomExecutionOutput
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayEffectCustomExecutionOutput;
class UScriptStruct* FGameplayEffectCustomExecutionOutput::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayEffectCustomExecutionOutput.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayEffectCustomExecutionOutput.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayEffectCustomExecutionOutput, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("GameplayEffectCustomExecutionOutput"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayEffectCustomExecutionOutput.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FGameplayEffectCustomExecutionOutput>()
{
	return FGameplayEffectCustomExecutionOutput::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGameplayEffectCustomExecutionOutput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Struct representing the output of a custom gameplay effect execution. */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffectExecutionCalculation.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Struct representing the output of a custom gameplay effect execution." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputModifiers_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Modifiers emitted by the execution */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffectExecutionCalculation.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Modifiers emitted by the execution" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTriggerConditionalGameplayEffects_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If true, the execution wants to trigger conditional gameplay effects when it completes */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffectExecutionCalculation.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, the execution wants to trigger conditional gameplay effects when it completes" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHandledStackCountManually_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If true, the execution itself has manually handled the stack count of the effect and the GE system doesn't have to automatically handle it */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffectExecutionCalculation.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, the execution itself has manually handled the stack count of the effect and the GE system doesn't have to automatically handle it" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHandledGameplayCuesManually_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If true, the execution itself has manually invoked all gameplay cues and the GE system doesn't have to automatically handle them. */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffectExecutionCalculation.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, the execution itself has manually invoked all gameplay cues and the GE system doesn't have to automatically handle them." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutputModifiers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutputModifiers;
	static void NewProp_bTriggerConditionalGameplayEffects_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTriggerConditionalGameplayEffects;
	static void NewProp_bHandledStackCountManually_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHandledStackCountManually;
	static void NewProp_bHandledGameplayCuesManually_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHandledGameplayCuesManually;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayEffectCustomExecutionOutput>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayEffectCustomExecutionOutput_Statics::NewProp_OutputModifiers_Inner = { "OutputModifiers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayModifierEvaluatedData, METADATA_PARAMS(0, nullptr) }; // 2054617656
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGameplayEffectCustomExecutionOutput_Statics::NewProp_OutputModifiers = { "OutputModifiers", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayEffectCustomExecutionOutput, OutputModifiers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputModifiers_MetaData), NewProp_OutputModifiers_MetaData) }; // 2054617656
void Z_Construct_UScriptStruct_FGameplayEffectCustomExecutionOutput_Statics::NewProp_bTriggerConditionalGameplayEffects_SetBit(void* Obj)
{
	((FGameplayEffectCustomExecutionOutput*)Obj)->bTriggerConditionalGameplayEffects = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameplayEffectCustomExecutionOutput_Statics::NewProp_bTriggerConditionalGameplayEffects = { "bTriggerConditionalGameplayEffects", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FGameplayEffectCustomExecutionOutput), &Z_Construct_UScriptStruct_FGameplayEffectCustomExecutionOutput_Statics::NewProp_bTriggerConditionalGameplayEffects_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTriggerConditionalGameplayEffects_MetaData), NewProp_bTriggerConditionalGameplayEffects_MetaData) };
void Z_Construct_UScriptStruct_FGameplayEffectCustomExecutionOutput_Statics::NewProp_bHandledStackCountManually_SetBit(void* Obj)
{
	((FGameplayEffectCustomExecutionOutput*)Obj)->bHandledStackCountManually = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameplayEffectCustomExecutionOutput_Statics::NewProp_bHandledStackCountManually = { "bHandledStackCountManually", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FGameplayEffectCustomExecutionOutput), &Z_Construct_UScriptStruct_FGameplayEffectCustomExecutionOutput_Statics::NewProp_bHandledStackCountManually_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHandledStackCountManually_MetaData), NewProp_bHandledStackCountManually_MetaData) };
void Z_Construct_UScriptStruct_FGameplayEffectCustomExecutionOutput_Statics::NewProp_bHandledGameplayCuesManually_SetBit(void* Obj)
{
	((FGameplayEffectCustomExecutionOutput*)Obj)->bHandledGameplayCuesManually = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameplayEffectCustomExecutionOutput_Statics::NewProp_bHandledGameplayCuesManually = { "bHandledGameplayCuesManually", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FGameplayEffectCustomExecutionOutput), &Z_Construct_UScriptStruct_FGameplayEffectCustomExecutionOutput_Statics::NewProp_bHandledGameplayCuesManually_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHandledGameplayCuesManually_MetaData), NewProp_bHandledGameplayCuesManually_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayEffectCustomExecutionOutput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectCustomExecutionOutput_Statics::NewProp_OutputModifiers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectCustomExecutionOutput_Statics::NewProp_OutputModifiers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectCustomExecutionOutput_Statics::NewProp_bTriggerConditionalGameplayEffects,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectCustomExecutionOutput_Statics::NewProp_bHandledStackCountManually,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectCustomExecutionOutput_Statics::NewProp_bHandledGameplayCuesManually,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectCustomExecutionOutput_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayEffectCustomExecutionOutput_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
	nullptr,
	&NewStructOps,
	"GameplayEffectCustomExecutionOutput",
	Z_Construct_UScriptStruct_FGameplayEffectCustomExecutionOutput_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectCustomExecutionOutput_Statics::PropPointers),
	sizeof(FGameplayEffectCustomExecutionOutput),
	alignof(FGameplayEffectCustomExecutionOutput),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectCustomExecutionOutput_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGameplayEffectCustomExecutionOutput_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectCustomExecutionOutput()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayEffectCustomExecutionOutput.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayEffectCustomExecutionOutput.InnerSingleton, Z_Construct_UScriptStruct_FGameplayEffectCustomExecutionOutput_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GameplayEffectCustomExecutionOutput.InnerSingleton;
}
// End ScriptStruct FGameplayEffectCustomExecutionOutput

// Begin Class UGameplayEffectExecutionCalculation Function Execute
struct GameplayEffectExecutionCalculation_eventExecute_Parms
{
	FGameplayEffectCustomExecutionParameters ExecutionParams;
	FGameplayEffectCustomExecutionOutput OutExecutionOutput;
};
static FName NAME_UGameplayEffectExecutionCalculation_Execute = FName(TEXT("Execute"));
void UGameplayEffectExecutionCalculation::Execute(FGameplayEffectCustomExecutionParameters const& ExecutionParams, FGameplayEffectCustomExecutionOutput& OutExecutionOutput) const
{
	GameplayEffectExecutionCalculation_eventExecute_Parms Parms;
	Parms.ExecutionParams=ExecutionParams;
	Parms.OutExecutionOutput=OutExecutionOutput;
	const_cast<UGameplayEffectExecutionCalculation*>(this)->ProcessEvent(FindFunctionChecked(NAME_UGameplayEffectExecutionCalculation_Execute),&Parms);
	OutExecutionOutput=Parms.OutExecutionOutput;
}
struct Z_Construct_UFunction_UGameplayEffectExecutionCalculation_Execute_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Calculation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Called whenever the owning gameplay effect is executed. Allowed to do essentially whatever is desired, including generating new\n\x09 * modifiers to instantly execute as well.\n\x09 * \n\x09 * @note: Native subclasses should override the auto-generated Execute_Implementation function and NOT this one.\n\x09 * \n\x09 * @param ExecutionParams\x09\x09Parameters for the custom execution calculation\n\x09 * @param OutExecutionOutput\x09[OUT] Output data populated by the execution detailing further behavior or results of the execution\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffectExecutionCalculation.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called whenever the owning gameplay effect is executed. Allowed to do essentially whatever is desired, including generating new\nmodifiers to instantly execute as well.\n\n@note: Native subclasses should override the auto-generated Execute_Implementation function and NOT this one.\n\n@param ExecutionParams               Parameters for the custom execution calculation\n@param OutExecutionOutput    [OUT] Output data populated by the execution detailing further behavior or results of the execution" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExecutionParams_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExecutionParams;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutExecutionOutput;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayEffectExecutionCalculation_Execute_Statics::NewProp_ExecutionParams = { "ExecutionParams", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayEffectExecutionCalculation_eventExecute_Parms, ExecutionParams), Z_Construct_UScriptStruct_FGameplayEffectCustomExecutionParameters, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExecutionParams_MetaData), NewProp_ExecutionParams_MetaData) }; // 3050420966
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayEffectExecutionCalculation_Execute_Statics::NewProp_OutExecutionOutput = { "OutExecutionOutput", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayEffectExecutionCalculation_eventExecute_Parms, OutExecutionOutput), Z_Construct_UScriptStruct_FGameplayEffectCustomExecutionOutput, METADATA_PARAMS(0, nullptr) }; // 3413040863
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayEffectExecutionCalculation_Execute_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayEffectExecutionCalculation_Execute_Statics::NewProp_ExecutionParams,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayEffectExecutionCalculation_Execute_Statics::NewProp_OutExecutionOutput,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayEffectExecutionCalculation_Execute_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayEffectExecutionCalculation_Execute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayEffectExecutionCalculation, nullptr, "Execute", nullptr, nullptr, Z_Construct_UFunction_UGameplayEffectExecutionCalculation_Execute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayEffectExecutionCalculation_Execute_Statics::PropPointers), sizeof(GameplayEffectExecutionCalculation_eventExecute_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayEffectExecutionCalculation_Execute_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameplayEffectExecutionCalculation_Execute_Statics::Function_MetaDataParams) };
static_assert(sizeof(GameplayEffectExecutionCalculation_eventExecute_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGameplayEffectExecutionCalculation_Execute()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayEffectExecutionCalculation_Execute_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGameplayEffectExecutionCalculation::execExecute)
{
	P_GET_STRUCT_REF(FGameplayEffectCustomExecutionParameters,Z_Param_Out_ExecutionParams);
	P_GET_STRUCT_REF(FGameplayEffectCustomExecutionOutput,Z_Param_Out_OutExecutionOutput);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Execute_Implementation(Z_Param_Out_ExecutionParams,Z_Param_Out_OutExecutionOutput);
	P_NATIVE_END;
}
// End Class UGameplayEffectExecutionCalculation Function Execute

// Begin Class UGameplayEffectExecutionCalculation
void UGameplayEffectExecutionCalculation::StaticRegisterNativesUGameplayEffectExecutionCalculation()
{
	UClass* Class = UGameplayEffectExecutionCalculation::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Execute", &UGameplayEffectExecutionCalculation::execExecute },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameplayEffectExecutionCalculation);
UClass* Z_Construct_UClass_UGameplayEffectExecutionCalculation_NoRegister()
{
	return UGameplayEffectExecutionCalculation::StaticClass();
}
struct Z_Construct_UClass_UGameplayEffectExecutionCalculation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "GameplayEffectExecutionCalculation.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/GameplayEffectExecutionCalculation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRequiresPassedInTags_MetaData[] = {
		{ "Category", "Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Used to indicate if this execution uses Passed In Tags */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffectExecutionCalculation.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Used to indicate if this execution uses Passed In Tags" },
#endif
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InvalidScopedModifierAttributes_MetaData[] = {
		{ "Category", "Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Any attribute in this list will not show up as a valid option for scoped modifiers; Used to allow attribute capture for internal calculation while preventing modification */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffectExecutionCalculation.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Any attribute in this list will not show up as a valid option for scoped modifiers; Used to allow attribute capture for internal calculation while preventing modification" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ValidTransientAggregatorIdentifiers_MetaData[] = {
		{ "Category", "NonAttributeCalculation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Any tag in this container will show up as a valid \"temporary variable\" for scoped modifiers; Used to allow for data-driven variable support that doesn't rely on scoped modifiers */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffectExecutionCalculation.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Any tag in this container will show up as a valid \"temporary variable\" for scoped modifiers; Used to allow for data-driven variable support that doesn't rely on scoped modifiers" },
#endif
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static void NewProp_bRequiresPassedInTags_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRequiresPassedInTags;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InvalidScopedModifierAttributes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InvalidScopedModifierAttributes;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ValidTransientAggregatorIdentifiers;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGameplayEffectExecutionCalculation_Execute, "Execute" }, // 62020508
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameplayEffectExecutionCalculation>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UGameplayEffectExecutionCalculation_Statics::NewProp_bRequiresPassedInTags_SetBit(void* Obj)
{
	((UGameplayEffectExecutionCalculation*)Obj)->bRequiresPassedInTags = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGameplayEffectExecutionCalculation_Statics::NewProp_bRequiresPassedInTags = { "bRequiresPassedInTags", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGameplayEffectExecutionCalculation), &Z_Construct_UClass_UGameplayEffectExecutionCalculation_Statics::NewProp_bRequiresPassedInTags_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRequiresPassedInTags_MetaData), NewProp_bRequiresPassedInTags_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameplayEffectExecutionCalculation_Statics::NewProp_InvalidScopedModifierAttributes_Inner = { "InvalidScopedModifierAttributes", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureDefinition, METADATA_PARAMS(0, nullptr) }; // 1688717124
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameplayEffectExecutionCalculation_Statics::NewProp_InvalidScopedModifierAttributes = { "InvalidScopedModifierAttributes", nullptr, (EPropertyFlags)0x0020080800010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameplayEffectExecutionCalculation, InvalidScopedModifierAttributes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InvalidScopedModifierAttributes_MetaData), NewProp_InvalidScopedModifierAttributes_MetaData) }; // 1688717124
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameplayEffectExecutionCalculation_Statics::NewProp_ValidTransientAggregatorIdentifiers = { "ValidTransientAggregatorIdentifiers", nullptr, (EPropertyFlags)0x0020080800010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameplayEffectExecutionCalculation, ValidTransientAggregatorIdentifiers), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ValidTransientAggregatorIdentifiers_MetaData), NewProp_ValidTransientAggregatorIdentifiers_MetaData) }; // 3352185621
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameplayEffectExecutionCalculation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayEffectExecutionCalculation_Statics::NewProp_bRequiresPassedInTags,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayEffectExecutionCalculation_Statics::NewProp_InvalidScopedModifierAttributes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayEffectExecutionCalculation_Statics::NewProp_InvalidScopedModifierAttributes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayEffectExecutionCalculation_Statics::NewProp_ValidTransientAggregatorIdentifiers,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayEffectExecutionCalculation_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGameplayEffectExecutionCalculation_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameplayEffectCalculation,
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayEffectExecutionCalculation_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameplayEffectExecutionCalculation_Statics::ClassParams = {
	&UGameplayEffectExecutionCalculation::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UGameplayEffectExecutionCalculation_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayEffectExecutionCalculation_Statics::PropPointers),
	0,
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayEffectExecutionCalculation_Statics::Class_MetaDataParams), Z_Construct_UClass_UGameplayEffectExecutionCalculation_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGameplayEffectExecutionCalculation()
{
	if (!Z_Registration_Info_UClass_UGameplayEffectExecutionCalculation.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameplayEffectExecutionCalculation.OuterSingleton, Z_Construct_UClass_UGameplayEffectExecutionCalculation_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGameplayEffectExecutionCalculation.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UClass* StaticClass<UGameplayEffectExecutionCalculation>()
{
	return UGameplayEffectExecutionCalculation::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGameplayEffectExecutionCalculation);
UGameplayEffectExecutionCalculation::~UGameplayEffectExecutionCalculation() {}
// End Class UGameplayEffectExecutionCalculation

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectExecutionCalculation_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FGameplayEffectCustomExecutionParameters::StaticStruct, Z_Construct_UScriptStruct_FGameplayEffectCustomExecutionParameters_Statics::NewStructOps, TEXT("GameplayEffectCustomExecutionParameters"), &Z_Registration_Info_UScriptStruct_GameplayEffectCustomExecutionParameters, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayEffectCustomExecutionParameters), 3050420966U) },
		{ FGameplayEffectCustomExecutionOutput::StaticStruct, Z_Construct_UScriptStruct_FGameplayEffectCustomExecutionOutput_Statics::NewStructOps, TEXT("GameplayEffectCustomExecutionOutput"), &Z_Registration_Info_UScriptStruct_GameplayEffectCustomExecutionOutput, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayEffectCustomExecutionOutput), 3413040863U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGameplayEffectExecutionCalculation, UGameplayEffectExecutionCalculation::StaticClass, TEXT("UGameplayEffectExecutionCalculation"), &Z_Registration_Info_UClass_UGameplayEffectExecutionCalculation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameplayEffectExecutionCalculation), 3857281271U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectExecutionCalculation_h_2265583919(TEXT("/Script/GameplayAbilities"),
	Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectExecutionCalculation_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectExecutionCalculation_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectExecutionCalculation_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Super_Documents_Unreal_Projects_VehicleTest_Plugins_JrpgGameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectExecutionCalculation_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
