#ifndef UE4SS_SDK_CustomBlockPreviewWidget_HPP
#define UE4SS_SDK_CustomBlockPreviewWidget_HPP

class UCustomBlockPreviewWidget_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Left;
    class UImage* Right;
    class UImage* Top;

    void SetType(int32 ID);
    void Construct();
    void ExecuteUbergraph_CustomBlockPreviewWidget(int32 EntryPoint);
};

#endif
