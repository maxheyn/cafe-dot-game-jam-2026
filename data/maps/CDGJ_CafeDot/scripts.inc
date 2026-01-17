CDGJ_CafeDot_MapScripts::
# 2 "data/maps/CDGJ_CafeDot/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, CDGJ_CafeDot_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

CDGJ_CafeDot_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/CDGJ_CafeDot/scripts.pory"
	map_script_2 VAR_CDGJ_INTRO_STATE, 0, CDGJ_CafeDot_EventScript_NewGameIntro
	.2byte 0


CDGJ_CafeDot_EventScript_NewGameIntro::
# 8 "data/maps/CDGJ_CafeDot/scripts.pory"
	lockall
# 10 "data/maps/CDGJ_CafeDot/scripts.pory"
	delay 60
# 12 "data/maps/CDGJ_CafeDot/scripts.pory"
	setvar VAR_CDGJ_INTRO_STATE, 1
# 14 "data/maps/CDGJ_CafeDot/scripts.pory"
	applymovement LOCALID_PLAYER, PlayerLoadsInWalksUp
# 15 "data/maps/CDGJ_CafeDot/scripts.pory"
	waitmovement 0
# 18 "data/maps/CDGJ_CafeDot/scripts.pory"
	applymovement 7, RivalIsShocked
# 20 "data/maps/CDGJ_CafeDot/scripts.pory"
	delay 60
# 23 "data/maps/CDGJ_CafeDot/scripts.pory"
	msgbox CDGJ_CafeDot_EventScript_NewGameIntro_Text_0
# 24 "data/maps/CDGJ_CafeDot/scripts.pory"
	waitmessage
# 25 "data/maps/CDGJ_CafeDot/scripts.pory"
	closemessage
# 28 "data/maps/CDGJ_CafeDot/scripts.pory"
	applymovement 7, RivalGreetsPlayer
# 29 "data/maps/CDGJ_CafeDot/scripts.pory"
	waitmovement 0
# 31 "data/maps/CDGJ_CafeDot/scripts.pory"
	msgbox CDGJ_CafeDot_EventScript_NewGameIntro_Text_1
# 32 "data/maps/CDGJ_CafeDot/scripts.pory"
	waitmessage
# 33 "data/maps/CDGJ_CafeDot/scripts.pory"
	closemessage
# 36 "data/maps/CDGJ_CafeDot/scripts.pory"
	applymovement LOCALID_PLAYER, PlayerWalksToSeatNextToRival
# 37 "data/maps/CDGJ_CafeDot/scripts.pory"
	applymovement 7, RivalWalksBackToSeat
# 38 "data/maps/CDGJ_CafeDot/scripts.pory"
	waitmovement LOCALID_PLAYER
# 40 "data/maps/CDGJ_CafeDot/scripts.pory"
	msgbox CDGJ_CafeDot_EventScript_NewGameIntro_Text_2
# 41 "data/maps/CDGJ_CafeDot/scripts.pory"
	waitmessage
# 42 "data/maps/CDGJ_CafeDot/scripts.pory"
	closemessage
# 44 "data/maps/CDGJ_CafeDot/scripts.pory"
	msgbox CDGJ_CafeDot_EventScript_NewGameIntro_Text_3
# 45 "data/maps/CDGJ_CafeDot/scripts.pory"
	waitmessage
# 47 "data/maps/CDGJ_CafeDot/scripts.pory"
	msgbox CDGJ_CafeDot_EventScript_NewGameIntro_Text_4
# 48 "data/maps/CDGJ_CafeDot/scripts.pory"
	waitmessage
# 50 "data/maps/CDGJ_CafeDot/scripts.pory"
	msgbox CDGJ_CafeDot_EventScript_NewGameIntro_Text_5
# 51 "data/maps/CDGJ_CafeDot/scripts.pory"
	waitmessage
# 52 "data/maps/CDGJ_CafeDot/scripts.pory"
	closemessage
# 54 "data/maps/CDGJ_CafeDot/scripts.pory"
	applymovement 7, RivalTakesABreather
# 55 "data/maps/CDGJ_CafeDot/scripts.pory"
	waitmovement 0
# 57 "data/maps/CDGJ_CafeDot/scripts.pory"
	msgbox CDGJ_CafeDot_EventScript_NewGameIntro_Text_6
# 58 "data/maps/CDGJ_CafeDot/scripts.pory"
	waitmessage
# 59 "data/maps/CDGJ_CafeDot/scripts.pory"
	closemessage
# 61 "data/maps/CDGJ_CafeDot/scripts.pory"
	msgbox CDGJ_CafeDot_EventScript_NewGameIntro_Text_7
# 62 "data/maps/CDGJ_CafeDot/scripts.pory"
	waitmessage
# 63 "data/maps/CDGJ_CafeDot/scripts.pory"
	closemessage
# 65 "data/maps/CDGJ_CafeDot/scripts.pory"
	msgbox CDGJ_CafeDot_EventScript_NewGameIntro_Text_8
# 66 "data/maps/CDGJ_CafeDot/scripts.pory"
	waitmessage
# 69 "data/maps/CDGJ_CafeDot/scripts.pory"
	msgbox CDGJ_CafeDot_EventScript_NewGameIntro_Text_9
# 70 "data/maps/CDGJ_CafeDot/scripts.pory"
	waitmessage
# 71 "data/maps/CDGJ_CafeDot/scripts.pory"
	closemessage
# 73 "data/maps/CDGJ_CafeDot/scripts.pory"
	msgbox CDGJ_CafeDot_EventScript_NewGameIntro_Text_10
# 74 "data/maps/CDGJ_CafeDot/scripts.pory"
	waitmessage
# 75 "data/maps/CDGJ_CafeDot/scripts.pory"
	closemessage
# 78 "data/maps/CDGJ_CafeDot/scripts.pory"
	applymovement 7, RivalLooksAtPokemon
# 79 "data/maps/CDGJ_CafeDot/scripts.pory"
	waitmovement 0
# 81 "data/maps/CDGJ_CafeDot/scripts.pory"
	msgbox CDGJ_CafeDot_EventScript_NewGameIntro_Text_11
# 82 "data/maps/CDGJ_CafeDot/scripts.pory"
	waitmessage
# 83 "data/maps/CDGJ_CafeDot/scripts.pory"
	closemessage
# 86 "data/maps/CDGJ_CafeDot/scripts.pory"
	call CDGJ_CafeDot_EventScript_ChooseStarter
# 88 "data/maps/CDGJ_CafeDot/scripts.pory"
	msgbox CDGJ_CafeDot_EventScript_NewGameIntro_Text_12
# 89 "data/maps/CDGJ_CafeDot/scripts.pory"
	waitmessage
# 90 "data/maps/CDGJ_CafeDot/scripts.pory"
	closemessage
# 92 "data/maps/CDGJ_CafeDot/scripts.pory"
	delay 60
# 94 "data/maps/CDGJ_CafeDot/scripts.pory"
	msgbox CDGJ_CafeDot_EventScript_NewGameIntro_Text_13
# 95 "data/maps/CDGJ_CafeDot/scripts.pory"
	waitmessage
# 96 "data/maps/CDGJ_CafeDot/scripts.pory"
	closemessage
# 98 "data/maps/CDGJ_CafeDot/scripts.pory"
	msgbox CDGJ_CafeDot_EventScript_NewGameIntro_Text_14
# 99 "data/maps/CDGJ_CafeDot/scripts.pory"
	waitmessage
# 100 "data/maps/CDGJ_CafeDot/scripts.pory"
	closemessage
# 103 "data/maps/CDGJ_CafeDot/scripts.pory"
	applymovement 7, RivalLooksAtDoor
# 104 "data/maps/CDGJ_CafeDot/scripts.pory"
	waitmovement 0
# 106 "data/maps/CDGJ_CafeDot/scripts.pory"
	msgbox CDGJ_CafeDot_EventScript_NewGameIntro_Text_15
# 107 "data/maps/CDGJ_CafeDot/scripts.pory"
	waitmessage
# 108 "data/maps/CDGJ_CafeDot/scripts.pory"
	closemessage
# 110 "data/maps/CDGJ_CafeDot/scripts.pory"
	delay 60
# 112 "data/maps/CDGJ_CafeDot/scripts.pory"
	applymovement 7, RivalLeavesBuilding
# 113 "data/maps/CDGJ_CafeDot/scripts.pory"
	waitmovement
# 115 "data/maps/CDGJ_CafeDot/scripts.pory"
	removeobject 7
# 117 "data/maps/CDGJ_CafeDot/scripts.pory"
	setflag FLAG_CDGJ_INTRO_COMPLETED
# 118 "data/maps/CDGJ_CafeDot/scripts.pory"
	releaseall
	end


CDGJ_CafeDot_EventScript_ChooseStarter::
# 124 "data/maps/CDGJ_CafeDot/scripts.pory"
	msgbox CDGJ_CafeDot_EventScript_ChooseStarter_Text_0
# 125 "data/maps/CDGJ_CafeDot/scripts.pory"
	waitmessage
# 126 "data/maps/CDGJ_CafeDot/scripts.pory"
	closemessage
# 129 "data/maps/CDGJ_CafeDot/scripts.pory"
	showmonpic SPECIES_PICHU, 10, 3
# 130 "data/maps/CDGJ_CafeDot/scripts.pory"
	msgbox CDGJ_CafeDot_EventScript_ChooseStarter_Text_1, MSGBOX_YESNO
# 131 "data/maps/CDGJ_CafeDot/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq CDGJ_CafeDot_EventScript_ChooseStarter_2
# 149 "data/maps/CDGJ_CafeDot/scripts.pory"
	hidemonpic
# 152 "data/maps/CDGJ_CafeDot/scripts.pory"
	showmonpic SPECIES_MIME_JR, 10, 3
# 153 "data/maps/CDGJ_CafeDot/scripts.pory"
	msgbox CDGJ_CafeDot_EventScript_ChooseStarter_Text_2, MSGBOX_YESNO
# 154 "data/maps/CDGJ_CafeDot/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq CDGJ_CafeDot_EventScript_ChooseStarter_5
# 172 "data/maps/CDGJ_CafeDot/scripts.pory"
	hidemonpic
# 175 "data/maps/CDGJ_CafeDot/scripts.pory"
	showmonpic SPECIES_TOGEPI, 10, 3
# 176 "data/maps/CDGJ_CafeDot/scripts.pory"
	msgbox CDGJ_CafeDot_EventScript_ChooseStarter_Text_3, MSGBOX_YESNO
# 177 "data/maps/CDGJ_CafeDot/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq CDGJ_CafeDot_EventScript_ChooseStarter_8
# 196 "data/maps/CDGJ_CafeDot/scripts.pory"
	hidemonpic
# 199 "data/maps/CDGJ_CafeDot/scripts.pory"
	msgbox CDGJ_CafeDot_EventScript_ChooseStarter_Text_4
# 200 "data/maps/CDGJ_CafeDot/scripts.pory"
	call CDGJ_CafeDot_EventScript_ChooseStarter
	return

CDGJ_CafeDot_EventScript_ChooseStarter_2:
# 132 "data/maps/CDGJ_CafeDot/scripts.pory"
	givemon SPECIES_PICHU, 5, ITEM_POKE_BALL
# 134 "data/maps/CDGJ_CafeDot/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 136 "data/maps/CDGJ_CafeDot/scripts.pory"
	setmonmove 0, 0, MOVE_THUNDER_SHOCK
# 137 "data/maps/CDGJ_CafeDot/scripts.pory"
	setmonmove 0, 1, MOVE_CHARM
# 138 "data/maps/CDGJ_CafeDot/scripts.pory"
	setmonmove 0, 2, MOVE_QUICK_ATTACK
# 139 "data/maps/CDGJ_CafeDot/scripts.pory"
	setmonmove 0, 3, MOVE_THUNDER_WAVE
# 141 "data/maps/CDGJ_CafeDot/scripts.pory"
	hidemonpic
# 143 "data/maps/CDGJ_CafeDot/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 145 "data/maps/CDGJ_CafeDot/scripts.pory"
	call NicknamePartyMon
	return

CDGJ_CafeDot_EventScript_ChooseStarter_5:
# 155 "data/maps/CDGJ_CafeDot/scripts.pory"
	givemon SPECIES_MIME_JR, 5, ITEM_POKE_BALL
# 157 "data/maps/CDGJ_CafeDot/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 159 "data/maps/CDGJ_CafeDot/scripts.pory"
	setmonmove 0, 0, MOVE_CONFUSION
# 160 "data/maps/CDGJ_CafeDot/scripts.pory"
	setmonmove 0, 1, MOVE_COPYCAT
# 161 "data/maps/CDGJ_CafeDot/scripts.pory"
	setmonmove 0, 2, MOVE_ENCORE
# 162 "data/maps/CDGJ_CafeDot/scripts.pory"
	setmonmove 0, 3, MOVE_LIGHT_SCREEN
# 164 "data/maps/CDGJ_CafeDot/scripts.pory"
	hidemonpic
# 166 "data/maps/CDGJ_CafeDot/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 168 "data/maps/CDGJ_CafeDot/scripts.pory"
	call NicknamePartyMon
	return

CDGJ_CafeDot_EventScript_ChooseStarter_8:
# 178 "data/maps/CDGJ_CafeDot/scripts.pory"
	givemon SPECIES_TOGEPI, 5, ITEM_POKE_BALL
# 180 "data/maps/CDGJ_CafeDot/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 182 "data/maps/CDGJ_CafeDot/scripts.pory"
	setmonmove 0, 0, MOVE_FAIRY_WIND
# 183 "data/maps/CDGJ_CafeDot/scripts.pory"
	setmonmove 0, 1, MOVE_METRONOME
# 184 "data/maps/CDGJ_CafeDot/scripts.pory"
	setmonmove 0, 2, MOVE_SWEET_KISS
# 185 "data/maps/CDGJ_CafeDot/scripts.pory"
	setmonmove 0, 3, MOVE_ANCIENT_POWER
# 187 "data/maps/CDGJ_CafeDot/scripts.pory"
	hidemonpic
# 189 "data/maps/CDGJ_CafeDot/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 191 "data/maps/CDGJ_CafeDot/scripts.pory"
	call NicknamePartyMon
	return


NicknamePartyMon::
# 206 "data/maps/CDGJ_CafeDot/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 207 "data/maps/CDGJ_CafeDot/scripts.pory"
	hidemonpic
# 209 "data/maps/CDGJ_CafeDot/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon_1
	return

NicknamePartyMon_1:
# 210 "data/maps/CDGJ_CafeDot/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 211 "data/maps/CDGJ_CafeDot/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


# 215 "data/maps/CDGJ_CafeDot/scripts.pory"
PlayerLoadsInWalksUp:
# 216 "data/maps/CDGJ_CafeDot/scripts.pory"
	walk_up
# 216 "data/maps/CDGJ_CafeDot/scripts.pory"
	walk_up
	step_end

# 219 "data/maps/CDGJ_CafeDot/scripts.pory"
RivalGreetsPlayer:
# 220 "data/maps/CDGJ_CafeDot/scripts.pory"
	walk_down
# 220 "data/maps/CDGJ_CafeDot/scripts.pory"
	walk_down
# 221 "data/maps/CDGJ_CafeDot/scripts.pory"
	walk_left
# 221 "data/maps/CDGJ_CafeDot/scripts.pory"
	walk_left
# 221 "data/maps/CDGJ_CafeDot/scripts.pory"
	walk_left
# 221 "data/maps/CDGJ_CafeDot/scripts.pory"
	walk_left
# 221 "data/maps/CDGJ_CafeDot/scripts.pory"
	walk_left
# 221 "data/maps/CDGJ_CafeDot/scripts.pory"
	walk_left
# 222 "data/maps/CDGJ_CafeDot/scripts.pory"
	face_down
	step_end

# 225 "data/maps/CDGJ_CafeDot/scripts.pory"
RivalWalksBackToSeat:
# 226 "data/maps/CDGJ_CafeDot/scripts.pory"
	walk_up
# 227 "data/maps/CDGJ_CafeDot/scripts.pory"
	walk_right
# 227 "data/maps/CDGJ_CafeDot/scripts.pory"
	walk_right
# 227 "data/maps/CDGJ_CafeDot/scripts.pory"
	walk_right
# 227 "data/maps/CDGJ_CafeDot/scripts.pory"
	walk_right
# 227 "data/maps/CDGJ_CafeDot/scripts.pory"
	walk_right
# 227 "data/maps/CDGJ_CafeDot/scripts.pory"
	walk_right
# 228 "data/maps/CDGJ_CafeDot/scripts.pory"
	walk_up
# 229 "data/maps/CDGJ_CafeDot/scripts.pory"
	face_right
	step_end

# 232 "data/maps/CDGJ_CafeDot/scripts.pory"
PlayerWalksToSeatNextToRival:
# 233 "data/maps/CDGJ_CafeDot/scripts.pory"
	walk_up
# 234 "data/maps/CDGJ_CafeDot/scripts.pory"
	walk_right
# 234 "data/maps/CDGJ_CafeDot/scripts.pory"
	walk_right
# 234 "data/maps/CDGJ_CafeDot/scripts.pory"
	walk_right
# 234 "data/maps/CDGJ_CafeDot/scripts.pory"
	walk_right
# 234 "data/maps/CDGJ_CafeDot/scripts.pory"
	walk_right
# 234 "data/maps/CDGJ_CafeDot/scripts.pory"
	walk_right
# 234 "data/maps/CDGJ_CafeDot/scripts.pory"
	walk_right
# 234 "data/maps/CDGJ_CafeDot/scripts.pory"
	walk_right
# 235 "data/maps/CDGJ_CafeDot/scripts.pory"
	walk_up
# 235 "data/maps/CDGJ_CafeDot/scripts.pory"
	walk_up
# 236 "data/maps/CDGJ_CafeDot/scripts.pory"
	face_left
	step_end

# 239 "data/maps/CDGJ_CafeDot/scripts.pory"
RivalTakesABreather:
# 240 "data/maps/CDGJ_CafeDot/scripts.pory"
	walk_down
# 241 "data/maps/CDGJ_CafeDot/scripts.pory"
	delay_16
# 242 "data/maps/CDGJ_CafeDot/scripts.pory"
	delay_16
# 243 "data/maps/CDGJ_CafeDot/scripts.pory"
	delay_16
# 244 "data/maps/CDGJ_CafeDot/scripts.pory"
	delay_16
# 245 "data/maps/CDGJ_CafeDot/scripts.pory"
	walk_up
# 246 "data/maps/CDGJ_CafeDot/scripts.pory"
	face_right
	step_end

# 249 "data/maps/CDGJ_CafeDot/scripts.pory"
RivalIsShocked:
# 250 "data/maps/CDGJ_CafeDot/scripts.pory"
	emote_exclamation_mark
# 251 "data/maps/CDGJ_CafeDot/scripts.pory"
	delay_16
# 252 "data/maps/CDGJ_CafeDot/scripts.pory"
	face_left
# 253 "data/maps/CDGJ_CafeDot/scripts.pory"
	delay_16
# 254 "data/maps/CDGJ_CafeDot/scripts.pory"
	face_right
# 255 "data/maps/CDGJ_CafeDot/scripts.pory"
	delay_16
# 256 "data/maps/CDGJ_CafeDot/scripts.pory"
	face_down
	step_end

# 259 "data/maps/CDGJ_CafeDot/scripts.pory"
RivalLooksAtPokemon:
# 260 "data/maps/CDGJ_CafeDot/scripts.pory"
	face_up
	step_end

# 263 "data/maps/CDGJ_CafeDot/scripts.pory"
RivalLooksAtDoor:
# 264 "data/maps/CDGJ_CafeDot/scripts.pory"
	face_down
	step_end

# 267 "data/maps/CDGJ_CafeDot/scripts.pory"
RivalLeavesBuilding:
# 268 "data/maps/CDGJ_CafeDot/scripts.pory"
	walk_down
# 268 "data/maps/CDGJ_CafeDot/scripts.pory"
	walk_down
# 268 "data/maps/CDGJ_CafeDot/scripts.pory"
	walk_down
# 269 "data/maps/CDGJ_CafeDot/scripts.pory"
	walk_left
# 269 "data/maps/CDGJ_CafeDot/scripts.pory"
	walk_left
# 269 "data/maps/CDGJ_CafeDot/scripts.pory"
	walk_left
# 269 "data/maps/CDGJ_CafeDot/scripts.pory"
	walk_left
# 269 "data/maps/CDGJ_CafeDot/scripts.pory"
	walk_left
# 270 "data/maps/CDGJ_CafeDot/scripts.pory"
	walk_down
# 270 "data/maps/CDGJ_CafeDot/scripts.pory"
	walk_down
# 270 "data/maps/CDGJ_CafeDot/scripts.pory"
	walk_down
	step_end

CDGJ_CafeDot_EventScript_Patron_Pikachu_Dialogue::
# 277 "data/maps/CDGJ_CafeDot/scripts.pory"
	applymovement 5, EmoteExclamationMark
# 278 "data/maps/CDGJ_CafeDot/scripts.pory"
	waitmovement
# 280 "data/maps/CDGJ_CafeDot/scripts.pory"
	delay 30
# 282 "data/maps/CDGJ_CafeDot/scripts.pory"
	playmoncry SPECIES_PIKACHU, CRY_MODE_NORMAL
# 284 "data/maps/CDGJ_CafeDot/scripts.pory"
	applymovement 5, FacePlayer
# 285 "data/maps/CDGJ_CafeDot/scripts.pory"
	waitmovement
# 287 "data/maps/CDGJ_CafeDot/scripts.pory"
	msgbox CDGJ_CafeDot_EventScript_Patron_Pikachu_Dialogue_Text_0
# 288 "data/maps/CDGJ_CafeDot/scripts.pory"
	waitmessage
# 289 "data/maps/CDGJ_CafeDot/scripts.pory"
	closemessage
# 291 "data/maps/CDGJ_CafeDot/scripts.pory"
	delay 30
# 293 "data/maps/CDGJ_CafeDot/scripts.pory"
	msgbox CDGJ_CafeDot_EventScript_Patron_Pikachu_Dialogue_Text_1
# 294 "data/maps/CDGJ_CafeDot/scripts.pory"
	waitmessage
# 295 "data/maps/CDGJ_CafeDot/scripts.pory"
	closemessage
# 297 "data/maps/CDGJ_CafeDot/scripts.pory"
	releaseall
	end


CDGJ_CafeDot_EventScript_Patron_Poochy_Dialogue::
# 303 "data/maps/CDGJ_CafeDot/scripts.pory"
	playmoncry SPECIES_POOCHYENA, CRY_MODE_NORMAL
# 305 "data/maps/CDGJ_CafeDot/scripts.pory"
	applymovement 2, FacePlayer
# 306 "data/maps/CDGJ_CafeDot/scripts.pory"
	waitmovement
# 308 "data/maps/CDGJ_CafeDot/scripts.pory"
	msgbox CDGJ_CafeDot_EventScript_Patron_Poochy_Dialogue_Text_0, MSGBOX_YESNO
# 309 "data/maps/CDGJ_CafeDot/scripts.pory"
	waitmessage
# 310 "data/maps/CDGJ_CafeDot/scripts.pory"
	closemessage
# 312 "data/maps/CDGJ_CafeDot/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq CDGJ_CafeDot_EventScript_Patron_Poochy_Dialogue_2
# 331 "data/maps/CDGJ_CafeDot/scripts.pory"
	playmoncry SPECIES_POOCHYENA, CRY_MODE_WEAK
# 334 "data/maps/CDGJ_CafeDot/scripts.pory"
	releaseall
	end

CDGJ_CafeDot_EventScript_Patron_Poochy_Dialogue_2:
# 313 "data/maps/CDGJ_CafeDot/scripts.pory"
	applymovement 2, EmoteExclamationMark
# 314 "data/maps/CDGJ_CafeDot/scripts.pory"
	waitmovement
# 315 "data/maps/CDGJ_CafeDot/scripts.pory"
	delay 30
# 317 "data/maps/CDGJ_CafeDot/scripts.pory"
	applymovement 2, JumpInPlace
# 318 "data/maps/CDGJ_CafeDot/scripts.pory"
	waitmovement
# 319 "data/maps/CDGJ_CafeDot/scripts.pory"
	delay 60
# 321 "data/maps/CDGJ_CafeDot/scripts.pory"
	applymovement 2, EmoteHeart
# 322 "data/maps/CDGJ_CafeDot/scripts.pory"
	delay 30
# 323 "data/maps/CDGJ_CafeDot/scripts.pory"
	waitmovement
# 325 "data/maps/CDGJ_CafeDot/scripts.pory"
	msgbox CDGJ_CafeDot_EventScript_Patron_Poochy_Dialogue_Text_1
# 326 "data/maps/CDGJ_CafeDot/scripts.pory"
	waitmessage
# 327 "data/maps/CDGJ_CafeDot/scripts.pory"
	closemessage
	return


CDGJ_CafeDot_EventScript_Patron_Man_Dialogue::
# 340 "data/maps/CDGJ_CafeDot/scripts.pory"
	applymovement 4, FacePlayer
# 341 "data/maps/CDGJ_CafeDot/scripts.pory"
	msgbox CDGJ_CafeDot_EventScript_Patron_Man_Dialogue_Text_0
# 342 "data/maps/CDGJ_CafeDot/scripts.pory"
	waitmessage
# 343 "data/maps/CDGJ_CafeDot/scripts.pory"
	closemessage
# 345 "data/maps/CDGJ_CafeDot/scripts.pory"
	releaseall
	end


CDGJ_CafeDot_EventScript_Patron_Girl_Dialogue::
# 352 "data/maps/CDGJ_CafeDot/scripts.pory"
	applymovement 3, FacePlayer
# 353 "data/maps/CDGJ_CafeDot/scripts.pory"
	msgbox CDGJ_CafeDot_EventScript_Patron_Girl_Dialogue_Text_0
# 354 "data/maps/CDGJ_CafeDot/scripts.pory"
	waitmessage
# 355 "data/maps/CDGJ_CafeDot/scripts.pory"
	closemessage
# 357 "data/maps/CDGJ_CafeDot/scripts.pory"
	releaseall
	end


CDGJ_CafeDot_EventScript_Patron_Barista_Dialogue::
# 363 "data/maps/CDGJ_CafeDot/scripts.pory"
	applymovement 1, FacePlayer
# 364 "data/maps/CDGJ_CafeDot/scripts.pory"
	msgbox CDGJ_CafeDot_EventScript_Patron_Barista_Dialogue_Text_0
# 365 "data/maps/CDGJ_CafeDot/scripts.pory"
	waitmessage
# 366 "data/maps/CDGJ_CafeDot/scripts.pory"
	closemessage
# 368 "data/maps/CDGJ_CafeDot/scripts.pory"
	releaseall
	end


# 373 "data/maps/CDGJ_CafeDot/scripts.pory"
EmoteExclamationMark:
# 374 "data/maps/CDGJ_CafeDot/scripts.pory"
	emote_exclamation_mark
	step_end

# 377 "data/maps/CDGJ_CafeDot/scripts.pory"
EmoteHeart:
# 378 "data/maps/CDGJ_CafeDot/scripts.pory"
	emote_heart
	step_end

# 381 "data/maps/CDGJ_CafeDot/scripts.pory"
FacePlayer:
# 382 "data/maps/CDGJ_CafeDot/scripts.pory"
	face_player
	step_end

# 385 "data/maps/CDGJ_CafeDot/scripts.pory"
JumpInPlace:
# 386 "data/maps/CDGJ_CafeDot/scripts.pory"
	face_player
# 387 "data/maps/CDGJ_CafeDot/scripts.pory"
	jump_in_place_down
# 388 "data/maps/CDGJ_CafeDot/scripts.pory"
	jump_in_place_down
# 389 "data/maps/CDGJ_CafeDot/scripts.pory"
	jump_in_place_down
# 390 "data/maps/CDGJ_CafeDot/scripts.pory"
	face_player
	step_end

CDGJ_CafeDot_EventScript_Item_OnTable::
# 397 "data/maps/CDGJ_CafeDot/scripts.pory"
	giveitem ITEM_MOOMOO_MILK, 1
# 398 "data/maps/CDGJ_CafeDot/scripts.pory"
	setflag FLAG_CDGJ_OBTAIN_CAFE_DOT_MOOMOO_MILK
	end


CDGJ_CafeDot_EventScript_NewGameIntro_Text_0:
# 23 "data/maps/CDGJ_CafeDot/scripts.pory"
	.string "...\pHey!$"

CDGJ_CafeDot_EventScript_NewGameIntro_Text_1:
# 31 "data/maps/CDGJ_CafeDot/scripts.pory"
	.string "{PLAYER}!\pYou made it!\p...\pI was hoping we could meet\nsomewhere quiet.$"

CDGJ_CafeDot_EventScript_NewGameIntro_Text_2:
# 40 "data/maps/CDGJ_CafeDot/scripts.pory"
	.string "Have you heard the news yet?$"

CDGJ_CafeDot_EventScript_NewGameIntro_Text_3:
# 44 "data/maps/CDGJ_CafeDot/scripts.pory"
	.string "I guess I should say it\nout loud...\p...\p...$"

CDGJ_CafeDot_EventScript_NewGameIntro_Text_4:
# 47 "data/maps/CDGJ_CafeDot/scripts.pory"
	.string "I'm retiring.\nFrom the Gym.$"

CDGJ_CafeDot_EventScript_NewGameIntro_Text_5:
# 50 "data/maps/CDGJ_CafeDot/scripts.pory"
	.string "Today's my last day as Merriwave\ngym leader.\pThe festival of thanks is tonight.\pEveryone's been really kind\nabout retirement. Truly.$"

CDGJ_CafeDot_EventScript_NewGameIntro_Text_6:
# 57 "data/maps/CDGJ_CafeDot/scripts.pory"
	.string "Honestly, I think being Champion\nwas easier.$"

CDGJ_CafeDot_EventScript_NewGameIntro_Text_7:
# 61 "data/maps/CDGJ_CafeDot/scripts.pory"
	.string "Y'know, before I decided to be\na gym leader instead.$"

CDGJ_CafeDot_EventScript_NewGameIntro_Text_8:
# 65 "data/maps/CDGJ_CafeDot/scripts.pory"
	.string "I didn't have as many\nresponsibilities to the town\llike I do now...\pBattles are easy. They have rules.\pPeople don't.$"

CDGJ_CafeDot_EventScript_NewGameIntro_Text_9:
# 69 "data/maps/CDGJ_CafeDot/scripts.pory"
	.string "Anyway.$"

CDGJ_CafeDot_EventScript_NewGameIntro_Text_10:
# 73 "data/maps/CDGJ_CafeDot/scripts.pory"
	.string "I didn't just ask you here to\nunload all that!$"

CDGJ_CafeDot_EventScript_NewGameIntro_Text_11:
# 81 "data/maps/CDGJ_CafeDot/scripts.pory"
	.string "I wanted to give you something!$"

CDGJ_CafeDot_EventScript_NewGameIntro_Text_12:
# 88 "data/maps/CDGJ_CafeDot/scripts.pory"
	.string "Good choice.$"

CDGJ_CafeDot_EventScript_NewGameIntro_Text_13:
# 94 "data/maps/CDGJ_CafeDot/scripts.pory"
	.string "You know...$"

CDGJ_CafeDot_EventScript_NewGameIntro_Text_14:
# 98 "data/maps/CDGJ_CafeDot/scripts.pory"
	.string "It's never too late to start\nbeing a trainer.$"

CDGJ_CafeDot_EventScript_NewGameIntro_Text_15:
# 106 "data/maps/CDGJ_CafeDot/scripts.pory"
	.string "Let's step outside for a minute.$"

CDGJ_CafeDot_EventScript_ChooseStarter_Text_0:
# 124 "data/maps/CDGJ_CafeDot/scripts.pory"
	.string "Take your time.\pThey're all good Pokémon.$"

CDGJ_CafeDot_EventScript_ChooseStarter_Text_1:
# 130 "data/maps/CDGJ_CafeDot/scripts.pory"
	.string "Pichu, the Tiny Mouse Pokémon.\pDo you want this Pokémon?$"

CDGJ_CafeDot_EventScript_ChooseStarter_Text_2:
# 153 "data/maps/CDGJ_CafeDot/scripts.pory"
	.string "Mime Jr., the Mime Pokémon.\pDo you want this Pokémon?$"

CDGJ_CafeDot_EventScript_ChooseStarter_Text_3:
# 176 "data/maps/CDGJ_CafeDot/scripts.pory"
	.string "Togepi, the Spike Ball Pokémon.\pDo you want this Pokémon?$"

CDGJ_CafeDot_EventScript_ChooseStarter_Text_4:
# 199 "data/maps/CDGJ_CafeDot/scripts.pory"
	.string "Take another look!$"

NicknamePartyMon_Text_0:
# 206 "data/maps/CDGJ_CafeDot/scripts.pory"
	.string "Nickname your new Pokémon?$"

CDGJ_CafeDot_EventScript_Patron_Pikachu_Dialogue_Text_0:
# 287 "data/maps/CDGJ_CafeDot/scripts.pory"
	.string "Piiiikaaa!$"

CDGJ_CafeDot_EventScript_Patron_Pikachu_Dialogue_Text_1:
# 293 "data/maps/CDGJ_CafeDot/scripts.pory"
	.string "Wow... they even let Pokémon\nin here!\pSo welcoming!$"

CDGJ_CafeDot_EventScript_Patron_Poochy_Dialogue_Text_0:
# 308 "data/maps/CDGJ_CafeDot/scripts.pory"
	.string "Pet Poochy?$"

CDGJ_CafeDot_EventScript_Patron_Poochy_Dialogue_Text_1:
# 325 "data/maps/CDGJ_CafeDot/scripts.pory"
	.string "Yay!$"

CDGJ_CafeDot_EventScript_Patron_Man_Dialogue_Text_0:
# 341 "data/maps/CDGJ_CafeDot/scripts.pory"
	.string "Hard to believe ths gym leader\nis really retiring, isn't it?\pThey've done a lot for this town.\p...\p...\p...\pWhat do you mean I was eavesdropping?$"

CDGJ_CafeDot_EventScript_Patron_Girl_Dialogue_Text_0:
# 353 "data/maps/CDGJ_CafeDot/scripts.pory"
	.string "You got a Pokémon from the leader?\nWow, luck you!$"

CDGJ_CafeDot_EventScript_Patron_Barista_Dialogue_Text_0:
# 364 "data/maps/CDGJ_CafeDot/scripts.pory"
	.string "Where is Matcha when you need\nher? She said something about\pneeding to find some sort\pof secret ingredient.\p...\p...But I'm left all alone now!\nIt's my first day on the job!$"
