#ifndef UE4SS_SDK_VRHandControllerRift_HPP
#define UE4SS_SDK_VRHandControllerRift_HPP

class AVRHandControllerRift_C : public AVRHandController_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* SelectionOverlay;
    class UStaticMeshComponent* Dot;
    class UStaticMeshComponent* ThumbstickOverlay;
    FVector Timeline_0_Scale_7FDA5F7B4BE417D41B84F5A4866E5076;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_7FDA5F7B4BE417D41B84F5A4866E5076;
    class UTimelineComponent* Timeline_0;
    float MoveRot_Value_A7010FD545200B392DE6CD9730AB1354;
    TEnumAsByte<ETimelineDirection::Type> MoveRot__Direction_A7010FD545200B392DE6CD9730AB1354;
    class UTimelineComponent* MoveRot;
    bool OverlayEnabled;
    FRotator OverlayTargetRotation;
    FRotator OverlayOldRotation;
    FRotator OverlayCurrentRotation;
    FVector OverlayScale;

    void GetOverlaySideRotation(TEnumAsByte<Side> Side, float& Rotation);
    void EnableOverlay(bool Enabled, bool& WasChanged);
    void MoveRot__FinishedFunc();
    void MoveRot__UpdateFunc();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void UpdateSelectionOverlay(TEnumAsByte<Side> Side, bool Valid);
    void SetOverlayVisibility(bool Visible);
    void EnableOverlayEvent(bool Enable);
    void SetWorldScale(FVector Scale);
    void SetVisualDot(float X, float Y);
    void SetSide(TEnumAsByte<hand> Side);
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void SetAlternativeModeActive(bool Active);
    void SetVisible(bool Visible);
    void ExecuteUbergraph_VRHandControllerRift(int32 EntryPoint);
};

#endif
