#include "\z\ace\addons\main\script_macros.hpp"
#include <\a3\editor_f\Data\Scripts\dikCodes.h>

#define KPATCH(PVAR) DOUBLES(PREFIX,PVAR)
#define QKPATCH(PVAR) QUOTE(KPATCH(PVAR))
#define MAINPATCH KPATCH(main)
#define QMAINPATCH QUOTE(MAINPATCH)
#define QCOMPONENT QUOTE(COMPONENT)
#define QADDON QUOTE(ADDON)
#define AUTHOR [W]Peer
#define QAUTHOR QUOTE(AUTHOR)

#ifdef DISABLE_COMPILE_CACHE
    #undef PREP
    #define PREP(fncName) DFUNC(fncName) = compile preprocessFileLineNumbers QPATHTOF(functions\DOUBLES(fnc,fncName).sqf)
#else
    #undef PREP
    #define PREP(fncName) [QPATHTOF(functions\DOUBLES(fnc,fncName).sqf), QFUNC(fncName)] call CBA_fnc_compileFunction
#endif
