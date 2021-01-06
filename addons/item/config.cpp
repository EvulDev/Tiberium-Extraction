#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            "tibe_land_laptop_03_black_gdi_00_f",
            "tibe_land_laptop_03_olive_gdi_00_f",
            "tibe_land_laptop_03_sand_gdi_00_f",
            "tibe_land_laptop_03_closed_black_gdi_00_f",
            "tibe_land_laptop_03_closed_olive_gdi_00_f",
            "tibe_land_laptop_03_closed_sand_gdi_00_f"
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

#include "CfgVehicles.hpp"
