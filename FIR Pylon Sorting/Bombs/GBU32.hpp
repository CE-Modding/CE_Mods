class FIR_GBU32_P_1rnd_M: VehicleMagazine
{
    scope=2;
    displayName="[FIR] GBU-32 JDAM x1";
    displayNameShort="GBU-32 JDAM III";
    descriptionShort="Laser Guided Bomb (1000-lbs)";
    displayNameMFDFormat="GBU-32";
    hardpoints[]=
    {
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\Bomb_1000lbs_Laser_Hardpoints.hpp"
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\Bomb_1000lbs_Dumb_Hardpoints.hpp"
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\zzFIR_AircraftSpecific_Hardpoints_General.hpp"
    };
};
class FIR_GBU32_F15SE_P_1rnd_M: FIR_GBU32_P_1rnd_M
{
    scope=2;
    displayName="[FIR] GBU-32 JDAM x1";
    displayNameShort="GBU-32 JDAM III";
    descriptionShort="Laser Guided Bomb (1000-lbs)";
    displayNameMFDFormat="GBU-32";
    hardpoints[]=
    {
        "FIR_F15SE_Under_HP"
    };
};
class FIR_GBU32_P_EWP_1rnd_M: FIR_GBU32_P_1rnd_M
{
    scope=2;
    displayName="[FIR] GBU-32 JDAM x1 (Enclosed Pod)";
    displayNameShort="GBU-32 JDAM III";
    descriptionShort="Laser Guided Bomb (1000-lbs)";
    displayNameMFDFormat="GBU-32";
    hardpoints[]=
    {
       "FIR_F22_External_HP"
    };
};
class FIR_GBU32_Navy_P_1rnd_M: FIR_GBU32_P_1rnd_M
{
    scope=2;
    displayName="[FIR] GBU-32 JDAM (Navy) x1";
    displayNameShort="GBU-32 JDAM III";
    descriptionShort="Laser Guided Bomb [US Navy] (1000-lbs)";
    displayNameMFDFormat="GBU-32";
    hardpoints[]=
    {
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\Bomb_1000lbs_Laser_Hardpoints.hpp"
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\Bomb_1000lbs_Dumb_Hardpoints.hpp"
        "FIR_FA18EF_Combined_HP",
        "FIR_FA18EF_Under_HP",
        "FIR_FA181E_AG_HP",
        "FIR_F35B_Combined_HP",
        "FIR_FA18_Combined_HP",
        "FIR_MQ81_WEP_HP"
    };
};
class FIR_GBU32_Navy_EWP_1rnd_M: FIR_GBU32_Navy_P_1rnd_M
{
    scope=2;
    displayName="[FIR] GBU-32 JDAM (Navy) x1 (Enlosed Pod)";
    displayNameShort="GBU-32 JDAM III";
    descriptionShort="Laser Guided Bomb [US Navy] (1000-lbs)";
    displayNameMFDFormat="GBU-32";
    hardpoints[]=
    {
        "FIR_FA181E_AA_HP",
        "FIR_FA18EF_Under_HP",
        "FIR_F23_EX_Fueltank_HP"
    };
};
class FIR_GBU32_Navy_P_F14_1rnd_M: FIR_GBU32_Navy_P_1rnd_M
{
    scope=2;
    displayName="[FIR] GBU-32 JDAM (Navy) x1 (Enlosed Pod)";
    displayNameShort="GBU-32 JDAM III";
    descriptionShort="Laser Guided Bomb [US Navy] (1000-lbs)";
    displayNameMFDFormat="GBU-32";
    hardpoints[]=
    {
        "FIR_F14D_Under_HP",
        "FIR_F14B_Under_HP"
    };
};
class FIR_GBU32_Navy_P_2rnd_M: FIR_GBU32_Navy_P_1rnd_M
{
    scope=2;
    displayName="[FIR] GBU-32 JDAM (Navy) x2";
    displayNameShort="GBU-32 JDAM III";
    descriptionShort="Laser Guided Bomb [US Navy] (1000-lbs)";
    displayNameMFDFormat="GBU-32";
    hardpoints[]=
    {
		#include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\Bomb_1000lbs_Dumb_Rack_Hardpoints.hpp"
		#include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\Bomb_1000lbs_Laser_Rack_Hardpoints.hpp"
        "FIR_FA18EF_Combined_HP",
        "FIR_FA18EF_Under_HP",
        "FIR_FA181E_AG_HP",
        "FIR_F35B_Combined_HP",
        "FIR_FA18_Combined_HP",
        "FIR_MQ81_WEP_HP"
    };
};