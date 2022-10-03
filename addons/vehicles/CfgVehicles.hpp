class CfgVehicles
{
	class Wall_F; 
	class Land_Trench_01_forest_F: Wall_F {
		class Eventhandlers;
	};
	
	class Peer_Trench_Straight_Tall_Metal: Land_Trench_01_forest_F {
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		editorPreview = "x\Peer_Trenches\addons\vehicles\data\trenchpieces_tall\straight\Straight.paa";
		vehicleClass = "Peer_Trenches";
		displayName = "Large Trench Straight Metal";
		model = "x\Peer_Trenches\addons\vehicles\data\trenchpieces_tall\straight\trench_straight.p3d";
		hiddenSelections[] = {"top"};
		
		class EventHandlers: Eventhandlers {
			class Peer_Trenches {
				Dragged3DEN = "_this call Peer_Trenches_Main_fnc_trenchSetTexture";
				init = "_this call Peer_Trenches_Main_fnc_trenchSetTexture";
			};
		};
	};
	class Peer_Trench_Straight_Tall_nometal: Peer_Trench_Straight_Tall_Metal {
		displayName = "Large Trench Straight";
		hiddenSelections[] = {"top","Metal"};
	};
	class Peer_Trench_Straight_Tall_bare: Peer_Trench_Straight_Tall_Metal {
		displayName = "Large Trench Straight Bare";
		hiddenSelections[] = {"top","Metal","Log1","Log2"};
	};
	class Peer_Trench_Bent_Tall_Metal: Peer_Trench_Straight_Tall_Metal {
		displayName = "Large Trench Bent Metal";
		editorPreview = "x\Peer_Trenches\addons\vehicles\data\trenchpieces_tall\bent\bent.paa";
		model = "x\Peer_Trenches\addons\vehicles\data\trenchpieces_tall\bent\trench_bent.p3d";
		hiddenSelections[] = {"top"};
	};
	class Peer_Trench_Bent_Tall_noMetal: Peer_Trench_Bent_Tall_Metal {
		displayName = "Large Trench Bent";
		hiddenSelections[] = {"top","Log1","Log2"};
	};
	class Peer_Trench_Bent_Tall_bare: Peer_Trench_Bent_Tall_Metal {
		displayName = "Large Trench Bent Bare";
		hiddenSelections[] = {"top","Metal","Log1","Log2"};
	};
};