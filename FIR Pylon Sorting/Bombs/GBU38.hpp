class FIR_GBU38_P_1rnd_M: VehicleMagazine
{
    scope=2;
    displayName="[FIR] GBU-38 JDAM x1";
    displayNameShort="GBU-38 JDAM";
    descriptionShort="GPS Guided Bomb (500-lbs)";
    displayNameMFDFormat="GBU-38";
    hardpoints[]=
    {
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\Bomb_500lbs_GPS_Hardpoints.hpp"
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\Bomb_500lbs_Dumb_Hardpoints.hpp"
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\zzFIR_AircraftSpecific_Hardpoints_General.hpp"
    };
};
class FIR_GBU38_P_2rnd_M: FIR_GBU38_P_1rnd_M
{
    scope=2;
    displayName="[FIR] GBU-38 JDAM x2";
    displayNameShort="GBU-38 JDAM";
    descriptionShort="GPS Guided Bomb (500-lbs)";
    displayNameMFDFormat="GBU-38";
    hardpoints[]=
    {
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\Bomb_500lbs_GPS_Rack_Hardpoints.hpp"
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\Bomb_500lbs_Dumb_Rack_Hardpoints.hpp"
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\zzFIR_AircraftSpecific_Hardpoints_General.hpp"
    };
};
class FIR_GBU38_P_3rnd_M: FIR_GBU38_P_1rnd_M
{
    scope=2;
    displayName="[FIR] GBU-38 JDAM x3";
    displayNameShort="GBU-38 JDAM";
    descriptionShort="GPS Guided Bomb (500-lbs)";
    displayNameMFDFormat="GBU-38";
    hardpoints[]=
    {
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\Bomb_500lbs_GPS_Rack_Hardpoints.hpp"
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\Bomb_500lbs_Dumb_Rack_Hardpoints.hpp"
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\zzFIR_AircraftSpecific_Hardpoints_General.hpp"
    };
};
class FIR_GBU38_F15SE_P_1rnd_M: FIR_GBU38_P_1rnd_M
{
    scope=2;
    displayName="[FIR] GBU-38 JDAM x1";
    displayNameShort="GBU-38 JDAM";
    descriptionShort="GPS Guided Bomb (500-lbs)";
    displayNameMFDFormat="GBU-38";
    hardpoints[]=
    {
        "FIR_F15SE_Under_HP"
    };
};
class FIR_GBU38_P_EWP_2rnd_M: FIR_GBU38_P_1rnd_M
{
    scope=2;
    displayName="[FIR] GBU-38 JDAM x2 (Enlosed Pod)";
    displayNameShort="GBU-38 JDAM";
    descriptionShort="GPS Guided Bomb (500-lbs)";
    displayNameMFDFormat="GBU-38";
    hardpoints[]=
    {
        "FIR_F22_External_HP"
    };
};
class FIR_GBU38_Navy_P_1rnd_M: FIR_GBU38_P_1rnd_M
{
    scope=2;
    displayName="[FIR] GBU-38 JDAM (Navy) x1";
    displayNameShort="GBU-38 JDAM";
    descriptionShort="GPS Guided Bomb [US Navy] (500-lbs)";
    displayNameMFDFormat="GBU-38";
    hardpoints[]=
    {
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\Bomb_500lbs_GPS_Hardpoints.hpp"
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\Bomb_500lbs_Dumb_Hardpoints.hpp"
        "FIR_FA18EF_Combined_HP",
        "FIR_FA18EF_Under_HP",
        "FIR_FA181E_AG_HP",
        "FIR_F35B_Combined_HP",
        "FIR_FA18_Combined_HP"
    };
};
class FIR_GBU38_Navy_P_2rnd_M: FIR_GBU38_Navy_P_1rnd_M
{
    scope=2;
    displayName="[FIR] GBU-38 JDAM (Navy) x2";
    displayNameShort="GBU-38 JDAM";
    descriptionShort="GPS Guided Bomb [US Navy] (500-lbs)";
    displayNameMFDFormat="GBU-38";
    hardpoints[]=
    {
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\Bomb_500lbs_GPS_Rack_Hardpoints.hpp"
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\Bomb_500lbs_Dumb_Rack_Hardpoints.hpp"
        "FIR_FA18EF_Combined_HP",
        "FIR_FA18EF_Under_HP",
        "FIR_FA181E_AG_HP",
        "FIR_F35B_Combined_HP",
        "FIR_FA18_Combined_HP"
    };
};
class FIR_GBU38_P_F14_1rnd_M: FIR_GBU38_Navy_P_1rnd_M
{
    scope=2;
    displayName="[FIR] GBU-38 JDAM (Navy) x1 (Enclosed Pod)";
    displayNameShort="GBU-38 JDAM";
    descriptionShort="GPS Guided Bomb [US Navy] (500-lbs)";
    displayNameMFDFormat="GBU-38";
    hardpoints[]=
    {
        "FIR_F14_Under_HP"
    };
};
class FIR_GBU38_Navy_EWP_2rnd_M: FIR_GBU38_Navy_P_1rnd_M
{
    scope=2;
    displayName="[FIR] GBU-38 JDAM (Navy) x2 (Enclosed Pod)";
    displayNameShort="GBU-38 JDAM";
    descriptionShort="GPS Guided Bomb [US Navy] (500-lbs)";
    displayNameMFDFormat="GBU-38";
    hardpoints[]=
    {
        "FIR_FA181E_AA_HP",
        "FIR_FA18EF_Under_HP",
        "FIR_F23_EX_Fueltank_HP"
    };
};