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
# 15 "data/maps/CDGJ_CaveExit/scripts.pory"
	waitmessage
# 16 "data/maps/CDGJ_CaveExit/scripts.pory"
	closemessage
# 18 "data/maps/CDGJ_CaveExit/scripts.pory"
	release
	end

CDGJ_CaveExit_EventScript_Nurse_2:
# 9 "data/maps/CDGJ_CaveExit/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 10 "data/maps/CDGJ_CaveExit/scripts.pory"
	setrespawn HEAL_LOCATION_CDGJ_CAVE_EXIT
# 12 "data/maps/CDGJ_CaveExit/scripts.pory"
	msgbox CDGJ_CaveExit_EventScript_Nurse_Text_1
	goto CDGJ_CaveExit_EventScript_Nurse_1


CDGJ_CaveExit_EventScript_TrainerBattle1::
# 23 "data/maps/CDGJ_CaveExit/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_SEAFLOOR_CAVERN_2, CDGJ_CaveExit_EventScript_TrainerBattle1_Text_0, CDGJ_CaveExit_EventScript_TrainerBattle1_Text_1
# 29 "data/maps/CDGJ_CaveExit/scripts.pory"
	msgbox CDGJ_CaveExit_EventScript_TrainerBattle1_Text_2
# 30 "data/maps/CDGJ_CaveExit/scripts.pory"
	waitmessage
# 31 "data/maps/CDGJ_CaveExit/scripts.pory"
	closemessage
# 33 "data/maps/CDGJ_CaveExit/scripts.pory"
	release
	end


CDGJ_CaveExit_EventScript_TrainerBattle2::
# 39 "data/maps/CDGJ_CaveExit/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_SEAFLOOR_CAVERN_3, CDGJ_CaveExit_EventScript_TrainerBattle2_Text_0, CDGJ_CaveExit_EventScript_TrainerBattle2_Text_1
# 45 "data/maps/CDGJ_CaveExit/scripts.pory"
	msgbox CDGJ_CaveExit_EventScript_TrainerBattle2_Text_2
# 46 "data/maps/CDGJ_CaveExit/scripts.pory"
	waitmessage
# 47 "data/maps/CDGJ_CaveExit/scripts.pory"
	closemessage
	end


CDGJ_CaveExit_EventScript_TrainerBattle3::
# 53 "data/maps/CDGJ_CaveExit/scripts.pory"
	trainerbattle_single TRAINER_GABRIELLE_1, CDGJ_CaveExit_EventScript_TrainerBattle3_Text_0, CDGJ_CaveExit_EventScript_TrainerBattle3_Text_1
# 59 "data/maps/CDGJ_CaveExit/scripts.pory"
	msgbox CDGJ_CaveExit_EventScript_TrainerBattle3_Text_2
# 60 "data/maps/CDGJ_CaveExit/scripts.pory"
	waitmessage
# 61 "data/maps/CDGJ_CaveExit/scripts.pory"
	closemessage
	end


CDGJ_CaveExit_EventScript_TrainerBattle4::
# 67 "data/maps/CDGJ_CaveExit/scripts.pory"
	trainerbattle_single TRAINER_MARCEL, CDGJ_CaveExit_EventScript_TrainerBattle4_Text_0, CDGJ_CaveExit_EventScript_TrainerBattle4_Text_1
# 73 "data/maps/CDGJ_CaveExit/scripts.pory"
	msgbox CDGJ_CaveExit_EventScript_TrainerBattle4_Text_2
# 74 "data/maps/CDGJ_CaveExit/scripts.pory"
	waitmessage
# 75 "data/maps/CDGJ_CaveExit/scripts.pory"
	closemessage
	end


CDGJ_CaveExit_EventScript_TrainerBattle5::
# 81 "data/maps/CDGJ_CaveExit/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_PETALBURG_WOODS, CDGJ_CaveExit_EventScript_TrainerBattle5_Text_0, CDGJ_CaveExit_EventScript_TrainerBattle5_Text_1
# 87 "data/maps/CDGJ_CaveExit/scripts.pory"
	msgbox CDGJ_CaveExit_EventScript_TrainerBattle5_Text_2
# 88 "data/maps/CDGJ_CaveExit/scripts.pory"
	waitmessage
# 89 "data/maps/CDGJ_CaveExit/scripts.pory"
	closemessage
	end


CDGJ_CaveExit_EventScript_TrainerBattle6::
# 95 "data/maps/CDGJ_CaveExit/scripts.pory"
	trainerbattle_single TRAINER_LEROY, CDGJ_CaveExit_EventScript_TrainerBattle6_Text_0, CDGJ_CaveExit_EventScript_TrainerBattle6_Text_1
# 101 "data/maps/CDGJ_CaveExit/scripts.pory"
	msgbox CDGJ_CaveExit_EventScript_TrainerBattle6_Text_2
# 102 "data/maps/CDGJ_CaveExit/scripts.pory"
	waitmessage
# 103 "data/maps/CDGJ_CaveExit/scripts.pory"
	closemessage
	end


CDGJ_CaveExit_EventScript_Nurse_Text_0:
# 6 "data/maps/CDGJ_CaveExit/scripts.pory"
	.string "Do your Pokemon need healing?$"

CDGJ_CaveExit_EventScript_Nurse_Text_1:
# 12 "data/maps/CDGJ_CaveExit/scripts.pory"
	.string "All healed up!$"

CDGJ_CaveExit_EventScript_TrainerBattle1_Text_0:
# 25 "data/maps/CDGJ_CaveExit/scripts.pory"
	.string "This place is perfect for getting in\nsome exercise!$"

CDGJ_CaveExit_EventScript_TrainerBattle1_Text_1:
# 26 "data/maps/CDGJ_CaveExit/scripts.pory"
	.string "I've gotta train some more!$"

CDGJ_CaveExit_EventScript_TrainerBattle1_Text_2:
# 29 "data/maps/CDGJ_CaveExit/scripts.pory"
	.string "30 miles a day is the goal!$"

CDGJ_CaveExit_EventScript_TrainerBattle2_Text_0:
# 41 "data/maps/CDGJ_CaveExit/scripts.pory"
	.string "How tough am I? I eat a bowl of nails\nfor breakfast.$"

CDGJ_CaveExit_EventScript_TrainerBattle2_Text_1:
# 42 "data/maps/CDGJ_CaveExit/scripts.pory"
	.string "Without any milk.$"

CDGJ_CaveExit_EventScript_TrainerBattle2_Text_2:
# 45 "data/maps/CDGJ_CaveExit/scripts.pory"
	.string "Admittedly, nails are not very\nnutritious.$"

CDGJ_CaveExit_EventScript_TrainerBattle3_Text_0:
# 55 "data/maps/CDGJ_CaveExit/scripts.pory"
	.string "Need to get back to town soon!$"

CDGJ_CaveExit_EventScript_TrainerBattle3_Text_1:
# 56 "data/maps/CDGJ_CaveExit/scripts.pory"
	.string "Quickest way back is over the mountain.$"

CDGJ_CaveExit_EventScript_TrainerBattle3_Text_2:
# 59 "data/maps/CDGJ_CaveExit/scripts.pory"
	.string "The mountain has a few trainers\nahead, but you seem like you\pcould take them.$"

CDGJ_CaveExit_EventScript_TrainerBattle4_Text_0:
# 69 "data/maps/CDGJ_CaveExit/scripts.pory"
	.string "I've gotta get these miles!$"

CDGJ_CaveExit_EventScript_TrainerBattle4_Text_1:
# 70 "data/maps/CDGJ_CaveExit/scripts.pory"
	.string "Maybe I should get some rest instead!$"

CDGJ_CaveExit_EventScript_TrainerBattle4_Text_2:
# 73 "data/maps/CDGJ_CaveExit/scripts.pory"
	.string "Battles really take the wind out of me!$"

CDGJ_CaveExit_EventScript_TrainerBattle5_Text_0:
# 83 "data/maps/CDGJ_CaveExit/scripts.pory"
	.string "The smell of berries lingers near here.$"

CDGJ_CaveExit_EventScript_TrainerBattle5_Text_1:
# 84 "data/maps/CDGJ_CaveExit/scripts.pory"
	.string "Yeah, I have a sniffer aligned to berries.$"

CDGJ_CaveExit_EventScript_TrainerBattle5_Text_2:
# 87 "data/maps/CDGJ_CaveExit/scripts.pory"
	.string "Man I love berries.$"

CDGJ_CaveExit_EventScript_TrainerBattle6_Text_0:
# 97 "data/maps/CDGJ_CaveExit/scripts.pory"
	.string "That lady down there is giving away a bike.$"

CDGJ_CaveExit_EventScript_TrainerBattle6_Text_1:
# 98 "data/maps/CDGJ_CaveExit/scripts.pory"
	.string "I'm over it, bikes are so 2019.$"

CDGJ_CaveExit_EventScript_TrainerBattle6_Text_2:
# 101 "data/maps/CDGJ_CaveExit/scripts.pory"
	.string "You'll never see me on a bike, no way.$"
