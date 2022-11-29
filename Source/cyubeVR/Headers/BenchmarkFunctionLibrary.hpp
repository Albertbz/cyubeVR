#ifndef UE4SS_SDK_BenchmarkFunctionLibrary_HPP
#define UE4SS_SDK_BenchmarkFunctionLibrary_HPP

class UBenchmarkFunctionLibrary_C : public UBlueprintFunctionLibrary
{

    void GetBenchmarkVersionNumber(class UObject* __WorldContext, FString& Version);
    void GetHardwareInfoBP(class UObject* __WorldContext, FString& R_HMDName1, FString& R_Resolution1, FString& R_Hz1, FString& R_HFOV1, FString& R_VFOV1, FString& R_PPD1, FString& R_GPUName1, FString& R_VRAM1, FString& R_GPUDriver1, FString& R_CPU1, FString& R_Cores1, FString& R_RAM1, FString& R_OS1, FString& R_SteamVR1, FString& R_Benchmark1);
};

#endif
