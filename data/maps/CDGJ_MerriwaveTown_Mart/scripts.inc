CDGJ_MerriwaveTown_Mart_MapScripts::
	.byte 0


	.align 2
# 3 "data/maps/CDGJ_MerriwaveTown_Mart/scripts.pory"
CDGJ_MerriwaveTown_Mart_Items:
# 4 "data/maps/CDGJ_MerriwaveTown_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 5 "data/maps/CDGJ_MerriwaveTown_Mart/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 6 "data/maps/CDGJ_MerriwaveTown_Mart/scripts.pory"
	.2byte ITEM_POTION
# 7 "data/maps/CDGJ_MerriwaveTown_Mart/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 8 "data/maps/CDGJ_MerriwaveTown_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 9 "data/maps/CDGJ_MerriwaveTown_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 10 "data/maps/CDGJ_MerriwaveTown_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
# 11 "data/maps/CDGJ_MerriwaveTown_Mart/scripts.pory"
	.2byte ITEM_REPEL
# 12 "data/maps/CDGJ_MerriwaveTown_Mart/scripts.pory"
	.2byte ITEM_SUPER_REPEL
	.2byte ITEM_NONE

CDGJ_MerriwaveTown_Mart_Clerk::
# 16 "data/maps/CDGJ_MerriwaveTown_Mart/scripts.pory"
	lock
# 17 "data/maps/CDGJ_MerriwaveTown_Mart/scripts.pory"
	faceplayer
# 19 "data/maps/CDGJ_MerriwaveTown_Mart/scripts.pory"
	pokemart CDGJ_MerriwaveTown_Mart_Items
# 21 "data/maps/CDGJ_MerriwaveTown_Mart/scripts.pory"
	msgbox CDGJ_MerriwaveTown_Mart_Clerk_Text_0
# 23 "data/maps/CDGJ_MerriwaveTown_Mart/scripts.pory"
	release
	end


CDGJ_MerriwaveTown_Mart_EventScript_1::
# 28 "data/maps/CDGJ_MerriwaveTown_Mart/scripts.pory"
	faceplayer
# 29 "data/maps/CDGJ_MerriwaveTown_Mart/scripts.pory"
	msgbox CDGJ_MerriwaveTown_Mart_EventScript_1_Text_0
# 30 "data/maps/CDGJ_MerriwaveTown_Mart/scripts.pory"
	waitmessage
# 31 "data/maps/CDGJ_MerriwaveTown_Mart/scripts.pory"
	closemessage
# 32 "data/maps/CDGJ_MerriwaveTown_Mart/scripts.pory"
	release
	return


CDGJ_MerriwaveTown_Mart_EventScript_2::
# 36 "data/maps/CDGJ_MerriwaveTown_Mart/scripts.pory"
	faceplayer
# 37 "data/maps/CDGJ_MerriwaveTown_Mart/scripts.pory"
	msgbox CDGJ_MerriwaveTown_Mart_EventScript_2_Text_0
# 38 "data/maps/CDGJ_MerriwaveTown_Mart/scripts.pory"
	waitmessage
# 39 "data/maps/CDGJ_MerriwaveTown_Mart/scripts.pory"
	closemessage
# 40 "data/maps/CDGJ_MerriwaveTown_Mart/scripts.pory"
	release
	return


CDGJ_MerriwaveTown_Mart_Clerk_Text_0:
# 21 "data/maps/CDGJ_MerriwaveTown_Mart/scripts.pory"
	.string "Come again!$"

CDGJ_MerriwaveTown_Mart_EventScript_1_Text_0:
# 29 "data/maps/CDGJ_MerriwaveTown_Mart/scripts.pory"
	.string "Need to get some snacks for\nthe festival!$"

CDGJ_MerriwaveTown_Mart_EventScript_2_Text_0:
# 37 "data/maps/CDGJ_MerriwaveTown_Mart/scripts.pory"
	.string "I can't stand the festival.\nI hate fun.\pWhich aisle has the earplugs?$"
