class CfgVehicles {
	class Land;	// External class reference
	class Car;	// External class reference
	class UAZ_Unarmed_Base;	// External class reference
	
	class Ural_Base;	// External class reference
	class truck_civ; //External class reference
	
	class volvo_fl290 : truck_civ {
		model = "\origins_pack\vehicles\vil_volvo_fl290";
		side = TCivilian;
		accuracy = 1000;	// accuracy needed to recognize type of this target
		transportSoldier = 3;
		displayName = "Fire engine (Volvo)";
		icon = "\origins_pack\vehicles\icons\ico_truck_ca.paa";
		picture = "\origins_pack\vehicles\icons\pic_truck2_ca.paa";
		
		class Damage {
			tex[] = {};
			mat[] = {"origins_pack\vehicles\textures\volvo.rvmat", "origins_pack\vehicles\textures\volvo.rvmat", "origins_pack\vehicles\textures\midlum_de.rvmat"};
		};
		hiddenSelections[] = {"main_body"};
		hiddenSelectionsTextures[] = {"\origins_pack\vehicles\textures\volvo_co.paa"};
	};
};
