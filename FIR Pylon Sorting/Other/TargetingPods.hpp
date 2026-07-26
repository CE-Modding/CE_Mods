class FIR_ALQ99_P_1rnd_M: VehicleMagazine
{
    scope=2;
    displayName="[FIR] AN/ALQ-99";
    displayNameShort="ALQ-99";
    descriptionShort="External electronic countermeasures pod, provides protection against radar directed weapons";
    displayNameMFDFormat="ECM";
    hardpoints[]=
    {
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\ECM_Hardpoints.hpp"
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\zzFIR_AircraftSpecific_Hardpoints_General.hpp"
    };
};
class FIR_ALQ99_EA6B_P_1rnd_M: FIR_ALQ99_P_1rnd_M
{
    scope=2;
    displayName="[FIR] AN/ALQ-99";
    displayNameShort="ALQ-99";
    descriptionShort="External electronic countermeasures pod, provides protection against radar directed weapons";
    displayNameMFDFormat="ECM";
    hardpoints[]=
    {
        "FIR_EA6B_WING_HP"
    };
};
class FIR_ALQ76_P_1rnd_M: FIR_ALQ99_P_1rnd_M
{
	 scope=2;
    displayName="[FIR] AN/ALQ-76";
    displayNameShort="ALQ-76";
    descriptionShort="External electronic countermeasures pod, provides protection against radar directed weapons";
    displayNameMFDFormat="ECM";
	hardpoints[]=
	{
		"FIR_UNS_ALQ76"
	};
};
class FIR_ALQ99Hi_P_1rnd_M: FIR_ALQ99_P_1rnd_M
{
	 scope=2;
    displayName="[FIR] AN/ALQ-99 (HIGH-FREQ)";
    displayNameShort="ALQ-99";
    descriptionShort="External electronic countermeasures pod, provides protection against radar directed weapons";
    displayNameMFDFormat="ECM-HF";
	hardpoints[]=
	{
		"FIR_SH_Under_HP",
		"FIR_EA18G_Under_HP",
		"FIR_EA6B_Under_HP"
	};
	AWS_ECM_STAT=0.07;
};
class FIR_ALQ99Hi_EA6B_P_1rnd_M: FIR_ALQ99Hi_P_1rnd_M
{
	 scope=2;
    displayName="[FIR] AN/ALQ-99 (HIGH-FREQ)";
    displayNameShort="ALQ-99";
    descriptionShort="External electronic countermeasures pod, provides protection against radar directed weapons";
    displayNameMFDFormat="ECM-HF";
	hardpoints[]=
	{
		"FIR_EA6B_WING_HP"
	};
};
class FIR_ECMPod_P_1rnd_M: VehicleMagazine
{
	scope=2;
	displayName="[FIR] AN/ALQ-131 ECM Pod";
	displayNameShort="ALQ-131";
	descriptionShort="External electronic countermeasures pod, provides protection against radar directed weapons";
	displayNameMFDFormat="ECM";
	hardpoints[]=
	{
		"FIR_F16_Under_HP",
		"FIR_A10_JAM_HP",
		"FIR_F15A_ECM_Center_HP",
		#include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\ECM_Hardpoints.hpp"
	};
};
class FIR_ECMPod_Camo_P_1rnd_M: FIR_ECMPod_P_1rnd_M
{
	scope=2;
	displayName="[FIR] AN/ALQ-131 ECM Pod (Camo)";
	displayNameShort="ALQ-131";
	descriptionShort="External electronic countermeasures pod, provides protection against radar directed weapons";
	displayNameMFDFormat="ECM";
	hardpoints[]=
	{
		"FIR_F16_Under_HP",
		"FIR_A10_JAM_HP",
		"FIR_F15A_ECM_Center_HP",
		#include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\ECM_Hardpoints.hpp"
	};
};
class FIR_ECMPod_F15A_P_1rnd_M: FIR_ECMPod_P_1rnd_M
{
	scope=2;
	displayName="[FIR] AN/ALQ-131 ECM Pod (Camo)";
	displayNameShort="ALQ-131";
	descriptionShort="External electronic countermeasures pod, provides protection against radar directed weapons";
	displayNameMFDFormat="ECM";
	hardpoints[]=
	{
		"FIR_F15A_ECM_HP"
	};
};
class FIR_ALQ184_1_P_1rnd_M: VehicleMagazine
{
	scope=2;
	displayName="[FIR] AN/ALQ-184 ECM Pod";
	displayNameShort="ALQ-184";
	descriptionShort="External electronic countermeasures pod, provides protection against radar directed weapons";
	displayNameMFDFormat="ECM";
	hardpoints[]=
	{
		"FIR_F16_Under_HP"
	};
};
class FIR_ALQ184_2_P_1rnd_M: FIR_ALQ184_1_P_1rnd_M
{
	scope=2;
	displayName="[FIR] AN/ALQ-184 ECM Pod";
	displayNameShort="ALQ-184";
	descriptionShort="External electronic countermeasures pod, provides protection against radar directed weapons";
	displayNameMFDFormat="ECM";
	hardpoints[]=
	{
		"FIR_A10C_JAM_HP"
	};
};
class FIR_ALQ119_1_P_1rnd_M: VehicleMagazine
{
	scope=2;
	displayName="[FIR] AN/ALQ-119 ECM Pod";
	displayNameShort="ALQ-119";
	descriptionShort="External electronic countermeasures pod, provides protection against radar directed weapons";
	displayNameMFDFormat="ECM";
	hardpoints[]=
	{
		"FIR_F16_Under_HP",
		"FIR_F15A_ECM_Center_HP"
	};
};
class FIR_ALQ119_2_P_1rnd_M: FIR_ALQ119_1_P_1rnd_M
{
	scope=2;
	displayName="[FIR] AN/ALQ-119 ECM Pod";
	displayNameShort="ALQ-119";
	descriptionShort="External electronic countermeasures pod, provides protection against radar directed weapons";
	displayNameMFDFormat="ECM";
	hardpoints[]=
	{
		"FIR_A10C_JAM_HP"
	};
};
class FIR_ALQ119_F15A_P_1rnd_M: FIR_ALQ119_1_P_1rnd_M
{
	scope=2;
	displayName="[FIR] AN/ALQ-119 ECM Pod";
	displayNameShort="ALQ-119";
	descriptionShort="External electronic countermeasures pod, provides protection against radar directed weapons";
	displayNameMFDFormat="ECM";
	hardpoints[]=
	{
		"FIR_F15A_ECM_HP"
	};
};
class FIR_ALQ188_1_P_1rnd_M: VehicleMagazine
{
	scope=2;
	displayName="[FIR] AN/ALQ-188 ECM Pod";
	displayNameShort="ALQ-188";
	descriptionShort="External electronic countermeasures pod, provides protection against radar directed weapons";
	displayNameMFDFormat="ECM";
	hardpoints[]=
	{
		"FIR_F16_Under_HP"
	};
};
class FIR_Tiger2_P_1rnd_M: VehicleMagazine
{
	scope=2;
	displayName="[FIR] Intrepid Tiger II ECM Pod";
	displayNameShort="ALQ-188";
	descriptionShort="External electronic countermeasures pod, provides protection against radar directed weapons";
	displayNameMFDFormat="ECM";
	hardpoints[]=
	{
		"FIR_AV8B_ECM_HP",
		"FIR_FA18_Combined_HP"
	};
};
class FIR_ALQ167_P_1rnd_M: VehicleMagazine
{
	scope=2;
	displayName="[FIR] AN/ALQ-167 ECM Pod";
	displayNameShort="ALQ-167";
	descriptionShort="External electronic countermeasures pod, provides protection against radar directed weapons";
	displayNameMFDFormat="ECM";
	hardpoints[]=
	{
		"FIR_F16_Under_HP"
	};
};	