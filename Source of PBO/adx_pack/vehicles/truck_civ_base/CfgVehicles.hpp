class CfgVehicles {
	class Land;	// External class reference
	class Car;	// External class reference
	class UAZ_Unarmed_Base;	// External class reference
	
	class Ural_Base;	// External class reference
	
	class truck_civ_base : Ural_Base {
		armor = 32;
		vehicleClass = "Car";
		faction = "rth_copter_class";
		armorWheels = 0.8;
		side = TCivilian;
		scope = protected;
		crew = "Profiteer2";
		icon = "\origins_pack\vehicles\icons\ico_truck_ca.paa";
		picture = "\origins_pack\vehicles\icons\pic_truck_ca.paa";
		maxSpeed = 95;	// max speed on level road, km/h
		displayName = "STAR 944";
		hasGunner = "false";
		driverAction = "Kamaz_Driver";
		cargoAction[] = {"HMMWV_Cargo01"};
		
		class TransportMagazines {};
		transportSoldier = 12;
		
		class Library {
			libTextDesc = "STAR-944";
		};
		transportMaxMagazines = 150;
		transportMaxWeapons = 15;
		transportMaxBackpacks = 10;
		
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
				visual = "sklo_l2";
			};
			
			class HitGlass7 : HitGlass1 {
				name = "sklo_l3";
				visual = "sklo_l3";
			};
			
			class HitGlass8 : HitGlass1 {
				name = "sklo_z";
				visual = "sklo_z";
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
		
		class Reflectors {
			class Left1 {
				color[] = {0.8, 0.8, 1.0, 1.0};
				ambient[] = {0.07, 0.07, 0.07, 1.0};
				position = "L svetlo";
				direction = "konec svetla Pl";
				hitpoint = "L svetlo";
				selection = "L svetlo";
				size = 1;
				brightness = 0.8;
			};
			
			class Right1 {
				color[] = {0.8, 0.8, 1.0, 1.0};
				ambient[] = {0.07, 0.07, 0.07, 1.0};
				position = "P svetlo";
				direction = "konec svetla Pp";
				hitpoint = "P svetlo";
				selection = "P svetlo";
				size = 1;
				brightness = 0.8;
			};
		};
		
		class Damage {
			tex[] = {"\vilas_cpl\glass\sklo_rysy.paa", "\vilas_cpl\glass\sklo_rysy_de.paa", "\vilas_cpl\glass\sklo_rysy_de.paa"};
			mat[] = {"origins_pack\vehicles\textures\944_sp.rvmat", "origins_pack\vehicles\textures\944_sp.rvmat", "origins_pack\vehicles\textures\944_sp_de.rvmat"};
		};
		hiddenSelections[] = {"main_body", "back_body"};
		hiddenSelectionsTextures[] = {"\origins_pack\vehicles\textures\midlum_co.paa", "\origins_pack\vehicles\textures\s2000civ_co.paa"};
	};
};
