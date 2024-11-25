## AH-6M

### PBO Name: 
CE_RHSUSAF_AH6M

### Description: 
Aims to upgrade or improve various RHS USAF assets (Specifically the MH/AH-6M 'Littlebird')

### Assets Provided:
- MH-6M
  - Upgraded performance and maneuverability.
  - Useage of CE_Flares (Uses the 480rnd flare "Magazine" + Has 10x "reloads").
  - Upgraded Sensors including Datalinking.

- AH-6M (Includes points above)
  - Increased fuel capacity.
  - Added more pylon presets (See Bottom of this file) .
 

### Addons Required:
```
"rhsusf_main",
"rhsusf_c_airweapons",
"rhsusf_c_heavyweapons",
"rhsusf_c_melb",
"CE_MAIN",
"CE_Air_Munitions",
"CE_Flares"
```

### Addons Not Required, but loading them alongside this mod will improve things inside this mod:
```
"CE_RHSUSAF_HMDs"
```

### AH-6M Pylon Presets
```
class Standard
{
  attachment[]=
  {
    "rhs_mag_M151_7",
    "rhs_mag_m134_pylon_3000",
    "rhs_mag_m134_pylon_3000",
    "rhs_mag_M151_7"
  };
  displayname="Standard (M134{AP}+RKT)";
};
class Standard_SLAP
{
  attachment[]=
  {
    "rhs_mag_M151_7",
    "RHS_weap_m134_pylon_SLAP",
    "RHS_weap_m134_pylon_SLAP",
    "rhs_mag_M151_7"
  };
  displayname="Standard (M134{SLAP}+RKT)";
};
class CE_CAS
{
  attachment[]=
  {
    "rhs_mag_ATAS_2",
    "rhs_mag_M229_19",
    "rhs_mag_M229_19",
    "rhsusf_mag_gau19_melb_right"
  };
  displayname="Heavy CAS (GAU+RKT+ATAS)";
};
class CE_CAS_SLAP
{
  attachment[]=
  {
    "rhs_mag_M229_19",
    "RHS_weap_m134_pylon_SLAP",
    "RHS_weap_m134_pylon_SLAP",
    "rhsusf_mag_gau19_melb_right"
  };
  displayname="Heavy CAS (GAU+M134{SLAP}+RKT)";
};
```
