class FIR_GBU31_P_1rnd_M: VehicleMagazine
{
    scope=2;
    displayName="[FIR] GBU-31 JDAM x1";
    displayNameShort="GBU-31 JDAM";
    descriptionShort="GPS Guided Bomb (2000-lbs)";
    displayNameMFDFormat="GBU-31";
    hardpoints[]=
    {
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\Bomb_2000lbs_GPS_Hardpoints.hpp"
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\Bomb_2000lbs_Dumb_Hardpoints.hpp"
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\zzFIR_AircraftSpecific_Hardpoints_General.hpp"
    };
};
class FIR_GBU31_Navy_P_1rnd_M: FIR_GBU31_P_1rnd_M
{
    scope=2;
    displayName="[FIR] GBU-31 JDAM (Navy) x1";
    displayNameShort="GBU-31 JDAM";
    descriptionShort="GPS Guided Bomb [US Navy] (2000-lbs)";
    displayNameMFDFormat="GBU-31";
    hardpoints[]=
    {
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\Bomb_2000lbs_GPS_Hardpoints.hpp"
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\Bomb_2000lbs_Dumb_Hardpoints.hpp"
        "FIR_FA18EF_Combined_HP",
        "FIR_FA18EF_Under_HP",
        "FIR_FA181E_AG_HP",
        "FIR_F35B_Combined_HP",
        "FIR_FA18_Combined_HP"
    };
};
class FIR_GBU31_P_F14_1rnd_M: FIR_GBU31_Navy_P_1rnd_M
{
    scope=2;
    displayName="[FIR] GBU-31 JDAM (Navy) x1";
    displayNameShort="GBU-31 JDAM";
    descriptionShort="GPS Guided Bomb [US Navy] (2000-lbs)";
    displayNameMFDFormat="GBU-31";
    hardpoints[]=
    {
        "FIR_F14_Under_HP"
    };
};
class FIR_GBU31_EWP_1rnd_M: FIR_GBU31_Navy_P_1rnd_M
{
    scope=2;
    displayName="[FIR] GBU-31 JDAM x1 (Enclosed Pod)";
    displayNameShort="GBU-31 JDAM";
    descriptionShort="GPS Guided Bomb (2000-lbs)";
    displayNameMFDFormat="GBU-31";
    hardpoints[]=
    {
        "FIR_F22_External_HP"
    };
};
class FIR_GBU31_P_EWP_1rnd_M: FIR_GBU31_P_1rnd_M
{
    scope=2;
    displayName="[FIR] GBU-31 JDAM x1 (Enclosed Pod)";
    displayNameShort="GBU-31 JDAM";
    descriptionShort="GPS Guided Bomb (2000-lbs)";
    displayNameMFDFormat="GBU-31";
    hardpoints[]=
    {
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\zzFIR_AircraftSpecific_Hardpoints_General.hpp"
    };
};
class FIR_GBU31_BLU109_P_1rnd_M: VehicleMagazine
{
    scope=2;
    displayName="[FIR] GBU-31 JDAM x1 (BLU-109)";
    displayNameShort="GBU-31 JDAM (BLU-109)";
    descriptionShort="GPS Guided High-Explosive-Concrete-Piercing Bomb (2000-lbs)";
    displayNameMFDFormat="GBU-31 BLU-109";
    hardpoints[]=
    {
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\zzFIR_AircraftSpecific_Hardpoints_General.hpp"
    };
};
class FIR_GBU31_BLU109_P_F14_1rnd_M: FIR_GBU31_BLU109_P_1rnd_M
{
    scope=2;
    displayName="[FIR] GBU-31 JDAM x1 (BLU-109)";
    displayNameShort="GBU-31 JDAM (BLU-109)";
    descriptionShort="GPS Guided High-Explosive-Concrete-Piercing Bomb (2000-lbs)";
    displayNameMFDFormat="GBU-31 BLU-109";
    hardpoints[]=
    {
        "FIR_F14_Under_HP"
    };
};
class FIR_GBU31_BLU109_P_EWP_1rnd_M: FIR_GBU31_BLU109_P_1rnd_M
{
    scope=2;
    displayName="[FIR] GBU-31 JDAM x1 (BLU-109/Enclosed Pod)";
    displayNameShort="GBU-31 JDAM (BLU-109)";
    descriptionShort="GPS Guided High-Explosive-Concrete-Piercing Bomb (2000-lbs)";
    displayNameMFDFormat="GBU-31 BLU-109";
    hardpoints[]=
    {
        "FIR_F22_External_HP"
    };
};

