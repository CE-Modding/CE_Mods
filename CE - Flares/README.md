## Flares

### PBO Name: 
CE_Flares

### Description: 
This is an edit of aviation flares. 
**This will not work on any vehicle that doesn't have the "CE_CMLauncher" that this mod creates aka it will only work on vehicles that require this mod. **
  - Firstly they combine IR and Chaff into one single flare, which does in fact matter (even more so when using RHS with its IR tracking munitions).
  - Secondly, it has alot more options that just Single / 3-5 aka mulitple.
  - Thirdly, it has alot more potential "magazines" the biggest of which being 480rnd.
    
### Adding Support to Non - CalEagle Modding assets
I highly suggest you add support in this order:
  - You need to add "CE_Flares" to the required addons of your mod.
  - You need to properly inherit the desired aircraft that you wish to change.
  - Under the 'Weapons[]={};' section, you need to add "CE_CMLauncher".
  - Under the 'Magazines[]={};' section, you need to add the desired Flare Magazine, as well as how many spare magazines you want.
    - For the RHS USAF AH-6M Mod, I have 10 Magazines.
  - Double check that further iteration of your aircraft do not inherit/override the 'Weapons[]={};' or 'Magazines[]={};' sections.

**'Weapons[]={};' section example, using the RHS USAF AH-6M:**
    weapons[]=
		{
			"rhs_weap_laserDesignator_AI",
			"CE_CMLauncher"
		};

**'Magazines[]={};'' section example, using the RHS USAF AH-6M:**
    magazines[]=
		{
			"rhs_laserfcsmag",
			"CE_480rnd_CMFlare_Chaff_Magazine",
			"CE_480rnd_CMFlare_Chaff_Magazine",
			"CE_480rnd_CMFlare_Chaff_Magazine",
			"CE_480rnd_CMFlare_Chaff_Magazine",
			"CE_480rnd_CMFlare_Chaff_Magazine",
			"CE_480rnd_CMFlare_Chaff_Magazine",
			"CE_480rnd_CMFlare_Chaff_Magazine",
			"CE_480rnd_CMFlare_Chaff_Magazine",
			"CE_480rnd_CMFlare_Chaff_Magazine",
			"CE_480rnd_CMFlare_Chaff_Magazine"
		};
