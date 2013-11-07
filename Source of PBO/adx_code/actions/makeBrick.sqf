player removeAction s_player_brick;
s_player_brick = -1;
player removeAction s_player_cinder;
s_player_cinder = -1;

a_player_brick = true;
if ("ItemClay" in magazines player) then {
    //_text = getText (configFile >> "CfgMagazines" >> _meatcooked >> "displayName");
    _qty = count magazines player;
    player playActionNow "Medic";

    _dis=6;
    _sfx = "cook";
    [player,_sfx,0,false,_dis] call dayz_zombieSpeak;
    [player,_dis,true,(getPosATL player)] call player_alertZombies;

    sleep _qty;
    for "_x" from 1 to _qty do {
        player removeMagazine "ItemClay";
        player addMagazine "equip_brick";
        if !("ItemClay" in magazines player) exitWith {};
    };
    //cutText [format[(localize "str_success_cooked"),_qty,_text], "PLAIN DOWN"];
};
a_player_brick = false;