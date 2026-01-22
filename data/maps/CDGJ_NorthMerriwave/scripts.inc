CDGJ_NorthMerriwave_MapScripts::
	.byte 0


CDGJ_NorthMerriwave_EventScript_CaveSign::
# 4 "data/maps/CDGJ_NorthMerriwave/scripts.pory"
	msgbox CDGJ_NorthMerriwave_EventScript_CaveSign_Text_0
# 5 "data/maps/CDGJ_NorthMerriwave/scripts.pory"
	waitmessage
# 6 "data/maps/CDGJ_NorthMerriwave/scripts.pory"
	closemessage
	return


CDGJ_NorthMerriwave_EventScript_AlcoveSign::
# 10 "data/maps/CDGJ_NorthMerriwave/scripts.pory"
	msgbox CDGJ_NorthMerriwave_EventScript_AlcoveSign_Text_0
# 11 "data/maps/CDGJ_NorthMerriwave/scripts.pory"
	waitmessage
# 12 "data/maps/CDGJ_NorthMerriwave/scripts.pory"
	closemessage
	return


CDGJ_NorthMerriwave_EventScript_HotelSign::
# 16 "data/maps/CDGJ_NorthMerriwave/scripts.pory"
	msgbox CDGJ_NorthMerriwave_EventScript_HotelSign_Text_0
# 17 "data/maps/CDGJ_NorthMerriwave/scripts.pory"
	waitmessage
# 18 "data/maps/CDGJ_NorthMerriwave/scripts.pory"
	closemessage
	return


CDGJ_NorthMerriwave_EventScript_TrainerBattle1::
# 22 "data/maps/CDGJ_NorthMerriwave/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_4, CDGJ_NorthMerriwave_EventScript_TrainerBattle1_Text_0, CDGJ_NorthMerriwave_EventScript_TrainerBattle1_Text_1
# 28 "data/maps/CDGJ_NorthMerriwave/scripts.pory"
	msgbox CDGJ_NorthMerriwave_EventScript_TrainerBattle1_Text_2
# 29 "data/maps/CDGJ_NorthMerriwave/scripts.pory"
	waitmessage
# 30 "data/maps/CDGJ_NorthMerriwave/scripts.pory"
	closemessage
	end


CDGJ_NorthMerriwave_EventScript_CaveSign_Text_0:
# 4 "data/maps/CDGJ_NorthMerriwave/scripts.pory"
	.string "Flowstone Cave ahead$"

CDGJ_NorthMerriwave_EventScript_AlcoveSign_Text_0:
# 10 "data/maps/CDGJ_NorthMerriwave/scripts.pory"
	.string "Please keep out of my garden!\p… … … … … … …\p… … … … … … …\p… … … … … … …\p… … … … … … …\p… … whose garden?$"

CDGJ_NorthMerriwave_EventScript_HotelSign_Text_0:
# 16 "data/maps/CDGJ_NorthMerriwave/scripts.pory"
	.string "North Merriwave Hotel\n… … Closed for renovations!$"

CDGJ_NorthMerriwave_EventScript_TrainerBattle1_Text_0:
# 24 "data/maps/CDGJ_NorthMerriwave/scripts.pory"
	.string "You're a new trainer, right? Me too!$"

CDGJ_NorthMerriwave_EventScript_TrainerBattle1_Text_1:
# 25 "data/maps/CDGJ_NorthMerriwave/scripts.pory"
	.string "Wow! Your Pokémon trusts you already.$"

CDGJ_NorthMerriwave_EventScript_TrainerBattle1_Text_2:
# 28 "data/maps/CDGJ_NorthMerriwave/scripts.pory"
	.string "Good luck out there! Catch'em all!$"
