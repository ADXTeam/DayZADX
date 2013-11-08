class CfgVehicles {
	class Land;	// External class reference
	class Car;	// External class reference
	class UAZ_Unarmed_Base;	// External class reference
	
	class Ural_Base;	// External class reference
	class truck_civ; //External class reference
	
	class truck_civ2 : truck_civ {
		model = "\origins_pack\vehicles\vil_truck_civ2.p3d";
		displayName = "Volvo truck (white)";
		icon = "\origins_pack\vehicles\icons\ico_truck_ca.paa";
		picture = "\origins_pack\vehicles\icons\pic_truck2_ca.paa";
		hiddenSelectionsTextures[] = {"\origins_pack\vehicles\textures\truck_w_co.paa", "\origins_pack\vehicles\textures\s2000civ_co.paa"};
	};
};
