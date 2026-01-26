CDGJ_Cave_MapScripts::
	.byte 0


CDGJ_Cave_EventScript_TrainerBattle1::
# 4 "data/maps/CDGJ_Cave/scripts.pory"
	trainerbattle_single TRAINER_SAWYER_1, CDGJ_Cave_EventScript_TrainerBattle1_Text_0, CDGJ_Cave_EventScript_TrainerBattle1_Text_1
# 10 "data/maps/CDGJ_Cave/scripts.pory"
	msgbox CDGJ_Cave_EventScript_TrainerBattle1_Text_2
# 11 "data/maps/CDGJ_Cave/scripts.pory"
	waitmessage
# 12 "data/maps/CDGJ_Cave/scripts.pory"
	closemessage
	end


CDGJ_Cave_EventScript_TrainerBattle2::
# 18 "data/maps/CDGJ_Cave/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_1, CDGJ_Cave_EventScript_TrainerBattle2_Text_0, CDGJ_Cave_EventScript_TrainerBattle2_Text_1
# 24 "data/maps/CDGJ_Cave/scripts.pory"
	msgbox CDGJ_Cave_EventScript_TrainerBattle2_Text_2
# 25 "data/maps/CDGJ_Cave/scripts.pory"
	waitmessage
# 26 "data/maps/CDGJ_Cave/scripts.pory"
	closemessage
	end


CDGJ_Cave_EventScript_TrainerBattle3::
# 32 "data/maps/CDGJ_Cave/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_2, CDGJ_Cave_EventScript_TrainerBattle3_Text_0, CDGJ_Cave_EventScript_TrainerBattle3_Text_1
# 38 "data/maps/CDGJ_Cave/scripts.pory"
	msgbox CDGJ_Cave_EventScript_TrainerBattle3_Text_2
# 39 "data/maps/CDGJ_Cave/scripts.pory"
	waitmessage
# 40 "data/maps/CDGJ_Cave/scripts.pory"
	closemessage
	end


CDGJ_Cave_EventScript_TrainerBattle4::
# 46 "data/maps/CDGJ_Cave/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_3, CDGJ_Cave_EventScript_TrainerBattle4_Text_0, CDGJ_Cave_EventScript_TrainerBattle4_Text_1
# 52 "data/maps/CDGJ_Cave/scripts.pory"
	msgbox CDGJ_Cave_EventScript_TrainerBattle4_Text_2
# 53 "data/maps/CDGJ_Cave/scripts.pory"
	waitmessage
# 54 "data/maps/CDGJ_Cave/scripts.pory"
	closemessage
	end


CDGJ_Cave_EventScript_RockSmashGuy::
# 60 "data/maps/CDGJ_Cave/scripts.pory"
	faceplayer
# 62 "data/maps/CDGJ_Cave/scripts.pory"
	goto_if_set FLAG_CDGJ_ROCK_BROKEN, CDGJ_Cave_EventScript_RockSmashGuy_2
# 70 "data/maps/CDGJ_Cave/scripts.pory"
	msgbox CDGJ_Cave_EventScript_RockSmashGuy_Text_1, MSGBOX_YESNO
# 72 "data/maps/CDGJ_Cave/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq CDGJ_Cave_EventScript_RockSmashGuy_5
# 90 "data/maps/CDGJ_Cave/scripts.pory"
	msgbox CDGJ_Cave_EventScript_RockSmashGuy_Text_3
CDGJ_Cave_EventScript_RockSmashGuy_4:
# 93 "data/maps/CDGJ_Cave/scripts.pory"
	waitmessage
# 94 "data/maps/CDGJ_Cave/scripts.pory"
	closemessage
# 96 "data/maps/CDGJ_Cave/scripts.pory"
	release
	end

CDGJ_Cave_EventScript_RockSmashGuy_2:
# 63 "data/maps/CDGJ_Cave/scripts.pory"
	msgbox CDGJ_Cave_EventScript_RockSmashGuy_Text_0
# 64 "data/maps/CDGJ_Cave/scripts.pory"
	waitmessage
# 65 "data/maps/CDGJ_Cave/scripts.pory"
	closemessage
	end

CDGJ_Cave_EventScript_RockSmashGuy_5:
# 73 "data/maps/CDGJ_Cave/scripts.pory"
	applymovement LOCALID_ROCKGUY, FaceLeft
# 74 "data/maps/CDGJ_Cave/scripts.pory"
	delay 60
# 76 "data/maps/CDGJ_Cave/scripts.pory"
	playse SE_M_ROCK_THROW
# 77 "data/maps/CDGJ_Cave/scripts.pory"
	waitfieldeffect FLDEFF_USE_ROCK_SMASH
# 78 "data/maps/CDGJ_Cave/scripts.pory"
	waitse
# 80 "data/maps/CDGJ_Cave/scripts.pory"
	faceplayer
# 82 "data/maps/CDGJ_Cave/scripts.pory"
	removeobject LOCALID_BREAKTHISROCK
# 84 "data/maps/CDGJ_Cave/scripts.pory"
	special DrawWholeMapView
# 86 "data/maps/CDGJ_Cave/scripts.pory"
	setflag FLAG_CDGJ_ROCK_BROKEN
# 88 "data/maps/CDGJ_Cave/scripts.pory"
	msgbox CDGJ_Cave_EventScript_RockSmashGuy_Text_2
	goto CDGJ_Cave_EventScript_RockSmashGuy_4


CDGJ_Cave_EventScript_Item1::
# 101 "data/maps/CDGJ_Cave/scripts.pory"
	giveitem ITEM_QUICK_CLAW, 1
# 102 "data/maps/CDGJ_Cave/scripts.pory"
	waitmessage
# 103 "data/maps/CDGJ_Cave/scripts.pory"
	closemessage
# 105 "data/maps/CDGJ_Cave/scripts.pory"
	setflag FLAG_CDGJ_OBTAIN_CAVE_ITEM1
# 107 "data/maps/CDGJ_Cave/scripts.pory"
	removeobject LOCALID_ITEM1_CAVE
	end


CDGJ_Cave_EventScript_Item2::
# 113 "data/maps/CDGJ_Cave/scripts.pory"
	giveitem ITEM_HARD_STONE, 1
# 114 "data/maps/CDGJ_Cave/scripts.pory"
	waitmessage
# 115 "data/maps/CDGJ_Cave/scripts.pory"
	closemessage
# 117 "data/maps/CDGJ_Cave/scripts.pory"
	setflag FLAG_CDGJ_OBTAIN_CAVE_ITEM2
# 119 "data/maps/CDGJ_Cave/scripts.pory"
	removeobject LOCALID_ITEM2_CAVE
	end


CDGJ_Cave_EventScript_NPCInfrontOfCaveExit::
# 125 "data/maps/CDGJ_Cave/scripts.pory"
	lockall
# 127 "data/maps/CDGJ_Cave/scripts.pory"
	faceplayer
# 129 "data/maps/CDGJ_Cave/scripts.pory"
	msgbox CDGJ_Cave_EventScript_NPCInfrontOfCaveExit_Text_0
# 130 "data/maps/CDGJ_Cave/scripts.pory"
	waitmessage
# 131 "data/maps/CDGJ_Cave/scripts.pory"
	closemessage
# 133 "data/maps/CDGJ_Cave/scripts.pory"
	releaseall
	end


CDGJ_Cave_EventScript_TriggerPlayerToGetRockItem::
# 139 "data/maps/CDGJ_Cave/scripts.pory"
	goto_if_set FLAG_CDGJ_HIDDEN_ITEM_CAVE_STORYITEM, CDGJ_Cave_EventScript_TriggerPlayerToGetRockItem_2
# 143 "data/maps/CDGJ_Cave/scripts.pory"
	lockall
# 145 "data/maps/CDGJ_Cave/scripts.pory"
	msgbox CDGJ_Cave_EventScript_TriggerPlayerToGetRockItem_Text_0
# 146 "data/maps/CDGJ_Cave/scripts.pory"
	waitmessage
# 147 "data/maps/CDGJ_Cave/scripts.pory"
	closemessage
# 149 "data/maps/CDGJ_Cave/scripts.pory"
	applymovement LOCALID_PLAYER, ReturnToRockGuy
# 150 "data/maps/CDGJ_Cave/scripts.pory"
	waitmovement
# 152 "data/maps/CDGJ_Cave/scripts.pory"
	releaseall
	end

CDGJ_Cave_EventScript_TriggerPlayerToGetRockItem_2:
	end


# 157 "data/maps/CDGJ_Cave/scripts.pory"
ReturnToRockGuy:
# 158 "data/maps/CDGJ_Cave/scripts.pory"
	walk_up
# 159 "data/maps/CDGJ_Cave/scripts.pory"
	face_left
	step_end

CDGJ_Cave_EventScript_TrainerBattle1_Text_0:
# 6 "data/maps/CDGJ_Cave/scripts.pory"
	.string "I found some new Pokemon in this cave!$"

CDGJ_Cave_EventScript_TrainerBattle1_Text_1:
# 7 "data/maps/CDGJ_Cave/scripts.pory"
	.string "Man... I want better Pokemon!$"

CDGJ_Cave_EventScript_TrainerBattle1_Text_2:
# 10 "data/maps/CDGJ_Cave/scripts.pory"
	.string "Good luck getting through this cave!$"

CDGJ_Cave_EventScript_TrainerBattle2_Text_0:
# 20 "data/maps/CDGJ_Cave/scripts.pory"
	.string "If I scream in this cave I can hear it echo!$"

CDGJ_Cave_EventScript_TrainerBattle2_Text_1:
# 21 "data/maps/CDGJ_Cave/scripts.pory"
	.string "ECHO ECHO Echo echo echooo...$"

CDGJ_Cave_EventScript_TrainerBattle2_Text_2:
# 24 "data/maps/CDGJ_Cave/scripts.pory"
	.string "echo echo echooooo.....$"

CDGJ_Cave_EventScript_TrainerBattle3_Text_0:
# 34 "data/maps/CDGJ_Cave/scripts.pory"
	.string "Man, I've never been this deep in\na cave before. Spooky!$"

CDGJ_Cave_EventScript_TrainerBattle3_Text_1:
# 35 "data/maps/CDGJ_Cave/scripts.pory"
	.string "Aaahh! Spooky!!!$"

CDGJ_Cave_EventScript_TrainerBattle3_Text_2:
# 38 "data/maps/CDGJ_Cave/scripts.pory"
	.string "How are you going to get past this lake?$"

CDGJ_Cave_EventScript_TrainerBattle4_Text_0:
# 48 "data/maps/CDGJ_Cave/scripts.pory"
	.string "Nothing this way... \nBut I'm itching for a battle!$"

CDGJ_Cave_EventScript_TrainerBattle4_Text_1:
# 49 "data/maps/CDGJ_Cave/scripts.pory"
	.string "Actually...\nThere might be something up there?$"

CDGJ_Cave_EventScript_TrainerBattle4_Text_2:
# 52 "data/maps/CDGJ_Cave/scripts.pory"
	.string "I think I saw something under that rock!$"

CDGJ_Cave_EventScript_RockSmashGuy_Text_0:
# 63 "data/maps/CDGJ_Cave/scripts.pory"
	.string "Man... I love breaking rocks!$"

CDGJ_Cave_EventScript_RockSmashGuy_Text_1:
# 70 "data/maps/CDGJ_Cave/scripts.pory"
	.string "Wanna see me break this rock?$"

CDGJ_Cave_EventScript_RockSmashGuy_Text_2:
# 88 "data/maps/CDGJ_Cave/scripts.pory"
	.string "There ya go!$"

CDGJ_Cave_EventScript_RockSmashGuy_Text_3:
# 90 "data/maps/CDGJ_Cave/scripts.pory"
	.string "Okay, just come back whenever!$"

CDGJ_Cave_EventScript_NPCInfrontOfCaveExit_Text_0:
# 129 "data/maps/CDGJ_Cave/scripts.pory"
	.string "Feeling hurt? I heard there's\na nurse outside the cave here!$"

CDGJ_Cave_EventScript_TriggerPlayerToGetRockItem_Text_0:
# 145 "data/maps/CDGJ_Cave/scripts.pory"
	.string "Hmm. I should look take a closer\nlook at that rock.$"
