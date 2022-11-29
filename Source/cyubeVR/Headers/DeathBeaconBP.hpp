#ifndef UE4SS_SDK_DeathBeaconBP_HPP
#define UE4SS_SDK_DeathBeaconBP_HPP

class ADeathBeaconBP_C : public ADeathBeacon
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* Cylinder;
    class USceneComponent* DefaultSceneRoot;

    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_DeathBeaconBP(int32 EntryPoint);
};

#endif
