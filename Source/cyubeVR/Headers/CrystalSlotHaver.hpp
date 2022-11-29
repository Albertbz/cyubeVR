#ifndef UE4SS_SDK_CrystalSlotHaver_HPP
#define UE4SS_SDK_CrystalSlotHaver_HPP

class ICrystalSlotHaver_C : public IInterface
{

    void RemovedCrystal();
    void CanGrabCrystal(bool& bpp__CanGrab__pf, FColor& bpp__Color__pf, float& bpp__ChargeState__pf);
    void AttachCrystal(FColor bpp__CrystalColor__pf, float bpp__CrystalChargeState__pf, bool& bpp__Attached__pf);
};

#endif
