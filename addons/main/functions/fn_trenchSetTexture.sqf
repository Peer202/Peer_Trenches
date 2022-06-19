/*
 * Author: Peer / CapriSol
 * Set texture of trench according to the surface below.
 *
 * Arguments:
 * 0: Trench <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example: call Peer_Trenches_main_fnc_trenchSetTexture
 *  
 *
 * Public: No
 */

params ["_object"];

_object setObjectTexture [0, surfaceTexture (getPos _object)];