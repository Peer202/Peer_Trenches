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
	if (_x isKindOf "Peer_Land_Trench_Curved") then {
		[_x] call Peer_Trenches_main_fnc_trenchSetTexture;
	};
} forEach (allMissionObjects "Peer_Land_Trench_Curved");