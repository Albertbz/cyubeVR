// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PIMAXPLATFORM_pvrInt64StrDelegateDelegate_generated_h
#error "pvrInt64StrDelegateDelegate.generated.h already included, missing '#pragma once' in pvrInt64StrDelegateDelegate.h"
#endif
#define PIMAXPLATFORM_pvrInt64StrDelegateDelegate_generated_h

#define cyubeVRTemplateU57_3_Plugins_Pimax_PimaxPlatform_Source_PimaxPlatform_Public_pvrInt64StrDelegateDelegate_h_5_DELEGATE \
struct _Script_PimaxPlatform_eventpvrInt64StrDelegate_Parms \
{ \
	int64 pvrint64; \
	FString pvrStr; \
}; \
static inline void FpvrInt64StrDelegate_DelegateWrapper(const FMulticastScriptDelegate& pvrInt64StrDelegate, int64 pvrint64, const FString& pvrStr) \
{ \
	_Script_PimaxPlatform_eventpvrInt64StrDelegate_Parms Parms; \
	Parms.pvrint64=pvrint64; \
	Parms.pvrStr=pvrStr; \
	pvrInt64StrDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID cyubeVRTemplateU57_3_Plugins_Pimax_PimaxPlatform_Source_PimaxPlatform_Public_pvrInt64StrDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
