CDGJ_CaveExit_MapScripts::
	.byte 0


CDGJ_CaveExit_EventScript_Nurse::
# 4 "data/maps/CDGJ_CaveExit/scripts.pory"
	faceplayer
# 6 "data/maps/CDGJ_CaveExit/scripts.pory"
	msgbox CDGJ_CaveExit_EventScript_Nurse_Text_0, MSGBOX_YESNO
# 8 "data/maps/CDGJ_CaveExit/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq CDGJ_CaveExit_EventScript_Nurse_2
CDGJ_CaveExit_EventScript_Nurse_1:
# 14 "data/maps/CDGJ_CaveExit/scripts.pory"
	waitmessage
# 15 "data/maps/CDGJ_CaveExit/scripts.pory"
	closemessage
# 17 "data/maps/CDGJ_CaveExit/scripts.pory"
	release
	end

CDGJ_CaveExit_EventScript_Nurse_2:
# 9 "data/maps/CDGJ_CaveExit/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 11 "data/maps/CDGJ_CaveExit/scripts.pory"
	msgbox CDGJ_CaveExit_EventScript_Nurse_Text_1
	goto CDGJ_CaveExit_EventScript_Nurse_1


CDGJ_CaveExit_EventScript_TrainerBattle1::
# 22 "data/maps/CDGJ_CaveExit/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_SEAFLOOR_CAVERN_2, CDGJ_CaveExit_EventScript_TrainerBattle1_Text_0, CDGJ_CaveExit_EventScript_TrainerBattle1_Text_1
# 28 "data/maps/CDGJ_CaveExit/scripts.pory"
	msgbox CDGJ_CaveExit_EventScript_TrainerBattle1_Text_2
# 29 "data/maps/CDGJ_CaveExit/scripts.pory"
	waitmessage
# 30 "data/maps/CDGJ_CaveExit/scripts.pory"
	closemessage
# 32 "data/maps/CDGJ_CaveExit/scripts.pory"
	release
	end


CDGJ_CaveExit_EventScript_TrainerBattle2::
# 38 "data/maps/CDGJ_CaveExit/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_SEAFLOOR_CAVERN_3, CDGJ_CaveExit_EventScript_TrainerBattle2_Text_0, CDGJ_CaveExit_EventScript_TrainerBattle2_Text_1
# 44 "data/maps/CDGJ_CaveExit/scripts.pory"
	msgbox CDGJ_CaveExit_EventScript_TrainerBattle2_Text_2
# 45 "data/maps/CDGJ_CaveExit/scripts.pory"
	waitmessage
# 46 "data/maps/CDGJ_CaveExit/scripts.pory"
	closemessage
	end


CDGJ_CaveExit_EventScript_TrainerBattle3::
# 52 "data/maps/CDGJ_CaveExit/scripts.pory"
	trainerbattle_single TRAINER_GABRIELLE_1, CDGJ_CaveExit_EventScript_TrainerBattle2_Text_0, CDGJ_CaveExit_EventScript_TrainerBattle2_Text_1
# 58 "data/maps/CDGJ_CaveExit/scripts.pory"
	msgbox CDGJ_CaveExit_EventScript_TrainerBattle2_Text_2
# 59 "data/maps/CDGJ_CaveExit/scripts.pory"
	waitmessage
# 60 "data/maps/CDGJ_CaveExit/scripts.pory"
	closemessage
	end


CDGJ_CaveExit_EventScript_TrainerBattle4::
# 66 "data/maps/CDGJ_CaveExit/scripts.pory"
	trainerbattle_single TRAINER_MARCEL, CDGJ_CaveExit_EventScript_TrainerBattle2_Text_0, CDGJ_CaveExit_EventScript_TrainerBattle2_Text_1
# 72 "data/maps/CDGJ_CaveExit/scripts.pory"
	msgbox CDGJ_CaveExit_EventScript_TrainerBattle2_Text_2
# 73 "data/maps/CDGJ_CaveExit/scripts.pory"
	waitmessage
# 74 "data/maps/CDGJ_CaveExit/scripts.pory"
	closemessage
	end


CDGJ_CaveExit_EventScript_TrainerBattle5::
# 80 "data/maps/CDGJ_CaveExit/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_PETALBURG_WOODS, CDGJ_CaveExit_EventScript_TrainerBattle2_Text_0, CDGJ_CaveExit_EventScript_TrainerBattle2_Text_1
# 86 "data/maps/CDGJ_CaveExit/scripts.pory"
	msgbox CDGJ_CaveExit_EventScript_TrainerBattle2_Text_2
# 87 "data/maps/CDGJ_CaveExit/scripts.pory"
	waitmessage
# 88 "data/maps/CDGJ_CaveExit/scripts.pory"
	closemessage
	end


CDGJ_CaveExit_EventScript_TrainerBattle6::
# 94 "data/maps/CDGJ_CaveExit/scripts.pory"
	trainerbattle_single TRAINER_LEROY, CDGJ_CaveExit_EventScript_TrainerBattle2_Text_0, CDGJ_CaveExit_EventScript_TrainerBattle2_Text_1
# 100 "data/maps/CDGJ_CaveExit/scripts.pory"
	msgbox CDGJ_CaveExit_EventScript_TrainerBattle2_Text_2
# 101 "data/maps/CDGJ_CaveExit/scripts.pory"
	waitmessage
# 102 "data/maps/CDGJ_CaveExit/scripts.pory"
	closemessage
	end


CDGJ_CaveExit_EventScript_Nurse_Text_0:
# 6 "data/maps/CDGJ_CaveExit/scripts.pory"
	.string "Do your Pokemon need healing?$"

CDGJ_CaveExit_EventScript_Nurse_Text_1:
# 11 "data/maps/CDGJ_CaveExit/scripts.pory"
	.string "All healed up!$"

CDGJ_CaveExit_EventScript_TrainerBattle1_Text_0:
# 24 "data/maps/CDGJ_CaveExit/scripts.pory"
	.string "This place is perfect for getting in\nsome exercise!$"

CDGJ_CaveExit_EventScript_TrainerBattle1_Text_1:
# 25 "data/maps/CDGJ_CaveExit/scripts.pory"
	.string "I've gotta train some more!$"

CDGJ_CaveExit_EventScript_TrainerBattle1_Text_2:
# 28 "data/maps/CDGJ_CaveExit/scripts.pory"
	.string "30 miles a day is the goal!$"

CDGJ_CaveExit_EventScript_TrainerBattle2_Text_0:
# 40 "data/maps/CDGJ_CaveExit/scripts.pory"
	.string "You're a new trainer, right? Me too!$"

CDGJ_CaveExit_EventScript_TrainerBattle2_Text_1:
# 41 "data/maps/CDGJ_CaveExit/scripts.pory"
	.string "Wow! Your Pokémon trusts you already.$"

CDGJ_CaveExit_EventScript_TrainerBattle2_Text_2:
# 44 "data/maps/CDGJ_CaveExit/scripts.pory"
	.string "Good luck out there! Catch'em all!$"
