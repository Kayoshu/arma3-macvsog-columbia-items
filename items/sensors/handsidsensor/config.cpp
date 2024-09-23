class CfgPatches
{
    class handsidsensor 
    {
        units[]={};
        weapons[]={};
        requiredVersion=0.1;
        requiredAddons[]={"A3_Characters_F"};
    }
}


class CfgMagazines
{
    class CA_Magazine;
    class colsog_inv_handsid_sensor: CA_Magazine
    {
        author = "Gerard";
        mass = 100;
        scope = 2;
        value = 1;
        displayName = "Handsid sensor";
        picture = "\handsidsensor\icons\icon.paa";
        model = "\handsidsensor\objects\handsidsensor.p3d";
        type = 256;
        count = 1;
        initSpeed = 18;
        nameSound = "handgrenade";
        maxLeadSpeed = 6.94444;
        descriptionShort = "Handsid sensor";
        displayNameShort = "Handsid sensor";
    };
};