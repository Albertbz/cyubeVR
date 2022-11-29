#ifndef UE4SS_SDK_TelekinesisActor_HPP
#define UE4SS_SDK_TelekinesisActor_HPP

class ATelekinesisActor_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* TargetSphere;
    class UArrowComponent* EndLocation;
    class UArrowComponent* StartLocation;
    class USplineMeshComponent* SplineMesh;
    class USceneComponent* DefaultSceneRoot;
    EHand hand;
    class AFirstPersonCharacterVR_C* ParentCharacter;
    bool CurrentlyActive;
    bool CurrentlyGrabbingObject;
    class AActor* CurrentTarget;
    class UPrimitiveComponent* TargetSimulatingComponent;
    float MaxTelekinesisDistance;

    void MoveActiveObject();
    void Rebuild();
    void DoTrace();
    void UserConstructionScript();
    void UpdateLocation();
    void Init(EHand hand, class AFirstPersonCharacterVR_C* ParentCharacter);
    void ReceiveBeginPlay();
    void ToggleTelekinesisOnObject(TEnumAsByte<hand> hand);
    void Activate();
    void ReceiveTick(float DeltaSeconds);
    void Deactivate();
    void DisableTelekinesisOnObject(TEnumAsByte<hand> hand);
    void ExecuteUbergraph_TelekinesisActor(int32 EntryPoint);
};

#endif
