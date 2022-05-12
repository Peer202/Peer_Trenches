#include "script_component.hpp"
#include "cfgPatches.hpp"
class CfgVehicles
{	
	// baseclass : 
	class Land_Trench_01_forest_F;
	class Peer_Land_Trench_Curved: Land_Trench_01_forest_F
	{
		scope				= 2;										
		scopeCurator		= 2;
		VehicleClass 		= "Peer_Trenches";										
		displayName			= "Trench Angle";							/// displayed in Editor
		model				= "x\Peer_Trenches\addons\trenches\Data\Trench_Curved_Inverse\Trench_Curved.p3d";	/// simple path to model
		hiddenSelections[] = {"top","side"};
		GVAR(isTrench) = 1;
	};
	class Peer_Land_Trench_Curved_Inverse: Land_Trench_01_forest_F
	{
		scope				= 2;										
		scopeCurator		= 2;
		VehicleClass 		= "Peer_Trenches";										
		displayName			= "Trench Angle Inverse";							/// displayed in Editor
		model				= "x\Peer_Trenches\addons\trenches\Data\Trench_Curved_Inverse\Trench_Curved_Inverse.p3d";	/// simple path to model
		hiddenSelections[] = {"top","side"};
		GVAR(isTrench) = 1;
	};
	class Peer_Land_Trench_Straight: Land_Trench_01_forest_F
	{
		scope				= 2;										
		scopeCurator		= 2;
		VehicleClass 		= "Peer_Trenches";										
		displayName			= "Trench straight";							/// displayed in Editor
		model				= "x\Peer_Trenches\addons\trenches\Data\Trench_Straight\Trench_Straight.p3d";	/// simple path to model
		hiddenSelections[] = {"top","side"};
		GVAR(isTrench) = 1;
	};

};