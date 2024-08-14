// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OculusXRRetargetingEditor/Public/OculusXRRetargetIKRetargeterEditor.h"
#include "OculusXRRetargeting/Public/OculusXRRetargeterAnimNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOculusXRRetargetIKRetargeterEditor() {}
// Cross Module References
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_Base();
	OCULUSXRRETARGETING_API UScriptStruct* Z_Construct_UScriptStruct_FOculusXRRetargeterAnimNode();
	OCULUSXRRETARGETINGEDITOR_API UClass* Z_Construct_UClass_UOculusXRRetargetIKRetargeterEditor();
	OCULUSXRRETARGETINGEDITOR_API UClass* Z_Construct_UClass_UOculusXRRetargetIKRetargeterEditor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_OculusXRRetargetingEditor();
// End Cross Module References
	void UOculusXRRetargetIKRetargeterEditor::StaticRegisterNativesUOculusXRRetargetIKRetargeterEditor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOculusXRRetargetIKRetargeterEditor);
	UClass* Z_Construct_UClass_UOculusXRRetargetIKRetargeterEditor_NoRegister()
	{
		return UOculusXRRetargetIKRetargeterEditor::StaticClass();
	}
	struct Z_Construct_UClass_UOculusXRRetargetIKRetargeterEditor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Node;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOculusXRRetargetIKRetargeterEditor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimGraphNode_Base,
		(UObject* (*)())Z_Construct_UPackage__Script_OculusXRRetargetingEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRRetargetIKRetargeterEditor_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusXRRetargetIKRetargeterEditor_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Editor node for IKRig\n" },
#endif
		{ "IncludePath", "OculusXRRetargetIKRetargeterEditor.h" },
		{ "ModuleRelativePath", "Public/OculusXRRetargetIKRetargeterEditor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Editor node for IKRig" },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusXRRetargetIKRetargeterEditor_Statics::NewProp_Node_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/OculusXRRetargetIKRetargeterEditor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOculusXRRetargetIKRetargeterEditor_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0040008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRRetargetIKRetargeterEditor, Node), Z_Construct_UScriptStruct_FOculusXRRetargeterAnimNode, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRRetargetIKRetargeterEditor_Statics::NewProp_Node_MetaData), Z_Construct_UClass_UOculusXRRetargetIKRetargeterEditor_Statics::NewProp_Node_MetaData) }; // 2998401390
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOculusXRRetargetIKRetargeterEditor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRRetargetIKRetargeterEditor_Statics::NewProp_Node,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOculusXRRetargetIKRetargeterEditor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOculusXRRetargetIKRetargeterEditor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOculusXRRetargetIKRetargeterEditor_Statics::ClassParams = {
		&UOculusXRRetargetIKRetargeterEditor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOculusXRRetargetIKRetargeterEditor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRRetargetIKRetargeterEditor_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRRetargetIKRetargeterEditor_Statics::Class_MetaDataParams), Z_Construct_UClass_UOculusXRRetargetIKRetargeterEditor_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRRetargetIKRetargeterEditor_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UOculusXRRetargetIKRetargeterEditor()
	{
		if (!Z_Registration_Info_UClass_UOculusXRRetargetIKRetargeterEditor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOculusXRRetargetIKRetargeterEditor.OuterSingleton, Z_Construct_UClass_UOculusXRRetargetIKRetargeterEditor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOculusXRRetargetIKRetargeterEditor.OuterSingleton;
	}
	template<> OCULUSXRRETARGETINGEDITOR_API UClass* StaticClass<UOculusXRRetargetIKRetargeterEditor>()
	{
		return UOculusXRRetargetIKRetargeterEditor::StaticClass();
	}
	UOculusXRRetargetIKRetargeterEditor::UOculusXRRetargetIKRetargeterEditor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOculusXRRetargetIKRetargeterEditor);
	UOculusXRRetargetIKRetargeterEditor::~UOculusXRRetargetIKRetargeterEditor() {}
	struct Z_CompiledInDeferFile_FID_Users_KalliKoulloufidou_UnrealProjects_Unreal_Movement_Plugins_OculusXRRetargeting_Source_OculusXRRetargetingEditor_Public_OculusXRRetargetIKRetargeterEditor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_KalliKoulloufidou_UnrealProjects_Unreal_Movement_Plugins_OculusXRRetargeting_Source_OculusXRRetargetingEditor_Public_OculusXRRetargetIKRetargeterEditor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOculusXRRetargetIKRetargeterEditor, UOculusXRRetargetIKRetargeterEditor::StaticClass, TEXT("UOculusXRRetargetIKRetargeterEditor"), &Z_Registration_Info_UClass_UOculusXRRetargetIKRetargeterEditor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOculusXRRetargetIKRetargeterEditor), 2800957697U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_KalliKoulloufidou_UnrealProjects_Unreal_Movement_Plugins_OculusXRRetargeting_Source_OculusXRRetargetingEditor_Public_OculusXRRetargetIKRetargeterEditor_h_917541944(TEXT("/Script/OculusXRRetargetingEditor"),
		Z_CompiledInDeferFile_FID_Users_KalliKoulloufidou_UnrealProjects_Unreal_Movement_Plugins_OculusXRRetargeting_Source_OculusXRRetargetingEditor_Public_OculusXRRetargetIKRetargeterEditor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_KalliKoulloufidou_UnrealProjects_Unreal_Movement_Plugins_OculusXRRetargeting_Source_OculusXRRetargetingEditor_Public_OculusXRRetargetIKRetargeterEditor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
