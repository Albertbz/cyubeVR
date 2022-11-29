#ifndef UE4SS_SDK_Rejoin_HPP
#define UE4SS_SDK_Rejoin_HPP

#include "Rejoin_enums.hpp"

class URejoinCheck : public UObject
{
    ERejoinStatus LastKnownStatus;
    bool bRejoinAfterCheck;
    bool bAttemptingRejoin;

};

#endif
