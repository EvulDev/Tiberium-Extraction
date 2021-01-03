class CfgMarkers {
    class flag_NATO;
    class tibe_flag_gdi_00 : flag_NATO {
        name = CSTRING(flag_gdi_00);
        icon = QPATHTOF(data\tibe_flag_gdi_00_co.paa);
        texture = QPATHTOF(data\tibe_flag_gdi_00_co.paa);
    };
    class tibe_flag_gdi_01 : flag_NATO {
        name = CSTRING(flag_gdi_01);
        icon = QPATHTOF(data\tibe_flag_gdi_01_co.paa);
        texture = QPATHTOF(data\tibe_flag_gdi_01_co.paa);
    };
    class tibe_flag_nod_00 : flag_NATO {
        name = CSTRING(flag_nod_00);
        icon = QPATHTOF(data\tibe_flag_nod_00_co.paa);
        texture = QPATHTOF(data\tibe_flag_nod_00_co.paa);
    };
    class tibe_flag_nod_01 : flag_NATO {
        name = CSTRING(flag_nod_01);
        icon = QPATHTOF(data\tibe_flag_nod_01_co.paa);
        texture = QPATHTOF(data\tibe_flag_nod_01_co.paa);
    };

    class mil_objective;
    class tibe_mil_tiberium_warning : mil_objective {
        name = CSTRING(military_tiberium_warning);
        icon = QPATHTOF(data\tibe_tiberium_warning_co.paa);
    };
    class tibe_mil_tiberium_warning_noShadow: tibe_mil_tiberium_warning {
        scope = 0;
        shadow = 0;
    };
};