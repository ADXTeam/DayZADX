class CfgVehicles {
	class Land;	// External class reference
	class Car;	// External class reference
	class UAZ_Unarmed_Base;
	
	class lublin_truck : UAZ_Unarmed_Base {
		armor = 32;
		mapSize = 6;
		faction = "rth_copter_class";
		vehicleClass = "Car";
		scope = public;
		side = TCivilian;
		icon = "\origins_pack\vehicles\icons\ico_van_ca.paa";
		picture = "\origins_pack\vehicles\icons\pic_van_ca.paa";
		attendant = "false";	// can heal other vehicles
		DriverAction = "Golf_Driver";
		model = "\origins_pack\vehicles\VIL_lublin_truck";
		transportSoldier = 1;
		displayName = "Lublin (truck)";
		cargoAction[] = {"HMMWV_Cargo01"};
		crew = "Profiteer2";
		hasGunner = "false";
		transportMaxMagazines = 100;
		transportMaxWeapons = 10;
		transportMaxBackpacks = 10;
		
		class Reflectors {
			class Left1 {
				color[] = {0.8, 0.8, 1.0, 1.0};
				ambient[] = {0.07, 0.07, 0.07, 1.0};
				position = "L svetlo";
				direction = "konec L svetla";
				hitpoint = "L svetlo";
				selection = "L svetlo";
				size = 1;
				brightness = 0.8;
			};
			
			class Right1 {
				color[] = {0.8, 0.8, 1.0, 1.0};
				ambient[] = {0.07, 0.07, 0.07, 1.0};
				position = "P svetlo";
				direction = "konec P svetla";
				hitpoint = "P svetlo";
				selection = "P svetlo";
				size = 1;
				brightness = 0.8;
			};
		};
		
		class TransportMagazines {};
		
		class Library {
			libTextDesc = "Lublin van produced by FSR and later continued by Daewoo";
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
		
		class Damage {
			tex[] = {"origins_pack\vehicles\textures\sedan_glass_ca.paa", "ca\wheeled\data\sedan_glassbr1_ca.paa", "ca\wheeled\data\sedan_glassbr2_ca.paa"};
			mat[] = {"origins_pack\vehicles\textures\lub1.rvmat", "origins_pack\vehicles\textures\lub1.rvmat", "origins_pack\vehicles\textures\lub1_de.rvmat", "origins_pack\vehicles\textures\lub2.rvmat", "origins_pack\vehicles\textures\lub2.rvmat", "origins_pack\vehicles\textures\lub2_de.rvmat", "origins_pack\vehicles\textures\lublin_old.rvmat", "origins_pack\vehicles\textures\lublin_old.rvmat", "origins_pack\vehicles\textures\lublin_old_de.rvmat", "origins_pack\vehicles\textures\lublin_new.rvmat", "origins_pack\vehicles\textures\lublin_new.rvmat", "origins_pack\vehicles\textures\lublin_new_de.rvmat", "origins_pack\vehicles\textures\lublin_t.rvmat", "origins_pack\vehicles\textures\lublin_t.rvmat", "origins_pack\vehicles\textures\lublin_t_de.rvmat", "origins_pack\vehicles\textures\ambulace.rvmat", "origins_pack\vehicles\textures\ambulace.rvmat", "origins_pack\vehicles\textures\pusty_de.rvmat"};
		};
	};
};
