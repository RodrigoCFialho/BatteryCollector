// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BatteryCollector/SpawnVolume.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpawnVolume() {}

// Begin Cross Module References
BATTERYCOLLECTOR_API UClass* Z_Construct_UClass_APickup_NoRegister();
BATTERYCOLLECTOR_API UClass* Z_Construct_UClass_ASpawnVolume();
BATTERYCOLLECTOR_API UClass* Z_Construct_UClass_ASpawnVolume_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_BatteryCollector();
// End Cross Module References

// Begin Class ASpawnVolume Function GetRandomPointInVolume
struct Z_Construct_UFunction_ASpawnVolume_GetRandomPointInVolume_Statics
{
	struct SpawnVolume_eventGetRandomPointInVolume_Parms
	{
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Spawning" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Find a random point within the BoxComponent */" },
#endif
		{ "ModuleRelativePath", "SpawnVolume.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Find a random point within the BoxComponent" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASpawnVolume_GetRandomPointInVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpawnVolume_eventGetRandomPointInVolume_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpawnVolume_GetRandomPointInVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpawnVolume_GetRandomPointInVolume_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpawnVolume_GetRandomPointInVolume_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpawnVolume_GetRandomPointInVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpawnVolume, nullptr, "GetRandomPointInVolume", nullptr, nullptr, Z_Construct_UFunction_ASpawnVolume_GetRandomPointInVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpawnVolume_GetRandomPointInVolume_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASpawnVolume_GetRandomPointInVolume_Statics::SpawnVolume_eventGetRandomPointInVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpawnVolume_GetRandomPointInVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASpawnVolume_GetRandomPointInVolume_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASpawnVolume_GetRandomPointInVolume_Statics::SpawnVolume_eventGetRandomPointInVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASpawnVolume_GetRandomPointInVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASpawnVolume_GetRandomPointInVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASpawnVolume::execGetRandomPointInVolume)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetRandomPointInVolume();
	P_NATIVE_END;
}
// End Class ASpawnVolume Function GetRandomPointInVolume

// Begin Class ASpawnVolume
void ASpawnVolume::StaticRegisterNativesASpawnVolume()
{
	UClass* Class = ASpawnVolume::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetRandomPointInVolume", &ASpawnVolume::execGetRandomPointInVolume },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASpawnVolume);
UClass* Z_Construct_UClass_ASpawnVolume_NoRegister()
{
	return ASpawnVolume::StaticClass();
}
struct Z_Construct_UClass_ASpawnVolume_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SpawnVolume.h" },
		{ "ModuleRelativePath", "SpawnVolume.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WhereToSpawn_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Spawning" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Box component to specify where the pickups should be spawned */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SpawnVolume.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Box component to specify where the pickups should be spawned" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WhatToSpawn_MetaData[] = {
		{ "Category", "Spawning" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The pickup to spawn */" },
#endif
		{ "ModuleRelativePath", "SpawnVolume.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The pickup to spawn" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnDelayRangeLow_MetaData[] = {
		{ "Category", "Spawning" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Minimum spawn delay */" },
#endif
		{ "ModuleRelativePath", "SpawnVolume.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Minimum spawn delay" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnDelayRangeHigh_MetaData[] = {
		{ "Category", "Spawning" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Maximum spawn delay */" },
#endif
		{ "ModuleRelativePath", "SpawnVolume.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum spawn delay" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WhereToSpawn;
	static const UECodeGen_Private::FClassPropertyParams NewProp_WhatToSpawn;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpawnDelayRangeLow;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpawnDelayRangeHigh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ASpawnVolume_GetRandomPointInVolume, "GetRandomPointInVolume" }, // 4092956067
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpawnVolume>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpawnVolume_Statics::NewProp_WhereToSpawn = { "WhereToSpawn", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpawnVolume, WhereToSpawn), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WhereToSpawn_MetaData), NewProp_WhereToSpawn_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASpawnVolume_Statics::NewProp_WhatToSpawn = { "WhatToSpawn", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpawnVolume, WhatToSpawn), Z_Construct_UClass_UClass, Z_Construct_UClass_APickup_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WhatToSpawn_MetaData), NewProp_WhatToSpawn_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASpawnVolume_Statics::NewProp_SpawnDelayRangeLow = { "SpawnDelayRangeLow", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpawnVolume, SpawnDelayRangeLow), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnDelayRangeLow_MetaData), NewProp_SpawnDelayRangeLow_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASpawnVolume_Statics::NewProp_SpawnDelayRangeHigh = { "SpawnDelayRangeHigh", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpawnVolume, SpawnDelayRangeHigh), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnDelayRangeHigh_MetaData), NewProp_SpawnDelayRangeHigh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASpawnVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawnVolume_Statics::NewProp_WhereToSpawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawnVolume_Statics::NewProp_WhatToSpawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawnVolume_Statics::NewProp_SpawnDelayRangeLow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawnVolume_Statics::NewProp_SpawnDelayRangeHigh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnVolume_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASpawnVolume_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_BatteryCollector,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnVolume_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASpawnVolume_Statics::ClassParams = {
	&ASpawnVolume::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ASpawnVolume_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnVolume_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnVolume_Statics::Class_MetaDataParams), Z_Construct_UClass_ASpawnVolume_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASpawnVolume()
{
	if (!Z_Registration_Info_UClass_ASpawnVolume.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASpawnVolume.OuterSingleton, Z_Construct_UClass_ASpawnVolume_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASpawnVolume.OuterSingleton;
}
template<> BATTERYCOLLECTOR_API UClass* StaticClass<ASpawnVolume>()
{
	return ASpawnVolume::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASpawnVolume);
ASpawnVolume::~ASpawnVolume() {}
// End Class ASpawnVolume

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_rodri_Documents_GitHub_BatteryCollector_BatteryCollector_Source_BatteryCollector_SpawnVolume_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASpawnVolume, ASpawnVolume::StaticClass, TEXT("ASpawnVolume"), &Z_Registration_Info_UClass_ASpawnVolume, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASpawnVolume), 1372610582U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_rodri_Documents_GitHub_BatteryCollector_BatteryCollector_Source_BatteryCollector_SpawnVolume_h_3832546777(TEXT("/Script/BatteryCollector"),
	Z_CompiledInDeferFile_FID_Users_rodri_Documents_GitHub_BatteryCollector_BatteryCollector_Source_BatteryCollector_SpawnVolume_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_rodri_Documents_GitHub_BatteryCollector_BatteryCollector_Source_BatteryCollector_SpawnVolume_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
