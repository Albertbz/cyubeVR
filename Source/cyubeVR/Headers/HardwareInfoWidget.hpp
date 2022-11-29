#ifndef UE4SS_SDK_HardwareInfoWidget_HPP
#define UE4SS_SDK_HardwareInfoWidget_HPP

class UHardwareInfoWidget_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UInfoData_C* InfoData_Benchmark;
    class UInfoData_C* InfoData_Cores;
    class UInfoData_C* InfoData_CPU;
    class UInfoData_C* InfoData_Driver;
    class UInfoData_C* InfoData_FOVH;
    class UInfoData_C* InfoData_FOVV;
    class UInfoData_C* InfoData_GPU;
    class UInfoData_C* InfoData_HMDName;
    class UInfoData_C* InfoData_Hz;
    class UInfoData_C* InfoData_OS;
    class UInfoData_C* InfoData_PPD;
    class UInfoData_C* InfoData_RAM;
    class UInfoData_C* InfoData_Res;
    class UInfoData_C* InfoData_SteamVR;
    class UInfoData_C* InfoData_VRAM;
    int32 FontSize;
    FMargin TextPadding;

    void GetCPUName(FText& Name);
    void SetInfo();
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_HardwareInfoWidget(int32 EntryPoint);
};

#endif
