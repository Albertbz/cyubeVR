#ifndef UE4SS_SDK_BP_FunctionLibrary_HPP
#define UE4SS_SDK_BP_FunctionLibrary_HPP

class UBP_FunctionLibrary_C : public UBlueprintFunctionLibrary
{

    void UsingDirectX12(class UObject* __WorldContext, bool& TRUE);
    void DoesObjectAllowResize(EBlockTypeBP Type, class UObject* __WorldContext, bool& Allow);
    void IsChristmas(class UObject* __WorldContext, bool& Is);
    void UnlockAchievement(FName AchievementName, class UObject* __WorldContext);
    void GetIndexFingerCurlFast(class USkeletalMeshComponent* HandMesh, bool Left, class UObject* __WorldContext, float& Curl);
    void GetMiddleFingerCurl(EHand hand, class UObject* __WorldContext, float& Curl);
    void GetControllerType(class UObject* __WorldContext, TEnumAsByte<ControllerType>& Controller, FSteamVRInputOriginInfo& ControllerNameR, bool& FoundAny);
    void GetIndexFingerCurl(EHand hand, class UObject* __WorldContext, float& Curl);
    void UsingVulkan(class UObject* __WorldContext, bool& _);
    void IsUsingLIV(class UObject* __WorldContext, bool& LIV);
    void IsEaster(class UObject* __WorldContext, bool& Is);
    void IsAprilFirst(class UObject* __WorldContext, bool& Is);
    void ToggleBool(bool& Input, class UObject* __WorldContext);
    void GetCaptureActorActive(class UObject* __WorldContext, bool& Active);
    void GetUsedVRHeadset(class UObject* __WorldContext, bool& IsRift, EHMDType& Type);
};

#endif
