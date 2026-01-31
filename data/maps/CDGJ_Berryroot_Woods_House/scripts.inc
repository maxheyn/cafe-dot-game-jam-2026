CDGJ_Berryroot_Woods_House_MapScripts::
	.byte 0


CDGJ_Berryroot_Woods_House_EventScript_Dialogue1::
# 4 "data/maps/CDGJ_Berryroot_Woods_House/scripts.pory"
	faceplayer
# 6 "data/maps/CDGJ_Berryroot_Woods_House/scripts.pory"
	goto_if_set FLAG_CDGJ_BERRYBOYITEMSGOT, CDGJ_Berryroot_Woods_House_EventScript_Dialogue1_2
# 9 "data/maps/CDGJ_Berryroot_Woods_House/scripts.pory"
	msgbox CDGJ_Berryroot_Woods_House_EventScript_Dialogue1_Text_1
# 11 "data/maps/CDGJ_Berryroot_Woods_House/scripts.pory"
	giveitem ITEM_FIGY_BERRY
# 12 "data/maps/CDGJ_Berryroot_Woods_House/scripts.pory"
	giveitem ITEM_WIKI_BERRY
# 13 "data/maps/CDGJ_Berryroot_Woods_House/scripts.pory"
	giveitem ITEM_MAGO_BERRY
# 14 "data/maps/CDGJ_Berryroot_Woods_House/scripts.pory"
	giveitem ITEM_AGUAV_BERRY
# 15 "data/maps/CDGJ_Berryroot_Woods_House/scripts.pory"
	giveitem ITEM_IAPAPA_BERRY
# 17 "data/maps/CDGJ_Berryroot_Woods_House/scripts.pory"
	setflag FLAG_CDGJ_BERRYBOYITEMSGOT
# 19 "data/maps/CDGJ_Berryroot_Woods_House/scripts.pory"
	msgbox CDGJ_Berryroot_Woods_House_EventScript_Dialogue1_Text_2
CDGJ_Berryroot_Woods_House_EventScript_Dialogue1_1:
# 22 "data/maps/CDGJ_Berryroot_Woods_House/scripts.pory"
	waitmessage
# 23 "data/maps/CDGJ_Berryroot_Woods_House/scripts.pory"
	closemessage
# 24 "data/maps/CDGJ_Berryroot_Woods_House/scripts.pory"
	release
	return

CDGJ_Berryroot_Woods_House_EventScript_Dialogue1_2:
# 7 "data/maps/CDGJ_Berryroot_Woods_House/scripts.pory"
	msgbox CDGJ_Berryroot_Woods_House_EventScript_Dialogue1_Text_0
	goto CDGJ_Berryroot_Woods_House_EventScript_Dialogue1_1


CDGJ_Berryroot_Woods_House_EventScript_Dialogue2::
# 28 "data/maps/CDGJ_Berryroot_Woods_House/scripts.pory"
	faceplayer
# 30 "data/maps/CDGJ_Berryroot_Woods_House/scripts.pory"
	goto_if_set FLAG_CDGJ_BERRYGIRLITEMSGOT, CDGJ_Berryroot_Woods_House_EventScript_Dialogue2_2
# 33 "data/maps/CDGJ_Berryroot_Woods_House/scripts.pory"
	msgbox CDGJ_Berryroot_Woods_House_EventScript_Dialogue2_Text_1
# 35 "data/maps/CDGJ_Berryroot_Woods_House/scripts.pory"
	giveitem ITEM_SITRUS_BERRY, 2
# 36 "data/maps/CDGJ_Berryroot_Woods_House/scripts.pory"
	giveitem ITEM_COLBUR_BERRY, 2
# 38 "data/maps/CDGJ_Berryroot_Woods_House/scripts.pory"
	setflag FLAG_CDGJ_BERRYGIRLITEMSGOT
# 40 "data/maps/CDGJ_Berryroot_Woods_House/scripts.pory"
	msgbox CDGJ_Berryroot_Woods_House_EventScript_Dialogue2_Text_2
CDGJ_Berryroot_Woods_House_EventScript_Dialogue2_1:
# 43 "data/maps/CDGJ_Berryroot_Woods_House/scripts.pory"
	waitmessage
# 44 "data/maps/CDGJ_Berryroot_Woods_House/scripts.pory"
	closemessage
# 45 "data/maps/CDGJ_Berryroot_Woods_House/scripts.pory"
	release
	return

CDGJ_Berryroot_Woods_House_EventScript_Dialogue2_2:
# 31 "data/maps/CDGJ_Berryroot_Woods_House/scripts.pory"
	msgbox CDGJ_Berryroot_Woods_House_EventScript_Dialogue2_Text_0
	goto CDGJ_Berryroot_Woods_House_EventScript_Dialogue2_1


CDGJ_Berryroot_Woods_House_EventScript_Dialogue1_Text_0:
# 7 "data/maps/CDGJ_Berryroot_Woods_House/scripts.pory"
	.string "We go out every week to grab all\nof the berries before anyone else!$"

CDGJ_Berryroot_Woods_House_EventScript_Dialogue1_Text_1:
# 9 "data/maps/CDGJ_Berryroot_Woods_House/scripts.pory"
	.string "My sister and I just finished picking\nfresh berries! We got all of\pthem! But sister says I should\nshare. So here you go!$"

CDGJ_Berryroot_Woods_House_EventScript_Dialogue1_Text_2:
# 19 "data/maps/CDGJ_Berryroot_Woods_House/scripts.pory"
	.string "Enjoy our pickings!$"

CDGJ_Berryroot_Woods_House_EventScript_Dialogue2_Text_0:
# 31 "data/maps/CDGJ_Berryroot_Woods_House/scripts.pory"
	.string "I try to sneak some berries from\nlittle brother but he's just too quick.$"

CDGJ_Berryroot_Woods_House_EventScript_Dialogue2_Text_1:
# 33 "data/maps/CDGJ_Berryroot_Woods_House/scripts.pory"
	.string "Lil' brother here took most of the\nberries! But look I found some too!$"

CDGJ_Berryroot_Woods_House_EventScript_Dialogue2_Text_2:
# 40 "data/maps/CDGJ_Berryroot_Woods_House/scripts.pory"
	.string "These don't taste that good but maybe\nyour Pokémon will like them!$"
