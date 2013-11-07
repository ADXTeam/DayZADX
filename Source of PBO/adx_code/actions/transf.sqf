if("ItemBloodbag" in magazines player) then
{
    player removeMagazine "ItemBloodbag";

    [0,0,0,[player]] execVM "\z\addons\dayz_code\medical\transfusion.sqf";
    sleep 20;
    
    [player, 2.0] call fnc_usec_damageUnconscious;
    /*sleep 15;
    player setVariable ["NORRN_unconscious", true, true];
    r_player_unconscious = true;
    r_player_handler1 = false;
    r_player_timeout = 30;
    sleep 5;
    r_player_timeout = 10;*/
}
else
{
    titletext ["Нужен пакет с кровью, чтобы начать переливание.", "PLAIN DOWN"];
};

