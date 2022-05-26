    
class Extended_PreStart_EventHandlers {
    class ADDON {
        init = QUOTE(call COMPILE_FILE(XEH_preStart));
    };
};

class Extended_PreInit_EventHandlers {
    class ADDON {
        init = QUOTE(call COMPILE_FILE(XEH_preInit));
    };
};

class Extended_PostInit_EventHandlers {
    class ADDON {
        init = QUOTE(call COMPILE_FILE(XEH_postInit));
    };
};

class Extended_Init_EventHandlers {
    class Peer_Land_Trench_Curved {
        class GVAR(trenchInit) {
        init = QUOTE(_this call FUNC(initTrench));
        };
    };
    class Peer_Land_Trench_Curved_Inverse {
        class GVAR(trenchInit) {
        init = QUOTE(_this call FUNC(initTrench));
        };
    };
    class Peer_Land_Trench_Straight {
        class GVAR(trenchInit) {
        init = QUOTE(_this call FUNC(initTrench));
        };
    };
};