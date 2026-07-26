class FIR_AIM7_P_1rnd_M: VehicleMagazine
{
    scope=2;
    displayName="[FIR] AIM-7 x1";
    displayNameShort="AIM-7";
    descriptionShort="Medium-Range Semi-Active Radar Guided Air-to-Air Missile";
    displayNameMFDFormat="AIM-7";
    hardpoints[]=
    {
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\AA_LongRange_Missile_Hardpoints.hpp"
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\zzFIR_AircraftSpecific_Hardpoints_AA.hpp"
    };
};
class FIR_AIM7_2_P_1rnd_M: FIR_AIM7_P_1rnd_M
{
    scope=2;
    displayName="[FIR] AIM-7 x2";
    displayNameShort="AIM-7";
    descriptionShort="Medium-Range Semi-Active Radar Guided Air-to-Air Missile";
    displayNameMFDFormat="AIM-7";
    hardpoints[]=
    {
       #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\AA_LongRange_Missile_Hardpoints.hpp"
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\zzFIR_AircraftSpecific_Hardpoints_AA.hpp"
    };
};
class FIR_AIM7_P_F14_U1_1rnd_M: FIR_AIM7_P_1rnd_M
{
    scope=2;
    displayName="[FIR] AIM-7 x1";
    displayNameShort="AIM-7";
    descriptionShort="Medium-Range Semi-Active Radar Guided Air-to-Air Missile";
    displayNameMFDFormat="AIM-7";
    hardpoints[]=
    {
        "FIR_F14_U1_HP"
    };
};
class FIR_AIM7_P_F14_U2_1rnd_M: FIR_AIM7_P_1rnd_M
{
    scope=2;
    displayName="[FIR] AIM-7 x1";
    displayNameShort="AIM-7";
    descriptionShort="Medium-Range Semi-Active Radar Guided Air-to-Air Missile";
    displayNameMFDFormat="AIM-7";
    hardpoints[]=
    {
        "FIR_F14_U2_HP"
    };
};
class FIR_AIM7_P_F14_U3_1rnd_M: FIR_AIM7_P_1rnd_M
{
    scope=2;
    displayName="[FIR] AIM-7 x1";
    displayNameShort="AIM-7";
    descriptionShort="Medium-Range Semi-Active Radar Guided Air-to-Air Missile";
    displayNameMFDFormat="AIM-7";
    hardpoints[]=
    {
        "FIR_F14_U3_HP"
    };
};
class FIR_AIM7_P_F14_U4_1rnd_M: FIR_AIM7_P_1rnd_M
{
    scope=2;
    displayName="[FIR] AIM-7 x1";
    displayNameShort="AIM-7";
    descriptionShort="Medium-Range Semi-Active Radar Guided Air-to-Air Missile";
    displayNameMFDFormat="AIM-7";
    hardpoints[]=
    {
        "FIR_F14_U4_HP"
    };
};
class FIR_Skyflash_P_1rnd_M: VehicleMagazine
{
    scope=2;
    displayName="[FIR] AIM-7 Skyflash x1";
    displayNameShort="AIM-7 Skyflash";
    descriptionShort="Medium-Range Semi-Active Radar Air-to-Air Missile";
    displayNameMFDFormat="Skyflash";
    hardpoints[]=
    {
        "FIR_Tornado_AA_HP"
    };
};

// Hidden bc they are basically useless
class FIR_AIM7_LAU115_P_1rnd_M: FIR_AIM7_P_1rnd_M
{
    scope=2;
    displayName="[FIR] AIM-7 x1 (LAU-115)";
    displayNameShort="AIM-7";
    descriptionShort="Medium-Range Semi-Active Radar Guided Air-to-Air Missile";
    displayNameMFDFormat="AIM-7";
    hardpoints[]=
    {
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\zzFIR_AircraftSpecific_Hardpoints_AA.hpp"
    };
};
class FIR_AIM7F_P_1rnd_M: VehicleMagazine
{
    scope=2;
    displayName="[FIR] AIM-7F x1";
    displayNameShort="AIM-7F";
    descriptionShort="Medium-Range Semi-Active Radar Guided Air-to-Air Missile";
    displayNameMFDFormat="AIM-7F";
    hardpoints[]=
    {
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\zzFIR_AircraftSpecific_Hardpoints_AA.hpp"
    };
};
class FIR_AIM7F_2_P_1rnd_M: FIR_AIM7F_P_1rnd_M
{
    scope=2;
    displayName="[FIR] AIM-7F x2";
    displayNameShort="AIM-7F";
    descriptionShort="Medium-Range Semi-Active Radar Guided Air-to-Air Missile";
    displayNameMFDFormat="AIM-7F";
    hardpoints[]=
    {
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\zzFIR_AircraftSpecific_Hardpoints_AA.hpp"
    };
};
class FIR_AIM7F_LAU115_P_1rnd_M: FIR_AIM7F_P_1rnd_M
{
    scope=2;
    displayName="[FIR] AIM-7F x1 (LAU-115)";
    displayNameShort="AIM-7F";
    descriptionShort="Medium-Range Semi-Active Radar Guided Air-to-Air Missile";
    displayNameMFDFormat="AIM-7F";
    hardpoints[]=
    {
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\zzFIR_AircraftSpecific_Hardpoints_AA.hpp"
    };
};
class FIR_AIM7F_P_F14_U1_1rnd_M: FIR_AIM7F_P_1rnd_M
{
    scope=2;
    displayName="[FIR] AIM-7F x1";
    displayNameShort="AIM-7F";
    descriptionShort="Medium-Range Semi-Active Radar Guided Air-to-Air Missile";
    displayNameMFDFormat="AIM-7F";
    hardpoints[]=
    {
        "FIR_F14_AA_HP"
    };
};
class FIR_AIM7F_P_F14_U2_1rnd_M: FIR_AIM7F_P_1rnd_M
{
    scope=2;
    displayName="[FIR] AIM-7F x1";
    displayNameShort="AIM-7F";
    descriptionShort="Medium-Range Semi-Active Radar Guided Air-to-Air Missile";
    displayNameMFDFormat="AIM-7F";
    hardpoints[]=
    {
        "FIR_F14_AA_HP"
    };
};
class FIR_AIM7F_P_F14_U3_1rnd_M: FIR_AIM7F_P_1rnd_M
{
    scope=2;
    displayName="[FIR] AIM-7F x1";
    displayNameShort="AIM-7F";
    descriptionShort="Medium-Range Semi-Active Radar Guided Air-to-Air Missile";
    displayNameMFDFormat="AIM-7F";
    hardpoints[]=
    {
        "FIR_F14_AA_HP"
    };
};
class FIR_AIM7F_P_F14_U4_1rnd_M: FIR_AIM7F_P_1rnd_M
{
    scope=2;
    displayName="[FIR] AIM-7F x1";
    displayNameShort="AIM-7F";
    descriptionShort="Medium-Range Semi-Active Radar Guided Air-to-Air Missile";
    displayNameMFDFormat="AIM-7F";
    hardpoints[]=
    {
        "FIR_F14_AA_HP"
    };
};
class FIR_AIM7E_P_1rnd_M: VehicleMagazine
{
    scope=2;
    displayName="[FIR] AIM-7E x1";
    displayNameShort="AIM-7E";
    descriptionShort="Medium-Range Semi-Active Radar Guided Air-to-Air Missile";
    displayNameMFDFormat="AIM-7E";
    hardpoints[]=
    {
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\zzFIR_AircraftSpecific_Hardpoints_AA.hpp"
    };
};
class FIR_AIM7E_2_P_1rnd_M: FIR_AIM7E_P_1rnd_M
{
    scope=2;
    displayName="[FIR] AIM-7E x2";
    displayNameShort="AIM-7E";
    descriptionShort="Medium-Range Semi-Active Radar Guided Air-to-Air Missile";
    displayNameMFDFormat="AIM-7E";
    hardpoints[]=
    {
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\zzFIR_AircraftSpecific_Hardpoints_AA.hpp"
    };
};
class FIR_AIM7E_P_F14_U1_1rnd_M: FIR_AIM7E_P_1rnd_M
{
    scope=2;
    displayName="[FIR] AIM-7E x1";
    displayNameShort="AIM-7E";
    descriptionShort="Medium-Range Semi-Active Radar Guided Air-to-Air Missile";
    displayNameMFDFormat="AIM-7E";
    hardpoints[]=
    {
        "FIR_F14_AA_HP"
    };
};
class FIR_AIM7E_P_F14_U2_1rnd_M: FIR_AIM7E_P_1rnd_M
{
    scope=2;
    displayName="[FIR] AIM-7E x1";
    displayNameShort="AIM-7E";
    descriptionShort="Medium-Range Semi-Active Radar Guided Air-to-Air Missile";
    displayNameMFDFormat="AIM-7E";
    hardpoints[]=
    {
        "FIR_F14_AA_HP"
    };
};
class FIR_AIM7E_P_F14_U3_1rnd_M: FIR_AIM7E_P_1rnd_M
{
    scope=2;
    displayName="[FIR] AIM-7E x1";
    displayNameShort="AIM-7E";
    descriptionShort="Medium-Range Semi-Active Radar Guided Air-to-Air Missile";
    displayNameMFDFormat="AIM-7E";
    hardpoints[]=
    {
        "FIR_F14_AA_HP"
    };
};
class FIR_AIM7E_P_F14_U4_1rnd_M: FIR_AIM7E_P_1rnd_M
{
    scope=2;
    displayName="[FIR] AIM-7E x1";
    displayNameShort="AIM-7E";
    descriptionShort="Medium-Range Semi-Active Radar Guided Air-to-Air Missile";
    displayNameMFDFormat="AIM-7E";
    hardpoints[]=
    {
        "FIR_F14_AA_HP"
    };
};