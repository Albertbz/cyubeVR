#ifndef UE4SS_SDK_SHISMC_HPP
#define UE4SS_SDK_SHISMC_HPP

class USHISMC_C : public USceneComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMesh* Mesh;
    int32 InstanceID;

    void SetVisibleState(bool Visible);
    void ExecuteUbergraph_SHISMC(int32 EntryPoint);
};

#endif
