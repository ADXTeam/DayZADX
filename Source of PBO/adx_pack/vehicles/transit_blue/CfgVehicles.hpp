class CfgVehicles {
	class Land;	// External class reference
	class Car;	// External class reference
	class transit;
	
	class transit_blue : transit {
		displayName = "Ford Transit (MG) (Blue)";
		hiddenSelections[] = {"Camo01", "Camo02"};
		hiddenSelectionsTextures[] = {"\origins_pack\vehicles\textures\transit_pd2_co.paa", "\CA\wheeled_e\Ural\Data\ural_plachta_civil_co.paa"};
	};
};
