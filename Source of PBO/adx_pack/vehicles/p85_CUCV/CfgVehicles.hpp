class CfgVehicles {
	class UAZ_Unarmed_Base;	// External class reference
	
	
	class p85_CUCV : UAZ_Unarmed_Base {
		armor = 32;
		mapSize = 6;
		hiddenSelections[] = {"main_body", "clan", "clan_sign"};
		hiddenSelectionsTextures[] = {"\origins_pack\vehicles\textures\cucv_co.paa"};
		transportSoldier = 3;
		vehicleClass = "Car";
		faction = "rth_copter_class";
		crew = "Profiteer2";
		driverAction = "HMMWV_Driver";
		cargoAction[] = {"HMMWV_Cargo01"};
		
		class TransportMagazines {};
		model = "\origins_pack\vehicles\p85_cucv";
		maxSpeed = 95;	// max speed on level road, km/h
		hideProxyInCombat = false;
		viewDriverInExternal = 1;
		castDriverShadow = true;
		forceHideDriver = false;
		side = TCivilian;
		scope = public;
		displayName = "M1008 CUCV";
		icon = "\origins_pack\vehicles\icons\ico_cucv_ca.paa";
		picture = "\origins_pack\vehicles\icons\pic_cucv_ca.paa";
		transportMaxMagazines = 100;
		transportMaxWeapons = 10;
		transportMaxBackpacks = 10;
		
		class Library {
			libTextDesc = "Jeep M38A1";
		};
		
		class Damage {
			tex[] = {"origins_pack\vehicles\textures\glass_ca.paa", "ca\wheeled\data\hatchback_glassbr1_ca.paa", "ca\wheeled\data\hatchback_glassbr2_ca.paa"};
			mat[] = {"origins_pack\vehicles\textures\cucv.rvmat", "origins_pack\vehicles\textures\cucv.rvmat", "origins_pack\vehicles\textures\cucv_de.rvmat"};
		};
		
		class AnimationSources {
			class pluhPredni {
				source = "pluhPredni";
				animPeriod = 1;
				initPhase = 0;
			};
			
			class kolaOchrana {
				source = "kolaOchrana";
				animPeriod = 1;
				initPhase = 0;
			};
			
			class oknaOchrana {
				source = "oknaOchrana";
				animPeriod = 1;
				initPhase = 0;
			};
			
			class predniOknoOchrana {
				source = "predniOknoOchrana";
				animPeriod = 1;
				initPhase = 0;
			};
			
			class HitLFWheel {
				source = "Hit";
				hitpoint = "HitLFWheel";
				raw = 1;
			};
			
			class HitRFWheel : HitLFWheel {
				hitpoint = "HitRFWheel";
			};
			
			class HitLBWheel : HitLFWheel {
				hitpoint = "HitLBWheel";
			};
			
			class HitRBWheel : HitLFWheel {
				hitpoint = "HitRBWheel";
			};
			
			class HitGlass1 {
				source = "Hit";
				hitpoint = "HitGlass1";
				raw = 1;
			};
			
			class HitGlass2 : HitGlass1 {
				hitpoint = "HitGlass2";
			};
			
			class HitGlass3 : HitGlass1 {
				hitpoint = "HitGlass3";
			};
			
			class HitGlass4 : HitGlass1 {
				hitpoint = "HitGlass4";
			};
			
			class HitGlass5 : HitGlass1 {
				hitpoint = "HitGlass5";
			};
			
			class HitGlass6 : HitGlass1 {
				hitpoint = "HitGlass6";
			};
			
			class HitGlass7 : HitGlass1 {
				hitpoint = "HitGlass7";
			};
			
			class HitGlass8 : HitGlass1 {
				hitpoint = "HitGlass8";
			};
			
			class HitGlass9 : HitGlass1 {
				hitpoint = "HitGlass9";
			};
			
			class HitGlass10 : HitGlass1 {
				hitpoint = "HitGlass10";
			};
			
			class HitGlass11 : HitGlass1 {
				hitpoint = "HitGlass11";
			};
			
			class HitGlass12 : HitGlass1 {
				hitpoint = "HitGlass12";
			};
		};
		
		class HitPoints {
			class HitGlass1 {
				armor = 0.1;
				material = -1;
				name = "sklo_p";
				visual = "sklo_p";
				passThrough = false;
			};
			
			class HitGlass2 : HitGlass1 {
				name = "sklo_p1";
				visual = "sklo_p1";
			};
			
			class HitGlass3 : HitGlass1 {
				name = "sklo_p2";
				visual = "sklo_p2";
			};
			
			class HitGlass4 : HitGlass1 {
				name = "sklo_p3";
				visual = "sklo_p3";
			};
			
			class HitGlass5 : HitGlass1 {
				name = "sklo_l1";
				visual = "sklo_l1";
			};
			
			class HitGlass6 : HitGlass1 {
				name = "sklo_l2";
				visual = "sklo_l3";
			};
			
			class HitGlass7 : HitGlass1 {
				name = "sklo_l3";
				visual = "glass3";
			};
			
			class HitGlass8 : HitGlass1 {
				name = "sklo_z";
				visual = "sklo_z";
			};
			
			class HitGlass9 : HitGlass1 {
				name = "sklo_pp";
				visual = "sklo_pp";
			};
			
			class HitGlass10 : HitGlass1 {
				name = "sklo_pl";
				visual = "sklo_pl";
			};
			
			class HitGlass11 : HitGlass1 {
				name = "sklo_p4";
				visual = "sklo_p4";
			};
			
			class HitGlass12 : HitGlass1 {
				name = "sklo_l4";
				visual = "sklo_l4";
			};
			
			class HitLFWheel {
				armor = 0.15;
				material = -1;
				name = "levy predni tlumic";
				visual = "";
				passThrough = 0.3;
			};
			
			class HitLBWheel : HitLFWheel {
				name = "levy zadni tlumic";
				visual = "";
			};
			
			class HitRFWheel : HitLFWheel {
				name = "pravy predni tlumic";
				visual = "";
			};
			
			class HitRBWheel : HitLFWheel {
				name = "pravy zadni tlumic";
				visual = "";
			};
			
			class HitBody {
				armor = 1;
				material = -1;
				name = "karoserie";
				visual = "";
				passThrough = true;
			};
			
			class HitFuel {
				armor = 0.3;
				material = -1;
				name = "palivo";
				passThrough = 0.5;
			};
			
			class HitRGlass {
				armor = 0.3;
				material = -1;
				name = "sklo predni P";
				passThrough = false;
			};
			
			class HitLGlass {
				armor = 0.3;
				material = -1;
				name = "sklo predni L";
				passThrough = false;
			};
			
			class HitEngine {
				armor = 0.4;
				material = -1;
				name = "motor";
				visual = "";
				passThrough = 0.2;
			};
		};
	};
};
