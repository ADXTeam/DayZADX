class cfgVehicles {
	class Boat;	// External class reference
	
	class smallRaft : Boat {
		scope = public;
		displayName = "Small Raft";
		vehicleClass = "Ship";
		accuracy = 0.5;	// accuracy needed to recognize type of this target
		crew = "RU_Soldier";
		faction = "rth_copter_class";
		side = TCivilian;
		model = "\rth_raft_small\raft_small.p3d";
		picture = "\rth_raft_small\ico\raft_small_ico_ca.paa";
		Icon = "\rth_raft_small\ico_map\raft_small_map_ca.paa";
		mapSize = 5;
		unitInfoType = "UnitInfoShip";
		soundEnviron[] = {"", db-25, 0.9};
		crewVulnerable = true;
		transportMaxMagazines = 90;
		transportMaxWeapons = 20;
		transportMaxBackpacks = 10;
		armor = 12;
		
		class SoundEvents {};
		insideSoundCoef = 1;
		soundEngineOnInt[] = {"ca\sounds\vehicles\water\rhib\ext-boat-start-01", 0.1, 1.0};
		soundEngineOnExt[] = {"ca\sounds\vehicles\water\rhib\ext-boat-start-01", 1.0, 1.0, 150};
		soundEngineOffInt[] = {"ca\sounds\vehicles\water\rhib\ext-boat-stop-01", 0.1, 1.0};
		soundEngineOffExt[] = {"ca\sounds\vehicles\water\rhib\ext-boat-stop-01", 1.0, 1.0, 150};
		
		class Sounds {
			class Engine {
				sound[] = {"ca\sounds\vehicles\water\rhib\ext-boat-engine-low-01", db0, 0.9, 300};
				frequency = "(randomizer*0.05+0.95)*rpm";
				volume = "engineOn*(rpm factor[0.5, 0.1])";
			};
			
			class EngineHighOut {
				sound[] = {"ca\sounds\vehicles\water\rhib\ext-boat-engine-high-01", db0, 0.8, 300};
				frequency = "(randomizer*0.05+0.95)*rpm";
				volume = "engineOn*(rpm factor[0.4, 1.3])";
			};
			
			class IdleOut {
				sound[] = {"ca\sounds\vehicles\water\rhib\ext-boat-engine-idle-03", db-5, 1.0, 150};
				frequency = "1";
				volume = "engineOn*(rpm factor[0.3, 0])";
			};
			
			class WaternoiseOutW0 {
				sound[] = {"ca\sounds\vehicles\water\water_sfx\ext-water-noise-nospeed", db-8, 1.0, 100};
				frequency = "1";
				volume = "(speed factor[7, 0])";
			};
			
			class WaternoiseOutW1 {
				sound[] = {"ca\sounds\vehicles\water\water_sfx\ext-boat-lospd-noise-02", db-8, 1.0, 100};
				frequency = "1";
				volume = "((speed factor[2, 12]) min (speed factor[12, 2]))";
			};
			
			class WaternoiseOutW2 {
				sound[] = {"ca\sounds\vehicles\water\water_sfx\ext-boat-hispd-noise-02", db-8, 1.0, 100};
				frequency = "1";
				volume = "(speed factor[9, 18.7])";
			};
		};
		driverAction = "PBX_Driver";
		cargoAction[] = {"PBX_Cargo01", "PBX_Cargo01", "PBX_Cargo02", "PBX_Cargo03"};
		getInAction = "GetInMedium";
		getOutAction = "GetOutMedium";
		cargoGetInAction[] = {"GetInMedium"};
		cargoGetOutAction[] = {"GetOutMedium"};
		castDriverShadow = false;
		castCargoShadow = false;
		maxSpeed = 40;	// max speed on level road, km/h
		enableGPS = 1;
		transportSoldier = 2;
		typicalCargo[] = {"Pilot"};
		supplyRadius = 3;
		hasGunner = false;
		enableManualFire = 0;
		weapons[] = {};
		magazines[] = {};
		
		class Turrets {};
		memoryPointsGetInDriver = "pos driver";
		memoryPointsGetInDriverDir = "pos driver dir";
		memoryPointsGetInCargo = "pos cargo";
		memoryPointsGetInCargoDir = "pos cargo dir";
		
		class Library {
			libTextDesc = "Small homemade raft";
		};
		extCameraPosition[] = {0, 4.0, -14.0};
	};
};
