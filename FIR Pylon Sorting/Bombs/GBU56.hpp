class FIR_GBU56_P_1rnd_M: VehicleMagazine
{
    scope=2;
    displayName="[FIR] GBU-56 LJDAM x1";
    displayNameShort="GBU-56 JDAM";
    descriptionShort="GPS/Laser Guided Bomb (2000-lbs)";
    displayNameMFDFormat="GBU-56";
    hardpoints[]=
    {
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\Bomb_2000lbs_GPS_Hardpoints.hpp"
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\Bomb_2000lbs_Laser_Hardpoints.hpp"
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\zzFIR_AircraftSpecific_Hardpoints_General.hpp"
    };
};
class FIR_GBU56_Navy_P_1rnd_M: FIR_GBU56_P_1rnd_M
{
    scope=2;
    displayName="[FIR] GBU-56 LJDAM (Navy) x1";
    displayNameShort="GBU-56 JDAM";
    descriptionShort="GPS/Laser Guided Bomb [US Navy] (2000-lbs)";
    displayNameMFDFormat="GBU-56";
    hardpoints[]=
    {
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\Bomb_2000lbs_GPS_Hardpoints.hpp"
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\Bomb_2000lbs_Laser_Hardpoints.hpp"
        "FIR_FA18EF_Combined_HP",
        "FIR_FA181E_AG_HP",
        "FIR_F35B_Combined_HP",
        "FIR_FA18_Combined_HP"
    };
};