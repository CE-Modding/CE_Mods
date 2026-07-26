class FIR_ACMI_TACTS_P_1rnd_M: VehicleMagazine
{
	scope=2;
	displayName="[FIR] TACTS Pod";
	displayNameShort="TACTS";
	descriptionShort="Tactical Aircrew Combat Training System is used to monitor air combat training";
	displayNameMFDFormat="TACTS";
	hardpoints[]=
	{
		"FIR_F16_AA_HP",
		"FIR_F15E_AA_HP",
		"FIR_FA18EF_Wingtip_HP",
		"FIR_FA18_Wingtip_HP",
		"FIR_F15C_AA_HP",
		"FIR_F22_SW_HP",
		"FIR_F14_SW_HP",
		"FIR_F2A_AA_HP",
		"FIR_F23_AA_HP",
		"FIR_F23_EX_AA_HP",
		"FIR_AV8B_NA_AA_HP",
		"FIR_EA18G_AA_HP",
		"FIR_FA181E_SW_HP",
		"FIR_FA181E_AA_HP"
	};
};
class FIR_ACMI_CUBIC_P_1rnd_M: VehicleMagazine
{
	scope=2;
	displayName="[FIR] ACMI Pod";
	displayNameShort="ACMI";
	descriptionShort="Air Combat Maneuvering Instrumentation systems record an aircrafts in-flight data";
	displayNameMFDFormat="ACMI";
	hardpoints[]=
	{
		"FIR_F16_AA_HP",
		"FIR_F15E_AA_HP",
		"FIR_FA18EF_Wingtip_HP",
		"FIR_FA18_Wingtip_HP",
		"FIR_F15C_AA_HP",
		"FIR_F2A_AA_HP",
		"FIR_F23_AA_HP",
		"FIR_F23_EX_AA_HP"
	};
};
class FIR_CATM120B_P_1rnd_M: VehicleMagazine
{
	scope=2;
	displayName="[FIR] CATM-120B x1";
    displayNameShort="CATM-120B";
    descriptionShort="Simulated AIM-120B; Medium-Range Active Radar Guided Air-to-Air Missile";
    displayNameMFDFormat="CATM-120B";
    hardpoints[]=
    {
        "FIR_F15E_AA_HP",
		"FIR_F15E_AA_UNDER_HP",
		"FIR_FA18EF_AA_HP",
		"FIR_FA18_AA_HP",
		"FIR_F15C_AA_HP",
		"FIR_F15C_AA_UNDER_HP",
		"FIR_F15A_AA_UNDER_HP",
		"FIR_F16_AA_HP",
		"FIR_F16_Combined_HP",
		"FIR_SH_AA_HP",
		"FIR_SH_Combined_HP",
		"FIR_BLUFOR_AA_HP",
		"FIR_BLUFOR_Combined_HP",
		"FIR_F23_EX_AA_HP"
    };
};
class FIR_CATM120C_P_1rnd_M: VehicleMagazine
{
	scope=2;
	displayName="[FIR] CATM-120C x1";
    displayNameShort="CATM-120C";
    descriptionShort="Simulated AIM-120C; Medium-Range Active Radar Guided Air-to-Air Missile";
    displayNameMFDFormat="CATM-120C";
    hardpoints[]=
    {
        "FIR_F15E_AA_HP",
		"FIR_F15E_AA_UNDER_HP",
		"FIR_FA18EF_AA_HP",
		"FIR_FA18_AA_HP",
		"FIR_F15C_AA_HP",
		"FIR_F15C_AA_UNDER_HP",
		"FIR_F15A_AA_UNDER_HP",
		"FIR_F16_AA_HP",
		"FIR_F16_Combined_HP",
		"FIR_SH_AA_HP",
		"FIR_SH_Combined_HP",
		"FIR_F22_AA_HP",
		"FIR_BLUFOR_AA_HP",
		"FIR_BLUFOR_Combined_HP",
		"FIR_F23_EX_AA_HP",
		"FIR_FA181E_IN_AA_HP",
		"FIR_FA181E_AA_HP"
    };
};
class FIR_CATM120C_LAU115_P_1rnd_M: FIR_CATM120C_P_1rnd_M
{
	scope=2;
	displayName="[FIR] CATM-120C x1 (LAU-115)";
    displayNameShort="CATM-120C";
    descriptionShort="Simulated AIM-120C; Medium-Range Active Radar Guided Air-to-Air Missile";
    displayNameMFDFormat="CATM-120C";
    hardpoints[]=
    {
        "FIR_EA18G_AA_HP",
		"FIR_AV8B_AA_HP",
		"FIR_FA181E_AA_HP",
		"FIR_FA18EF_Combined_HP",
		"FIR_FA18_Combined_HP"
    };
};
class FIR_CATM120C_P_F23A_3rnd_M: FIR_CATM120C_P_1rnd_M
{
	scope=2;
	displayName="[FIR] CATM-120C x3";
    displayNameShort="CATM-120C";
    descriptionShort="Simulated AIM-120C; Medium-Range Active Radar Guided Air-to-Air Missile";
    displayNameMFDFormat="CATM-120C";
    hardpoints[]=
    {
		"FIR_F23_AA_HP"
    };
};
class FIR_CATM9M_P_1rnd_M: VehicleMagazine
{
	scope=2;
	displayName="[FIR] CATM-9M x1";
    displayNameShort="CATM-9M";
    descriptionShort="Simulated AIM-9M; Short-Range IR Guided Air-to-Air Missile";
    displayNameMFDFormat="CATM-9M";
    hardpoints[]=
    {
		"FIR_F15E_AA_HP",
		"FIR_F15C_AA_HP",
		"FIR_FA18EF_Wingtip_HP",
		"FIR_FA18_Wingtip_HP",
		"FIR_F16_AA_HP",
		"FIR_F16_Combined_HP",
		"FIR_SH_Combined_HP",
		"FIR_SH_Wingtip_HP",
		"FIR_F14_SW_HP",
		"FIR_F2A_AA_HP",
		"FIR_F2A_Combined_HP",
		"FIR_F22_SW_HP",
		"FIR_BLUFOR_AA_HP",
		"FIR_BLUFOR_Combined_HP",
		"FIR_F23_SW_HP",
		"FIR_FA181E_SW_HP",
		"FIR_FA181E_AA_HP"
    };
};
class FIR_CATM9M_LAU115_P_1rnd_M: FIR_CATM9M_P_1rnd_M
{
	scope=2;
	displayName="[FIR] CATM-9M x1 (LAU-115)";
    displayNameShort="CATM-9M";
    descriptionShort="Simulated AIM-9M; Short-Range IR Guided Air-to-Air Missile";
    displayNameMFDFormat="CATM-9M";
    hardpoints[]=
    {
		"FIR_EA18G_AA_HP",
		"FIR_AV8B_NA_AA_HP",
		"FIR_FA18EF_Combined_HP",
		"FIR_FA18_Combined_HP"
    };
};
class FIR_CATM7_P_1rnd_M: VehicleMagazine
{
	scope=2;
	displayName="[FIR] CATM-7 x1";
    displayNameShort="CATM-7";
    descriptionShort="Simulated AIM-7; Medium-Range Semi-Active Radar Guided Air-to-Air Missile";
    displayNameMFDFormat="CATM-7";
    hardpoints[]=
    {
		"FIR_F14_SP_HP"
    };
};
class FIR_CATM7_2_P_1rnd_M: FIR_CATM7_P_1rnd_M
{
	scope=2;
	displayName="[FIR] CATM-7 x1";
    displayNameShort="CATM-7";
    descriptionShort="Simulated AIM-7; Medium-Range Semi-Active Radar Guided Air-to-Air Missile";
    displayNameMFDFormat="CATM-7";
    hardpoints[]=
    {
		"FIR_F15E_AA_UNDER_HP",
		"FIR_F15C_AA_UNDER_HP",
		"FIR_FA18EF_AA_HP",
		"FIR_FA18_AA_HP",
		"FIR_F15A_AA_UNDER_HP",
		"FIR_F16_Combined_HP",
		"FIR_F2A_Combined_HP",
		"FIR_SH_AA_HP",
		"FIR_SH_Combined_HP",
		"FIR_BLUFOR_AA_HP",
		"FIR_BLUFOR_Combined_HP"
    };
};
class FIR_CATM7_LAU115_P_1rnd_M: FIR_CATM7_P_1rnd_M
{
	scope=2;
	displayName="[FIR] CATM-7 x1 (LAU-115)";
    displayNameShort="CATM-7";
    descriptionShort="Simulated AIM-7; Medium-Range Semi-Active Radar Guided Air-to-Air Missile";
    displayNameMFDFormat="CATM-7";
    hardpoints[]=
    {
		"FIR_EA18G_AA_HP",
		"FIR_FA181E_AA_HP",
		"FIR_FA18EF_Combined_HP",
		"FIR_FA18_Combined_HP"
    };
};
class FIR_CATM7_P_F14_U1_1rnd_M: FIR_CATM7_P_1rnd_M
{
	scope=2;
	displayName="[FIR] CATM-7 x1";
    displayNameShort="CATM-7";
    descriptionShort="Simulated AIM-7; Medium-Range Semi-Active Radar Guided Air-to-Air Missile";
    displayNameMFDFormat="CATM-7";
    hardpoints[]=
    {
		"FIR_F14_U1_HP"
    };
};
class FIR_CATM7_P_F14_U2_1rnd_M: FIR_CATM7_P_1rnd_M
{
	scope=2;
	displayName="[FIR] CATM-7 x1";
    displayNameShort="CATM-7";
    descriptionShort="Simulated AIM-7; Medium-Range Semi-Active Radar Guided Air-to-Air Missile";
    displayNameMFDFormat="CATM-7";
    hardpoints[]=
    {
		"FIR_F14_U2_HP"
    };
};
class FIR_CATM7_P_F14_U3_1rnd_M: FIR_CATM7_P_1rnd_M
{
	scope=2;
	displayName="[FIR] CATM-7 x1";
    displayNameShort="CATM-7";
    descriptionShort="Simulated AIM-7; Medium-Range Semi-Active Radar Guided Air-to-Air Missile";
    displayNameMFDFormat="CATM-7";
    hardpoints[]=
    {
		"FIR_F14_U3_HP"
    };
};
class FIR_CATM7_P_F14_U4_1rnd_M: FIR_CATM7_P_1rnd_M
{
	scope=2;
	displayName="[FIR] CATM-7 x1";
    displayNameShort="CATM-7";
    descriptionShort="Simulated AIM-7; Medium-Range Semi-Active Radar Guided Air-to-Air Missile";
    displayNameMFDFormat="CATM-7";
    hardpoints[]=
    {
		"FIR_F14_U4_HP"
    };
};
class FIR_CATM54_P_1rnd_M: VehicleMagazine
{
	scope=2;
	displayName="[FIR] CATM-54 x1";
    displayNameShort="CATM-54";
    descriptionShort="Simulated AIM-54; Extreme-Long-Range Radar Guided Air-to-Air Missile";
    displayNameMFDFormat="CATM-54";
    hardpoints[]=
    {
		"FIR_F14_AA_HP"
    };
};
class FIR_AAM3T_P_1rnd_M: VehicleMagazine
{
	scope=2;
	displayName="[FIR] AAMT-3 x1";
    displayNameShort="AAMT-3";
    descriptionShort="Simulated AAM-3; Short-Range IR Guided Air-to-Air Missile";
    displayNameMFDFormat="AAMT-3";
    hardpoints[]=
    {
		"FIR_F15C_AA_HP",
		"FIR_F2A_AA_HP",
		"FIR_F2A_Combined_HP",
		"FIR_BLUFOR_AA_HP",
		"FIR_BLUFOR_Combined_HP"
    };
};
class FIR_AAM4T_P_1rnd_M: VehicleMagazine
{
	scope=2;
	displayName="[FIR] AAMT-4 x1";
    displayNameShort="AAMT-4";
    descriptionShort="Simulated AAM-4; Short-Range IR Guided Air-to-Air Missile";
    displayNameMFDFormat="AAMT-4";
    hardpoints[]=
    {
		"FIR_F15C_AA_HP",
		"FIR_F15C_AA_UNDER_HP",
		"FIR_F2A_AA_HP",
		"FIR_F2A_Combined_HP",
		"FIR_BLUFOR_AA_HP",
		"FIR_BLUFOR_Combined_HP"
    };
};
class FIR_BDU57_P_1rnd_M: VehicleMagazine
{
	scope=2;
	displayName="[FIR] BDU-57 LGTR x1";
    displayNameShort="BDU-57";
    descriptionShort="Simulated GBU-12; Laser Guided Bomb (500-lbs)";
    displayNameMFDFormat="BDU-57";
    hardpoints[]=
    {
		"FIR_F16_Combined_HP",
		"FIR_F16_AG_HP",
		"FIR_FA18EF_Combined_HP",
		"FIR_FA18_Combined_HP",
		"FIR_A10_BOMB_HP",
		"FIR_SH_AG_HP",
		"FIR_AV8B_AG_HP",
		"FIR_BLUFOR_AG_HP",
		"FIR_BLUFOR_Combined_HP",
		"FIR_F15SE_Midwing_HP",
		"FIR_F23_EX_AG_HP",
		"FIR_FA181E_AG_HP"
    };
};
class FIR_BDU57_P_F15E_1rnd_M: FIR_BDU57_P_1rnd_M
{
	scope=2;
	displayName="[FIR] BDU-57 LGTR x1";
    displayNameShort="BDU-57";
    descriptionShort="Simulated GBU-12; Laser Guided Bomb (500-lbs)";
    displayNameMFDFormat="BDU-57";
    hardpoints[]=
    {
		"FIR_F15E_AG_HP"
    };
};
class FIR_BDU57_P_F14_1rnd_M: FIR_BDU57_P_1rnd_M
{
	scope=2;
	displayName="[FIR] BDU-57 LGTR x1";
    displayNameShort="BDU-57";
    descriptionShort="Simulated GBU-12; Laser Guided Bomb (500-lbs)";
    displayNameMFDFormat="BDU-57";
    hardpoints[]=
    {
		"FIR_F14_Under_HP",
		"FIR_F14D_Under_HP"
    };
};
class FIR_BDU57_P_2rnd_M: FIR_BDU57_P_1rnd_M
{
	scope=2;
	displayName="[FIR] BDU-57 LGTR x2";
    displayNameShort="BDU-57";
    descriptionShort="Simulated GBU-12; Laser Guided Bomb (500-lbs)";
    displayNameMFDFormat="BDU-57";
    hardpoints[]=
    {
		"FIR_F16_Combined_HP",
		"FIR_F16_AG_HP",
		"FIR_FA18EF_Combined_HP",
		"FIR_FA18_Combined_HP",
		"FIR_A10_BOMB_HP",
		"FIR_SH_AG_HP",
		"FIR_AV8B_AG_HP",
		"FIR_BLUFOR_AG_HP",
		"FIR_BLUFOR_Combined_HP",
		"FIR_F15SE_Midwing_HP",
		"FIR_F23_EX_AG_HP",
		"FIR_FA181E_AG_HP"
    };
};
class FIR_BDU57_P_3rnd_M: FIR_BDU57_P_1rnd_M
{
	scope=2;
	displayName="[FIR] BDU-57 LGTR x3";
    displayNameShort="BDU-57";
    descriptionShort="Simulated GBU-12; Laser Guided Bomb (500-lbs)";
    displayNameMFDFormat="BDU-57";
    hardpoints[]=
    {
		"FIR_F16_Combined_HP",
		"FIR_F16_AG_HP",
		"FIR_FA18EF_Combined_HP",
		"FIR_FA18_Combined_HP",
		"FIR_A10_BOMB_HP",
		"FIR_SH_AG_HP",
		"FIR_AV8B_AG_HP",
		"FIR_BLUFOR_AG_HP",
		"FIR_BLUFOR_Combined_HP",
		"FIR_F15SE_Midwing_HP",
		"FIR_F23_EX_AG_HP",
		"FIR_FA181E_AG_HP"
    };
};
class FIR_Mk76_P_1rnd_M: VehicleMagazine
{
	scope=2;
	displayName="[FIR] MK-76 x1";
    displayNameShort="BDU-57";
    descriptionShort="Simulated Bomb (25-lbs)";
    displayNameMFDFormat="BDU-57";
    hardpoints[]=
    {
		"FIR_F16_Combined_HP",
		"FIR_F16_AG_HP",
		"FIR_FA18EF_Combined_HP",
		"FIR_FA18_Combined_HP",
		"FIR_A10_BOMB_HP",
		"FIR_SH_AG_HP",
		"FIR_AV8B_AG_HP",
		"FIR_BLUFOR_AG_HP",
		"FIR_BLUFOR_Combined_HP",
		"FIR_F15SE_Midwing_HP",
		"FIR_F23_EX_AG_HP",
		"FIR_FA181E_AG_HP"
    };
};
class FIR_Mk76_P_F15E_1rnd_M: FIR_Mk76_P_1rnd_M
{
	scope=2;
	displayName="[FIR] MK-76 x1";
    displayNameShort="BDU-57";
    descriptionShort="Simulated Bomb (25-lbs)";
    displayNameMFDFormat="BDU-57";
	hardpoints[]=
	{
		"FIR_F15E_AG_HP"
	};
};
class FIR_Mk76_P_F14_1rnd_M: FIR_Mk76_P_1rnd_M
{
	scope=2;
	displayName="[FIR] MK-76 x1";
    displayNameShort="BDU-57";
    descriptionShort="Simulated Bomb (25-lbs)";
    displayNameMFDFormat="BDU-57";
	hardpoints[]=
	{
		"FIR_F14D_Under_HP",
		"FIR_F14_Under_HP"
	};
};
class FIR_Mk76_P_2rnd_M: FIR_Mk76_P_1rnd_M
{
	scope=2;
	displayName="[FIR] MK-76 x2";
    displayNameShort="BDU-57";
    descriptionShort="Simulated Bomb (25-lbs)";
    displayNameMFDFormat="BDU-57";
	hardpoints[]=
	{
		"FIR_F16_Combined_HP",
		"FIR_F16_AG_HP",
		"FIR_FA18EF_Combined_HP",
		"FIR_FA18_Combined_HP",
		"FIR_A10_BOMB_HP",
		"FIR_F2A_Combined_HP",
		"FIR_SH_AG_HP",
		"FIR_AV8B_AG_HP",
		"FIR_BLUFOR_AG_HP",
		"FIR_BLUFOR_Combined_HP",
		"FIR_F15SE_Midwing_HP",
		"FIR_F23_EX_AG_HP",
		"FIR_FA181E_AG_HP",
		"B_MISSILE_PYLON",
		"B_AGM65_RAIL",
		"I_AGM65_RAIL"
	};
};
class FIR_Mk76_P_3rnd_M: FIR_Mk76_P_1rnd_M
{
	scope=2;
	displayName="[FIR] MK-76 x3";
    displayNameShort="BDU-57";
    descriptionShort="Simulated Bomb (25-lbs)";
    displayNameMFDFormat="BDU-57";
	hardpoints[]=
	{
		"FIR_F16_Combined_HP",
		"FIR_F16_AG_HP",
		"FIR_FA18EF_Combined_HP",
		"FIR_FA18_Combined_HP",
		"FIR_A10_BOMB_HP",
		"FIR_F2A_Combined_HP",
		"FIR_SH_AG_HP",
		"FIR_AV8B_AG_HP",
		"FIR_BLUFOR_AG_HP",
		"FIR_BLUFOR_Combined_HP",
		"FIR_F15SE_Midwing_HP",
		"FIR_F23_EX_AG_HP",
		"FIR_FA181E_AG_HP",
		"B_MISSILE_PYLON",
		"B_AGM65_RAIL",
		"I_AGM65_RAIL"
	};
};