class FIR_AGM114_Base_P_4rnd_M: VehicleMagazine
{
    scope=2;
    displayName="[FIR] AGM-114K x3";
    displayNameShort="AGM-114K";
    descriptionShort="Semi-Active Laser Guided Air-to-Surface Missile";
    displayNameMFDFormat="AGM-114K";
    hardpoints[]=
    {
       "FIR_KC130J_Wingtip_HP"
    };
};
class FIR_Brimstone_std_P_3rnd_M: VehicleMagazine
{
    scope=2;
    displayName="[FIR] Brimstone x3";
    displayNameShort="Brimstone";
    descriptionShort="Radar Guided Air-to-Surface Missile";
    displayNameMFDFormat="Brimstone";
    hardpoints[]=
    {
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\AGM_ShortRange_Radar_Hardpoints.hpp"
       "FIR_AV8B_GR_AG_HP"
    };
};
class FIR_Brimstone_type1_P_3rnd_M: FIR_Brimstone_std_P_3rnd_M
{
    scope=2;
    displayName="[FIR] Brimstone x3";
    displayNameShort="Brimstone";
    descriptionShort="Radar Guided Air-to-Surface Missile";
    displayNameMFDFormat="Brimstone";
    hardpoints[]=
    {
       "FIR_Tornado_UnderFront_HP"
    };
};
class FIR_Brimstone_type2_P_3rnd_M: FIR_Brimstone_std_P_3rnd_M
{
    scope=2;
    displayName="[FIR] Brimstone x3";
    displayNameShort="Brimstone";
    descriptionShort="Radar Guided Air-to-Surface Missile";
    displayNameMFDFormat="Brimstone";
    hardpoints[]=
    {
       "FIR_Tornado_UnderRear_HP"
    };
};
class FIR_Brimstone_DM_std_P_3rnd_M: FIR_Brimstone_std_P_3rnd_M
{
   displayName="[FIR] Brimstone Dual-Mode x3";
    displayNameShort="Brimstone";
    descriptionShort="Radar/Laser Guided Air-to-Surface Missile";
    displayNameMFDFormat="Brimstone";
    hardpoints[]=
    {
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\AGM_ShortRange_Radar_Hardpoints.hpp"
        #include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\AGM_ShortRange_Laser_Hardpoints.hpp"
       "FIR_AV8B_GR_AG_HP"
    };
};
class FIR_Brimstone_DM_type1_P_3rnd_M: FIR_Brimstone_DM_std_P_3rnd_M
{
    scope=2;
    displayName="[FIR] Brimstone Dual-Mode x3";
    displayNameShort="Brimstone";
    descriptionShort="Radar/Laser Guided Air-to-Surface Missile";
    displayNameMFDFormat="Brimstone";
    hardpoints[]=
    {
       "FIR_Tornado_UnderFront_HP"
    };
};
class FIR_Brimstone_DM_type2_P_3rnd_M: FIR_Brimstone_DM_std_P_3rnd_M
{
    scope=2;
    displayName="[FIR] Brimstone Dual-Mode x3";
    displayNameShort="Brimstone";
    descriptionShort="Radar/Laser Guided Air-to-Surface Missile";
    displayNameMFDFormat="Brimstone";
    hardpoints[]=
    {
       "FIR_Tornado_UnderRear_HP"
    };
};