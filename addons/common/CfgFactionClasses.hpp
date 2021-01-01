class CfgFactionClasses {
    class tib_blu_gdi_f {
        displayName = CSTRING(faction_gdi);
        author = ECSTRING(main,modteam);
        flag = QEPATHTOF(flag,data\tib_flag_gdi_00_co.paa)
        icon = QPATHTOF(data\tib_faction_gdi_icon_ca.paa);
        priority = 0;
        side = 0;
    };
    class tib_opf_nod_f {
        displayName = CSTRING(faction_nod);
        author = ECSTRING(main,modteam);
        flag = QEPATHTOF(flag,data\tib_flag_nod_00_co.paa)
        icon = QPATHTOF(data\tib_faction_nod_icon_ca.paa);
        priority = 0;
        side = 1;
    };
};