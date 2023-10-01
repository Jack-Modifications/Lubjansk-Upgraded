# Lubjansk-Upgraded
DAYZ MOD - NAMALSK MAP ADDON

*My Discord is work in progress, so if there are any issues, I think you can create something under the issues section on here.*

**_HOW TO INSTALL:_** ***(You will have multiple installation options.)***

**1. If you choose to install the map using the `DayZ Editor Loader` please follow these instructions.**

 If you have DayZ Editor Loader on your server then extract "LUBJANSK-UPGRADE.dze" to the "EditorFiles" folder.

**2. IF you choose to install this via init.c you please follow these instructions.**

Go to your server "mpmissions" folder and open "?????????.namalsk" folder which your server use.

and then head over into `LUBJANSK-UPGRADE-MAPGROUPOS.xml` and copy the contents into your `mapgrouppos.xml` in your mpmission -> ????????.namalsk main directory. (I normally put it at the top in its own section.)

If you dont have DayZ Editor Loader then grab the `LUBJANSK-UPGRADE-INIT.c` and just put it in your mission folder and load it in your main "init.c" file like so:

Put this at the top of your init.c:
`#include "$CurrentDir:mpmissions/hardcore.namalsk/LUBJANSK-UPGRADE-INIT.c"`

and add this to the end in main function:
`SpawnLubjanskUpgraded();`

**SHOULD LOOK LIKE THIS BELOW:**
![image](https://github.com/Jack-Modifications/Lubjansk-Upgraded/assets/102194777/34caf20b-c4d2-4ea0-88e3-7c1b4ab5be6e)



\/ PREVIEW BELOW: \/

![20231001121456_1](https://github.com/Jack-Modifications/Lubjansk-Upgraded/assets/102194777/589159df-173d-400b-b8f4-fd3021c277c5)

![20231001120745_1](https://github.com/Jack-Modifications/Lubjansk-Upgraded/assets/102194777/6692693f-c70f-4e32-97e8-627ad668969f)

![20231001120758_1](https://github.com/Jack-Modifications/Lubjansk-Upgraded/assets/102194777/416a591e-d3f8-44e6-aef4-ffd5280d676e)
