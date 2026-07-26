class FIR_BLU107_P_3rnd_M: VehicleMagazine
{
    scope=2;
    displayName="[FIR] BLU-107B Durandal x3";
    displayNameShort="BLU-107B Durandal";
    descriptionShort="Anti-Runway Bomb";
    displayNameMFDFormat="BLU-107B";
    hardpoints[]=
    {
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\Bomb_500lbs_Dumb_Rack_Hardpoints.hpp"
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\zzFIR_AircraftSpecific_Hardpoints_General.hpp"
    };
};
class FIR_Scalpel_P_1rnd_M: VehicleMagazine
{
    scope=2;
    displayName="[FIR] Scalpel LCDPB x1";
    displayNameShort="Scalpel LCDPB";
    descriptionShort="Low-Collateral Damage Precision Bomb";
    displayNameMFDFormat="LCDPB";
    hardpoints[]=
    {
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\Bomb_500lbs_Laser_Hardpoints.hpp"
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\zzFIR_AircraftSpecific_Hardpoints_General.hpp"
    };
};
class FIR_Scalpel_P_2rnd_M: FIR_Scalpel_P_1rnd_M
{
    scope=2;
    displayName="[FIR] Scalpel LCDPB x2";
    displayNameShort="Scalpel LCDPB";
    descriptionShort="Low-Collateral Damage Precision Bomb";
    displayNameMFDFormat="LCDPB";
    hardpoints[]=
    {
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\Bomb_500lbs_Laser_Rack_Hardpoints.hpp"
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\zzFIR_AircraftSpecific_Hardpoints_General.hpp"
    };
};
class FIR_Scalpel_P_3rnd_M: FIR_Scalpel_P_1rnd_M
{
    scope=2;
    displayName="[FIR] Scalpel LCDPB x3";
    displayNameShort="Scalpel LCDPB";
    descriptionShort="Low-Collateral Damage Precision Bomb";
    displayNameMFDFormat="LCDPB";
    hardpoints[]=
    {
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\Bomb_500lbs_Laser_Rack_Hardpoints.hpp"
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\zzFIR_AircraftSpecific_Hardpoints_General.hpp"
    };
};
class FIR_Scalpel_P_F15E_1rnd_M: FIR_Scalpel_P_1rnd_M
{
    scope=2;
    displayName="[FIR] Scalpel LCDPB x1";
    displayNameShort="Scalpel LCDPB";
    descriptionShort="Low-Collateral Damage Precision Bomb";
    displayNameMFDFormat="LCDPB";
    hardpoints[]=
    {
        "FIR_F15E_AG_HP"
    };
};
class FIR_Scalpel_P_F14_1rnd_M: FIR_Scalpel_P_1rnd_M
{
    scope=2;
    displayName="[FIR] Scalpel LCDPB x1";
    displayNameShort="Scalpel LCDPB";
    descriptionShort="Low-Collateral Damage Precision Bomb";
    displayNameMFDFormat="LCDPB";
    hardpoints[]=
    {
        "FIR_F14_Under_HP",
        "FIR_F14D_Under_HP"
    };
};
