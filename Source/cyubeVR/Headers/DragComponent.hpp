#ifndef UE4SS_SDK_DragComponent_HPP
#define UE4SS_SDK_DragComponent_HPP

class UDragComponent_C : public UActorComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* OverlapMesh;
    bool DragOngoing;
    bool DragFree;
    FVector DragStartCenter;
    FVector DragStartXVector;
    FVector DragStartActorLocation;
    float DragStartActorYaw;
    FVector DragStartLeftController;
    FVector DragStartRightController;
    FVector DragCenterLastFrame;
    FTransform TargetTransform;
    FDragComponent_CDragActivated DragActivated;
    void DragActivated();

    void DoDrag();
    void CheckBothHandGrab();
    void ReceiveTick(float DeltaSeconds);
    void Init(class UStaticMeshComponent* OverlapMesh);
    void DoLerp();
    void ExecuteUbergraph_DragComponent(int32 EntryPoint);
    void DragActivated__DelegateSignature();
};

#endif
