#ifndef UE4SS_SDK_PointerTargetWidget_HPP
#define UE4SS_SDK_PointerTargetWidget_HPP

class UPointerTargetWidget_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Image_0;

    void Construct();
    void ExecuteUbergraph_PointerTargetWidget(int32 EntryPoint);
};

#endif
