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
	
		#include "CfgAttributes.hpp"

	};
	class Peer_Trench_Chameleon:Peer_Trench_mainclass{
		editorSubCategory = "Trenches_Chameleon";
		class EventHandlers: Eventhandlers {
			class Peer_Trenches {
				Dragged3DEN = "_this call Peer_Trenches_Main_fnc_dragged3DEN";
				//init = "_this call Peer_Trenches_Main_fnc_dragged3DEN";
				AttributesChanged3DEN = "_this call Peer_Trenches_Main_fnc_dragged3DEN";
			};
		};
	};
	#include "CfgVehicles_util.hpp"
	
	//Normal Chameleon

	class Peer_Trench_Straight_Long_Chameleon: Peer_Trench_Chameleon {
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		editorPreview = "x\Peer_Trenches\addons\vehicles\data\trenches\straight\preview\long.paa";
		vehicleClass = "Peer_Trenches";
		displayName = "Trench big (Chameleon)";
		model = "x\Peer_Trenches\addons\vehicles\data\trenches\straight\trench_straight.p3d";
		hiddenSelections[] = {"top","snow"};
	};

	class Peer_Trench_Straight_Short_Chameleon: Peer_Trench_Straight_Long_Chameleon {
		editorPreview = "x\Peer_Trenches\addons\vehicles\data\trenches\straight\preview\short.paa";
		vehicleClass = "Peer_Trenches";
		displayName = "Trench (Chameleon)";
		model = "x\Peer_Trenches\addons\vehicles\data\trenches\straight\trench_straight_slim.p3d";
		hiddenSelections[] = {"top","snow"};

	};

	class Peer_Trench_Straight_vsmall_Chameleon: Peer_Trench_Straight_Long_Chameleon {
		editorPreview = "x\Peer_Trenches\addons\vehicles\data\trenches\straight\preview\short.paa";
		vehicleClass = "Peer_Trenches";
		displayName = "Trench small (Chameleon)";
		model = "x\Peer_Trenches\addons\vehicles\data\trenches\straight\trench_straight_vsmall.p3d";
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
				Dragged3DEN = "_this call Peer_Trenches_Main_fnc_dragged3DEN";
				init = "_this call Peer_Trenches_Main_fnc_dragged3DEN";
				AttributesChanged3DEN = "_this call Peer_Trenches_Main_fnc_dragged3DEN";
			};
		};
	};

	class Peer_Trench_Straight_Long_Snow_Chameleon: Peer_Trench_Snow_Chameleon {
		scope = 0;
		scopeCurator = 0;
		scopeArsenal = 0;
		editorPreview = "x\Peer_Trenches\addons\vehicles\data\trenches\straight\Straight.paa";
		vehicleClass = "Peer_Trenches";
		displayName = "Trench large Snow (Chameleon)";
		model = "x\Peer_Trenches\addons\vehicles\data\trenches\straight\trench_straight.p3d";
		hiddenSelections[] = {"top"};
	};
	
	class Peer_Trench_Straight_Short_Snow_Chameleon: Peer_Trench_Straight_Long_Snow_Chameleon {
		editorPreview = "x\Peer_Trenches\addons\vehicles\data\trenches\straight\Straight.paa";
		vehicleClass = "Peer_Trenches";
		displayName = "Trench snow (Chameleon)";
		model = "x\Peer_Trenches\addons\vehicles\data\trenches\straight\trench_straight_slim.p3d";
		hiddenSelections[] = {"top"};
	};

	class Peer_Trench_Straight_vsmall_Snow_Chameleon: Peer_Trench_Straight_Long_Snow_Chameleon {
		editorPreview = "x\Peer_Trenches\addons\vehicles\data\trenches\straight\Straight.paa";
		vehicleClass = "Peer_Trenches";
		displayName = "Trench small snow (Chameleon)";
		model = "x\Peer_Trenches\addons\vehicles\data\trenches\straight\trench_straight_vsmall.p3d";
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