// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BatteryCollector/BatteryPickup.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBatteryPickup() {}

// Begin Cross Module References
BATTERYCOLLECTOR_API UClass* Z_Construct_UClass_ABatteryPickup();
BATTERYCOLLECTOR_API UClass* Z_Construct_UClass_ABatteryPickup_NoRegister();
BATTERYCOLLECTOR_API UClass* Z_Construct_UClass_APickup();
UPackage* Z_Construct_UPackage__Script_BatteryCollector();
// End Cross Module References

// Begin Class ABatteryPickup
void ABatteryPickup::StaticRegisterNativesABatteryPickup()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABatteryPickup);
UClass* Z_Construct_UClass_ABatteryPickup_NoRegister()
{
	return ABatteryPickup::StaticClass();
}
struct Z_Construct_UClass_ABatteryPickup_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "BatteryPickup.h" },
		{ "ModuleRelativePath", "BatteryPickup.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BatteryPower_MetaData[] = {
		{ "BlueprintProtected", "true" },
		{ "Category", "Power" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Set the amount of power the battery gives to the character\n" },
#endif
		{ "ModuleRelativePath", "BatteryPickup.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set the amount of power the battery gives to the character" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BatteryPower;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABatteryPickup>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABatteryPickup_Statics::NewProp_BatteryPower = { "BatteryPower", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABatteryPickup, BatteryPower), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BatteryPower_MetaData), NewProp_BatteryPower_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABatteryPickup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABatteryPickup_Statics::NewProp_BatteryPower,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABatteryPickup_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABatteryPickup_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APickup,
	(UObject* (*)())Z_Construct_UPackage__Script_BatteryCollector,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABatteryPickup_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABatteryPickup_Statics::ClassParams = {
	&ABatteryPickup::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ABatteryPickup_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ABatteryPickup_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABatteryPickup_Statics::Class_MetaDataParams), Z_Construct_UClass_ABatteryPickup_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABatteryPickup()
{
	if (!Z_Registration_Info_UClass_ABatteryPickup.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABatteryPickup.OuterSingleton, Z_Construct_UClass_ABatteryPickup_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABatteryPickup.OuterSingleton;
}
template<> BATTERYCOLLECTOR_API UClass* StaticClass<ABatteryPickup>()
{
	return ABatteryPickup::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABatteryPickup);
ABatteryPickup::~ABatteryPickup() {}
// End Class ABatteryPickup

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_rodri_Documents_GitHub_BatteryCollector_BatteryCollector_Source_BatteryCollector_BatteryPickup_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABatteryPickup, ABatteryPickup::StaticClass, TEXT("ABatteryPickup"), &Z_Registration_Info_UClass_ABatteryPickup, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABatteryPickup), 4139715916U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_rodri_Documents_GitHub_BatteryCollector_BatteryCollector_Source_BatteryCollector_BatteryPickup_h_4122758533(TEXT("/Script/BatteryCollector"),
	Z_CompiledInDeferFile_FID_Users_rodri_Documents_GitHub_BatteryCollector_BatteryCollector_Source_BatteryCollector_BatteryPickup_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_rodri_Documents_GitHub_BatteryCollector_BatteryCollector_Source_BatteryCollector_BatteryPickup_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
