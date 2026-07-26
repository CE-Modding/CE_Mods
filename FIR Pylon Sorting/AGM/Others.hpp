class FIR_AGM88_P_1rnd_M: VehicleMagazine
{
    scope=2;
    displayName="[FIR] AGM-88 HARM x1";
    displayNameShort="AGM-88 HARM";
    descriptionShort="IR Guided Anti-Radiation Air-to-Surface Missile";
    displayNameMFDFormat="AGM-88";
    hardpoints[]=
    {
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\AGM_LongRange_HARM_Hardpoints.hpp"
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\zzFIR_AircraftSpecific_Hardpoints_General.hpp"
        "FIR_AV8B_HARM_HP",
        "FIR_Tornado_ECR_HP"
    };
};
class FIR_AGM84D_P_1rnd_M: VehicleMagazine
{
    scope=2;
    displayName="[FIR] AGM-84D x1";
    displayNameShort="AGM-84D";
    descriptionShort="Active-Radar Guided Air-to-Ship/Surface Missile";
    displayNameMFDFormat="AGM-84D";
    hardpoints[]=
    {
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\AGM_ShortRange_Radar_Hardpoints.hpp"
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\AGM_LongRange_Radar_Hardpoints.hpp"
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\zzFIR_AircraftSpecific_Hardpoints_General.hpp"
    };
};
class FIR_AGM84E_P_1rnd_M: VehicleMagazine
{
    scope=2;
    displayName="[FIR] AGM-84E SLAM x1";
    displayNameShort="AGM-84E SLAM";
    descriptionShort="GPS/Radar Guided Air-to-Surface Cruise Missile";
    displayNameMFDFormat="AGM-84E";
    hardpoints[]=
    {
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\AGM_LongRange_Radar_Hardpoints.hpp"
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\AGM_LongRange_GPS_Hardpoints.hpp"
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\zzFIR_AircraftSpecific_Hardpoints_General.hpp"
    };
};
class FIR_AGM84K_P_1rnd_M: VehicleMagazine
{
    scope=2;
    displayName="[FIR] AGM-84K SLAM-ER x1";
    displayNameShort="AGM-84K SLAM-ER";
    descriptionShort="GPS/Radar Guided Air-to-Surface Cruise Missile";
    displayNameMFDFormat="AGM-84K";
    hardpoints[]=
    {
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\AGM_LongRange_Radar_Hardpoints.hpp"
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\AGM_LongRange_GPS_Hardpoints.hpp"
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\zzFIR_AircraftSpecific_Hardpoints_General.hpp"
    };
};
class FIR_AGM158B_P_1rnd_M: VehicleMagazine
{
    scope=2;
    displayName="[FIR] AGM-158 JASSM x1";
    displayNameShort="AGM-158 JASSM";
    descriptionShort="GPS/Radar Guided Air-to-Surface Cruise Missile";
    displayNameMFDFormat="AGM-158";
    hardpoints[]=
    {
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\AGM_LongRange_Radar_Hardpoints.hpp"
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\AGM_LongRange_GPS_Hardpoints.hpp"
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\zzFIR_AircraftSpecific_Hardpoints_General.hpp"
    };
};
// Hidden bc they are basically useless
class FIR_AGM123_P_1rnd_M: VehicleMagazine
{
    scope=1;
    scopeArsenal=1;
    hardpoints[]={};
};
class FIR_AGM84H_P_1rnd_M: VehicleMagazine
{
    scope=1;
    scopeArsenal=1;
    hardpoints[]={};
};
class FIR_ASM1_P_1rnd_M: VehicleMagazine
{
    scope=1;
    scopeArsenal=1;
    hardpoints[]={};
};
class FIR_ASM2_P_1rnd_M: VehicleMagazine
{
    scope=1;
    scopeArsenal=1;
    hardpoints[]={};
};