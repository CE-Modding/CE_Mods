
class FIR_GBU10_P_1rnd_M: VehicleMagazine
{
    scope=2;
    displayName="[FIR] GBU-10 Paveway II x1";
    displayNameShort="GBU-10 Paveway II";
    descriptionShort="Laser Guided Bomb (2000-lbs)";
    displayNameMFDFormat="GBU-10";
    hardpoints[]=
    {
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\Bomb_2000lbs_Laser_Hardpoints.hpp"
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\zzFIR_AircraftSpecific_Hardpoints_General.hpp"
    };
};
class FIR_GBU10_Navy_P_1rnd_M: FIR_GBU10_P_1rnd_M
{
    scope=2;
    displayName="[FIR] GBU-10 Paveway II (Navy) x1";
    displayNameShort="GBU-10 Paveway II";
    descriptionShort="Laser Guided Bomb [US Navy] (2000-lbs)";
    displayNameMFDFormat="GBU-10";
    hardpoints[]=
    {
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\Bomb_2000lbs_Laser_Hardpoints.hpp"
        "FIR_FA18EF_Combined_HP",
        "FIR_FA18EF_Under_HP",
        "FIR_FA181E_AG_HP",
        "FIR_F35B_Combined_HP",
        "FIR_FA18_Combined_HP",
        "FIR_A6E_AG_HP"
    };
};
class FIR_GBU10_P_F14_1rnd_M: FIR_GBU10_P_1rnd_M
{
    scope=2;
    displayName="[FIR] GBU-10 Paveway II (Navy) x1";
    displayNameShort="GBU-10 Paveway II";
    descriptionShort="Laser Guided Bomb [US Navy] (2000-lbs)";
    displayNameMFDFormat="GBU-10";
    hardpoints[]=
    {
        "FIR_F14_Under_HP"
    };
};

// Hidden bc they are basically useless
class FIR_GBU10_PW1_P_1rnd_M: VehicleMagazine
{
    scope=1;
    scopeArsenal=1;
    hardpoints[]={};
};