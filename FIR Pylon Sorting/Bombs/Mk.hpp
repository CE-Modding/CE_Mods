class FIR_Mk82_GP_P_1rnd_M: VehicleMagazine
{
    scope=2;
    displayName="[FIR] Mk82 x1";
    displayNameShort="Mk82";
    descriptionShort="General Purpose Bomb (500-lbs)";
    displayNameMFDFormat="Mk82";
    hardpoints[]=
    {
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\Bomb_500lbs_Dumb_Hardpoints.hpp"
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\zzFIR_AircraftSpecific_Hardpoints_General.hpp"
    };
};
class FIR_Mk82_GP_P_3rnd_M: FIR_Mk82_GP_P_1rnd_M
{
    scope=2;
    displayName="[FIR] Mk82 x3";
    displayNameShort="Mk82";
    descriptionShort="General Purpose Bomb (500-lbs)";
    displayNameMFDFormat="Mk82";
    hardpoints[]=
    {
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\Bomb_500lbs_Dumb_Rack_Hardpoints.hpp"
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\zzFIR_AircraftSpecific_Hardpoints_General.hpp"
    };
};
class FIR_Mk82_GP_P_6rnd_M: FIR_Mk82_GP_P_1rnd_M
{
    scope=2;
    displayName="[FIR] Mk82 x6";
    displayNameShort="Mk82";
    descriptionShort="General Purpose Bomb (500-lbs)";
    displayNameMFDFormat="Mk82";
    hardpoints[]=
    {
		#include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\zzCE_MEMES_Hardpoints.hpp"
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\zzFIR_AircraftSpecific_Hardpoints_General.hpp"
    };
};
class FIR_Mk82_GP_TER9A_P_3rnd_M: FIR_Mk82_GP_P_1rnd_M
{
    scope=2;
    displayName="[FIR] Mk82 x3 (Triple Ejector Rack)";
    displayNameShort="Mk82";
    descriptionShort="General Purpose Bomb (500-lbs)";
    displayNameMFDFormat="Mk82";
    hardpoints[]=
    {
        "FIR_F16_Combined_HP",
        "FIR_F16_AG_HP"
    };
};


class FIR_Mk82_GP_Navy_P_1rnd_M: FIR_Mk82_GP_P_1rnd_M
{
    scope=2;
    displayName="[FIR] Mk82 (Navy) x1";
    displayNameShort="Mk82";
    descriptionShort="General Purpose Bomb [US Navy] (500-lbs)";
    displayNameMFDFormat="Mk82";
    hardpoints[]=
    {
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\Bomb_500lbs_Dumb_Hardpoints.hpp"
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\zzFIR_AircraftSpecific_Hardpoints_General.hpp"
    };
};
class FIR_Mk82_GP_Navy_P_2rnd_M: FIR_Mk82_GP_Navy_P_1rnd_M
{
    scope=2;
    displayName="[FIR] Mk82 (Navy) x2";
    displayNameShort="Mk82";
    descriptionShort="General Purpose Bomb [US Navy] (500-lbs)";
    displayNameMFDFormat="Mk82";
    hardpoints[]=
    {
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\Bomb_500lbs_Dumb_Rack_Hardpoints.hpp"
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\zzFIR_AircraftSpecific_Hardpoints_General.hpp"
    };
};
class FIR_Mk82_GP_Navy_P_6rnd_M: FIR_Mk82_GP_Navy_P_1rnd_M
{
    scope=2;
    displayName="[FIR] Mk82 (Navy) x6";
    displayNameShort="Mk82";
    descriptionShort="General Purpose Bomb [US Navy] (500-lbs)";
    displayNameMFDFormat="Mk82";
    hardpoints[]=
    {
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\Bomb_500lbs_Dumb_Rack_Hardpoints.hpp"
		#include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\zzCE_MEMES_Hardpoints.hpp"
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\zzFIR_AircraftSpecific_Hardpoints_General.hpp"
    };
};
class FIR_Mk82_GP_P_F14_1rnd_M: FIR_Mk82_GP_Navy_P_1rnd_M
{
    scope=2;
    displayName="[FIR] Mk82 (Navy) x1";
    displayNameShort="Mk82";
    descriptionShort="General Purpose Bomb [US Navy] (500-lbs)";
    displayNameMFDFormat="Mk82";
    hardpoints[]=
    {
        "FIR_F14_Under_HP"
    };
};

class FIR_Mk82_GP_prox_P_1rnd_M: VehicleMagazine
{
    scope=2;
    displayName="[FIR] Mk82 DSU-33 x1";
    displayNameShort="Mk82";
    descriptionShort="General Purpose w/Radar Sensor for Airburst Bomb (500-lbs)";
    displayNameMFDFormat="Mk82";
    hardpoints[]=
    {
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\Bomb_500lbs_Dumb_Hardpoints.hpp"
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\zzFIR_AircraftSpecific_Hardpoints_General.hpp"
    };
};
class FIR_Mk82_GP_Navy_prox_P_1rnd_M: FIR_Mk82_GP_prox_P_1rnd_M
{
    scope=2;
    displayName="[FIR] Mk82 DSU-33 (Navy) x1";
    displayNameShort="Mk82";
    descriptionShort="General Purpose w/Radar Sensor for Airburst Bomb [US Navy] (500-lbs)";
    displayNameMFDFormat="Mk82";
    hardpoints[]=
    {
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\Bomb_500lbs_Dumb_Hardpoints.hpp"
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\zzFIR_AircraftSpecific_Hardpoints_General.hpp"
    };
};

class FIR_Mk83_GP_Navy_P_1rnd_M: VehicleMagazine
{
    scope=2;
    displayName="[FIR] Mk83 (Navy) x1";
    displayNameShort="Mk83";
    descriptionShort="General Purpose Bomb [US Navy] (1000-lbs)";
    displayNameMFDFormat="Mk83";
    hardpoints[]=
    {
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\Bomb_1000lbs_Dumb_Hardpoints.hpp"
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\zzFIR_AircraftSpecific_Hardpoints_General.hpp"
    };
};
class FIR_Mk83_GP_Navy_P_2rnd_M: FIR_Mk83_GP_Navy_P_1rnd_M
{
    scope=2;
    displayName="[FIR] Mk83 (Navy) x2";
    displayNameShort="Mk83";
    descriptionShort="General Purpose Bomb [US Navy] (1000-lbs)";
    displayNameMFDFormat="Mk83";
    hardpoints[]=
    {
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\Bomb_500lbs_Dumb_Rack_Hardpoints.hpp"
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\zzFIR_AircraftSpecific_Hardpoints_General.hpp"
    };
};
class FIR_Mk83_GP_Navy_P_F14_1rnd_M: FIR_Mk83_GP_Navy_P_1rnd_M
{
    scope=2;
    displayName="[FIR] Mk83 (Navy) x1";
    displayNameShort="Mk83";
    descriptionShort="General Purpose Bomb [US Navy] (1000-lbs)";
    displayNameMFDFormat="Mk83";
    hardpoints[]=
    {
        "FIR_F14_Under_HP"
    };
};

class FIR_Mk84_GP_P_1rnd_M: VehicleMagazine
{
    scope=2;
    displayName="[FIR] Mk84 x1";
    displayNameShort="Mk84";
    descriptionShort="General Purpose Bomb (2000-lbs)";
    displayNameMFDFormat="Mk84";
    hardpoints[]=
    {
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\Bomb_2000lbs_Dumb_Hardpoints.hpp"
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\zzFIR_AircraftSpecific_Hardpoints_General.hpp"
    };
};
class FIR_Mk84_GP_Navy_P_1rnd_M: FIR_Mk84_GP_P_1rnd_M
{
    scope=2;
    displayName="[FIR] Mk84 (Navy) x1";
    displayNameShort="Mk84";
    descriptionShort="General Purpose Bomb [US Navy] (2000-lbs)";
    displayNameMFDFormat="Mk84";
    hardpoints[]=
    {
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\Bomb_2000lbs_Dumb_Hardpoints.hpp"
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\zzFIR_AircraftSpecific_Hardpoints_General.hpp"
    };
};
class FIR_Mk84_GP_P_F14_1rnd_M: FIR_Mk84_GP_Navy_P_1rnd_M
{
    scope=2;
    displayName="[FIR] Mk84 (Navy) x1";
    displayNameShort="Mk84";
    descriptionShort="General Purpose Bomb [US Navy] (2000-lbs)";
    displayNameMFDFormat="Mk84";
    hardpoints[]=
    {
        "FIR_F14_Under_HP"
    };
};

// Hidden bc they are basically useless
class FIR_Mk82_snakeye_P_1rnd_M: VehicleMagazine
{
    scope=1;
    scopeArsenal=1;
    hardpoints[]={};
};
class FIR_Mk82_snakeye_P_3rnd_M: FIR_Mk82_snakeye_P_1rnd_M
{
    scope=1;
    scopeArsenal=1;
    hardpoints[]={};
};
class FIR_Mk82_snakeye_P_6rnd_M: FIR_Mk82_snakeye_P_1rnd_M
{
    scope=1;
    scopeArsenal=1;
    hardpoints[]={};
};

class FIR_Mk82_snakeye_Navy_P_1rnd_M: FIR_Mk82_snakeye_P_1rnd_M
{
    scope=1;
    scopeArsenal=1;
    hardpoints[]={};
};
class FIR_Mk82_snakeye_P_F14_1rnd_M: FIR_Mk82_snakeye_Navy_P_1rnd_M
{
    scope=1;
    scopeArsenal=1;
    hardpoints[]={};
};
class FIR_Mk82_snakeye_Navy_P_2rnd_M: FIR_Mk82_snakeye_Navy_P_1rnd_M
{
    scope=1;
    scopeArsenal=1;
    hardpoints[]={};
};

class FIR_Mk82_AIR_P_1rnd_M: VehicleMagazine
{
    scope=1;
    scopeArsenal=1;
    hardpoints[]={};
};
class FIR_Mk82_AIR_P_3rnd_M: FIR_Mk82_AIR_P_1rnd_M
{
    scope=1;
    scopeArsenal=1;
    hardpoints[]={};
};
class FIR_Mk82_AIR_P_6rnd_M: FIR_Mk82_AIR_P_1rnd_M
{
    scope=1;
    scopeArsenal=1;
    hardpoints[]={};
};
class FIR_Mk82_AIR_TER9A_P_3rnd_M: FIR_Mk82_AIR_P_1rnd_M
{
    scope=1;
    scopeArsenal=1;
    hardpoints[]={};
};

class FIR_Mk82_GP_F15E_Demo_P_4rnd_M: FIR_Mk82_GP_P_1rnd_M
{
    scope=1;
    scopeArsenal=1;
    hardpoints[]={};
};
class FIR_Mk82_GP_F15E_Demo_P_6rnd_M: FIR_Mk82_GP_P_1rnd_M
{
    scope=1;
    scopeArsenal=1;
    hardpoints[]={};
};
class FIR_Mk82_snakeye_F15E_Demo_P_4rnd_M: FIR_Mk82_snakeye_P_1rnd_M
{
    scope=1;
    scopeArsenal=1;
    hardpoints[]={};
};
class FIR_Mk82_snakeye_F15E_Demo_P_6rnd_M: FIR_Mk82_snakeye_P_1rnd_M
{
    scope=1;
    scopeArsenal=1;
    hardpoints[]={};
};
class FIR_Mk82_AIR_F15E_Demo_P_4rnd_M: FIR_Mk82_AIR_P_1rnd_M
{
    scope=1;
    scopeArsenal=1;
    hardpoints[]={};
};
class FIR_Mk82_AIR_F15E_Demo_P_6rnd_M: FIR_Mk82_AIR_P_1rnd_M
{
    scope=1;
    scopeArsenal=1;
    hardpoints[]={};
};

class FIR_Mk83_AIR_Navy_P_1rnd_M: VehicleMagazine
{
    scope=1;
    scopeArsenal=1;
    hardpoints[]={};
};
class FIR_Mk83_AIR_Navy_P_2rnd_M: FIR_Mk83_AIR_Navy_P_1rnd_M
{
    scope=1;
    scopeArsenal=1;
    hardpoints[]={};
};
class FIR_Mk83_AIR_Navy_P_F14_1rnd_M: FIR_Mk83_AIR_Navy_P_1rnd_M
{
    scope=1;
    scopeArsenal=1;
    hardpoints[]={};
};

class FIR_Mk84_AIR_P_1rnd_M: VehicleMagazine
{
    scope=1;
    scopeArsenal=1;
    hardpoints[]={};
};