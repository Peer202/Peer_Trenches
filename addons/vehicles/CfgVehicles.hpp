class CfgVehicles
{
	class Wall_F; 
	class Land_Trench_01_forest_F: Wall_F {
		class Eventhandlers;
	};
	class Peer_Trench_mainclass: Land_Trench_01_forest_F {
		scope = 0;
		scopeCurator = 0;
		scopeArsenal = 0;
		editorCategory = "Trench_Structures";
		editorSubCategory = "Trenches_Chameleon";
		
		
		/*
		class Attributes {
			class Peer_Trench_Groundcopy_Attribute {
				control = "CheckboxNumber"; 
            	efaultValue = "1"; 
            	displayName = "Enable the Ground Chameleon System";
            	tooltip = "When activated the Object will copy the texture of the ground below."
            	expression = "_this call Peer_Trenches_Main_fnc_trenchSetTexture";
            	property = "Peer_Trench_Groundcopy_Enable";
			};
		
		};*/
	};
	class Peer_Trench_Chameleon:Peer_Trench_mainclass{
		editorSubCategory = "Trenches_Chameleon";
		class EventHandlers: Eventhandlers {
			class Peer_Trenches {
				Dragged3DEN = "_this call Peer_Trenches_Main_fnc_trenchSetTexture";
				init = "_this call Peer_Trenches_Main_fnc_trenchSetTexture";
			};
		};
	};
	// Trench Floor
	class Peer_Trench_Floor_Chameleon: Peer_Trench_Chameleon {
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		editorSubCategory = "Trenches_Misc";
		editorPreview = "x\Peer_Trenches\addons\vehicles\data\utils\preview\floor.paa";
		vehicleClass = "Peer_Trenches";
		displayName = "Trench Floor (Chameleon)";
		model = "x\Peer_Trenches\addons\vehicles\data\utils\Floor.p3d";
		hiddenSelections[] = {"trench"};
	};

	//Normal Chameleon

	class Peer_Trench_Straight_Long_Chameleon: Peer_Trench_Chameleon {
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		editorPreview = "x\Peer_Trenches\addons\vehicles\data\trenches\straight\preview\long.paa";
		vehicleClass = "Peer_Trenches";
		displayName = "Trench long (Chameleon)";
		model = "x\Peer_Trenches\addons\vehicles\data\trenches\straight\trench_straight.p3d";
		hiddenSelections[] = {"top","snow"};
	};

	class Peer_Trench_Straight_Short_Chameleon: Peer_Trench_Straight_Long_Chameleon {
		editorPreview = "x\Peer_Trenches\addons\vehicles\data\trenches\straight\preview\short.paa";
		vehicleClass = "Peer_Trenches";
		displayName = "Trench short (Chameleon)";
		model = "x\Peer_Trenches\addons\vehicles\data\trenches\straight\trench_straight_slim.p3d";
		hiddenSelections[] = {"top","snow"};

	};

	class Peer_Trench_Bent_Chameleon: Peer_Trench_Straight_Long_Chameleon {
		editorPreview = "x\Peer_Trenches\addons\vehicles\data\trenches\bent\preview\bent.paa";
		vehicleClass = "Peer_Trenches";
		displayName = "Trench bent (Chameleon)";
		model = "x\Peer_Trenches\addons\vehicles\data\trenches\bent\trench_bent.p3d";
		hiddenSelections[] = {"top","snow"};

	};

	//Snow
	class Peer_Trench_Snow_Chameleon:Peer_Trench_mainclass{
		editorSubCategory = "Trenches_Snow_Chameleon";
		class EventHandlers: Eventhandlers {
			class Peer_Trenches {
				Dragged3DEN = "_this call Peer_Trenches_Main_fnc_trenchSetTexture";
				init = "_this call Peer_Trenches_Main_fnc_trenchSetTexture";
			};
		};
	};

	class Peer_Trench_Straight_Long_Snow_Chameleon: Peer_Trench_Snow_Chameleon {
		scope = 0;
		scopeCurator = 0;
		scopeArsenal = 0;
		editorPreview = "x\Peer_Trenches\addons\vehicles\data\trenches\straight\Straight.paa";
		vehicleClass = "Peer_Trenches";
		displayName = "Trench long Snow (Chameleon)";
		model = "x\Peer_Trenches\addons\vehicles\data\trenches\straight\trench_straight.p3d";
		hiddenSelections[] = {"top"};
	};
	
	class Peer_Trench_Straight_Short_Snow_Chameleon: Peer_Trench_Straight_Long_Snow_Chameleon {
		editorPreview = "x\Peer_Trenches\addons\vehicles\data\trenches\straight\Straight.paa";
		vehicleClass = "Peer_Trenches";
		displayName = "Trench short snow (Chameleon)";
		model = "x\Peer_Trenches\addons\vehicles\data\trenches\straight\trench_straight_slim.p3d";
		hiddenSelections[] = {"top"};
	};
	class Peer_Trench_Bent_Snow_Chameleon: Peer_Trench_Straight_Long_Snow_Chameleon {
		editorPreview = "x\Peer_Trenches\addons\vehicles\data\trenches\straight\Straight.paa";
		vehicleClass = "Peer_Trenches";
		displayName = "Trench bent (Chameleon)";
		model = "x\Peer_Trenches\addons\vehicles\data\trenches\bent\trench_bent.p3d";
		hiddenSelections[] = {"top"};
	};
};