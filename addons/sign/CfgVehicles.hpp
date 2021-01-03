
class CfgVehicles {
    class Land_Sign_WarningMilAreaSmall_F;
    class tibe_land_sign_tiberiumdanger_english_black_F : Land_Sign_WarningMilAreaSmall_F {
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(tiberiumdanger_english_black);
        author = ECSTRING(main,modteam);
        //editorPreview = QPATHTOF(EditorPreviews\tibe_flag_gdi_00_f.jpg);

        hiddenSelectionsTextures[] = {
            QPATHTOF(data\tibe_tiberiumdanger_english_black_co.paa)
        };
    };
    class tibe_land_sign_tiberiumdanger_english_green_F : Land_Sign_WarningMilAreaSmall_F {
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(tiberiumdanger_english_green);
        author = ECSTRING(main,modteam);
        //editorPreview = QPATHTOF(EditorPreviews\tibe_flag_gdi_00_f.jpg);

        hiddenSelectionsTextures[] = {
            QPATHTOF(data\tibe_tiberiumdanger_english_green_co.paa)
        };
    };
};