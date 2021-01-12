#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {
            "tibe_h_beret_gdi_00_f",
            "tibe_h_beret_nod_00_f",
            "tibe_h_beret_nod_01_f"
        };
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

#include "CfgWeapons.hpp"
