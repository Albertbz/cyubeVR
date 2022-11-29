#ifndef UE4SS_SDK_VRHandController_HPP
#define UE4SS_SDK_VRHandController_HPP

class AVRHandController_C : public AReceiveLightActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* ControllerMesh;
    class USceneComponent* Scene;
    class USphereComponent* Controller_Overlap;
    class UBoxComponent* SimulatePhysicsBox;
    class AFirstPersonCharacterVR_C* ParentCharacter;
    TEnumAsByte<hand> Side;
    FVector OriginalOffset;
    FRotator OriginalOffsetRot;

    void SetVisible(bool Visible);
    void SetAlternativeModeActive(bool Active);
    void Init(class AFirstPersonCharacterVR_C* Parent, TEnumAsByte<hand> Side);
    void SetSide(TEnumAsByte<hand> Side);
    void UserConstructionScript();
    void SetWorldScale(FVector Scale);
    void SetVisibility(bool Visible);
    void ExecuteUbergraph_VRHandController(int32 EntryPoint);
};

#endif
