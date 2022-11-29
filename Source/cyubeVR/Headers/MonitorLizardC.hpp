#ifndef UE4SS_SDK_MonitorLizardC_HPP
#define UE4SS_SDK_MonitorLizardC_HPP

class AMonitorLizardC_C : public ADeerC_C
{
    class USkeletalMeshComponent* Tongue;
    float Scale;
    FVector FinalScale;
    bool K2Node_Event_Enabled;
    FVector K2Node_Event_Location;
    FVector K2Node_Event_Impulse;
    FName K2Node_Event_BoneName;

};

#endif
