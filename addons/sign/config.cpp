#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            "tibe_land_sign_tiberiumdanger_english_black_F",
            "tibe_land_sign_tiberiumdanger_english_black_old_F",
            "tibe_land_sign_tiberiumdanger_english_green_F",
            "tibe_land_sign_tiberiumdanger_english_green_old_F",
            "tibe_land_sign_milnoentry_gdi_english_F",
            "tibe_land_sign_milnoentry_gdi_english_old_F",
            "tibe_land_sign_zonered_english_F",
            "tibe_land_sign_zonered_english_old_F",
            "tibe_land_sign_zoneyellow_english_F",
            "tibe_land_sign_zonedanger_english_F", // Depricated
            "tibe_land_sign_zoneyellow_english_old_F",
            "tibe_land_sign_zonedanger_english_old_F", // Depricated
            "tibe_land_sign_zoneblue_english_F",
            "tibe_land_sign_zoneblue_english_old_F",
            "tibe_land_sign_checkpoint_gdi_english_F",
            "tibe_land_sign_checkpoint_gdi_english_old_F",
            "tibe_land_sign_tiberiumstorage_english_F",
            "tibe_land_sign_tiberianstorage_english_F", // Depricated
            "tibe_land_sign_tiberium_english_F",
            "tibe_land_sign_tiberiumtall_english_F"
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
