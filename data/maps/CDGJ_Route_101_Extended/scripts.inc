CDGJ_Route_101_Extended_MapScripts::
	.byte 0


CDGJ_Route_101_Extended_EventScript_TrainerBattle1::
# 4 "data/maps/CDGJ_Route_101_Extended/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_SEAFLOOR_CAVERN_4, CDGJ_Route_101_Extended_EventScript_TrainerBattle1_Text_0, CDGJ_Route_101_Extended_EventScript_TrainerBattle1_Text_1
# 10 "data/maps/CDGJ_Route_101_Extended/scripts.pory"
	msgbox CDGJ_Route_101_Extended_EventScript_TrainerBattle1_Text_2
# 11 "data/maps/CDGJ_Route_101_Extended/scripts.pory"
	waitmessage
# 12 "data/maps/CDGJ_Route_101_Extended/scripts.pory"
	closemessage
	end


CDGJ_Route_101_Extended_EventScript_TrainerBattle2::
# 18 "data/maps/CDGJ_Route_101_Extended/scripts.pory"
	trainerbattle_single TRAINER_ALBERTO, CDGJ_Route_101_Extended_EventScript_TrainerBattle1_Text_0, CDGJ_Route_101_Extended_EventScript_TrainerBattle1_Text_1
# 24 "data/maps/CDGJ_Route_101_Extended/scripts.pory"
	msgbox CDGJ_Route_101_Extended_EventScript_TrainerBattle1_Text_2
# 25 "data/maps/CDGJ_Route_101_Extended/scripts.pory"
	waitmessage
# 26 "data/maps/CDGJ_Route_101_Extended/scripts.pory"
	closemessage
	end


CDGJ_Route_101_Extended_EventScript_TrainerBattle3::
# 32 "data/maps/CDGJ_Route_101_Extended/scripts.pory"
	trainerbattle_single TRAINER_ED, CDGJ_Route_101_Extended_EventScript_TrainerBattle1_Text_0, CDGJ_Route_101_Extended_EventScript_TrainerBattle1_Text_1
# 38 "data/maps/CDGJ_Route_101_Extended/scripts.pory"
	msgbox CDGJ_Route_101_Extended_EventScript_TrainerBattle1_Text_2
# 39 "data/maps/CDGJ_Route_101_Extended/scripts.pory"
	waitmessage
# 40 "data/maps/CDGJ_Route_101_Extended/scripts.pory"
	closemessage
	end


CDGJ_Route_101_Extended_EventScript_BikePerson_Dialogue::
# 46 "data/maps/CDGJ_Route_101_Extended/scripts.pory"
	applymovement LOCALID_MP_BIKEPERSON, FacePlayer
# 48 "data/maps/CDGJ_Route_101_Extended/scripts.pory"
	goto_if_set FLAG_CDGJ_MACH_BIKE_GET, CDGJ_Route_101_Extended_EventScript_BikePerson_Dialogue_2
# 51 "data/maps/CDGJ_Route_101_Extended/scripts.pory"
	msgbox CDGJ_Route_101_Extended_EventScript_BikePerson_Dialogue_Text_1
# 54 "data/maps/CDGJ_Route_101_Extended/scripts.pory"
	giveitem ITEM_MACH_BIKE
# 55 "data/maps/CDGJ_Route_101_Extended/scripts.pory"
	setflag FLAG_CDGJ_MACH_BIKE_GET
CDGJ_Route_101_Extended_EventScript_BikePerson_Dialogue_1:
# 58 "data/maps/CDGJ_Route_101_Extended/scripts.pory"
	waitmessage
# 59 "data/maps/CDGJ_Route_101_Extended/scripts.pory"
	closemessage
# 61 "data/maps/CDGJ_Route_101_Extended/scripts.pory"
	releaseall
	end

CDGJ_Route_101_Extended_EventScript_BikePerson_Dialogue_2:
# 49 "data/maps/CDGJ_Route_101_Extended/scripts.pory"
	msgbox CDGJ_Route_101_Extended_EventScript_BikePerson_Dialogue_Text_0
	goto CDGJ_Route_101_Extended_EventScript_BikePerson_Dialogue_1


CDGJ_Route_101_Extended_EventScript_LedgePerson_Dialogue::
# 67 "data/maps/CDGJ_Route_101_Extended/scripts.pory"
	applymovement LOCALID_HELP_GO_DOWN, FacePlayer
# 69 "data/maps/CDGJ_Route_101_Extended/scripts.pory"
	msgbox CDGJ_Route_101_Extended_EventScript_LedgePerson_Dialogue_Text_0
# 71 "data/maps/CDGJ_Route_101_Extended/scripts.pory"
	waitmessage
# 72 "data/maps/CDGJ_Route_101_Extended/scripts.pory"
	closemessage
# 74 "data/maps/CDGJ_Route_101_Extended/scripts.pory"
	applymovement LOCALID_HELP_GO_DOWN, FaceDown
# 76 "data/maps/CDGJ_Route_101_Extended/scripts.pory"
	releaseall
	end


CDGJ_Route_101_Extended_EventScript_Item1::
# 82 "data/maps/CDGJ_Route_101_Extended/scripts.pory"
	giveitem ITEM_LIFE_ORB, 1
# 83 "data/maps/CDGJ_Route_101_Extended/scripts.pory"
	waitmessage
# 84 "data/maps/CDGJ_Route_101_Extended/scripts.pory"
	closemessage
# 86 "data/maps/CDGJ_Route_101_Extended/scripts.pory"
	setflag FLAG_CDGJ_OBTAIN_MOUNTAINPASS_ITEM1
# 88 "data/maps/CDGJ_Route_101_Extended/scripts.pory"
	removeobject LOCALID_MP_ITEM1
	end


CDGJ_Route_101_Extended_EventScript_Item2::
# 95 "data/maps/CDGJ_Route_101_Extended/scripts.pory"
	giveitem ITEM_KINGS_ROCK, 1
# 96 "data/maps/CDGJ_Route_101_Extended/scripts.pory"
	waitmessage
# 97 "data/maps/CDGJ_Route_101_Extended/scripts.pory"
	closemessage
# 99 "data/maps/CDGJ_Route_101_Extended/scripts.pory"
	setflag FLAG_CDGJ_OBTAIN_MOUNTAINPASS_ITEM2
# 101 "data/maps/CDGJ_Route_101_Extended/scripts.pory"
	removeobject LOCALID_MP_ITEM2
	end


CDGJ_Route_101_Extended_EventScript_Item3::
# 108 "data/maps/CDGJ_Route_101_Extended/scripts.pory"
	giveitem ITEM_LEFTOVERS, 1
# 109 "data/maps/CDGJ_Route_101_Extended/scripts.pory"
	waitmessage
# 110 "data/maps/CDGJ_Route_101_Extended/scripts.pory"
	closemessage
# 112 "data/maps/CDGJ_Route_101_Extended/scripts.pory"
	setflag FLAG_CDGJ_OBTAIN_MOUNTAINPASS_ITEM3
# 114 "data/maps/CDGJ_Route_101_Extended/scripts.pory"
	removeobject LOCALID_MP_ITEM3
	end


CDGJ_Route_101_Extended_EventScript_TrainerBattle1_Text_0:
# 6 "data/maps/CDGJ_Route_101_Extended/scripts.pory"
	.string "You're a new trainer, right? Me too!$"

CDGJ_Route_101_Extended_EventScript_TrainerBattle1_Text_1:
# 7 "data/maps/CDGJ_Route_101_Extended/scripts.pory"
	.string "Wow! Your Pokémon trusts you already.$"

CDGJ_Route_101_Extended_EventScript_TrainerBattle1_Text_2:
# 10 "data/maps/CDGJ_Route_101_Extended/scripts.pory"
	.string "Good luck out there! Catch'em all!$"

CDGJ_Route_101_Extended_EventScript_BikePerson_Dialogue_Text_0:
# 49 "data/maps/CDGJ_Route_101_Extended/scripts.pory"
	.string "I didn't even want a bike.\nI wanted a car!$"

CDGJ_Route_101_Extended_EventScript_BikePerson_Dialogue_Text_1:
# 51 "data/maps/CDGJ_Route_101_Extended/scripts.pory"
	.string "Bikers get injured on this trail all\nthe time. I'm too scared to ride\pmy own bike here. Here, you take it.$"

CDGJ_Route_101_Extended_EventScript_LedgePerson_Dialogue_Text_0:
# 69 "data/maps/CDGJ_Route_101_Extended/scripts.pory"
	.string "Jumping down this ledge will get you\nback to Merriwave Town.\pBut be careful because it's not\nso straightfoward back up!$"
