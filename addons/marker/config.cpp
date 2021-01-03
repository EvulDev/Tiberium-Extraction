#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            "tibe_flag_gdi_00",
            "tibe_flag_gdi_01",
            "tibe_flag_nod_00",
            "tibe_flag_nod_01",
            "tibe_mil_tiberium_warning",
            "tibe_mil_tiberium_warning_noShadow"
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "tibe_main",
        };
        author = ECSTRING(main,modteam);
        authors[] = {"Brostrom.A (Evul)"};
        url = ECSTRING(main,url);
        VERSION_CONFIG;
    };
};

#include "CfgMarkers.hpp"
