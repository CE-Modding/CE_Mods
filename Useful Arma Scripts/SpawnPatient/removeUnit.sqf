
if (!isNil 'patient') then {

    [patient, true] call BIS_fnc_VRSpawnEffect;

    sleep 2;
    deleteVehicle patient;

    systemChat 'Removed the patient.'
} else {

    systemChat 'Theres no patient to remove. Please create one.';

}
