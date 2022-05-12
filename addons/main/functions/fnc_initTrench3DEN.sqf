#include "script_component.hpp"
/*
 * Author: chris579 modified by Peer
 * Initializes a trench placed in 3DEN.
 *
 * Arguments:
 * 0: Trench <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 *  
 *
 * Public: No
 */

params [
    ["_object", objnull, [objNull]]
];

private _initTrench = {
    params ["_object"];
    _object addEventHandler ["Dragged3DEN", {
        params ["_object"];

        _object setObjectTexture [0, surfaceTexture (getPos _object)];
    }];

    _object setObjectTexture [0, surfaceTexture (getPos _object)];
};

// If no object is given apply this to all trenches in 3den
if (isNull _object) then {
    [_initTrench] spawn {
        params ["_initTrench"];

        {
            if (isNumber (configOf _x >> QGVAR(isPeerTrench))) then {
                [_x] call _initTrench;
            };
        } forEach (all3DENEntities select 0);
    };
} else {
    [_object] call _initTrench;
};
