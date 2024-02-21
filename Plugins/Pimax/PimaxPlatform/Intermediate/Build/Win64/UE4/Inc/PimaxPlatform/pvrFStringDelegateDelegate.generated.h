// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PIMAXPLATFORM_pvrFStringDelegateDelegate_generated_h
#error "pvrFStringDelegateDelegate.generated.h already included, missing '#pragma once' in pvrFStringDelegateDelegate.h"
#endif
#define PIMAXPLATFORM_pvrFStringDelegateDelegate_generated_h

#define cyubeVR_Plugins_Pimax_PimaxPlatform_Source_PimaxPlatform_Public_pvrFStringDelegateDelegate_h_5_DELEGATE \
struct _Script_PimaxPlatform_eventpvrFStringDelegate_Parms \
{ \
	FString pvrStr; \
}; \
static inline void FpvrFStringDelegate_DelegateWrapper(const FMulticastScriptDelegate& pvrFStringDelegate, const FString& pvrStr) \
{ \
	_Script_PimaxPlatform_eventpvrFStringDelegate_Parms Parms; \
	Parms.pvrStr=pvrStr; \
	pvrFStringDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID cyubeVR_Plugins_Pimax_PimaxPlatform_Source_PimaxPlatform_Public_pvrFStringDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
