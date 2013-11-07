#define VSoft				0
#define VArmor				1
#define VAir				2
#define private				0
#define protected			1
#define public				2
#define ReadAndWrite		0
#define ReadAndCreate		1
#define ReadOnly			2
#define ReadOnlyVerified	3
#define EAST 				0 // (Russian)

class CfgPatches {
	class adx_code {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"dayz_equip","dayz_weapons","CAMisc3","CABuildingParts","CABuildingParts_Signs","CAStructuresHouse","CAStructuresLand_Ind_Stack_Big","CAStructures_Misc_Powerlines","CAStructures","CABuildings","CABuildings2","Ind_MalyKomin","CAStructures_A_CraneCon","CAStructures_Mil","CAStructures_Nav","CAStructures_Rail","A_Crane_02","A_TVTower","CAStructures_Railway","CAStructuresHouse_HouseBT"};
	};
};


class KeypadHouse {
// Control types
#define CT_STATIC 0
#define CT_BUTTON 1
#define CT_EDIT 2
#define CT_SLIDER 3
#define CT_COMBO 4
#define CT_LISTBOX 5
#define CT_TOOLBOX 6
#define CT_CHECKBOXES 7
#define CT_PROGRESS 8
#define CT_HTML 9
#define CT_STATIC_SKEW 10
#define CT_ACTIVETEXT 11
#define CT_TREE 12
#define CT_STRUCTURED_TEXT 13
#define CT_CONTEXT_MENU 14
#define CT_CONTROLS_GROUP 15
#define CT_SHORTCUT_BUTTON 16 // Arma 2 - textured button

#define CT_XKEYDESC 40
#define CT_XBUTTON 41
#define CT_XLISTBOX 42
#define CT_XSLIDER 43
#define CT_XCOMBO 44
#define CT_ANIMATED_TEXTURE 45
#define CT_OBJECT 80
#define CT_OBJECT_ZOOM 81
#define CT_OBJECT_CONTAINER 82
#define CT_OBJECT_CONT_ANIM 83
#define CT_LINEBREAK 98
#define CT_USER 99
#define CT_MAP 100
#define CT_MAP_MAIN 101
#define CT_List_N_Box 102 // Arma 2 - N columns list box


// Static styles
#define ST_POS 0x0F
#define ST_HPOS 0x03
#define ST_VPOS 0x0C
#define ST_LEFT 0x00
#define ST_RIGHT 0x01
#define ST_CENTER 0x02
#define ST_DOWN 0x04
#define ST_UP 0x08
#define ST_VCENTER 0x0c

#define ST_TYPE 0xF0
#define ST_SINGLE 0
#define ST_MULTI 16
#define ST_TITLE_BAR 32
#define ST_PICTURE 48
#define ST_FRAME 64
#define ST_BACKGROUND 80
#define ST_GROUP_BOX 96
#define ST_GROUP_BOX2 112
#define ST_HUD_BACKGROUND 128
#define ST_TILE_PICTURE 144
#define ST_WITH_RECT 160
#define ST_LINE 176

#define ST_SHADOW 0x100
#define ST_NO_RECT 0x200 // this style works for CT_STATIC in conjunction with ST_MULTI
#define ST_KEEP_ASPECT_RATIO 0x800

#define ST_TITLE ST_TITLE_BAR + ST_CENTER

// Slider styles
#define SL_DIR 0x400
#define SL_VERT 0
#define SL_HORZ 0x400

#define SL_TEXTURES 0x10

// Listbox styles
#define LB_TEXTURES 0x10
#define LB_MULTI 0x20

#define FontM "Zeppelin32"

	idd = 20900;
	movingEnable = false;
	controlsBackground[] = {};
	controls[] = {
		"B1",
		"B2",
		"B3",
		"B4",
		"B5",
		"B6",
		"B7",
		"B8",
		"B9",
		"B0",
		"BEnter",
		"BAbort",
		"KeypadImage",
		"NumberDisplay"
	};
	objects[] = {};
	class B1 {
		idc = -1;
		type = 1;
		style = 2;
		moving = false;
		x = 0.45;
		y = 0.46;
		h = 0.06;
		w = 0.04;
		font = "Zeppelin32";
		sizeEx = 0.05;
		// action uses script commands to close dialog
		action = "CODEINPUT set [count CODEINPUT, 1]; if ((count CODEINPUT) ==7) then { ctrlSetText [1099, '']; CODEINPUT = [];} else { ctrlSetText [1099, (ctrlText 1099) + str 1];};";
		text = "";
		default = false;
		colorText[] = {0,0,0,1}; // white
		colorFocused[] = {0.1,0.1,0.1,0.1}; // green
		colorShadow[] = {0,0,0,0}; // darkgrey
		colorBorder[] = {0.5,0.5,0.5,0}; // grey
		colorBackground[] = {0.7,0.7,0.7,1};
		colorBackgroundActive[] = {0.1,0.1,0.1,0.3}; // green
		colorDisabled[] = {1,0,0,1}; // red
		colorBackgroundDisabled[] = {0.5,0.5,0.5,0}; // grey
		borderSize = 0.015;
		offsetX = 0.005;
		offsetY = 0.005;
		offsetPressedX = 0.002;
		offsetPressedY = 0.002;
		soundEnter[] = {"",0,1}; // NoSound
		soundPush[] = {"",0,1}; // NoSound
		soundClick[] = {"",0,1}; // NoSound
		soundEscape[] = {"",0,1}; // NoSound
	};
	class B2 : B1 {
		x = 0.52;
		text = "";
		action = "CODEINPUT set [count CODEINPUT, 2]; if ((count CODEINPUT) == 7) then { ctrlSetText [1099, '']; CODEINPUT = [];} else { ctrlSetText [1099, (ctrlText 1099) + str 2];};";
	};
	class B3 : B1 {
		x = 0.59;
		text = "";
		action = "CODEINPUT set [count CODEINPUT, 3]; if ((count CODEINPUT) == 7) then { ctrlSetText [1099, '']; CODEINPUT = [];} else { ctrlSetText [1099, (ctrlText 1099) + str 3];};";
	};
	class B4 : B1 {
		y = 0.57;
		text = "";
		action = "CODEINPUT set [count CODEINPUT, 4]; if ((count CODEINPUT) == 7) then { ctrlSetText [1099, '']; CODEINPUT = [];} else { ctrlSetText [1099, (ctrlText 1099) + str 4];};";
	};
	class B5 : B4 {
		x = 0.52;
		text = "";
		action = "CODEINPUT set [count CODEINPUT, 5]; if ((count CODEINPUT) == 7) then { ctrlSetText [1099, '']; CODEINPUT = [];} else { ctrlSetText [1099, (ctrlText 1099) + str 5];};";
	};
	class B6 : B4 {
		x = 0.59;
		text = "";
		action = "CODEINPUT set [count CODEINPUT, 6]; if ((count CODEINPUT) == 7) then { ctrlSetText [1099, '']; CODEINPUT = [];} else { ctrlSetText [1099, (ctrlText 1099) + str 6];};";
	};
	class B7 : B1 {
		y = 0.67;
		text = "";
		action = "CODEINPUT set [count CODEINPUT, 7]; if ((count CODEINPUT) == 7) then { ctrlSetText [1099, '']; CODEINPUT = [];} else { ctrlSetText [1099, (ctrlText 1099) + str 7];};";
	};
	class B8 : B7 {
		x = 0.52;
		text = "";
		action = "CODEINPUT set [count CODEINPUT, 8]; if ((count CODEINPUT) == 7) then { ctrlSetText [1099, '']; CODEINPUT = [];} else { ctrlSetText [1099, (ctrlText 1099) + str 8];};";
	};
	class B9 : B7 {
		x = 0.59;
		text = "";
		action = "CODEINPUT set [count CODEINPUT, 9]; if ((count CODEINPUT) == 7) then { ctrlSetText [1099, '']; CODEINPUT = [];} else { ctrlSetText [1099, (ctrlText 1099) + str 9];};";
	};

	class B0 : B8 {
		y = 0.77;
		text = "";
		action = "CODEINPUT set [count CODEINPUT, 0]; if ((count CODEINPUT) == 7) then { ctrlSetText [1099, '']; CODEINPUT = []; } else { ctrlSetText [1099, (ctrlText 1099) + str 0]; };";
	};
	class BEnter : B9 {
		y = 0.77;
		text = "";
		action = "CODE = ctrlText (findDisplay 20900 displayCtrl 1099); closeDialog 0;";
	};
	class BAbort : B7 {
		y = 0.77;
		text = "";
		action = "closeDialog 0; CODE = 0; CODEINPUT = [];";
	};
	class KeypadImage {
		idc = -1;
		type = CT_STATIC;
		style = ST_PICTURE;
		colorText[] = { };
		colorBackground[] = { };
		font = "Zeppelin32";
		sizeEx = 0.023;
		x = 0.35; y = 0.2;
		w = 0.4; h = 0.8;
		text = "\adx_update_1\structures\textures\pin_machine_co.paa";
	};
	class NumberDisplay {
		idc = 1099;
		type = CT_STATIC ; // defined constant
		style = ST_LEFT; // defined constant
		colorText[] = { 1, 0, 0, 1 };
		colorBackground[] = { 1, 1, 1, 0 };
		font = FontM; // defined constant
		sizeEx = 0.072;
		x = 0.44; y = 0.28;
		w = 0.21; h = 0.1;
		text = "";
	};
};