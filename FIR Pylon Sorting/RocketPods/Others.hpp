class FIR_Poniard_P_7rnd_M: VehicleMagazine
{
    scope=2;
    displayName="[FIR] Poniard (LOGIR/HE/9lb) x7";
    displayNameShort="Poniard LOGIR/HE/9lb";
    descriptionShort="IR Guided Fin-Stabilized Rockets (HE/9lb)";
    displayNameMFDFormat="LOGIR HE";
    hardpoints[]=
    {
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\RocketPod_Laser_Hardpoints.hpp"
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\zzFIR_AircraftSpecific_Hardpoints_General.hpp"
    };
};
class FIR_CRV7_P_19rnd_M: VehicleMagazine
{
    scope=2;
    displayName="[FIR] CRV7 (HEDP/10lb) x19";
    displayNameShort="CRV7 HEDP/10lb";
    descriptionShort="Unguided Fin-Stabilized Rockets (HEDP/10lb)";
    displayNameMFDFormat="CRV7 HEDP";
    hardpoints[]=
    {
        "FIR_AV8B_GR_AG_HP",
        "FIR_F35B_Combined_HP",
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\RocketPod_Dumb_Hardpoints.hpp"
    };
};