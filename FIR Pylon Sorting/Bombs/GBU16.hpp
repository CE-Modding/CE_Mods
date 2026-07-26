class FIR_GBU16_Navy_P_1rnd_M: VehicleMagazine
{
    scope=2;
    displayName="[FIR] GBU-16 Paveway II (Navy) x1";
    displayNameShort="GBU-16 Paveway II";
    descriptionShort="Laser Guided Bomb [US Navy] (1000-lbs)";
    displayNameMFDFormat="GBU-16";
    hardpoints[]=
    {
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\Bomb_1000lbs_Laser_Hardpoints.hpp"
        "FIR_FA18EF_Combined_HP",
        "FIR_FA18EF_Under_HP",
        "FIR_FA181E_AG_HP",
        "FIR_F35B_Combined_HP",
        "FIR_FA18_Combined_HP",
        "FIR_A6E_AG_HP"
    };
};
class FIR_GBU16_Navy_P_2rnd_M: FIR_GBU16_Navy_P_1rnd_M
{
    scope=2;
    displayName="[FIR] GBU-16 Paveway II (Navy) x2";
    displayNameShort="GBU-16 Paveway II";
    descriptionShort="Laser Guided Bomb [US Navy] (1000-lbs)";
    displayNameMFDFormat="GBU-16";
    hardpoints[]=
    {
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\Bomb_1000lbs_Laser_Rack_Hardpoints.hpp"
        "FIR_FA18EF_Combined_HP",
        "FIR_FA18EF_Under_HP",
        "FIR_FA181E_AG_HP",
        "FIR_F35B_Combined_HP",
        "FIR_FA18_Combined_HP",
        "FIR_A6E_AG_HP"
    };
};
class FIR_GBU16_Navy_P_F14_1rnd_M: FIR_GBU16_Navy_P_1rnd_M
{
    scope=2;
    displayName="[FIR] GBU-16 Paveway II (Navy) x1";
    displayNameShort="GBU-16 Paveway II";
    descriptionShort="Laser Guided Bomb [US Navy] (1000-lbs)";
    displayNameMFDFormat="GBU-16";
    hardpoints[]=
    {
        "FIR_F14_Under_HP"
    };
};