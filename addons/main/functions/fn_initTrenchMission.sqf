/*
 * Author: Peer
 * Set texture of trench according to the surface below.
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Example: call Peer_Trenches_main_fnc_initTrench3DEN
 *  
 *
 * Public: No
 */

{
	if (_x isKindOf "Peer_Land_Trench_Curved") then {
		[_x] call Peer_Trenches_main_fnc_trenchSetTexture;
	};
} forEach (allMissionObjects "Peer_Land_Trench_Curved");