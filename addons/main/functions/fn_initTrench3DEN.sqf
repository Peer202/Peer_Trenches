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
if (!isServer) exitWith {diag_log "[DEBUG] Chameleon Trenches started on client but was terminated"};

{
	if (_x isKindOf "Peer_Trench_mainclass") then {
		private _object = _x;
		private _texturepath = surfaceTexture (getPos _object);

		if ((_object get3DENAttribute "Apply_Manual_Texture_Path") select 0) then {
			_texturepath = (_object get3DENAttribute "Manual_Texture_Path") select 0;
		};
		//diag_log format["object %1 got texture String %2 through initTrench",str _object,_texturepath];
		[_object,_texturepath] call Peer_Trenches_main_fnc_trenchSetTexture;
		
	};
} forEach (all3DENEntities select 0);