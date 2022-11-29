#ifndef UE4SS_SDK_TorchBP_Standing_HPP
#define UE4SS_SDK_TorchBP_Standing_HPP

class ATorchBP_Standing_C : public ATorchBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;

    void SetTrans();
    void SetCenterTorchVisible(bool Visible);
    void ExecuteUbergraph_TorchBP_Standing(int32 EntryPoint);
};

#endif
