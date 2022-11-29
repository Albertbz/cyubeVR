#ifndef UE4SS_SDK_BP_AttachedRain_Snow_HPP
#define UE4SS_SDK_BP_AttachedRain_Snow_HPP

class ABP_AttachedRain_Snow_C : public ABP_AttachedRain_C
{
    FPointerToUberGraphFrame UberGraphFrame;

    void ReceiveBeginPlay();
    void FadeMatBack(class AWeatherManagerBP_C* WeatherManager);
    void ExecuteUbergraph_BP_AttachedRain_Snow(int32 EntryPoint);
};

#endif
