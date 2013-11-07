private ["_object","_change","_humanity","_isFreeTarget","_wait","_endTime","_model","_isBandit","_isHero","_SelModel", "_CurModel"];
//Set Variables
_object = _this select 0;
_change = _this select 1;
_wait = if (count _this > 2) then { _this select 2 } else { 0 };

_humanity = 0;
_SelModel = "no";
_CurModel = "no";
if (_object == player) then {
    _humanity = player getVariable["humanity",0];
    _humanity = _humanity + _change;
    if (_change < 0) then {
        player setVariable["humanity",_humanity,true];
        if ((typeOf player != "Bandit1_DZ") && (typeOf player != "BanditW1_DZ")) then {
            _isFreeTarget = player getVariable ["freeTarget",false];

            if (_wait > 0) then {
                if (!_isFreeTarget) then {
                    player setVariable ["freeTarget",true,true];
                    _isFreeTarget = true;
                };

                _endTime = diag_tickTime + _wait;
                waitUntil { sleep 1; diag_tickTime > _endTime };
            };

            if (_isFreeTarget) then {
                player setVariable ["freeTarget",false,true];
            };
        };
    } else {
        player setVariable["humanity",_humanity,true];
    };
    _model = typeOf player;
    _models = player getVariable ["models",[]];
    
    _counts = count _models;
    


    if (_humanity < -8000) then {
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
    /*-------------------------------------------------*/
	
    if (_humanity >= -8000 and _humanity <= -4000) then {
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
    
    if((_CurModel != _model) and (_SelModel == "no")) then
    {
        [dayz_playerUID,dayz_characterID,_CurModel] spawn player_humanityMorph;
    }
    else
    {
        if((_SelModel != "no") and (_SelModel != _model)) then
        {
            [dayz_playerUID,dayz_characterID,_SelModel] spawn player_humanityMorph;
        };
    };	

};
