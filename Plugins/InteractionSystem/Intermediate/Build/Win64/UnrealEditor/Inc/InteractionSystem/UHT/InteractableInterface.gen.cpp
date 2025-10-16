// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InteractableInterface.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeInteractableInterface() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
INTERACTIONSYSTEM_API UClass* Z_Construct_UClass_UInteractableInterface();
INTERACTIONSYSTEM_API UClass* Z_Construct_UClass_UInteractableInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_InteractionSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Interface UInteractableInterface Function Highlight ****************************
struct InteractableInterface_eventHighlight_Parms
{
	bool highlight;
};
void IInteractableInterface::Highlight(bool highlight)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_Highlight instead.");
}
static FName NAME_UInteractableInterface_Highlight = FName(TEXT("Highlight"));
void IInteractableInterface::Execute_Highlight(UObject* O, bool highlight)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UInteractableInterface::StaticClass()));
	InteractableInterface_eventHighlight_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UInteractableInterface_Highlight);
	if (Func)
	{
		Parms.highlight=highlight;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IInteractableInterface*)(O->GetNativeInterfaceAddress(UInteractableInterface::StaticClass())))
	{
		I->Highlight_Implementation(highlight);
	}
}
struct Z_Construct_UFunction_UInteractableInterface_Highlight_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "Public/InteractableInterface.h" },
	};
#endif // WITH_METADATA
	static void NewProp_highlight_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_highlight;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UInteractableInterface_Highlight_Statics::NewProp_highlight_SetBit(void* Obj)
{
	((InteractableInterface_eventHighlight_Parms*)Obj)->highlight = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInteractableInterface_Highlight_Statics::NewProp_highlight = { "highlight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InteractableInterface_eventHighlight_Parms), &Z_Construct_UFunction_UInteractableInterface_Highlight_Statics::NewProp_highlight_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractableInterface_Highlight_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractableInterface_Highlight_Statics::NewProp_highlight,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractableInterface_Highlight_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractableInterface_Highlight_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInteractableInterface, nullptr, "Highlight", Z_Construct_UFunction_UInteractableInterface_Highlight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractableInterface_Highlight_Statics::PropPointers), sizeof(InteractableInterface_eventHighlight_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractableInterface_Highlight_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInteractableInterface_Highlight_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(InteractableInterface_eventHighlight_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInteractableInterface_Highlight()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteractableInterface_Highlight_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IInteractableInterface::execHighlight)
{
	P_GET_UBOOL(Z_Param_highlight);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Highlight_Implementation(Z_Param_highlight);
	P_NATIVE_END;
}
// ********** End Interface UInteractableInterface Function Highlight ******************************

// ********** Begin Interface UInteractableInterface ***********************************************
void UInteractableInterface::StaticRegisterNativesUInteractableInterface()
{
	UClass* Class = UInteractableInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Highlight", &IInteractableInterface::execHighlight },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UInteractableInterface;
UClass* UInteractableInterface::GetPrivateStaticClass()
{
	using TClass = UInteractableInterface;
	if (!Z_Registration_Info_UClass_UInteractableInterface.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("InteractableInterface"),
			Z_Registration_Info_UClass_UInteractableInterface.InnerSingleton,
			StaticRegisterNativesUInteractableInterface,
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
	return Z_Registration_Info_UClass_UInteractableInterface.InnerSingleton;
}
UClass* Z_Construct_UClass_UInteractableInterface_NoRegister()
{
	return UInteractableInterface::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UInteractableInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InteractableInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInteractableInterface_Highlight, "Highlight" }, // 1515931750
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IInteractableInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInteractableInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_InteractionSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractableInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInteractableInterface_Statics::ClassParams = {
	&UInteractableInterface::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractableInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UInteractableInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInteractableInterface()
{
	if (!Z_Registration_Info_UClass_UInteractableInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInteractableInterface.OuterSingleton, Z_Construct_UClass_UInteractableInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInteractableInterface.OuterSingleton;
}
UInteractableInterface::UInteractableInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractableInterface);
// ********** End Interface UInteractableInterface *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Vicky_Documents_Unreal_Projects_Vaer_Plugins_InteractionSystem_Source_InteractionSystem_Public_InteractableInterface_h__Script_InteractionSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInteractableInterface, UInteractableInterface::StaticClass, TEXT("UInteractableInterface"), &Z_Registration_Info_UClass_UInteractableInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInteractableInterface), 2305658980U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Vicky_Documents_Unreal_Projects_Vaer_Plugins_InteractionSystem_Source_InteractionSystem_Public_InteractableInterface_h__Script_InteractionSystem_2322640070(TEXT("/Script/InteractionSystem"),
	Z_CompiledInDeferFile_FID_Users_Vicky_Documents_Unreal_Projects_Vaer_Plugins_InteractionSystem_Source_InteractionSystem_Public_InteractableInterface_h__Script_InteractionSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Vicky_Documents_Unreal_Projects_Vaer_Plugins_InteractionSystem_Source_InteractionSystem_Public_InteractableInterface_h__Script_InteractionSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
