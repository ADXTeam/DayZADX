class CfgVehicles {
	class An2_Base_EP1;	// External class reference
	
	class dc3 : An2_Base_EP1 {
		scope = public;
		faction = "rth_copter_class";
		displayName = "Plane";
		gearRetracting = true;
		model = "\origins_dc3\DC3.p3d";
		destrType = "DestructBuilding";
		driverAction = "C130_Pilot";
		transportSoldier = 15;
		mapSize = 30;
		icon = "\origins_dc3\Data\icomap_DC3_CA.paa";
		picture = "\origins_dc3\Data\DC3_CA.paa";
		transportMaxMagazines = 150;
		transportMaxWeapons = 90;
		transportMaxBackpacks = 90;
		
		class Sounds {
			class EngineLowOut {
				sound[] = {"origins_dc3\Data\Sound\dakota_env01.ogg", 2.23872, 1.2, 700};
				frequency = "1.0 min (rpm + 0.5)";
				volume = "engineOn*(rpm factor[0.85, 0])";
			};
			
			class EngineHighOut {
				sound[] = {"origins_dc3\Data\Sound\dakota_engine01.ogg", 2.23872, 1.6, 700};
				frequency = "1";
				volume = "engineOn*(rpm factor[0.55, 1.0])";
			};
			
			class EngineLowIn {
				sound[] = {"origins_dc3\Data\Sound\dakota_env01.ogg", db-10, 1.0};
				frequency = "1.0 min (rpm + 0.5)";
				volume = "(1-camPos)*(engineOn*(rpm factor[0.85, 0]))";
			};
			
			class EngineHighIn {
				sound[] = {"origins_dc3\Data\Sound\dakota_engine01.ogg", db-10, 1.0};
				frequency = "1";
				volume = "(1-camPos)*(engineOn*(rpm factor[0.55, 1.0]))";
			};
		};
		soundEngine[] = {"\origins_dc3\Data\Sound\dakota_engine01.ogg", 31.6228, 1};
		soundEnviron[] = {"\origins_dc3\Data\Sound\dakota_env01.ogg", db-30, 1.0};
		side = TCivilian;
		crew = "Pilot";
		typicalCargo[] = {"Pilot", "Civilian5", "Civilian7"};
		cargoAction[] = {"HMMWV_Cargo01", "HMMWV_Cargo01", "UAZ_Cargo01", "HMMWV_Cargo01", "HMMWV_Cargo01", "UAZ_Cargo01", "HMMWV_Cargo01", "HMMWV_Cargo01", "UAZ_Cargo01", "HMMWV_Cargo01", "HMMWV_Cargo01", "UAZ_Cargo01", "HMMWV_Cargo01", "HMMWV_Cargo01", "UAZ_Cargo01"};
		driverCompartments = "Compartment1";
		cargoCompartments[] = {"Compartment1"};
		camouflage = 10;	// how dificult to spot - bigger - better spotable
		audible = 8;	// audible - bigger - better heard
		accuracy = 0.2;	// accuracy needed to recognize type of this target
		maxSpeed = 380;	// max speed on level road, km/h
		supplyRadius = 8;
		laserScanner = true;
		minFireTime = 10;	// minimal time spent firing on single target
		gunAimDown = 0.05;
		weapons[] = {};
		magazines[] = {};
		extCameraPosition[] = {0, 5, -20};
		
		// threat (VSoft, VArmor, VAir), how threatening vehicle is to unit types
		threat[] = {1, 1, 1};

		
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
			
			class Right {
				color[] = {0.8, 0.8, 1.0, 1.0};
				ambient[] = {0.07, 0.07, 0.07, 1.0};
				position = "P svetlo";
				direction = "konec P svetla";
				hitpoint = "P svetlo";
				selection = "P svetlo";
				size = 1;
				brightness = 1.0;
			};
		};
		armor = 50;
		armorStructured = 1;
		envelope[] = {0.0, 0.1, 0.5, 1.5, 3.1, 4.3, 4.9, 5, 4.4, 2.8, 1.6, 0.8, 0};
		landingSpeed = 145;
		landingAoa = 3.5*3.1415/180;
		flapsFrictionCoef = 2;
		wheelSteeringSensitivity = 0.5;
		aileronSensitivity = 1;	// relative aileron sensitivity
		elevatorSensitivity = 1;	// relative elevator sensitivity
		noseDownCoef = 1;	// how much goes nose down during turns
		gearUpTime = 4.5;
		gearDownTime = 3;
		memoryPointsGetInDriver = "pos driver";
		memoryPointsGetInDriverDir = "pos driver dir";
		memoryPointsGetInCargo[] = {"pos cargo"};
		memoryPointsGetInCargoDir[] = {"pos cargo dir"};
		
		class Damage {
			tex[] = {};
			mat[] = {"origins_dc3\data\DC3_body_01.rvmat", "origins_dc3\data\DC3_body_01.rvmat", "origins_dc3\data\DC3_body_01_destruct.rvmat", "origins_dc3\data\DC3_body_02.rvmat", "origins_dc3\data\DC3_body_02.rvmat", "origins_dc3\data\DC3_body_02_destruct.rvmat", "origins_dc3\data\DC3_cockpit.rvmat", "origins_dc3\data\DC3_cockpit.rvmat", "origins_dc3\data\DC3_cockpit_destruct.rvmat"};
		};
	};
};
