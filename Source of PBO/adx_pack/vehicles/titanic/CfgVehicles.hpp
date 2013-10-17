class CfgVehicles {
	class Land;	// External class reference
	class Car;	// External class reference
	
	class amphicar : Car {
		weapons[] = {"TruckHorn"};
		displayName = "Wheeled Titanic";
		side = TCivilian;
		scope = public;
		faction = "rth_copter_class";
		vehicleClass = "Car";
		picture = "ca\water2\data\ui\picture_fishboat_CA.paa";
		Icon = "Ca\water2\Data\UI\icon_fishboat_ca.paa";
		model = "\rth_amphicar\rth_amphicar.p3d";
		driverAction = "FB_Driver";
		cargoAction[] = {"FB_Cargo01", "FB_Cargo02", "FB_Cargo03", "FB_Cargo03", "FB_Cargo03", "FB_Cargo03", "FB_Cargo04"};
		cargoIsCoDriver[] = {0};
		crewVulnerable = true;
		hideProxyInCombat = false;
		viewDriverInExternal = 1;
		viewGunnerInExternal = true;
		viewCargoInExternal = 1;
		radarType = 0;
		commanderCanSee = 31;
		gunnerCanSee = 31;
		driverCanSee = 31;
		waterSpeedFactor = 0.7;
		maxSpeed = 140;	// max speed on level road, km/h
		transportSoldier = 7;
		cost = 10000;
		armor = 10;
		damageResistance = 0.00318;
		accuracy = 0.5;	// accuracy needed to recognize type of this target
		insideSoundCoef = 1;
		transportMaxMagazines = 100;
		transportMaxWeapons = 10;
		transportMaxBackpacks = 10;
		supplyRadius = 3;
		
		class Sounds {
			class Engine {
				sound[] = {"\ca\sounds\Vehicles\Wheeled\Armored_Vehicle\ext\ext-AV-engine-02low", db8, 1.0, 400};
				frequency = "(randomizer*0.05+0.95)*rpm";
				volume = "engineOn*camPos*(thrust factor[0.7, 0.2])";
			};
			
			class EngineHighOut {
				sound[] = {"\ca\sounds\Vehicles\Wheeled\Armored_Vehicle\ext\ext-AV-engine-02high", db8, 1.0, 500};
				frequency = "(randomizer*0.05+0.95)*rpm";
				volume = "engineOn*camPos*(thrust factor[0.5, 0.9])";
			};
			
			class IdleOut {
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Armored_Vehicle\ext\ext-AV-idle-02", db0, 1.0, 200};
				frequency = "1";
				volume = "engineOn*camPos*(rpm factor[0.4, 0])";
			};
			
			class TiresRockOut {
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-rock2", 0.316228, 1.0, 50};
				frequency = "1";
				volume = "camPos*rock*(speed factor[2, 20])";
			};
			
			class TiresSandOut {
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-sand2", 0.316228, 1.0, 50};
				frequency = "1";
				volume = "camPos*sand*(speed factor[2, 20])";
			};
			
			class TiresGrassOut {
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-grass3", 0.316228, 1.0, 50};
				frequency = "1";
				volume = "camPos*grass*(speed factor[2, 20])";
			};
			
			class TiresMudOut {
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-mud2", 0.316228, 1.0, 50};
				frequency = "1";
				volume = "camPos*mud*(speed factor[2, 20])";
			};
			
			class TiresGravelOut {
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-gravel2", 0.316228, 1.0, 50};
				frequency = "1";
				volume = "camPos*gravel*(speed factor[2, 20])";
			};
			
			class TiresAsphaltOut {
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-asphalt3", 0.316228, 1.0, 50};
				frequency = "1";
				volume = "camPos*asphalt*(speed factor[2, 20])";
			};
			
			class NoiseOut {
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Noises\ext\noise3", 0.316228, 1.0, 50};
				frequency = "1";
				volume = "camPos*(damper0 max 0.04)*(speed factor[0, 8])";
			};
			
			class EngineLowIn {
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Armored_Vehicle\int\int-AV-engine-02low", db0, 1.0};
				frequency = "(randomizer*0.05+0.95)*rpm";
				volume = "((engineOn*thrust) factor[0.65, 0.2])*(1-camPos)";
			};
			
			class EngineHighIn {
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Armored_Vehicle\int\int-AV-engine-02high", db0, 0.8};
				frequency = "(randomizer*0.05+0.95)*rpm";
				volume = "((engineOn*thrust) factor[0.55, 1.0])*(1-camPos)";
			};
			
			class IdleIn {
				sound[] = {"\ca\sounds\Vehicles\Wheeled\Armored_Vehicle\int\int-AV-idle-02", db-8, 1.0};
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
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-grass3", 0.316228, 1.0};
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
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Noises\int\noise4", db-5, 1.0};
				frequency = "1";
				volume = "(damper0 max 0.04)*(speed factor[0, 8])*(1-camPos)";
			};
			
			class Movement {
				sound = "soundEnviron";
				frequency = "1";
				volume = "0";
			};
		};
		
		class Exhausts {
			class Exhaust1 {
				position = "vyfuk start";
				direction = "vyfuk konec";
				effect = "ExhaustsEffectBig";
			};
		};
		
		class Reflectors {
			class Middle {
				color[] = {0.8, 0.8, 1.0, 1.0};
				ambient[] = {0.07, 0.07, 0.07, 1.0};
				position = "svetlo";
				direction = "svetlo konec";
				hitpoint = "svetlo";
				selection = "svetlo";
				size = 1;
				brightness = 1.0;
			};
		};
		
		class Damage {
			tex[] = {};
			mat[] = {"ca\water2\fishing_boat\data\fishboat_001.rvmat", "ca\water2\fishing_boat\data\fishboat_001_damage.rvmat", "ca\water2\fishing_boat\data\fishboat_001_destruct.rvmat", "ca\water2\fishing_boat\data\fishboat_002.rvmat", "ca\water2\fishing_boat\data\fishboat_002_damage.rvmat", "ca\water2\fishing_boat\data\fishboat_002_destruct.rvmat"};
		};
		extCameraPosition[] = {0, 4.0, -15.0};
		
		class Turrets {};
		
		class TransportMagazines {};
		
		class TransportWeapons {};
		hiddenSelections[] = {"amphi_tex", "boat1_tex", "boat2_tex", "clan"};
		hiddenSelectionsTextures[] = {"\rth_amphicar\tex\amphi_co.paa", "ca\water2\fishing_boat\data\fishboat_001_co.paa", "ca\water2\fishing_boat\data\fishboat_002_co.paa"};
		canFloat = true;
		damperSize = 0.1;	// max. damper amplitude
		damperForce = 3;	// larger number more stiffness dampers
		damperDamping = 8;	// larger number less movement in dampers
		wheelCircumference = 3.78249;
		
		class HitPoints {
			class HitLFWheel {
				armor = 0.3;
				name = "LF_hit";
				passThrough = 0.1;
				material = -1;
				visual = "";
			};
			
			class HitLMWheel : HitLFWheel {
				name = "LM_hit";
			};
			
			class HitLBWheel : HitLFWheel {
				name = "LB_hit";
			};
			
			class HitRFWheel : HitLFWheel {
				name = "RF_hit";
			};
			
			class HitRMWheel : HitLFWheel {
				name = "RM_hit";
			};
			
			class HitRBWheel : HitLFWheel {
				name = "RB_hit";
			};
			
			class HitEngine {
				armor = 1;
				material = -1;
				name = "motor";
				visual = "";
				passThrough = 0.2;
			};
		};
		armorWheels = 0.3;
		
		class AnimationSources {
			class LF_wheelHit {
				source = "Hit";
				hitpoint = "HitLFWheel";
				raw = 1;
			};
			
			class LM_wheelHit : LF_wheelHit {
				hitpoint = "HitLMWheel";
			};
			
			class LB_wheelHit : LF_wheelHit {
				hitpoint = "HitLBWheel";
			};
			
			class RF_wheelHit : LF_wheelHit {
				hitpoint = "HitRFWheel";
			};
			
			class RM_wheelHit : LF_wheelHit {
				hitpoint = "HitRMWheel";
			};
			
			class RB_wheelHit : LF_wheelHit {
				hitpoint = "HitRBWheel";
			};
		};
		turnCoef = 30.0;
		terrainCoef = 3.0;
		brakeDistance = 150;	// vehicle movement precision
		precision = 150;
	};
};
