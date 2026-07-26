class FIR_AGM65B_P_1rnd_M: VehicleMagazine
{
    scope=2;
    displayName="[FIR] AGM-65B x1";
    displayNameShort="AGM-65B";
    descriptionShort="EO-TV Guided Air-to-Surface Missile";
    displayNameMFDFormat="AGM-65B";
    hardpoints[]=
    {
        "FIR_A10A_MAV_HP"
    };
};
class FIR_AGM65B_P_2rnd_M: FIR_AGM65B_P_1rnd_M
{
    scope=2;
    displayName="[FIR] AGM-65B x2";
    displayNameShort="AGM-65B";
    descriptionShort="EO-TV Guided Air-to-Surface Missile";
    displayNameMFDFormat="AGM-65B";
    hardpoints[]=
    {
        "FIR_A10A_MAV_HP"
    };
};
class FIR_AGM65B_P_3rnd_M: FIR_AGM65B_P_2rnd_M
{
    scope=2;
    displayName="[FIR] AGM-65B x3";
    displayNameShort="AGM-65B";
    descriptionShort="EO-TV Guided Air-to-Surface Missile";
    displayNameMFDFormat="AGM-65B";
    hardpoints[]=
    {
        "FIR_A10A_MAV_HP"
    };
};
class FIR_AGM65D_P_1rnd_M: VehicleMagazine
{
    scope=2;
    displayName="[FIR] AGM-65D x1";
    displayNameShort="AGM-65D";
    descriptionShort="IR Guided Air-to-Surface Missile";
    displayNameMFDFormat="AGM-65D";
    hardpoints[]=
    {
       #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\AGM_ShortRange_IR_Hardpoints.hpp"
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\zzFIR_AircraftSpecific_Hardpoints_General.hpp"
    };
};
class FIR_AGM65D_P_2rnd_M: FIR_AGM65D_P_1rnd_M
{
    scope=2;
    displayName="[FIR] AGM-65D x2";
    displayNameShort="AGM-65D";
    descriptionShort="IR Guided Air-to-Surface Missile";
    displayNameMFDFormat="AGM-65D";
    hardpoints[]=
    {
       #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\AGM_ShortRange_IR_Hardpoints.hpp"
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\zzFIR_AircraftSpecific_Hardpoints_General.hpp"
    };
};
class FIR_AGM65D_P_3rnd_M: FIR_AGM65D_P_2rnd_M
{
    scope=2;
    displayName="[FIR] AGM-65D x3";
    displayNameShort="AGM-65D";
    descriptionShort="IR Guided Air-to-Surface Missile";
    displayNameMFDFormat="AGM-65D";
    hardpoints[]=
    {
       #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\AGM_ShortRange_IR_Hardpoints.hpp"
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\zzFIR_AircraftSpecific_Hardpoints_General.hpp"
    };
};
class FIR_AGM65E_P_1rnd_M: VehicleMagazine
{
    scope=2;
    displayName="[FIR] AGM-65E x3";
    displayNameShort="AGM-65E";
    descriptionShort="Laser Guided Air-to-Surface Missile";
    displayNameMFDFormat="AGM-65E";
    hardpoints[]=
    {
       #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\AGM_ShortRange_Laser_Hardpoints.hpp"
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\zzFIR_AircraftSpecific_Hardpoints_General.hpp"
    };
};
class FIR_AGM65E_P_2rnd_M: FIR_AGM65E_P_1rnd_M
{
    scope=2;
    displayName="[FIR] AGM-65E x2";
    count=2;
    mirrorMissilesIndexes[]={3,2,1};
    model="\FIR_AirWeaponSystem_US\data\proxies\rack_3x_lau88.p3d";
    mass=600;
};
class FIR_AGM65E_P_3rnd_M: FIR_AGM65E_P_2rnd_M
{
    scope=2;
    displayName="[FIR] AGM-65E x3";
    count=3;
};

// Hidden bc they are basically useless
class FIR_AGM65H_P_1rnd_M: VehicleMagazine
{
    scope=1;
    scopeArsenal=1;
    hardpoints[]={};
};
class FIR_AGM65H_P_2rnd_M: FIR_AGM65H_P_1rnd_M
{
    scope=1;
    scopeArsenal=1;
    hardpoints[]={};
};
class FIR_AGM65H_P_3rnd_M: FIR_AGM65H_P_2rnd_M
{
    scope=1;
    scopeArsenal=1;
    hardpoints[]={};
};
class FIR_AGM65F_P_1rnd_M: VehicleMagazine
{
    scope=1;
    scopeArsenal=1;
    hardpoints[]={};
};
class FIR_AGM65G_P_1rnd_M: VehicleMagazine
{
    scope=1;
    scopeArsenal=1;
    hardpoints[]={};
};
class FIR_AGM65K_P_1rnd_M: VehicleMagazine
{
    scope=1;
    scopeArsenal=1;
    hardpoints[]={};
};
class FIR_AGM65E2_P_1rnd_M: VehicleMagazine
{
    scope=1;
    scopeArsenal=1;
    hardpoints[]={};
};
class FIR_AGM65L_P_1rnd_M: VehicleMagazine
{
    scope=1;
    scopeArsenal=1;
    hardpoints[]={};
};