#ifndef UE4SS_SDK_DeleteStuff_HPP
#define UE4SS_SDK_DeleteStuff_HPP

class UDeleteStuff_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UButton* Button_0;
    class UImage* Image_0;
    class UProgressBar* ProgressBar_0;
    bool DeleteUnlocked;

    bool OnDrop(FGeometry MyGeometry, FPointerEvent PointerEvent, class UDragDropOperation* Operation);
    bool OnDragOver(FGeometry MyGeometry, FPointerEvent PointerEvent, class UDragDropOperation* Operation);
    void OnMouseEnter(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void OnDragEnter(FGeometry MyGeometry, FPointerEvent PointerEvent, class UDragDropOperation* Operation);
    void OnDragLeave(FPointerEvent PointerEvent, class UDragDropOperation* Operation);
    void OnMouseLeave(const FPointerEvent& MouseEvent);
    void ExecuteUbergraph_DeleteStuff(int32 EntryPoint);
};

#endif
