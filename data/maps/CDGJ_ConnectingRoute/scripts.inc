CDGJ_ConnectingRoute_MapScripts::
	.byte 0


CDGJ_ConnectingRoute_EventScript_TrainerBattle1::
# 5 "data/maps/CDGJ_ConnectingRoute/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_SPACE_CENTER_1, CDGJ_ConnectingRoute_EventScript_TrainerBattle1_Text_0, CDGJ_ConnectingRoute_EventScript_TrainerBattle1_Text_1
# 11 "data/maps/CDGJ_ConnectingRoute/scripts.pory"
	msgbox CDGJ_ConnectingRoute_EventScript_TrainerBattle1_Text_2
# 12 "data/maps/CDGJ_ConnectingRoute/scripts.pory"
	waitmessage
# 13 "data/maps/CDGJ_ConnectingRoute/scripts.pory"
	closemessage
	end


CDGJ_ConnectingRoute_EventScript_TrainerBattle2::
# 19 "data/maps/CDGJ_ConnectingRoute/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MT_PYRE_1, CDGJ_ConnectingRoute_EventScript_TrainerBattle2_Text_0, CDGJ_ConnectingRoute_EventScript_TrainerBattle2_Text_1
# 25 "data/maps/CDGJ_ConnectingRoute/scripts.pory"
	msgbox CDGJ_ConnectingRoute_EventScript_TrainerBattle2_Text_2
# 26 "data/maps/CDGJ_ConnectingRoute/scripts.pory"
	waitmessage
# 27 "data/maps/CDGJ_ConnectingRoute/scripts.pory"
	closemessage
	end


CDGJ_ConnectingRoute_EventScript_TrainerBattle3::
# 33 "data/maps/CDGJ_ConnectingRoute/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MT_PYRE_2, CDGJ_ConnectingRoute_EventScript_TrainerBattle3_Text_0, CDGJ_ConnectingRoute_EventScript_TrainerBattle3_Text_1
# 39 "data/maps/CDGJ_ConnectingRoute/scripts.pory"
	msgbox CDGJ_ConnectingRoute_EventScript_TrainerBattle3_Text_2
# 40 "data/maps/CDGJ_ConnectingRoute/scripts.pory"
	waitmessage
# 41 "data/maps/CDGJ_ConnectingRoute/scripts.pory"
	closemessage
	end


CDGJ_ConnectingRoute_EventScript_TrainerBattle4::
# 48 "data/maps/CDGJ_ConnectingRoute/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MT_PYRE_3, CDGJ_ConnectingRoute_EventScript_TrainerBattle4_Text_0, CDGJ_ConnectingRoute_EventScript_TrainerBattle4_Text_1
# 54 "data/maps/CDGJ_ConnectingRoute/scripts.pory"
	msgbox CDGJ_ConnectingRoute_EventScript_TrainerBattle4_Text_2
# 55 "data/maps/CDGJ_ConnectingRoute/scripts.pory"
	waitmessage
# 56 "data/maps/CDGJ_ConnectingRoute/scripts.pory"
	closemessage
	end


CDGJ_ConnectingRoute_EventScript_Nurse::
# 62 "data/maps/CDGJ_ConnectingRoute/scripts.pory"
	faceplayer
# 64 "data/maps/CDGJ_ConnectingRoute/scripts.pory"
	msgbox CDGJ_ConnectingRoute_EventScript_Nurse_Text_0, MSGBOX_YESNO
# 66 "data/maps/CDGJ_ConnectingRoute/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq CDGJ_ConnectingRoute_EventScript_Nurse_2
CDGJ_ConnectingRoute_EventScript_Nurse_1:
# 72 "data/maps/CDGJ_ConnectingRoute/scripts.pory"
	waitmessage
# 73 "data/maps/CDGJ_ConnectingRoute/scripts.pory"
	closemessage
# 75 "data/maps/CDGJ_ConnectingRoute/scripts.pory"
	release
	end

CDGJ_ConnectingRoute_EventScript_Nurse_2:
# 67 "data/maps/CDGJ_ConnectingRoute/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 69 "data/maps/CDGJ_ConnectingRoute/scripts.pory"
	msgbox CDGJ_ConnectingRoute_EventScript_Nurse_Text_1
	goto CDGJ_ConnectingRoute_EventScript_Nurse_1


CDGJ_ConnectingRoute_EventScript_Item1::
# 80 "data/maps/CDGJ_ConnectingRoute/scripts.pory"
	giveitem ITEM_FOCUS_SASH, 1
# 81 "data/maps/CDGJ_ConnectingRoute/scripts.pory"
	waitmessage
# 82 "data/maps/CDGJ_ConnectingRoute/scripts.pory"
	closemessage
# 84 "data/maps/CDGJ_ConnectingRoute/scripts.pory"
	setflag FLAG_CDGJ_FOCUSSASH_GET
# 86 "data/maps/CDGJ_ConnectingRoute/scripts.pory"
	removeobject LOCALID_ITEM_FOCUSSASH
	end


CDGJ_ConnectingRoute_EventScript_Item2::
# 92 "data/maps/CDGJ_ConnectingRoute/scripts.pory"
	giveitem ITEM_ROCKY_HELMET, 1
# 93 "data/maps/CDGJ_ConnectingRoute/scripts.pory"
	waitmessage
# 94 "data/maps/CDGJ_ConnectingRoute/scripts.pory"
	closemessage
# 96 "data/maps/CDGJ_ConnectingRoute/scripts.pory"
	setflag FLAG_CDGJ_ROCKYHELMET_GET
# 98 "data/maps/CDGJ_ConnectingRoute/scripts.pory"
	removeobject LOCALID_ITEM_ROCKYHELM
	end


CDGJ_ConnectingRoute_EventScript_LOCALID_TOLL_INFO::
# 104 "data/maps/CDGJ_ConnectingRoute/scripts.pory"
	applymovement LOCALID_TOLL_INFO, FacePlayer
# 105 "data/maps/CDGJ_ConnectingRoute/scripts.pory"
	msgbox CDGJ_ConnectingRoute_EventScript_LOCALID_TOLL_INFO_Text_0
# 106 "data/maps/CDGJ_ConnectingRoute/scripts.pory"
	waitmessage
# 107 "data/maps/CDGJ_ConnectingRoute/scripts.pory"
	closemessage
# 108 "data/maps/CDGJ_ConnectingRoute/scripts.pory"
	release
	return


CDGJ_ConnectingRoute_EventScript_LOCALID_CHORGOOGA::
# 112 "data/maps/CDGJ_ConnectingRoute/scripts.pory"
	applymovement LOCALID_CHORGOOGA, FacePlayer
# 113 "data/maps/CDGJ_ConnectingRoute/scripts.pory"
	msgbox CDGJ_ConnectingRoute_EventScript_LOCALID_CHORGOOGA_Text_0
# 114 "data/maps/CDGJ_ConnectingRoute/scripts.pory"
	waitmessage
# 115 "data/maps/CDGJ_ConnectingRoute/scripts.pory"
	closemessage
# 116 "data/maps/CDGJ_ConnectingRoute/scripts.pory"
	release
	return


CDGJ_ConnectingRoute_EventScript_TrainerBattle1_Text_0:
# 7 "data/maps/CDGJ_ConnectingRoute/scripts.pory"
	.string "This is where we build the corn maze!$"

CDGJ_ConnectingRoute_EventScript_TrainerBattle1_Text_1:
# 8 "data/maps/CDGJ_ConnectingRoute/scripts.pory"
	.string "I'm allergic to corn!$"

CDGJ_ConnectingRoute_EventScript_TrainerBattle1_Text_2:
# 11 "data/maps/CDGJ_ConnectingRoute/scripts.pory"
	.string "Just a fence maze this year.\nSo glad!$"

CDGJ_ConnectingRoute_EventScript_TrainerBattle2_Text_0:
# 21 "data/maps/CDGJ_ConnectingRoute/scripts.pory"
	.string "Hard to get my bike through here.$"

CDGJ_ConnectingRoute_EventScript_TrainerBattle2_Text_1:
# 22 "data/maps/CDGJ_ConnectingRoute/scripts.pory"
	.string "Too many sharp turns.$"

CDGJ_ConnectingRoute_EventScript_TrainerBattle2_Text_2:
# 25 "data/maps/CDGJ_ConnectingRoute/scripts.pory"
	.string "I miss my bike.$"

CDGJ_ConnectingRoute_EventScript_TrainerBattle3_Text_0:
# 35 "data/maps/CDGJ_ConnectingRoute/scripts.pory"
	.string "I'm trying to catch some strong\nPokémon to show off to my friends!$"

CDGJ_ConnectingRoute_EventScript_TrainerBattle3_Text_1:
# 36 "data/maps/CDGJ_ConnectingRoute/scripts.pory"
	.string "Need to catch some stronger ones.$"

CDGJ_ConnectingRoute_EventScript_TrainerBattle3_Text_2:
# 39 "data/maps/CDGJ_ConnectingRoute/scripts.pory"
	.string "My friends have all of the\nEeveelutions! How cool!$"

CDGJ_ConnectingRoute_EventScript_TrainerBattle4_Text_0:
# 50 "data/maps/CDGJ_ConnectingRoute/scripts.pory"
	.string "We just finished clearing up this\nroute for the festival!\pA battle is just what I need!$"

CDGJ_ConnectingRoute_EventScript_TrainerBattle4_Text_1:
# 51 "data/maps/CDGJ_ConnectingRoute/scripts.pory"
	.string "Man, I thought my Pokémon would\nbe stronger after all of that\pheavy lifting!$"

CDGJ_ConnectingRoute_EventScript_TrainerBattle4_Text_2:
# 54 "data/maps/CDGJ_ConnectingRoute/scripts.pory"
	.string "Enjoy visiting the festival!$"

CDGJ_ConnectingRoute_EventScript_Nurse_Text_0:
# 64 "data/maps/CDGJ_ConnectingRoute/scripts.pory"
	.string "Do your Pokemon need healing?$"

CDGJ_ConnectingRoute_EventScript_Nurse_Text_1:
# 69 "data/maps/CDGJ_ConnectingRoute/scripts.pory"
	.string "All healed up!$"

CDGJ_ConnectingRoute_EventScript_LOCALID_TOLL_INFO_Text_0:
# 105 "data/maps/CDGJ_ConnectingRoute/scripts.pory"
	.string "Did you know that this route used\nto be a toll route?\pThey opened it up to everyone after\nthe townspeople complained that\pthe cost of passing was\ntoo high!$"

CDGJ_ConnectingRoute_EventScript_LOCALID_CHORGOOGA_Text_0:
# 113 "data/maps/CDGJ_ConnectingRoute/scripts.pory"
	.string "Chorgooga! Chorgooga!\nI love saying Chorgooga!\pSay it with me!\nChorgooooooooooooo\pooooooooooooo\pooooooooooooo\pooooooooooooo\poooooooooooooga.$"
