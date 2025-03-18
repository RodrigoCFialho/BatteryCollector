// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BatteryCollector/BatteryCollectorGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBatteryCollectorGameMode() {}

// Begin Cross Module References
BATTERYCOLLECTOR_API UClass* Z_Construct_UClass_ABatteryCollectorGameMode();
BATTERYCOLLECTOR_API UClass* Z_Construct_UClass_ABatteryCollectorGameMode_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_BatteryCollector();
// End Cross Module References

// Begin Class ABatteryCollectorGameMode
void ABatteryCollectorGameMode::StaticRegisterNativesABatteryCollectorGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABatteryCollectorGameMode);
UClass* Z_Construct_UClass_ABatteryCollectorGameMode_NoRegister()
{
	return ABatteryCollectorGameMode::StaticClass();
}
struct Z_Construct_UClass_ABatteryCollectorGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "BatteryCollectorGameMode.h" },
		{ "ModuleRelativePath", "BatteryCollectorGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DecayRate_MetaData[] = {
		{ "Blueprintprotected", "TRUE" },
		{ "Category", "Power" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The rate at which the character looses power\n" },
#endif
		{ "ModuleRelativePath", "BatteryCollectorGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The rate at which the character looses power" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DecayRate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABatteryCollectorGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABatteryCollectorGameMode_Statics::NewProp_DecayRate = { "DecayRate", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABatteryCollectorGameMode, DecayRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DecayRate_MetaData), NewProp_DecayRate_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABatteryCollectorGameMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABatteryCollectorGameMode_Statics::NewProp_DecayRate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABatteryCollectorGameMode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABatteryCollectorGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_BatteryCollector,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABatteryCollectorGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABatteryCollectorGameMode_Statics::ClassParams = {
	&ABatteryCollectorGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ABatteryCollectorGameMode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ABatteryCollectorGameMode_Statics::PropPointers),
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABatteryCollectorGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ABatteryCollectorGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABatteryCollectorGameMode()
{
	if (!Z_Registration_Info_UClass_ABatteryCollectorGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABatteryCollectorGameMode.OuterSingleton, Z_Construct_UClass_ABatteryCollectorGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABatteryCollectorGameMode.OuterSingleton;
}
template<> BATTERYCOLLECTOR_API UClass* StaticClass<ABatteryCollectorGameMode>()
{
	return ABatteryCollectorGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABatteryCollectorGameMode);
ABatteryCollectorGameMode::~ABatteryCollectorGameMode() {}
// End Class ABatteryCollectorGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_rodri_Documents_GitHub_BatteryCollector_BatteryCollector_Source_BatteryCollector_BatteryCollectorGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABatteryCollectorGameMode, ABatteryCollectorGameMode::StaticClass, TEXT("ABatteryCollectorGameMode"), &Z_Registration_Info_UClass_ABatteryCollectorGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABatteryCollectorGameMode), 3015845899U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_rodri_Documents_GitHub_BatteryCollector_BatteryCollector_Source_BatteryCollector_BatteryCollectorGameMode_h_3985820596(TEXT("/Script/BatteryCollector"),
	Z_CompiledInDeferFile_FID_Users_rodri_Documents_GitHub_BatteryCollector_BatteryCollector_Source_BatteryCollector_BatteryCollectorGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_rodri_Documents_GitHub_BatteryCollector_BatteryCollector_Source_BatteryCollector_BatteryCollectorGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
