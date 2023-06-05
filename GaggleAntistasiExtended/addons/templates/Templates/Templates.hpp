class Templates {
    class GM_Base; //import Vanilla_Base from A3A to use with defining a new vanilla template

    class Gaggle_GM_Reb : GM_Base
    {
        
        basepath = QPATHTOFOLDER(Templates\Gaggle); //the path to the folder the template is located in, this translates to "\x\A3AE\addons\templates\Templates\Vanilla"
        requiredAddons[] = {"gm_weapons_items","CUP_Creatures_People_Civil_Russia","CUP_BaseConfigs","CUP_AirVehicles_Core", "CUP_AirVehciles_Cessna"};
        side = "Reb"; //the side the faction defaults to, one of the following: Inv, Occ, Reb, Civ
        flagTexture = "\x\GaggleAntistasiExtended\addons\templates\pictures\Napa_Banner.paa"; //path to an icon to be displayed in the selector
        logo = "x\GaggleAntistasiExtended\addons\templates\pictures\Napa_logo.paa";
        name = "Näppä"; //the name shown in the selector
        file = "Gaggle_GM_Reb"; //the template file name
        maps[] = {}; //if this template should be prioritized on any maps (case sensetive to worldName)
        climate[] = {"arid", "arctic"}; //climate that the template is meant for
    };
};
