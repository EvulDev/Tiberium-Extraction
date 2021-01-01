#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            "tib_banner_gdi_00_f",
            "tib_banner_nod_00_f",
            "tib_banner_nod_01_f"
            "tib_flag_gdi_00_f",
            "tib_flag_nod_00_f",
            "tib_flag_nod_01_f",
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "tib_main",
        };
        author = ECSTRING(main,modteam);
        authors[] = {"Brostrom.A (Evul)"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"
