#ifndef UE4SS_SDK_VRHandControllerWMR_HPP
#define UE4SS_SDK_VRHandControllerWMR_HPP

class AVRHandControllerWMR_C : public AVRHandController_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* SelectionOverlay;
    class UStaticMeshComponent* Dot;
    class UStaticMeshComponent* ThumbstickOverlay;
    FVector Timeline_0_Scale_69F57395492EA92001EF5BB5F775C646;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_69F57395492EA92001EF5BB5F775C646;
    class UTimelineComponent* Timeline_0;
    float MoveRot_Value_248497EA48E70349682968AC5941FFD4;
    TEnumAsByte<ETimelineDirection::Type> MoveRot__Direction_248497EA48E70349682968AC5941FFD4;
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
    void SetSide(TEnumAsByte<hand> Side);
    void SetVisualDot(float X, float Y);
    void ReceiveTick(float DeltaSeconds);
    void SetWorldScale(FVector Scale);
    void ReceiveBeginPlay();
    void SetAlternativeModeActive(bool Active);
    void SetVisible(bool Visible);
    void ExecuteUbergraph_VRHandControllerWMR(int32 EntryPoint);
};

#endif
