// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OculusXRRetargeting/Public/OculusXRRetargeterAnimNode.h"
#include "Retargeter/IKRetargetProfile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOculusXRRetargeterAnimNode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USkinnedMeshComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Base();
	IKRIG_API UClass* Z_Construct_UClass_UIKRetargeter_NoRegister();
	IKRIG_API UClass* Z_Construct_UClass_UIKRetargetProcessor_NoRegister();
	IKRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRetargetProfile();
	OCULUSXRRETARGETING_API UScriptStruct* Z_Construct_UScriptStruct_FOculusXRRetargeterAnimNode();
	UPackage* Z_Construct_UPackage__Script_OculusXRRetargeting();
// End Cross Module References

static_assert(std::is_polymorphic<FOculusXRRetargeterAnimNode>() == std::is_polymorphic<FAnimNode_Base>(), "USTRUCT FOculusXRRetargeterAnimNode cannot be polymorphic unless super FAnimNode_Base is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OculusXRRetargeterAnimNode;
class UScriptStruct* FOculusXRRetargeterAnimNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OculusXRRetargeterAnimNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OculusXRRetargeterAnimNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOculusXRRetargeterAnimNode, (UObject*)Z_Construct_UPackage__Script_OculusXRRetargeting(), TEXT("OculusXRRetargeterAnimNode"));
	}
	return Z_Registration_Info_UScriptStruct_OculusXRRetargeterAnimNode.OuterSingleton;
}
template<> OCULUSXRRETARGETING_API UScriptStruct* StaticStruct<FOculusXRRetargeterAnimNode>()
{
	return FOculusXRRetargeterAnimNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOculusXRRetargeterAnimNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_SourceMeshComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseAttachedParent_MetaData[];
#endif
		static void NewProp_bUseAttachedParent_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseAttachedParent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IKRetargeterAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_IKRetargeterAsset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomRetargetProfile_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CustomRetargetProfile;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSuppressWarnings_MetaData[];
#endif
		static void NewProp_bSuppressWarnings_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuppressWarnings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Processor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Processor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusXRRetargeterAnimNode_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OculusXRRetargeterAnimNode.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOculusXRRetargeterAnimNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOculusXRRetargeterAnimNode>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusXRRetargeterAnimNode_Statics::NewProp_SourceMeshComponent_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The Skeletal Mesh Component to retarget animation from. Assumed to be animated and tick BEFORE this anim instance.*/" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRRetargeterAnimNode.h" },
		{ "PinShownByDefault", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Skeletal Mesh Component to retarget animation from. Assumed to be animated and tick BEFORE this anim instance." },
#endif
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FOculusXRRetargeterAnimNode_Statics::NewProp_SourceMeshComponent = { "SourceMeshComponent", nullptr, (EPropertyFlags)0x001400000008200c, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRRetargeterAnimNode, SourceMeshComponent), Z_Construct_UClass_USkinnedMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRRetargeterAnimNode_Statics::NewProp_SourceMeshComponent_MetaData), Z_Construct_UScriptStruct_FOculusXRRetargeterAnimNode_Statics::NewProp_SourceMeshComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusXRRetargeterAnimNode_Statics::NewProp_bUseAttachedParent_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* If SourceMeshComponent is not valid, and if this is true, it will look for attached parent as a source */" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRRetargeterAnimNode.h" },
		{ "NeverAsPin", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If SourceMeshComponent is not valid, and if this is true, it will look for attached parent as a source" },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FOculusXRRetargeterAnimNode_Statics::NewProp_bUseAttachedParent_SetBit(void* Obj)
	{
		((FOculusXRRetargeterAnimNode*)Obj)->bUseAttachedParent = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOculusXRRetargeterAnimNode_Statics::NewProp_bUseAttachedParent = { "bUseAttachedParent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FOculusXRRetargeterAnimNode), &Z_Construct_UScriptStruct_FOculusXRRetargeterAnimNode_Statics::NewProp_bUseAttachedParent_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRRetargeterAnimNode_Statics::NewProp_bUseAttachedParent_MetaData), Z_Construct_UScriptStruct_FOculusXRRetargeterAnimNode_Statics::NewProp_bUseAttachedParent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusXRRetargeterAnimNode_Statics::NewProp_IKRetargeterAsset_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Retarget asset to use. Must define a Source and Target IK Rig compatible with the SourceMeshComponent and current anim instance.*/" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRRetargeterAnimNode.h" },
		{ "PinHiddenByDefault", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Retarget asset to use. Must define a Source and Target IK Rig compatible with the SourceMeshComponent and current anim instance." },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FOculusXRRetargeterAnimNode_Statics::NewProp_IKRetargeterAsset = { "IKRetargeterAsset", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRRetargeterAnimNode, IKRetargeterAsset), Z_Construct_UClass_UIKRetargeter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRRetargeterAnimNode_Statics::NewProp_IKRetargeterAsset_MetaData), Z_Construct_UScriptStruct_FOculusXRRetargeterAnimNode_Statics::NewProp_IKRetargeterAsset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusXRRetargeterAnimNode_Statics::NewProp_CustomRetargetProfile_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** connect a custom retarget profile to modify the retargeter's settings at runtime.*/" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRRetargeterAnimNode.h" },
		{ "PinHiddenByDefault", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "connect a custom retarget profile to modify the retargeter's settings at runtime." },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOculusXRRetargeterAnimNode_Statics::NewProp_CustomRetargetProfile = { "CustomRetargetProfile", nullptr, (EPropertyFlags)0x0010000000002005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRRetargeterAnimNode, CustomRetargetProfile), Z_Construct_UScriptStruct_FRetargetProfile, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRRetargeterAnimNode_Statics::NewProp_CustomRetargetProfile_MetaData), Z_Construct_UScriptStruct_FOculusXRRetargeterAnimNode_Statics::NewProp_CustomRetargetProfile_MetaData) }; // 2712446673
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusXRRetargeterAnimNode_Statics::NewProp_bSuppressWarnings_MetaData[] = {
		{ "Category", "Debug" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Toggle whether to print warnings about missing or incorrectly configured retarget configurations. */" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRRetargeterAnimNode.h" },
		{ "NeverAsPin", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Toggle whether to print warnings about missing or incorrectly configured retarget configurations." },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FOculusXRRetargeterAnimNode_Statics::NewProp_bSuppressWarnings_SetBit(void* Obj)
	{
		((FOculusXRRetargeterAnimNode*)Obj)->bSuppressWarnings = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOculusXRRetargeterAnimNode_Statics::NewProp_bSuppressWarnings = { "bSuppressWarnings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FOculusXRRetargeterAnimNode), &Z_Construct_UScriptStruct_FOculusXRRetargeterAnimNode_Statics::NewProp_bSuppressWarnings_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRRetargeterAnimNode_Statics::NewProp_bSuppressWarnings_MetaData), Z_Construct_UScriptStruct_FOculusXRRetargeterAnimNode_Statics::NewProp_bSuppressWarnings_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusXRRetargeterAnimNode_Statics::NewProp_Processor_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** the runtime processor used to run the retarget and generate new poses */" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRRetargeterAnimNode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "the runtime processor used to run the retarget and generate new poses" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FOculusXRRetargeterAnimNode_Statics::NewProp_Processor = { "Processor", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRRetargeterAnimNode, Processor), Z_Construct_UClass_UIKRetargetProcessor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRRetargeterAnimNode_Statics::NewProp_Processor_MetaData), Z_Construct_UScriptStruct_FOculusXRRetargeterAnimNode_Statics::NewProp_Processor_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOculusXRRetargeterAnimNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXRRetargeterAnimNode_Statics::NewProp_SourceMeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXRRetargeterAnimNode_Statics::NewProp_bUseAttachedParent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXRRetargeterAnimNode_Statics::NewProp_IKRetargeterAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXRRetargeterAnimNode_Statics::NewProp_CustomRetargetProfile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXRRetargeterAnimNode_Statics::NewProp_bSuppressWarnings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXRRetargeterAnimNode_Statics::NewProp_Processor,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOculusXRRetargeterAnimNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OculusXRRetargeting,
		Z_Construct_UScriptStruct_FAnimNode_Base,
		&NewStructOps,
		"OculusXRRetargeterAnimNode",
		Z_Construct_UScriptStruct_FOculusXRRetargeterAnimNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRRetargeterAnimNode_Statics::PropPointers),
		sizeof(FOculusXRRetargeterAnimNode),
		alignof(FOculusXRRetargeterAnimNode),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRRetargeterAnimNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOculusXRRetargeterAnimNode_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRRetargeterAnimNode_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FOculusXRRetargeterAnimNode()
	{
		if (!Z_Registration_Info_UScriptStruct_OculusXRRetargeterAnimNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OculusXRRetargeterAnimNode.InnerSingleton, Z_Construct_UScriptStruct_FOculusXRRetargeterAnimNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OculusXRRetargeterAnimNode.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Users_KalliKoulloufidou_UnrealProjects_Unreal_Movement_Plugins_OculusXRRetargeting_Source_OculusXRRetargeting_Public_OculusXRRetargeterAnimNode_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_KalliKoulloufidou_UnrealProjects_Unreal_Movement_Plugins_OculusXRRetargeting_Source_OculusXRRetargeting_Public_OculusXRRetargeterAnimNode_h_Statics::ScriptStructInfo[] = {
		{ FOculusXRRetargeterAnimNode::StaticStruct, Z_Construct_UScriptStruct_FOculusXRRetargeterAnimNode_Statics::NewStructOps, TEXT("OculusXRRetargeterAnimNode"), &Z_Registration_Info_UScriptStruct_OculusXRRetargeterAnimNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOculusXRRetargeterAnimNode), 2998401390U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_KalliKoulloufidou_UnrealProjects_Unreal_Movement_Plugins_OculusXRRetargeting_Source_OculusXRRetargeting_Public_OculusXRRetargeterAnimNode_h_2169055283(TEXT("/Script/OculusXRRetargeting"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_KalliKoulloufidou_UnrealProjects_Unreal_Movement_Plugins_OculusXRRetargeting_Source_OculusXRRetargeting_Public_OculusXRRetargeterAnimNode_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_KalliKoulloufidou_UnrealProjects_Unreal_Movement_Plugins_OculusXRRetargeting_Source_OculusXRRetargeting_Public_OculusXRRetargeterAnimNode_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
