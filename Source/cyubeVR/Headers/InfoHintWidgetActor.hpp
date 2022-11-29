#ifndef UE4SS_SDK_InfoHintWidgetActor_HPP
#define UE4SS_SDK_InfoHintWidgetActor_HPP

class AInfoHintWidgetActor_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetComponent* Widget;
    class USceneComponent* DefaultSceneRoot;
    float FadeOut_NewTrack_0_85FC37284DC76F289BAAFEB7A3ECC3FE;
    TEnumAsByte<ETimelineDirection::Type> FadeOut__Direction_85FC37284DC76F289BAAFEB7A3ECC3FE;
    class UTimelineComponent* FadeOut;
    float LocationTimeline_Z_21AD4437426D56BAC964DDBCE7F511BC;
    TEnumAsByte<ETimelineDirection::Type> LocationTimeline__Direction_21AD4437426D56BAC964DDBCE7F511BC;
    class UTimelineComponent* LocationTimeline;
    FString TextToDisplay;
    float LifeTime;
    float SizeMultiplierVertical;
    FUID UID;
    float FontSizeMultiplier;

    void LocationTimeline__FinishedFunc();
    void LocationTimeline__UpdateFunc();
    void FadeOut__FinishedFunc();
    void FadeOut__UpdateFunc();
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_InfoHintWidgetActor(int32 EntryPoint);
};

#endif
