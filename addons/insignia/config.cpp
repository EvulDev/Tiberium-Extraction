#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            "tibe_insignia_gdi_00_f",
            "tibe_insignia_gdi_01_f",
            "tibe_insignia_gdi_02_f",
            "tibe_insignia_gdi_03_f",
            "tibe_insignia_nod_00_f",
            "tibe_insignia_nod_01_f",
            "tibe_insignia_nod_02_f"
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "tibe_main",
        };
        author = ECSTRING(main,modteam);
        authors[] = {
            "Brostrom.A (Evul)",
            "Deso"
        };
        url = ECSTRING(main,url);
        VERSION_CONFIG;
    };
};

#include "CfgUnitInsignia.hpp"
