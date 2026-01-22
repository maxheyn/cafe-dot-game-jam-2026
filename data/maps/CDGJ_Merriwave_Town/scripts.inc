CDGJ_Merriwave_Town_MapScripts::
# 2 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, CDGJ_Merriwave_Town_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

CDGJ_Merriwave_Town_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	map_script_2 VAR_CDGJ_INTRO_STATE, 1, CDGJ_Merriwave_Town_EventScript_IntroContinued
	.2byte 0


CDGJ_Merriwave_Town_EventScript_IntroContinued::
# 8 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	lockall
# 10 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	applymovement LOCALID_RIVAL_MERRIWAVE, MoveRivalUpAfterPlayerWalksOut
# 11 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	waitmovement
# 13 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	msgbox CDGJ_Merriwave_Town_EventScript_IntroContinued_Text_0
# 14 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	waitmessage
# 15 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	closemessage
# 17 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	applymovement LOCALID_RIVAL_MERRIWAVE, RivalWalksToBeachFront
# 18 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	applymovement LOCALID_PLAYER, PlayerWalksToBeachFront
# 19 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	waitmovement LOCALID_PLAYER
# 21 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	delay 60
# 23 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	msgbox CDGJ_Merriwave_Town_EventScript_IntroContinued_Text_1
# 24 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	waitmessage
# 25 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	closemessage
# 27 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	applymovement LOCALID_RIVAL_MERRIWAVE, FaceDown
# 28 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	waitmovement
# 29 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	delay 60
# 31 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	applymovement LOCALID_RIVAL_MERRIWAVE, FaceLeft
# 32 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	waitmovement
# 33 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	delay 30
# 35 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	applymovement LOCALID_RIVAL_MERRIWAVE, FaceRight
# 36 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	waitmovement
# 37 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	delay 30
# 39 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	applymovement LOCALID_RIVAL_MERRIWAVE, FaceUp
# 40 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	waitmovement
# 41 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	delay 30
# 43 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	applymovement LOCALID_RIVAL_MERRIWAVE, FaceDown
# 44 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	waitmovement
# 46 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	delay 60
# 47 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	delay 60
# 49 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	msgbox CDGJ_Merriwave_Town_EventScript_IntroContinued_Text_2
# 50 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	waitmessage
# 51 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	closemessage
# 53 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	delay 60
# 55 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	msgbox CDGJ_Merriwave_Town_EventScript_IntroContinued_Text_3
# 56 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	waitmessage
# 57 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	closemessage
# 59 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	applymovement LOCALID_PLAYER, FaceRight
# 60 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	waitmovement
# 61 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	delay 60
# 63 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	msgbox CDGJ_Merriwave_Town_EventScript_IntroContinued_Text_4
# 64 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	waitmessage
# 65 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	closemessage
# 67 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	delay 60
# 69 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	applymovement LOCALID_RIVAL_MERRIWAVE, EmoteExclamationMark
# 70 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	waitmovement
# 72 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	delay 60
# 73 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	delay 20
# 75 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	applymovement LOCALID_RIVAL_MERRIWAVE, FaceLeft
# 76 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	waitmovement
# 78 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	msgbox CDGJ_Merriwave_Town_EventScript_IntroContinued_Text_5
# 79 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	waitmessage
# 80 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	closemessage
# 82 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	playmoncry SPECIES_ONIX, CRY_MODE_NORMAL
# 83 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	msgbox CDGJ_Merriwave_Town_EventScript_IntroContinued_Text_6
# 84 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	waitmessage
# 86 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	playmoncry SPECIES_TAILLOW, CRY_MODE_NORMAL
# 87 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	msgbox CDGJ_Merriwave_Town_EventScript_IntroContinued_Text_7
# 88 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	waitmessage
# 90 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	playmoncry SPECIES_MARILL, CRY_MODE_NORMAL
# 91 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	msgbox CDGJ_Merriwave_Town_EventScript_IntroContinued_Text_8
# 92 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	waitmessage
# 93 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	closemessage
# 95 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	msgbox CDGJ_Merriwave_Town_EventScript_IntroContinued_Text_9, MSGBOX_YESNO
# 96 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	waitmessage
# 97 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	closemessage
# 99 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	applymovement LOCALID_RIVAL_MERRIWAVE, FaceDown
# 100 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	waitmovement
# 102 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	delay 20
# 104 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq CDGJ_Merriwave_Town_EventScript_IntroContinued_2
# 109 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	applymovement LOCALID_RIVAL_MERRIWAVE, EmoteExclamationMark
# 110 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	waitmovement
# 111 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	msgbox CDGJ_Merriwave_Town_EventScript_IntroContinued_Text_11
CDGJ_Merriwave_Town_EventScript_IntroContinued_1:
# 114 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	waitmessage
# 115 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	closemessage
# 117 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	msgbox CDGJ_Merriwave_Town_EventScript_IntroContinued_Text_12
# 118 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	waitmessage
# 119 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	giveitem ITEM_POKE_BALL, 5
# 120 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	waitmessage
# 121 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 122 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	msgbox LittlerootTown_Text_SwitchShoesWithRunningShoes
# 123 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	waitfanfare
# 124 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	setflag FLAG_RECEIVED_RUNNING_SHOES
# 125 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 126 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	closemessage
# 128 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	applymovement LOCALID_PLAYER, FaceDown
# 129 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	waitmovement
# 131 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	setvar VAR_CDGJ_INTRO_STATE, 2
# 133 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	releaseall
	end

CDGJ_Merriwave_Town_EventScript_IntroContinued_2:
# 105 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	applymovement LOCALID_RIVAL_MERRIWAVE, JumpInPlace
# 106 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	waitmovement
# 107 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	msgbox CDGJ_Merriwave_Town_EventScript_IntroContinued_Text_10
	goto CDGJ_Merriwave_Town_EventScript_IntroContinued_1


# 138 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
MoveRivalUpAfterPlayerWalksOut:
# 139 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	walk_up
	step_end

# 142 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
RivalWalksToBeachFront:
# 143 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	walk_down
# 144 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	walk_right
# 144 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	walk_right
# 145 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	walk_down
# 145 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	walk_down
# 145 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	walk_down
# 145 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	walk_down
# 146 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	walk_right
# 146 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	walk_right
# 146 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	walk_right
# 146 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	walk_right
# 147 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	walk_down
# 147 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	walk_down
# 148 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	walk_right
# 148 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	walk_right
# 148 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	walk_right
# 149 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	face_down
	step_end

# 152 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
PlayerWalksToBeachFront:
# 153 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	walk_down
# 153 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	walk_down
# 154 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	walk_right
# 154 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	walk_right
# 155 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	walk_down
# 155 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	walk_down
# 155 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	walk_down
# 155 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	walk_down
# 156 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	walk_right
# 156 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	walk_right
# 156 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	walk_right
# 156 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	walk_right
# 157 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	walk_down
# 157 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	walk_down
# 158 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	walk_right
# 158 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	walk_right
# 159 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	face_down
	step_end

CDGJ_Merriwave_Town_EventScript_CafeSign::
# 163 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	msgbox CDGJ_Merriwave_Town_EventScript_CafeSign_Text_0
# 164 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	waitmessage
# 165 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	closemessage
	return


CDGJ_Merriwave_Town_EventScript_IntroContinued_Text_0:
# 13 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	.string "Come on, follow me.$"

CDGJ_Merriwave_Town_EventScript_IntroContinued_Text_1:
# 23 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	.string "...\p...\pIt's strange seeing the town like this,\nisn't it?\pTonight's festival isn't for people.\nIt's for Pokémon.$"

CDGJ_Merriwave_Town_EventScript_IntroContinued_Text_2:
# 49 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	.string "Pokémon do a lot for us. This is the one\nday we do something for them.$"

CDGJ_Merriwave_Town_EventScript_IntroContinued_Text_3:
# 55 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	.string "We're making a special soup... hah!$"

CDGJ_Merriwave_Town_EventScript_IntroContinued_Text_4:
# 63 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	.string "Don't worry... you won't have to\ntaste it.$"

CDGJ_Merriwave_Town_EventScript_IntroContinued_Text_5:
# 78 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	.string "But maybe... if you're up for it...\nCould you help gather a few ingredients?$"

CDGJ_Merriwave_Town_EventScript_IntroContinued_Text_6:
# 83 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	.string "Stone from the mountains.$"

CDGJ_Merriwave_Town_EventScript_IntroContinued_Text_7:
# 87 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	.string "Berries from the forest.$"

CDGJ_Merriwave_Town_EventScript_IntroContinued_Text_8:
# 91 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	.string "...and fresh water from the lake.$"

CDGJ_Merriwave_Town_EventScript_IntroContinued_Text_9:
# 95 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	.string "Could you do that, please?$"

CDGJ_Merriwave_Town_EventScript_IntroContinued_Text_10:
# 107 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	.string "Haha, I knew you were the right\nperson for the job!\pThe mountains are just outside of town.\nThe forest and lake aren't far either.\pI'll be around town when you come back!$"

CDGJ_Merriwave_Town_EventScript_IntroContinued_Text_11:
# 111 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	.string "Haha, I love a good prank.\nAnyway...\pThe mountains are just outside of town.\nThe forest and lake aren't far either.\pI'll be around town when you come back!$"

CDGJ_Merriwave_Town_EventScript_IntroContinued_Text_12:
# 117 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	.string "Oh, and here. These will be useful.$"

CDGJ_Merriwave_Town_EventScript_CafeSign_Text_0:
# 163 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	.string "Welcome to Café Dot!$"
