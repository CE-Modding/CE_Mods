class FIR_GBU53_P_4rnd_M: VehicleMagazine
{
    scope=2;
    displayName="[FIR] GBU-39 SDB II x4";
    displayNameShort="GBU-39 SDB II";
    descriptionShort="GPS/Laser/Radar Guided Bomb (250-lbs)";
    displayNameMFDFormat="GBU-39 II";
    hardpoints[]=
    {
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\Bomb_500lbs_GPS_Rack_Hardpoints.hpp"
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\Bomb_500lbs_Radar_Rack_Hardpoints.hpp"
         #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\Bomb_500lbs_Laser_Rack_Hardpoints.hpp"
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\zzFIR_AircraftSpecific_Hardpoints_General.hpp"
    };
};
class FIR_GBU53_P_EWP_4rnd_M: FIR_GBU53_P_4rnd_M
{
    scope=2;
    displayName="[FIR] GBU-39 SDB II x4 (Enclosed Pod)";
    displayNameShort="GBU-39 SDB II";
    descriptionShort="GPS/Laser/Radar Guided Bomb (250-lbs)";
    displayNameMFDFormat="GBU-39 II";
    hardpoints[]=
    {
        "FIR_F22_External_HP"
    };
};
class FIR_GBU53_P_EWP_6rnd_M: FIR_GBU53_P_4rnd_M
{
    scope=2;
    displayName="[FIR] GBU-39 SDB II x6 (Enclosed Pod)";
    displayNameShort="GBU-39 SDB II";
    descriptionShort="GPS/Laser/Radar Guided Bomb (250-lbs)";
    displayNameMFDFormat="GBU-39 II";
    hardpoints[]=
    {
        "FIR_F22_External_HP"
    };
};
class FIR_GBU53_EWP_4rnd_M: FIR_GBU53_P_4rnd_M
{
    scope=2;
    displayName="[FIR] GBU-39 SDB II x4 (Enclosed Pod)";
    displayNameShort="GBU-39 SDB II";
    descriptionShort="GPS/Laser/Radar Guided Bomb (250-lbs)";
    displayNameMFDFormat="GBU-39 II";
    hardpoints[]=
    {
        "FIR_FA181E_AA_HP",
        "FIR_FA18EF_Under_HP",
        "FIR_F23_EX_Fueltank_HP"
    };
};
class FIR_GBU53_EWP_6rnd_M: FIR_GBU53_P_4rnd_M
{
    scope=2;
    displayName="[FIR] GBU-39 SDB x6 (Enclosed Pod)";
    displayNameShort="GBU-39 SDB";
    descriptionShort="GPS/Laser/Radar Guided Bomb (250-lbs)";
    displayNameMFDFormat="GBU-39 II";
    hardpoints[]=
    {
        "FIR_FA181E_AA_HP",
        "FIR_FA18EF_Under_HP",
        "FIR_F23_EX_Fueltank_HP"
    };
};