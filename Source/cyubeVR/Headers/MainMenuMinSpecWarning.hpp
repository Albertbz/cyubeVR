#ifndef UE4SS_SDK_MainMenuMinSpecWarning_HPP
#define UE4SS_SDK_MainMenuMinSpecWarning_HPP

class UMainMenuMinSpecWarning_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* WidgetSwitcherChange;
    class UWidgetAnimation* FlyInBorder;
    class UWidgetAnimation* FlyIn;
    class UMainMenuButton_C* MainMenuButton;
    class AActor* Parent;

    void BndEvt__MainMenuButton_K2Node_ComponentBoundEvent_360_Pressed__DelegateSignature();
    void ExecuteUbergraph_MainMenuMinSpecWarning(int32 EntryPoint);
};

#endif
