class FIR_IRIS_T_P_1rnd_M: VehicleMagazine
{
    scope=2;
    displayName="[FIR] IRIS-T x1";
    displayNameShort="IRIS-T";
    descriptionShort="Short-Range IR Guided Air-to-Air Missile";
    displayNameMFDFormat="IRIS-T";
    hardpoints[]=
    {
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\AA_ShortRange_Missile_Hardpoints.hpp"
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\zzFIR_AircraftSpecific_Hardpoints_AA.hpp"
    };
};
class FIR_AAM3_P_1rnd_M: VehicleMagazine
{
    scope=2;
    displayName="[FIR] AAM-3 x1";
    displayNameShort="AAM-3";
    descriptionShort="Short-Range IR Guided Air-to-Air Missile";
    displayNameMFDFormat="AAM-3";
    hardpoints[]=
    {
        "FIR_F15C_AA_HP",
        "FIR_F2A_AA_HP"
    };
};
class FIR_AAM5_P_1rnd_M: VehicleMagazine
{
    scope=2;
    displayName="[FIR] AAM-5 x1";
    displayNameShort="AAM-5";
    descriptionShort="Short-Range IR Guided Air-to-Air Missile";
    displayNameMFDFormat="AAM-5";
    hardpoints[]=
    {
        "FIR_F15C_AA_HP",
        "FIR_F2A_AA_HP"
    };
};
class FIR_Meteor_P_1rnd_M: VehicleMagazine
{
    scope=2;
    displayName="[FIR] MBDA Meteor x1";
    displayNameShort="MBDA Meteor";
    descriptionShort="Long-Range Radar Guided Air-to-Air Missile";
    displayNameMFDFormat="Meteor";
    hardpoints[]=
    {
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\AA_LongRange_Missile_Hardpoints.hpp"
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\zzFIR_AircraftSpecific_Hardpoints_AA.hpp"
    };
};
class FIR_AIM54_P_1rnd_M: VehicleMagazine
{
    scope=2;
    displayName="[FIR] AIM-54C x1";
    displayNameShort="AIM-54C";
    descriptionShort="Extreme-Long-Range Radar Guided Air-to-Air Missile";
    displayNameMFDFormat="AIM-54C";
    hardpoints[]=
    {
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\AA_LongRange_Missile_Hardpoints.hpp"
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\zzFIR_AircraftSpecific_Hardpoints_AA.hpp"
    };
};
class FIR_AIM54_LAU93_P_1rnd_M: FIR_AIM54_P_1rnd_M
{
    scope=2;
    displayName="[FIR] AIM-54C x1 (LAU-93)";
    displayNameShort="AIM-54C";
    descriptionShort="Extreme-Long-Range Radar Guided Air-to-Air Missile";
    displayNameMFDFormat="AIM-54C";
    hardpoints[]=
    {
        "FIR_F14_AA_HP"
    };
};
class FIR_AIM174_P_1rnd_M: VehicleMagazine
{
    scope=2;
    displayName="[FIR] AIM-174 x1 (LAU-93)";
    displayNameShort="AIM-174";
    descriptionShort="Extreme-Long-Range Radar Guided Air-to-Air Missile";
    displayNameMFDFormat="AIM-174";
    hardpoints[]=
    {
        "FIR_FA18EF_AA_HP"
    };
};
// Hidden bc they are basically useless
class FIR_AIM132_P_1rnd_M: VehicleMagazine
{
    scope=1;
    scopeArsenal=1;
    hardpoints[]={};
};
class FIR_AIM54A_P_1rnd_M: FIR_AIM54_P_1rnd_M
{
    scope=1;
    scopeArsenal=1;
    hardpoints[]={};
};
class FIR_AIM54A_LAU93_P_1rnd_M: FIR_AIM54A_P_1rnd_M
{
    scope=1;
    scopeArsenal=1;
    hardpoints[]={};
};