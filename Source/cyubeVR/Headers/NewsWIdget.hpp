#ifndef UE4SS_SDK_NewsWIdget_HPP
#define UE4SS_SDK_NewsWIdget_HPP

class UNewsWIdget_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* FadeOut;
    class URetainerBox* RetainerBox_1;
    class UScrollBox* ScrollBox_0;
    class UWebBrowser* WebBrowser_0;
    FNewsWIdget_CClickedOnNameTextBox ClickedOnNameTextBox;
    void ClickedOnNameTextBox();
    FNewsWIdget_CClickedOnStart ClickedOnStart;
    void ClickedOnStart();
    FNewsWIdget_CClickedOnSeedTextBox ClickedOnSeedTextBox;
    void ClickedOnSeedTextBox();
    class UWidgetComponent* ParentActor;
    class UVRStereoWidgetComponent* MainWidgetRef;

    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ResetURL();
    void SetVisibilityCustom(bool Visible);
    void ExecuteUbergraph_NewsWIdget(int32 EntryPoint);
    void ClickedOnSeedTextBox__DelegateSignature();
    void ClickedOnStart__DelegateSignature();
    void ClickedOnNameTextBox__DelegateSignature();
};

#endif
