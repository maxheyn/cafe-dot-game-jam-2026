CDGJ_Merriwave_Town_MapScripts::
# 2 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, CDGJ_Merriwave_Town_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 5 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, CDGJ_Merriwave_Town_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

CDGJ_Merriwave_Town_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	map_script_2 VAR_CDGJ_INTRO_STATE, 1, CDGJ_Merriwave_Town_EventScript_IntroContinued
	.2byte 0

CDGJ_Merriwave_Town_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 6 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	map_script_2 VAR_TEMP_0, 1, CDGJ_Merriwave_Town_ResetPlayerState
# 7 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	map_script_2 VAR_TEMP_1, 1, CDGJ_Merriwave_Town_ResetPlayerState
	.2byte 0


CDGJ_Merriwave_Town_EventScript_IntroContinued::
# 12 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	lockall
# 14 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	applymovement LOCALID_RIVAL_MERRIWAVE, MoveRivalUpAfterPlayerWalksOut
# 15 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	waitmovement
# 17 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	msgbox CDGJ_Merriwave_Town_EventScript_IntroContinued_Text_0
# 18 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	waitmessage
# 19 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	closemessage
# 21 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	applymovement LOCALID_RIVAL_MERRIWAVE, RivalWalksToBeachFront
# 22 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	applymovement LOCALID_PLAYER, PlayerWalksToBeachFront
# 23 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	waitmovement LOCALID_PLAYER
# 25 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	delay 60
# 27 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	msgbox CDGJ_Merriwave_Town_EventScript_IntroContinued_Text_1
# 28 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	waitmessage
# 29 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	closemessage
# 31 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	applymovement LOCALID_RIVAL_MERRIWAVE, FaceDown
# 32 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	waitmovement
# 33 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	delay 60
# 35 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	applymovement LOCALID_RIVAL_MERRIWAVE, FaceLeft
# 36 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	waitmovement
# 37 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	delay 30
# 39 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	applymovement LOCALID_RIVAL_MERRIWAVE, FaceRight
# 40 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	waitmovement
# 41 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	delay 30
# 43 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	applymovement LOCALID_RIVAL_MERRIWAVE, FaceUp
# 44 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	waitmovement
# 45 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	delay 30
# 47 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	applymovement LOCALID_RIVAL_MERRIWAVE, FaceDown
# 48 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	waitmovement
# 50 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	delay 60
# 51 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	delay 60
# 53 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	msgbox CDGJ_Merriwave_Town_EventScript_IntroContinued_Text_2
# 54 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	waitmessage
# 55 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	closemessage
# 57 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	delay 60
# 59 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	msgbox CDGJ_Merriwave_Town_EventScript_IntroContinued_Text_3
# 60 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	waitmessage
# 61 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	closemessage
# 63 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	applymovement LOCALID_PLAYER, FaceRight
# 64 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	waitmovement
# 65 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	delay 60
# 67 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	msgbox CDGJ_Merriwave_Town_EventScript_IntroContinued_Text_4
# 68 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	waitmessage
# 69 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	closemessage
# 71 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	delay 60
# 73 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	applymovement LOCALID_RIVAL_MERRIWAVE, EmoteExclamationMark
# 74 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	waitmovement
# 76 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	delay 60
# 77 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	delay 20
# 79 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	applymovement LOCALID_RIVAL_MERRIWAVE, FaceLeft
# 80 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	waitmovement
# 82 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	msgbox CDGJ_Merriwave_Town_EventScript_IntroContinued_Text_5
# 83 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	waitmessage
# 84 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	closemessage
# 86 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	playmoncry SPECIES_ONIX, CRY_MODE_NORMAL
# 87 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	msgbox CDGJ_Merriwave_Town_EventScript_IntroContinued_Text_6
# 88 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	waitmessage
# 90 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	playmoncry SPECIES_TAILLOW, CRY_MODE_NORMAL
# 91 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	msgbox CDGJ_Merriwave_Town_EventScript_IntroContinued_Text_7
# 92 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	waitmessage
# 94 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	playmoncry SPECIES_MARILL, CRY_MODE_NORMAL
# 95 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	msgbox CDGJ_Merriwave_Town_EventScript_IntroContinued_Text_8
# 96 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	waitmessage
# 97 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	closemessage
# 99 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	msgbox CDGJ_Merriwave_Town_EventScript_IntroContinued_Text_9, MSGBOX_YESNO
# 100 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	waitmessage
# 101 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	closemessage
# 103 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	applymovement LOCALID_RIVAL_MERRIWAVE, FaceDown
# 104 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	waitmovement
# 106 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	delay 20
# 108 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq CDGJ_Merriwave_Town_EventScript_IntroContinued_2
# 113 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	applymovement LOCALID_RIVAL_MERRIWAVE, EmoteExclamationMark
# 114 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	waitmovement
# 115 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	msgbox CDGJ_Merriwave_Town_EventScript_IntroContinued_Text_11
CDGJ_Merriwave_Town_EventScript_IntroContinued_1:
# 118 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	waitmessage
# 119 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	closemessage
# 121 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	msgbox CDGJ_Merriwave_Town_EventScript_IntroContinued_Text_12
# 122 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	waitmessage
# 123 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	giveitem ITEM_POKE_BALL, 10
# 124 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	waitmessage
# 125 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	giveitem ITEM_POTION, 3
# 126 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	waitmessage
# 127 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 128 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	msgbox LittlerootTown_Text_SwitchShoesWithRunningShoes
# 129 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	waitfanfare
# 130 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	setflag FLAG_RECEIVED_RUNNING_SHOES
# 131 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 132 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	closemessage
# 134 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	msgbox CDGJ_Merriwave_Town_EventScript_IntroContinued_Text_13
# 135 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	waitmessage
# 136 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	closemessage
# 138 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	applymovement LOCALID_RIVAL_MERRIWAVE, RivalLeavesBeachFront
# 139 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	waitmovement
# 141 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	applymovement LOCALID_PLAYER, FaceLeft
# 142 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	waitmovement
# 144 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	removeobject LOCALID_RIVAL_MERRIWAVE
# 146 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	setvar VAR_CDGJ_INTRO_STATE, 2
# 148 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	releaseall
	end

CDGJ_Merriwave_Town_EventScript_IntroContinued_2:
# 109 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	applymovement LOCALID_RIVAL_MERRIWAVE, JumpInPlace
# 110 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	waitmovement
# 111 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	msgbox CDGJ_Merriwave_Town_EventScript_IntroContinued_Text_10
	goto CDGJ_Merriwave_Town_EventScript_IntroContinued_1


# 153 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
MoveRivalUpAfterPlayerWalksOut:
# 154 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	walk_up
	step_end

# 157 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
RivalWalksToBeachFront:
# 158 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	walk_down
# 159 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	walk_right
# 159 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	walk_right
# 160 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	walk_down
# 160 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	walk_down
# 160 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	walk_down
# 160 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	walk_down
# 161 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	walk_right
# 161 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	walk_right
# 161 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	walk_right
# 161 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	walk_right
# 162 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	walk_down
# 162 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	walk_down
# 163 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	walk_right
# 163 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	walk_right
# 163 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	walk_right
# 164 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	face_down
	step_end

# 167 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
RivalLeavesBeachFront:
# 168 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	walk_up
# 168 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	walk_up
# 169 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	walk_left
# 169 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	walk_left
# 169 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	walk_left
# 169 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	walk_left
# 169 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	walk_left
# 169 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	walk_left
# 169 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	walk_left
# 170 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	walk_up
# 170 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	walk_up
# 170 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	walk_up
# 170 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	walk_up
	step_end

# 173 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
PlayerWalksToBeachFront:
# 174 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	walk_down
# 174 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	walk_down
# 175 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	walk_right
# 175 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	walk_right
# 176 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	walk_down
# 176 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	walk_down
# 176 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	walk_down
# 176 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	walk_down
# 177 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	walk_right
# 177 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	walk_right
# 177 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	walk_right
# 177 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	walk_right
# 178 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	walk_down
# 178 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	walk_down
# 179 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	walk_right
# 179 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	walk_right
# 180 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	face_down
	step_end

CDGJ_Merriwave_Town_EventScript_CafeSign::
# 184 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	msgbox CDGJ_Merriwave_Town_EventScript_CafeSign_Text_0
# 185 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	waitmessage
# 186 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	closemessage
	return


CDGJ_Merriwave_Town_EventScript_Barista_Outside::
# 190 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	applymovement LOCALID_BARISTA_OUTSIDE, FacePlayer
# 191 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	msgbox CDGJ_Merriwave_Town_EventScript_Barista_Outside_Text_0
# 192 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	waitmessage
# 193 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	closemessage
# 194 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	release
	return


CDGJ_Merriwave_Town_EventScript_Sailor1::
# 198 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	applymovement LOCALID_SAILOR_1, FacePlayer
# 199 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	msgbox CDGJ_Merriwave_Town_EventScript_Sailor1_Text_0
# 200 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	waitmessage
# 201 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	closemessage
# 202 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	release
	return


CDGJ_Merriwave_Town_EventScript_Sailor2::
# 206 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	applymovement LOCALID_SAILOR_2, FacePlayer
# 207 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	msgbox CDGJ_Merriwave_Town_EventScript_Sailor2_Text_0
# 208 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	waitmessage
# 209 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	closemessage
# 210 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	release
	return


CDGJ_Merriwave_Town_EventScript_Sailor3::
# 214 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	applymovement LOCALID_SAILOR_3, FacePlayer
# 215 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	msgbox CDGJ_Merriwave_Town_EventScript_Sailor3_Text_0
# 216 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	waitmessage
# 217 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	closemessage
# 218 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	release
	return


CDGJ_Merriwave_Town_EventScript_FountainKid::
# 222 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	applymovement LOCALID_LIL_BOY, FacePlayer
# 223 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	msgbox CDGJ_Merriwave_Town_EventScript_FountainKid_Text_0
# 224 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	waitmessage
# 225 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	closemessage
# 226 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	release
	return


CDGJ_Merriwave_Town_EventScript_DateL::
# 230 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	applymovement LOCALID_DATEL, FacePlayer
# 231 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	msgbox CDGJ_Merriwave_Town_EventScript_DateL_Text_0
# 232 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	waitmessage
# 233 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	closemessage
# 234 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	release
	return


CDGJ_Merriwave_Town_EventScript_DateR::
# 238 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	applymovement LOCALID_DATER, FacePlayer
# 239 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	msgbox CDGJ_Merriwave_Town_EventScript_DateR_Text_0
# 240 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	waitmessage
# 241 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	closemessage
# 242 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	release
	return


CDGJ_Merriwave_Town_EventScript_SailorOnBeachChair::
# 246 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	applymovement LOCALID_SAILOR_4, FacePlayer
# 247 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	msgbox CDGJ_Merriwave_Town_EventScript_SailorOnBeachChair_Text_0
# 248 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	waitmessage
# 249 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	closemessage
# 250 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	release
	return


CDGJ_Merriwave_Town_EventScript_LOCALID_LAZY::
# 254 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	applymovement LOCALID_LAZY, FacePlayer
# 255 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	msgbox CDGJ_Merriwave_Town_EventScript_LOCALID_LAZY_Text_0
# 256 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	waitmessage
# 257 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	closemessage
# 258 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	release
	return


CDGJ_Merriwave_Town_EventScript_LOCALID_SCIENCE::
# 262 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	applymovement LOCALID_SCIENCE, FacePlayer
# 263 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	msgbox CDGJ_Merriwave_Town_EventScript_LOCALID_SCIENCE_Text_0
# 264 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	waitmessage
# 265 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	closemessage
# 266 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	release
	return


CDGJ_Merriwave_Town_EventScript_LOCALID_RIVAL_MERRIWAVE_2::
# 270 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	applymovement LOCALID_RIVAL_MERRIWAVE_2, FacePlayer
# 271 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	msgbox CDGJ_Merriwave_Town_EventScript_LOCALID_RIVAL_MERRIWAVE_2_Text_0
# 272 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	waitmessage
# 273 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	closemessage
# 274 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	release
	return


CDGJ_Merriwave_Town_EventScript_LOCALID_DOORMAN::
# 278 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	applymovement LOCALID_DOORMAN, FacePlayer
# 279 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	msgbox CDGJ_Merriwave_Town_EventScript_LOCALID_DOORMAN_Text_0
# 280 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	waitmessage
# 281 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	closemessage
# 282 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	release
	return


CDGJ_Merriwave_Town_EventScript_LOCALID_BIKEBOY::
# 286 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	applymovement LOCALID_BIKEBOY, FacePlayer
# 287 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	msgbox CDGJ_Merriwave_Town_EventScript_LOCALID_BIKEBOY_Text_0
# 288 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	waitmessage
# 289 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	closemessage
# 290 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	release
	return


CDGJ_Merriwave_Town_ResetPlayerState::
# 294 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	setvar VAR_TEMP_0, 0
# 295 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	setvar VAR_TEMP_1, 0
# 296 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	releaseall
	end


CDGJ_Merriwave_Town_EventScript_IntroContinued_Text_0:
# 17 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	.string "Come on, follow me.$"

CDGJ_Merriwave_Town_EventScript_IntroContinued_Text_1:
# 27 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	.string "...\p...\pIt's strange seeing the town like this,\nisn't it?\pTonight's festival isn't for people.\nIt's for Pokémon.$"

CDGJ_Merriwave_Town_EventScript_IntroContinued_Text_2:
# 53 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	.string "Pokémon do a lot for us. This is the one\nday we do something for them.$"

CDGJ_Merriwave_Town_EventScript_IntroContinued_Text_3:
# 59 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	.string "We're making a special soup... hah!$"

CDGJ_Merriwave_Town_EventScript_IntroContinued_Text_4:
# 67 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	.string "Don't worry... you won't have to\ntaste it.$"

CDGJ_Merriwave_Town_EventScript_IntroContinued_Text_5:
# 82 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	.string "But maybe... if you're up for it...\nCould you help gather a few ingredients?$"

CDGJ_Merriwave_Town_EventScript_IntroContinued_Text_6:
# 87 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	.string "Stone from the mountains.$"

CDGJ_Merriwave_Town_EventScript_IntroContinued_Text_7:
# 91 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	.string "Berries from the forest.$"

CDGJ_Merriwave_Town_EventScript_IntroContinued_Text_8:
# 95 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	.string "...and fresh water from the lake.$"

CDGJ_Merriwave_Town_EventScript_IntroContinued_Text_9:
# 99 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	.string "Could you do that, please?$"

CDGJ_Merriwave_Town_EventScript_IntroContinued_Text_10:
# 111 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	.string "Haha, I knew you were the right\nperson for the job!\pThe mountains are just outside of town.\nThe forest and lake aren't far either.\pI'll be around town when you come back!$"

CDGJ_Merriwave_Town_EventScript_IntroContinued_Text_11:
# 115 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	.string "Haha, I love a good prank.\nAnyway...\pThe mountains are just outside of town.\nThe forest and lake aren't far either.\pI'll be around town when you come back!$"

CDGJ_Merriwave_Town_EventScript_IntroContinued_Text_12:
# 121 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	.string "Oh, and here. These will be useful.$"

CDGJ_Merriwave_Town_EventScript_IntroContinued_Text_13:
# 134 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	.string "Good luck, I'm counting on you!$"

CDGJ_Merriwave_Town_EventScript_CafeSign_Text_0:
# 184 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	.string "Welcome to Café Dot!$"

CDGJ_Merriwave_Town_EventScript_Barista_Outside_Text_0:
# 191 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	.string "I'm taking a quick break… … …\nI can only deal with the twins\pas much as any sane person.$"

CDGJ_Merriwave_Town_EventScript_Sailor1_Text_0:
# 199 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	.string "Been a while since I got my\nland legs some exercise!$"

CDGJ_Merriwave_Town_EventScript_Sailor2_Text_0:
# 207 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	.string "I'll catch him one day!$"

CDGJ_Merriwave_Town_EventScript_Sailor3_Text_0:
# 215 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	.string "He'll never catch me!$"

CDGJ_Merriwave_Town_EventScript_FountainKid_Text_0:
# 223 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	.string "Mom said I have to play outside\nor else I'll get in trouble.\pJoke's on her, I love playing\noutside! Skibidi rizzler!$"

CDGJ_Merriwave_Town_EventScript_DateL_Text_0:
# 231 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	.string "On a date… … …\nkinda nervous… …$"

CDGJ_Merriwave_Town_EventScript_DateR_Text_0:
# 239 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	.string "On a date… … …\nexerting confidence… …$"

CDGJ_Merriwave_Town_EventScript_SailorOnBeachChair_Text_0:
# 247 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	.string "   o , the Pe     lican   .\n                so\psmoothly     d o  th\p          he      cr est.\p   a  wi    nd\ngo d       !$"

CDGJ_Merriwave_Town_EventScript_LOCALID_LAZY_Text_0:
# 255 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	.string "Just taking a break from the\nfestival setup.\pI've been up since 5 AM!$"

CDGJ_Merriwave_Town_EventScript_LOCALID_SCIENCE_Text_0:
# 263 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	.string "The festival will be a nice break\nfrom studying the local fauna!$"

CDGJ_Merriwave_Town_EventScript_LOCALID_RIVAL_MERRIWAVE_2_Text_0:
# 271 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	.string "Good luck CLOVE! I'm counting\non you!\pRemember, I need 3 ingredients.\p1. A seasoned rock from the cave.\p2. Delicious berries from the hills.\p3. Fresh water from the lake.$"

CDGJ_Merriwave_Town_EventScript_LOCALID_DOORMAN_Text_0:
# 279 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	.string "Up through here is North Merriwave.\nBe careful out there, there's\pwild pokemon and trainers eager\nto battle! Stay safe!$"

CDGJ_Merriwave_Town_EventScript_LOCALID_BIKEBOY_Text_0:
# 287 "data/maps/CDGJ_Merriwave_Town/scripts.pory"
	.string "Nyooooooooom.$"
