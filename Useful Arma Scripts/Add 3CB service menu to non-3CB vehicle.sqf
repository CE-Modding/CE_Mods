this addAction [
  "Servicing Menu", 
  { createDialog 'UK3CB_Servicing_GUI_Dialog' },
  nil,
  1.5,
  true,
  true,
  "",
  "[_target] call UK3CB_BAF_Vehicles_Weapons_fnc_can_service_air_vehicle" 
]