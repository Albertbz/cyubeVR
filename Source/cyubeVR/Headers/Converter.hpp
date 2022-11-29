#ifndef UE4SS_SDK_Converter_HPP
#define UE4SS_SDK_Converter_HPP

class AConverter_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* PreviewMesh;
    class UStaticMeshComponent* StaticMesh2;
    class UStaticMeshComponent* StaticMesh1;
    class UStaticMeshComponent* StaticMesh;
    class UStaticMeshComponent* Cylinder1;
    class UStaticMeshComponent* Cylinder;
    class USceneComponent* DefaultSceneRoot;
    TEnumAsByte<ItemType> ConvertTo;

    void Init(TEnumAsByte<ItemType> ConvertTo);
    void BndEvt__Cylinder_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void ExecuteUbergraph_Converter(int32 EntryPoint);
};

#endif
