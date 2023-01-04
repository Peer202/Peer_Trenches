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
		editorCategory = "EdCat_Structures";
		editorSubCategory = "Peer_Trenches_Chameleon";
		
		
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
		editorSubCategory = "Peer_Trenches_Chameleon";
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
		editorPreview = "x\Peer_Trenches\addons\vehicles\data\trenchpieces_tall\straight\Straight.paa";
		vehicleClass = "Peer_Trenches";
		displayName = "Trench Floor (Chameleon)";
		model = "x\Peer_Trenches\addons\vehicles\data\utils\Floor.p3d";
		hiddenSelections[] = {"trench"};
	};

	class Peer_Trench_Straight_Long_Chameleon: Peer_Trench_Chameleon {
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		editorPreview = "x\Peer_Trenches\addons\vehicles\data\trenchpieces_tall\straight\Straight.paa";
		vehicleClass = "Peer_Trenches";
		displayName = "Trench long (Chameleon)";
		model = "x\Peer_Trenches\addons\vehicles\data\trenchpieces_tall\straight\trench_straight.p3d";
		hiddenSelections[] = {"top"};
	};

	class Peer_Trench_Straight_Short_Chameleon: Peer_Trench_Straight_Long_Chameleon {
		editorPreview = "x\Peer_Trenches\addons\vehicles\data\trenchpieces_tall\straight\Straight.paa";
		vehicleClass = "Peer_Trenches";
		displayName = "Trench short (Chameleon)";
		model = "x\Peer_Trenches\addons\vehicles\data\trenchpieces_tall\straight\trench_straight_slim.p3d";
		hiddenSelections[] = {"top"};
	};

	class Peer_Trench_Bent_Chameleon: Peer_Trench_Straight_Long_Chameleon {
		editorPreview = "x\Peer_Trenches\addons\vehicles\data\trenchpieces_tall\straight\Straight.paa";
		vehicleClass = "Peer_Trenches";
		displayName = "Trench bent (Chameleon)";
		model = "x\Peer_Trenches\addons\vehicles\data\trenchpieces_tall\bent\trench_bent.p3d";
		hiddenSelections[] = {"top"};
	};
};