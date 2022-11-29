#ifndef UE4SS_SDK_IngotMoldBP_HPP
#define UE4SS_SDK_IngotMoldBP_HPP

class AIngotMoldBP_C : public AMeshObject
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* Furnace_IngotMold_GameRes_Edit;

    void UserConstructionScript();
    void ReceiveBeginPlay();
    void CheckFurnace();
    void ExecuteUbergraph_IngotMoldBP(int32 EntryPoint);
};

#endif
