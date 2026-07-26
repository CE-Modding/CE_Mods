class FIR_GBU24B_P_1rnd_M: VehicleMagazine
{
    scope=2;
    displayName="[FIR] GBU-24 Paveway III x1";
    displayNameShort="GBU-24 Paveway III";
    descriptionShort="Laser Guided Bomb (2000-lbs)";
    displayNameMFDFormat="GBU-24";
    hardpoints[]=
    {
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\Bomb_2000lbs_Laser_Hardpoints.hpp"
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\zzFIR_AircraftSpecific_Hardpoints_General.hpp"
    };
};
class FIR_GBU24_EWP_1rnd_M: FIR_GBU24B_P_1rnd_M
{
    scope=2;
    displayName="[FIR] GBU-24 Paveway III x1 (Enclosed Pod)";
    displayNameShort="GBU-24 Paveway III";
    descriptionShort="Laser/GPS Guided Bomb (2000-lbs)";
    displayNameMFDFormat="GBU-24";
    hardpoints[]=
    {
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\zzFIR_AircraftSpecific_Hardpoints_General.hpp"
    };
};
class FIR_GBU24B_P_F14_1rnd_M: FIR_GBU24B_P_1rnd_M
{
    scope=2;
    displayName="[FIR] GBU-24 Paveway III x1";
    displayNameShort="GBU-24 Paveway III";
    descriptionShort="Laser Guided Bomb (2000-lbs)";
    displayNameMFDFormat="GBU-24";
    hardpoints[]=
    {
        "FIR_F14_Under_HP"
    };
};
class FIR_GBU24A_BLU118_P_1rnd_M: VehicleMagazine // HECP-FAE https://cat-uxo.com/explosive-hazards/aircraft-bombs/blu-118-aircraft-bomb
{
    scope=2;
    displayName="[FIR] GBU-24 Paveway III x1 (BLU-118)";
    displayNameShort="GBU-24 Paveway III (BLU-118)";
    descriptionShort="Laser Guided High-Explosive-Concrete-Piercing-Thermobaric-Fuel-Air-Explosive Bomb (2000-lbs)";
    displayNameMFDFormat="GBU-24 BLU-118";
    hardpoints[]=
    {
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\Bomb_2000lbs_Laser_Hardpoints.hpp"
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\zzCE_MEMES_Hardpoints.hpp"
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\zzFIR_AircraftSpecific_Hardpoints_General.hpp"
    };
};
class FIR_GBU24B_BLU109_P_1rnd_M: VehicleMagazine
{
    scope=2;
    displayName="[FIR] GBU-24 Paveway III x1 (BLU-109)";
    displayNameShort="GBU-24 Paveway III (BLU-109)";
    descriptionShort="Laser Guided High-Explosive-Concrete-Piercing Bomb (2000-lbs)";
    displayNameMFDFormat="GBU-24 BLU-109";
    hardpoints[]=
    {
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\Bomb_2000lbs_Laser_Hardpoints.hpp"
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\zzFIR_AircraftSpecific_Hardpoints_General.hpp"
    };
};
class FIR_GBU24B_BLU109_P_F14_1rnd_M: FIR_GBU24B_BLU109_P_1rnd_M
{
    scope=2;
    displayName="[FIR] GBU-24 Paveway III x1 (BLU-109)";
    displayNameShort="GBU-24 Paveway III (BLU-109)";
    descriptionShort="Laser Guided High-Explosive-Concrete-Piercing Bomb (2000-lbs)";
    displayNameMFDFormat="GBU-24 BLU-109";
    hardpoints[]=
    {
        "FIR_F14_Under_HP"
    };
};
class FIR_GBU24EB_P_1rnd_M: VehicleMagazine
{
    scope=2;
    displayName="[FIR] GBU-24 Enhanced Paveway III x1";
    displayNameShort="GBU-24 Enhanced Paveway III";
    descriptionShort="Laser/GPS Guided Bomb (2000-lbs)";
    displayNameMFDFormat="GBU-24 EP";
    hardpoints[]=
    {
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\Bomb_2000lbs_Laser_Hardpoints.hpp"
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\Bomb_2000lbs_GPS_Hardpoints.hpp"
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\zzFIR_AircraftSpecific_Hardpoints_General.hpp"
    };
};
class FIR_GBU24EB_P_F14_1rnd_M: FIR_GBU24EB_P_1rnd_M
{
    scope=2;
    displayName="[FIR] GBU-24 Enhanced Paveway III x1";
    displayNameShort="GBU-24 Enhanced Paveway III";
    descriptionShort="Laser/GPS Guided Bomb (2000-lbs)";
    displayNameMFDFormat="GBU-24 EP";
    hardpoints[]=
    {
        "FIR_F14_Under_HP"
    };
};

// Hidden bc they are basically useless
class FIR_GBU24A_P_1rnd_M: VehicleMagazine
{
    scope=1;
    scopeArsenal=1;
    hardpoints[]={};
};
class FIR_GBU24A_BLU109_P_1rnd_M: VehicleMagazine
{
    scope=1;
    scopeArsenal=1;
    hardpoints[]={};
};