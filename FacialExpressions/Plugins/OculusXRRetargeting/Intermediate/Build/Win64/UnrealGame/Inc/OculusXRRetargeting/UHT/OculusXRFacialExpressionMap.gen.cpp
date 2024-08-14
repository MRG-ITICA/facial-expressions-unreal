// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OculusXRRetargeting/Public/OculusXRFacialExpressionMap.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOculusXRFacialExpressionMap() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UDataTable();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	OCULUSXRMOVEMENT_API UEnum* Z_Construct_UEnum_OculusXRMovement_EOculusXRFaceExpression();
	OCULUSXRRETARGETING_API UClass* Z_Construct_UClass_UOculusXRFacialExpressionMap();
	OCULUSXRRETARGETING_API UClass* Z_Construct_UClass_UOculusXRFacialExpressionMap_NoRegister();
	OCULUSXRRETARGETING_API UScriptStruct* Z_Construct_UScriptStruct_FOculusXRFacialExpressionMapRow();
	UPackage* Z_Construct_UPackage__Script_OculusXRRetargeting();
// End Cross Module References

static_assert(std::is_polymorphic<FOculusXRFacialExpressionMapRow>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FOculusXRFacialExpressionMapRow cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OculusXRFacialExpressionMapRow;
class UScriptStruct* FOculusXRFacialExpressionMapRow::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OculusXRFacialExpressionMapRow.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OculusXRFacialExpressionMapRow.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOculusXRFacialExpressionMapRow, (UObject*)Z_Construct_UPackage__Script_OculusXRRetargeting(), TEXT("OculusXRFacialExpressionMapRow"));
	}
	return Z_Registration_Info_UScriptStruct_OculusXRFacialExpressionMapRow.OuterSingleton;
}
template<> OCULUSXRRETARGETING_API UScriptStruct* StaticStruct<FOculusXRFacialExpressionMapRow>()
{
	return FOculusXRFacialExpressionMapRow::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOculusXRFacialExpressionMapRow_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_OculusXRFaceExpression_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OculusXRFaceExpression_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_OculusXRFaceExpression;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurveName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_CurveName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusXRFacialExpressionMapRow_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OculusXRFacialExpressionMap.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOculusXRFacialExpressionMapRow_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOculusXRFacialExpressionMapRow>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FOculusXRFacialExpressionMapRow_Statics::NewProp_OculusXRFaceExpression_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusXRFacialExpressionMapRow_Statics::NewProp_OculusXRFaceExpression_MetaData[] = {
		{ "Category", "OculusXRFacialExpressionMapRow" },
		{ "ModuleRelativePath", "Public/OculusXRFacialExpressionMap.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FOculusXRFacialExpressionMapRow_Statics::NewProp_OculusXRFaceExpression = { "OculusXRFaceExpression", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRFacialExpressionMapRow, OculusXRFaceExpression), Z_Construct_UEnum_OculusXRMovement_EOculusXRFaceExpression, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRFacialExpressionMapRow_Statics::NewProp_OculusXRFaceExpression_MetaData), Z_Construct_UScriptStruct_FOculusXRFacialExpressionMapRow_Statics::NewProp_OculusXRFaceExpression_MetaData) }; // 3931067710
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusXRFacialExpressionMapRow_Statics::NewProp_CurveName_MetaData[] = {
		{ "Category", "OculusXRFacialExpressionMapRow" },
		{ "ModuleRelativePath", "Public/OculusXRFacialExpressionMap.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FOculusXRFacialExpressionMapRow_Statics::NewProp_CurveName = { "CurveName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRFacialExpressionMapRow, CurveName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRFacialExpressionMapRow_Statics::NewProp_CurveName_MetaData), Z_Construct_UScriptStruct_FOculusXRFacialExpressionMapRow_Statics::NewProp_CurveName_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOculusXRFacialExpressionMapRow_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXRFacialExpressionMapRow_Statics::NewProp_OculusXRFaceExpression_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXRFacialExpressionMapRow_Statics::NewProp_OculusXRFaceExpression,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXRFacialExpressionMapRow_Statics::NewProp_CurveName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOculusXRFacialExpressionMapRow_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OculusXRRetargeting,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"OculusXRFacialExpressionMapRow",
		Z_Construct_UScriptStruct_FOculusXRFacialExpressionMapRow_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRFacialExpressionMapRow_Statics::PropPointers),
		sizeof(FOculusXRFacialExpressionMapRow),
		alignof(FOculusXRFacialExpressionMapRow),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRFacialExpressionMapRow_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOculusXRFacialExpressionMapRow_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRFacialExpressionMapRow_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FOculusXRFacialExpressionMapRow()
	{
		if (!Z_Registration_Info_UScriptStruct_OculusXRFacialExpressionMapRow.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OculusXRFacialExpressionMapRow.InnerSingleton, Z_Construct_UScriptStruct_FOculusXRFacialExpressionMapRow_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OculusXRFacialExpressionMapRow.InnerSingleton;
	}
	void UOculusXRFacialExpressionMap::StaticRegisterNativesUOculusXRFacialExpressionMap()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOculusXRFacialExpressionMap);
	UClass* Z_Construct_UClass_UOculusXRFacialExpressionMap_NoRegister()
	{
		return UOculusXRFacialExpressionMap::StaticClass();
	}
	struct Z_Construct_UClass_UOculusXRFacialExpressionMap_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOculusXRFacialExpressionMap_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataTable,
		(UObject* (*)())Z_Construct_UPackage__Script_OculusXRRetargeting,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRFacialExpressionMap_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusXRFacialExpressionMap_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "DataTable,ImportOptions" },
		{ "BlueprintType", "true" },
		{ "Category", "OculusXR" },
		{ "IncludePath", "OculusXRFacialExpressionMap.h" },
		{ "ModuleRelativePath", "Public/OculusXRFacialExpressionMap.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOculusXRFacialExpressionMap_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOculusXRFacialExpressionMap>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOculusXRFacialExpressionMap_Statics::ClassParams = {
		&UOculusXRFacialExpressionMap::StaticClass,
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
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRFacialExpressionMap_Statics::Class_MetaDataParams), Z_Construct_UClass_UOculusXRFacialExpressionMap_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UOculusXRFacialExpressionMap()
	{
		if (!Z_Registration_Info_UClass_UOculusXRFacialExpressionMap.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOculusXRFacialExpressionMap.OuterSingleton, Z_Construct_UClass_UOculusXRFacialExpressionMap_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOculusXRFacialExpressionMap.OuterSingleton;
	}
	template<> OCULUSXRRETARGETING_API UClass* StaticClass<UOculusXRFacialExpressionMap>()
	{
		return UOculusXRFacialExpressionMap::StaticClass();
	}
	UOculusXRFacialExpressionMap::UOculusXRFacialExpressionMap(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOculusXRFacialExpressionMap);
	UOculusXRFacialExpressionMap::~UOculusXRFacialExpressionMap() {}
	struct Z_CompiledInDeferFile_FID_Users_KalliKoulloufidou_UnrealProjects_Unreal_Movement_Plugins_OculusXRRetargeting_Source_OculusXRRetargeting_Public_OculusXRFacialExpressionMap_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_KalliKoulloufidou_UnrealProjects_Unreal_Movement_Plugins_OculusXRRetargeting_Source_OculusXRRetargeting_Public_OculusXRFacialExpressionMap_h_Statics::ScriptStructInfo[] = {
		{ FOculusXRFacialExpressionMapRow::StaticStruct, Z_Construct_UScriptStruct_FOculusXRFacialExpressionMapRow_Statics::NewStructOps, TEXT("OculusXRFacialExpressionMapRow"), &Z_Registration_Info_UScriptStruct_OculusXRFacialExpressionMapRow, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOculusXRFacialExpressionMapRow), 1053042268U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_KalliKoulloufidou_UnrealProjects_Unreal_Movement_Plugins_OculusXRRetargeting_Source_OculusXRRetargeting_Public_OculusXRFacialExpressionMap_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOculusXRFacialExpressionMap, UOculusXRFacialExpressionMap::StaticClass, TEXT("UOculusXRFacialExpressionMap"), &Z_Registration_Info_UClass_UOculusXRFacialExpressionMap, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOculusXRFacialExpressionMap), 989712301U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_KalliKoulloufidou_UnrealProjects_Unreal_Movement_Plugins_OculusXRRetargeting_Source_OculusXRRetargeting_Public_OculusXRFacialExpressionMap_h_1255019691(TEXT("/Script/OculusXRRetargeting"),
		Z_CompiledInDeferFile_FID_Users_KalliKoulloufidou_UnrealProjects_Unreal_Movement_Plugins_OculusXRRetargeting_Source_OculusXRRetargeting_Public_OculusXRFacialExpressionMap_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_KalliKoulloufidou_UnrealProjects_Unreal_Movement_Plugins_OculusXRRetargeting_Source_OculusXRRetargeting_Public_OculusXRFacialExpressionMap_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Users_KalliKoulloufidou_UnrealProjects_Unreal_Movement_Plugins_OculusXRRetargeting_Source_OculusXRRetargeting_Public_OculusXRFacialExpressionMap_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_KalliKoulloufidou_UnrealProjects_Unreal_Movement_Plugins_OculusXRRetargeting_Source_OculusXRRetargeting_Public_OculusXRFacialExpressionMap_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
