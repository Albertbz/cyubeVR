#ifndef UE4SS_SDK_CraftRoom_HPP
#define UE4SS_SDK_CraftRoom_HPP

class ACraftRoom_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UChildActorComponent* VRButton;
    class UChildActorComponent* Converter3;
    class UChildActorComponent* Converter2;
    class UChildActorComponent* Converter;
    class UStaticMeshComponent* StaticMesh2;
    class UStaticMeshComponent* SM_Fern_021;
    class UStaticMeshComponent* SM_Fern_03;
    class UStaticMeshComponent* SM_Vegetation_Debris_002;
    class UStaticMeshComponent* StaticMesh1;
    class UStaticMeshComponent* StaticMesh;
    class UStaticMeshComponent* SM_Fern_02;
    class UParticleSystemComponent* P_Ambient_Dust;
    class UWidgetComponent* Widget2;
    class UWidgetComponent* Widget1;
    class UChildActorComponent* ChildActor1;
    class UChildActorComponent* ChildActor;
    class UBoxComponent* Box;
    class UWidgetComponent* Widget;
    class UChildActorComponent* InventoryActor;
    class UStaticMeshComponent* Cube1;
    class UArrowComponent* CraftCubeLocation;
    class UPointLightComponent* PointLight;
    class UStaticMeshComponent* Cube;
    class USceneComponent* DefaultSceneRoot;
    TArray<FVector> Locations;
    float Distance;
    TArray<class UStaticMeshComponent*> OverlapComponents;
    TArray<class ABlockItemVisual_C*> AttachedItems;
    TArray<uint8> AttachedTypes;

    void Initialize();
    void DetachItem(class ABlockItemVisual_C* Item);
    void HandReleased(class UStaticMeshComponent* OverlapComponent, class ABlockItemVisual_C* HandAttachedItem, EControllerHand Side);
    void HandEndOverlap(class UStaticMeshComponent* SMC);
    void HandOverlap(class UStaticMeshComponent* SMC, TEnumAsByte<hand> hand);
    void ReceiveBeginPlay();
    void Clear();
    void ExecuteUbergraph_CraftRoom(int32 EntryPoint);
};

#endif
