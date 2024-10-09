// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlockoutToolsPlugin/Public/BlockoutToolsSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlockoutToolsSettings() {}

// Begin Cross Module References
BLOCKOUTTOOLSPLUGIN_API UClass* Z_Construct_UClass_UBlockoutToolsSettings();
BLOCKOUTTOOLSPLUGIN_API UClass* Z_Construct_UClass_UBlockoutToolsSettings_NoRegister();
BLOCKOUTTOOLSPLUGIN_API UEnum* Z_Construct_UEnum_BlockoutToolsPlugin_EBlockoutMaterialType();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
UPackage* Z_Construct_UPackage__Script_BlockoutToolsPlugin();
// End Cross Module References

// Begin Class UBlockoutToolsSettings
void UBlockoutToolsSettings::StaticRegisterNativesUBlockoutToolsSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBlockoutToolsSettings);
UClass* Z_Construct_UClass_UBlockoutToolsSettings_NoRegister()
{
	return UBlockoutToolsSettings::StaticClass();
}
struct Z_Construct_UClass_UBlockoutToolsSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "BlockoutToolsSettings.h" },
		{ "ModuleRelativePath", "Public/BlockoutToolsSettings.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlockoutMaterialType_MetaData[] = {
		{ "Category", "Blockout Material" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "DisplayName", "Material Type" },
		{ "ModuleRelativePath", "Public/BlockoutToolsSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlockoutMaterialColor_MetaData[] = {
		{ "Category", "Blockout Material" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "DisplayName", "Color" },
		{ "ModuleRelativePath", "Public/BlockoutToolsSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bBlockoutMaterialUseGrid_MetaData[] = {
		{ "Category", "Blockout Material" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "DisplayName", "Use Grid" },
		{ "ModuleRelativePath", "Public/BlockoutToolsSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bBlockoutWorldAligned_MetaData[] = {
		{ "Category", "Blockout Material" },
		{ "Comment", "// Sets if triplanar material is local-aligned or world-aligned\n" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "DisplayName", "World Aligned" },
		{ "ModuleRelativePath", "Public/BlockoutToolsSettings.h" },
		{ "ToolTip", "Sets if triplanar material is local-aligned or world-aligned" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlockoutMaterialGridSize_MetaData[] = {
		{ "Category", "Blockout Material" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "DisplayName", "Grid Size" },
		{ "ModuleRelativePath", "Public/BlockoutToolsSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlockoutMaterialCheckerLuminance_MetaData[] = {
		{ "Category", "Blockout Material" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "DisplayName", "Checker Luminance" },
		{ "ModuleRelativePath", "Public/BlockoutToolsSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlockoutMaterialRoughness_MetaData[] = {
		{ "Category", "Blockout Material" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "DisplayName", "Roughness" },
		{ "ModuleRelativePath", "Public/BlockoutToolsSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bBlockoutMaterialUseTopColor_MetaData[] = {
		{ "Category", "Blockout Material" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "DisplayName", "Use Top Color" },
		{ "ModuleRelativePath", "Public/BlockoutToolsSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlockoutMaterialTopColor_MetaData[] = {
		{ "Category", "Blockout Material" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "DisplayName", "Top Color" },
		{ "ModuleRelativePath", "Public/BlockoutToolsSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_BlockoutMaterialType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BlockoutMaterialColor;
	static void NewProp_bBlockoutMaterialUseGrid_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBlockoutMaterialUseGrid;
	static void NewProp_bBlockoutWorldAligned_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBlockoutWorldAligned;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BlockoutMaterialGridSize;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BlockoutMaterialCheckerLuminance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BlockoutMaterialRoughness;
	static void NewProp_bBlockoutMaterialUseTopColor_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBlockoutMaterialUseTopColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BlockoutMaterialTopColor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlockoutToolsSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBlockoutToolsSettings_Statics::NewProp_BlockoutMaterialType = { "BlockoutMaterialType", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlockoutToolsSettings, BlockoutMaterialType), Z_Construct_UEnum_BlockoutToolsPlugin_EBlockoutMaterialType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlockoutMaterialType_MetaData), NewProp_BlockoutMaterialType_MetaData) }; // 1181851643
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBlockoutToolsSettings_Statics::NewProp_BlockoutMaterialColor = { "BlockoutMaterialColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlockoutToolsSettings, BlockoutMaterialColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlockoutMaterialColor_MetaData), NewProp_BlockoutMaterialColor_MetaData) };
void Z_Construct_UClass_UBlockoutToolsSettings_Statics::NewProp_bBlockoutMaterialUseGrid_SetBit(void* Obj)
{
	((UBlockoutToolsSettings*)Obj)->bBlockoutMaterialUseGrid = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlockoutToolsSettings_Statics::NewProp_bBlockoutMaterialUseGrid = { "bBlockoutMaterialUseGrid", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBlockoutToolsSettings), &Z_Construct_UClass_UBlockoutToolsSettings_Statics::NewProp_bBlockoutMaterialUseGrid_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bBlockoutMaterialUseGrid_MetaData), NewProp_bBlockoutMaterialUseGrid_MetaData) };
void Z_Construct_UClass_UBlockoutToolsSettings_Statics::NewProp_bBlockoutWorldAligned_SetBit(void* Obj)
{
	((UBlockoutToolsSettings*)Obj)->bBlockoutWorldAligned = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlockoutToolsSettings_Statics::NewProp_bBlockoutWorldAligned = { "bBlockoutWorldAligned", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBlockoutToolsSettings), &Z_Construct_UClass_UBlockoutToolsSettings_Statics::NewProp_bBlockoutWorldAligned_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bBlockoutWorldAligned_MetaData), NewProp_bBlockoutWorldAligned_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBlockoutToolsSettings_Statics::NewProp_BlockoutMaterialGridSize = { "BlockoutMaterialGridSize", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlockoutToolsSettings, BlockoutMaterialGridSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlockoutMaterialGridSize_MetaData), NewProp_BlockoutMaterialGridSize_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBlockoutToolsSettings_Statics::NewProp_BlockoutMaterialCheckerLuminance = { "BlockoutMaterialCheckerLuminance", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlockoutToolsSettings, BlockoutMaterialCheckerLuminance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlockoutMaterialCheckerLuminance_MetaData), NewProp_BlockoutMaterialCheckerLuminance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBlockoutToolsSettings_Statics::NewProp_BlockoutMaterialRoughness = { "BlockoutMaterialRoughness", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlockoutToolsSettings, BlockoutMaterialRoughness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlockoutMaterialRoughness_MetaData), NewProp_BlockoutMaterialRoughness_MetaData) };
void Z_Construct_UClass_UBlockoutToolsSettings_Statics::NewProp_bBlockoutMaterialUseTopColor_SetBit(void* Obj)
{
	((UBlockoutToolsSettings*)Obj)->bBlockoutMaterialUseTopColor = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlockoutToolsSettings_Statics::NewProp_bBlockoutMaterialUseTopColor = { "bBlockoutMaterialUseTopColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBlockoutToolsSettings), &Z_Construct_UClass_UBlockoutToolsSettings_Statics::NewProp_bBlockoutMaterialUseTopColor_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bBlockoutMaterialUseTopColor_MetaData), NewProp_bBlockoutMaterialUseTopColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBlockoutToolsSettings_Statics::NewProp_BlockoutMaterialTopColor = { "BlockoutMaterialTopColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlockoutToolsSettings, BlockoutMaterialTopColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlockoutMaterialTopColor_MetaData), NewProp_BlockoutMaterialTopColor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBlockoutToolsSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlockoutToolsSettings_Statics::NewProp_BlockoutMaterialType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlockoutToolsSettings_Statics::NewProp_BlockoutMaterialColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlockoutToolsSettings_Statics::NewProp_bBlockoutMaterialUseGrid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlockoutToolsSettings_Statics::NewProp_bBlockoutWorldAligned,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlockoutToolsSettings_Statics::NewProp_BlockoutMaterialGridSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlockoutToolsSettings_Statics::NewProp_BlockoutMaterialCheckerLuminance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlockoutToolsSettings_Statics::NewProp_BlockoutMaterialRoughness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlockoutToolsSettings_Statics::NewProp_bBlockoutMaterialUseTopColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlockoutToolsSettings_Statics::NewProp_BlockoutMaterialTopColor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBlockoutToolsSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBlockoutToolsSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_BlockoutToolsPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBlockoutToolsSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBlockoutToolsSettings_Statics::ClassParams = {
	&UBlockoutToolsSettings::StaticClass,
	"BlockoutTools",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBlockoutToolsSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBlockoutToolsSettings_Statics::PropPointers),
	0,
	0x001000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBlockoutToolsSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UBlockoutToolsSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBlockoutToolsSettings()
{
	if (!Z_Registration_Info_UClass_UBlockoutToolsSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBlockoutToolsSettings.OuterSingleton, Z_Construct_UClass_UBlockoutToolsSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBlockoutToolsSettings.OuterSingleton;
}
template<> BLOCKOUTTOOLSPLUGIN_API UClass* StaticClass<UBlockoutToolsSettings>()
{
	return UBlockoutToolsSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBlockoutToolsSettings);
UBlockoutToolsSettings::~UBlockoutToolsSettings() {}
// End Class UBlockoutToolsSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BlockoutToolsPlugin_Source_BlockoutToolsPlugin_Public_BlockoutToolsSettings_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBlockoutToolsSettings, UBlockoutToolsSettings::StaticClass, TEXT("UBlockoutToolsSettings"), &Z_Registration_Info_UClass_UBlockoutToolsSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBlockoutToolsSettings), 106312758U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BlockoutToolsPlugin_Source_BlockoutToolsPlugin_Public_BlockoutToolsSettings_h_1035693881(TEXT("/Script/BlockoutToolsPlugin"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BlockoutToolsPlugin_Source_BlockoutToolsPlugin_Public_BlockoutToolsSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BlockoutToolsPlugin_Source_BlockoutToolsPlugin_Public_BlockoutToolsSettings_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
