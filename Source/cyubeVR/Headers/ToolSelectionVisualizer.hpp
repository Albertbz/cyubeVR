#ifndef UE4SS_SDK_ToolSelectionVisualizer_HPP
#define UE4SS_SDK_ToolSelectionVisualizer_HPP

class UToolSelectionVisualizer_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* FadeIn;
    class UBorder* Border1;
    class UBorder* Border2;
    class UBorder* Border3;
    class UBorder* Border4;
    class UBorder* BorderUppest;
    class UItem_C* Item;
    class UItem_C* Item_0;
    class UItem_C* Item_1;
    class UItem_C* Item_2;
    class UImage* Marker;
    TArray<class UItem_C*> ItemArray;
    bool CurrentVisible;
    TArray<class UBorder*> Borders;
    bool MaybeInvisible;
    FTimerHandle SetInvisibleTimerHandle;

    void SetMarker(float Value);
    void Construct();
    void SetVisible(bool NewVisible);
    void SetFalseMaybe();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void SetInvisible();
    void ExecuteUbergraph_ToolSelectionVisualizer(int32 EntryPoint);
};

#endif
