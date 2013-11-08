class CfgVehicles {
	class Land;	// External class reference
	class Car;	// External class reference
	class Skodabase;	// External class reference
	
	class poldek : Skodabase {
		vehicleClass = "car";
		faction = "rth_copter_class";
		displayName = "Polonez 78 (Taxi)";
		model = "\origins_pack\vehicles\vil_poldek_rust";
		scope = public;
		transportSoldier = 3;
		driverAction = "HMMWV_Driver";
		cargoAction[] = {"HMMWV_Cargo01"};
		hiddenSelections[] = {"Camo01", "taxi"};
		hiddenSelectionsTextures[] = {"\origins_pack\vehicles\textures\polonez_rust_co.paa", "\origins_pack\vehicles\textures\polonez_rust_co.paa"};
		transportMaxMagazines = 100;
		transportMaxWeapons = 10;
		transportMaxBackpacks = 10;
		
		class Damage {
			tex[] = {};
			mat[] = {"origins_pack\vehicles\textures\plate.rvmat", "origins_pack\vehicles\textures\plate.rvmat", "origins_pack\vehicles\textures\plate_de.rvmat", "origins_pack\vehicles\textures\polonez.rvmat", "origins_pack\vehicles\textures\polonez.rvmat", "origins_pack\vehicles\textures\polonez_de.rvmat"};
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
			
			class Hitarmor1 {
				source = "Hit";
				hitpoint = "";
				raw = 1;
			};
			
			class Hitarmor2 : Hitarmor1 {
				hitpoint = "";
			};
			
			class Hitarmor3 : Hitarmor1 {
				hitpoint = "";
			};
			
			class Hitarmor4 : Hitarmor1 {
				hitpoint = "";
			};
		};
		
		class HitPoints {
			class Hitarmor1 {
				armor = 1;
				material = -1;
				name = "pluhPredni";
				visual = "pluhPredni";
				passThrough = 0.2;
			};
			
			class Hitarmor2 : Hitarmor1 {
				name = "kolaOchrana";
				visual = "kolaOchrana";
			};
			
			class Hitarmor3 : Hitarmor1 {
				name = "oknaOchrana";
				visual = "oknaOchrana";
			};
			
			class Hitarmor4 : Hitarmor1 {
				name = "predniOknoOchrana";
				visual = "predniOknoOchrana";
			};
			
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
			
			class HitLFWheel {
				armor = 0.3;
				material = -1;
				name = "levy predni tlumic";
				visual = "";
				passThrough = 0.2;
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
			
			class HitEngine {
				armor = 1.2;
				material = -1;
				name = "motor";
				visual = "motor";
				passThrough = "true";
			};
			
			class HitRGlass {
				armor = 0.5;
				material = 0;
				name = "sklo predni P";
				passThrough = "true";
			};
			
			class HitLGlass {
				armor = 0.5;
				material = 0;
				name = "sklo predni L";
				passThrough = "true";
			};
			
			class HitBody {
				armor = 0.4;
				material = -1;
				name = "karoserie";
				visual = "karoserie";
				passThrough = "true";
			};
			
			class HitFuel {
				armor = 1.4;
				material = -1;
				name = "palivo";
				passThrough = "true";
			};
		};
	};
};
