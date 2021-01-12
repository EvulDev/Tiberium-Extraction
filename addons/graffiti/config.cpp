#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            "tibe_logo_gdi_white_large_f",
            "tibe_logo_gdi_white_small_f",
            "tibe_logo_nod_white_large_f",
            "tibe_logo_nod_white_small_f"
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "tibe_main"
        };
        author = ECSTRING(main,modteam);
        authors[] = {"Brostrom.A (Evul)"};
        url = ECSTRING(main,url);
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"
