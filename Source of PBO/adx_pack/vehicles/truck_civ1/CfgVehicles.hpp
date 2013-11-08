class CfgVehicles {
	class Land;	// External class reference
	class Car;	// External class reference
	class UAZ_Unarmed_Base;	// External class reference
	
	class Ural_Base;	// External class reference
	class truck_civ; //External class reference
	
	class truck_civ1 : truck_civ {
		model = "\origins_pack\vehicles\vil_truck_civ1.p3d";
		displayName = "Ren truck (blue)";
		icon = "\origins_pack\vehicles\icons\ico_truck_ca.paa";
		picture = "\origins_pack\vehicles\icons\pic_truck_ca.paa";
		hiddenSelectionsTextures[] = {"\origins_pack\vehicles\textures\truck_b_co.paa", "\origins_pack\vehicles\textures\s2000civ_co.paa"};
	};
};
