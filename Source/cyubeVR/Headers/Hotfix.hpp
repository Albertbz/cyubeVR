#ifndef UE4SS_SDK_Hotfix_HPP
#define UE4SS_SDK_Hotfix_HPP

#include "Hotfix_enums.hpp"

class UOnlineHotfixManager : public UObject
{
    FString OSSName;
    FString HotfixManagerClassName;
    FString DebugPrefix;
    TArray<class UObject*> AssetsHotfixedFromIniFiles;

    void StartHotfixProcess();
};

class UUpdateManager : public UObject
{
    float HotfixCheckCompleteDelay;
    float UpdateCheckCompleteDelay;
    float HotfixAvailabilityCheckCompleteDelay;
    float UpdateCheckAvailabilityCompleteDelay;
    int32 AppSuspendedUpdateCheckTimeSeconds;
    bool bPlatformEnvironmentDetected;
    bool bInitialUpdateFinished;
    bool bCheckHotfixAvailabilityOnly;
    EUpdateState CurrentUpdateState;
    int32 WorstNumFilesPendingLoadViewed;
    EHotfixResult LastHotfixResult;
    FDateTime LastUpdateCheck;
    EUpdateCompletionStatus LastCompletionResult;
    class UEnum* UpdateStateEnum;
    class UEnum* UpdateCompletionEnum;

};

#endif
