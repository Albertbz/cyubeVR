#ifndef UE4SS_SDK_CustomBlockPreviewWidget2_HPP
#define UE4SS_SDK_CustomBlockPreviewWidget2_HPP

class UCustomBlockPreviewWidget2_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Left;
    class UImage* Right;
    class UImage* Top;

    void SetType(int32 ID);
    void Construct();
    void ExecuteUbergraph_CustomBlockPreviewWidget2(int32 EntryPoint);
};

#endif
