class FIR_CBU87_P_1rnd_M: VehicleMagazine
{
    scope=2;
    displayName="[FIR] CBU-87 x1";
    displayNameShort="CBU-87";
    descriptionShort="Cluster Bomb (1000-lbs)";
    displayNameMFDFormat="CBU-87";
    hardpoints[]=
    {
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\Bomb_Cluster_Hardpoints.hpp"
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\zzFIR_AircraftSpecific_Hardpoints_General.hpp"
    };
};
class FIR_CBU87_P_BRU57_2rnd_M: FIR_CBU87_P_1rnd_M
{
    scope=2;
    displayName="[FIR] CBU-87 x2 (BRU-57)";
    displayNameShort="CBU-87";
    descriptionShort="Cluster Bomb (1000-lbs)";
    displayNameMFDFormat="CBU-87";
    hardpoints[]=
    {
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\Bomb_Cluster_Hardpoints.hpp"
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\zzFIR_AircraftSpecific_Hardpoints_General.hpp"
    };
};

class FIR_CBU100_P_1rnd_M: VehicleMagazine
{
    scope=2;
    displayName="[FIR] CBU-100 x1";
    displayNameShort="CBU-100";
    descriptionShort="Cluster Bomb (500-lbs)";
    displayNameMFDFormat="CBU-100";
    hardpoints[]=
    {
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\Bomb_Cluster_Hardpoints.hpp"
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\zzFIR_AircraftSpecific_Hardpoints_General.hpp"
    };
};
class FIR_CBU100_P_TripleRack_2rnd_M: FIR_CBU100_P_1rnd_M
{
    scope=2;
    displayName="[FIR] CBU-100 x2";
    displayNameShort="CBU-100";
    descriptionShort="Cluster Bomb (500-lbs)";
    displayNameMFDFormat="CBU-100";
    hardpoints[]=
    {
       #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\Bomb_Cluster_Rack_Hardpoints.hpp"
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\zzFIR_AircraftSpecific_Hardpoints_General.hpp"
    };
};
class FIR_CBU100_P_TripleRack_3rnd_M: FIR_CBU100_P_1rnd_M
{
    scope=2;
    displayName="[FIR] CBU-100 x3";
    displayNameShort="CBU-100";
    descriptionShort="Cluster Bomb (500-lbs)";
    displayNameMFDFormat="CBU-100";
    hardpoints[]=
    {
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\Bomb_Cluster_Rack_Hardpoints.hpp"
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\zzFIR_AircraftSpecific_Hardpoints_General.hpp"
    };
};
class FIR_CBU78_P_1rnd_M: VehicleMagazine
{
    scope=2;
    displayName="[FIR] CBU-78 GATOR x1";
    displayNameShort="CBU-78 GATOR";
    descriptionShort="Cluster-Mine Bomb (500-lbs)";
    displayNameMFDFormat="CBU-78";
    hardpoints[]=
    {
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\Bomb_Cluster_Hardpoints.hpp"
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\zzFIR_AircraftSpecific_Hardpoints_General.hpp"
    };
};
class FIR_CBU78_P_BRU57_2rnd_M: FIR_CBU78_P_1rnd_M
{
    scope=2;
    displayName="[FIR] CBU-78 GATOR x2 (BRU-57)";
    displayNameShort="CBU-78 GATOR";
    descriptionShort="Cluster-Mine Bomb (500-lbs)";
    displayNameMFDFormat="CBU-78";
    hardpoints[]=
    {
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\Bomb_Cluster_Rack_Hardpoints.hpp"
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\zzFIR_AircraftSpecific_Hardpoints_General.hpp"
    };
};
class FIR_CBU89_P_1rnd_M: VehicleMagazine
{
    scope=2;
    displayName="[FIR] CBU-89 GATOR x1";
    displayNameShort="CBU-89 GATOR";
    descriptionShort="Cluster-Mine Bomb (1000-lbs)";
    displayNameMFDFormat="CBU-89";
    hardpoints[]=
    {
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\Bomb_Cluster_Hardpoints.hpp"
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\zzFIR_AircraftSpecific_Hardpoints_General.hpp"
    };
};
class FIR_CBU89_P_BRU57_2rnd_M: FIR_CBU89_P_1rnd_M
{
    scope=2;
    displayName="[FIR] CBU-89 GATOR x2 (BRU-57)";
    displayNameShort="CBU-89 GATOR";
    descriptionShort="Cluster-Mine Bomb (1000-lbs)";
    displayNameMFDFormat="CBU-89";
    hardpoints[]=
    {
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\Bomb_Cluster_Rack_Hardpoints.hpp"
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\zzFIR_AircraftSpecific_Hardpoints_General.hpp"
    };
};
class FIR_PDU5B_P_1rnd_M: VehicleMagazine
{
    scope=2;
    displayName="[FIR] PDU-5/B Leaflets x1";
    displayNameShort="PDU-5/B Leaflets";
    descriptionShort="Leaflet Cluster Dispenser (Type B)";
    displayNameMFDFormat="PDU-5/B";
    hardpoints[]=
    {
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\Bomb_500lbs_Dumb_Hardpoints.hpp"
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\Bomb_Cluster_Hardpoints.hpp"
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\zzFIR_AircraftSpecific_Hardpoints_General.hpp"
    };
};
class FIR_PDU5B_Custom1_P_1rnd_M: FIR_PDU5B_P_1rnd_M
{
    scope=2;
    displayName="[FIR] PDU-5/C Leaflets x1";
    displayNameShort="PDU-5/C Leaflets";
    descriptionShort="Leaflet Cluster Dispenser (Type C)";
    displayNameMFDFormat="PDU-5/C";
    hardpoints[]=
    {
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\Bomb_500lbs_Dumb_Hardpoints.hpp"
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\Bomb_Cluster_Hardpoints.hpp"
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\zzFIR_AircraftSpecific_Hardpoints_General.hpp"
    };
};
class FIR_PDU5B_Custom2_P_1rnd_M: FIR_PDU5B_P_1rnd_M
{
    scope=2;
    displayName="[FIR] PDU-5/D Leaflets x1";
    displayNameShort="PDU-5/D Leaflets";
    descriptionShort="Leaflet Cluster Dispenser (Type D)";
    displayNameMFDFormat="PDU-5/D";
    hardpoints[]=
    {
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\Bomb_500lbs_Dumb_Hardpoints.hpp"
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\Bomb_Cluster_Hardpoints.hpp"
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\zzFIR_AircraftSpecific_Hardpoints_General.hpp"
    };
};
class FIR_PDU5B_Custom3_P_1rnd_M: FIR_PDU5B_P_1rnd_M
{
    scope=2;
    displayName="[FIR] PDU-5/E Leaflets x1";
    displayNameShort="PDU-5/E Leaflets";
    descriptionShort="Leaflet Cluster Dispenser (Type E)";
    displayNameMFDFormat="PDU-5/E";
    hardpoints[]=
    {
       #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\Bomb_500lbs_Dumb_Hardpoints.hpp"
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\Bomb_Cluster_Hardpoints.hpp"
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\zzFIR_AircraftSpecific_Hardpoints_General.hpp"
    };
};
class FIR_PDU5B_P_F14_1rnd_M: FIR_PDU5B_P_1rnd_M
{
    scope=2;
    displayName="[FIR] PDU-5/B Leaflets x1";
    displayNameShort="PDU-5/B Leaflets";
    descriptionShort="Leaflet Cluster Dispenser (Type B)";
    displayNameMFDFormat="PDU-5/B";
    hardpoints[]=
    {
       "FIR_F14_Under_HP"
    };
};
class FIR_PDU5B_Custom1_P_F14_1rnd_M: FIR_PDU5B_P_F14_1rnd_M
{
    scope=2;
    displayName="[FIR] PDU-5/C Leaflets x1";
    displayNameShort="PDU-5/C Leaflets";
    descriptionShort="Leaflet Cluster Dispenser (Type C)";
    displayNameMFDFormat="PDU-5/C";
    hardpoints[]=
    {
       "FIR_F14_Under_HP"
    };
};
class FIR_PDU5B_Custom2_P_F14_1rnd_M: FIR_PDU5B_P_F14_1rnd_M
{
    scope=2;
    displayName="[FIR] PDU-5/D Leaflets x1";
    displayNameShort="PDU-5/D Leaflets";
    descriptionShort="Leaflet Cluster Dispenser (Type D)";
    displayNameMFDFormat="PDU-5/D";
    hardpoints[]=
    {
       "FIR_F14_Under_HP"
    };
};
class FIR_PDU5B_Custom3_P_F14_1rnd_M: FIR_PDU5B_P_F14_1rnd_M
{
    scope=2;
    displayName="[FIR] PDU-5/E Leaflets x1";
    displayNameShort="PDU-5/E Leaflets";
    descriptionShort="Leaflet Cluster Dispenser (Type E)";
    displayNameMFDFormat="PDU-5/E";
    hardpoints[]=
    {
        "FIR_F14_Under_HP"
    };
};
class FIR_CBU87_F15E_Demo_P_4rnd_M: FIR_CBU87_P_1rnd_M
{
    scope=2;
    displayName="[FIR] CBU-87 x6";
    displayNameShort="CBU-87";
    descriptionShort="Cluster Bomb (1000-lbs)";
    displayNameMFDFormat="CBU-87";
    hardpoints[]=
    {
        "FIR_F15E_Proto_AG_HP"
    };
};
class FIR_CBU87_F15E_Demo_P_6rnd_M: FIR_CBU87_P_1rnd_M
{
    scope=2;
    displayName="[FIR] CBU-87 x6";
    displayNameShort="CBU-87";
    descriptionShort="Cluster Bomb (1000-lbs)";
    displayNameMFDFormat="CBU-87";
    hardpoints[]=
    {
        "FIR_F15E_Proto_AG_HP"
    };
};
class FIR_CBU100_P_F14_1rnd_M: FIR_CBU100_P_1rnd_M
{
    scope=2;
    displayName="[FIR] CBU-100 x1";
    displayNameShort="CBU-100";
    descriptionShort="Cluster Bomb (500-lbs)";
    displayNameMFDFormat="CBU-100";
    hardpoints[]=
    {
        "FIR_F14_Under_HP"
    };
};
class FIR_CBU100_P_6rnd_M: FIR_CBU100_P_1rnd_M
{
    scope=2;
    displayName="[FIR] CBU-100 x6";
    displayNameShort="CBU-100";
    descriptionShort="Cluster Bomb (500-lbs)";
    displayNameMFDFormat="CBU-100";
    hardpoints[]=
    {
        "FIR_A10_MER_HP"
    };
};
class FIR_CBU100_F15E_Demo_P_4rnd_M: FIR_CBU100_P_1rnd_M
{
    scope=2;
    displayName="[FIR] CBU-100 x4";
    displayNameShort="CBU-100";
    descriptionShort="Cluster Bomb (500-lbs)";
    displayNameMFDFormat="CBU-100";
    hardpoints[]=
    {
        "FIR_F15E_Proto_AG_HP"
    };
};
class FIR_CBU100_F15E_Demo_P_6rnd_M: FIR_CBU100_P_1rnd_M
{
    scope=2;
    displayName="[FIR] CBU-100 x6";
    displayNameShort="CBU-100";
    descriptionShort="Cluster Bomb (500-lbs)";
    displayNameMFDFormat="CBU-100";
    hardpoints[]=
    {
        "FIR_F15E_Proto_AG_HP"
    };
};
class FIR_CBU78_P_F14_1rnd_M: FIR_CBU78_P_1rnd_M
{
    scope=2;
    displayName="[FIR] CBU-78 GATOR x1";
    displayNameShort="CBU-78 GATOR";
    descriptionShort="Cluster-Mine Bomb (500-lbs)";
    displayNameMFDFormat="CBU-78";
    hardpoints[]=
    {
        "FIR_F14_Under_HP"
    };
};

// Hidden bc they are basically useless
class FIR_CBU87_P_TripleRack_2rnd_M: FIR_CBU87_P_BRU57_2rnd_M
{
    scope=1;
    scopeArsenal=1;
    hardpoints[]={};
};
class FIR_CBU89_P_TripleRack_2rnd_M: FIR_CBU89_P_1rnd_M
{
    scope=1;
    scopeArsenal=1;
    hardpoints[]={};
};
class FIR_CBU97_P_1rnd_M: VehicleMagazine
{
    scope=1;
    scopeArsenal=1;
    hardpoints[]={};
};
class FIR_CBU97_P_BRU57_2rnd_M: FIR_CBU97_P_1rnd_M
{
    scope=1;
    scopeArsenal=1;
    hardpoints[]={};
};
class FIR_CBU97_P_TripleRack_2rnd_M: FIR_CBU97_P_1rnd_M
{
    scope=1;
    scopeArsenal=1;
    hardpoints[]={};
};
class FIR_CBU103_P_1rnd_M: VehicleMagazine
{
    scope=1;
    scopeArsenal=1;
    hardpoints[]={};
};
class FIR_CBU103_P_BRU57_2rnd_M: FIR_CBU103_P_1rnd_M
{
    scope=1;
    scopeArsenal=1;
    hardpoints[]={};
};
class FIR_CBU103_P_TripleRack_2rnd_M: FIR_CBU103_P_1rnd_M
{
    scope=1;
    scopeArsenal=1;
    hardpoints[]={};
};
class FIR_CBU105_P_1rnd_M: VehicleMagazine
{
    scope=1;
    scopeArsenal=1;
    hardpoints[]={};
};
class FIR_CBU105_P_BRU57_2rnd_M: FIR_CBU105_P_1rnd_M
{
    scope=1;
    scopeArsenal=1;
    hardpoints[]={};
};
class FIR_CBU105_P_TripleRack_2rnd_M: FIR_CBU105_P_1rnd_M
{
    scope=1;
    scopeArsenal=1;
    hardpoints[]={};
};