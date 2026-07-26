class FIR_AGM154A_P_1rnd_M: VehicleMagazine
{
    scope=1;
    scopeArsenal=1;
    hardpoints[]={};
};
class FIR_AGM154C_P_1rnd_M: FIR_AGM154A_P_1rnd_M
{
    scope=2;
    scopeArsenal=2;
    displayName="[FIR] AGM-154C JSOW x1";
    displayNameShort="AGM-154C JSOW";
    descriptionShort="GPS Guided Gliding Bomb (1000-lbs)";
    displayNameMFDFormat="AGM-154C";
    hardpoints[]=
    {
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\AGM_LongRange_Radar_Hardpoints.hpp"
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\AGM_LongRange_GPS_Hardpoints.hpp"
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\zzFIR_AircraftSpecific_Hardpoints_General.hpp"
    };
};
class FIR_PavewayIV_P_1rnd_M: VehicleMagazine
{
    scope=2;
    displayName="[FIR] Paveway IV x1";
    displayNameShort="Paveway IV";
    descriptionShort="Laser/GPS Guided Bomb (500-lbs)";
    displayNameMFDFormat="Paveway";
    hardpoints[]=
    {
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\Bomb_500lbs_GPS_Hardpoints.hpp"
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\Bomb_500lbs_Laser_Hardpoints.hpp"
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\zzFIR_AircraftSpecific_Hardpoints_General.hpp"
    };
};
class FIR_GCS1_P_1rnd_M: VehicleMagazine
{
    scope=2;
    displayName="[FIR] GCS-1 x1";
    displayNameShort="GSC-1";
    descriptionShort="IR Guided Bomb (500-lbs)";
    displayNameMFDFormat="GSC-1";
    hardpoints[]=
    {
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\Bomb_500lbs_IR_Hardpoints.hpp"
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\zzFIR_AircraftSpecific_Hardpoints_General.hpp"
    };
};

// Hidden bc they are basically useless
class FIR_AGM62_Walleye1_P_1rnd_M: VehicleMagazine
{
    scope=1;
    scopeArsenal=1;
    hardpoints[]={};
};
class FIR_AGM62_Walleye2_P_1rnd_M: VehicleMagazine
{
    scope=1;
    scopeArsenal=1;
    hardpoints[]={};
};
class FIR_AGM62_Walleye1ER_P_1rnd_M: VehicleMagazine
{
    scope=1;
    scopeArsenal=1;
    hardpoints[]={};
};
class FIR_AGM62_Walleye2ER_P_1rnd_M: VehicleMagazine
{
    scope=1;
    scopeArsenal=1;
    hardpoints[]={};
};
class FIR_KGGB_P_1rnd_M: VehicleMagazine
{
    scope=1;
    scopeArsenal=1;
    hardpoints[]={};
};