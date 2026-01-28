CDGJ_LakeArea_MapScripts::
	.byte 0


CDGJ_LakeArea_EventScript_TrainerBattle1::
# 4 "data/maps/CDGJ_LakeArea/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_WEATHER_INST_3, CDGJ_LakeArea_EventScript_TrainerBattle1_Text_0, CDGJ_LakeArea_EventScript_TrainerBattle1_Text_1
# 10 "data/maps/CDGJ_LakeArea/scripts.pory"
	msgbox CDGJ_LakeArea_EventScript_TrainerBattle1_Text_2
# 11 "data/maps/CDGJ_LakeArea/scripts.pory"
	waitmessage
# 12 "data/maps/CDGJ_LakeArea/scripts.pory"
	closemessage
	end


CDGJ_LakeArea_EventScript_TrainerBattle2::
# 18 "data/maps/CDGJ_LakeArea/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MUSEUM_1, CDGJ_LakeArea_EventScript_TrainerBattle2_Text_0, CDGJ_LakeArea_EventScript_TrainerBattle2_Text_1
# 24 "data/maps/CDGJ_LakeArea/scripts.pory"
	msgbox CDGJ_LakeArea_EventScript_TrainerBattle2_Text_2
# 25 "data/maps/CDGJ_LakeArea/scripts.pory"
	waitmessage
# 26 "data/maps/CDGJ_LakeArea/scripts.pory"
	closemessage
	end


CDGJ_LakeArea_EventScript_TrainerBattle3::
# 32 "data/maps/CDGJ_LakeArea/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MUSEUM_2, CDGJ_LakeArea_EventScript_TrainerBattle3_Text_0, CDGJ_LakeArea_EventScript_TrainerBattle3_Text_1
# 38 "data/maps/CDGJ_LakeArea/scripts.pory"
	msgbox CDGJ_LakeArea_EventScript_TrainerBattle3_Text_2
# 39 "data/maps/CDGJ_LakeArea/scripts.pory"
	waitmessage
# 40 "data/maps/CDGJ_LakeArea/scripts.pory"
	closemessage
	end


CDGJ_LakeArea_EventScript_LakeWaterHintGuy::
# 46 "data/maps/CDGJ_LakeArea/scripts.pory"
	applymovement LOCALID_WATERHINTGUY, FacePlayer
# 48 "data/maps/CDGJ_LakeArea/scripts.pory"
	msgbox CDGJ_LakeArea_EventScript_LakeWaterHintGuy_Text_0
# 49 "data/maps/CDGJ_LakeArea/scripts.pory"
	waitmessage
# 50 "data/maps/CDGJ_LakeArea/scripts.pory"
	closemessage
# 52 "data/maps/CDGJ_LakeArea/scripts.pory"
	releaseall
	end


CDGJ_LakeArea_EventScript_GetWaterSecretIngredient::
# 58 "data/maps/CDGJ_LakeArea/scripts.pory"
	lockall
# 60 "data/maps/CDGJ_LakeArea/scripts.pory"
	goto_if_set FLAG_CDGJ_WATER_GET, CDGJ_LakeArea_EventScript_GetWaterSecretIngredient_2
# 68 "data/maps/CDGJ_LakeArea/scripts.pory"
	msgbox CDGJ_LakeArea_EventScript_GetWaterSecretIngredient_Text_1, MSGBOX_YESNO
# 70 "data/maps/CDGJ_LakeArea/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq CDGJ_LakeArea_EventScript_GetWaterSecretIngredient_5
CDGJ_LakeArea_EventScript_GetWaterSecretIngredient_4:
# 77 "data/maps/CDGJ_LakeArea/scripts.pory"
	waitmessage
# 78 "data/maps/CDGJ_LakeArea/scripts.pory"
	closemessage
# 81 "data/maps/CDGJ_LakeArea/scripts.pory"
	releaseall
	end

CDGJ_LakeArea_EventScript_GetWaterSecretIngredient_2:
# 61 "data/maps/CDGJ_LakeArea/scripts.pory"
	msgbox CDGJ_LakeArea_EventScript_GetWaterSecretIngredient_Text_0
# 62 "data/maps/CDGJ_LakeArea/scripts.pory"
	waitmessage
# 63 "data/maps/CDGJ_LakeArea/scripts.pory"
	closemessage
# 64 "data/maps/CDGJ_LakeArea/scripts.pory"
	releaseall
	end

CDGJ_LakeArea_EventScript_GetWaterSecretIngredient_5:
# 71 "data/maps/CDGJ_LakeArea/scripts.pory"
	giveitem ITEM_MYSTIC_TICKET, 1
# 73 "data/maps/CDGJ_LakeArea/scripts.pory"
	setflag FLAG_CDGJ_WATER_GET
# 74 "data/maps/CDGJ_LakeArea/scripts.pory"
	setvar VAR_CDGJ_LAKEWATER_PICKED_UP_ITEM_STATE, 1
	goto CDGJ_LakeArea_EventScript_GetWaterSecretIngredient_4


CDGJ_LakeArea_EventScript_GoBackGetWater::
# 86 "data/maps/CDGJ_LakeArea/scripts.pory"
	lockall
# 88 "data/maps/CDGJ_LakeArea/scripts.pory"
	msgbox CDGJ_LakeArea_EventScript_GoBackGetWater_Text_0
# 89 "data/maps/CDGJ_LakeArea/scripts.pory"
	waitmessage
# 90 "data/maps/CDGJ_LakeArea/scripts.pory"
	closemessage
# 92 "data/maps/CDGJ_LakeArea/scripts.pory"
	applymovement LOCALID_PLAYER, ReturnToBerryRoute
# 93 "data/maps/CDGJ_LakeArea/scripts.pory"
	waitmovement
# 95 "data/maps/CDGJ_LakeArea/scripts.pory"
	releaseall
	end


CDGJ_LakeArea_EventScript_Item1::
# 101 "data/maps/CDGJ_LakeArea/scripts.pory"
	giveitem ITEM_KINGS_ROCK, 1
# 102 "data/maps/CDGJ_LakeArea/scripts.pory"
	waitmessage
# 103 "data/maps/CDGJ_LakeArea/scripts.pory"
	closemessage
# 105 "data/maps/CDGJ_LakeArea/scripts.pory"
	setflag FLAG_CDGJ_KINGS_ROCK_GET
# 107 "data/maps/CDGJ_LakeArea/scripts.pory"
	removeobject LOCALID_LAKE_KINGS_ROCK
	end


CDGJ_LakeArea_EventScript_TrainerBattle1_Text_0:
# 6 "data/maps/CDGJ_LakeArea/scripts.pory"
	.string "Too much noise in town. The lake is calm.$"

CDGJ_LakeArea_EventScript_TrainerBattle1_Text_1:
# 7 "data/maps/CDGJ_LakeArea/scripts.pory"
	.string "Maybe not so calm after these battles!$"

CDGJ_LakeArea_EventScript_TrainerBattle1_Text_2:
# 10 "data/maps/CDGJ_LakeArea/scripts.pory"
	.string "I need to sit down and enjoy the water.$"

CDGJ_LakeArea_EventScript_TrainerBattle2_Text_0:
# 20 "data/maps/CDGJ_LakeArea/scripts.pory"
	.string "I want to go swimming but I don't know SURF!$"

CDGJ_LakeArea_EventScript_TrainerBattle2_Text_1:
# 21 "data/maps/CDGJ_LakeArea/scripts.pory"
	.string "Did they forget to add SURF to the game?$"

CDGJ_LakeArea_EventScript_TrainerBattle2_Text_2:
# 24 "data/maps/CDGJ_LakeArea/scripts.pory"
	.string "If only I could SURF!$"

CDGJ_LakeArea_EventScript_TrainerBattle3_Text_0:
# 34 "data/maps/CDGJ_LakeArea/scripts.pory"
	.string "This lakewater looks perfect for soup.$"

CDGJ_LakeArea_EventScript_TrainerBattle3_Text_1:
# 35 "data/maps/CDGJ_LakeArea/scripts.pory"
	.string "I could drink this lakewater any day.$"

CDGJ_LakeArea_EventScript_TrainerBattle3_Text_2:
# 38 "data/maps/CDGJ_LakeArea/scripts.pory"
	.string "I want to bottle up the lakewater!$"

CDGJ_LakeArea_EventScript_LakeWaterHintGuy_Text_0:
# 48 "data/maps/CDGJ_LakeArea/scripts.pory"
	.string "I love lake water! I just walk up\nto the edge and drink some!\pWe are so lucky to live in a\nplace where you can just drink\pwater directly from the lakes!$"

CDGJ_LakeArea_EventScript_GetWaterSecretIngredient_Text_0:
# 61 "data/maps/CDGJ_LakeArea/scripts.pory"
	.string "You already got some water!$"

CDGJ_LakeArea_EventScript_GetWaterSecretIngredient_Text_1:
# 68 "data/maps/CDGJ_LakeArea/scripts.pory"
	.string "Fresh lakewater for the soup!\nBottle some up?$"

CDGJ_LakeArea_EventScript_GoBackGetWater_Text_0:
# 88 "data/maps/CDGJ_LakeArea/scripts.pory"
	.string "I should find the lakewater Pepper\nasked me to get before I continue…$"
