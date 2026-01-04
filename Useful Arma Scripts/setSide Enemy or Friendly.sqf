// These should be placed in the init.sqf within the mission file. 
// bi wiki info: https://community.bistudio.com/wiki/setFriend
// west = blufor  east = opfor  resistance = independent
// a value smaller than 0.6 results in being enemy.

east setFriend [resistance, 1]; //OPFOR Friendly INDEP
resistance setFriend [east, 1]; //INDEP Friendly OPFOR
west setFriend [resistance, 0]; //BLUFOR Enemy INDEP
resistance setFriend [west, 0]; //INDEP Enemy BLUFOR
