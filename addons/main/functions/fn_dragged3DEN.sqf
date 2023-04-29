/*
 * Author: Peer / CapriSol
 * Set texture of trench when the trench is dragged in the 3DEN Editor
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

params["_object"];
//diag_log "[DEBUG] Trenches Dragged 3DEN started";
if (!isServer) exitWith {diag_log "[DEBUG] Chameleon Trenches started on client but was terminated"};
private _texturepath = surfaceTexture (getPos _object);
_object set3DENAttribute ["Ground_Texture_Path",_texturepath];

if ((_object get3DENAttribute "Apply_Manual_Texture_Path") select 0) then {
	_texturepath = (_object get3DENAttribute "Manual_Texture_Path") select 0;
};
//diag_log format["object %1 got texture String %2 through dragged3DEN",str _object,_texturepath];
[_object, _texturepath] call Peer_Trenches_main_fnc_trenchSetTexture;
