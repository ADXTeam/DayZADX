private ["_part","_cancel","_color","_string","_handle","_damage","_cmpt","_vehicle","_hitpoints","_damagePercent","_allFixed","_configVeh"];

_vehicle = cursorTarget;
{dayz_myCursorTarget removeAction _x} forEach s_player_repairActions;s_player_repairActions = [];
dayz_myCursorTarget = _vehicle;

_allFixed = true;
_hitpoints = _vehicle call vehicle_getHitpoints;

{
    _damage = [_vehicle,_x] call object_getHit;

    _cmpt = toArray (_x);
    _cmpt set [0,20];
    _cmpt set [1,toArray ("-") select 0];
    _cmpt set [2,20];
    _cmpt = toString _cmpt;

    _configVeh = configFile >> "cfgVehicles" >> "RepairParts" >> _x;
    _part = getText(_configVeh >> "part");
    if (isnil ("_part")) then { _part = "PartGeneric"; };

    // get every damaged part no matter how tiny damage is!
    _damagePercent = str(round((1 - _damage) * 100))+"%";
    if (_damage > 0) then {
        _allFixed = false;
        _color = "color='#ffff00'"; //yellow
        if (_damage >= 0.5) then {_color = "color='#ff8800'";}; //orange
        if (_damage >= 0.9) then {_color = "color='#ff0000'";}; //red
        _cmpt = format[localize "str_actions_medical_09",_cmpt,_damagePercent];

        _string = format["<t %1>%2</t>",_color,_cmpt]; //Repair - Part
        _handle = dayz_myCursorTarget addAction [_string, "\z\addons\adx_code\actions\repair.sqf",[_vehicle,_part,_x], 0, false, true, "",""];
        s_player_repairActions set [count s_player_repairActions,_handle];
    };
    //
    _nextVehicle = (_vehicle isKindOf "Motorcycle") or (_vehicle isKindOf "Tractor");
    _totpa = ["HitFuel","HitEngine","HitLFWheel","HitRFWheel","HitLBWheel","HitRBWheel","HitGlass1","HitGlass2","HitGlass3","HitGlass4","HitGlass5","HitGlass6","HitHRotor"];
    if ( (_damage < 0.10)  and !_nextVehicle and (_part != "PartGlass") and (_x in _totpa) and (local _vehicle)) then {
        _allFixed = false;
        _color = "color='#00baff'"; //blue
        _string = format["<t %2>Снять %1 part</t>",_cmpt,_color]; //Remove - Part
        _handle = dayz_myCursorTarget addAction [_string, "\z\addons\dayz_code\actions\retake.sqf",[_vehicle,_part,_x], 0, false, true, "",""];
        s_player_repairActions set [count s_player_repairActions,_handle];
    };
    
    //fnc_veh_handleDam
} forEach _hitpoints;

if (_allFixed) then {
    _vehicle setDamage 0;
};
_cfg = configFile >> "CfgVehicles" >> typeof _vehicle >> "AnimationSources";
_tc = count _cfg;
_part = "PartScrap";
for "_mti" from 0 to _tc-1 do {
    _mt = (_cfg select _mti);
    _nameClass1 = configName(_mt);
    _st = getText(_mt >> "source");
    if (_st in ["pluhPredni","kolaOchrana","oknaOchrana","predniOknoOchrana"]) then {	
        _statuss = _vehicle getVariable [_st,1];
        if (_statuss == 1) then {
            _color = "color='#ff0000'";
            _stname = format["str_%1",_st];
            _string = format["<t %2>%1</t>", localize _stname,_color]; //Repair - Part
            _handle = dayz_myCursorTarget addAction [_string, "\z\addons\adx_code\actions\repair.sqf",[_vehicle,_part,_st], 0, false, true, "",""];
            s_player_repairActions set [count s_player_repairActions,_handle];
        };
    };
};
if(count _hitpoints > 0 ) then {
    _cancel = dayz_myCursorTarget addAction [localize "str_actions_cancel", "\z\addons\dayz_code\actions\repair_cancel.sqf","repair", 0, true, false, "",""];
    s_player_repairActions set [count s_player_repairActions,_cancel];
    s_player_repair_crtl = 1;
};