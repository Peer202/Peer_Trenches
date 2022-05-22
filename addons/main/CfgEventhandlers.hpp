#define TRENCH_INIT class GVAR(trenchInit) { \
        init = QUOTE(_this call FUNC(initTrench)); \
    }

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
        TRENCH_INIT;
    };
    class Peer_Land_Trench_Curved_Inverse {
        TRENCH_INIT;
    };
    class Peer_Land_Trench_Straight {
        TRENCH_INIT;
    };
};