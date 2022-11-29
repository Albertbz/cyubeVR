#ifndef UE4SS_SDK_PointerWidget_HPP
#define UE4SS_SDK_PointerWidget_HPP

class UPointerWidget_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Image_0;

    void Construct();
    void ExecuteUbergraph_PointerWidget(int32 EntryPoint);
};

#endif
