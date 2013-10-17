class RscPicture;
class RscButton;
class CA_IGUI_Title;
class CA_Title;
class RscText;
class RscEdit;

class RscControlsGroup;
class RscLineBreak;
class RscIGUIShortcutButton;
class RscGearShortcutButton;
class RscIGUIListNBox;
class RscActiveText;

class RscPictureKeepAspect;
class RscStandardDisplay;
class RscProgress;
class RscProgressNotFreeze;
class RscButtonTextOnly;
class RscObject;
class IGUIBack;
class RscIGUIListBox;
class RscHTML;
class RscCombo;

#include "CfgPlayerStats\defines.hpp"
#include "CfgPlayerStats\p__cover.hpp"
#include "CfgPlayerStats\p_journal_humanity.hpp"
#include "CfgPlayerStats\p_humanity_art.hpp"
#include "CfgPlayerStats\p_zombies_killed.hpp"
#include "CfgPlayerStats\p_bandits_killed.hpp"
#include "CfgPlayerStats\p_headshots.hpp"
#include "CfgPlayerStats\p_murders.hpp"
#include "CfgPlayerStats\sound.hpp"

class RscPictureGUI
{
	access = 0;
	type = 0;
	idc = -1;
	colorBackground[] = {0,0,0,0};
	colorText[] = {0.38,0.63,0.26,0.75};
	font = "TahomaB";
	sizeEx = 0;
	lineSpacing = 0;
	text = "";
	style = "0x30 + 0x100";
	x = 0;
	y = 0;
	w = 0.2;
	h = 0.15;
};


class RscStructuredText {
	class Attributes;
};
class RscStructuredTextGUI: RscStructuredText
{
	colorBackground[] = {0,0,0,0};
	colorText[] = {1,1,1,1};
	class Attributes: Attributes
	{
		align = "center";
		valign = "middle";
	};
};

class RscDisplayLoading
{
	class Variants
	{
		class LoadingOne
		{
			class controls
			{
				class LoadingPic : RscPictureKeepAspect
				{
					text = "z\addons\dayz_code\gui\logo_big.paa";
				};
			};
		};
	};
};

class RscCompass : RscObject {
	scale = 0.64;
};

class RscDisplayStart
{
	class controls
	{
		class LoadingPic: RscPictureKeepAspect
		{
			text = "z\addons\dayz_code\gui\logo_big.paa";
		};
	};
};
class RscDisplayGetReady;
class RscDisplayClientGetReady : RscDisplayGetReady
{
	// could probably add a check in the spawn but couldn't test with multiple players
	onload = "private ['_dummy']; _dummy = [_this,'onload'] call compile preprocessfile '\ca\ui\scripts\server_interface.sqf'; _this spawn { while { !isNull (findDisplay 53) } do { ctrlActivate ((_this select 0) displayCtrl 1); sleep 0.1; }; };";
};

class RscDisplayDebriefing: RscStandardDisplay
{
	onLoad = "ctrlActivate ((_this select 0) displayCtrl 2)";
	class controls
	{
		delete Debriefing_MissionTitle;
		delete CA_MissionTitle;
		delete CA_TextVotingTimeLeft;
		delete CA_MissionResult;
		delete CA_DebriefingInfo;
		delete CA_DebriefingTextGroup;
		delete CA_DebriefingObjectivesGroup;
		delete CA_DebriefingStatsGroup;
		delete ButtonStatistics;
		delete ButtonRetry;
		class ButtonContinue: RscIGUIShortcutButton
		{
			idc = 2;
			shortcuts[] = {"0x00050000 + 0",28,57,156};
			x = 0.4080875;
			y = 0.863977;
			text = $STR_UI_CONTINUE;
		};
	};
	class ControlsBackground
	{
		delete Mainback;
	};
};

class RscDisplayMissionFail: RscStandardDisplay
{
	onLoad = "ctrlActivate ((_this select 0) displayCtrl 2)";
	class controls
	{
		delete Debriefing_MissionTitle;
		delete CA_MissionTitle;
		delete CA_TextVotingTimeLeft;
		delete CA_MissionResult;
		delete CA_DebriefingInfo;
		delete CA_DebriefingTextGroup;
		delete CA_DebriefingObjectivesGroup;
		delete CA_DebriefingStatsGroup;
		delete BRetry;
		class BAbort: RscIGUIShortcutButton
		{
			idc = 2;
			shortcuts[] = {"0x00050000 + 0",28,57,156};
			x = 0.4080875;
			y = 0.863977;
			text = $STR_UI_END;
		};
	};
	class ControlsBackground
	{
		delete Mainback;
	};
};


class CA_TextLanguage;
class RscXListBox;

class RscDisplayGameOptions
{
	//onLoad = "((_this select 0) displayCtrl 140) lbAdd 'Default';((_this select 0) displayCtrl 140) lbAdd 'Debug';((_this select 0) displayCtrl 140) lbAdd 'None';((_this select 0) displayCtrl 140) lbSetCurSel (uiNamespace getVariable ['DZ_displayUI', 0]);";
	onUnload = "call ui_changeDisplay;";
	class controls
	{
		class CA_TextUIDisplay: CA_TextLanguage
		{
			x = 0.159803;
			y = "(0.420549 + 4*0.069854)";
			text = "DayZ UI:";
		};
		class CA_ValueUIDisplay: RscXListBox
		{
			idc = 140;
			x = 0.400534;
			y = "(0.420549 + 4*0.069854)";
			w = 0.3;
			onLBSelChanged = "(uiNamespace setVariable ['DZ_displayUI', (_this select 1)]);";
		};
	};
};
class RscShortcutButton;
class RscShortcutButtonMain;

/*class RscDisplayMain : RscStandardDisplay
{
	class controlsBackground
	{
		class Mainback : RscPicture {
			idc = 1104;
			x = "SafeZoneX + 0.04";
			y = "SafeZoneY + 0.03";
			w = 0.627451;
			h = 1.000000;
			text = "\ca\ui\data\ui_mainmenu_background_ca.paa";
		};
		class CA_ARMA2 : RscPicture
		{
			text = "z\addons\dayz_code\gui\mod.paa";
		};
	};

	class controls
	{
		class CA_Version;
		class DAYZ_Version : CA_Version
		{
			idc = -1;
			text = "1.8.0.2";
			y = "(SafeZoneH + SafeZoneY) - (1 - 0.95)";
		};
		delete CA_TitleMainMenu;
		delete CA_SinglePlayer;
		class CA_PlayerName : RscText {
			idc = 109;
			style = 256;
			colorbackground[] = {0.1, 0.1, 0.1, 0};
			x = "SafeZoneX + 0.05";
			y = "SafeZoneY + 0.06";
			w = 0.5;
			h = 0.05;
		};
		class CA_MP : RscShortcutButtonMain {
			idc = 105;
			x = "SafeZoneX + 0.05";
			y = "SafeZoneY + 0.15";
			toolTip = $STR_TOOLTIP_MAIN_MULTIPLAYER;
			text = $STR_CA_MAIN_MULTI;

			class KeyHints {
				class A {
					key = 0x00050000 + 0;
					hint = "";
				};
			};
		};
		class CA_Options : RscShortcutButtonMain {
			x = "SafeZoneX + 0.05";
			y = "SafeZoneY + 0.30";
		};
		class CA_PlayerProfile : RscShortcutButtonMain {
			x = "SafeZoneX + 0.05";
			y = "SafeZoneY + 0.45";
		};
		class CA_Expansions : RscShortcutButtonMain {
			x = "SafeZoneX + 0.05";
			y = "SafeZoneY + 0.60";
		};
		class CA_Exit : RscShortcutButtonMain {
			x = "SafeZoneX + 0.05";
			y = "SafeZoneY + 0.75";
		};
	};
};*/

//Remove Diary
class RscDisplayDiary {
	idd = 129;
	movingEnable = 0;

	class Controls {
		delete Diary;
		delete DiaryIndex;
		delete B_Quit;
		delete B_Add;
		delete DiaryPage;
		delete DiaryTitle;
		delete DiaryBackground;
	};
};

class RscButtonActionMenu: RscButton
{
	SizeEx = 0.02674;
	colorText[] = {1,1,1,1};
	colorBackground[] = {0,0,0,0.8};
	colorBackgroundActive[] = {0.63,0.02,0.02,0.8};
	colorBackgroundDisabled[] = {1,1,1,0};
	colorFocused[] = {0,0,0,0.8};
	colorShadow[] = {1,1,1,0};
	borderSize = 0;
	w = 0.095 * safezoneW;
	h = 0.025 * safezoneH;
};

/*class RscDisplayMPInterrupt : RscStandardDisplay {
	movingEnable = 0;
	enableSimulation = 1;
	//onLoad = "_dummy = ['Init', _this] execVM '\ca\ui\scripts\pauseLoadinit.sqf'; [(_this select 0)] execVM '\z\addons\dayz_code\compile\player_onPause.sqf';"; _respawn = (_this select 0) displayCtrl 1010); _respawn ctrlEnable false; _abort = (_this select 0) displayCtrl 104); _abort ctrlEnable false;
	onLoad = "[] execVM '\z\addons\dayz_code\compile\player_onPause.sqf'; _dummy = ['Init', _this] execVM '\ca\ui\scripts\pauseLoadinit.sqf';";
	onUnload = "private ['_dummy']; _dummy = ['Unload', _this] execVM '\ca\ui\scripts\pauseOnUnload.sqf';";

	class controlsBackground {
		class Mainback : RscPicture {
			idc = 1104;
			x = 0.045;
			y = 0.17;
			w = 0.627451;
			h = 0.836601;
			text = "\ca\ui\data\ui_background_mp_pause_ca.paa";
		};
	};

	class controls {
	
//		class Title {};
//		class B_Players {};
//		class B_Options {};
//		class B_Abort {};
//		class B_Retry {};
//		class B_Load {};
//		class B_Save {};
//		class B_Continue {};
//		class B_Diary {};
	

		class MissionTitle : RscText {
			idc = 120;
			x = 0.05;
			y = 0.818;
			text = "";
		};

		class DifficultyTitle : RscText {
			idc = 121;
			x = 0.05;
			y = 0.772;
			text = "";
		};

		class Paused_Title : CA_Title {
			idc = 523;
			x = 0.087;
			y = 0.192;
			text = $STR_DISP_MAIN_MULTI;
		};

		class CA_B_SAVE : RscShortcutButtonMain {
			idc = 103;
			y = 0.2537 + 0.101903 * 0;
			x = 0.051;
			text = $STR_DISP_INT_SAVE;
			default = 0;
		};

		class CA_B_Skip : CA_B_SAVE {
			idc = 1002;
			text = $STR_DISP_INT_SKIP;
		};

		class CA_B_REVERT : CA_B_SAVE {
			idc = 119;
			y = 0.2537 + 0.101903 * 1;
			text = $str_disp_revert;
			default = 0;
		};

		class CA_B_Respawn : CA_B_SAVE {
			idc = 1010;
			//onButtonClick = "hint str (_this select 0);";
			onButtonClick = "if ((alive player) && (r_fracture_legs)) then { player SetDamage 1;};";
			y = 0.2537 + 0.101903 * 2;
			text = $STR_DISP_INT_RESPAWN;
			default = 0;
		};

		class CA_B_Options : CA_B_SAVE {
			idc = 101;
			y = 0.2537 + 0.101903 * 3;
			text = $STR_DISP_INT_OPTIONS;
			default = 0;
		};

		class CA_B_Abort : CA_B_SAVE {
			idc = 104;
			y = 0.2537 + 0.101903 * 4;
			onButtonClick = "[] execVM '\z\addons\dayz_code\compile\player_onPause.sqf'; call player_forceSave;";
			text = $STR_DISP_INT_ABORT;
			default = 0;
		};

		class ButtonCancel : RscShortcutButton {
			idc = 2;
			shortcuts[] = {0x00050000 + 1, 0x00050000 + 8};
			default = 1;
			x = 0.1605;
			y = 0.8617;
			text = $STR_DISP_INT_CONTINUE;
		};
	};
};*/

class DZ_ItemInteraction {
	idd = 6901;
	movingEnable = 0;
	class controlsBackground {
		// define controls here
	};
	class objects {
		// define controls here
	};
	class controls {
		// define controls here

	};
};

class RscDisplayMultiplayerSetup: RscStandardDisplay
{
	onload = "_f = {disableSerialization; _b = _this select 0;  _b ctrlEnable false; sleep 15;_b ctrlEnable true;}; [(_this select 0) displayCtrl 1] spawn _f;";
	class controlsBackground
	{
		// удаляем ненужные бэкграунды
		delete SidesBack;
		delete SidesBorder;
		delete ValueRolesBack;
		delete ValueRolesBorder;
		class TextBack: RscPicture
		{
			x = "SafeZoneX";
			y = "SafeZoneY";
			w = "SafeZoneW";
			h = "SafeZoneH";
			colorbackground[] = {0, 0, 0, 1};
			text = "\z\addons\adx_pack\paa\gui\logo_big.paa";
		};
		delete MP_roles_TitleBorder;
		class MP_roles_TitleBorder_Ori : RscPicture {
			colorbackground[] = {0, 0, 0, 0};
			x = "(02/100)	* SafeZoneW + SafeZoneX";
			y = "(02/100)	* SafeZoneH + SafeZoneY";
			w = "(96/100)	* SafeZoneW";
			h = "(06/100)	* SafeZoneH";
			text = "\z\addons\adx_pack\paa\ui\mp_topfon.paa";
		};
		class Origins_Slogo : RscPictureKeepAspect {
			x = "(0.7/100)	* SafeZoneW + SafeZoneX";
			y = "(0.1/100)	* SafeZoneH + SafeZoneY";
			w = "(10/100)	* SafeZoneW";
			h = "(7.5/100)	* SafeZoneH";
			text = "z\addons\adx_pack\paa\gui\logo_adx.paa";
		};
		delete TextBorder;
		delete TextBack1;

		class ValuePoolBack: RscText
		// расширяем бэкграунд для Pool
		{
			x = "(20/100)	* SafeZoneW + SafeZoneX";
			y = "(12.5/100)	* SafeZoneH + SafeZoneY";
			w = "(78/100)	* SafeZoneW";
			h = "(76/100)	* SafeZoneH";
			//colorBackground[] = {0.1961,0.1451,0.0941,0.42};
			colorBackground[] = {0.42352,0.42352,0.42352, 0.43};
		};
		class ValuePoolBorder: RscText
		// расширяем для Pool
		{
			style = 64;
			colorText[] = {0,0,0,1};
			x = "(20/100)	* SafeZoneW + SafeZoneX";
			y = "(12.5/100)	* SafeZoneH + SafeZoneY";
			w = "(78/100)	* SafeZoneW";
			h = "(76/100)	* SafeZoneH";
		};
	};
	class controls
	{
		// удаляем ненужные кнопки
		delete CA_B_East;
		delete CA_B_Guerrila;
		delete CA_B_Civilian;
		delete CA_ValueRoles;
		delete CA_B_DSinterface;
		
		delete TextMission;
		delete ValueMission;
		delete TextIsland;
		delete ValueIsland;
		delete CA_TextDescription;
		delete CA_ValueDescription;
		//delete TextRoles;
		
		class TextSide : RscText {
			y = "(9.5/100)	* SafeZoneH + SafeZoneY";
		};
		
		class TextPool: RscText
		{
			style = 0;
			x = "(20/100)	* SafeZoneW + SafeZoneX";
			y = "(9.5/100)	* SafeZoneH + SafeZoneY";
		};
		
		class CA_MP_roles_Title : CA_Title {
			idc = 1001;
			style = 2;
			x = "(02/100)	* SafeZoneW + SafeZoneX";
			y = "(02/100)	* SafeZoneH + SafeZoneY";
			w = "(96/100)	* SafeZoneW";
			h = "(06/100)	* SafeZoneH";
			font = "TahomaB";
			sizeEx = 0.05906536;
			colorText[] = {0, 0, 0, 0.9};
			colorBackground[] = {49/255, 36/255, 25/255, 0/255};
			text = $STR_DISP_MPSETUP_TITLE;
		};
		class OriginsSurv : RscPictureKeepAspect {
			w = "(12.7/100)	* SafeZoneW";
			h = "(12.7/100)	* SafeZoneH";
			x = "(4.15/100)	* SafeZoneW + SafeZoneX";
			y = "(15/100)	* SafeZoneH + SafeZoneY";
			text = "\z\addons\adx_pack\paa\ui\flag_origins_ca.paa";
		};
		delete CA_B_West;
		class CA_B_WestOri: RscActiveText
		// меняем флаг на кнопке на нейтральный
		{
			x = "(4.15/100)	* SafeZoneW + SafeZoneX";
			y = "(15/100)	* SafeZoneH + SafeZoneY";
			w = "(12.7/100)	* SafeZoneW";
			h = "(8/100)	* SafeZoneH";
			style = 0x02 + 0x100 + 0x40;
			type = 11;
			colorActive[] = {1, 1, 1, 1};
			colorDisabled[] = {1, 1, 1, 0.15};
			colorShade[] = {1, 1, 1, 1};
			colorText[] = {1, 1, 1, 1};
			pictureWidth = 1;
			pictureHeight = 1;
			textHeight = 0.35;
			sideDisabled =   "z\addons\adx_pack\paa\ui\flag_origins_pustoj_ca.paa";
			sideToggle =     "z\addons\adx_pack\paa\ui\flag_origins_pustoj_ca.paa";
			idc = 104;
			color[] = {1, 1, 1, 1};
			text = "SURVIVORS";
			picture = "\z\addons\adx_pack\paa\ui\flag_origins_pustoj_ca.paa";
		};
		
		class CA_ValuePool: RscIGUIListBox
		// расширяем Pool
		{
			x = "(20/100)	* SafeZoneW + SafeZoneX";
			y = "(12.5/100)	* SafeZoneH + SafeZoneY";
			w = "(78/100)	* SafeZoneW";
			h = "(72/100)	* SafeZoneH";
			rows = 25;
			canDrag = 0;
		};
		
		class CA_ButtonContinue : RscShortcutButton {
			access = 0;
			idc = 1;
			default = 1;
			shortcuts[] = {0x00050000 + 0, 28, 57, 156};
			x = "(83/100)	* SafeZoneW + SafeZoneX";
			y = "(93/100)	* SafeZoneH + SafeZoneY";
			text = "OK";
			font = "TahomaB";
			period = 0;
			periodFocus = 0;
			periodOver = 0;
			animTextureNormal 	= "\z\addons\adx_pack\paa\ui\esc_knopka_normal_ca.paa";
			animTextureDisabled     = "\z\addons\adx_pack\paa\ui\esc_knopka_normal_ca.paa";
			animTextureOver 	= "\z\addons\adx_pack\paa\ui\esc_knopka_focus_ca.paa";
			animTextureFocused 	= "\z\addons\adx_pack\paa\ui\esc_knopka_default_ca.paa";
			animTexturePressed 	= "\z\addons\adx_pack\paa\ui\esc_knopka_down_ca.paa";
			animTextureDefault 	= "\z\addons\adx_pack\paa\ui\esc_knopka_default_ca.paa";
			h = 0.07;
			class TextPos {
				left = 0.07;
				top = 0.007;
				right = 0.005;
				bottom = 0.005;
			};
			class HitZone {
				left = 0.004;
				top = 0.004;
				right = 0.004;
				bottom = 0.004;
			};
		};
		
		class CA_ButtonCancel : RscShortcutButton {
			idc = 2;
			default = 0;
			shortcuts[] = {0x00050000 + 1};
			x = "(68/100)	* SafeZoneW + SafeZoneX";
			y = "(93/100)	* SafeZoneH + SafeZoneY";
			w = 0.203825;
			text = $STR_DISP_BACK;
			font = "TahomaB";
			period = 0;
			periodFocus = 0;
			periodOver = 0;
			animTextureNormal 	= "\z\addons\adx_pack\paa\ui\esc_knopka_normal_ca.paa";
			animTextureDisabled     = "\z\addons\adx_pack\paa\ui\esc_knopka_normal_ca.paa";
			animTextureOver 	= "\z\addons\adx_pack\paa\ui\esc_knopka_focus_ca.paa";
			animTextureFocused 	= "\z\addons\adx_pack\paa\ui\esc_knopka_default_ca.paa";
			animTexturePressed 	= "\z\addons\adx_pack\paa\ui\esc_knopka_down_ca.paa";
			animTextureDefault 	= "\z\addons\adx_pack\paa\ui\esc_knopka_default_ca.paa";
			h = 0.07;
			class TextPos {
				left = 0.05;
				top = 0.007;
				right = 0.005;
				bottom = 0.005;
			};
			class HitZone {
				left = 0.004;
				top = 0.004;
				right = 0.004;
				bottom = 0.004;
			};
		};

	};
};
class RscShortcutButtonMainOri : RscShortcutButton
{
	idc = -1;
	style = 0;
	default = 0;
	w = 0.3137255;
	h = 0.1045752;
	color[] = {0.8784,0.8471,0.651,1.0};
	colorDisabled[] = {1,1,1,0.25};
	class HitZone
	{
		left = 0.0;
		top = 0.0;
		right = 0.0;
		bottom = 0.0;
	};
	class ShortcutPos
	{
		left = 0.0204;
		top = 0.026;
		w = 0.0392157;
		h = 0.0522876;
	};
	class TextPos
	{
		left = 0.08;
		top = 0.034;
		right = 0.005;
		bottom = 0.005;
	};
	//\z\addons\dayz_code\ui\ui_menu_fon_ca.paa
	//\z\addons\dayz_code\ui\ui_knopka_menu_disabled_ca.paa
	animTextureNormal 	= "\z\addons\adx_pack\paa\ui\ui_knopka_menu_normal_ca.paa";
	animTextureDisabled = "\z\addons\adx_pack\paa\ui\ui_knopka_menu_disabled_ca.paa";
	animTextureOver 	= "\z\addons\adx_pack\paa\ui\ui_knopka_menu_over_ca.paa";
	animTextureFocused 	= "\z\addons\adx_pack\paa\ui\ui_knopka_menu_focus_ca.paa";
	animTexturePressed 	= "\z\addons\adx_pack\paa\ui\ui_knopka_menu_down_ca.paa";
	animTextureDefault 	= "\z\addons\adx_pack\paa\ui\ui_knopka_menu_normal_ca.paa";
	period = 0.5;
	font = "Zeppelin32";
	size = 0.03921;
	sizeEx = 0.03921;
	text = "";
	soundEnter[] = {"\ca\ui\data\sound\onover",0.09,1};
	soundPush[] = {"\ca\ui\data\sound\new1",0.0,0};
	soundClick[] = {"\ca\ui\data\sound\onclick",0.07,1};
	soundEscape[] = {"\ca\ui\data\sound\onescape",0.09,1};
	action = "";
	class Attributes
	{
		font = "Zeppelin32";
		color = "#E5E5E5";
		align = "left";
		shadow = "false";
	};
	class AttributesImage
	{
		font = "Zeppelin32";
		color = "#E5E5E5";
		align = "false";
	};
};
class RscDisplayMPInterrupt: RscStandardDisplay
{
	onLoad = "[] execVM '\z\addons\dayz_code\compile\player_onPause.sqf'; _dummy = ['Init', _this] execVM '\ca\ui\scripts\pauseLoadinit.sqf';";
	onUnload = "private ['_dummy']; _dummy = ['Unload', _this] execVM '\ca\ui\scripts\pauseOnUnload.sqf';";
	movingEnable = 0;
	enableSimulation = 1;
	class controlsBackground
	{
		class Mainback : RscPicture {
			text = "\z\addons\adx_pack\paa\ui\ui_menu_fon_ca.paa";
		};
		// add logo
		class ORI_Logo :RscPictureKeepAspect
		{ 
			x = 0.058;
			y = 0.403; 
			w = 0.3;
			h = 0.3;
			text = "z\addons\adx_pack\paa\gui\logo_adx.paa";
		};

	};
	class controls
	{
		// delete classes
		delete CA_B_REVERT;
		delete CA_B_Respawn;
		class CA_B_SAVE : RscShortcutButtonMainOri 	{ onButtonClick = ""; text = ""; };
		class CA_B_Skip : CA_B_SAVE 		{ onButtonClick = ""; text = ""; };
		// move buttons to top
		class CA_B_Options :CA_B_SAVE 		{ y = "0.2537 + 0.101903 * 0"; };
		class CA_B_Abort :CA_B_SAVE 		
		{ 

			y = "0.2537 + 0.101903 * 1"; 
			onButtonClick = "[] execVM '\z\addons\dayz_code\compile\player_onPause.sqf'; call dayz_forceSave;";
		};
		class Paused_Title : CA_Title {
			colorText[] = {0.95, 0.95, 0.95, 0.7};
		};
		class MissionTitle : RscText {
			colorText[] = {0.95, 0.95, 0.95, 0.7};
		};
		class DifficultyTitle : RscText {
			colorText[] = {0.95, 0.95, 0.95, 0.7};
		};
		class ButtonCancel : RscShortcutButton {
			animTextureNormal 	= "\z\addons\adx_pack\paa\ui\esc_knopka_normal_ca.paa";
			animTextureDisabled = "\z\addons\adx_pack\paa\ui\esc_knopka_normal_ca.paa";
			animTextureOver 	= "\z\addons\adx_pack\paa\ui\esc_knopka_over_ca.paa";
			animTextureFocused 	= "\z\addons\adx_pack\paa\ui\esc_knopka_focus_ca.paa";
			animTexturePressed 	= "\z\addons\adx_pack\paa\ui\esc_knopka_down_ca.paa";
			animTextureDefault 	= "\z\addons\adx_pack\paa\ui\esc_knopka_default_ca.paa";
			x = 0.1775;
			y = 0.8799;
			w = 0.153825;
			h = 0.08;
			period = 0;
			class TextPos {
				left = 0.045;
				top = 0.010;
				right = 0.005;
				bottom = 0.005;
			};
		};
	};
};


class RscDisplayMain : RscStandardDisplay
{
	//onKeyDown = " _dummy = _this execVM ""\z\addons\dayz_code\ui\scripts\mainmenuShortcuts.sqf"";";
	class RscShortcutButtonMain2 : RscShortcutButtonMain {
		animTextureNormal 	= "\z\addons\adx_pack\paa\ui\ui_knopka_menu_disabled_ca.paa";
		animTextureDisabled = "\z\addons\adx_pack\paa\ui\ui_knopka_menu_disabled_ca.paa";
		animTextureOver 	= "\z\addons\adx_pack\paa\ui\ui_knopka_menu_over_ca.paa";
		animTextureFocused 	= "\z\addons\adx_pack\paa\ui\ui_knopka_menu_focus_ca.paa";
		animTexturePressed 	= "\z\addons\adx_pack\paa\ui\ui_knopka_menu_down_ca.paa";
		animTextureDefault 	= "\z\addons\adx_pack\paa\ui\ui_knopka_menu_disabled_ca.paa";
		period = 0.5;
		periodFocus = 1.2;
		periodOver = 0.8;
	};
	class controlsBackground 
	{
		class MainbackFadedOrigins : RscPicture {
			x = "SafeZoneX";
			y = "SafeZoneY";
			w = "SafeZoneW";
			h = "SafeZoneH";
			colorText[] = {1, 1, 1, 1};
			text = "\z\addons\adx_pack\paa\gui\logo_big.paa";
		};
		delete Mainback;
		class Mainback_Ori : RscPicture {
			idc = 1104;
			x = 0.045;
			y = 0.17;
			w = 0.627451;
			h = 0.836601;
			text = "\z\addons\adx_pack\paa\ui\ui_menu_fon_ca.paa";
		};
		delete CA_ARMA2;
		class CA_ARMA2_Ori : RscPicture {
			idc = 1106;
			colorText[] = {1, 1, 1, 0.6+0.4};
			x = "(SafeZoneW + SafeZoneX) - (0.1568627*1.5 + 0.04)";
			y = "SafeZoneY + 0.00";
			w = "(10/100)	* SafeZoneW";
			h = "(5.5/100)	* SafeZoneH";
			text = "z\addons\adx_pack\paa\gui\logo_adx.paa";
		};
		
	};

	class controls 
	{
		delete CA_Expansions;
		delete CA_SinglePlayer;
		
				
		class CA_Version;
		class DAYZ_Version : CA_Version
		{
			idc = -1;
			text = "v0.00"; //VERSION
			y = "(SafeZoneH + SafeZoneY) - (1 - 0.95)";
		};
		class CA_MP: RscShortcutButtonMain2 { y = 0.2537; default = 0; };
		class CA_Options: RscShortcutButtonMain2 { y = 0.354519; default = 0; };
		class CA_PlayerProfile: RscShortcutButtonMain2 { y = 0.455421; default = 0; };
		
		class CA_Exit : RscShortcutButton {
			idc = 106;
			shortcuts[] = {0x00050000 + 3};
			x = 0.17431;
			y = 0.8799;
			//w = 0.207943;
			w = 0.153825;
			h = 0.08;
			text = $STR_CA_MAIN_QUIT;
			toolTip = $STR_TOOLTIP_MAIN_EXIT;
			period = 0;
			periodFocus = 0;
			periodOver = 0;
			animTextureNormal 	= "\z\addons\adx_pack\paa\ui\esc_knopka_normal_ca.paa";
			animTextureDisabled = "\z\addons\adx_pack\paa\ui\esc_knopka_normal_ca.paa";
			animTextureOver 	= "\z\addons\adx_pack\paa\ui\esc_knopka_focus_ca.paa";
			animTextureFocused 	= "\z\addons\adx_pack\paa\ui\esc_knopka_default_ca.paa";
			animTexturePressed 	= "\z\addons\adx_pack\paa\ui\esc_knopka_down_ca.paa";
			animTextureDefault 	= "\z\addons\adx_pack\paa\ui\esc_knopka_default_ca.paa";
			default = 1;
			class TextPos 
			{
				left = 0.040;
				top = 0.010;
				right = 0.005;
				bottom = 0.005;
			};
			class HitZone
			{
				left = 0.01;
				top = 0.01;
				right = 0.01;
				bottom = 0.01;
			};
		};
	};
};

class RscMsgBox {
	movingEnable = 1;
	onLoad="endLoadingScreen";
	class Top {
		
		class CA_Background_Top : RscPicture {
			x = 0.13;
			y = 0.24;
			w = 1.2549;
			h = 0.104575;
			moving = 1;
			text = "\z\addons\adx_pack\paa\ui\ui_messagebox_top_ca.paa";
		};
	};
	
	class Middle {

		class CA_Background_Middle : RscPicture {
			x = 0.13;
			y = 0.344621;
			w = 1.2549;
			h = 0.032;
			text = "\z\addons\adx_pack\paa\ui\ui_messagebox_middle_ca.paa";
		};
		
		class CA_Text : RscStructuredText {
			idc = 101;
			x = 0.146045;
			y = 0.344621;
			w = 0.71;
			h = 0;
			size = 0.03921;
			
			class Attributes {
				color = "#e0d8a6";
			};
		};
	};
	
	class Bottom {
		
		class CA_Background_Bottom : RscPicture {
			x = 0.13;
			y = 0.376621;
			w = 1.2549;
			h = 0.20915;
			text = "\z\addons\adx_pack\paa\ui\ui_messagebox_bottom_ca.paa";
		};
		
		class CA_ButtonOK : RscShortcutButton {
			idc = 1;
			shortcuts[] = {0x00050000 + 0, 28, 57, 156};
			text = $STR_DISP_OK;
			default = 1;
			x = 0.4504;
			y = 0.401621;
			w = 0.2;
			font = "TahomaB";
			period = 0;
			periodFocus = 0;
			periodOver = 0;
			animTextureNormal 	= "\z\addons\adx_pack\paa\ui\esc_knopka_normal_ca.paa";
			animTextureDisabled = "\z\addons\adx_pack\paa\ui\esc_knopka_normal_ca.paa";
			animTextureOver 	= "\z\addons\adx_pack\paa\ui\esc_knopka_focus_ca.paa";
			animTextureFocused 	= "\z\addons\adx_pack\paa\ui\esc_knopka_default_ca.paa";
			animTexturePressed 	= "\z\addons\adx_pack\paa\ui\esc_knopka_down_ca.paa";
			animTextureDefault 	= "\z\addons\adx_pack\paa\ui\esc_knopka_default_ca.paa";
			h = 0.07;
			class TextPos {
				left = 0.062;
				top = 0.007;
				right = 0.005;
				bottom = 0.005;
			};
			class HitZone {
				left = 0.004;
				top = 0.004;
				right = 0.004;
				bottom = 0.004;
			};
			
		};
		
		class CA_ButtonCancel : CA_ButtonOK {
			idc = 2;
			shortcuts[] = {0x00050000 + 1};
			text = $STR_DISP_CANCEL;
			x = 0.66;
		};
	};
};

class RscDisplayPassword : RscStandardDisplay {
	movingEnable = 0;
	simulationEnabled = 0;
	
	class controlsbackground {
		class MainbackFadedOrigins : RscPicture {
			x = "SafeZoneX";
			y = "SafeZoneY";
			w = "SafeZoneW";
			h = "SafeZoneH";
			colorText[] = {1, 1, 1, 1};
			text = "\z\addons\adx_pack\paa\gui\logo_big.paa";
		};
		delete CA_Background_Top;
		class CA_Background_TopOri : RscPicture {
			x = 0.13;
			y = 0.24;
			w = 1.2549;
			h = 0.418301;
			text = "\z\addons\adx_pack\paa\ui\ui_background_messagebox_ca.paa";
		};
	};
	
	class controls {
		delete SetPasswordTitle;
		class TextPassword : RscText {
			idc = 1002;
			x = 0.191;
			y = 0.354166;
			w = 0.161766;
			text = $STR_DISP_PASSWORD;
		};
		
		class ValuePassword : RscEdit {
			x = 0.361519;
			y = 0.356617;
			w = 0.330885;
			h = 0.039216;
			colorBackground[] = {0, 0, 0, 0.5};
		};
		
		class CA_ButtonCancel : RscShortcutButton {
			idc = 2;
			shortcuts[] = {0x00050000 + 1};
			text = $STR_DISP_CANCEL;
			x = 0.200196;
			y = 0.465924;
			font = "TahomaB";
			period = 0;
			periodFocus = 0;
			periodOver = 0;
			animTextureNormal 	= "\z\addons\adx_pack\paa\ui\esc_knopka_normal_ca.paa";
			animTextureDisabled = "\z\addons\adx_pack\paa\ui\esc_knopka_normal_ca.paa";
			animTextureOver 	= "\z\addons\adx_pack\paa\ui\esc_knopka_focus_ca.paa";
			animTextureFocused 	= "\z\addons\adx_pack\paa\ui\esc_knopka_default_ca.paa";
			animTexturePressed 	= "\z\addons\adx_pack\paa\ui\esc_knopka_down_ca.paa";
			animTextureDefault 	= "\z\addons\adx_pack\paa\ui\esc_knopka_default_ca.paa";
			h = 0.07;
			class TextPos {
				left = 0.05;
				top = 0.007;
				right = 0.005;
				bottom = 0.005;
			};
			class HitZone {
				left = 0.004;
				top = 0.004;
				right = 0.004;
				bottom = 0.004;
			};
		};
		
		class CA_ButtonOK : RscShortcutButton {
			idc = 1;
			shortcuts[] = {0x00050000 + 0, 28, 57, 156};
			text = $STR_DISP_OK;
			default = 1;
			x = 0.604981;
			y = 0.465924;
			font = "TahomaB";
			period = 0;
			periodFocus = 0;
			periodOver = 0;
			animTextureNormal 	= "\z\addons\adx_pack\paa\ui\esc_knopka_normal_ca.paa";
			animTextureDisabled = "\z\addons\adx_pack\paa\ui\esc_knopka_normal_ca.paa";
			animTextureOver 	= "\z\addons\adx_pack\paa\ui\esc_knopka_focus_ca.paa";
			animTextureFocused 	= "\z\addons\adx_pack\paa\ui\esc_knopka_default_ca.paa";
			animTexturePressed 	= "\z\addons\adx_pack\paa\ui\esc_knopka_down_ca.paa";
			animTextureDefault 	= "\z\addons\adx_pack\paa\ui\esc_knopka_default_ca.paa";
			h = 0.07;
			class TextPos {
				left = 0.062;
				top = 0.007;
				right = 0.005;
				bottom = 0.005;
			};
			class HitZone {
				left = 0.004;
				top = 0.004;
				right = 0.004;
				bottom = 0.004;
			};
		};
	};
};
class RscDisplayMultiplayer : RscStandardDisplay {
	class controlsbackground {
		class CA_TitleBack : RscPicture {
			x = "(02/100)	* SafeZoneW + SafeZoneX";
			y = "(02/100)	* SafeZoneH + SafeZoneY";
			w = "(96/100)	* SafeZoneW";
			h = "(06/100)	* SafeZoneH";
			text = "\z\addons\adx_pack\paa\ui\mp_topfon.paa";
		};
		
		delete MainbackSessions;
		delete CA_New;
		class Origins_Slogo : RscPictureKeepAspect {
			idc = 1107;
			x = "(0.5/10)	* SafeZoneW + SafeZoneX";
			y = "(0.1/10)	* SafeZoneH + SafeZoneY";
			w = "(10/100)	* SafeZoneW";
			h = "(7.5/100)	* SafeZoneH";
			text = "z\addons\adx_pack\paa\gui\logo_adx.paa";//////////////////////////////
		};

		delete GameSpy;
		class GameSpyOri : RscPictureKeepAspect {
			idc = 1106;
			x = "(82/100)	* SafeZoneW + SafeZoneX";
			y = "(2.5/100)	* SafeZoneH + SafeZoneY";
			w = "(15/100)	* SafeZoneW";
			h = "(5/100)	* SafeZoneH";
			text = "\z\addons\adx_pack\paa\ui\gamespy_logo.paa";
		};

		delete CA_Title2Border;
		delete CA_Title2;
		delete ValueSessionsBorder;
		class CA_Title2ori : RscText {
			idc = 101;
			style = 2;
			font = "TahomaB";
			sizeEx = 0.05906536;
			colorText[] = {1, 1, 1, 0.9};
			x = "(02/100)	* SafeZoneW + SafeZoneX";
			y = "(02/100)	* SafeZoneH + SafeZoneY";
			w = "(96/100)	* SafeZoneW";
			h = "(06/100)	* SafeZoneH";
		};
		class CA_ServerDetailHost : RscText {
			idc = 129;
			SizeEx = 0.02674;
			font = "TahomaB";
			x = "(04/100)	* SafeZoneW + SafeZoneX";
			y = "(78/100)	* SafeZoneH + SafeZoneY";
			w = "(94/100)	* SafeZoneW";
			h = "(2/100)	* SafeZoneH";
			colorbackground[] = {0.1961, 0.1451, 0.0941, 0.42};
		};
		delete CA_TextServerDetailDifficulty;
		class CA_TextServerDetailDifficulty_Ori : CA_ServerDetailHost {
			text = $STR_CA_DIFFICULTY;
			x = "(02/100)	* SafeZoneW + SafeZoneX";
			y = "(87/100)	* SafeZoneH + SafeZoneY";
			w = "(15/100)	* SafeZoneW";
			h = "(2/100)	* SafeZoneH";
		};
		delete CA_ServerDetailDifficulty;
		class CA_ServerDetailDifficulty_Ori : CA_ServerDetailHost {
			idc = 138;
			x = "(02/100)	* SafeZoneW + SafeZoneX";
			y = "(90/100)	* SafeZoneH + SafeZoneY";
			w = "(15/100)	* SafeZoneW";
			h = "(2/100)	* SafeZoneH";
		};
		delete CA_TextServerDetailPlayers;
		class CA_TextServerDetailPlayers_Ori : CA_ServerDetailHost {
			text = $STR_DISP_MP_PLAYERS;
			x = "(02/100)	* SafeZoneW + SafeZoneX";
			y = "(81/100)	* SafeZoneH + SafeZoneY";
			w = "(15/100)	* SafeZoneW";
			h = "(5/100)* SafeZoneH";
			SizeEx = 0.03;
		};
		delete CA_ServerDetailPlayers;
		class CA_ServerDetailPlayers_Ori : CA_ServerDetailHost {
			idc = 149;
			style = 0x10 + 0x200;
			lineSpacing = 0.9;
			x = "(18/100)	* SafeZoneW + SafeZoneX";
			y = "(81/100)	* SafeZoneH + SafeZoneY";
			w = "(80/100)	* SafeZoneW";
			h = "(12.75/100)* SafeZoneH";
		};
		class CA_ServerDetailPassword : RscPictureKeepAspect {
			idc = 143;
			x = "(02/100)	* SafeZoneW + SafeZoneX";
			y = "(78/100)	* SafeZoneH + SafeZoneY";
			w = "(2/100)	* SafeZoneW";
			h = "(2/100)	* SafeZoneH";
		};
		//znachek treugolnika
		class CA_ServerIcon : RscPictureKeepAspect {
			idc = 111;
			x = "(01.5/100)	* SafeZoneW + SafeZoneX";
			y = "(9/100)	* SafeZoneH + SafeZoneY";
			w = 0.03;
			h = 0.03;
			colorText[] = {1, 1, 1, 1};
		};
		
		class CA_TypeIcon : CA_ServerIcon {
			idc = 140;
			x = "(39.25/100)	* SafeZoneW + SafeZoneX";
		};
		
		class CA_MissionIcon : CA_ServerIcon {
			idc = 113;
			x = "(45.5/100)	* SafeZoneW + SafeZoneX";
		};
		
		class CA_StateIcon : CA_ServerIcon {
			idc = 115;
			x = "(78.25/100)	* SafeZoneW + SafeZoneX";
		};
		
		class CA_PlayersIcon : CA_ServerIcon {
			idc = 117;
			x = "(85.5/100)	* SafeZoneW + SafeZoneX";
		};
		
		class CA_PingIcon : CA_ServerIcon {
			idc = 119;
			x = "(91.75/100)	* SafeZoneW + SafeZoneX";
		};
		
		//knopki filtrov
		class CA_FilterPasswordedServers : RscPictureKeepAspect {
			idc = 150;
			x = "(02/100)	* SafeZoneW + SafeZoneX";
			y = "(75/100)	* SafeZoneH + SafeZoneY";
			w = "(2/100)	* SafeZoneW";
			h = "(3/100)	* SafeZoneH";
		};
		
		class CA_FilterFullServers : CA_FilterPasswordedServers {
			idc = 151;
			x = "(5/100)	* SafeZoneW + SafeZoneX";
		};
		
		class CA_ServerBEFilter : CA_FilterPasswordedServers {
			idc = 154;
			x = "(8/100)	* SafeZoneW + SafeZoneX";
		};
		
		class CA_ServerExpansionsFilter : CA_FilterPasswordedServers {
			idc = 155;
			x = "(11/100)	* SafeZoneW + SafeZoneX";
		};
		//dannie iz filtra
		class CA_ServerFilter : RscText {
			idc = 125;
			SizeEx = 0.02674;
			x = "(16/100)	* SafeZoneW + SafeZoneX";
			y = "(75/100)	* SafeZoneH + SafeZoneY";
			w = "(20/100)	* SafeZoneW";
			h = "(3/100)	* SafeZoneH";
			text = "Official Dayz Origins";
			font = "TahomaB";
		};
		
		class CA_TypeFilter : CA_ServerFilter {
			idc = 152;
			x = "(40/100)	* SafeZoneW + SafeZoneX";
			w = "(8/100)	* SafeZoneW";
		};
		
		class CA_MissionFilter : CA_ServerFilter {
			idc = 126;
			x = "(55/100)	* SafeZoneW + SafeZoneX";
		};
		
		class CA_PlayersFilter : CA_ServerFilter {
			idc = 127;
			style = 2;
			x = "(86.5/100)	* SafeZoneW + SafeZoneX";
			w = "(6/100)	* SafeZoneW";
		};
		
		class CA_PingFilter : CA_ServerFilter {
			idc = 128;
			x = "(93/100)	* SafeZoneW + SafeZoneX";
			w = "(4/100)	* SafeZoneW";
		};
		
		//knopki
		class CA_Cancel : RscShortcutButton {
			idc = 2;
			default = 0;
			x = "(85/100)	* SafeZoneW + SafeZoneX";
			y = "(95/100)	* SafeZoneH + SafeZoneY";
			shortcuts[] = {0x00050000 + 1};
			text = $STR_CA_CANCEL;
			font = "TahomaB";
			period = 0;
			periodFocus = 0;
			periodOver = 0;
			animTextureNormal 	= "\z\addons\adx_pack\paa\ui\esc_knopka_normal_ca.paa";
			animTextureDisabled = "\z\addons\adx_pack\paa\ui\esc_knopka_normal_ca.paa";
			animTextureOver 	= "\z\addons\adx_pack\paa\ui\esc_knopka_focus_ca.paa";
			animTextureFocused 	= "\z\addons\adx_pack\paa\ui\esc_knopka_default_ca.paa";
			animTexturePressed 	= "\z\addons\adx_pack\paa\ui\esc_knopka_down_ca.paa";
			animTextureDefault 	= "\z\addons\adx_pack\paa\ui\esc_knopka_default_ca.paa";
			h = 0.07;
			class TextPos {
				left = 0.0492;
				top = 0.005;
				right = 0.005;
				bottom = 0.005;
			};
			class HitZone {
				left = 0.004;
				top = 0.004;
				right = 0.004;
				bottom = 0.004;
			};
		};
		
		class CA_Internet_Lan : CA_Cancel {
			x = "(02/100)	* SafeZoneW + SafeZoneX";
			y = "(95/100)	* SafeZoneH + SafeZoneY";
			w = 0.283825;
			default = 0;
			class TextPos {
				left = 0.056;
				top = 0.005;
				right = 0.005;
				bottom = 0.005;
			};
			shortcuts[] = {};
			idc = 122;
		};
		
		class CA_Refresh : CA_Cancel {
			x = "(29/100)	* SafeZoneW + SafeZoneX";
			y = "(95/100)	* SafeZoneH + SafeZoneY";
			idc = 123;
			default = 0;
			text = $STR_DISP_MULTI_REFRESH;
			shortcuts[] = {0x00050000 + 3};
			class TextPos {
				left = 0.046;
				top = 0.005;
				right = 0.005;
				bottom = 0.005;
			};
		};
		
		class CA_Join : CA_Cancel {
			x = "(43/100)	* SafeZoneW + SafeZoneX";
			y = "(95/100)	* SafeZoneH + SafeZoneY";
			idc = 105;
			shortcuts[] = {0x00050000 + 0, 28, 57, 156};
			default = 1;
			text = $STR_CA_MULTI_JOIN;
			class TextPos {
				left = 0.048;
				top = 0.005;
				right = 0.005;
				bottom = 0.005;
			};
		};
		
		class CA_BFilter : CA_Cancel {
			x = "(57/100)	* SafeZoneW + SafeZoneX";
			y = "(95/100)	* SafeZoneH + SafeZoneY";
			idc = 124;
			default = 0;
			shortcuts[] = {0x00050000 + 2};
			text = $STR_DISP_MULTI_FILTER;
			class TextPos {
				left = 0.046;
				top = 0.005;
				right = 0.005;
				bottom = 0.005;
			};
		};
		
		class CA_BRemote : CA_Cancel {
			x = "(71/100)	* SafeZoneW + SafeZoneX";
			y = "(95/100)	* SafeZoneH + SafeZoneY";
			idc = 103;
			default = 0;
			shortcuts[] = {};
			text = $STR_CA_MULTI_REMOTE;
			class TextPos {
				left = 0.033;
				top = 0.005;
				right = 0.005;
				bottom = 0.005;
			};
		};
		
		
		delete CA_ServerDetailType;
		delete CA_TextServerDetailExpansions;
		delete CA_ServerDetailExpansion;
		delete CA_ServerDetailVersionRequired;
		delete CA_ServerDetailIsland;
		delete CA_TextServerDetailIsland;
		delete CA_TextServerDetailTimeLeft;
		delete CA_ServerDetailTimeLeft;
		delete CA_ServerDetailVersion;
		delete CA_TextServerDetailPlatform;
		delete CA_ServerDetailPlatform;
		delete CA_TextServerDetailountry;
		delete CA_ServerDetailCountry;
		delete CA_TextServerDetailBE;
		delete CA_ServerDetailBE;
		delete CA_TextServerDetailType;
		delete CA_TextServerDetailMission;
		class Mainback : RscPicture {
			x = "SafeZoneX";
			y = "SafeZoneY";
			w = "SafeZoneW";
			h = "SafeZoneH";
			colorbackground[] = {0, 0, 0, 0};
			text = "\z\addons\adx_pack\paa\gui\logo_big.paa";
		};
	};
	class controls {
		delete CA_MissionColumn;
		delete CA_TypeColumn;
		class CA_ServerColumn : RscButtonTextOnly {
			idc = 112;
			text = $STR_MP_SERVER;
			font = "TahomaB";
			x = "(02/100)	* SafeZoneW + SafeZoneX";
			y = "(9/100)	* SafeZoneH + SafeZoneY";
			w = "(75/100)	* SafeZoneW";
			h = "(2/100)	* SafeZoneH";
			colorBackgroundActive[] = {1, 1, 1, 0.55};
			colorBackgroundDisabled[] = {1, 1, 1, 1};
		};
		
		class CA_StateColumn : CA_ServerColumn {
			idc = 116;
			text = $STR_MENU_STATUS;
			font = "TahomaB";
			x = "(78.5/100)	* SafeZoneW + SafeZoneX";
			w = "(8/100)	* SafeZoneW";
		};
		
		class CA_PlayersColumn : CA_ServerColumn {
			idc = 118;
			text = $STR_MP_PLAYERS;
			font = "TahomaB";
			x = "(87/100)	* SafeZoneW + SafeZoneX";
			w = "(6/100)	* SafeZoneW";
		};
		
		class CA_PingColumn : CA_ServerColumn {
			idc = 120;
			text = $STR_DISP_MULTI_PING;
			font = "TahomaB";
			x = "(93/100)	* SafeZoneW + SafeZoneX";
			w = "(4/100)	* SafeZoneW";
		};
		class CA_ValueSessions : RscIGUIListBox {
			idc = 102;
			style = 16;
			shadow = 2;
			font = "TahomaB";
			colorSelect[] = {0.69, 0.769, 0.871, 1};
			colorPingUnknown[] = {0.4, 0.4, 0.4, 1};
			colorPingGood[] = {0, 1, 0, 1};
			colorPingPoor[] = {1, 0.6, 0, 1};
			colorPingBad[] = {1, 0, 0, 1};
			rowHeight = 0.025;
			colorSelectBackground[] = {0, 0, 0, 1};
			colorSelectBackground2[] = {0.58, 0.1147, 0.1108, 1};
			password = "ca\ui\data\ui_server_password_ca.paa";
			locked = "ca\ui\data\ui_server_locked_ca.paa";
			version = "ca\ui\data\ui_wrong_version_ca.paa";
			none = "ca\ui\data\ui_server_connect_ca.paa";
			star = "ca\ui\data\ui_mission_done_ca.paa";
			addons = "ca\ui\data\ui_server_addons_ca.paa";
			mods = "ca\ui\data\ui_server_red_mark_ca.paa";
			x = "(02/100)	* SafeZoneW + SafeZoneX";
			y = "(12/100)	* SafeZoneH + SafeZoneY";
			w = "(96/100)	* SafeZoneW";
			h = "(61.25/100)	* SafeZoneH";
			SizeEx = 0.025;
			columns[] = {0.81, 0, 0, 0.10, 0.05, 0.04};
		};
	};
};

class RscDisplayFilter : RscStandardDisplay {
	class controlsBackground {

		class MainbackFadedOrigins : RscPicture {
			x = "SafeZoneX";
			y = "SafeZoneY";
			w = "SafeZoneW";
			h = "SafeZoneH";
			colorText[] = {1, 1, 1, 1};
			text = "\z\addons\adx_pack\paa\gui\logo_big.paa";///////////////////////////////////
		};
		
		delete MainbackFaded1;
		class MainbackFaded1_ori : RscPicture {
			idc = 1106;
			x = 0.045;
			y = 0.17;
			w = 0.627451;
			h = 0.836601;
			colorText[] = {1, 1, 1, 0.25};
			text = "\z\addons\adx_pack\paa\ui\ui_menu_fonf_ca.paa";
		};
		
		delete MainbackFaded2;
		class MainbackFaded2_ori : RscPicture {
			idc = 1107;
			x = 0.092;
			y = 0.17;
			w = 0.627451;
			h = 0.836601;
			colorText[] = {1, 1, 1, 0.5};
			text = "\z\addons\adx_pack\paa\ui\ui_menu_fonf_ca.paa";
		};
		
		delete Mainback;
		class Mainback_ori : RscPicture {
			idc = 1104;
			x = 0.138;
			y = 0.17;
			w = 0.627451;
			h = 0.836601;
			text = "\z\addons\adx_pack\paa\ui\ui_menu_fonf_ca.paa";
		};
	
	};
	
	class controls {
		
		class CA_FilterTitle : CA_Title {
			x = 0.18;
			y = 0.192;
			text = $STR_DISP_FILTER_TITLE;
		};
		
		class CA_TextServer : RscText {
			x = 0.159803;
			y = (0.416549 + -3*0.0500);
			w = 0.235296;
			text = $STR_DISP_FILTER_SERVER;
		};
		
		class CA_ValueServer : RscEdit {
			idc = 101;
			x = 0.400534;
			y = (0.416549 + -3*0.0500);
			w = 0.3;
		};
		
		class CA_TextMaxPing : CA_TextServer {
			x = 0.159803;
			y = (0.416549 + -2*0.0500);
			text = $STR_DISP_FILTER_MAXPING;
		};
		
		class CA_ValueMaxPing : CA_ValueServer {
			idc = 103;
			x = 0.400534;
			y = (0.416549 + -2*0.0500);
			w = 0.1;
		};
		
		class CA_TextMinPlayers : CA_TextServer {
			x = 0.159803;
			y = (0.416549 + -1*0.0500);
			text = $STR_DISP_FILTER_MINPLAYERS;
		};
		
		class CA_ValueMinPlayers : CA_ValueMaxPing {
			idc = 104;
			x = 0.400534;
			y = (0.416549 + -1*0.0500);
		};
		
		class CA_TextMaxPlayers : CA_TextServer {
			x = 0.159803;
			y = (0.416549 + 0*0.0500);
			text = $STR_DISP_FILTER_MAXPLAYERS;
		};
		
		class CA_ValueMaxPlayers : CA_ValueMaxPing {
			idc = 105;
			x = 0.400534;
			y = (0.416549 + 0*0.0500);
		};
		
		class CA_TextMission : CA_TextServer {
			x = 0.159803;
			y = (0.416549 + 1*0.0500);
			text = $STR_DISP_FILTER_MISSION;
		};
		
		class ValueMission : CA_ValueServer {
			idc = 102;
			x = 0.400534;
			y = (0.416549 + 1*0.0500);
		};
		
		class CA_TextFilterType : CA_TextServer {
			x = 0.159803;
			y = (0.416549 + 2*0.0500);
			text = $STR_DISP_ARCGRP_TYPE;
		};
		
		class CA_FilterType : RscCombo {
			idc = 109;
			x = 0.400534;
			y = (0.416549 + 2*0.0500);
			w = 0.3;
		};
		
		class CA_TextExpansionsType : CA_TextServer {
			x = 0.159803;
			y = (0.416549 + 3*0.0500);
			text = $STR_DISP_EXPANSIONS;
		};
		
		class CA_FilterExpansions : RscXListBox {
			idc = 111;
			x = 0.400534;
			y = (0.416549 + 3*0.0500);
			w = 0.3;
		};
		
		class CA_TextHideFull : CA_TextServer {
			x = 0.159803;
			y = (0.416549 + 4*0.0500);
			text = $STR_FILTER_FULL_TEXT;
		};
		
		class CA_FullServers : RscXListBox {
			idc = 106;
			x = 0.400534;
			y = (0.416549 + 4*0.0500);
			w = 0.3;
		};
		
		class CA_TextPassworded : CA_TextServer {
			x = 0.159803;
			y = (0.416549 + 5*0.0500);
			text = $STR_FILTER_PASSWORDED_TEXT;
		};
		
		class CA_PasswordedServers : CA_FullServers {
			idc = 107;
			x = 0.400534;
			y = (0.416549 + 5*0.0500);
		};
		
		class CA_TextBattlEye : CA_TextServer {
			x = 0.159803;
			y = (0.416549 + 6*0.0500);
			text = $STR_FILTER_BATTLEYE_TEXT;
		};
		
		class CA_BEServers : CA_FullServers {
			idc = 110;
			x = 0.400534;
			y = (0.416549 + 6*0.0500);
			w = 0.3;
		};
		
		class CA_Filter_Default : RscShortcutButton {
			idc = 108;
			shortcuts[] = {0x00050000 + 2};
			x = 0.3395;
			y = 0.7625;
			text = $STR_DISP_DEFAULT;
			period = 0;
			periodFocus = 0;
			periodOver = 0;
			animTextureNormal 	= "\z\addons\adx_pack\paa\ui\esc_knopka_normal_ca.paa";
			animTextureDisabled = "\z\addons\adx_pack\paa\ui\esc_knopka_normal_ca.paa";
			animTextureOver 	= "\z\addons\adx_pack\paa\ui\esc_knopka_focus_ca.paa";
			animTextureFocused 	= "\z\addons\adx_pack\paa\ui\esc_knopka_default_ca.paa";
			animTexturePressed 	= "\z\addons\adx_pack\paa\ui\esc_knopka_down_ca.paa";
			animTextureDefault 	= "\z\addons\adx_pack\paa\ui\esc_knopka_default_ca.paa";
			h = 0.07;
			class TextPos 
			{
				left = 0.040;
				top = 0.007;
				right = 0.005;
				bottom = 0.005;
			};
			class HitZone
			{
				left = 0.01;
				top = 0.01;
				right = 0.01;
				bottom = 0.01;
			};
		};
		
		class CA_Filter_Ok : RscShortcutButton {
			idc = 1;
			shortcuts[] = {0x00050000 + 0, 28, 57, 156};
			x = 0.525;
			y = 0.7625;
			text = $STR_DISP_OK;
			default = 1;
			period = 0;
			periodFocus = 0;
			periodOver = 0;
			animTextureNormal 	= "\z\addons\adx_pack\paa\ui\esc_knopka_normal_ca.paa";
			animTextureDisabled = "\z\addons\adx_pack\paa\ui\esc_knopka_normal_ca.paa";
			animTextureOver 	= "\z\addons\adx_pack\paa\ui\esc_knopka_focus_ca.paa";
			animTextureFocused 	= "\z\addons\adx_pack\paa\ui\esc_knopka_default_ca.paa";
			animTexturePressed 	= "\z\addons\adx_pack\paa\ui\esc_knopka_down_ca.paa";
			animTextureDefault 	= "\z\addons\adx_pack\paa\ui\esc_knopka_default_ca.paa";
			h = 0.07;
			class TextPos 
			{
				left = 0.06;
				top = 0.007;
				right = 0.005;
				bottom = 0.005;
			};
			class HitZone
			{
				left = 0.01;
				top = 0.01;
				right = 0.01;
				bottom = 0.01;
			};
		};
		
		class CA_Filter_Cancel : RscShortcutButton {
			idc = 2;
			shortcuts[] = {0x00050000 + 1};
			x = 0.157;
			y = 0.7625;
			text = $STR_DISP_CANCEL;
			period = 0;
			periodFocus = 0;
			periodOver = 0;
			animTextureNormal 	= "\z\addons\adx_pack\paa\ui\esc_knopka_normal_ca.paa";
			animTextureDisabled = "\z\addons\adx_pack\paa\ui\esc_knopka_normal_ca.paa";
			animTextureOver 	= "\z\addons\adx_pack\paa\ui\esc_knopka_focus_ca.paa";
			animTextureFocused 	= "\z\addons\adx_pack\paa\ui\esc_knopka_default_ca.paa";
			animTexturePressed 	= "\z\addons\adx_pack\paa\ui\esc_knopka_down_ca.paa";
			animTextureDefault 	= "\z\addons\adx_pack\paa\ui\esc_knopka_default_ca.paa";
			h = 0.07;
			class TextPos 
			{
				left = 0.05;
				top = 0.007;
				right = 0.005;
				bottom = 0.005;
			};
			class HitZone
			{
				left = 0.01;
				top = 0.01;
				right = 0.01;
				bottom = 0.01;
			};
		};
	};
};

class RscDisplayIPAddress : RscStandardDisplay {
	class controlsBackground {
		
		class MainbackFadedOrigins : RscPicture {
			x = "SafeZoneX";
			y = "SafeZoneY";
			w = "SafeZoneW";
			h = "SafeZoneH";
			colorText[] = {1, 1, 1, 1};
			text = "\z\addons\adx_pack\paa\gui\logo_big.paa";///////////////////////////
		};
		
		delete MainbackFaded1;
		class MainbackFaded1_ori : RscPicture {
			idc = 1106;
			x = 0.045;
			y = 0.17;
			w = 0.627451;
			h = 0.836601;
			colorText[] = {1, 1, 1, 0.25};
			text = "\z\addons\adx_pack\paa\ui\ui_menu_fon_ca.paa";
		};
		delete MainbackFaded2;
		class MainbackFaded2_ori : RscPicture {
			idc = 1107;
			x = 0.092;
			y = 0.17;
			w = 0.627451;
			h = 0.836601;
			colorText[] = {1, 1, 1, 0.5};
			text = "\z\addons\adx_pack\paa\ui\ui_menu_fon_ca.paa";
		};
		delete Mainback;
		class Mainback_ori : RscPicture {
			idc = 1104;
			x = 0.138;
			y = 0.17;
			w = 0.627451;
			h = 0.836601;
			text = "\z\addons\adx_pack\paa\ui\ui_menu_fon_ca.paa";
		};
	};
	
	class controls {
				
		class CA_IPTitle : CA_Title {
			x = 0.18;
			y = 0.192;
			text = $STR_DISP_IP_TITLE;
		};
		
		class CA_TextAddress : RscText {
			x = 0.160706;
			y = 0.279628;
			w = 0.169119;
			text = $STR_DISP_IP_ADDRESS;
		};
		
		class CA_ValueAddress : RscEdit {
			idc = 101;
			x = 0.26178;
			y = 0.279628;
			w = 0.180;
			h = 0.039216;
		};
		
		class CA_TextPort : CA_TextAddress {
			y = 0.328648;
			text = $STR_DISP_IP_PORT;
		};
		
		class CA_ValuePort : CA_ValueAddress {
			idc = 102;
			y = 0.328648;
			w = 0.110295;
		};
		
		class ButtonContinue : RscShortcutButton {
			idc = 1;
			default = 1;
			shortcuts[] = {0x00050000 + 0, 28, 57, 156};
			x = 0.26178;
			y = 0.398648;
			
			text = $STR_DISP_OK;
			w = 0.153825;
			h = 0.07;
			period = 0;
			periodFocus = 0;
			periodOver = 0;
			animTextureNormal 	= "\z\addons\adx_pack\paa\ui\esc_knopka_normal_ca.paa";
			animTextureDisabled =     "\z\addons\adx_pack\paa\ui\esc_knopka_normal_ca.paa";
			animTextureOver 	= "\z\addons\adx_pack\paa\ui\esc_knopka_focus_ca.paa";
			animTextureFocused 	= "\z\addons\adx_pack\paa\ui\esc_knopka_default_ca.paa";
			animTexturePressed 	= "\z\addons\adx_pack\paa\ui\esc_knopka_down_ca.paa";
			animTextureDefault 	= "\z\addons\adx_pack\paa\ui\esc_knopka_default_ca.paa";
			class TextPos 
			{
				left = 0.05;
				top = 0.005;
				right = 0.005;
				bottom = 0.005;
			};
			class HitZone
			{
				left = 0.01;
				top = 0.01;
				right = 0.01;
				bottom = 0.01;
			};
		};
		
		class ButtonCancel : RscShortcutButton {
			idc = 2;
			default = 0;
			shortcuts[] = {0x00050000 + 1};
			x = 0.27;
			y = 0.8825;
			text = $STR_DISP_BACK;
			h = 0.07;
			w = 0.153825;
			period = 0;
			periodFocus = 0;
			periodOver = 0;
			animTextureNormal 	= "\z\addons\adx_pack\paa\ui\esc_knopka_normal_ca.paa";
			animTextureDisabled     = "\z\addons\adx_pack\paa\ui\esc_knopka_normal_ca.paa";
			animTextureOver 	= "\z\addons\adx_pack\paa\ui\esc_knopka_focus_ca.paa";
			animTextureFocused 	= "\z\addons\adx_pack\paa\ui\esc_knopka_default_ca.paa";
			animTexturePressed 	= "\z\addons\adx_pack\paa\ui\esc_knopka_down_ca.paa";
			animTextureDefault 	= "\z\addons\adx_pack\paa\ui\esc_knopka_default_ca.paa";
			class TextPos 
			{
				left = 0.040;
				top = 0.005;
				right = 0.005;
				bottom = 0.005;
			};
			class HitZone
			{
				left = 0.01;
				top = 0.01;
				right = 0.01;
				bottom = 0.01;
			};
		};
	};
};


#include "RscDisplay\includes.hpp"


