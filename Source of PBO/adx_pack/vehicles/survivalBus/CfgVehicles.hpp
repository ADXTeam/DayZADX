class CfgVehicles {
	class Land;	// External class reference
	class Car;	// External class reference
	class UAZ_MG_base;	// External class reference
	
	class car_turrets2 : UAZ_MG_base {
		class Turrets;	// External class reference
		class MainTurret;	// External class reference
	};
	class survivorBus : car_turrets2 {
		vehicleClass = "car";
		faction = "rth_copter_class";
		displayName = "Scrap Bus";
		model = "\origins_pack\vehicles\rth_scrapbus_mg";
		icon = "\Ca\wheeled\data\map_ico\icomap_Bus_CA.paa";
		picture = "\Ca\wheeled\data\ico\bus_city_CA.paa";
		mapSize = 7;
		turnCoef = 3.7;
		steerAheadSimul = 0.5;
		steerAheadPlan = 0.38;
		hasGunner = true;
		scope = public;
		transportSoldier = 5;
		driverAction = "Ikarus_Driver";
		cargoAction[] = {"Truck_Cargo01", "Truck_Cargo01", "Truck_Cargo01", "Truck_Cargo01", "Truck_Cargo01", "Truck_Cargo01"};
		transportMaxMagazines = 120;
		transportMaxWeapons = 15;
		transportMaxBackpacks = 10;
		
		class Damage {
			tex[] = {"rth_scrapbus\tex\bus_exterior_co.paa", "rth_scrapbus\tex\bus_exterior_co.paa", "rth_scrapbus\tex\damage_co.paa", "rth_scrapbus\tex\partsdiff.paa", "rth_scrapbus\tex\partsdiff.paa", "rth_scrapbus\tex\damage_co.paa"};
			mat[] = {"RTH_ScrapBus\tex\parts.rvmat", "RTH_ScrapBus\tex\parts.rvmat", "RTH_ScrapBus\tex\parts_destruct.rvmat", "ca\wheeled2\ikarus\data\bus_exterior.rvmat", "ca\wheeled2\ikarus\data\bus_exterior.rvmat", "RTH_ScrapBus\tex\parts_destruct.rvmat"};
		};
		
		class AnimationSources {
			class platform_move {
				source = "user";
				animPeriod = 5;
				initPhase = 0;
			};
			
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
		
		class Turrets : Turrets {
			class MainTurret : MainTurret {
				enableManualFire = 1;
				body = "mainTurret";
				gun = "mainGun";
				outGunnerMayFire = true;
				forceHideGunner = true;
				castGunnerShadow = true;
				viewGunnerInExternal = true;
				gunnerOpticsModel = "\ca\Weapons\optika_empty";
				gunnerForceOptics = false;
				weapons[] = {PKT};
				soundServo[] = {};
				stabilizedInAxes = 0;
				magazines[] = {"100Rnd_762x54_PK", "100Rnd_762x54_PK", "100Rnd_762x54_PK", "100Rnd_762x54_PK", "100Rnd_762x54_PK", "100Rnd_762x54_PK"};
				gunnerAction = "Hilux_Gunner";
				gunnerInAction = "Hilux_Gunner";
				ejectDeadGunner = true;
				minElev = -18;
				maxElev = 40;
				minTurn = -360;
				maxTurn = 360;
				initTurn = 0;
			};
		};
		
		class UserActions {
			class platform_on {
				displayName = "Platform Up";
				position = "eye";
				radius = 5;
				onlyForPlayer = 0;
				condition = "(alive this) && (player in [gunner this, driver this]) && (this animationPhase ""platform_move""< 0.5)";
				statement = "this animate [""platform_move"", 1]";
			};
			
			class platform_off {
				displayName = "Platform Down";
				position = "eye";
				radius = 5;
				onlyForPlayer = 0;
				condition = "(alive this) && (player in [gunner this, driver this]) && (this animationPhase ""platform_move"" >= 0.5)";
				statement = "this animate [""platform_move"", 0]";
			};
		};
	};
};
