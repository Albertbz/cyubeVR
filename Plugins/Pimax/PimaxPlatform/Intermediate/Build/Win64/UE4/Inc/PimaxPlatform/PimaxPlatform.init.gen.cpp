// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePimaxPlatform_init() {}
	PIMAXPLATFORM_API UFunction* Z_Construct_UDelegateFunction_PimaxPlatform_pvrFStringDelegate__DelegateSignature();
	PIMAXPLATFORM_API UFunction* Z_Construct_UDelegateFunction_PimaxPlatform_pvrInt32Delegate__DelegateSignature();
	PIMAXPLATFORM_API UFunction* Z_Construct_UDelegateFunction_PimaxPlatform_pvrInt64StrDelegate__DelegateSignature();
	PIMAXPLATFORM_API UFunction* Z_Construct_UDelegateFunction_PimaxPlatform_pvrNoParamDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_PimaxPlatform()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_PimaxPlatform_pvrFStringDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_PimaxPlatform_pvrInt32Delegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_PimaxPlatform_pvrInt64StrDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_PimaxPlatform_pvrNoParamDelegate__DelegateSignature,
			};
			static const UE4CodeGen_Private::FPackageParams PackageParams = {
				"/Script/PimaxPlatform",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x0903EC09,
				0xB482DD01,
				METADATA_PARAMS(nullptr, 0)
			};
			UE4CodeGen_Private::ConstructUPackage(ReturnPackage, PackageParams);
		}
		return ReturnPackage;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
