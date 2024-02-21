// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PimaxPlatform/Public/PvrInstanceSubsystem.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePvrInstanceSubsystem() {}
// Cross Module References
	PIMAXPLATFORM_API UClass* Z_Construct_UClass_UPvrInstanceSubsystem_NoRegister();
	PIMAXPLATFORM_API UClass* Z_Construct_UClass_UPvrInstanceSubsystem();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	UPackage* Z_Construct_UPackage__Script_PimaxPlatform();
	PIMAXPLATFORM_API UFunction* Z_Construct_UDelegateFunction_PimaxPlatform_pvrInt32Delegate__DelegateSignature();
	PIMAXPLATFORM_API UFunction* Z_Construct_UDelegateFunction_PimaxPlatform_pvrInt64StrDelegate__DelegateSignature();
	PIMAXPLATFORM_API UFunction* Z_Construct_UDelegateFunction_PimaxPlatform_pvrFStringDelegate__DelegateSignature();
	PIMAXPLATFORM_API UFunction* Z_Construct_UDelegateFunction_PimaxPlatform_pvrNoParamDelegate__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UPvrInstanceSubsystem::execpvr_Init)
	{
		P_GET_UBOOL_REF(Z_Param_Out_success);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->pvr_Init(Z_Param_Out_success);
		P_NATIVE_END;
	}
	void UPvrInstanceSubsystem::StaticRegisterNativesUPvrInstanceSubsystem()
	{
		UClass* Class = UPvrInstanceSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "pvr_Init", &UPvrInstanceSubsystem::execpvr_Init },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPvrInstanceSubsystem_pvr_Init_Statics
	{
		struct PvrInstanceSubsystem_eventpvr_Init_Parms
		{
			bool success;
		};
		static void NewProp_success_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_success;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPvrInstanceSubsystem_pvr_Init_Statics::NewProp_success_SetBit(void* Obj)
	{
		((PvrInstanceSubsystem_eventpvr_Init_Parms*)Obj)->success = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPvrInstanceSubsystem_pvr_Init_Statics::NewProp_success = { "success", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PvrInstanceSubsystem_eventpvr_Init_Parms), &Z_Construct_UFunction_UPvrInstanceSubsystem_pvr_Init_Statics::NewProp_success_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPvrInstanceSubsystem_pvr_Init_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPvrInstanceSubsystem_pvr_Init_Statics::NewProp_success,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPvrInstanceSubsystem_pvr_Init_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PvrInstanceSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPvrInstanceSubsystem_pvr_Init_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPvrInstanceSubsystem, nullptr, "pvr_Init", nullptr, nullptr, sizeof(PvrInstanceSubsystem_eventpvr_Init_Parms), Z_Construct_UFunction_UPvrInstanceSubsystem_pvr_Init_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPvrInstanceSubsystem_pvr_Init_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPvrInstanceSubsystem_pvr_Init_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPvrInstanceSubsystem_pvr_Init_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPvrInstanceSubsystem_pvr_Init()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPvrInstanceSubsystem_pvr_Init_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPvrInstanceSubsystem_NoRegister()
	{
		return UPvrInstanceSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UPvrInstanceSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnCheckEntitlementResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCheckEntitlementResult;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnProcessingRuntimeError_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnProcessingRuntimeError;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnProcessingLoggedInUser_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnProcessingLoggedInUser;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnGetAccessToken_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGetAccessToken;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnProcessingCurrentLanguage_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnProcessingCurrentLanguage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnProcessingMessageError_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnProcessingMessageError;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnLogout_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLogout;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnShutDown_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnShutDown;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPvrInstanceSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_PimaxPlatform,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPvrInstanceSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPvrInstanceSubsystem_pvr_Init, "pvr_Init" }, // 3627021234
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPvrInstanceSubsystem_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PvrInstanceSubsystem.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PvrInstanceSubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPvrInstanceSubsystem_Statics::NewProp_OnCheckEntitlementResult_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PvrInstanceSubsystem" },
		{ "ModuleRelativePath", "Public/PvrInstanceSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPvrInstanceSubsystem_Statics::NewProp_OnCheckEntitlementResult = { "OnCheckEntitlementResult", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPvrInstanceSubsystem, OnCheckEntitlementResult), Z_Construct_UDelegateFunction_PimaxPlatform_pvrInt32Delegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPvrInstanceSubsystem_Statics::NewProp_OnCheckEntitlementResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPvrInstanceSubsystem_Statics::NewProp_OnCheckEntitlementResult_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPvrInstanceSubsystem_Statics::NewProp_OnProcessingRuntimeError_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PvrInstanceSubsystem" },
		{ "ModuleRelativePath", "Public/PvrInstanceSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPvrInstanceSubsystem_Statics::NewProp_OnProcessingRuntimeError = { "OnProcessingRuntimeError", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPvrInstanceSubsystem, OnProcessingRuntimeError), Z_Construct_UDelegateFunction_PimaxPlatform_pvrInt32Delegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPvrInstanceSubsystem_Statics::NewProp_OnProcessingRuntimeError_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPvrInstanceSubsystem_Statics::NewProp_OnProcessingRuntimeError_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPvrInstanceSubsystem_Statics::NewProp_OnProcessingLoggedInUser_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PvrInstanceSubsystem" },
		{ "ModuleRelativePath", "Public/PvrInstanceSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPvrInstanceSubsystem_Statics::NewProp_OnProcessingLoggedInUser = { "OnProcessingLoggedInUser", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPvrInstanceSubsystem, OnProcessingLoggedInUser), Z_Construct_UDelegateFunction_PimaxPlatform_pvrInt64StrDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPvrInstanceSubsystem_Statics::NewProp_OnProcessingLoggedInUser_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPvrInstanceSubsystem_Statics::NewProp_OnProcessingLoggedInUser_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPvrInstanceSubsystem_Statics::NewProp_OnGetAccessToken_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PvrInstanceSubsystem" },
		{ "ModuleRelativePath", "Public/PvrInstanceSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPvrInstanceSubsystem_Statics::NewProp_OnGetAccessToken = { "OnGetAccessToken", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPvrInstanceSubsystem, OnGetAccessToken), Z_Construct_UDelegateFunction_PimaxPlatform_pvrFStringDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPvrInstanceSubsystem_Statics::NewProp_OnGetAccessToken_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPvrInstanceSubsystem_Statics::NewProp_OnGetAccessToken_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPvrInstanceSubsystem_Statics::NewProp_OnProcessingCurrentLanguage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PvrInstanceSubsystem" },
		{ "ModuleRelativePath", "Public/PvrInstanceSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPvrInstanceSubsystem_Statics::NewProp_OnProcessingCurrentLanguage = { "OnProcessingCurrentLanguage", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPvrInstanceSubsystem, OnProcessingCurrentLanguage), Z_Construct_UDelegateFunction_PimaxPlatform_pvrFStringDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPvrInstanceSubsystem_Statics::NewProp_OnProcessingCurrentLanguage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPvrInstanceSubsystem_Statics::NewProp_OnProcessingCurrentLanguage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPvrInstanceSubsystem_Statics::NewProp_OnProcessingMessageError_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PvrInstanceSubsystem" },
		{ "ModuleRelativePath", "Public/PvrInstanceSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPvrInstanceSubsystem_Statics::NewProp_OnProcessingMessageError = { "OnProcessingMessageError", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPvrInstanceSubsystem, OnProcessingMessageError), Z_Construct_UDelegateFunction_PimaxPlatform_pvrFStringDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPvrInstanceSubsystem_Statics::NewProp_OnProcessingMessageError_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPvrInstanceSubsystem_Statics::NewProp_OnProcessingMessageError_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPvrInstanceSubsystem_Statics::NewProp_OnLogout_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PvrInstanceSubsystem" },
		{ "ModuleRelativePath", "Public/PvrInstanceSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPvrInstanceSubsystem_Statics::NewProp_OnLogout = { "OnLogout", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPvrInstanceSubsystem, OnLogout), Z_Construct_UDelegateFunction_PimaxPlatform_pvrNoParamDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPvrInstanceSubsystem_Statics::NewProp_OnLogout_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPvrInstanceSubsystem_Statics::NewProp_OnLogout_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPvrInstanceSubsystem_Statics::NewProp_OnShutDown_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PvrInstanceSubsystem" },
		{ "ModuleRelativePath", "Public/PvrInstanceSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPvrInstanceSubsystem_Statics::NewProp_OnShutDown = { "OnShutDown", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPvrInstanceSubsystem, OnShutDown), Z_Construct_UDelegateFunction_PimaxPlatform_pvrNoParamDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPvrInstanceSubsystem_Statics::NewProp_OnShutDown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPvrInstanceSubsystem_Statics::NewProp_OnShutDown_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPvrInstanceSubsystem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPvrInstanceSubsystem_Statics::NewProp_OnCheckEntitlementResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPvrInstanceSubsystem_Statics::NewProp_OnProcessingRuntimeError,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPvrInstanceSubsystem_Statics::NewProp_OnProcessingLoggedInUser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPvrInstanceSubsystem_Statics::NewProp_OnGetAccessToken,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPvrInstanceSubsystem_Statics::NewProp_OnProcessingCurrentLanguage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPvrInstanceSubsystem_Statics::NewProp_OnProcessingMessageError,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPvrInstanceSubsystem_Statics::NewProp_OnLogout,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPvrInstanceSubsystem_Statics::NewProp_OnShutDown,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPvrInstanceSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPvrInstanceSubsystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPvrInstanceSubsystem_Statics::ClassParams = {
		&UPvrInstanceSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPvrInstanceSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPvrInstanceSubsystem_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPvrInstanceSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPvrInstanceSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPvrInstanceSubsystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPvrInstanceSubsystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPvrInstanceSubsystem, 1728498434);
	template<> PIMAXPLATFORM_API UClass* StaticClass<UPvrInstanceSubsystem>()
	{
		return UPvrInstanceSubsystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPvrInstanceSubsystem(Z_Construct_UClass_UPvrInstanceSubsystem, &UPvrInstanceSubsystem::StaticClass, TEXT("/Script/PimaxPlatform"), TEXT("UPvrInstanceSubsystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPvrInstanceSubsystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
