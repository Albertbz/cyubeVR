#ifndef UE4SS_SDK_TutorialWIdget_HPP
#define UE4SS_SDK_TutorialWIdget_HPP

class UTutorialWIdget_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UMainMenuButton_C* ButtonBack;
    class UMainMenuButton_C* ButtonNext;
    class UImage* CurrentImage;
    class UProgressBar* ProgressBar_0;
    class UWidgetComponent* ParentActor;
    bool NewVar_0;
    int32 CurrentIndex;
    TArray<class UObject*> TutorialCards;
    FTutorialWIdget_CTutorialFinished TutorialFinished;
    void TutorialFinished();
    float NextProgress;
    int32 MaximumIndexSeen;

    void UpdateImage();
    void BndEvt__MainMenuButton_0_K2Node_ComponentBoundEvent_5_Pressed__DelegateSignature();
    void UpdateButtons();
    void BndEvt__ButtonBack_K2Node_ComponentBoundEvent_26_Pressed__DelegateSignature();
    void Construct();
    void StartTimeline();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void UnlockAll();
    void InitializeTutorial();
    void ExecuteUbergraph_TutorialWIdget(int32 EntryPoint);
    void TutorialFinished__DelegateSignature();
};

#endif
