// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GAS/Abilities/InteractAbility.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeInteractAbility() {}

// ********** Begin Cross Module References ********************************************************
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility();
INTERACTIONSYSTEM_API UClass* Z_Construct_UClass_UInteractAbility();
INTERACTIONSYSTEM_API UClass* Z_Construct_UClass_UInteractAbility_NoRegister();
UPackage* Z_Construct_UPackage__Script_InteractionSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UInteractAbility *********************************************************
void UInteractAbility::StaticRegisterNativesUInteractAbility()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UInteractAbility;
UClass* UInteractAbility::GetPrivateStaticClass()
{
	using TClass = UInteractAbility;
	if (!Z_Registration_Info_UClass_UInteractAbility.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("InteractAbility"),
			Z_Registration_Info_UClass_UInteractAbility.InnerSingleton,
			StaticRegisterNativesUInteractAbility,
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
	return Z_Registration_Info_UClass_UInteractAbility.InnerSingleton;
}
UClass* Z_Construct_UClass_UInteractAbility_NoRegister()
{
	return UInteractAbility::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UInteractAbility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "GAS/Abilities/InteractAbility.h" },
		{ "ModuleRelativePath", "Public/GAS/Abilities/InteractAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractDistance_MetaData[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "Public/GAS/Abilities/InteractAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractRadius_MetaData[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "Public/GAS/Abilities/InteractAbility.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InteractDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InteractRadius;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInteractAbility>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInteractAbility_Statics::NewProp_InteractDistance = { "InteractDistance", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInteractAbility, InteractDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractDistance_MetaData), NewProp_InteractDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInteractAbility_Statics::NewProp_InteractRadius = { "InteractRadius", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInteractAbility, InteractRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractRadius_MetaData), NewProp_InteractRadius_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInteractAbility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractAbility_Statics::NewProp_InteractDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractAbility_Statics::NewProp_InteractRadius,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractAbility_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInteractAbility_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameplayAbility,
	(UObject* (*)())Z_Construct_UPackage__Script_InteractionSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractAbility_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInteractAbility_Statics::ClassParams = {
	&UInteractAbility::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UInteractAbility_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UInteractAbility_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractAbility_Statics::Class_MetaDataParams), Z_Construct_UClass_UInteractAbility_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInteractAbility()
{
	if (!Z_Registration_Info_UClass_UInteractAbility.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInteractAbility.OuterSingleton, Z_Construct_UClass_UInteractAbility_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInteractAbility.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractAbility);
UInteractAbility::~UInteractAbility() {}
// ********** End Class UInteractAbility ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Vicky_Documents_Unreal_Projects_Vaer_Plugins_InteractionSystem_Source_InteractionSystem_Public_GAS_Abilities_InteractAbility_h__Script_InteractionSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInteractAbility, UInteractAbility::StaticClass, TEXT("UInteractAbility"), &Z_Registration_Info_UClass_UInteractAbility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInteractAbility), 1264633478U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Vicky_Documents_Unreal_Projects_Vaer_Plugins_InteractionSystem_Source_InteractionSystem_Public_GAS_Abilities_InteractAbility_h__Script_InteractionSystem_3483392773(TEXT("/Script/InteractionSystem"),
	Z_CompiledInDeferFile_FID_Users_Vicky_Documents_Unreal_Projects_Vaer_Plugins_InteractionSystem_Source_InteractionSystem_Public_GAS_Abilities_InteractAbility_h__Script_InteractionSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Vicky_Documents_Unreal_Projects_Vaer_Plugins_InteractionSystem_Source_InteractionSystem_Public_GAS_Abilities_InteractAbility_h__Script_InteractionSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
