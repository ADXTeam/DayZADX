// config.bin - 23:48:34 07/24/13, generated in 0.02 seconds
// Generated by unRap v1.06 by Kegetys
// Separate rootclasses: Disabled, Automatic comments: Enabled

class CfgPatches {
	class base_buildings {
		units[] = {"Uroven1DrevenaBudka", "Uroven2KladaDomek", "Uroven3DrevenyDomek", "Uroven1VelkaBudka", "Uroven2MalyDomek", "Uroven3VelkyDomek", "malaGaraz", "velkaGaraz", "kingramida", "krepost", "head"};
		weapons[] = {};
		requiredVersion = 1;
		requiredAddons[] = {};
	};
};

class CfgSounds {
	class origins_door_creak {
		name = "Door Creak";
		sound[] = {"\origins_pack\sounds\doorCreak.ogg", 0.562341, 1.0};
		titles[] = {};
	};
	
	class origins_garage_door {
		name = "Door Creak";
		sound[] = {"\origins_pack\sounds\metalGates.ogg", 0.562341, 1.0};
		titles[] = {};
	};
};

class CfgVehicles {
	class HouseBase;	// External class reference
	
	class House : HouseBase {
		class DestructionEffects;	// External class reference
	};
	class Land_A_tent;	// External class reference
	
	class Uroven1DrevenaBudka : Land_A_tent {
		scope = 2;
		model = "origins_pack\structures\base_buildings\banditiUroven1DrevenaBudka.p3d";
		faction = "rth_copter_class";
		displayName = "Bandits - Wooden Shed (Level 1)";
		vehicleClass = "Survival";
		supplyRadius = 0.02;
		memoryPointSupply = "gear";
		armor = 10000;
		accuracy = 0.2;
		destrType = "DestructNo";
		transportMaxMagazines = 400;
		transportMaxWeapons = 10;
		transportMaxBackpacks = 5;
		
		class AnimationSources {
			class dvereJedna {
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
			
			class dvereDva : dvereJedna {};
			
			class dvereTri : dvereJedna {};
			
			class dvere4tiri : dvereJedna {};
			
			class dvereJednaA : dvereJedna {};
			
			class dvereDvaA : dvereJedna {};
			
			class vratka : dvereJedna {};
			
			class dvereGarazLeve : dvereJedna {
				animPeriod = 2;
			};
			
			class dvereGarazPrave : dvereGarazLeve {};
			
			class dvereGarazLeveDva : dvereGarazLeve {};
			
			class dvereGarazPraveDva : dvereGarazLeve {};
		};
		
		class UserActions {
			class zavritDvereJednaA {
				displayNameDefault = $STR_DN_OUT_C_DOOR_DEFAULT;
				displayName = $STR_CLOSE_DOOR_FRONT;
				position = "pos_door_1";
				radius = 2.5;
				onlyForPlayer = 1;
				condition = "(this animationPhase ""stupenDva"" == 0) && (this animationPhase ""dvereJednaA"" == 1)";
				statement = "this animate [""dvereJednaA"", 0]";
			};
			
			class otevritDvereInter {
				displayNameDefault = $STR_DN_OUT_O_DOOR_DEFAULT;
				displayName = $STR_OPEN_DOOR_FRONT;
				position = "pos_slider";
				radius = 1;
				onlyForPlayer = 1;
				condition = "(this animationPhase ""stupenDva"" == 0) && (this animationPhase ""dvereJednaA"" == 0)";
				statement = "this animate [""dvereJednaA"", 1]";
			};
			
			class otevritDvereDira {
				displayName = $STR_OPEN_DOOR_SLIDER;
				position = "pos_slider";
				radius = 1;
				onlyForPlayer = 1;
				condition = "(this animationPhase ""stupenDva"" == 0) && (this animationPhase ""dvereJednaADira"" == 0) && (this animationPhase ""dvereJednaA"" == 0)";
				statement = "this animate [""dvereJednaADira"", 1]";
			};
			
			class zavritDvereDira {
				displayName = $STR_CLOSE_DOOR_SLIDER;
				position = "pos_slider";
				radius = 1;
				onlyForPlayer = 1;
				condition = "(this animationPhase ""stupenDva"" == 0) && (this animationPhase ""dvereJednaADira"" == 1) && (this animationPhase ""dvereJednaA"" == 0)";
				statement = "this animate [""dvereJednaADira"", 0]";
			};
		};
	};
	
	class Uroven2KladaDomek : Land_A_tent {
		scope = 2;
		model = "origins_pack\structures\base_buildings\banditiUroven2KladaDomek.p3d";
		faction = "rth_copter_class";
		displayName = "Bandits - Log House (Level 2)";
		supplyRadius = 0.05;
		memoryPointSupply = "gear";
		vehicleClass = "Survival";
		armor = 10000;
		accuracy = 0.2;
		destrType = "DestructNo";
		transportMaxMagazines = 400;
		transportMaxWeapons = 25;
		transportMaxBackpacks = 10;
		
		class AnimationSources {
			class dvereJedna {
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
			
			class dvereDva : dvereJedna {};
			
			class dvereTri : dvereJedna {};
			
			class dvere4tiri : dvereJedna {};
			
			class dvereJednaA : dvereJedna {};
			
			class dvereDvaA : dvereJedna {};
			
			class vratkaDva : dvereJedna {};
			
			class dvereGarazLeve : dvereJedna {
				animPeriod = 2;
			};
			
			class dvereGarazPrave : dvereGarazLeve {};
			
			class dvereGarazLeveDva : dvereGarazLeve {};
			
			class dvereGarazPraveDva : dvereGarazLeve {};
		};
		
		class UserActions {
			class zavritDvereJedna {
				displayNameDefault = $STR_DN_OUT_C_DOOR_DEFAULT;
				displayName = $STR_CLOSE_DOOR_FRONT;
				position = "pos_door_1";
				radius = 2.5;
				onlyForPlayer = 1;
				condition = "(this animationPhase ""stupenTri"" == 0) && (this animationPhase ""dvereJedna"" == 1)";
				statement = "this animate [""dvereJedna"", 0]";
			};
			
			class otevritDvereInter {
				displayNameDefault = $STR_DN_OUT_O_DOOR_DEFAULT;
				displayName = $STR_OPEN_DOOR_FRONT;
				position = "pos_slider";
				radius = 1;
				onlyForPlayer = 1;
				condition = "(this animationPhase ""stupenTri"" == 0) && (this animationPhase ""dvereJedna"" == 0)";
				statement = "this animate [""dvereJedna"", 1]";
			};
			
			class zavritDvereDvaA {
				displayNameDefault = $STR_DN_OUT_C_DOOR_DEFAULT;
				displayName = "Close door";
				position = "pos_door_2a";
				radius = 2;
				onlyForPlayer = 1;
				condition = "(this animationPhase ""stupen4tiri"" == 0) && (this animationPhase ""dvereDvaA"" == 1)";
				statement = "this animate [""dvereDvaA"", 0]";
			};
			
			class otevritDvereDvaAInter {
				displayNameDefault = $STR_DN_OUT_O_DOOR_DEFAULT;
				displayName = "Open door";
				position = "pos_door_2a";
				radius = 2;
				onlyForPlayer = 1;
				condition = "(this animationPhase ""stupen4tiri"" == 0) && (this animationPhase ""dvereDvaA"" == 0)";
				statement = "this animate [""dvereDvaA"", 1]";
			};
			
			class zavritDvereTri {
				displayNameDefault = $STR_DN_OUT_C_DOOR_DEFAULT;
				displayName = "Close WC door";
				position = "pos_door_3";
				radius = 2;
				onlyForPlayer = 1;
				condition = "(this animationPhase ""stupen4tiri"" == 0) && (this animationPhase ""dvereTri"" == 1)";
				statement = "this animate [""dvereTri"", 0]";
			};
			
			class otevritDvereTri {
				displayNameDefault = $STR_DN_OUT_O_DOOR_DEFAULT;
				displayName = "Open WC door";
				position = "pos_door_3";
				radius = 2;
				onlyForPlayer = 1;
				condition = "(this animationPhase ""stupen4tiri"" == 0) && (this animationPhase ""dvereTri"" == 0)";
				statement = "this animate [""dvereTri"", 1]";
			};
			
			class otevritDvereDira {
				displayName = $STR_OPEN_DOOR_SLIDER;
				position = "pos_slider";
				radius = 1;
				onlyForPlayer = 1;
				condition = "(this animationPhase ""stupenTri"" == 0) && (this animationPhase ""dvereJednaDira"" == 0) && (this animationPhase ""dvereJedna"" == 0)";
				statement = "this animate [""dvereJednaDira"", 1]";
			};
			
			class zavritDvereDira {
				displayName = $STR_CLOSE_DOOR_SLIDER;
				position = "pos_slider";
				radius = 1;
				onlyForPlayer = 1;
				condition = "(this animationPhase ""stupenTri"" == 0) && (this animationPhase ""dvereJednaDira"" == 1) && (this animationPhase ""dvereJedna"" == 0)";
				statement = "this animate [""dvereJednaDira"", 0]";
			};
		};
	};
	
	class Uroven3DrevenyDomek : Land_A_tent {
		scope = 2;
		model = "origins_pack\structures\base_buildings\banditiUroven3DrevenyDomek.p3d";
		faction = "rth_copter_class";
		displayName = "Bandits - Wooden House (Level 3)";
		vehicleClass = "Survival";
		armor = 10000;
		accuracy = 0.2;
		supplyRadius = 0.05;
		memoryPointSupply = "gear";
		destrType = "DestructNo";
		transportMaxMagazines = 400;
		transportMaxWeapons = 50;
		transportMaxBackpacks = 10;
		
		class AnimationSources {
			class dvereJedna {
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
			
			class dvereDva : dvereJedna {};
			
			class dvereTri : dvereJedna {};
			
			class dvere4tiri : dvereJedna {};
			
			class dvereJednaA : dvereJedna {};
			
			class dvereDvaB : dvereJedna {};
			
			class vratkaDva : dvereJedna {};
			
			class dvereGarazLeve : dvereJedna {
				animPeriod = 2;
			};
			
			class vrataGaraz2 : dvereGarazLeve {};
			
			class dvereGarazPrave : dvereGarazLeve {};
			
			class dvereGarazLeveDva : dvereGarazLeve {};
			
			class dvereGarazPraveDva : dvereGarazLeve {};
		};
		
		class UserActions {
			class zavritDvereJedna {
				displayNameDefault = $STR_DN_OUT_C_DOOR_DEFAULT;
				displayName = $STR_CLOSE_DOOR_FRONT;
				position = "pos_door_1";
				radius = 2.5;
				onlyForPlayer = 1;
				condition = "(this animationPhase ""stupenTri"" == 0) && (this animationPhase ""dvereJedna"" == 1)";
				statement = "this animate [""dvereJedna"", 0]";
			};
			
			class otevritDvereInter {
				displayNameDefault = $STR_DN_OUT_O_DOOR_DEFAULT;
				displayName = $STR_OPEN_DOOR_FRONT;
				position = "pos_slider";
				radius = 1;
				onlyForPlayer = 1;
				condition = "(this animationPhase ""stupenTri"" == 0) && (this animationPhase ""dvereJedna"" == 0)";
				statement = "this animate [""dvereJedna"", 1]";
			};
			
			class otevritDvereDira {
				displayName = $STR_OPEN_DOOR_SLIDER;
				position = "pos_slider";
				radius = 1;
				onlyForPlayer = 1;
				condition = "(this animationPhase ""stupenTri"" == 0) && (this animationPhase ""dvereJednaDira"" == 0) && (this animationPhase ""dvereJedna"" == 0)";
				statement = "this animate [""dvereJednaDira"", 1]";
			};
			
			class zavritDvereDira {
				displayName = $STR_CLOSE_DOOR_SLIDER;
				position = "pos_slider";
				radius = 2;
				onlyForPlayer = 1;
				condition = "(this animationPhase ""stupenTri"" == 0) && (this animationPhase ""dvereJednaDira"" == 1) && (this animationPhase ""dvereJedna"" == 0)";
				statement = "this animate [""dvereJednaDira"", 0]";
			};
			
			class otevritDvereDvaDira {
				displayName = $STR_OPEN_DOOR_SLIDER;
				position = "pos_slider2";
				radius = 1;
				onlyForPlayer = 1;
				condition = "(this animationPhase ""stupenTri"" == 0) && (this animationPhase ""dvereDvaBDira"" == 0) && (this animationPhase ""dvereDvaB"" == 0)";
				statement = "this animate [""dvereDvaBDira"", 1]";
			};
			
			class zavritDvereDvaDira {
				displayName = $STR_CLOSE_DOOR_SLIDER;
				position = "pos_slider2";
				radius = 1;
				onlyForPlayer = 1;
				condition = "(this animationPhase ""stupenTri"" == 0) && (this animationPhase ""dvereDvaBDira"" == 1) && (this animationPhase ""dvereDvaB"" == 0)";
				statement = "this animate [""dvereDvaBDira"", 0]";
			};
			
			class zavritDvereDva {
				displayNameDefault = $STR_DN_OUT_C_DOOR_DEFAULT;
				displayName = $STR_CLOSE_DOOR_SIDE;
				position = "pos_door_2";
				radius = 2;
				onlyForPlayer = 1;
				condition = "(this animationPhase ""stupenTri"" == 0) && (this animationPhase ""dvereDvaB"" == 1)";
				statement = "this animate [""dvereDvaB"", 0]";
			};
			
			class otevritDvereDvaInter {
				displayNameDefault = $STR_DN_OUT_O_DOOR_DEFAULT;
				displayName = $STR_OPEN_DOOR_SIDE;
				position = "pos_slider2";
				radius = 1;
				onlyForPlayer = 1;
				condition = "(this animationPhase ""stupenTri"" == 0) && (this animationPhase ""dvereDvaB"" == 0)";
				statement = "this animate [""dvereDvaB"", 1]";
			};
			
			class zavritGarazDvere {
				displayNameDefault = $STR_DN_OUT_C_DOOR_DEFAULT;
				displayName = $STR_CLOSE_DOOR_GARAGE;
				position = "pos_door_garage";
				radius = 3;
				onlyForPlayer = 1;
				condition = "(this animationPhase ""upgrd_1_stage_3"" == 0) && (this animationPhase ""dvereGarazLeve"" == 1) && (this animationPhase ""dvereGarazPrave"" == 1)";
				statement = "(this animate [""dvereGarazLeve"", 0]) && (this animate [""dvereGarazPrave"", 0])";
			};
		};
	};
	
	class Uroven1VelkaBudka : Land_A_tent {
		scope = 2;
		model = "origins_pack\structures\base_buildings\gerojUroven1VelkaBudka.p3d";
		faction = "rth_copter_class";
		displayName = "Heroes - Large Shed (Level 1)";
		vehicleClass = "Survival";
		supplyRadius = 0.05;
		memoryPointSupply = "gear";
		armor = 10000;
		accuracy = 0.2;
		destrType = "DestructNo";
		transportMaxMagazines = 400;
		transportMaxWeapons = 10;
		transportMaxBackpacks = 5;
		
		class AnimationSources {
			class dvereJedna {
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
			
			class dvereDva : dvereJedna {};
			
			class dvereTri : dvereJedna {};
			
			class dvere4tiri : dvereJedna {};
			
			class dvereJednaA : dvereJedna {};
			
			class dvereDvaA : dvereJedna {};
			
			class vratka : dvereJedna {};
			
			class dvereGarazLeve : dvereJedna {
				animPeriod = 2;
			};
			
			class dvereGarazPrave : dvereGarazLeve {};
			
			class dvereGarazLeveDva : dvereGarazLeve {};
			
			class dvereGarazPraveDva : dvereGarazLeve {};
		};
		
		class UserActions {
			class zavritDvereJedna {
				displayNameDefault = $STR_DN_OUT_C_DOOR_DEFAULT;
				displayName = $STR_CLOSE_DOOR_FRONT;
				position = "pos_door_1";
				radius = 2.5;
				onlyForPlayer = 1;
				condition = "(this animationPhase ""stupenDva"" == 0) && (this animationPhase ""dvereJednaA"" == 1)";
				statement = "this animate [""dvereJednaA"", 0]";
			};
			
			class otevritDvereInter {
				displayNameDefault = $STR_DN_OUT_O_DOOR_DEFAULT;
				displayName = $STR_OPEN_DOOR_FRONT;
				position = "pos_slider";
				radius = 1;
				onlyForPlayer = 1;
				condition = "(this animationPhase ""stupenDva"" == 0) && (this animationPhase ""dvereJednaA"" == 0)";
				statement = "this animate [""dvereJednaA"", 1]";
			};
			
			class otevritDvereDira {
				displayName = $STR_OPEN_DOOR_SLIDER;
				position = "pos_slider";
				radius = 1;
				onlyForPlayer = 1;
				condition = "(this animationPhase ""stupenDva"" == 0) && (this animationPhase ""dvereJednaADira"" == 0) && (this animationPhase ""dvereJednaA"" == 0)";
				statement = "this animate [""dvereJednaADira"", 1]";
			};
			
			class zavritDvereDira {
				displayName = $STR_CLOSE_DOOR_SLIDER;
				position = "pos_slider";
				radius = 1;
				onlyForPlayer = 1;
				condition = "(this animationPhase ""stupenDva"" == 0) && (this animationPhase ""dvereJednaADira"" == 1) && (this animationPhase ""dvereJednaA"" == 0)";
				statement = "this animate [""dvereJednaADira"", 0]";
			};
		};
	};
	
	class Uroven2MalyDomek : Land_A_tent {
		scope = 2;
		model = "origins_pack\structures\base_buildings\gerojUroven2MalyDomek.p3d";
		faction = "rth_copter_class";
		displayName = "Heroes - Small House (Level 2)";
		vehicleClass = "Survival";
		supplyRadius = 0.05;
		memoryPointSupply = "gear";
		armor = 10000;
		accuracy = 0.2;
		destrType = "DestructNo";
		transportMaxMagazines = 400;
		transportMaxWeapons = 25;
		transportMaxBackpacks = 10;
		
		class AnimationSources {
			class dvereJedna {
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
			
			class dvereDva : dvereJedna {};
			
			class dvereTri : dvereJedna {};
			
			class dvere4tiri : dvereJedna {};
			
			class dvereJednaA : dvereJedna {};
			
			class dvereDvaA : dvereJedna {};
			
			class vratkaDva : dvereJedna {};
			
			class dvereGarazLeve : dvereJedna {
				animPeriod = 2;
			};
			
			class dvereGarazPrave : dvereGarazLeve {};
			
			class dvereGarazLeveDva : dvereGarazLeve {};
			
			class dvereGarazPraveDva : dvereGarazLeve {};
		};
		
		class UserActions {
			class zavritDvereJedna {
				displayNameDefault = $STR_DN_OUT_C_DOOR_DEFAULT;
				displayName = $STR_CLOSE_DOOR_FRONT;
				position = "pos_door_1";
				radius = 2.5;
				onlyForPlayer = 1;
				condition = "(this animationPhase ""stupenTri"" == 0) && (this animationPhase ""dvereJedna"" == 1)";
				statement = "this animate [""dvereJedna"", 0]";
			};
			
			class otevritDvereInter {
				displayNameDefault = $STR_DN_OUT_O_DOOR_DEFAULT;
				displayName = $STR_OPEN_DOOR_FRONT;
				position = "pos_slider";
				radius = 1;
				onlyForPlayer = 1;
				condition = "(this animationPhase ""stupenTri"" == 0) && (this animationPhase ""dvereJedna"" == 0)";
				statement = "this animate [""dvereJedna"", 1]";
			};
			
			class otevritDvereDira {
				displayName = $STR_OPEN_DOOR_SLIDER;
				position = "pos_slider";
				radius = 1;
				onlyForPlayer = 1;
				condition = "(this animationPhase ""stupenTri"" == 0) && (this animationPhase ""dvereJednaDira"" == 0) && (this animationPhase ""dvereJedna"" == 0)";
				statement = "this animate [""dvereJednaDira"", 1]";
			};
			
			class zavritDvereDira {
				displayName = $STR_CLOSE_DOOR_SLIDER;
				position = "pos_slider";
				radius = 1;
				onlyForPlayer = 1;
				condition = "(this animationPhase ""stupenTri"" == 0) && (this animationPhase ""dvereJednaDira"" == 1) && (this animationPhase ""dvereJedna"" == 0)";
				statement = "this animate [""dvereJednaDira"", 0]";
			};
		};
	};
	
	class Uroven3VelkyDomek : Land_A_tent {
		scope = 2;
		model = "origins_pack\structures\base_buildings\gerojUroven3VelkyDomek.p3d";
		faction = "rth_copter_class";
		displayName = "Heroes - Big House (Level 3)";
		vehicleClass = "Survival";
		armor = 10000;
		accuracy = 0.2;
		supplyRadius = 0.05;
		memoryPointSupply = "gear";
		destrType = "DestructNo";
		transportMaxMagazines = 400;
		transportMaxWeapons = 50;
		transportMaxBackpacks = 15;
		
		class AnimationSources {
			class dvereJedna {
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
			
			class dvereDva : dvereJedna {};
			
			class dvereTri : dvereJedna {};
			
			class dvere4tiri : dvereJedna {};
			
			class dvereJednaA : dvereJedna {};
			
			class dvereDvaA : dvereJedna {};
			
			class vratka : dvereJedna {};
			
			class vrataGaraz : dvereJedna {};
			
			class dvereGarazLeve : dvereJedna {
				animPeriod = 2;
			};
			
			class dvereGarazPrave : dvereGarazLeve {};
			
			class dvereGarazLeveDva : dvereGarazLeve {};
			
			class dvereGarazPraveDva : dvereGarazLeve {};
		};
		
		class UserActions {
			class zavritDvereJedna {
				displayNameDefault = $STR_DN_OUT_C_DOOR_DEFAULT;
				displayName = $STR_CLOSE_DOOR_FRONT;
				position = "pos_door_1";
				radius = 2.5;
				onlyForPlayer = 1;
				condition = "(this animationPhase ""stupenDva"" == 0) && (this animationPhase ""dvereJednaA"" == 1)";
				statement = "this animate [""dvereJednaA"", 0]";
			};
			
			class OtevritDvereInter {
				displayNameDefault = $STR_DN_OUT_O_DOOR_DEFAULT;
				displayName = $STR_OPEN_DOOR_FRONT;
				position = "pos_slider";
				radius = 1;
				onlyForPlayer = 1;
				condition = "(this animationPhase ""stupenDva"" == 0) && (this animationPhase ""dvereJednaA"" == 0)";
				statement = "this animate [""dvereJednaA"", 1]";
			};
			
			class otevritDvereDira {
				displayName = $STR_OPEN_DOOR_SLIDER;
				position = "pos_slider";
				radius = 1;
				onlyForPlayer = 1;
				condition = "(this animationPhase ""stupenDva"" == 0) && (this animationPhase ""dvereJednaADira"" == 0) && (this animationPhase ""dvereJednaA"" == 0)";
				statement = "this animate [""dvereJednaADira"", 1]";
			};
			
			class zavritDvereDira {
				displayName = $STR_CLOSE_DOOR_SLIDER;
				position = "pos_slider";
				radius = 2;
				onlyForPlayer = 1;
				condition = "(this animationPhase ""stupenDva"" == 0) && (this animationPhase ""dvereJednaADira"" == 1) && (this animationPhase ""dvereJednaA"" == 0)";
				statement = "this animate [""dvereJednaADira"", 0]";
			};
			
			class otevritDvereDvaDira {
				displayName = $STR_OPEN_DOOR_SLIDER;
				position = "pos_slider2";
				radius = 1;
				onlyForPlayer = 1;
				condition = "(this animationPhase ""stupenDva"" == 0) && (this animationPhase ""dvereDvaDira"" == 0) && (this animationPhase ""dvereDva"" == 0)";
				statement = "this animate [""dvereDvaDira"", 1]";
			};
			
			class zavritDvereDvaDira {
				displayName = $STR_CLOSE_DOOR_SLIDER;
				position = "pos_slider2";
				radius = 1;
				onlyForPlayer = 1;
				condition = "(this animationPhase ""stupenDva"" == 0) && (this animationPhase ""dvereDvaDira"" == 1) && (this animationPhase ""dvereDva"" == 0)";
				statement = "this animate [""dvereDvaDira"", 0]";
			};
			
			class zavritDvereDva {
				displayNameDefault = $STR_DN_OUT_C_DOOR_DEFAULT;
				displayName = $STR_CLOSE_DOOR_SIDE;
				position = "pos_door_2";
				radius = 2;
				onlyForPlayer = 1;
				condition = "(this animationPhase ""stupenDva"" == 0) && (this animationPhase ""stupenDva"" == 0) && (this animationPhase ""dvereDva"" == 1)";
				statement = "this animate [""dvereDva"", 0]";
			};
			
			class otevritDvereDvaInter {
				displayNameDefault = $STR_DN_OUT_O_DOOR_DEFAULT;
				displayName = $STR_OPEN_DOOR_SIDE;
				position = "pos_slider2";
				radius = 1;
				onlyForPlayer = 1;
				condition = "(this animationPhase ""stupenDva"" == 0) && (this animationPhase ""stupenDva"" == 0) && (this animationPhase ""dvereDva"" == 0)";
				statement = "this animate [""dvereDva"", 1]";
			};
			
			class zavritGarazDvere {
				displayNameDefault = $STR_DN_OUT_C_DOOR_DEFAULT;
				displayName = $STR_CLOSE_DOOR_GARAGE;
				position = "pos_door_garage";
				radius = 3;
				onlyForPlayer = 1;
				condition = "(this animationPhase ""upgrd_1_stage_3"" == 0) && (this animationPhase ""dvereGarazLeve"" == 1) && (this animationPhase ""dvereGarazPrave"" == 1)";
				statement = "(this animate [""dvereGarazLeve"", 0]) && (this animate [""dvereGarazPrave"", 0])";
			};
		};
	};
	
	class malaGaraz : Land_A_tent {
		scope = 2;
		model = "origins_pack\structures\base_buildings\malaGaraz.p3d";
		faction = "rth_copter_class";
		displayName = "Small garage";
		vehicleClass = "Survival";
		armor = 10000;
		accuracy = 0.2;
		supplyRadius = 0.05;
		memoryPointSupply = "gear";
		destrType = "DestructNo";
		transportMaxMagazines = 400;
		transportMaxWeapons = 10;
		transportMaxBackpacks = 5;
		
		class AnimationSources {
			class dvereJedna {
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
			
			class dvereDva : dvereJedna {};
			
			class dvereTri : dvereJedna {};
			
			class dvere4tiri : dvereJedna {};
			
			class vrataGaraz : dvereJedna {
				animPeriod = 2;
			};
			
			class vrataGaraz2 : dvereJedna {
				animPeriod = 2;
			};
			
			class dvereGarazLeve : dvereJedna {
				animPeriod = 2;
			};
			
			class dvereGarazPrave : dvereGarazLeve {};
			
			class dvereGarazLeveDva : dvereGarazLeve {};
			
			class dvereGarazPraveDva : dvereGarazLeve {};
		};
		
		class UserActions {
			class zavritGarazDvere {
				displayNameDefault = $STR_DN_OUT_C_DOOR_DEFAULT;
				displayName = $STR_CLOSE_DOOR_GARAGE;
				position = "pos_door_garage";
				radius = 3;
				onlyForPlayer = 1;
				condition = "(this animationPhase ""stupenTri"" == 0) && (this animationPhase ""dvereGarazLeveDva"" == 1) && (this animationPhase ""dvereGarazPraveDva"" == 1)";
				statement = "(this animate [""dvereGarazLeveDva"", 0]) && (this animate [""dvereGarazPraveDva"", 0])";
			};
		};
	};
	
	class velkaGaraz : Land_A_tent {
		scope = 2;
		model = "origins_pack\structures\base_buildings\velkaGaraz.p3d";
		faction = "rth_copter_class";
		displayName = "Big garage";
		vehicleClass = "Survival";
		armor = 10000;
		accuracy = 0.2;
		supplyRadius = 0.05;
		memoryPointSupply = "gear";
		destrType = "DestructNo";
		transportMaxMagazines = 400;
		transportMaxWeapons = 50;
		transportMaxBackpacks = 15;
		
		class AnimationSources {
			class dvereJedna {
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
			
			class dvereDva : dvereJedna {};
			
			class dvereTri : dvereJedna {};
			
			class dvere4tiri : dvereJedna {};
			
			class vrataGaraz : dvereJedna {
				animPeriod = 2;
			};
			
			class vrataGaraz2 : dvereJedna {
				animPeriod = 2;
			};
			
			class dvereGarazLeve : dvereJedna {
				animPeriod = 2;
			};
			
			class dvereGarazPrave : dvereGarazLeve {};
			
			class dvereGarazLeveDva : dvereGarazLeve {};
			
			class dvereGarazPraveDva : dvereGarazLeve {};
		};
		
		class UserActions {
			class zavritGarazDvere {
				displayNameDefault = $STR_DN_OUT_C_DOOR_DEFAULT;
				displayName = $STR_CLOSE_DOOR_GARAGE;
				position = "pos_door_garage";
				radius = 3;
				onlyForPlayer = 1;
				condition = "(this animationPhase ""stupenTri"" == 0) && (this animationPhase ""dvereGarazLeveDva"" == 1) && (this animationPhase ""dvereGarazPraveDva"" == 1)";
				statement = "(this animate [""dvereGarazLeveDva"", 0]) && (this animate [""dvereGarazPraveDva"", 0])";
			};
		};
	};
	
	class kingramida : Land_A_tent {
		scope = 2;
		model = "origins_pack\structures\base_buildings\kingramida.p3d";
		faction = "rth_copter_class";
		displayName = "King's Pyramid";
		vehicleClass = "Survival";
		armor = 10000;
		accuracy = 0.2;
		supplyRadius = 0.05;
		memoryPointSupply = "gear";
		destrType = "DestructNo";
		transportMaxMagazines = 400;
		transportMaxWeapons = 100;
		transportMaxBackpacks = 100;
		
		class AnimationSources {
			class dvereJednaC {
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
		};
		
		class UserActions {
			class otevritDverePyramidy {
				displayNameDefault = $STR_DN_OUT_O_DOOR_DEFAULT;
				displayName = "Open pyramid";
				position = "pos_door";
				radius = 2;
				onlyForPlayer = 1;
				condition = "(this animationPhase ""stupenJeden"" == 0) && (this animationPhase ""dvereJednaC"" == 0)";
				statement = "this animate [""dvereJednaC"", 1]";
			};
			
			class zavritDverePyramidy {
				displayNameDefault = $STR_DN_OUT_C_DOOR_DEFAULT;
				displayName = "Close pyramid";
				position = "pos_door";
				radius = 8;
				onlyForPlayer = 1;
				condition = "(this animationPhase ""stupenJeden"" == 0) && (this animationPhase ""dvereJednaC"" == 1)";
				statement = "this animate [""dvereJednaC"", 0]";
			};
			
			class vyvesitPrapor {
				displayName = "Raise GP flag";
				position = "pos_door";
				radius = 2;
				onlyForPlayer = 1;
				condition = "(this animationPhase ""stupenJeden"" == 0) && (this animationPhase ""prapor"" == 1)";
				statement = "this animate [""prapor"", 0]";
			};
			
			class snizitPrapor {
				displayName = "Lower GP flag";
				position = "pos_door";
				radius = 2;
				onlyForPlayer = 1;
				condition = "(this animationPhase ""stupenJeden"" == 0) && (this animationPhase ""prapor"" == 0)";
				statement = "this animate [""prapor"", 1]";
			};
		};
	};
	
	class krepost : Land_A_tent {
		scope = 2;
		model = "origins_pack\structures\base_buildings\fortress\krepost.p3d";
		faction = "rth_copter_class";
		displayName = "Stronghold";
		vehicleClass = "Survival";
		armor = 10000;
		accuracy = 0.2;
		supplyRadius = 3;
		memoryPointSupply = "gear";
		destrType = "DestructNo";
		transportMaxMagazines = 550;
		transportMaxWeapons = 100;
		transportMaxBackpacks = 20;
		
		class AnimationSources {
			class vrata {
				source = "user";
				animPeriod = 10;
				initPhase = 0;
			};
			
			class hridel : vrata {};
			
			class kolo1 : vrata {};
			
			class kolo2 : vrata {};
			
			class vaha : vrata {};
			
			class svich {
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
			
			class door1 {
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
			
			class door2 : door1 {};
			
			class door3 : door1 {};
			
			class door4 : door1 {};
			
			class door5 : door1 {};
			
			class door6 : door1 {};
			
			class door7 : door1 {};
			
			class door8 : door1 {};
		};
		
		class UserActions {
			class naplnitVodu {
				displayName = "Fill water bottle";
				position = "pos_water";
				radius = 2.0;
				onlyForPlayer = 1;
				condition = "(this animationPhase ""pumpa"" == 0)";
				statement = "this call func_naplnitVodu;";
			};
			
			class spat {
				displayName = "Go to sleep";
				position = "pos_sleep";
				radius = 2.0;
				onlyForPlayer = 1;
				condition = "(this animationPhase ""sleep_stupen4tiri"" == 0)";
				statement = "[0,0,0,[""zeeping"",this]] execVM ""\z\addons\dayz_code\init\player_act.sqf"";";
			};
		};
	};
};
