
class CfgVehicles {
    class FlagCarrier;
    class Banner_01_base_F;

    class tibe_flag_gdi_00_f : FlagCarrier {
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(gdi_00);
        author = ECSTRING(main,modteam);
        //editorPreview = QPATHTOF(EditorPreviews\tibe_flag_gdi_00_f.jpg);

        class EventHandlers {
            init = (_this select 0) setFlagTexture QPATHTOF(data\tibe_flag_gdi_00_co.paa);
        };
    };
    class tibe_banner_gdi_00_f : Banner_01_base_F {
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Banner_GDI_00);
        author = ECSTRING(main,modteam);
        //editorPreview = QPATHTOF(EditorPreviews\tibe_Banner_GDI_00_F.jpg);

        hiddenSelectionsTextures[] = {
            QPATHTOF(data\tibe_flag_gdi_00_co.paa)
        };
    };
    
    class tibe_flag_gdi_01_f : FlagCarrier {
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(gdi_01);
        author = ECSTRING(main,modteam);
        //editorPreview = QPATHTOF(EditorPreviews\tibe_flag_gdi_01_f.jpg);

        class EventHandlers {
            init = (_this select 0) setFlagTexture QPATHTOF(data\tibe_flag_gdi_01_co.paa);
        };
    };
    class tibe_banner_gdi_01_f : Banner_01_base_F {
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Banner_GDI_01);
        author = ECSTRING(main,modteam);
        //editorPreview = QPATHTOF(EditorPreviews\tibe_Banner_GDI_01_F.jpg);

        hiddenSelectionsTextures[] = {
            QPATHTOF(data\tibe_flag_gdi_01_co.paa)
        };
    };

    class tibe_flag_gdi_02_f : FlagCarrier {
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(gdi_02);
        author = ECSTRING(main,modteam);
        //editorPreview = QPATHTOF(EditorPreviews\tibe_flag_gdi_02_f.jpg);

        class EventHandlers {
            init = (_this select 0) setFlagTexture QPATHTOF(data\tibe_flag_gdi_02_co.paa);
        };
    };
    class tibe_banner_gdi_02_f : Banner_01_base_F {
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Banner_GDI_02);
        author = ECSTRING(main,modteam);
        //editorPreview = QPATHTOF(EditorPreviews\tibe_Banner_GDI_02_F.jpg);

        hiddenSelectionsTextures[] = {
            QPATHTOF(data\tibe_flag_gdi_02_co.paa)
        };
    };

    class tibe_flag_nod_00_f : FlagCarrier {
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(nod_00);
        author = ECSTRING(main,modteam);
        //editorPreview = QPATHTOF(EditorPreviews\tibe_flag_nod_00_f.jpg);

        class EventHandlers {
            init = (_this select 0) setFlagTexture QPATHTOF(data\tibe_flag_nod_00_co.paa);
        };
    };
    class tibe_banner_nod_00_f : Banner_01_base_F {
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(banner_nod_00);
        author = ECSTRING(main,modteam);
        //editorPreview = QPATHTOF(EditorPreviews\tibe_banner_nod_00_f.jpg);

        hiddenSelectionsTextures[] = {
            QPATHTOF(data\tibe_flag_nod_00_co.paa)
        };
    };

    class tibe_flag_nod_01_f : FlagCarrier {
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(nod_01);
        author = ECSTRING(main,modteam);
        //editorPreview = QPATHTOF(EditorPreviews\tibe_flag_nod_01_f.jpg);

        class EventHandlers {
            init = (_this select 0) setFlagTexture QPATHTOF(data\tibe_flag_nod_01_co.paa);
        };
    };
    class tibe_banner_nod_01_f : Banner_01_base_F {
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(banner_nod_01);
        author = ECSTRING(main,modteam);
        //editorPreview = QPATHTOF(EditorPreviews\tibe_banner_nod_01_f.jpg);

        hiddenSelectionsTextures[] = {
            QPATHTOF(data\tibe_flag_nod_01_co.paa)
        };
    };
};