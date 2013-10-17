startLoadingScreen ["","RscDisplayLoadCustom"];
cutText ["","BLACK OUT"];
enableSaving [false, false];

//Server Settings
dayZ_instance = 1; // The instance
dayZ_serverName = "ADX"; // Servername (country code + server number)
dayz_antihack = 1; // DayZ Antihack / 1 = enabled // 0 = disabled
dayz_REsec = 1; // DayZ RE Security / 1 = enabled // 0 = disabled

//Game Settings
dayz_spawnselection = 1; // DayZ Spawnselection / 1 = enabled // 0 = disabled, No current spawn limits.
dayz_spawnCrashSite_clutterCutter = 0;	// Helicrash Settings / 0 =  loot hidden in grass // 1 = loot lifted // 2 = no grass around the Helicrash
dayz_spawnInfectedSite_clutterCutter = 0; // Infected Base Settings / 0 =  loot hidden in grass // 1 = loot lifted // 2 = no grass around the infected base

#include "\z\addons\dayz_code\system\mission\init.sqf"
