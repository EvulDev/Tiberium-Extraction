#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            "tibe_flag_gdi_00_f",
            "tibe_flag_gdi_00_battered_f",
            "tibe_banner_gdi_00_f",
            "tibe_flag_gdi_01_f",
            "tibe_flag_gdi_01_battered_f",
            "tibe_banner_gdi_01_f",
            "tibe_flag_gdi_02_f",
            "tibe_flag_gdi_02_battered_f",
            "tibe_banner_gdi_02_f",
            "tibe_flag_nod_00_f",
            "tibe_flag_nod_00_battered_f",
            "tibe_banner_nod_00_f",
            "tibe_flag_nod_01_f",
            "tibe_flag_nod_01_battered_f",
            "tibe_banner_nod_01_f"
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
