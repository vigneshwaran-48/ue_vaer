// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Interactables/BaseInteractable.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBaseInteractable() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
INTERACTIONSYSTEM_API UClass* Z_Construct_UClass_ABaseInteractable();
INTERACTIONSYSTEM_API UClass* Z_Construct_UClass_ABaseInteractable_NoRegister();
INTERACTIONSYSTEM_API UClass* Z_Construct_UClass_UInteractableInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_InteractionSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ABaseInteractable ********************************************************
void ABaseInteractable::StaticRegisterNativesABaseInteractable()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ABaseInteractable;
UClass* ABaseInteractable::GetPrivateStaticClass()
{
	using TClass = ABaseInteractable;
	if (!Z_Registration_Info_UClass_ABaseInteractable.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("BaseInteractable"),
			Z_Registration_Info_UClass_ABaseInteractable.InnerSingleton,
			StaticRegisterNativesABaseInteractable,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_ABaseInteractable.InnerSingleton;
}
UClass* Z_Construct_UClass_ABaseInteractable_NoRegister()
{
	return ABaseInteractable::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ABaseInteractable_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Interactables/BaseInteractable.h" },
		{ "ModuleRelativePath", "Public/Interactables/BaseInteractable.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SceneRoot_MetaData[] = {
		{ "Category", "Interaction System" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Interactables/BaseInteractable.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[] = {
		{ "Category", "Interaction System" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Interactables/BaseInteractable.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractionBox_MetaData[] = {
		{ "Category", "Interaction System" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Interactables/BaseInteractable.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneRoot;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractionBox;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseInteractable>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseInteractable_Statics::NewProp_SceneRoot = { "SceneRoot", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseInteractable, SceneRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SceneRoot_MetaData), NewProp_SceneRoot_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseInteractable_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseInteractable, StaticMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMesh_MetaData), NewProp_StaticMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseInteractable_Statics::NewProp_InteractionBox = { "InteractionBox", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseInteractable, InteractionBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractionBox_MetaData), NewProp_InteractionBox_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABaseInteractable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseInteractable_Statics::NewProp_SceneRoot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseInteractable_Statics::NewProp_StaticMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseInteractable_Statics::NewProp_InteractionBox,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseInteractable_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABaseInteractable_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_InteractionSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseInteractable_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ABaseInteractable_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UInteractableInterface_NoRegister, (int32)VTABLE_OFFSET(ABaseInteractable, IInteractableInterface), false },  // 2305658980
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABaseInteractable_Statics::ClassParams = {
	&ABaseInteractable::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ABaseInteractable_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ABaseInteractable_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseInteractable_Statics::Class_MetaDataParams), Z_Construct_UClass_ABaseInteractable_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABaseInteractable()
{
	if (!Z_Registration_Info_UClass_ABaseInteractable.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABaseInteractable.OuterSingleton, Z_Construct_UClass_ABaseInteractable_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABaseInteractable.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseInteractable);
ABaseInteractable::~ABaseInteractable() {}
// ********** End Class ABaseInteractable **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Vicky_Documents_Unreal_Projects_Vaer_Plugins_InteractionSystem_Source_InteractionSystem_Public_Interactables_BaseInteractable_h__Script_InteractionSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABaseInteractable, ABaseInteractable::StaticClass, TEXT("ABaseInteractable"), &Z_Registration_Info_UClass_ABaseInteractable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABaseInteractable), 1242765549U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Vicky_Documents_Unreal_Projects_Vaer_Plugins_InteractionSystem_Source_InteractionSystem_Public_Interactables_BaseInteractable_h__Script_InteractionSystem_2802410113(TEXT("/Script/InteractionSystem"),
	Z_CompiledInDeferFile_FID_Users_Vicky_Documents_Unreal_Projects_Vaer_Plugins_InteractionSystem_Source_InteractionSystem_Public_Interactables_BaseInteractable_h__Script_InteractionSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Vicky_Documents_Unreal_Projects_Vaer_Plugins_InteractionSystem_Source_InteractionSystem_Public_Interactables_BaseInteractable_h__Script_InteractionSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
