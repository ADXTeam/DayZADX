/*
 How to add BIS compositions
To add one of the BIS premade compositions simply create a gamelogic and the code below into the init field

_newComp = [(getPos this), (getDir this), "FuelDump1_US"] call (compile (preprocessFileLineNumbers "ca\modules\dyno\data\scripts\objectMapper.sqf"));

Where "FuelDump1_US" is the composition name you want to spawn (check composition library for names of BIS compositions).
You can also spawn compositions by searching the library for matching tags, for example:

_newComp = [(getPos this), random 360, ["usmc", "medium"]] call (compile (preprocessFileLineNumbers "ca\modules\dyno\data\scripts\objectMapper.sqf"));

Where "usmc" & "medium" are the tags used. 
*/
class CfgObjectCompositions 
{
	// _newComp = [(getPos this), (getDir this), "CampSkal_Medium"] call (compile (preprocessFileLineNumbers "ca\modules\dyno\data\scripts\objectMapper.sqf"));
	class CampSkal_Medium
	{
		displayName = $STR_DYNO_MEDIUMTENTCAMP;
		side = 1; // 1 = West, 0 = East
		faction = "USMC";
		objectScript = "\z\addons\dayz_code\Configs\CfgObjectCompositions\camp_ru1.sqf";
		tags[] = {"camp", "tent", "medium", "west", "usmc"};
	};
};