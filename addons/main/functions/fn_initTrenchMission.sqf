/*
 * Author: Peer / CapriSol
 * Set texture of all trenches when Missions is started.
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Example: call Peer_Trenches_main_fnc_initTrenchMission
 *  
 *
 * Public: No
 */

{
	if (_x isKindOf "Peer_Trench_Straight_Tall_Metal") then {
		[_x] call Peer_Trenches_main_fnc_trenchSetTexture;
	};
} forEach (allMissionObjects "Peer_Trench_Straight_Tall_Metal");