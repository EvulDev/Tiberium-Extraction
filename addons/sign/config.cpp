#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            "tibe_land_sign_tiberiumdanger_english_black_F",
            "tibe_land_sign_tiberiumdanger_english_green_F",
            "tibe_land_sign_zonedanger_english_F",
            "tibe_land_sign_zonedanger_english_old_F"
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
