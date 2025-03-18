// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BatteryCollector/Pickup.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePickup() {}

// Begin Cross Module References
BATTERYCOLLECTOR_API UClass* Z_Construct_UClass_APickup();
BATTERYCOLLECTOR_API UClass* Z_Construct_UClass_APickup_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_BatteryCollector();
// End Cross Module References

// Begin Class APickup Function IsActive
struct Z_Construct_UFunction_APickup_IsActive_Statics
{
	struct Pickup_eventIsActive_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pickup" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Return whether or not the pickup is active */" },
#endif
		{ "ModuleRelativePath", "Pickup.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Return whether or not the pickup is active" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_APickup_IsActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Pickup_eventIsActive_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APickup_IsActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Pickup_eventIsActive_Parms), &Z_Construct_UFunction_APickup_IsActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APickup_IsActive_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APickup_IsActive_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APickup_IsActive_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APickup_IsActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APickup, nullptr, "IsActive", nullptr, nullptr, Z_Construct_UFunction_APickup_IsActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APickup_IsActive_Statics::PropPointers), sizeof(Z_Construct_UFunction_APickup_IsActive_Statics::Pickup_eventIsActive_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APickup_IsActive_Statics::Function_MetaDataParams), Z_Construct_UFunction_APickup_IsActive_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APickup_IsActive_Statics::Pickup_eventIsActive_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APickup_IsActive()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APickup_IsActive_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APickup::execIsActive)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsActive();
	P_NATIVE_END;
}
// End Class APickup Function IsActive

// Begin Class APickup Function SetActive
struct Z_Construct_UFunction_APickup_SetActive_Statics
{
	struct Pickup_eventSetActive_Parms
	{
		bool NewPickupState;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pickup" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Allows other classes to safely change whether or not pickup is active */" },
#endif
		{ "ModuleRelativePath", "Pickup.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Allows other classes to safely change whether or not pickup is active" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_NewPickupState_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_NewPickupState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_APickup_SetActive_Statics::NewProp_NewPickupState_SetBit(void* Obj)
{
	((Pickup_eventSetActive_Parms*)Obj)->NewPickupState = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APickup_SetActive_Statics::NewProp_NewPickupState = { "NewPickupState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Pickup_eventSetActive_Parms), &Z_Construct_UFunction_APickup_SetActive_Statics::NewProp_NewPickupState_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APickup_SetActive_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APickup_SetActive_Statics::NewProp_NewPickupState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APickup_SetActive_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APickup_SetActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APickup, nullptr, "SetActive", nullptr, nullptr, Z_Construct_UFunction_APickup_SetActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APickup_SetActive_Statics::PropPointers), sizeof(Z_Construct_UFunction_APickup_SetActive_Statics::Pickup_eventSetActive_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APickup_SetActive_Statics::Function_MetaDataParams), Z_Construct_UFunction_APickup_SetActive_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APickup_SetActive_Statics::Pickup_eventSetActive_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APickup_SetActive()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APickup_SetActive_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APickup::execSetActive)
{
	P_GET_UBOOL(Z_Param_NewPickupState);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetActive(Z_Param_NewPickupState);
	P_NATIVE_END;
}
// End Class APickup Function SetActive

// Begin Class APickup Function WasCollected
static const FName NAME_APickup_WasCollected = FName(TEXT("WasCollected"));
void APickup::WasCollected()
{
	UFunction* Func = FindFunctionChecked(NAME_APickup_WasCollected);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		WasCollected_Implementation();
	}
}
struct Z_Construct_UFunction_APickup_WasCollected_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Function to call when the pickup is collected */" },
#endif
		{ "ModuleRelativePath", "Pickup.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Function to call when the pickup is collected" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APickup_WasCollected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APickup, nullptr, "WasCollected", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APickup_WasCollected_Statics::Function_MetaDataParams), Z_Construct_UFunction_APickup_WasCollected_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_APickup_WasCollected()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APickup_WasCollected_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APickup::execWasCollected)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->WasCollected_Implementation();
	P_NATIVE_END;
}
// End Class APickup Function WasCollected

// Begin Class APickup
void APickup::StaticRegisterNativesAPickup()
{
	UClass* Class = APickup::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "IsActive", &APickup::execIsActive },
		{ "SetActive", &APickup::execSetActive },
		{ "WasCollected", &APickup::execWasCollected },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APickup);
UClass* Z_Construct_UClass_APickup_NoRegister()
{
	return APickup::StaticClass();
}
struct Z_Construct_UClass_APickup_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Pickup.h" },
		{ "ModuleRelativePath", "Pickup.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PickupMesh_MetaData[] = {
		{ "allowprivateaccess", "true" },
		{ "Category", "Pickup" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Static mesh to represent the pickup in the level */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Pickup.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Static mesh to represent the pickup in the level" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PickupMesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_APickup_IsActive, "IsActive" }, // 3684764026
		{ &Z_Construct_UFunction_APickup_SetActive, "SetActive" }, // 3568280103
		{ &Z_Construct_UFunction_APickup_WasCollected, "WasCollected" }, // 3340440625
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APickup>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APickup_Statics::NewProp_PickupMesh = { "PickupMesh", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APickup, PickupMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PickupMesh_MetaData), NewProp_PickupMesh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APickup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickup_Statics::NewProp_PickupMesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APickup_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APickup_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_BatteryCollector,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APickup_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APickup_Statics::ClassParams = {
	&APickup::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_APickup_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_APickup_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APickup_Statics::Class_MetaDataParams), Z_Construct_UClass_APickup_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APickup()
{
	if (!Z_Registration_Info_UClass_APickup.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APickup.OuterSingleton, Z_Construct_UClass_APickup_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APickup.OuterSingleton;
}
template<> BATTERYCOLLECTOR_API UClass* StaticClass<APickup>()
{
	return APickup::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APickup);
APickup::~APickup() {}
// End Class APickup

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_rodri_Documents_GitHub_BatteryCollector_BatteryCollector_Source_BatteryCollector_Pickup_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APickup, APickup::StaticClass, TEXT("APickup"), &Z_Registration_Info_UClass_APickup, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APickup), 406008300U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_rodri_Documents_GitHub_BatteryCollector_BatteryCollector_Source_BatteryCollector_Pickup_h_878008751(TEXT("/Script/BatteryCollector"),
	Z_CompiledInDeferFile_FID_Users_rodri_Documents_GitHub_BatteryCollector_BatteryCollector_Source_BatteryCollector_Pickup_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_rodri_Documents_GitHub_BatteryCollector_BatteryCollector_Source_BatteryCollector_Pickup_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
