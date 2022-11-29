#ifndef UE4SS_SDK_GeckoC_HPP
#define UE4SS_SDK_GeckoC_HPP

class AGeckoC_C : public ARabbitC_C
{
    bool HasGlow;
    bool IsGrabbed;
    hand GrabbedByHand;
    FTimerHandle VibrationTimer;
    ESteamVRHand Temp_byte_Variable;
    float CallFunc_BreakColor_R;
    float CallFunc_BreakColor_G;
    float CallFunc_BreakColor_B;
    float CallFunc_BreakColor_A;
    float CallFunc_BreakColor_R_1;
    float CallFunc_BreakColor_G_1;
    float CallFunc_BreakColor_B_1;
    float CallFunc_BreakColor_A_1;
    ESteamVRHand Temp_byte_Variable_1;
    hand Temp_byte_Variable_2;
    ESteamVRHand K2Node_Select_Default;

    void SetRandomColor();
    void PlayGrabbedForceFeedback();
    void GenerateRandomColor();
};

#endif
