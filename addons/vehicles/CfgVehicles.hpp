class CfgVehicles
{
	class Wall_F; 
	class Land_Trench_01_forest_F: Wall_F {
		class Eventhandlers;
	};
	
	class Peer_Land_Trench_Curved: Land_Trench_01_forest_F {
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		vehicleClass = "Peer_Trenches";
		displayName = "Trench Angle";
		model = "\Peer_Trenches_Vehicles\data\trench_curved\trench_curved.p3d";
		hiddenSelections[] = {"top","side"};
		
		class EventHandlers: Eventhandlers {
			class Peer_Trenches {
				Dragged3DEN = "_this call Peer_Trenches_Main_fnc_trenchSetTexture";
				init = "_this call Peer_Trenches_Main_fnc_trenchSetTexture";
			};
		};
	};
	
	class Peer_Land_Trench_Curved_Inverse: Peer_Land_Trench_Curved {						
		displayName	= "Trench Angle Inverse";
		model = "\Peer_Trenches_Vehicles\data\trench_curved_inverse\trench_curved_inverse.p3d";
		hiddenSelections[] = {"top","side"};
	};
	
	class Peer_Land_Trench_Straight: Peer_Land_Trench_Curved {								
		displayName = "Trench Straight";
		model = "\Peer_Trenches_Vehicles\data\trench_straight\trench_straight.p3d";
		hiddenSelections[] = {"top","side"};
	};
};