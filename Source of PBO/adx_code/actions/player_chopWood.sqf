private["_item","_result","_dis","_sfx"];

_item = _this;
call gear_ui_init;
if (_item == "ItemPickaxe" or _item == "ItemShovel") then 
{
    if (player distance [13258,6095.81,0.001] < 32) then 
    {
        {player removeMagazines _x} forEach ["hatchet_swing","crowbar_swing","Machete_swing","Fishing_Swing"];
        if(_item == "ItemPickaxe") then
        {
            _result = [player,"ItemRocks"] call BIS_fnc_invAdd;
            if (_result) then {
                [player,"pickaxe",0,false] call dayz_zombieSpeak;
                player playActionNow "Medic";
                sleep 5;
                cutText [localize "str_player_32", "PLAIN DOWN"];
                _rnd = random 1;
                if (_rnd > 0.98) then {
                    [player,"slomkaon",0,false] call dayz_zombieSpeak;
                    player removeWeapon "ItemPickaxe";
                    cutText [format[localize "str_player_38",_name], "PLAIN DOWN",2];
                };
            };
        }
        else
        {
            _result = [player,"ItemClay"] call BIS_fnc_invAdd;
            if (_result) then {
                //[player,"pickaxe",0,false] call dayz_zombieSpeak;
                player playActionNow "Medic";
                sleep 5;
                cutText [localize "str_player_32", "PLAIN DOWN"];
                _rnd = random 1;
                if (_rnd > 0.98) then {
                    [player,"slomkaon",0,false] call dayz_zombieSpeak;
                    player removeWeapon "ItemShovel";
                    cutText [format[localize "str_player_38",_name], "PLAIN DOWN",2];
                };
            };
        };
        switch (primaryWeapon player) do {
            case "MeleeHatchet": {player addMagazine 'hatchet_swing';};
            case "MeleeCrowbar": {player addMagazine 'crowbar_swing';};
            case "MeleeMachete": {player addMagazine 'Machete_swing';};
            case "MeleeFishingPole": {player addMagazine 'Fishing_Swing';};
        };
    };
        
}
else
{
    if((player distance [12742.2,9689.56,0.001] < 32) or (player distance [12798.5,9710.09,0.001] < 32)) then
    {
        {player removeMagazines _x} forEach ["hatchet_swing","crowbar_swing","Machete_swing","Fishing_Swing"];
        _result = [player,"ItemRWood"] call BIS_fnc_invAdd;
        if (_result) then {
            player playActionNow "Medic";

            _dis=20;
            _sfx = "chopwood";
            [player,_sfx,0,false,_dis] call dayz_zombieSpeak;
            [player,_dis,true,(getPosATL player)] call player_alertZombies;

            sleep 5;
        };
        //adding melee mags back if needed
        switch (primaryWeapon player) do {
            case "MeleeHatchet": {player addMagazine 'hatchet_swing';};
            case "MeleeCrowbar": {player addMagazine 'crowbar_swing';};
            case "MeleeMachete": {player addMagazine 'Machete_swing';};
            case "MeleeFishingPole": {player addMagazine 'Fishing_Swing';};
        };
    }    
    else
    {
        if (["forest",dayz_surfaceType] call fnc_inString) then {
            //Remove melee magazines (BIS_fnc_invAdd fix) (add new melee ammo to array if needed)
            {player removeMagazines _x} forEach ["hatchet_swing","crowbar_swing","Machete_swing","Fishing_Swing"];
            _result = [player,"PartWoodPile"] call BIS_fnc_invAdd;
            if (_result) then {
                player playActionNow "Medic";

                _dis=20;
                _sfx = "chopwood";
                [player,_sfx,0,false,_dis] call dayz_zombieSpeak;
                [player,_dis,true,(getPosATL player)] call player_alertZombies;

                sleep 5;
                cutText [localize "str_player_25", "PLAIN DOWN"];
            } else {
                cutText [localize "str_player_24", "PLAIN DOWN"];
            };
            //adding melee mags back if needed
            switch (primaryWeapon player) do {
                case "MeleeHatchet": {player addMagazine 'hatchet_swing';};
                case "MeleeCrowbar": {player addMagazine 'crowbar_swing';};
                case "MeleeMachete": {player addMagazine 'Machete_swing';};
                case "MeleeFishingPole": {player addMagazine 'Fishing_Swing';};
            };
        } else {
            cutText [localize "str_player_23", "PLAIN DOWN"];
        }; 
    };
};


