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
if (!isServer) exitWith {diag_log "[DEBUG] Chameleon Trenches started on client but was terminated"};
{	
	if (_x isKindOf "Peer_Trench_mainclass") then {

		private _texturepath = surfaceTexture (getPos _x);	
		private _applymanualtexture = _x getVariable ["Apply_Manual_Texture_Path",false];

		if(_applymanualtexture)
		then{
			_texturepath = _x getVariable ["Manual_Texture_Path",""];
		};
		[_x,_texturepath] call Peer_Trenches_main_fnc_trenchSetTexture;
	};
} forEach (allMissionObjects "Peer_Trench_mainclass");
