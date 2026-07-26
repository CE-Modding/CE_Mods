class FIR_GBU54_P_1rnd_M: VehicleMagazine
{
    scope=2;
    displayName="[FIR] GBU-54 LJDAM x1";
    displayNameShort="GBU-54 JDAM";
    descriptionShort="GPS/Laser Guided Bomb (500-lbs)";
    displayNameMFDFormat="GBU-54";
    hardpoints[]=
    {
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\Bomb_500lbs_GPS_Hardpoints.hpp"
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\Bomb_500lbs_Laser_Hardpoints.hpp"
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\zzFIR_AircraftSpecific_Hardpoints_General.hpp"
    };
};
class FIR_GBU54_P_2rnd_M: FIR_GBU54_P_1rnd_M
{
    scope=2;
    displayName="[FIR] GBU-54 LJDAM x2";
    displayNameShort="GBU-54 JDAM";
    descriptionShort="GPS/Laser Guided Bomb (500-lbs)";
    displayNameMFDFormat="GBU-54";
    hardpoints[]=
    {
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\Bomb_500lbs_GPS_Rack_Hardpoints.hpp"
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\Bomb_500lbs_Laser_Rack_Hardpoints.hpp"
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\zzFIR_AircraftSpecific_Hardpoints_General.hpp"
    };
};
class FIR_GBU54_P_3rnd_M: FIR_GBU54_P_1rnd_M
{
    scope=2;
    displayName="[FIR] GBU-54 LJDAM x3";
    displayNameShort="GBU-54 JDAM";
    descriptionShort="GPS/Laser Guided Bomb (500-lbs)";
    displayNameMFDFormat="GBU-54";
    hardpoints[]=
    {
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\Bomb_500lbs_GPS_Rack_Hardpoints.hpp"
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\Bomb_500lbs_Laser_Rack_Hardpoints.hpp"
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\zzFIR_AircraftSpecific_Hardpoints_General.hpp"
    };
};
class FIR_GBU54_F15SE_P_1rnd_M: FIR_GBU54_P_1rnd_M
{
    scope=2;
    displayName="[FIR] GBU-54 LJDAM x1";
    displayNameShort="GBU-54 LJDAM";
    descriptionShort="GPS/Laser Guided Bomb (500-lbs)";
    displayNameMFDFormat="GBU-54";
    hardpoints[]=
    {
        "FIR_F15SE_Under_HP"
    };
};
class FIR_GBU54_Navy_P_1rnd_M: FIR_GBU54_P_1rnd_M
{
    scope=2;
    displayName="[FIR] GBU-54 LJDAM (Navy) x1";
    displayNameShort="GBU-54 JDAM";
    descriptionShort="GPS/Laser Guided Bomb [US Navy] (500-lbs)";
    displayNameMFDFormat="GBU-54";
    hardpoints[]=
    {
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\Bomb_500lbs_GPS_Hardpoints.hpp"
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\Bomb_500lbs_Laser_Hardpoints.hpp"
        "FIR_FA18EF_Combined_HP",
        "FIR_AV8B_AG1K_HP",
        "FIR_FA181E_AG_HP",
        "FIR_F35B_Combined_HP",
        "FIR_FA18_Combined_HP"
    };
};
class FIR_GBU54_Navy_P_2rnd_M: FIR_GBU54_Navy_P_1rnd_M
{
    scope=2;
    displayName="[FIR] GBU-54 LJDAM (Navy) x2";
    displayNameShort="GBU-54 JDAM";
    descriptionShort="GPS/Laser Guided Bomb [US Navy] (500-lbs)";
    displayNameMFDFormat="GBU-54";
    hardpoints[]=
    {
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\Bomb_500lbs_GPS_Rack_Hardpoints.hpp"
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\Bomb_500lbs_Laser_Rack_Hardpoints.hpp"
        "FIR_FA18EF_Combined_HP",
        "FIR_AV8B_AG1K_HP",
        "FIR_FA181E_AG_HP",
        "FIR_F35B_Combined_HP",
        "FIR_FA18_Combined_HP"
    };
};
class FIR_GBU54_Navy_EWP_2rnd_M: FIR_GBU54_Navy_P_1rnd_M
{
    scope=2;
    displayName="[FIR] GBU-54 LJDAM (Navy) x1 (Enlosed Pod)";
    displayNameShort="GBU-54 JDAM";
    descriptionShort="GPS/Laser Guided Bomb [US Navy] (500-lbs)";
    displayNameMFDFormat="GBU-54";
    hardpoints[]=
    {
        "FIR_FA181E_AA_HP",
        "FIR_FA18EF_Under_HP",
        "FIR_F23_EX_Fueltank_HP"
    };
};