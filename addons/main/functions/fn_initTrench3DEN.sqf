/*
 * Author: Peer / CapriSol
 * Set texture of all trenches when 3den-Editor launches.
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
} forEach (all3DENEntities select 0);