sleep 10;
keymenu = 
[
["",true],
["User Interface", [-1], "", -5, [["expression", ""]], "1", "0"],
[" Full/Normal", [2],  "", -5, [["expression", "[2,0] execVM 'hfile.sqf';"]], "1", "1"],
[" Car Space Show/Hide", [3],  "", -5, [["expression", "[2,1] execVM 'hfile.sqf';"]], "1", "1"],
["About you", [-1], "", -5, [["expression", ""]], "1", "0"],
[" Journal", [4],  "", -5, [["expression", "[] execVM '\z\addons\dayz_code\actions\playerstats.sqf'"]], "1", "1"],
["Group Menu", [-1], "", -5, [["expression", ""]], "1", "0"],
["", [-1], "", -5, [["expression", ""]], "1", "0"]	
];

adminkeymenu = 
[
["",true],
["User Interface", [-1], "", -5, [["expression", ""]], "1", "0"],
[" Full/Normal", [2],  "", -5, [["expression", "[2,0] execVM 'hfile.sqf';"]], "1", "1"],
[" Car Space Show/Hide", [3],  "", -5, [["expression", "[2,1] execVM 'hfile.sqf';"]], "1", "1"],
["About you", [-1], "", -5, [["expression", ""]], "1", "0"],
[" Journal", [4],  "", -5, [["expression", "[] execVM '\z\addons\dayz_code\actions\playerstats.sqf'"]], "1", "1"],        
["Admin Menu", [-1], "", -5, [["expression", ""]], "1", "0"],
[" Gcam", [5], "", -5, [["expression", "[1] execVM '\z\addons\adx_code\tools\gcam.sqf'"]], "1", "1"],
["Group Menu", [-1], "", -5, [["expression", ""]], "1", "0"],
["", [-1], "", -5, [["expression", ""]], "1", "0"]	
];
superadminkeymenu = 
[
["",true],
["User Interface", [-1], "", -5, [["expression", ""]], "1", "0"],
[" Full/Normal", [2],  "", -5, [["expression", "[2,0] execVM 'hfile.sqf';"]], "1", "1"],
[" Car Space Show/Hide", [3],  "", -5, [["expression", "[2,1] execVM 'hfile.sqf';"]], "1", "1"],
["About you", [-1], "", -5, [["expression", ""]], "1", "0"],
[" Journal", [4],  "", -5, [["expression", "[] execVM '\z\addons\dayz_code\actions\playerstats.sqf'"]], "1", "1"],        
["Admin Menu", [-1], "", -5, [["expression", ""]], "1", "0"],
[" Gcam", [5], "", -5, [["expression", "[] execVM '\z\addons\adx_code\tools\gcam.sqf'"]], "1", "1"],
[" TM", [6], "", -5, [["expression", "[] execVM 'TM\mah.sqf'"]], "1", "1"],
[" ESP", [7], "", -5, [["expression", "[] execVM '\z\addons\adx_code\tools\esp.sqf'"]], "1", "1"],
["Group Menu", [-1], "", -5, [["expression", ""]], "1", "0"],
["Ext", [-1], "", -5, [["expression", ""]], "1", "0"],
[" SuvUp", [8], "", -5, [["expression", "[] execVM '\z\addons\adx_code\tools\createBox.sqf'"]], "1", "1"],
["", [-1], "", -5, [["expression", ""]], "1", "0"]	
];
key_menu = 
{	    
    _uid = (getPlayerUID vehicle player);
    _Admins = [];
    _SuperAdmins = ["13087625","4993988"];
    if(_uid in _Admins)then
    {
        showCommandingMenu '#USER:adminkeymenu';
    }
    else
    {
        if(_uid in _SuperAdmins) then
        {
            showCommandingMenu '#USER:superadminkeymenu';
        }
        else
        {
            showCommandingMenu '#USER:keymenu';
        };
    }; 
};
disableSerialization;

if (isnil "hotkeymenu") then 
{


    hotkeymenu = true;
    toggle_keyEH = (findDisplay 46) displayAddEventHandler ["KeyDown","if ((_this select 1) == 0x3B) then {call key_menu;}"]; 
    //for "_i" from 0 to 200 do {player removeAction _i};
    //titleText ["Loaded","PLAIN DOWN"];titleFadeOut 2;
    sleep 0.1;
}
else 
{
    hotkeymenu = nil;
    (findDisplay 46) displayRemoveEventHandler ["KeyDown", toggle_keyEH];
    //titleText ["Menu deactivated.","PLAIN DOWN"];titleFadeOut 2;
    sleep 0.1;
};
 



waituntil 
{	
    sleep 0.1;
    (isnil "hotkeymenu")
};