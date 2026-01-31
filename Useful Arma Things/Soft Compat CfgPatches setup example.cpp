class CfgPatches
{
	class ModName_CompatName // ex: CE_RHS_EF (CE_RHS being modname, EF being exped forces )
	{
		units[]=					// we are editing these units. 
		{
			"Land_EF_LPD_base",
			"Land_EF_LPD_hull_02" 
		};
		weapons[]={};
		requiredVersion=2;			// A3 2.0 required. 
		requiredAddons[]=
		{
			"EF_LPD_C",				// Required bc we are editing units in this mod for this example
			"CE_MAIN",
			"CE_Naval",
			"CE_Naval_Ships"
		};
		magazines[]={};
		addonRootClass=CE_Naval;	// isnt required but can be useful to have an addon within an addon. 
		skipWhenMissingDependencies=1; // When the requiredAddons cannot be found, in this case "EF_LPD_C", the entire config is skipped. 
	};
};