/*
_item call player_wearClothes;
TODO: female
*/
private["_item","_onLadder","_hasclothesitem","_config","_text","_isFemale","_myModel","_humanity","_isBandit","_isHero","_itemNew","_model"];

_item = _this;
call gear_ui_init;
r_action_count = 0; //reset for strange glitch
_onLadder = (getNumber (configFile >> "CfgMovesMaleSdr" >> "States" >> (animationState player) >> "onLadder")) == 1;
if (_onLadder) exitWith {cutText [(localize "str_player_21") , "PLAIN DOWN"]};

_hasclothesitem = _this in magazines player;
_config = configFile >> "CfgMagazines";
_text = getText (_config >> _item >> "displayName");

if (!_hasclothesitem) exitWith {cutText [format[(localize "str_player_31"),_text,(localize "str_player_31_wear")] , "PLAIN DOWN"]};

if (vehicle player != player) exitWith {cutText [localize "str_player_fail_wear1", "PLAIN DOWN"]};

//_isFemale = ((typeOf player == "SurvivorW2_DZ")||(typeOf player == "BanditW1_DZ"));
//if (_isFemale) exitWith {cutText [localize "str_player_fail_wear2", "PLAIN DOWN"]};

_myModel = (typeOf player);
_humanity = player getVariable ["humanity",0];
/*_isBandit = _humanity < -2000;
_isHero = _humanity > 5000;
_itemNew = "Skin_" + _myModel;

if ( !(isClass(_config >> _itemNew)) ) then {
    _itemNew = if (!_isFemale) then {"Skin_Survivor2_DZ"} else {"Skin_SurvivorW2_DZ"};
};*/
_models = player getVariable ["models",[]];
_counts = count _models;
_isHero = true;
_model = "no";
_CurModel = "no";
if (_humanity < -8000) then {
    _isHero = false;
    if(_counts == 8) then
    {
        _SelModel = _models select 7;
        _CurModel = _models select 0;
        }
    else
    {
        _SelModel = _models select 3;
        _CurModel =_models select 0;
    };
};
_itemNew = "Skin_Survivor2_DZ";
/*-------------------------------------------------*/
	
if (_humanity >= -8000 and _humanity <= -4000) then {
    _isHero = false;
    if(_counts == 8) then
    {
        _SelModel = _models select 7;
        _CurModel = _models select 1;
        }
    else
    {
        _SelModel = _models select 3;
        _CurModel =_models select 0;
    };
};
/*-------------------------------------------------*/	
if (_humanity > -4000 and _humanity <= -1000) then {
    _isHero = false;
    if(_counts == 8) then
    {
        _SelModel = _models select 7;
        _CurModel = _models select 2;
        }
    else
    {
        _SelModel = _models select 3;
        _CurModel =_models select 0;
    };
};
/*-------------------------------------------------*/
if (_humanity > -1000 and _humanity < 1000) then {
    if(_counts == 8) then
    {
        _SelModel = _models select 7;
        _CurModel = _models select 3;
        }
    else
    {
        _SelModel = _models select 3;
        _CurModel =_models select 1;
    };
};
/*-------------------------------------------------*/
if (_humanity >= 1000 and _humanity < 4000) then {
    if(_counts == 8) then
    {
        _SelModel = _models select 7;
        _CurModel = _models select 4;
        }
    else
    {
        _SelModel = _models select 3;
        _CurModel =_models select 2;
    };
};
/*-------------------------------------------------*/
if (_humanity >= 4000 and _humanity <= 8000) then {
    if(_counts == 8) then
    {
        _SelModel = _models select 7;
        _CurModel = _models select 5;
        }
    else
    {
        _SelModel = _models select 3;
        _CurModel =_models select 2;
    };
};
/*-------------------------------------------------*/
if (_humanity > 8000) then {
    if(_counts == 8) then
    {
        _SelModel = _models select 7;
        _CurModel = _models select 6;
        }
    else
    {
        _SelModel = _models select 3;
        _CurModel =_models select 2;
    };
};
/**/
if(_counts == 8) then
{
    switch (_item) do {
        case "Skin_Sniper1_DZ": {
            if(_isHero) then
            {
                _model = "Sniper1_DZ";
                _models set [_counts - 1, _model];
            }
            else
            {
                _model = "Bandit_S_DZ";
                _models set [_counts - 1, _model];
            };
            _itemNew = "Skin_Survivor2_DZ";
        };
        case "Skin_Survivor2_DZ": {
            _model = _CurModel;
            _models set [_counts - 1, "no"];
            _itemNew = "Skin_Sniper1_DZ";
        };
    };
    
}
else
{
    switch (_item) do {
        case "Skin_Sniper1_DZ": {
            if(_isHero) then
            {
                _model = "ori_vil_hero_ghilie";
                _models set [_counts - 1, _model];
            }
            else
            {
                _model = "ori_vil_bandit_ghilie";
                _models set [_counts - 1, _model];
            };
            _itemNew = "Skin_Survivor2_DZ";
        };
        case "Skin_Survivor2_DZ": {
            _model = _CurModel;
            _models set [_counts - 1, "no"];
            _itemNew = "Skin_Sniper1_DZ";
        };
    };
};
//titletext [_item + " " + str(_counts) + " " + _CurModel + " " + str(_models), "PLAIN DOWN"];
player setVariable ["models",_models, true];

//titletext [str(_model), "PLAIN DOWN"];
if (_model != _myModel) then {
    player removeMagazine _item;
    player addMagazine _itemNew;
    [dayz_playerUID, dayz_characterID, _model] spawn player_humanityMorph;
};