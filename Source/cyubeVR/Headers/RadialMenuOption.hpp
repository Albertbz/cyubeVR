#ifndef UE4SS_SDK_RadialMenuOption_HPP
#define UE4SS_SDK_RadialMenuOption_HPP

class ARadialMenuOption_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* Front;
    class UStaticMeshComponent* Back;
    class USceneComponent* DefaultSceneRoot;
    float FadeOutUnselectedTimeline_Opacity_60F3787A4B8AFFA1248E579D59174A0B;
    TEnumAsByte<ETimelineDirection::Type> FadeOutUnselectedTimeline__Direction_60F3787A4B8AFFA1248E579D59174A0B;
    class UTimelineComponent* FadeOutUnselectedTimeline;
    float FadeInTimeline_Opacity_6D82F9A74D872B1879FDA698293E0EAC;
    TEnumAsByte<ETimelineDirection::Type> FadeInTimeline__Direction_6D82F9A74D872B1879FDA698293E0EAC;
    class UTimelineComponent* FadeInTimeline;
    float FadeOutTimeline_CustomTime_52A585AB4EF62D0075362CBC7223AF55;
    float FadeOutTimeline_Opacity_52A585AB4EF62D0075362CBC7223AF55;
    TEnumAsByte<ETimelineDirection::Type> FadeOutTimeline__Direction_52A585AB4EF62D0075362CBC7223AF55;
    class UTimelineComponent* FadeOutTimeline;
    FLinearColor Color;
    class UTexture2D* ItemTexture;
    FTimerHandle HideAfterAnimationTimer;
    int32 Slot;
    class UMaterialInstanceDynamic* DMIFront;
    class UMaterialInstanceDynamic* DMIBack;
    bool CurrentlyValid;
    bool CurrentlyAlreadySelected;
    bool IsReal;
    bool IsTool;

    void SetType(int32 Slot, int32 UniqueId, EBlockTypeBP Type, bool IsReal, bool IsRightHand);
    void UserConstructionScript();
    void FadeOutTimeline__FinishedFunc();
    void FadeOutTimeline__UpdateFunc();
    void FadeInTimeline__FinishedFunc();
    void FadeInTimeline__UpdateFunc();
    void FadeOutUnselectedTimeline__FinishedFunc();
    void FadeOutUnselectedTimeline__UpdateFunc();
    void SetSelected(bool Selected);
    void PlaySelectedSuccessfullAnimation();
    void SetColor(const FVector ParameterValue);
    void HideSelected();
    void MakeVisible();
    void FadeOutSelected();
    void StopAnimation();
    void SetOpacityMultiplierFull(const float ParameterValue);
    void FadeIn();
    void StopAnimationFadeIn();
    void SetOpacityParameterFadeIn(const float ParameterValue);
    void FadeOutUnselected();
    void HideUnselected();
    void SetCustomTime(const float ParameterValue);
    void ExecuteUbergraph_RadialMenuOption(int32 EntryPoint);
};

#endif
