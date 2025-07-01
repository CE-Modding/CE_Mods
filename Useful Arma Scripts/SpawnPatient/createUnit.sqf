// Create the unit on the given point
'B_Soldier_VR_F' createUnit [getPos vr_area, createGroup blufor,'patient=this; [patient] call BIS_fnc_VRSpawnEffect; doStop patient'];

// Applying the injuries to the body parts of the patient
[patient, selectRandom[0.1,0.3,0.5,0.7,0.9], 'head', selectRandom['stab','bullet','falling']] call ace_medical_fnc_addDamageToUnit;
[patient, selectRandom[0.1,0.3,0.5,0.7,0.9], 'body', selectRandom['stab','bullet','falling']] call ace_medical_fnc_addDamageToUnit;

[patient, selectRandom[0.1,0.3,0.5,0.7,0.9], 'hand_r', selectRandom['stab','bullet','falling']] call ace_medical_fnc_addDamageToUnit;
[patient, selectRandom[0.1,0.3,0.5,0.7,0.9], 'hand_l', selectRandom['stab','bullet','falling']] call ace_medical_fnc_addDamageToUnit;

[patient, selectRandom[0.1,0.3,0.5,0.7,0.9], 'leg_r', selectRandom['stab','bullet','falling']] call ace_medical_fnc_addDamageToUnit;
[patient, selectRandom[0.1,0.3,0.5,0.7,0.9], 'leg_l', selectRandom['stab','bullet','falling']] call ace_medical_fnc_addDamageToUnit;

// Set ACE3 damage to ARMA damage, causing the unit to visually bleed.
[patient] call ace_medical_fnc_handleDamage_advancedSetDamage;

// Make the patient globally usable
publicVariable 'patient';
