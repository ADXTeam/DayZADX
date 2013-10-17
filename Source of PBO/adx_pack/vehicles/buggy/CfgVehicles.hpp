class CfgVehicles {
	class Car;	// External class reference
	
	class ScrapBuggy : Car {
		weapons[] = {};
		faction = "rth_copter_class";
		scope = public;
		side = TCivilian;
		vehicleClass = "Car";
		model = "rth_ScrapBuggy\ScrapBuggy.p3d";
		icon = "rth_ScrapBuggy\map_ico\rth_buggy_map_ico_ca.paa";
		picture = "rth_ScrapBuggy\ico\rth_buggy_ico_ca.paa";
		mapSize = 7;
		crew = "Citizen1";
		typicalCargo[] = {"Profiteer2"};
		displayName = "Scrap Buggy";
		armor = 45;
		damperSize = 0.2;	// max. damper amplitude
		damperForce = 1;	// larger number more stiffness dampers
		damperDamping = 1;	// larger number less movement in dampers
		steerAheadSimul = 0.2;
		steerAheadPlan = 0.3;
		predictTurnSimul = 0.9;
		predictTurnPlan = 1.0;
		fuelCapacity = 200;
		memoryPointsGetInDriver = "pos driver";
		memoryPointsGetInDriverDir = "pos driver dir";
		memoryPointsGetInCargo = "pos cargo";
		memoryPointsGetInCargoDir = "pos cargo dir";
		preferRoads = false;
		crewVulnerable = true;
		
		class Exhausts {
			class Exhaust1 {
				position = "vyfuk start";
				direction = "vyfuk finish";
				effect = "ExhaustsEffect";
			};
		};
		wheelCircumference = 2.06089;
		maxSpeed = 70;	// max speed on level road, km/h
		driverAction = "Golf_Driver";
		transportSoldier = 1;
		cargoAction[] = {"Golf_Cargo01"};
		hasGunner = false;
		terrainCoef = 2.0;
		turnCoef = 1.0;
		
		class Turrets {};
		rarityUrban = 0.9;
		transportMaxMagazines = 100;
		transportMaxWeapons = 10;
		transportMaxBackpacks = 10;
		viewCargoShadow = true;
		viewDriverShadow = true;
		soundGear[] = {"", db-85, 1};
		soundGetIn[] = {"ca\Sounds_E\Wheeled_E\SUV\SUV_ext_door", db-5, 1};
		soundGetOut[] = {"ca\Sounds_E\Wheeled_E\SUV\SUV_ext_door", db-5, 1, 20};
		soundEngineOnInt[] = {"ca\Sounds_E\Wheeled_E\UAZ\uaz_int_start1", 0.177828, 1.0};
		soundEngineOnExt[] = {"ca\Sounds_E\Wheeled_E\UAZ\uaz_ext_start1", 0.177828, 1.0, 100};
		soundEngineOffInt[] = {"ca\Sounds_E\Wheeled_E\UAZ\uaz_int_stop1", 0.177828, 1.0};
		soundEngineOffExt[] = {"ca\Sounds_E\Wheeled_E\UAZ\uaz_ext_stop1", 0.177828, 1.0, 100};
		buildCrash0[] = {"Ca\sounds\Vehicles\Crash\crash_building_01", 0.707946, 1, 200};
		buildCrash1[] = {"Ca\sounds\Vehicles\Crash\crash_building_02", 0.707946, 1, 200};
		buildCrash2[] = {"Ca\sounds\Vehicles\Crash\crash_building_03", 0.707946, 1, 200};
		buildCrash3[] = {"Ca\sounds\Vehicles\Crash\crash_building_04", 0.707946, 1, 200};
		soundBuildingCrash[] = {"buildCrash0", 0.25, "buildCrash1", 0.25, "buildCrash2", 0.25, "buildCrash3", 0.25};
		WoodCrash0[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_01", 0.707946, 1, 200};
		WoodCrash1[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_02", 0.707946, 1, 200};
		WoodCrash2[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_03", 0.707946, 1, 200};
		WoodCrash3[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_04", 0.707946, 1, 200};
		WoodCrash4[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_05", 0.707946, 1, 200};
		WoodCrash5[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_06", 0.707946, 1, 200};
		soundWoodCrash[] = {"woodCrash0", 0.166, "woodCrash1", 0.166, "woodCrash2", 0.166, "woodCrash3", 0.166, "woodCrash4", 0.166, "woodCrash5", 0.166};
		ArmorCrash0[] = {"Ca\sounds\Vehicles\Crash\crash_vehicle_01", 0.707946, 1, 200};
		ArmorCrash1[] = {"Ca\sounds\Vehicles\Crash\crash_vehicle_02", 0.707946, 1, 200};
		ArmorCrash2[] = {"Ca\sounds\Vehicles\Crash\crash_vehicle_03", 0.707946, 1, 200};
		ArmorCrash3[] = {"Ca\sounds\Vehicles\Crash\crash_vehicle_04", 0.707946, 1, 200};
		soundArmorCrash[] = {"ArmorCrash0", 0.25, "ArmorCrash1", 0.25, "ArmorCrash2", 0.25, "ArmorCrash3", 0.25};
		
		class SoundEvents {
			class AccelerationIn {
				sound[] = {"ca\Sounds_E\Wheeled_E\UAZ\uaz_int_acceleration", db-5, 1.0};
				limit = 0.4;
				expression = "(engineOn*(1-camPos))*gmeterZ";
			};
			
			class AccelerationOut {
				sound[] = {"ca\Sounds_E\Wheeled_E\UAZ\uaz_ext_acceleration", db-5, 1.0, 200};
				limit = 0.4;
				expression = "(engineOn*camPos)*gmeterZ";
			};
		};
		
		class Sounds {
			class Engine {
				sound[] = {"ca\Sounds_E\Wheeled_E\UAZ\uaz_ext_low1", db-15, 0.9, 100};
				frequency = "(randomizer*0.05+0.95)*rpm";
				volume = "camPos*engineOn*((rpm factor[0.3, 0.5]) min (rpm factor[0.7, 0.55]))";
			};
			
			class EngineHighOut {
				sound[] = {"ca\Sounds_E\Wheeled_E\UAZ\uaz_ext_high1", db0, 0.8, 300};
				frequency = "(randomizer*0.05+0.95)*rpm";
				volume = "camPos*engineOn*(rpm factor[0.6, 1.0])";
			};
			
			class IdleOut {
				sound[] = {"ca\Sounds_E\Wheeled_E\UAZ\uaz_ext_idle", db-5, 1.0, 100};
				frequency = "1";
				volume = "engineOn*camPos*(rpm factor[0.5, 0])";
			};
			
			class TiresRockOut {
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-rock2", db-10, 1.0, 30};
				frequency = "1";
				volume = "camPos*rock*(speed factor[2, 20])";
			};
			
			class TiresSandOut {
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-sand2", db-10, 1.0, 30};
				frequency = "1";
				volume = "camPos*sand*(speed factor[2, 20])";
			};
			
			class TiresGrassOut {
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-grass2", db-10, 1.0, 30};
				frequency = "1";
				volume = "camPos*grass*(speed factor[2, 20])";
			};
			
			class TiresMudOut {
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-mud2", db-10, 1.0, 30};
				frequency = "1";
				volume = "camPos*mud*(speed factor[2, 20])";
			};
			
			class TiresGravelOut {
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-gravel2", db-10, 1.0, 30};
				frequency = "1";
				volume = "camPos*gravel*(speed factor[2, 20])";
			};
			
			class TiresAsphaltOut {
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-asphalt3", db-10, 1.0, 30};
				frequency = "1";
				volume = "camPos*asphalt*(speed factor[2, 20])";
			};
			
			class NoiseOut {
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Noises\ext\noise2", db-10, 1.0, 30};
				frequency = "1";
				volume = "camPos*(damper0 max 0.03)*(speed factor[0, 8])";
			};
			
			class EngineLowIn {
				sound[] = {"ca\Sounds_E\Wheeled_E\UAZ\uaz_int_low1", db-10, 0.7};
				frequency = "(randomizer*0.05+0.95)*rpm";
				volume = "(1-camPos)*engineOn*((rpm factor[0.3, 0.5]) min (rpm factor[0.7, 0.55]))";
			};
			
			class EngineHighIn {
				sound[] = {"ca\Sounds_E\Wheeled_E\UAZ\uaz_int_high1", db0, 0.8};
				frequency = "(randomizer*0.05+0.95)*rpm";
				volume = "(1-camPos)*engineOn*(rpm factor[0.6, 1.0])";
			};
			
			class IdleIn {
				sound[] = {"ca\Sounds_E\Wheeled_E\UAZ\uaz_int_idle", db-10, 1.0};
				frequency = "1";
				volume = "engineOn*(rpm factor[0.5, 0])*(1-camPos)";
			};
			
			class TiresRockIn {
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-rock2", db-10, 1.0};
				frequency = "1";
				volume = "(1-camPos)*rock*(speed factor[2, 20])";
			};
			
			class TiresSandIn {
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-sand2", db-10, 1.0};
				frequency = "1";
				volume = "(1-camPos)*sand*(speed factor[2, 20])";
			};
			
			class TiresGrassIn {
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-grass2", db-10, 1.0};
				frequency = "1";
				volume = "(1-camPos)*grass*(speed factor[2, 20])";
			};
			
			class TiresMudIn {
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-mud2", db-10, 1.0};
				frequency = "1";
				volume = "(1-camPos)*mud*(speed factor[2, 20])";
			};
			
			class TiresGravelIn {
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-gravel2", db-10, 1.0};
				frequency = "1";
				volume = "(1-camPos)*gravel*(speed factor[2, 20])";
			};
			
			class TiresAsphaltIn {
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-asphalt3", db-10, 1.0};
				frequency = "1";
				volume = "(1-camPos)*asphalt*(speed factor[2, 20])";
			};
			
			class NoiseIn {
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Noises\int\noise2", db-5, 1.0};
				frequency = "1";
				volume = "(damper0 max 0.03)*(speed factor[0, 8])*(1-camPos)";
			};
			
			class Movement {
				sound = "soundEnviron";
				frequency = "1";
				volume = "0";
			};
		};
		
		class AnimationSources {
			class pluhPredni {
				source = "pluhPredni";
				animPeriod = 1;
				initPhase = 0;
			};
			
			class HideRightWingSrc {
				source = "user";
				animPeriod = 0.0;
				initPhase = 0;
			};
			
			class HideLeftWingSrc {
				source = "user";
				animPeriod = 0.0;
				initPhase = 0;
			};
			
			class HideHoodSrc {
				source = "user";
				animPeriod = 0.0;
				initPhase = 0;
			};
			
			class EngineRotorShowSrc {
				source = "user";
				animPeriod = 0.0;
				initPhase = 0;
			};
			
			class EngineRotorShowStaticSrc {
				source = "user";
				animPeriod = 0.0;
				initPhase = 0;
			};
			
			class HitLFWheel {
				source = "Hit";
				hitpoint = "HitLFWheel";
				raw = 1;
			};
			
			class HitRFWheel : HitLFWheel {
				source = "Hit";
				hitpoint = "HitRFWheel";
			};
			
			class HitLBWheel : HitLFWheel {
				source = "Hit";
				hitpoint = "HitLBWheel";
			};
			
			class HitRBWheel : HitLFWheel {
				source = "Hit";
				hitpoint = "HitRBWheel";
			};
		};
		
		class HitPoints {
			class HitEngine {
				armor = 1.2;
				material = -1;
				name = "motor";
				visual = "";
				passThrough = false;
			};
			
			class HitBody {
				armor = 1;
				material = -1;
				name = "karoserie";
				visual = "";
				passThrough = false;
			};
			
			class HitFuel {
				armor = 0.3;
				material = -1;
				name = "palivo";
				visual = "";
				passThrough = false;
			};
			
			class HitLFWheel {
				armor = 0.15;
				material = -1;
				name = "wheel_1_1_steering";
				visual = "";
				passThrough = false;
			};
			
			class HitLBWheel {
				armor = 0.15;
				material = -1;
				name = "wheel_1_2_steering";
				visual = "";
				passThrough = false;
			};
			
			class HitRFWheel {
				armor = 0.15;
				material = -1;
				name = "wheel_2_1_steering";
				visual = "";
				passThrough = false;
			};
			
			class HitRBWheel {
				armor = 0.15;
				material = -1;
				name = "wheel_2_2_steering";
				visual = "";
				passThrough = false;
			};
		};
		
		class Damage {
			tex[] = {"rth_scrapbuggy\tex\partsdiffuse.paa", "rth_scrapbuggy\tex\partsdiffuse.paa", "rth_scrapbuggy\tex\damage_co.paa", "rth_scrapbuggy\tex\framediffuse.paa", "rth_scrapbuggy\tex\framediffuse.paa", "rth_scrapbuggy\tex\damage_co.paa"};
			mat[] = {"rth_scrapbuggy\tex\parts.rvmat", "rth_scrapbuggy\tex\parts.rvmat", "rth_scrapbuggy\tex\parts_destruct.rvmat", "rth_scrapbuggy\tex\frame.rvmat", "rth_scrapbuggy\tex\frame.rvmat", "rth_scrapbuggy\tex\frame_destruct.rvmat"};
		};
		hiddenSelections[] = {"main_body", "back_body"};
		hiddenSelectionsTextures[] = {"\rth_scrapbuggy\tex\partsdiffuse.paa", "\rth_scrapbuggy\tex\framediffuse.paa"};
	};
};
