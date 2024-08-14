// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OculusXRRetargeting/Public/OculusXRFacialExpressionToAnimationCurve.h"
#include "../../Source/Runtime/Engine/Classes/Animation/AnimNodeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOculusXRFacialExpressionToAnimationCurve() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Base();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseLink();
	OCULUSXRMOVEMENT_API UClass* Z_Construct_UClass_UOculusXRFaceTrackingComponent_NoRegister();
	OCULUSXRRETARGETING_API UClass* Z_Construct_UClass_UOculusXRFacialExpressionMap_NoRegister();
	OCULUSXRRETARGETING_API UScriptStruct* Z_Construct_UScriptStruct_FOculusXRFacialExpressionToAnimationCurve();
	UPackage* Z_Construct_UPackage__Script_OculusXRRetargeting();
// End Cross Module References

static_assert(std::is_polymorphic<FOculusXRFacialExpressionToAnimationCurve>() == std::is_polymorphic<FAnimNode_Base>(), "USTRUCT FOculusXRFacialExpressionToAnimationCurve cannot be polymorphic unless super FAnimNode_Base is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OculusXRFacialExpressionToAnimationCurve;
class UScriptStruct* FOculusXRFacialExpressionToAnimationCurve::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OculusXRFacialExpressionToAnimationCurve.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OculusXRFacialExpressionToAnimationCurve.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOculusXRFacialExpressionToAnimationCurve, (UObject*)Z_Construct_UPackage__Script_OculusXRRetargeting(), TEXT("OculusXRFacialExpressionToAnimationCurve"));
	}
	return Z_Registration_Info_UScriptStruct_OculusXRFacialExpressionToAnimationCurve.OuterSingleton;
}
template<> OCULUSXRRETARGETING_API UScriptStruct* StaticStruct<FOculusXRFacialExpressionToAnimationCurve>()
{
	return FOculusXRFacialExpressionToAnimationCurve::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOculusXRFacialExpressionToAnimationCurve_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FaceTrackingComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FaceTrackingComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OculusExpressionMapping_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OculusExpressionMapping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BasePose_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BasePose;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusXRFacialExpressionToAnimationCurve_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OculusXRFacialExpressionToAnimationCurve.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOculusXRFacialExpressionToAnimationCurve_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOculusXRFacialExpressionToAnimationCurve>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusXRFacialExpressionToAnimationCurve_Statics::NewProp_FaceTrackingComponent_MetaData[] = {
		{ "Category", "Oculus" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/OculusXRFacialExpressionToAnimationCurve.h" },
		{ "PinShownByDefault", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FOculusXRFacialExpressionToAnimationCurve_Statics::NewProp_FaceTrackingComponent = { "FaceTrackingComponent", nullptr, (EPropertyFlags)0x001000000008200c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRFacialExpressionToAnimationCurve, FaceTrackingComponent), Z_Construct_UClass_UOculusXRFaceTrackingComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRFacialExpressionToAnimationCurve_Statics::NewProp_FaceTrackingComponent_MetaData), Z_Construct_UScriptStruct_FOculusXRFacialExpressionToAnimationCurve_Statics::NewProp_FaceTrackingComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusXRFacialExpressionToAnimationCurve_Statics::NewProp_OculusExpressionMapping_MetaData[] = {
		{ "Category", "Oculus" },
		{ "ModuleRelativePath", "Public/OculusXRFacialExpressionToAnimationCurve.h" },
		{ "PinShownByDefault", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FOculusXRFacialExpressionToAnimationCurve_Statics::NewProp_OculusExpressionMapping = { "OculusExpressionMapping", nullptr, (EPropertyFlags)0x0010000000002004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRFacialExpressionToAnimationCurve, OculusExpressionMapping), Z_Construct_UClass_UOculusXRFacialExpressionMap_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRFacialExpressionToAnimationCurve_Statics::NewProp_OculusExpressionMapping_MetaData), Z_Construct_UScriptStruct_FOculusXRFacialExpressionToAnimationCurve_Statics::NewProp_OculusExpressionMapping_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusXRFacialExpressionToAnimationCurve_Statics::NewProp_BasePose_MetaData[] = {
		{ "Category", "Links" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Base Pose*/" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRFacialExpressionToAnimationCurve.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Base Pose" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOculusXRFacialExpressionToAnimationCurve_Statics::NewProp_BasePose = { "BasePose", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRFacialExpressionToAnimationCurve, BasePose), Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRFacialExpressionToAnimationCurve_Statics::NewProp_BasePose_MetaData), Z_Construct_UScriptStruct_FOculusXRFacialExpressionToAnimationCurve_Statics::NewProp_BasePose_MetaData) }; // 1465313103
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOculusXRFacialExpressionToAnimationCurve_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXRFacialExpressionToAnimationCurve_Statics::NewProp_FaceTrackingComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXRFacialExpressionToAnimationCurve_Statics::NewProp_OculusExpressionMapping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXRFacialExpressionToAnimationCurve_Statics::NewProp_BasePose,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOculusXRFacialExpressionToAnimationCurve_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OculusXRRetargeting,
		Z_Construct_UScriptStruct_FAnimNode_Base,
		&NewStructOps,
		"OculusXRFacialExpressionToAnimationCurve",
		Z_Construct_UScriptStruct_FOculusXRFacialExpressionToAnimationCurve_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRFacialExpressionToAnimationCurve_Statics::PropPointers),
		sizeof(FOculusXRFacialExpressionToAnimationCurve),
		alignof(FOculusXRFacialExpressionToAnimationCurve),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRFacialExpressionToAnimationCurve_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOculusXRFacialExpressionToAnimationCurve_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRFacialExpressionToAnimationCurve_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FOculusXRFacialExpressionToAnimationCurve()
	{
		if (!Z_Registration_Info_UScriptStruct_OculusXRFacialExpressionToAnimationCurve.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OculusXRFacialExpressionToAnimationCurve.InnerSingleton, Z_Construct_UScriptStruct_FOculusXRFacialExpressionToAnimationCurve_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OculusXRFacialExpressionToAnimationCurve.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Users_KalliKoulloufidou_UnrealProjects_Unreal_Movement_Plugins_OculusXRRetargeting_Source_OculusXRRetargeting_Public_OculusXRFacialExpressionToAnimationCurve_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_KalliKoulloufidou_UnrealProjects_Unreal_Movement_Plugins_OculusXRRetargeting_Source_OculusXRRetargeting_Public_OculusXRFacialExpressionToAnimationCurve_h_Statics::ScriptStructInfo[] = {
		{ FOculusXRFacialExpressionToAnimationCurve::StaticStruct, Z_Construct_UScriptStruct_FOculusXRFacialExpressionToAnimationCurve_Statics::NewStructOps, TEXT("OculusXRFacialExpressionToAnimationCurve"), &Z_Registration_Info_UScriptStruct_OculusXRFacialExpressionToAnimationCurve, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOculusXRFacialExpressionToAnimationCurve), 3495393131U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_KalliKoulloufidou_UnrealProjects_Unreal_Movement_Plugins_OculusXRRetargeting_Source_OculusXRRetargeting_Public_OculusXRFacialExpressionToAnimationCurve_h_230164586(TEXT("/Script/OculusXRRetargeting"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_KalliKoulloufidou_UnrealProjects_Unreal_Movement_Plugins_OculusXRRetargeting_Source_OculusXRRetargeting_Public_OculusXRFacialExpressionToAnimationCurve_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_KalliKoulloufidou_UnrealProjects_Unreal_Movement_Plugins_OculusXRRetargeting_Source_OculusXRRetargeting_Public_OculusXRFacialExpressionToAnimationCurve_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
