class CfgVehicles {
	class Land;	// External class reference
	class Car;	// External class reference
	class UAZ_Unarmed_Base;	// External class reference
	
	class Ural_Base;	// External class reference
	class truck_civ_base; //External class reference
	
	class truck_civ : truck_civ_base {
		model = "\origins_pack\vehicles\vil_truck_civ.p3d";
		crew = "Profiteer2";
		faction = "rth_copter_class";
		side = TCivilian;
		scope = public;
		accuracy = 1000;	// accuracy needed to recognize type of this target
		transportSoldier = 1;
		vehicleClass = "car";
		displayName = "Ren truck (red)";
		icon = "\origins_pack\vehicles\icons\ico_truck_ca.paa";
		picture = "\origins_pack\vehicles\icons\pic_truck_ca.paa";
		transportMaxMagazines = 150;
		transportMaxWeapons = 15;
		transportMaxBackpacks = 10;
		
		class Damage {
			tex[] = {"origins_pack\vehicles\textures\sklo_rysy.paa", "origins_pack\vehicles\textures\sklo_rysy_de.paa", "origins_pack\vehicles\textures\sklo_rysy_de.paa"};
			mat[] = {"origins_pack\vehicles\textures\midlum.rvmat", "origins_pack\vehicles\textures\midlum.rvmat", "origins_pack\vehicles\textures\midlum_de.rvmat", "origins_pack\vehicles\textures\s2000civ.rvmat", "origins_pack\vehicles\textures\s2000civ.rvmat", "origins_pack\vehicles\textures\s2000civ_de.rvmat", "origins_pack\vehicles\textures\truck.rvmat", "origins_pack\vehicles\textures\truck.rvmat", "origins_pack\vehicles\textures\truck_de.rvmat"};
		};
	};
};
