class FIR_Zuni_P_4rnd_M: VehicleMagazine
{
    scope=2;
    displayName="[FIR] Zuni FFAR (Mk24/HE/10lb) x4";
    displayNameShort="Zuni FFAR Mk24/HE/10lb";
    descriptionShort="Unguided Folding-Fin Rockets (HE/10lb)";
    displayNameMFDFormat="Mk24 HE";
    hardpoints[]=
    {
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\RocketPod_Dumb_Hardpoints.hpp"
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\zzFIR_AircraftSpecific_Hardpoints_General.hpp"
    };
};
class FIR_Zuni_P_8rnd_M: FIR_Zuni_P_4rnd_M
{
    scope=2;
    displayName="[FIR] Zuni FFAR (Mk24/HE/10lb) x8";
    displayNameShort="Zuni FFAR Mk24/HE/10lb";
    descriptionShort="Unguided Folding-Fin Rockets (HE/10lb)";
    displayNameMFDFormat="Mk24 HE";
    hardpoints[]=
    {
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\RocketPod_Dumb_Hardpoints.hpp"
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\zzFIR_AircraftSpecific_Hardpoints_General.hpp"
    };
};
class FIR_Zuni_Fairing_P_4rnd_M: FIR_Zuni_P_4rnd_M
{
    scope=2;
    displayName="[FIR] Zuni FFAR (Mk24/HE/10lb) x4 (Fairing)";
    displayNameShort="Zuni FFAR Mk24/HE/10lb";
    descriptionShort="Unguided Folding-Fin Rockets (HE/10lb)";
    displayNameMFDFormat="Mk24 HE";
    hardpoints[]=
    {
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\zzFIR_AircraftSpecific_Hardpoints_General.hpp"
    };
};
class FIR_Zuni_Fairing_P_8rnd_M: FIR_Zuni_P_4rnd_M
{
    scope=2;
    displayName="[FIR] Zuni FFAR (Mk24/HE/10lb) x8 (Fairing)";
    displayNameShort="Zuni FFAR Mk24/HE/10lb";
    descriptionShort="Unguided Folding-Fin Rockets (HE/10lb)";
    displayNameMFDFormat="Mk24 HE";
    hardpoints[]=
    {
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\zzFIR_AircraftSpecific_Hardpoints_General.hpp"
    };
};

class FIR_Zuni_F14_P_4rnd_M: FIR_Zuni_P_4rnd_M
{
    scope=2;
    displayName="[FIR] Zuni FFAR (Mk24/HE/10lb) x4 (Fairing)";
    displayNameShort="Zuni FFAR Mk24/HE/10lb";
    descriptionShort="Unguided Folding-Fin Rockets (HE/10lb)";
    displayNameMFDFormat="Mk24 HE";
    hardpoints[]=
    {
        "FIR_F14_SP_HP"
    };
};

class FIR_Zuni_Mk32_P_4rnd_M: VehicleMagazine
{
    scope=2;
    displayName="[FIR] Zuni FFAR (Mk32/HEAT/15lb) x4";
    displayNameShort="Zuni FFAR Mk32/HEAT/15lb";
    descriptionShort="Unguided Folding-Fin Rockets (HEAT/15lb)";
    displayNameMFDFormat="Mk32 HEAT";
    hardpoints[]=
    {
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\RocketPod_Dumb_Hardpoints.hpp"
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\zzFIR_AircraftSpecific_Hardpoints_General.hpp"
    };
};
class FIR_Zuni_Mk32_P_8rnd_M: FIR_Zuni_Mk32_P_4rnd_M
{
    scope=2;
    displayName="[FIR] Zuni FFAR (Mk32/HEAT/15lb) x8";
    displayNameShort="Zuni FFAR Mk32/HEAT/15lb";
    descriptionShort="Unguided Folding-Fin Rockets (HEAT/15lb)";
    displayNameMFDFormat="Mk32 HEAT";
    hardpoints[]=
    {
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\RocketPod_Dumb_Hardpoints.hpp"
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\zzFIR_AircraftSpecific_Hardpoints_General.hpp"
    };
};
class FIR_Zuni_Fairing_Mk32_P_4rnd_M: FIR_Zuni_Mk32_P_4rnd_M
{
    scope=2;
    displayName="[FIR] Zuni FFAR (Mk32/HEAT/15lb) x4 (Fairing)";
    displayNameShort="Zuni FFAR Mk32/HEAT/15lb";
    descriptionShort="Unguided Folding-Fin Rockets (HEAT/15lb)";
    displayNameMFDFormat="Mk32 HEAT";
    hardpoints[]=
    {
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\zzFIR_AircraftSpecific_Hardpoints_General.hpp"
    };
};
class FIR_Zuni_Fairing_Mk32_P_8rnd_M: FIR_Zuni_Mk32_P_4rnd_M
{
    scope=2;
    displayName="[FIR] Zuni FFAR (Mk32/HEAT/15lb) x8 (Fairing)";
    displayNameShort="Zuni FFAR Mk32/HEAT/15lb";
    descriptionShort="Unguided Folding-Fin Rockets (HEAT/15lb)";
    displayNameMFDFormat="Mk32 HEAT";
    hardpoints[]=
    {
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\zzFIR_AircraftSpecific_Hardpoints_General.hpp"
    };
};
class FIR_Zuni_Mk32_F14_P_4rnd_M: FIR_Zuni_Mk32_P_4rnd_M
{
    scope=2;
    displayName="[FIR] Zuni FFAR (Mk32/HEAT/15lb) x4";
    displayNameShort="Zuni FFAR Mk32/HEAT/15lb";
    descriptionShort="Unguided Folding-Fin Rockets (HEAT/15lb)";
    displayNameMFDFormat="Mk32 HEAT";
    hardpoints[]=
    {
        "FIR_F14_SP_HP"
    };
};
class FIR_LZuni_P_4rnd_M: VehicleMagazine
{
    scope=2;
    displayName="[FIR] Zuni-LG FFAR (Mk24/HE/10lb) x4";
    displayNameShort="Zuni-LG FFAR Mk24/HE/10lb";
    descriptionShort="Laser Guided Folding-Fin Rockets (HE/10lb)";
    displayNameMFDFormat="Mk24 HE";
    hardpoints[]=
    {
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\RocketPod_Dumb_Hardpoints.hpp"
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\zzFIR_AircraftSpecific_Hardpoints_General.hpp"
    };
};
class FIR_LZuni_P_8rnd_M: FIR_LZuni_P_4rnd_M
{
    scope=2;
    displayName="[FIR] Zuni-LG FFAR (Mk24/HE/10lb) x8";
    displayNameShort="Zuni-LG FFAR Mk24/HE/10lb";
    descriptionShort="Laser Guided Folding-Fin Rockets (HE/10lb)";
    displayNameMFDFormat="Mk24 HE";
    hardpoints[]=
    {
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\RocketPod_Dumb_Hardpoints.hpp"
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\zzFIR_AircraftSpecific_Hardpoints_General.hpp"
    };
};