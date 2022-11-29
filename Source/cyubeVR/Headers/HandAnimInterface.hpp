#ifndef UE4SS_SDK_HandAnimInterface_HPP
#define UE4SS_SDK_HandAnimInterface_HPP

class IHandAnimInterface_C : public IInterface
{

    void SetSqueeze(float Value);
    void SetGripType(TEnumAsByte<HandPoseEnum> Value);
    void SetGripState(TEnumAsByte<GripEnum> Value);
    void SetHandType(EControllerHand Value);
};

#endif
