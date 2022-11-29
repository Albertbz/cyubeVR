#ifndef UE4SS_SDK_MainMenuRazerCortexWarning_HPP
#define UE4SS_SDK_MainMenuRazerCortexWarning_HPP

class UMainMenuRazerCortexWarning_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* WidgetSwitcherChange;
    class UWidgetAnimation* FlyInBorder;
    class UWidgetAnimation* FlyIn;
    class UImage* Image_133;
    class UMainMenuButton_C* MainMenuButton;
    class AActor* Parent;

    void BndEvt__MainMenuButton_K2Node_ComponentBoundEvent_360_Pressed__DelegateSignature();
    void ExecuteUbergraph_MainMenuRazerCortexWarning(int32 EntryPoint);
};

#endif
