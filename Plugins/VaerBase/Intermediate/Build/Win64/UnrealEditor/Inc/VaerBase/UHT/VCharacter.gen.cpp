// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VCharacter.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVCharacter() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_VaerBase();
VAERBASE_API UClass* Z_Construct_UClass_AVCharacter();
VAERBASE_API UClass* Z_Construct_UClass_AVCharacter_NoRegister();
VAERBASE_API UClass* Z_Construct_UClass_UPlayerGameplayAbilitiesDataAsset_NoRegister();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AVCharacter **************************************************************
void AVCharacter::StaticRegisterNativesAVCharacter()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AVCharacter;
UClass* AVCharacter::GetPrivateStaticClass()
{
	using TClass = AVCharacter;
	if (!Z_Registration_Info_UClass_AVCharacter.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VCharacter"),
			Z_Registration_Info_UClass_AVCharacter.InnerSingleton,
			StaticRegisterNativesAVCharacter,
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
	return Z_Registration_Info_UClass_AVCharacter.InnerSingleton;
}
UClass* Z_Construct_UClass_AVCharacter_NoRegister()
{
	return AVCharacter::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AVCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "VCharacter.h" },
		{ "ModuleRelativePath", "Public/VCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerGameplayAbilitiesDataAsset_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AbilitySystem" },
		{ "ModuleRelativePath", "Public/VCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerGameplayAbilitiesDataAsset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVCharacter_Statics::NewProp_PlayerGameplayAbilitiesDataAsset = { "PlayerGameplayAbilitiesDataAsset", nullptr, (EPropertyFlags)0x0144000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVCharacter, PlayerGameplayAbilitiesDataAsset), Z_Construct_UClass_UPlayerGameplayAbilitiesDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerGameplayAbilitiesDataAsset_MetaData), NewProp_PlayerGameplayAbilitiesDataAsset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AVCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVCharacter_Statics::NewProp_PlayerGameplayAbilitiesDataAsset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AVCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AVCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_VaerBase,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AVCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AVCharacter_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UAbilitySystemInterface_NoRegister, (int32)VTABLE_OFFSET(AVCharacter, IAbilitySystemInterface), false },  // 1199015870
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AVCharacter_Statics::ClassParams = {
	&AVCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AVCharacter_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AVCharacter_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AVCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AVCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AVCharacter()
{
	if (!Z_Registration_Info_UClass_AVCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AVCharacter.OuterSingleton, Z_Construct_UClass_AVCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AVCharacter.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AVCharacter);
AVCharacter::~AVCharacter() {}
// ********** End Class AVCharacter ****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Vicky_Documents_Unreal_Projects_Vaer_Plugins_VaerBase_Source_VaerBase_Public_VCharacter_h__Script_VaerBase_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AVCharacter, AVCharacter::StaticClass, TEXT("AVCharacter"), &Z_Registration_Info_UClass_AVCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AVCharacter), 1831924677U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Vicky_Documents_Unreal_Projects_Vaer_Plugins_VaerBase_Source_VaerBase_Public_VCharacter_h__Script_VaerBase_1868192801(TEXT("/Script/VaerBase"),
	Z_CompiledInDeferFile_FID_Users_Vicky_Documents_Unreal_Projects_Vaer_Plugins_VaerBase_Source_VaerBase_Public_VCharacter_h__Script_VaerBase_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Vicky_Documents_Unreal_Projects_Vaer_Plugins_VaerBase_Source_VaerBase_Public_VCharacter_h__Script_VaerBase_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
