class CfgVehicles {
	class Land;	// External class reference
	class Car;	// External class reference
	class Pickup_PK_base;	// External class reference
	
	class car_turrets : Pickup_PK_base {
		class Turrets;	// External class reference
		class MainTurret;	// External class reference
	};
	
	class pickupold : car_turrets {
		armor = 32;
		mapSize = 6;
		hiddenSelections[] = {"main_body", "clan", "clan_sign"};
		hiddenSelectionsTextures[] = {"\origins_pack\vehicles\textures\cucv_co.paa"};
		transportSoldier = 5;
		vehicleClass = "Car";
		faction = "rth_copter_class";
		crew = "Profiteer2";
		driverAction = "HMMWV_Driver";
		cargoAction[] = {"HMMWV_Cargo01"};
		
		class TransportMagazines {};
		model = "\origins_pack\vehicles\ori_vil_postapoca_pickup";
		maxSpeed = 90;	// max speed on level road, km/h
		hideProxyInCombat = false;
		viewDriverInExternal = 1;
		castDriverShadow = true;
		forceHideDriver = false;
		side = TCivilian;
		scope = public;
		displayName = "Gatling Capri 69";
		icon = "\origins_pack\vehicles\icons\ico_cucv_ca.paa";
		picture = "\origins_pack\vehicles\icons\pic_cucv_ca.paa";
		transportMaxMagazines = 100;
		transportMaxWeapons = 10;
		transportMaxBackpacks = 10;
		enableManualFire = 1;
		wheelCircumference = 3;
		soundGear[] = {"", db-85, 1};
		soundGetIn[] = {"ca\Sounds_E\Wheeled_E\SUV\SUV_ext_door", db-5, 1};
		soundGetOut[] = {"ca\Sounds_E\Wheeled_E\SUV\SUV_ext_door", db-5, 1, 20};
		soundEngineOnInt[] = {"ca\Sounds_E\Wheeled_E\SUV\SUV_int_start", 0.177828, 1.0};
		soundEngineOnExt[] = {"ca\Sounds_E\Wheeled_E\SUV\SUV_ext_start", 0.177828, 1.0, 100};
		soundEngineOffInt[] = {"ca\Sounds_E\Wheeled_E\SUV\SUV_int_stop", 0.177828, 1.0};
		soundEngineOffExt[] = {"ca\Sounds_E\Wheeled_E\SUV\SUV_ext_stop", 0.177828, 1.0, 100};
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
				sound[] = {"ca\Sounds_E\Wheeled_E\SUV\SUV_int_accelerate_3_x", db-5, 1.0};
				limit = 0.4;
				expression = "(engineOn*(1-camPos))*gmeterZ";
			};
			
			class AccelerationOut {
				sound[] = {"ca\Sounds_E\Wheeled_E\SUV\SUV_ext_accelerate_3", db-5, 1.0, 200};
				limit = 0.4;
				expression = "(engineOn*camPos)*gmeterZ";
			};
		};
		
		class Sounds {
			class Engine {
				sound[] = {"ca\Sounds_E\Wheeled_E\SUV\SUV_ext_low", 0.177828, 1.4, 100};
				frequency = "(randomizer*0.05+0.95)*rpm";
				volume = "camPos*engineOn*((rpm factor[0.3, 0.4]) min (rpm factor[0.7, 0.5]))";
			};
			
			class EngineHighOut {
				sound[] = {"ca\Sounds_E\Wheeled_E\SUV\SUV_ext_high", db0, 0.8, 300};
				frequency = "(randomizer*0.05+0.95)*rpm";
				volume = "camPos*engineOn*(rpm factor[0.5, 0.8])";
			};
			
			class IdleOut {
				sound[] = {"ca\Sounds_E\Wheeled_E\SUV\SUV_ext_idle", db-5, 1.0, 100};
				frequency = "1";
				volume = "engineOn*camPos*(rpm factor[0.4, 0])";
			};
			
			class TiresRockOut {
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-rock2", 0.316228, 1.0, 30};
				frequency = "1";
				volume = "camPos*rock*(speed factor[2, 20])";
			};
			
			class TiresSandOut {
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-sand2", 0.316228, 1.0, 30};
				frequency = "1";
				volume = "camPos*sand*(speed factor[2, 20])";
			};
			
			class TiresGrassOut {
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-grass2", 0.316228, 1.0, 30};
				frequency = "1";
				volume = "camPos*grass*(speed factor[2, 20])";
			};
			
			class TiresMudOut {
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-mud2", 0.316228, 1.0, 30};
				frequency = "1";
				volume = "camPos*mud*(speed factor[2, 20])";
			};
			
			class TiresGravelOut {
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-gravel2", 0.316228, 1.0, 30};
				frequency = "1";
				volume = "camPos*gravel*(speed factor[2, 20])";
			};
			
			class TiresAsphaltOut {
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-asphalt3", 0.316228, 1.0, 30};
				frequency = "1";
				volume = "camPos*asphalt*(speed factor[2, 20])";
			};
			
			class NoiseOut {
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Noises\ext\noise2", 0.1, 1.0, 30};
				frequency = "1";
				volume = "camPos*(damper0 max 0.03)*(speed factor[0, 8])";
			};
			
			class EngineLowIn {
				sound[] = {"ca\Sounds_E\Wheeled_E\SUV\SUV_int_low_x", 0.316228, 1.4};
				frequency = "(randomizer*0.05+0.95)*rpm";
				volume = "(1-camPos)*engineOn*((rpm factor[0.3, 0.4]) min (rpm factor[0.7, 0.45]))";
			};
			
			class EngineHighIn {
				sound[] = {"ca\Sounds_E\Wheeled_E\SUV\SUV_int_high_x", db0, 0.8};
				frequency = "(randomizer*0.05+0.95)*rpm";
				volume = "(1-camPos)*engineOn*(rpm factor[0.5, 0.8])";
			};
			
			class IdleIn {
				sound[] = {"ca\Sounds_E\Wheeled_E\SUV\SUV_int_idle_x", 0.316228, 1.0};
				frequency = "1";
				volume = "engineOn*(rpm factor[0.4, 0])*(1-camPos)";
			};
			
			class TiresRockIn {
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-rock2", 0.316228, 1.0};
				frequency = "1";
				volume = "(1-camPos)*rock*(speed factor[2, 20])";
			};
			
			class TiresSandIn {
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-sand2", 0.316228, 1.0};
				frequency = "1";
				volume = "(1-camPos)*sand*(speed factor[2, 20])";
			};
			
			class TiresGrassIn {
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-grass2", 0.316228, 1.0};
				frequency = "1";
				volume = "(1-camPos)*grass*(speed factor[2, 20])";
			};
			
			class TiresMudIn {
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-mud2", 0.316228, 1.0};
				frequency = "1";
				volume = "(1-camPos)*mud*(speed factor[2, 20])";
			};
			
			class TiresGravelIn {
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-gravel2", 0.316228, 1.0};
				frequency = "1";
				volume = "(1-camPos)*gravel*(speed factor[2, 20])";
			};
			
			class TiresAsphaltIn {
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-asphalt3", 0.316228, 1.0};
				frequency = "1";
				volume = "(1-camPos)*asphalt*(speed factor[2, 20])";
			};
			
			class NoiseIn {
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Noises\int\noise2", 0.177828, 1.0};
				frequency = "1";
				volume = "(damper0 max 0.03)*(speed factor[0, 8])*(1-camPos)";
			};
			
			class Movement {
				sound = "soundEnviron";
				frequency = "1";
				volume = "0";
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
				gunnerAction = "HMMWV_Cargo01";
				gunnerInAction = "HMMWV_Cargo01";
				ejectDeadGunner = true;
				minElev = 0;
				maxElev = 0;
				minTurn = 0;
				maxTurn = 0;
				initTurn = 0;
			};
		};
		
		class Library {
			libTextDesc = "Old Big Pickup";
		};
		
		class Reflectors {
			class Left {
				color[] = {0.8, 0.8, 1.0, 1.0};
				ambient[] = {0.07, 0.07, 0.07, 1.0};
				position = "L svetlo";
				direction = "konec L svetla";
				hitpoint = "L svetlo";
				selection = "L svetlo";
				size = 1;
				brightness = 1.0;
			};
		};
		
		class Damage {
			tex[] = {};
			mat[] = {"origins_pack\vehicles\textures\oldcar_rust.rvmat", "origins_pack\vehicles\textures\oldcar_rust.rvmat", "origins_pack\vehicles\textures\oldcar_rust_de.rvmat"};
		};
		
		class AnimationSources {
			class gatling {
				source = "reload";
				weapon = PKT;
			};
			
			class doorhood {
				source = "user";
				animPeriod = 10;
				initPhase = 0;
			};
			
			class doorhood2 {
				source = "user";
				animPeriod = 10;
				initPhase = 0;
			};
			
			class platform_move {
				source = "user";
				animPeriod = 10;
				initPhase = 0;
			};
			
			class pluhPredni {
				source = "pluhPredni";
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
		};
		
		class UserActions {
			class platform_on {
				displayName = "Platform Up";
				position = "zamerny";
				radius = 1;
				priority = 3;
				onlyForPlayer = 0;
				condition = "(alive this) && (this animationPhase ""doorhood""< 0.5) && (player in [gunner this, driver this])";
				statement = "(this animate [""doorhood"", 1]) && (this animate [""doorhood2"", 1]) && (this animate [""platform_move"", 1])";
			};
			
			class platform_off {
				displayName = "Platform Down";
				position = "zamerny";
				radius = 1;
				priority = 3;
				onlyForPlayer = 0;
				condition = "(alive this) && (this animationPhase ""doorhood"" >= 0.5) && (player in [gunner this, driver this])";
				statement = "(this animate [""doorhood"", 0]) && (this animate [""doorhood2"", 0]) && (this animate [""platform_move"", 0])";
			};
		};
		
		class HitPoints {
			class HitLFWheel {
				armor = 0.4;
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
