static Object SpawnObject(string type, vector position, vector orientation, float scale = 1.0)
{
    Object obj = GetGame().CreateObjectEx(type, position, ECE_SETUP | ECE_UPDATEPATHGRAPH | ECE_CREATEPHYSICS);
    if (!obj) {
        Error("Failed to create object " + type);
        return null;
    }

    obj.SetPosition(position);
    obj.SetOrientation(orientation);
    obj.SetOrientation(obj.GetOrientation());
    obj.SetScale(scale);
    obj.Update();
	obj.SetAffectPathgraph(true, false);
	if (obj.CanAffectPathgraph()) {
        GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).CallLater(GetGame().UpdatePathgraphRegionByObject, 100, false, obj);
    } 

    return obj;
}

// Paste anything below this line into the bottom of your 'void main()' function


// Created Objects
SpawnObject("Land_House_1W01", "4536.177246 17.626770 11042.514648", "-3.600006 0.000000 0.000000", 0.999999);
SpawnObject("Land_House_1W03", "4549.199219 18.008514 11004.554688", "173.360977 0.000000 -0.000000", 0.999999);
SpawnObject("Land_House_1W05", "4532.853027 18.833488 11002.984375", "173.198624 0.000000 -0.000000", 0.999997);
SpawnObject("Land_Misc_FeedShack", "4568.739746 18.131689 10977.322266", "-0.000047 0.000000 0.000000", 0.999999);
SpawnObject("StaticObj_Wall_Wood1_5_2", "4551.102051 14.668509 11021.046875", "80.999924 -0.000000 -0.000000", 1);
SpawnObject("Land_Shed_M1", "4547.279785 15.764341 11026.618164", "0.000000 -0.000000 -0.000000", 0.999999);
SpawnObject("Land_Misc_Toilet_Dry", "4552.910156 16.191809 11026.799805", "-94.933594 0.000000 0.000000", 0.99999);
SpawnObject("StaticObj_Wall_Wood1_5_2", "4551.870117 14.648100 11016.099609", "80.999901 0.000000 0.000000", 1);
SpawnObject("StaticObj_Wall_Wood1_5_2", "4550.330078 14.676970 11025.924805", "80.999901 0.000000 0.000000", 1);
SpawnObject("Land_Power_Station", "4439.939941 16.325754 11050.200195", "160.199982 0.000000 0.000000", 0.999997);
SpawnObject("Land_Power_Transformer_Build", "4463.941895 22.117874 10966.034180", "71.999756 -3.257604 4.049052", 0.998617);
SpawnObject("Land_Slum_House4", "4396.703125 14.840006 11038.255859", "-99.000122 -0.104876 -0.076198", 0.999998);
SpawnObject("Land_Misc_Greenhouse", "4519.847656 15.573092 11052.673828", "-179.999893 4.789497 0.000004", 0.998809);
SpawnObject("Land_House_1W06", "4545.197266 18.416401 10933.081055", "170.999832 0.000000 -0.000000", 1);
SpawnObject("Land_House_1W10", "4492.489258 16.991693 11027.538086", "98.999931 0.000000 -0.000000", 1);
SpawnObject("Land_Village_store", "4531.825684 18.349855 10983.735352", "-96.231659 3.605709 -0.579129", 0.999318);
SpawnObject("Land_Village_HealthCare", "4512.717773 18.286785 11021.598633", "-175.984436 4.078171 -0.903969", 0.999106);
SpawnObject("StaticObj_Wall_Wood1_5_2", "4524.605957 15.793715 10992.809570", "-6.288001 -0.000000 -0.000000", 0.999999);
SpawnObject("StaticObj_Wall_Wood1_5_2", "4529.524414 15.751314 10993.333008", "-6.288001 -0.000000 -0.000000", 0.999999);
SpawnObject("StaticObj_Wall_Wood1_5_2", "4534.432129 15.732523 10993.853516", "-6.288001 -0.000000 -0.000000", 0.999999);
SpawnObject("Land_Shed_M3", "4521.529297 17.324095 10994.597656", "-99.000015 0.000000 -0.000000", 1);
SpawnObject("Land_Shed_W6", "4557.877930 16.603786 10968.098633", "170.011520 -0.759416 0.971463", 0.999933);
SpawnObject("StaticObj_Wall_IndCnc_4_D", "4526.791504 15.622346 11014.715820", "6.940677 -0.000000 -0.000000", 0.999996);
SpawnObject("StaticObj_Wall_IndCnc_4", "4532.717773 15.580093 11014.215820", "3.836895 -0.000000 -0.000000", 0.999997);
SpawnObject("StaticObj_Wall_IndCnc_4", "4535.358887 15.586149 11016.875000", "-99.504219 0.000000 -0.000000", 1);
SpawnObject("StaticObj_Wall_IndCnc_4_D", "4534.365234 15.546603 11022.797852", "-100.678871 0.000000 0.000000", 0.999999);
SpawnObject("StaticObj_Wall_IndCnc_4_D", "4532.905762 15.534707 11028.547852", "-108.000046 0.000000 -0.000000", 1);
SpawnObject("StaticObj_Wall_IndVar1_5_D_2", "4528.965820 15.459891 11030.842773", "-9.000010 0.000000 0.000000", 0.999998);
SpawnObject("StaticObj_Furniture_hospital_transport_bed", "4525.393066 15.044138 11018.369141", "-152.999908 0.000000 -0.000000", 1);
SpawnObject("StaticObj_Furniture_hospital_transport_bed", "4526.042969 14.980774 11020.204102", "-107.999855 0.000000 -0.000000", 1);
SpawnObject("StaticObj_Furniture_hospital_transport_bed", "4525.382813 14.966518 11021.502930", "162.000092 0.000000 -0.000000", 1);
SpawnObject("StaticObj_Garbage_Container_Paper", "4534.236816 15.081224 11015.935547", "35.999977 -0.000000 -0.000000", 1);
SpawnObject("StaticObj_Garbage_Container_Plastic", "4531.987305 15.110230 11015.291016", "80.999977 -0.000000 -0.000000", 1);
SpawnObject("StaticObj_Garbage_Container", "4529.376953 15.167871 11015.405273", "-89.999954 0.000000 0.000000", 1);
SpawnObject("StaticObj_Garbage_Pile6", "4530.835938 15.063663 11027.788086", "62.999947 -0.000000 -0.000000", 1);
SpawnObject("bldr_Garbage_Container2_Open", "4533.368652 15.367119 11019.211914", "-108.000046 0.000000 -0.000000", 1);
SpawnObject("StaticObj_Forest_HumanSkeleton", "4526.878418 14.893145 11018.209961", "152.999802 0.000000 -0.000000", 1);
SpawnObject("StaticObj_Forest_HumanSkeleton", "4530.285156 14.758239 11025.546875", "-18.000151 0.000000 0.000000", 1);
SpawnObject("bldr_Dead_pile3", "4532.179199 14.895157 11022.400391", "71.020744 -0.000000 -0.000000", 0.999999);
SpawnObject("land_wrecked_ural", "4474.910156 13.243349 11107.400391", "149.399963 0.000000 0.000000", 0.999999);
SpawnObject("land_wrecked_ural_onside", "4476.979980 13.223389 11095.799805", "170.999985 0.000000 0.000000", 0.999999);
SpawnObject("land_wrecked_ural_onside", "4479.173340 13.974700 11084.826172", "-148.913162 0.000000 -0.000000", 1);
SpawnObject("land_wrecked_uaz", "4473.985840 12.607738 11113.872070", "-162.000092 0.000000 -0.000000", 1);
SpawnObject("land_wrecked_uaz", "4480.288574 13.487522 11074.566406", "162.000061 3.750875 -0.549957", 0.999265);
SpawnObject("Land_House_1B01_Pub", "4614.652344 17.982479 11036.890625", "89.999817 -0.000000 -0.000000", 1);


// Uncomment if you want to export loot from newly added buildings
// Position, Radius (increase if you have a larger map than Chernarus)
// GetCEApi().ExportProxyData(Vector(7500, GetGame().SurfaceY(7500, 7500), 7500), 20000);
