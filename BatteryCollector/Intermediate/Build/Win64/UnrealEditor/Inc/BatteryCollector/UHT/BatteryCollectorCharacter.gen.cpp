// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BatteryCollector/BatteryCollectorCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBatteryCollectorCharacter() {}

// Begin Cross Module References
BATTERYCOLLECTOR_API UClass* Z_Construct_UClass_ABatteryCollectorCharacter();
BATTERYCOLLECTOR_API UClass* Z_Construct_UClass_ABatteryCollectorCharacter_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
UPackage* Z_Construct_UPackage__Script_BatteryCollector();
// End Cross Module References

// Begin Class ABatteryCollectorCharacter Function CollectPickups
struct Z_Construct_UFunction_ABatteryCollectorCharacter_CollectPickups_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pikcups" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Called when we press a key to collect any pickups inside the CollectionSphere\n" },
#endif
		{ "ModuleRelativePath", "BatteryCollectorCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when we press a key to collect any pickups inside the CollectionSphere" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABatteryCollectorCharacter_CollectPickups_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABatteryCollectorCharacter, nullptr, "CollectPickups", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABatteryCollectorCharacter_CollectPickups_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABatteryCollectorCharacter_CollectPickups_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ABatteryCollectorCharacter_CollectPickups()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABatteryCollectorCharacter_CollectPickups_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABatteryCollectorCharacter::execCollectPickups)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CollectPickups();
	P_NATIVE_END;
}
// End Class ABatteryCollectorCharacter Function CollectPickups

// Begin Class ABatteryCollectorCharacter Function GetCurrentPower
struct Z_Construct_UFunction_ABatteryCollectorCharacter_GetCurrentPower_Statics
{
	struct BatteryCollectorCharacter_eventGetCurrentPower_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Power" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Accessor function for current power\n" },
#endif
		{ "ModuleRelativePath", "BatteryCollectorCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Accessor function for current power" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABatteryCollectorCharacter_GetCurrentPower_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BatteryCollectorCharacter_eventGetCurrentPower_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABatteryCollectorCharacter_GetCurrentPower_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABatteryCollectorCharacter_GetCurrentPower_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABatteryCollectorCharacter_GetCurrentPower_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABatteryCollectorCharacter_GetCurrentPower_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABatteryCollectorCharacter, nullptr, "GetCurrentPower", nullptr, nullptr, Z_Construct_UFunction_ABatteryCollectorCharacter_GetCurrentPower_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABatteryCollectorCharacter_GetCurrentPower_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABatteryCollectorCharacter_GetCurrentPower_Statics::BatteryCollectorCharacter_eventGetCurrentPower_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABatteryCollectorCharacter_GetCurrentPower_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABatteryCollectorCharacter_GetCurrentPower_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ABatteryCollectorCharacter_GetCurrentPower_Statics::BatteryCollectorCharacter_eventGetCurrentPower_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABatteryCollectorCharacter_GetCurrentPower()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABatteryCollectorCharacter_GetCurrentPower_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABatteryCollectorCharacter::execGetCurrentPower)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetCurrentPower();
	P_NATIVE_END;
}
// End Class ABatteryCollectorCharacter Function GetCurrentPower

// Begin Class ABatteryCollectorCharacter Function GetInitialPower
struct Z_Construct_UFunction_ABatteryCollectorCharacter_GetInitialPower_Statics
{
	struct BatteryCollectorCharacter_eventGetInitialPower_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Power" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Accessor function for initial power\n" },
#endif
		{ "ModuleRelativePath", "BatteryCollectorCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Accessor function for initial power" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABatteryCollectorCharacter_GetInitialPower_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BatteryCollectorCharacter_eventGetInitialPower_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABatteryCollectorCharacter_GetInitialPower_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABatteryCollectorCharacter_GetInitialPower_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABatteryCollectorCharacter_GetInitialPower_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABatteryCollectorCharacter_GetInitialPower_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABatteryCollectorCharacter, nullptr, "GetInitialPower", nullptr, nullptr, Z_Construct_UFunction_ABatteryCollectorCharacter_GetInitialPower_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABatteryCollectorCharacter_GetInitialPower_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABatteryCollectorCharacter_GetInitialPower_Statics::BatteryCollectorCharacter_eventGetInitialPower_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABatteryCollectorCharacter_GetInitialPower_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABatteryCollectorCharacter_GetInitialPower_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ABatteryCollectorCharacter_GetInitialPower_Statics::BatteryCollectorCharacter_eventGetInitialPower_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABatteryCollectorCharacter_GetInitialPower()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABatteryCollectorCharacter_GetInitialPower_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABatteryCollectorCharacter::execGetInitialPower)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetInitialPower();
	P_NATIVE_END;
}
// End Class ABatteryCollectorCharacter Function GetInitialPower

// Begin Class ABatteryCollectorCharacter Function PowerChangeEffect
static const FName NAME_ABatteryCollectorCharacter_PowerChangeEffect = FName(TEXT("PowerChangeEffect"));
void ABatteryCollectorCharacter::PowerChangeEffect()
{
	UFunction* Func = FindFunctionChecked(NAME_ABatteryCollectorCharacter_PowerChangeEffect);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_ABatteryCollectorCharacter_PowerChangeEffect_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Power" },
		{ "ModuleRelativePath", "BatteryCollectorCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABatteryCollectorCharacter_PowerChangeEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABatteryCollectorCharacter, nullptr, "PowerChangeEffect", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABatteryCollectorCharacter_PowerChangeEffect_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABatteryCollectorCharacter_PowerChangeEffect_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ABatteryCollectorCharacter_PowerChangeEffect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABatteryCollectorCharacter_PowerChangeEffect_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class ABatteryCollectorCharacter Function PowerChangeEffect

// Begin Class ABatteryCollectorCharacter Function UpdatePower
struct Z_Construct_UFunction_ABatteryCollectorCharacter_UpdatePower_Statics
{
	struct BatteryCollectorCharacter_eventUpdatePower_Parms
	{
		float PowerChange;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Power" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Function to update the character's power\n\x09 * @param PowerChange This is the amount to change the power by, and it can be positive or negative.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "BatteryCollectorCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Function to update the character's power\n@param PowerChange This is the amount to change the power by, and it can be positive or negative." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PowerChange;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABatteryCollectorCharacter_UpdatePower_Statics::NewProp_PowerChange = { "PowerChange", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BatteryCollectorCharacter_eventUpdatePower_Parms, PowerChange), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABatteryCollectorCharacter_UpdatePower_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABatteryCollectorCharacter_UpdatePower_Statics::NewProp_PowerChange,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABatteryCollectorCharacter_UpdatePower_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABatteryCollectorCharacter_UpdatePower_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABatteryCollectorCharacter, nullptr, "UpdatePower", nullptr, nullptr, Z_Construct_UFunction_ABatteryCollectorCharacter_UpdatePower_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABatteryCollectorCharacter_UpdatePower_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABatteryCollectorCharacter_UpdatePower_Statics::BatteryCollectorCharacter_eventUpdatePower_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABatteryCollectorCharacter_UpdatePower_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABatteryCollectorCharacter_UpdatePower_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ABatteryCollectorCharacter_UpdatePower_Statics::BatteryCollectorCharacter_eventUpdatePower_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABatteryCollectorCharacter_UpdatePower()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABatteryCollectorCharacter_UpdatePower_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABatteryCollectorCharacter::execUpdatePower)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_PowerChange);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdatePower(Z_Param_PowerChange);
	P_NATIVE_END;
}
// End Class ABatteryCollectorCharacter Function UpdatePower

// Begin Class ABatteryCollectorCharacter
void ABatteryCollectorCharacter::StaticRegisterNativesABatteryCollectorCharacter()
{
	UClass* Class = ABatteryCollectorCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CollectPickups", &ABatteryCollectorCharacter::execCollectPickups },
		{ "GetCurrentPower", &ABatteryCollectorCharacter::execGetCurrentPower },
		{ "GetInitialPower", &ABatteryCollectorCharacter::execGetInitialPower },
		{ "UpdatePower", &ABatteryCollectorCharacter::execUpdatePower },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABatteryCollectorCharacter);
UClass* Z_Construct_UClass_ABatteryCollectorCharacter_NoRegister()
{
	return ABatteryCollectorCharacter::StaticClass();
}
struct Z_Construct_UClass_ABatteryCollectorCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "BatteryCollectorCharacter.h" },
		{ "ModuleRelativePath", "BatteryCollectorCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Camera boom positioning the camera behind the character */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BatteryCollectorCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera boom positioning the camera behind the character" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Follow camera */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BatteryCollectorCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Follow camera" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollectionSphere_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Pickups" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Collection sphere */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BatteryCollectorCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Collection sphere" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContext_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** MappingContext */" },
#endif
		{ "ModuleRelativePath", "BatteryCollectorCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MappingContext" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JumpAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Jump Input Action */" },
#endif
		{ "ModuleRelativePath", "BatteryCollectorCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Jump Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Move Input Action */" },
#endif
		{ "ModuleRelativePath", "BatteryCollectorCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Move Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Look Input Action */" },
#endif
		{ "ModuleRelativePath", "BatteryCollectorCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Look Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollectAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Collect Input Action */" },
#endif
		{ "ModuleRelativePath", "BatteryCollectorCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Collect Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialPower_MetaData[] = {
		{ "BlueprintProtected", "true" },
		{ "Category", "Power" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The starting power level of our character\n" },
#endif
		{ "ModuleRelativePath", "BatteryCollectorCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The starting power level of our character" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpeedFactor_MetaData[] = {
		{ "BlueprintProtected", "true" },
		{ "Category", "Power" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Multiplier for character speed\n" },
#endif
		{ "ModuleRelativePath", "BatteryCollectorCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Multiplier for character speed" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseSpeed_MetaData[] = {
		{ "BlueprintProtected", "true" },
		{ "Category", "Power" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Speed when power level = 0\n" },
#endif
		{ "ModuleRelativePath", "BatteryCollectorCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Speed when power level = 0" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterPower_MetaData[] = {
		{ "Category", "Power" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Current power level of our character\n" },
#endif
		{ "ModuleRelativePath", "BatteryCollectorCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Current power level of our character" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CollectionSphere;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_JumpAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CollectAction;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InitialPower;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpeedFactor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CharacterPower;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ABatteryCollectorCharacter_CollectPickups, "CollectPickups" }, // 3011848028
		{ &Z_Construct_UFunction_ABatteryCollectorCharacter_GetCurrentPower, "GetCurrentPower" }, // 3390285652
		{ &Z_Construct_UFunction_ABatteryCollectorCharacter_GetInitialPower, "GetInitialPower" }, // 1173904871
		{ &Z_Construct_UFunction_ABatteryCollectorCharacter_PowerChangeEffect, "PowerChangeEffect" }, // 4032847864
		{ &Z_Construct_UFunction_ABatteryCollectorCharacter_UpdatePower, "UpdatePower" }, // 2980045958
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABatteryCollectorCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABatteryCollectorCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABatteryCollectorCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraBoom_MetaData), NewProp_CameraBoom_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABatteryCollectorCharacter_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABatteryCollectorCharacter, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FollowCamera_MetaData), NewProp_FollowCamera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABatteryCollectorCharacter_Statics::NewProp_CollectionSphere = { "CollectionSphere", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABatteryCollectorCharacter, CollectionSphere), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollectionSphere_MetaData), NewProp_CollectionSphere_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABatteryCollectorCharacter_Statics::NewProp_DefaultMappingContext = { "DefaultMappingContext", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABatteryCollectorCharacter, DefaultMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMappingContext_MetaData), NewProp_DefaultMappingContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABatteryCollectorCharacter_Statics::NewProp_JumpAction = { "JumpAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABatteryCollectorCharacter, JumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JumpAction_MetaData), NewProp_JumpAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABatteryCollectorCharacter_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABatteryCollectorCharacter, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveAction_MetaData), NewProp_MoveAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABatteryCollectorCharacter_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABatteryCollectorCharacter, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAction_MetaData), NewProp_LookAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABatteryCollectorCharacter_Statics::NewProp_CollectAction = { "CollectAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABatteryCollectorCharacter, CollectAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollectAction_MetaData), NewProp_CollectAction_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABatteryCollectorCharacter_Statics::NewProp_InitialPower = { "InitialPower", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABatteryCollectorCharacter, InitialPower), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialPower_MetaData), NewProp_InitialPower_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABatteryCollectorCharacter_Statics::NewProp_SpeedFactor = { "SpeedFactor", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABatteryCollectorCharacter, SpeedFactor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpeedFactor_MetaData), NewProp_SpeedFactor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABatteryCollectorCharacter_Statics::NewProp_BaseSpeed = { "BaseSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABatteryCollectorCharacter, BaseSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseSpeed_MetaData), NewProp_BaseSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABatteryCollectorCharacter_Statics::NewProp_CharacterPower = { "CharacterPower", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABatteryCollectorCharacter, CharacterPower), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterPower_MetaData), NewProp_CharacterPower_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABatteryCollectorCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABatteryCollectorCharacter_Statics::NewProp_CameraBoom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABatteryCollectorCharacter_Statics::NewProp_FollowCamera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABatteryCollectorCharacter_Statics::NewProp_CollectionSphere,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABatteryCollectorCharacter_Statics::NewProp_DefaultMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABatteryCollectorCharacter_Statics::NewProp_JumpAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABatteryCollectorCharacter_Statics::NewProp_MoveAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABatteryCollectorCharacter_Statics::NewProp_LookAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABatteryCollectorCharacter_Statics::NewProp_CollectAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABatteryCollectorCharacter_Statics::NewProp_InitialPower,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABatteryCollectorCharacter_Statics::NewProp_SpeedFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABatteryCollectorCharacter_Statics::NewProp_BaseSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABatteryCollectorCharacter_Statics::NewProp_CharacterPower,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABatteryCollectorCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABatteryCollectorCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_BatteryCollector,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABatteryCollectorCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABatteryCollectorCharacter_Statics::ClassParams = {
	&ABatteryCollectorCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ABatteryCollectorCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ABatteryCollectorCharacter_Statics::PropPointers),
	0,
	0x008000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABatteryCollectorCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ABatteryCollectorCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABatteryCollectorCharacter()
{
	if (!Z_Registration_Info_UClass_ABatteryCollectorCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABatteryCollectorCharacter.OuterSingleton, Z_Construct_UClass_ABatteryCollectorCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABatteryCollectorCharacter.OuterSingleton;
}
template<> BATTERYCOLLECTOR_API UClass* StaticClass<ABatteryCollectorCharacter>()
{
	return ABatteryCollectorCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABatteryCollectorCharacter);
ABatteryCollectorCharacter::~ABatteryCollectorCharacter() {}
// End Class ABatteryCollectorCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_rodri_Documents_GitHub_BatteryCollector_BatteryCollector_Source_BatteryCollector_BatteryCollectorCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABatteryCollectorCharacter, ABatteryCollectorCharacter::StaticClass, TEXT("ABatteryCollectorCharacter"), &Z_Registration_Info_UClass_ABatteryCollectorCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABatteryCollectorCharacter), 3914170436U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_rodri_Documents_GitHub_BatteryCollector_BatteryCollector_Source_BatteryCollector_BatteryCollectorCharacter_h_3673166399(TEXT("/Script/BatteryCollector"),
	Z_CompiledInDeferFile_FID_Users_rodri_Documents_GitHub_BatteryCollector_BatteryCollector_Source_BatteryCollector_BatteryCollectorCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_rodri_Documents_GitHub_BatteryCollector_BatteryCollector_Source_BatteryCollector_BatteryCollectorCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
