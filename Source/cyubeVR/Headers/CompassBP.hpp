#ifndef UE4SS_SDK_CompassBP_HPP
#define UE4SS_SDK_CompassBP_HPP

class ACompassBP_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* Cylinder;
    class UStaticMeshComponent* StaticMesh;
    class USceneComponent* HeightNeedle;
    class UStaticMeshComponent* Compass_Ring;
    class UStaticMeshComponent* Compass_Opener;
    class UStaticMeshComponent* Compass_Lens;
    class UStaticMeshComponent* Compass_DirectionNeedle;
    class UStaticMeshComponent* Compass_Cover;
    class UStaticMeshComponent* Compass_Base;
    float AngleLimit;
    FRotator NewFinalRelativeRotation;
    FRotator OldWorldRotation;

    void SetVisible(bool NewVisible);
    void YawToRot(FRotator WorldRot, float rot);
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void SetHeightRot();
    void SetRot();
    void ExecuteUbergraph_CompassBP(int32 EntryPoint);
};

#endif
