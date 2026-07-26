class FIR_AIM120_P_1rnd_M: VehicleMagazine
{
    scope=2;
    displayName="[FIR] AIM-120D x1";
    displayNameShort="AIM-120D";
    descriptionShort="Medium-Range Active Radar Guided Air-to-Air Missile";
    displayNameMFDFormat="AIM-120D";
    hardpoints[]=
    {
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\AA_LongRange_Missile_Hardpoints.hpp"
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\zzFIR_AircraftSpecific_Hardpoints_AA.hpp"
    };
};
class FIR_AIM120_P_type1_2rnd_M: FIR_AIM120_P_1rnd_M
{
    scope=2;
    displayName="[FIR] AIM-120D x2";
    displayNameShort="AIM-120D";
    descriptionShort="Medium-Range Active Radar Guided Air-to-Air Missile";
    displayNameMFDFormat="AIM-120D";
    hardpoints[]=
    {
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\AA_LongRange_Missile_Hardpoints.hpp"
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\zzFIR_AircraftSpecific_Hardpoints_AA.hpp"
    };
};
class FIR_AIM120_P_EWP_2rnd_M: FIR_AIM120_P_1rnd_M
{
    scope=2;
    displayName="[FIR] AIM-120D x2 (Enclosed Pod)";
    displayNameShort="AIM-120D";
    descriptionShort="Medium-Range Active Radar Guided Air-to-Air Missile";
    displayNameMFDFormat="AIM-120D";
    hardpoints[]=
    {
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\zzFIR_AircraftSpecific_Hardpoints_AA.hpp"
    };
};
class FIR_AIM120_EWP_4rnd_M: FIR_AIM120_P_1rnd_M
{
    scope=2;
    displayName="[FIR] AIM-120D x4 (Enclosed Pod)";
    displayNameShort="AIM-120D";
    descriptionShort="Medium-Range Active Radar Guided Air-to-Air Missile";
    displayNameMFDFormat="AIM-120D";
    hardpoints[]=
    {
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\zzFIR_AircraftSpecific_Hardpoints_AA.hpp"
    };
};

class FIR_AIM120_P_AMBER_2rnd_M: FIR_AIM120_P_1rnd_M
{
    scope=2;
    displayName="[FIR] AIM-120D x2";
    displayNameShort="AIM-120D";
    descriptionShort="Medium-Range Active Radar Guided Air-to-Air Missile";
    displayNameMFDFormat="AIM-120D";
    hardpoints[]=
    {
        "FIR_F15EX_AA_UNDER_HP"
    };
};
class FIR_AIM120_P_F22_Type1_2rnd_M: FIR_AIM120_P_1rnd_M
{
    scope=2;
    displayName="[FIR] AIM-120D x2";
    displayNameShort="AIM-120D";
    descriptionShort="Medium-Range Active Radar Guided Air-to-Air Missile";
    displayNameMFDFormat="AIM-120D";
    hardpoints[]=
    {
        "FIR_F22_AA_HP"
    };
};
class FIR_AIM120_P_F22_Type2_2rnd_M: FIR_AIM120_P_1rnd_M
{
    scope=2;
    displayName="[FIR] AIM-120D x2";
    displayNameShort="AIM-120D";
    descriptionShort="Medium-Range Active Radar Guided Air-to-Air Missile";
    displayNameMFDFormat="AIM-120D";
    hardpoints[]=
    {
        "FIR_F22_AA_HP"
    };
};
class FIR_AIM120_P_F23A_3rnd_M: FIR_AIM120_P_1rnd_M
{
    scope=2;
    displayName="[FIR] AIM-120D x3";
    displayNameShort="AIM-120D";
    descriptionShort="Medium-Range Active Radar Guided Air-to-Air Missile";
    displayNameMFDFormat="AIM-120D";
    hardpoints[]=
    {
        "FIR_F23_AA_HP"
    };
};
class FIR_AIM120_F15SE_P_1rnd_M: FIR_AIM120_P_1rnd_M
{
    scope=2;
    displayName="[FIR] AIM-120D x1";
    displayNameShort="AIM-120D";
    descriptionShort="Medium-Range Active Radar Guided Air-to-Air Missile";
    displayNameMFDFormat="AIM-120D";
    hardpoints[]=
    {
        "FIR_F15SE_AA_UNDER_HP"
    };
};


// Hidden bc they are basically useless
class FIR_AIM120A_P_1rnd_M: VehicleMagazine
{
    scope=2;
    displayName="[FIR] AIM-120A x1";
    displayNameShort="AIM-120A";
    descriptionShort="Medium-Range Active Radar Guided Air-to-Air Missile";
    displayNameMFDFormat="AIM-120A";
    hardpoints[]=
    {
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\zzFIR_AircraftSpecific_Hardpoints_AA.hpp"
    };
};
class FIR_AIM120A_LAU115_P_1rnd_M: FIR_AIM120A_P_1rnd_M
{
    scope=2;
    displayName="[FIR] AIM-120A x1 (LAU-115)";
    displayNameShort="AIM-120A";
    descriptionShort="Medium-Range Active Radar Guided Air-to-Air Missile";
    displayNameMFDFormat="AIM-120A";
    hardpoints[]=
    {
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\zzFIR_AircraftSpecific_Hardpoints_AA.hpp"
    };
};
class FIR_AIM120A_LAU115_P_2rnd_M: FIR_AIM120A_P_1rnd_M
{
    scope=2;
    displayName="[FIR] AIM-120A x2 (LAU-115)";
    displayNameShort="AIM-120A";
    descriptionShort="Medium-Range Active Radar Guided Air-to-Air Missile";
    displayNameMFDFormat="AIM-120A";
    hardpoints[]=
    {
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\zzFIR_AircraftSpecific_Hardpoints_AA.hpp"
    };
};
class FIR_AIM120B_P_1rnd_M: VehicleMagazine
{
    scope=2;
    displayName="[FIR] AIM-120A x1 (LAU-115)";
    displayNameShort="AIM-120A";
    descriptionShort="Medium-Range Active Radar Guided Air-to-Air Missile";
    displayNameMFDFormat="AIM-120A";
    hardpoints[]=
    {
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\zzFIR_AircraftSpecific_Hardpoints_AA.hpp"
    };
};
class FIR_AIM120B_LAU115_P_1rnd_M: FIR_AIM120B_P_1rnd_M
{
    scope=1;
    scopeArsenal=1;
    hardpoints[]={};
};
class FIR_AIM120B_LAU115_P_2rnd_M: VehicleMagazine
{
    scope=1;
    scopeArsenal=1;
    hardpoints[]={};
};
class FIR_AIM120B_LAU115BA_P_2rnd_M: VehicleMagazine
{
    scope=1;
    scopeArsenal=1;
    hardpoints[]={};
};
class FIR_AIM120_EWP_F14_4rnd_M: FIR_AIM120_EWP_4rnd_M
{
    scope=1;
    scopeArsenal=1;
    hardpoints[]={};
};
class FIR_AIM120_LAU115_P_1rnd_M: FIR_AIM120_P_1rnd_M
{
    scope=1;
    scopeArsenal=1;
    hardpoints[]={};
};
class FIR_AIM120_LAU115_P_2rnd_M: FIR_AIM120_P_1rnd_M
{
    scope=1;
    scopeArsenal=1;
    hardpoints[]={};
};
class FIR_AIM120_LAU115BA_P_2rnd_M: FIR_AIM120_P_1rnd_M
{
    scope=1;
    scopeArsenal=1;
    hardpoints[]={};
};
