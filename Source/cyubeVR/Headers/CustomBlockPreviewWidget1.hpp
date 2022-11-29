#ifndef UE4SS_SDK_CustomBlockPreviewWidget1_HPP
#define UE4SS_SDK_CustomBlockPreviewWidget1_HPP

class UCustomBlockPreviewWidget1_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Left;
    class UImage* Right;
    class UImage* Top;

    void SetType(int32 ID);
    void Construct();
    void ExecuteUbergraph_CustomBlockPreviewWidget1(int32 EntryPoint);
};

#endif
