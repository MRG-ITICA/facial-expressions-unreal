// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OculusXRRetargetingEditor/Public/OculusXRFacialExpressionMapFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOculusXRFacialExpressionMapFactory() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UScriptStruct();
	OCULUSXRRETARGETINGEDITOR_API UClass* Z_Construct_UClass_UOculusXRFacialExpressionMapFactory();
	OCULUSXRRETARGETINGEDITOR_API UClass* Z_Construct_UClass_UOculusXRFacialExpressionMapFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_OculusXRRetargetingEditor();
// End Cross Module References
	void UOculusXRFacialExpressionMapFactory::StaticRegisterNativesUOculusXRFacialExpressionMapFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOculusXRFacialExpressionMapFactory);
	UClass* Z_Construct_UClass_UOculusXRFacialExpressionMapFactory_NoRegister()
	{
		return UOculusXRFacialExpressionMapFactory::StaticClass();
	}
	struct Z_Construct_UClass_UOculusXRFacialExpressionMapFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Struct_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Struct;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOculusXRFacialExpressionMapFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_OculusXRRetargetingEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRFacialExpressionMapFactory_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusXRFacialExpressionMapFactory_Statics::Class_MetaDataParams[] = {
		{ "Category", "OculusXR" },
		{ "IncludePath", "OculusXRFacialExpressionMapFactory.h" },
		{ "ModuleRelativePath", "Public/OculusXRFacialExpressionMapFactory.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusXRFacialExpressionMapFactory_Statics::NewProp_Struct_MetaData[] = {
		{ "ModuleRelativePath", "Public/OculusXRFacialExpressionMapFactory.h" },
		{ "NativeConstTemplateArg", "" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UOculusXRFacialExpressionMapFactory_Statics::NewProp_Struct = { "Struct", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRFacialExpressionMapFactory, Struct), Z_Construct_UClass_UScriptStruct, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRFacialExpressionMapFactory_Statics::NewProp_Struct_MetaData), Z_Construct_UClass_UOculusXRFacialExpressionMapFactory_Statics::NewProp_Struct_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOculusXRFacialExpressionMapFactory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRFacialExpressionMapFactory_Statics::NewProp_Struct,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOculusXRFacialExpressionMapFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOculusXRFacialExpressionMapFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOculusXRFacialExpressionMapFactory_Statics::ClassParams = {
		&UOculusXRFacialExpressionMapFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOculusXRFacialExpressionMapFactory_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRFacialExpressionMapFactory_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRFacialExpressionMapFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UOculusXRFacialExpressionMapFactory_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRFacialExpressionMapFactory_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UOculusXRFacialExpressionMapFactory()
	{
		if (!Z_Registration_Info_UClass_UOculusXRFacialExpressionMapFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOculusXRFacialExpressionMapFactory.OuterSingleton, Z_Construct_UClass_UOculusXRFacialExpressionMapFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOculusXRFacialExpressionMapFactory.OuterSingleton;
	}
	template<> OCULUSXRRETARGETINGEDITOR_API UClass* StaticClass<UOculusXRFacialExpressionMapFactory>()
	{
		return UOculusXRFacialExpressionMapFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOculusXRFacialExpressionMapFactory);
	UOculusXRFacialExpressionMapFactory::~UOculusXRFacialExpressionMapFactory() {}
	struct Z_CompiledInDeferFile_FID_Users_KalliKoulloufidou_UnrealProjects_Unreal_Movement_Plugins_OculusXRRetargeting_Source_OculusXRRetargetingEditor_Public_OculusXRFacialExpressionMapFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_KalliKoulloufidou_UnrealProjects_Unreal_Movement_Plugins_OculusXRRetargeting_Source_OculusXRRetargetingEditor_Public_OculusXRFacialExpressionMapFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOculusXRFacialExpressionMapFactory, UOculusXRFacialExpressionMapFactory::StaticClass, TEXT("UOculusXRFacialExpressionMapFactory"), &Z_Registration_Info_UClass_UOculusXRFacialExpressionMapFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOculusXRFacialExpressionMapFactory), 2274646621U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_KalliKoulloufidou_UnrealProjects_Unreal_Movement_Plugins_OculusXRRetargeting_Source_OculusXRRetargetingEditor_Public_OculusXRFacialExpressionMapFactory_h_2533223501(TEXT("/Script/OculusXRRetargetingEditor"),
		Z_CompiledInDeferFile_FID_Users_KalliKoulloufidou_UnrealProjects_Unreal_Movement_Plugins_OculusXRRetargeting_Source_OculusXRRetargetingEditor_Public_OculusXRFacialExpressionMapFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_KalliKoulloufidou_UnrealProjects_Unreal_Movement_Plugins_OculusXRRetargeting_Source_OculusXRRetargetingEditor_Public_OculusXRFacialExpressionMapFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
