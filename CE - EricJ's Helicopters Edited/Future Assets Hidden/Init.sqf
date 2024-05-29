/* ----------------------------------------------------------------------------
Internal Function: CBA_settings_fnc_init

Description:
    Creates a new setting for that session.

Parameters:
    _setting     - Unique setting name. Matches resulting variable name <STRING>
    _settingType - Type of setting. Can be "CHECKBOX", "EDITBOX", "LIST", "SLIDER" or "COLOR" <STRING>
    _title       - Display name or display name + tooltip (optional, default: same as setting name) <STRING, ARRAY>
    _category    - Category for the settings menu + optional sub-category <STRING, ARRAY>
    _valueInfo   - Extra properties of the setting depending of _settingType. See examples below <ANY>
    _isGlobal    - 1: all clients share the same setting, 2: setting can't be overwritten (optional, default: 0) <BOOL, NUMBER>
    _script      - Script to execute when setting is changed. (optional) <CODE>
    _needRestart - Setting will be marked as needing mission restart after being changed. (optional, default false) <BOOL>

Returns:
    _return - Error code <NUMBER>
        0: Success, no error
        1: Failure, error

Examples:
    (begin example)
        // CHECKBOX --- extra argument: default value
        ["Test_Setting_1", "CHECKBOX", ["-test checkbox-", "-tooltip-"], "My Category", true] call cba_settings_fnc_init;

        // LIST --- extra arguments: [_values, _valueTitles, _defaultIndex]
        ["Test_Setting_2", "LIST",     ["-test list-",     "-tooltip-"], "My Category", [[1, 0], ["enabled","disabled"], 1]] call cba_settings_fnc_init;

        // SLIDER --- extra arguments: [_min, _max, _default, _trailingDecimals, _isPercentage]
        ["Test_Setting_3", "SLIDER",   ["-test slider-",   "-tooltip-"], "My Category", [0, 10, 5, 0]] call cba_settings_fnc_init;

        // COLOR PICKER --- extra argument: _color
        ["Test_Setting_4", "COLOR",    ["-test color-",    "-tooltip-"], "My Category", [1, 1, 0]] call cba_settings_fnc_init;

        // EDITBOX --- extra argument: default value
        ["Test_Setting_5", "EDITBOX",  ["-test editbox-", "-tooltip-"], "My Category", "defaultValue"] call cba_settings_fnc_init;

        // TIME PICKER (time in seconds) --- extra arguments: [_min, _max, _default]
        ["Test_Setting_6", "TIME",     ["-test time-",    "-tooltip-"], "My Category", [0, 3600, 60]] call cba_settings_fnc_init;
    (end)

Author:
    commy2
---------------------------------------------------------------------------- */


/* ----------------------------------------------------------------------------
Create CBA Setting Options that "scope=0;"'s the assets when checkboxed

atm its just a config with scope=0; on everything. 
but i'd rather have a CBA setting that does that, or atleast hides them from the menu. 

aka Checkboxing an option hides/removes those assets from the game so no one can place them. 

---------------------------------------------------------------------------- */

["CE_EjHeliHide_UH60M", "Checkbox", ["Hide UH-60 Assets", "Hides all assets that are contained within the UH-60 pbo"], "EricJ Helicopters : UH-60", true] call cba_settings_fnc_init

["CE_EjHeliHide_MH6J", "Checkbox", ["Hide MH-6J Assets", "Hides all assets that are contained within the MH-6J pbo"], "EricJ Helicopters : MH-6J", true] call cba_settings_fnc_init

["CE_EjHeliHide_Futuristic", "Checkbox", ["Hide Futuristic Assets", "Hides all assets that are considered to be futuristic.. AH-92, UH-92, S-94, MH-80"], "EricJ Helicopters : Futuristic Assets", true] call cba_settings_fnc_init

["CE_EjHeliHide_PeopleEquipment", "Checkbox", ["Hide all Personnel and Equipment", "Hides all AI Personnel and any Equipment they use"], "EricJ Helicopters : Personnel and Equipment", true] call cba_settings_fnc_init

