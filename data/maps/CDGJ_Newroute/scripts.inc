CDGJ_Newroute_MapScripts::
	.byte 0


CDGJ_Newroute_EventScript_GetBerryItem::
# 4 "data/maps/CDGJ_Newroute/scripts.pory"
	lockall
# 6 "data/maps/CDGJ_Newroute/scripts.pory"
	msgbox CDGJ_Newroute_EventScript_GetBerryItem_Text_0, MSGBOX_YESNO
# 7 "data/maps/CDGJ_Newroute/scripts.pory"
	waitmessage
# 8 "data/maps/CDGJ_Newroute/scripts.pory"
	closemessage
# 10 "data/maps/CDGJ_Newroute/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq CDGJ_Newroute_EventScript_GetBerryItem_2
CDGJ_Newroute_EventScript_GetBerryItem_1:
# 19 "data/maps/CDGJ_Newroute/scripts.pory"
	releaseall
	end

CDGJ_Newroute_EventScript_GetBerryItem_2:
# 11 "data/maps/CDGJ_Newroute/scripts.pory"
	setflag FLAG_CDGJ_BERRY_PICKED
# 12 "data/maps/CDGJ_Newroute/scripts.pory"
	setvar VAR_CDGJ_BERRY_PICKED_UP_ITEM_STATE, 1
# 14 "data/maps/CDGJ_Newroute/scripts.pory"
	giveitem ITEM_EON_TICKET, 1
# 16 "data/maps/CDGJ_Newroute/scripts.pory"
	removeobject LOCALID_SPECIAL_BERRY
	goto CDGJ_Newroute_EventScript_GetBerryItem_1


CDGJ_Newroute_EventScript_TriggerBerryNotGottenYet::
# 24 "data/maps/CDGJ_Newroute/scripts.pory"
	lockall
# 26 "data/maps/CDGJ_Newroute/scripts.pory"
	msgbox CDGJ_Newroute_EventScript_TriggerBerryNotGottenYet_Text_0
# 27 "data/maps/CDGJ_Newroute/scripts.pory"
	waitmessage
# 28 "data/maps/CDGJ_Newroute/scripts.pory"
	closemessage
# 30 "data/maps/CDGJ_Newroute/scripts.pory"
	applymovement LOCALID_PLAYER, ReturnToBerryRoute
# 31 "data/maps/CDGJ_Newroute/scripts.pory"
	waitmovement
# 33 "data/maps/CDGJ_Newroute/scripts.pory"
	releaseall
	end


# 38 "data/maps/CDGJ_Newroute/scripts.pory"
ReturnToBerryRoute:
# 39 "data/maps/CDGJ_Newroute/scripts.pory"
	walk_up
	step_end

CDGJ_Newroute_EventScript_Item1::
# 43 "data/maps/CDGJ_Newroute/scripts.pory"
	giveitem ITEM_SYRUPY_APPLE, 1
# 44 "data/maps/CDGJ_Newroute/scripts.pory"
	waitmessage
# 45 "data/maps/CDGJ_Newroute/scripts.pory"
	closemessage
# 47 "data/maps/CDGJ_Newroute/scripts.pory"
	setflag FLAG_CDGJ_OBTAIN_APPLIN_ITEM1
# 49 "data/maps/CDGJ_Newroute/scripts.pory"
	removeobject LOCALID_APPLIN_ITEM1
	end


CDGJ_Newroute_EventScript_Item2::
# 55 "data/maps/CDGJ_Newroute/scripts.pory"
	giveitem ITEM_SWEET_APPLE, 1
# 56 "data/maps/CDGJ_Newroute/scripts.pory"
	waitmessage
# 57 "data/maps/CDGJ_Newroute/scripts.pory"
	closemessage
# 59 "data/maps/CDGJ_Newroute/scripts.pory"
	setflag FLAG_CDGJ_OBTAIN_APPLIN_ITEM2
# 61 "data/maps/CDGJ_Newroute/scripts.pory"
	removeobject LOCALID_APPLIN_ITEM2
	end


CDGJ_Newroute_EventScript_Item3::
# 67 "data/maps/CDGJ_Newroute/scripts.pory"
	giveitem ITEM_TART_APPLE, 1
# 68 "data/maps/CDGJ_Newroute/scripts.pory"
	waitmessage
# 69 "data/maps/CDGJ_Newroute/scripts.pory"
	closemessage
# 71 "data/maps/CDGJ_Newroute/scripts.pory"
	setflag FLAG_CDGJ_OBTAIN_APPLIN_ITEM3
# 73 "data/maps/CDGJ_Newroute/scripts.pory"
	removeobject LOCALID_APPLIN_ITEM3
	end


CDGJ_Newroute_EventScript_TrainerBattle1::
# 79 "data/maps/CDGJ_Newroute/scripts.pory"
	trainerbattle_single TRAINER_DECLAN, CDGJ_Newroute_EventScript_TrainerBattle1_Text_0, CDGJ_Newroute_EventScript_TrainerBattle1_Text_1
# 85 "data/maps/CDGJ_Newroute/scripts.pory"
	msgbox CDGJ_Newroute_EventScript_TrainerBattle1_Text_2
# 86 "data/maps/CDGJ_Newroute/scripts.pory"
	waitmessage
# 87 "data/maps/CDGJ_Newroute/scripts.pory"
	closemessage
	end


CDGJ_Newroute_EventScript_TrainerBattle2::
# 93 "data/maps/CDGJ_Newroute/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_RUSTURF_TUNNEL, CDGJ_Newroute_EventScript_TrainerBattle1_Text_0, CDGJ_Newroute_EventScript_TrainerBattle1_Text_1
# 99 "data/maps/CDGJ_Newroute/scripts.pory"
	msgbox CDGJ_Newroute_EventScript_TrainerBattle1_Text_2
# 100 "data/maps/CDGJ_Newroute/scripts.pory"
	waitmessage
# 101 "data/maps/CDGJ_Newroute/scripts.pory"
	closemessage
	end


CDGJ_Newroute_EventScript_TrainerBattle3::
# 107 "data/maps/CDGJ_Newroute/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_WEATHER_INST_1, CDGJ_Newroute_EventScript_TrainerBattle1_Text_0, CDGJ_Newroute_EventScript_TrainerBattle1_Text_1
# 113 "data/maps/CDGJ_Newroute/scripts.pory"
	msgbox CDGJ_Newroute_EventScript_TrainerBattle1_Text_2
# 114 "data/maps/CDGJ_Newroute/scripts.pory"
	waitmessage
# 115 "data/maps/CDGJ_Newroute/scripts.pory"
	closemessage
	end


CDGJ_Newroute_EventScript_TrainerBattle4::
# 121 "data/maps/CDGJ_Newroute/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_WEATHER_INST_2, CDGJ_Newroute_EventScript_TrainerBattle1_Text_0, CDGJ_Newroute_EventScript_TrainerBattle1_Text_1
# 127 "data/maps/CDGJ_Newroute/scripts.pory"
	msgbox CDGJ_Newroute_EventScript_TrainerBattle1_Text_2
# 128 "data/maps/CDGJ_Newroute/scripts.pory"
	waitmessage
# 129 "data/maps/CDGJ_Newroute/scripts.pory"
	closemessage
	end


CDGJ_Newroute_EventScript_GetBerryItem_Text_0:
# 6 "data/maps/CDGJ_Newroute/scripts.pory"
	.string "This must be the berry that\nPepper asked me to get!\p… … … … … …\p… … … … … …\pPick the berry?$"

CDGJ_Newroute_EventScript_TriggerBerryNotGottenYet_Text_0:
# 26 "data/maps/CDGJ_Newroute/scripts.pory"
	.string "I should find the berry Pepper asked\nme to get before I continue…$"

CDGJ_Newroute_EventScript_TrainerBattle1_Text_0:
# 81 "data/maps/CDGJ_Newroute/scripts.pory"
	.string "You're a new trainer, right? Me too!$"

CDGJ_Newroute_EventScript_TrainerBattle1_Text_1:
# 82 "data/maps/CDGJ_Newroute/scripts.pory"
	.string "Wow! Your Pokémon trusts you already.$"

CDGJ_Newroute_EventScript_TrainerBattle1_Text_2:
# 85 "data/maps/CDGJ_Newroute/scripts.pory"
	.string "Good luck out there! Catch'em all!$"
