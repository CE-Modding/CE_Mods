class FIR_GBU12_P_1rnd_M: VehicleMagazine
{
    scope=2;
    displayName="[FIR] GBU-12 Paveway II x1";
    displayNameShort="GBU-12 Paveway II";
    descriptionShort="Laser Guided Bomb (500-lbs)";
    displayNameMFDFormat="GBU-12";
    hardpoints[]=
    {
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\Bomb_500lbs_Laser_Hardpoints.hpp"
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\zzFIR_AircraftSpecific_Hardpoints_General.hpp"
    };
};
class FIR_GBU12_Navy_P_1rnd_M: FIR_GBU12_P_1rnd_M
{
    scope=2;
    displayName="[FIR] GBU-12 Paveway II (Navy) x1";
    displayNameShort="GBU-12 Paveway II";
    descriptionShort="Laser Guided Bomb [US Navy] (500-lbs)";
    displayNameMFDFormat="GBU-12";
    hardpoints[]=
    {
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\Bomb_500lbs_Laser_Hardpoints.hpp"
        "FIR_FA18EF_Combined_HP",
        "FIR_FA18EF_Under_HP",
        "FIR_FA181E_AG_HP",
        "FIR_F35B_Combined_HP",
        "FIR_FA18_Combined_HP",
        "FIR_A6E_AG_HP"
    };
};
class FIR_GBU12_P_F14_1rnd_M: FIR_GBU12_Navy_P_1rnd_M
{
    scope=2;
    displayName="[FIR] GBU-12 Paveway II (Navy) x1";
    displayNameShort="GBU-12 Paveway II";
    descriptionShort="Laser Guided Bomb [US Navy] (2000-lbs)";
    displayNameMFDFormat="GBU-12";
    hardpoints[]=
    {
        "FIR_F14_Under_HP"
    };
};
class FIR_GBU12_P_2rnd_M: FIR_GBU12_P_1rnd_M
{
    scope=2;
    displayName="[FIR] GBU-12 Paveway II x2";
    displayNameShort="GBU-12 Paveway II";
    descriptionShort="Laser Guided Bomb (500-lbs)";
    displayNameMFDFormat="GBU-12";
    hardpoints[]=
    {
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\Bomb_500lbs_Laser_Rack_Hardpoints.hpp"
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\zzFIR_AircraftSpecific_Hardpoints_General.hpp"
    };
};
class FIR_GBU12_P_3rnd_M: FIR_GBU12_P_1rnd_M
{
    scope=2;
    displayName="[FIR] GBU-12 Paveway II x3";
    displayNameShort="GBU-12 Paveway II";
    descriptionShort="Laser Guided Bomb (500-lbs)";
    displayNameMFDFormat="GBU-12";
    hardpoints[]=
    {
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\Bomb_500lbs_Laser_Rack_Hardpoints.hpp"
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\zzFIR_AircraftSpecific_Hardpoints_General.hpp"
    };
};
class FIR_GBU12_Navy_P_2rnd_M: FIR_GBU12_P_2rnd_M
{
    scope=2;
    displayName="[FIR] GBU-12 Paveway II (Navy) x2";
    displayNameShort="GBU-12 Paveway II";
    descriptionShort="Laser Guided Bomb [US Navy] (500-lbs)";
    displayNameMFDFormat="GBU-12";
    hardpoints[]=
    {
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\Bomb_500lbs_Laser_Rack_Hardpoints.hpp"
        "FIR_FA18EF_Combined_HP",
        "FIR_FA18EF_Under_HP",
        "FIR_FA181E_AG_HP",
        "FIR_F35B_Combined_HP",
        "FIR_FA18_Combined_HP",
        "FIR_A6E_AG_HP"
    };
};
class FIR_GBU12_Navy_P_3rnd_M: FIR_GBU12_P_3rnd_M
{
    scope=2;
    displayName="[FIR] GBU-12 Paveway II (Navy) x3";
    displayNameShort="GBU-12 Paveway II";
    descriptionShort="Laser Guided Bomb [US Navy] (500-lbs)";
    displayNameMFDFormat="GBU-12";
    hardpoints[]=
    {
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\Bomb_500lbs_Laser_Rack_Hardpoints.hpp"
        "FIR_FA18EF_Combined_HP",
        "FIR_FA18EF_Under_HP",
        "FIR_FA181E_AG_HP",
        "FIR_F35B_Combined_HP",
        "FIR_FA18_Combined_HP",
        "FIR_A6E_AG_HP"
    };
};
class FIR_EGBU12_P_1rnd_M: VehicleMagazine
{
    scope=2;
    displayName="[FIR] GBU-12 Enhanced Paveway II x1";
    displayNameShort="GBU-12 Enhanced Paveway II";
    descriptionShort="Laser/GPS Guided Bomb (500-lbs)";
    displayNameMFDFormat="GBU-12 EP";
    hardpoints[]=
    {
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\Bomb_500lbs_Laser_Hardpoints.hpp"
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\Bomb_500lbs_GPS_Hardpoints.hpp"
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\zzFIR_AircraftSpecific_Hardpoints_General.hpp"
    };
};
class FIR_EGBU12_P_2rnd_M: FIR_EGBU12_P_1rnd_M
{
    scope=2;
    displayName="[FIR] GBU-12 Enhanced Paveway II x2";
    displayNameShort="GBU-12 Enhanced Paveway II";
    descriptionShort="Laser/GPS Guided Bomb (500-lbs)";
    displayNameMFDFormat="GBU-12 EP";
    hardpoints[]=
    {
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\Bomb_500lbs_Laser_Rack_Hardpoints.hpp"
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\Bomb_500lbs_GPS_Rack_Hardpoints.hpp"
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\zzFIR_AircraftSpecific_Hardpoints_General.hpp"
    };
};
class FIR_EGBU12_P_3rnd_M: FIR_EGBU12_P_1rnd_M
{
    scope=2;
    displayName="[FIR] GBU-12 Enhanced Paveway II x2";
    displayNameShort="GBU-12 Enhanced Paveway II";
    descriptionShort="Laser/GPS Guided Bomb (500-lbs)";
    displayNameMFDFormat="GBU-12 EP";
    hardpoints[]=
    {
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\Bomb_500lbs_Laser_Rack_Hardpoints.hpp"
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\Bomb_500lbs_GPS_Rack_Hardpoints.hpp"
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\zzFIR_AircraftSpecific_Hardpoints_General.hpp"
    };
};
class FIR_EGBU12_Navy_P_2rnd_M: FIR_EGBU12_P_1rnd_M
{
    scope=2;
    displayName="[FIR] GBU-12 Enhanced Paveway II (Navy) x2";
    displayNameShort="GBU-12 Enhanced Paveway II";
    descriptionShort="Laser/GPS Guided Bomb [US Navy] (500-lbs)";
    displayNameMFDFormat="GBU-12 EP";
    hardpoints[]=
    {
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\Bomb_500lbs_Laser_Rack_Hardpoints.hpp"
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\Bomb_500lbs_GPS_Rack_Hardpoints.hpp"
        "FIR_FA18EF_Combined_HP",
        "FIR_FA18EF_Under_HP",
        "FIR_FA181E_AG_HP",
        "FIR_F35B_Combined_HP",
        "FIR_FA18_Combined_HP",
        "FIR_A6E_AG_HP"
    };
};
class FIR_EGBU12_Navy_P_3rnd_M: FIR_EGBU12_Navy_P_2rnd_M
{
    scope=2;
    displayName="[FIR] GBU-12 Enhanced Paveway II (Navy) x3";
    displayNameShort="GBU-12 Enhanced Paveway II";
    descriptionShort="Laser/GPS Guided Bomb [US Navy] (500-lbs)";
    displayNameMFDFormat="GBU-12 EP";
    hardpoints[]=
    {
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\Bomb_500lbs_Laser_Rack_Hardpoints.hpp"
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\Bomb_500lbs_GPS_Rack_Hardpoints.hpp"
        "FIR_FA18EF_Combined_HP",
        "FIR_FA18EF_Under_HP",
        "FIR_FA181E_AG_HP",
        "FIR_F35B_Combined_HP",
        "FIR_FA18_Combined_HP",
        "FIR_A6E_AG_HP"
    };
};

// Hidden bc they are basically useless
class FIR_GBU12_PW1_P_1rnd_M: VehicleMagazine
{
    scope=1;
    scopeArsenal=1;
    hardpoints[]={};
};