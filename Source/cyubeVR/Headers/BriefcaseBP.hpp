#ifndef UE4SS_SDK_BriefcaseBP_HPP
#define UE4SS_SDK_BriefcaseBP_HPP

class ABriefcaseBP_C : public AReceiveLightActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UVRStereoWidgetComponent* VRStereoWidget_ButtonMapping;
    class UVRStereoWidgetComponent* VRStereoWidget_MainUI;
    class USkeletalMeshComponent* Briefcase;
    class UAudioComponent* OpenCloseAudio;
    class UStaticMeshComponent* Plane;
    class UStaticMeshComponent* Cube;
    class UWidgetComponent* Widget;
    class UStaticMeshComponent* BriefcasePart1;
    class UStaticMeshComponent* BriefcasePart2;
    class USceneComponent* DefaultSceneRoot;
    float OpenT_Percent_C73668904267BBEEE6E7DF85C0A21E11;
    TEnumAsByte<ETimelineDirection::Type> OpenT__Direction_C73668904267BBEEE6E7DF85C0A21E11;
    class UTimelineComponent* OpenT;
    class UObject* StereoWidgetRenderer;
    class UUserWidget* UserWidget;

    void GetVisibility(bool& Visible);
    void SetButtonMappingOverviewVisible(bool Visible);
    void UserConstructionScript();
    void OpenT__FinishedFunc();
    void OpenT__UpdateFunc();
    void ReceiveTick(float DeltaSeconds);
    void Open();
    void ReceiveBeginPlay();
    void SetVisibility(bool Visibility);
    void Close();
    void SetVisibilityButtonOverview();
    void ExecuteUbergraph_BriefcaseBP(int32 EntryPoint);
};

#endif
