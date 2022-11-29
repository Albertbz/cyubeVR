#ifndef UE4SS_SDK_RadialMenu_HPP
#define UE4SS_SDK_RadialMenu_HPP

class ARadialMenu_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UInstancedStaticMeshComponent* ArrowsBack;
    class UInstancedStaticMeshComponent* Arrows;
    class UChildActorComponent* RadialMenuOption8;
    class UChildActorComponent* RadialMenuOption7;
    class UChildActorComponent* RadialMenuOption6;
    class UChildActorComponent* RadialMenuOption5;
    class UChildActorComponent* RadialMenuOption4;
    class UChildActorComponent* RadialMenuOption3;
    class UChildActorComponent* RadialMenuOption2;
    class UChildActorComponent* RadialMenuOption1;
    class UChildActorComponent* RadialMenuOptionCenter;
    class USceneComponent* DefaultSceneRoot;
    float ArrowAnimationFaster_Opacity_0800D8B54E00B6BB3B574E8E2ED7D463;
    float ArrowAnimationFaster_Scale_0800D8B54E00B6BB3B574E8E2ED7D463;
    TEnumAsByte<ETimelineDirection::Type> ArrowAnimationFaster__Direction_0800D8B54E00B6BB3B574E8E2ED7D463;
    class UTimelineComponent* ArrowAnimationFaster;
    float ArrowAnimation_Time_08F12CDE4473A09E579A7DB2B1FE4921;
    float ArrowAnimation_Opacity_08F12CDE4473A09E579A7DB2B1FE4921;
    float ArrowAnimation_Scale_08F12CDE4473A09E579A7DB2B1FE4921;
    TEnumAsByte<ETimelineDirection::Type> ArrowAnimation__Direction_08F12CDE4473A09E579A7DB2B1FE4921;
    class UTimelineComponent* ArrowAnimation;
    TArray<class UChildActorComponent*> Options;
    TArray<class ARadialMenuOption_C*> OptionsDirect;
    float OptionScale;
    float OptionDistance;
    float ArrowDistance;
    float ArrowScale;
    class USceneComponent* Hand to Track;
    FVector OriginalLocation;
    float HowCloseToSelect;
    TArray<class ARadialMenuOption_C*> AllOptions;
    class ARadialMenuOption_C* CurrentHoverSelected;
    bool CurrentlyActive;
    class AInventoryBP_C* InventoryBP;
    bool NotYetMovedAfterOpening;
    int32 PreviousSelection;
    int32 CurrentSelection;
    bool IsRightHand;
    int32 LastBlockSelection;
    int32 LastToolSelection;
    float LastSelectedFromHand;
    bool SomethingChangedSinceLastOpen;
    FTimerHandle DetachTimer;

    void ShoulderSlotSelected();
    void MoveUpOrDownSameType(int32 Move);
    void UpdateOptionLocations();
    void SetArrowVisible(int32 Index, bool Visible);
    void Refresh(int32 DroppedOnSlot);
    void UserConstructionScript();
    void ArrowAnimation__FinishedFunc();
    void ArrowAnimation__UpdateFunc();
    void ArrowAnimationFaster__FinishedFunc();
    void ArrowAnimationFaster__UpdateFunc();
    void ReceiveTick(float DeltaSeconds);
    void OpenRadialMenu();
    void Initialize(class USceneComponent* HandToTrack, class AInventoryBP_C* Inventory);
    void CloseRadialMenu();
    void UpdateRotation(bool Immediate);
    void CheckOverlaps();
    void SetOptionSelected(class ARadialMenuOption_C* Option, bool Always);
    void ReceiveBeginPlay();
    void MakeVisible();
    void Hide();
    void FadeInArrows();
    void SetArrowOpacity(const float ParameterValue);
    void FadeOutArrows();
    void ToggleHandAndPreviousSelection();
    void PlayHapticFeedback();
    void PressedTrigger();
    void DetachFromPawn();
    void ExecuteUbergraph_RadialMenu(int32 EntryPoint);
};

#endif
