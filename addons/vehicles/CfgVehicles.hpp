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
		vehicleClass = "Peer_Trenches";
		displayName = "Large Trench Straight Metal";
		model = "x\Peer_Trenches\addons\vehicles\data\trenchpieces_tall\straight\trench_straight.p3d";
		hiddenSelections[] = {"top","side"};
		
		class EventHandlers: Eventhandlers {
			class Peer_Trenches {
				Dragged3DEN = "_this call Peer_Trenches_Main_fnc_trenchSetTexture";
				init = "_this call Peer_Trenches_Main_fnc_trenchSetTexture";
			};
		};
	};
};