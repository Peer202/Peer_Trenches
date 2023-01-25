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
	if (_x isKindOf "Peer_Trench_mainclass") then {
		private _object = _x;
		private _texturepath = surfaceTexture (getPos _object);

		if ((_object get3DENAttribute "Apply_Manual_Texture_Path") select 0) then {
			_texturepath = (_object get3DENAttribute "Manual_Texture_Path") select 0;
		};
		
		[_x,_texturepath] call Peer_Trenches_main_fnc_trenchSetTexture;
		
	};
} forEach (all3DENEntities select 0);