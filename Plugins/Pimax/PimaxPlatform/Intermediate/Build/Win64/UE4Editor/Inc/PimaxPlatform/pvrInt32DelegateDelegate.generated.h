// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PIMAXPLATFORM_pvrInt32DelegateDelegate_generated_h
#error "pvrInt32DelegateDelegate.generated.h already included, missing '#pragma once' in pvrInt32DelegateDelegate.h"
#endif
#define PIMAXPLATFORM_pvrInt32DelegateDelegate_generated_h

#define cyubeVR_Plugins_Pimax_PimaxPlatform_Source_PimaxPlatform_Public_pvrInt32DelegateDelegate_h_5_DELEGATE \
struct _Script_PimaxPlatform_eventpvrInt32Delegate_Parms \
{ \
	int32 pvrint; \
}; \
static inline void FpvrInt32Delegate_DelegateWrapper(const FMulticastScriptDelegate& pvrInt32Delegate, int32 pvrint) \
{ \
	_Script_PimaxPlatform_eventpvrInt32Delegate_Parms Parms; \
	Parms.pvrint=pvrint; \
	pvrInt32Delegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID cyubeVR_Plugins_Pimax_PimaxPlatform_Source_PimaxPlatform_Public_pvrInt32DelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
