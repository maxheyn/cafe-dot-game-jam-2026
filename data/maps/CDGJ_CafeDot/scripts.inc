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
# 77 "data/maps/CDGJ_CafeDot/scripts.pory"
	msgbox CDGJ_CafeDot_EventScript_NewGameIntro_Text_11
# 78 "data/maps/CDGJ_CafeDot/scripts.pory"
	waitmessage
# 79 "data/maps/CDGJ_CafeDot/scripts.pory"
	closemessage
# 82 "data/maps/CDGJ_CafeDot/scripts.pory"
	call CDGJ_CafeDot_EventScript_ChooseStarter
# 84 "data/maps/CDGJ_CafeDot/scripts.pory"
	msgbox CDGJ_CafeDot_EventScript_NewGameIntro_Text_12
# 85 "data/maps/CDGJ_CafeDot/scripts.pory"
	waitmessage
# 86 "data/maps/CDGJ_CafeDot/scripts.pory"
	closemessage
# 88 "data/maps/CDGJ_CafeDot/scripts.pory"
	delay 60
# 90 "data/maps/CDGJ_CafeDot/scripts.pory"
	msgbox CDGJ_CafeDot_EventScript_NewGameIntro_Text_13
# 91 "data/maps/CDGJ_CafeDot/scripts.pory"
	waitmessage
# 92 "data/maps/CDGJ_CafeDot/scripts.pory"
	closemessage
# 94 "data/maps/CDGJ_CafeDot/scripts.pory"
	msgbox CDGJ_CafeDot_EventScript_NewGameIntro_Text_14
# 95 "data/maps/CDGJ_CafeDot/scripts.pory"
	waitmessage
# 96 "data/maps/CDGJ_CafeDot/scripts.pory"
	closemessage
# 99 "data/maps/CDGJ_CafeDot/scripts.pory"
	applymovement 7, RivalLooksAtDoor
# 100 "data/maps/CDGJ_CafeDot/scripts.pory"
	waitmovement 0
# 102 "data/maps/CDGJ_CafeDot/scripts.pory"
	msgbox CDGJ_CafeDot_EventScript_NewGameIntro_Text_15
# 103 "data/maps/CDGJ_CafeDot/scripts.pory"
	waitmessage
# 104 "data/maps/CDGJ_CafeDot/scripts.pory"
	closemessage
# 106 "data/maps/CDGJ_CafeDot/scripts.pory"
	delay 60
# 108 "data/maps/CDGJ_CafeDot/scripts.pory"
	applymovement 7, RivalLeavesBuilding
# 109 "data/maps/CDGJ_CafeDot/scripts.pory"
	waitmovement
# 111 "data/maps/CDGJ_CafeDot/scripts.pory"
	removeobject 7
# 113 "data/maps/CDGJ_CafeDot/scripts.pory"
	setflag FLAG_CDGJ_INTRO_COMPLETED
# 114 "data/maps/CDGJ_CafeDot/scripts.pory"
	releaseall
	end


CDGJ_CafeDot_EventScript_ChooseStarter::
# 120 "data/maps/CDGJ_CafeDot/scripts.pory"
	msgbox CDGJ_CafeDot_EventScript_ChooseStarter_Text_0
# 121 "data/maps/CDGJ_CafeDot/scripts.pory"
	waitmessage
# 122 "data/maps/CDGJ_CafeDot/scripts.pory"
	closemessage
# 125 "data/maps/CDGJ_CafeDot/scripts.pory"
	showmonpic SPECIES_PICHU, 10, 3
# 126 "data/maps/CDGJ_CafeDot/scripts.pory"
	msgbox CDGJ_CafeDot_EventScript_ChooseStarter_Text_1, MSGBOX_YESNO
# 127 "data/maps/CDGJ_CafeDot/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq CDGJ_CafeDot_EventScript_ChooseStarter_2
# 145 "data/maps/CDGJ_CafeDot/scripts.pory"
	hidemonpic
# 148 "data/maps/CDGJ_CafeDot/scripts.pory"
	showmonpic SPECIES_MIME_JR, 10, 3
# 149 "data/maps/CDGJ_CafeDot/scripts.pory"
	msgbox CDGJ_CafeDot_EventScript_ChooseStarter_Text_2, MSGBOX_YESNO
# 150 "data/maps/CDGJ_CafeDot/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq CDGJ_CafeDot_EventScript_ChooseStarter_5
# 168 "data/maps/CDGJ_CafeDot/scripts.pory"
	hidemonpic
# 171 "data/maps/CDGJ_CafeDot/scripts.pory"
	showmonpic SPECIES_TOGEPI, 10, 3
# 172 "data/maps/CDGJ_CafeDot/scripts.pory"
	msgbox CDGJ_CafeDot_EventScript_ChooseStarter_Text_3, MSGBOX_YESNO
# 173 "data/maps/CDGJ_CafeDot/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq CDGJ_CafeDot_EventScript_ChooseStarter_8
# 192 "data/maps/CDGJ_CafeDot/scripts.pory"
	hidemonpic
# 195 "data/maps/CDGJ_CafeDot/scripts.pory"
	msgbox CDGJ_CafeDot_EventScript_ChooseStarter_Text_4
# 196 "data/maps/CDGJ_CafeDot/scripts.pory"
	call CDGJ_CafeDot_EventScript_ChooseStarter
	return

CDGJ_CafeDot_EventScript_ChooseStarter_2:
# 128 "data/maps/CDGJ_CafeDot/scripts.pory"
	givemon SPECIES_PICHU, 55, ITEM_POKE_BALL
# 130 "data/maps/CDGJ_CafeDot/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 132 "data/maps/CDGJ_CafeDot/scripts.pory"
	setmonmove 0, 0, MOVE_THUNDER_SHOCK
# 133 "data/maps/CDGJ_CafeDot/scripts.pory"
	setmonmove 0, 1, MOVE_CHARM
# 134 "data/maps/CDGJ_CafeDot/scripts.pory"
	setmonmove 0, 2, MOVE_QUICK_ATTACK
# 135 "data/maps/CDGJ_CafeDot/scripts.pory"
	setmonmove 0, 3, MOVE_THUNDER_WAVE
# 137 "data/maps/CDGJ_CafeDot/scripts.pory"
	hidemonpic
# 139 "data/maps/CDGJ_CafeDot/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 141 "data/maps/CDGJ_CafeDot/scripts.pory"
	call NicknamePartyMon
	return

CDGJ_CafeDot_EventScript_ChooseStarter_5:
# 151 "data/maps/CDGJ_CafeDot/scripts.pory"
	givemon SPECIES_MIME_JR, 55, ITEM_POKE_BALL
# 153 "data/maps/CDGJ_CafeDot/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 155 "data/maps/CDGJ_CafeDot/scripts.pory"
	setmonmove 0, 0, MOVE_CONFUSION
# 156 "data/maps/CDGJ_CafeDot/scripts.pory"
	setmonmove 0, 1, MOVE_COPYCAT
# 157 "data/maps/CDGJ_CafeDot/scripts.pory"
	setmonmove 0, 2, MOVE_ENCORE
# 158 "data/maps/CDGJ_CafeDot/scripts.pory"
	setmonmove 0, 3, MOVE_LIGHT_SCREEN
# 160 "data/maps/CDGJ_CafeDot/scripts.pory"
	hidemonpic
# 162 "data/maps/CDGJ_CafeDot/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 164 "data/maps/CDGJ_CafeDot/scripts.pory"
	call NicknamePartyMon
	return

CDGJ_CafeDot_EventScript_ChooseStarter_8:
# 174 "data/maps/CDGJ_CafeDot/scripts.pory"
	givemon SPECIES_TOGEPI, 55, ITEM_POKE_BALL
# 176 "data/maps/CDGJ_CafeDot/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 178 "data/maps/CDGJ_CafeDot/scripts.pory"
	setmonmove 0, 0, MOVE_FAIRY_WIND
# 179 "data/maps/CDGJ_CafeDot/scripts.pory"
	setmonmove 0, 1, MOVE_METRONOME
# 180 "data/maps/CDGJ_CafeDot/scripts.pory"
	setmonmove 0, 2, MOVE_SWEET_KISS
# 181 "data/maps/CDGJ_CafeDot/scripts.pory"
	setmonmove 0, 3, MOVE_ANCIENT_POWER
# 183 "data/maps/CDGJ_CafeDot/scripts.pory"
	hidemonpic
# 185 "data/maps/CDGJ_CafeDot/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 187 "data/maps/CDGJ_CafeDot/scripts.pory"
	call NicknamePartyMon
	return


NicknamePartyMon::
# 202 "data/maps/CDGJ_CafeDot/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 203 "data/maps/CDGJ_CafeDot/scripts.pory"
	hidemonpic
# 205 "data/maps/CDGJ_CafeDot/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon_1
	return

NicknamePartyMon_1:
# 206 "data/maps/CDGJ_CafeDot/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 207 "data/maps/CDGJ_CafeDot/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


# 211 "data/maps/CDGJ_CafeDot/scripts.pory"
PlayerLoadsInWalksUp:
# 212 "data/maps/CDGJ_CafeDot/scripts.pory"
	walk_up
# 212 "data/maps/CDGJ_CafeDot/scripts.pory"
	walk_up
	step_end

# 215 "data/maps/CDGJ_CafeDot/scripts.pory"
RivalGreetsPlayer:
# 216 "data/maps/CDGJ_CafeDot/scripts.pory"
	walk_down
# 216 "data/maps/CDGJ_CafeDot/scripts.pory"
	walk_down
# 217 "data/maps/CDGJ_CafeDot/scripts.pory"
	walk_left
# 217 "data/maps/CDGJ_CafeDot/scripts.pory"
	walk_left
# 217 "data/maps/CDGJ_CafeDot/scripts.pory"
	walk_left
# 217 "data/maps/CDGJ_CafeDot/scripts.pory"
	walk_left
# 217 "data/maps/CDGJ_CafeDot/scripts.pory"
	walk_left
# 217 "data/maps/CDGJ_CafeDot/scripts.pory"
	walk_left
# 218 "data/maps/CDGJ_CafeDot/scripts.pory"
	face_down
	step_end

# 221 "data/maps/CDGJ_CafeDot/scripts.pory"
RivalWalksBackToSeat:
# 222 "data/maps/CDGJ_CafeDot/scripts.pory"
	walk_up
# 223 "data/maps/CDGJ_CafeDot/scripts.pory"
	walk_right
# 223 "data/maps/CDGJ_CafeDot/scripts.pory"
	walk_right
# 223 "data/maps/CDGJ_CafeDot/scripts.pory"
	walk_right
# 223 "data/maps/CDGJ_CafeDot/scripts.pory"
	walk_right
# 223 "data/maps/CDGJ_CafeDot/scripts.pory"
	walk_right
# 223 "data/maps/CDGJ_CafeDot/scripts.pory"
	walk_right
# 224 "data/maps/CDGJ_CafeDot/scripts.pory"
	walk_up
# 225 "data/maps/CDGJ_CafeDot/scripts.pory"
	face_right
	step_end

# 228 "data/maps/CDGJ_CafeDot/scripts.pory"
PlayerWalksToSeatNextToRival:
# 229 "data/maps/CDGJ_CafeDot/scripts.pory"
	walk_up
# 230 "data/maps/CDGJ_CafeDot/scripts.pory"
	walk_right
# 230 "data/maps/CDGJ_CafeDot/scripts.pory"
	walk_right
# 230 "data/maps/CDGJ_CafeDot/scripts.pory"
	walk_right
# 230 "data/maps/CDGJ_CafeDot/scripts.pory"
	walk_right
# 230 "data/maps/CDGJ_CafeDot/scripts.pory"
	walk_right
# 230 "data/maps/CDGJ_CafeDot/scripts.pory"
	walk_right
# 230 "data/maps/CDGJ_CafeDot/scripts.pory"
	walk_right
# 230 "data/maps/CDGJ_CafeDot/scripts.pory"
	walk_right
# 231 "data/maps/CDGJ_CafeDot/scripts.pory"
	walk_up
# 231 "data/maps/CDGJ_CafeDot/scripts.pory"
	walk_up
# 232 "data/maps/CDGJ_CafeDot/scripts.pory"
	face_left
	step_end

# 235 "data/maps/CDGJ_CafeDot/scripts.pory"
RivalTakesABreather:
# 236 "data/maps/CDGJ_CafeDot/scripts.pory"
	walk_down
# 237 "data/maps/CDGJ_CafeDot/scripts.pory"
	delay_16
# 238 "data/maps/CDGJ_CafeDot/scripts.pory"
	delay_16
# 239 "data/maps/CDGJ_CafeDot/scripts.pory"
	delay_16
# 240 "data/maps/CDGJ_CafeDot/scripts.pory"
	delay_16
# 241 "data/maps/CDGJ_CafeDot/scripts.pory"
	walk_up
# 242 "data/maps/CDGJ_CafeDot/scripts.pory"
	face_right
	step_end

# 245 "data/maps/CDGJ_CafeDot/scripts.pory"
RivalIsShocked:
# 246 "data/maps/CDGJ_CafeDot/scripts.pory"
	emote_exclamation_mark
# 247 "data/maps/CDGJ_CafeDot/scripts.pory"
	delay_16
# 248 "data/maps/CDGJ_CafeDot/scripts.pory"
	face_left
# 249 "data/maps/CDGJ_CafeDot/scripts.pory"
	delay_16
# 250 "data/maps/CDGJ_CafeDot/scripts.pory"
	face_right
# 251 "data/maps/CDGJ_CafeDot/scripts.pory"
	delay_16
# 252 "data/maps/CDGJ_CafeDot/scripts.pory"
	face_down
	step_end

# 255 "data/maps/CDGJ_CafeDot/scripts.pory"
RivalLooksAtPokemon:
# 256 "data/maps/CDGJ_CafeDot/scripts.pory"
	face_up
	step_end

# 259 "data/maps/CDGJ_CafeDot/scripts.pory"
RivalLooksAtDoor:
# 260 "data/maps/CDGJ_CafeDot/scripts.pory"
	face_down
	step_end

# 263 "data/maps/CDGJ_CafeDot/scripts.pory"
RivalLeavesBuilding:
# 264 "data/maps/CDGJ_CafeDot/scripts.pory"
	walk_down
# 264 "data/maps/CDGJ_CafeDot/scripts.pory"
	walk_down
# 264 "data/maps/CDGJ_CafeDot/scripts.pory"
	walk_down
# 265 "data/maps/CDGJ_CafeDot/scripts.pory"
	walk_left
# 265 "data/maps/CDGJ_CafeDot/scripts.pory"
	walk_left
# 265 "data/maps/CDGJ_CafeDot/scripts.pory"
	walk_left
# 265 "data/maps/CDGJ_CafeDot/scripts.pory"
	walk_left
# 265 "data/maps/CDGJ_CafeDot/scripts.pory"
	walk_left
# 266 "data/maps/CDGJ_CafeDot/scripts.pory"
	walk_down
# 266 "data/maps/CDGJ_CafeDot/scripts.pory"
	walk_down
# 266 "data/maps/CDGJ_CafeDot/scripts.pory"
	walk_down
	step_end

CDGJ_CafeDot_EventScript_Patron_Pikachu_Dialogue::
# 273 "data/maps/CDGJ_CafeDot/scripts.pory"
	applymovement 5, EmoteExclamationMark
# 274 "data/maps/CDGJ_CafeDot/scripts.pory"
	waitmovement
# 276 "data/maps/CDGJ_CafeDot/scripts.pory"
	delay 30
# 278 "data/maps/CDGJ_CafeDot/scripts.pory"
	playmoncry SPECIES_PIKACHU, CRY_MODE_NORMAL
# 280 "data/maps/CDGJ_CafeDot/scripts.pory"
	applymovement 5, FacePlayer
# 281 "data/maps/CDGJ_CafeDot/scripts.pory"
	waitmovement
# 283 "data/maps/CDGJ_CafeDot/scripts.pory"
	msgbox CDGJ_CafeDot_EventScript_Patron_Pikachu_Dialogue_Text_0
# 284 "data/maps/CDGJ_CafeDot/scripts.pory"
	waitmessage
# 285 "data/maps/CDGJ_CafeDot/scripts.pory"
	closemessage
# 287 "data/maps/CDGJ_CafeDot/scripts.pory"
	delay 30
# 289 "data/maps/CDGJ_CafeDot/scripts.pory"
	msgbox CDGJ_CafeDot_EventScript_Patron_Pikachu_Dialogue_Text_1
# 290 "data/maps/CDGJ_CafeDot/scripts.pory"
	waitmessage
# 291 "data/maps/CDGJ_CafeDot/scripts.pory"
	closemessage
# 293 "data/maps/CDGJ_CafeDot/scripts.pory"
	releaseall
	end


CDGJ_CafeDot_EventScript_Patron_Poochy_Dialogue::
# 299 "data/maps/CDGJ_CafeDot/scripts.pory"
	playmoncry SPECIES_POOCHYENA, CRY_MODE_NORMAL
# 301 "data/maps/CDGJ_CafeDot/scripts.pory"
	applymovement 2, FacePlayer
# 302 "data/maps/CDGJ_CafeDot/scripts.pory"
	waitmovement
# 304 "data/maps/CDGJ_CafeDot/scripts.pory"
	msgbox CDGJ_CafeDot_EventScript_Patron_Poochy_Dialogue_Text_0, MSGBOX_YESNO
# 305 "data/maps/CDGJ_CafeDot/scripts.pory"
	waitmessage
# 306 "data/maps/CDGJ_CafeDot/scripts.pory"
	closemessage
# 308 "data/maps/CDGJ_CafeDot/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq CDGJ_CafeDot_EventScript_Patron_Poochy_Dialogue_2
# 325 "data/maps/CDGJ_CafeDot/scripts.pory"
	playmoncry SPECIES_POOCHYENA, CRY_MODE_WEAK
CDGJ_CafeDot_EventScript_Patron_Poochy_Dialogue_1:
# 328 "data/maps/CDGJ_CafeDot/scripts.pory"
	applymovement 2, FaceRight
# 329 "data/maps/CDGJ_CafeDot/scripts.pory"
	waitmovement
# 331 "data/maps/CDGJ_CafeDot/scripts.pory"
	releaseall
	end

CDGJ_CafeDot_EventScript_Patron_Poochy_Dialogue_2:
# 309 "data/maps/CDGJ_CafeDot/scripts.pory"
	applymovement 2, EmoteExclamationMark
# 310 "data/maps/CDGJ_CafeDot/scripts.pory"
	waitmovement
# 311 "data/maps/CDGJ_CafeDot/scripts.pory"
	delay 30
# 313 "data/maps/CDGJ_CafeDot/scripts.pory"
	applymovement 2, JumpInPlace
# 314 "data/maps/CDGJ_CafeDot/scripts.pory"
	waitmovement
# 315 "data/maps/CDGJ_CafeDot/scripts.pory"
	delay 60
# 317 "data/maps/CDGJ_CafeDot/scripts.pory"
	applymovement 2, EmoteHeart
# 318 "data/maps/CDGJ_CafeDot/scripts.pory"
	delay 30
# 319 "data/maps/CDGJ_CafeDot/scripts.pory"
	waitmovement
# 321 "data/maps/CDGJ_CafeDot/scripts.pory"
	msgbox CDGJ_CafeDot_EventScript_Patron_Poochy_Dialogue_Text_1
# 322 "data/maps/CDGJ_CafeDot/scripts.pory"
	waitmessage
# 323 "data/maps/CDGJ_CafeDot/scripts.pory"
	closemessage
	goto CDGJ_CafeDot_EventScript_Patron_Poochy_Dialogue_1


CDGJ_CafeDot_EventScript_Patron_Man_Dialogue::
# 337 "data/maps/CDGJ_CafeDot/scripts.pory"
	applymovement 4, FacePlayer
# 338 "data/maps/CDGJ_CafeDot/scripts.pory"
	msgbox CDGJ_CafeDot_EventScript_Patron_Man_Dialogue_Text_0
# 339 "data/maps/CDGJ_CafeDot/scripts.pory"
	waitmessage
# 340 "data/maps/CDGJ_CafeDot/scripts.pory"
	closemessage
# 342 "data/maps/CDGJ_CafeDot/scripts.pory"
	applymovement 4, FaceLeft
# 343 "data/maps/CDGJ_CafeDot/scripts.pory"
	waitmovement
# 344 "data/maps/CDGJ_CafeDot/scripts.pory"
	releaseall
	end


CDGJ_CafeDot_EventScript_Patron_Girl_Dialogue::
# 351 "data/maps/CDGJ_CafeDot/scripts.pory"
	applymovement 3, FacePlayer
# 352 "data/maps/CDGJ_CafeDot/scripts.pory"
	msgbox CDGJ_CafeDot_EventScript_Patron_Girl_Dialogue_Text_0
# 353 "data/maps/CDGJ_CafeDot/scripts.pory"
	waitmessage
# 354 "data/maps/CDGJ_CafeDot/scripts.pory"
	closemessage
# 356 "data/maps/CDGJ_CafeDot/scripts.pory"
	applymovement 3, FaceRight
# 357 "data/maps/CDGJ_CafeDot/scripts.pory"
	waitmovement
# 359 "data/maps/CDGJ_CafeDot/scripts.pory"
	releaseall
	end


CDGJ_CafeDot_EventScript_Patron_Barista_Dialogue::
# 365 "data/maps/CDGJ_CafeDot/scripts.pory"
	applymovement 1, FacePlayer
# 366 "data/maps/CDGJ_CafeDot/scripts.pory"
	msgbox CDGJ_CafeDot_EventScript_Patron_Barista_Dialogue_Text_0
# 367 "data/maps/CDGJ_CafeDot/scripts.pory"
	waitmessage
# 368 "data/maps/CDGJ_CafeDot/scripts.pory"
	closemessage
# 370 "data/maps/CDGJ_CafeDot/scripts.pory"
	releaseall
	end


# 375 "data/maps/CDGJ_CafeDot/scripts.pory"
EmoteExclamationMark:
# 376 "data/maps/CDGJ_CafeDot/scripts.pory"
	emote_exclamation_mark
	step_end

# 379 "data/maps/CDGJ_CafeDot/scripts.pory"
EmoteHeart:
# 380 "data/maps/CDGJ_CafeDot/scripts.pory"
	emote_heart
	step_end

# 383 "data/maps/CDGJ_CafeDot/scripts.pory"
FacePlayer:
# 384 "data/maps/CDGJ_CafeDot/scripts.pory"
	face_player
	step_end

# 387 "data/maps/CDGJ_CafeDot/scripts.pory"
FaceLeft:
# 388 "data/maps/CDGJ_CafeDot/scripts.pory"
	face_left
	step_end

# 391 "data/maps/CDGJ_CafeDot/scripts.pory"
FaceRight:
# 392 "data/maps/CDGJ_CafeDot/scripts.pory"
	face_right
	step_end

# 395 "data/maps/CDGJ_CafeDot/scripts.pory"
FaceDown:
# 396 "data/maps/CDGJ_CafeDot/scripts.pory"
	face_down
	step_end

# 399 "data/maps/CDGJ_CafeDot/scripts.pory"
FaceUp:
# 400 "data/maps/CDGJ_CafeDot/scripts.pory"
	face_up
	step_end

# 403 "data/maps/CDGJ_CafeDot/scripts.pory"
JumpInPlace:
# 404 "data/maps/CDGJ_CafeDot/scripts.pory"
	face_player
# 405 "data/maps/CDGJ_CafeDot/scripts.pory"
	jump_in_place_down
# 406 "data/maps/CDGJ_CafeDot/scripts.pory"
	jump_in_place_down
# 407 "data/maps/CDGJ_CafeDot/scripts.pory"
	jump_in_place_down
# 408 "data/maps/CDGJ_CafeDot/scripts.pory"
	face_player
	step_end

CDGJ_CafeDot_EventScript_Item_OnTable::
# 415 "data/maps/CDGJ_CafeDot/scripts.pory"
	giveitem ITEM_MOOMOO_MILK, 1
# 416 "data/maps/CDGJ_CafeDot/scripts.pory"
	waitmessage
# 417 "data/maps/CDGJ_CafeDot/scripts.pory"
	closemessage
# 419 "data/maps/CDGJ_CafeDot/scripts.pory"
	setflag FLAG_CDGJ_OBTAIN_CAFE_DOT_MOOMOO_MILK
# 421 "data/maps/CDGJ_CafeDot/scripts.pory"
	removeobject 6
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
# 77 "data/maps/CDGJ_CafeDot/scripts.pory"
	.string "I wanted to give you something!$"

CDGJ_CafeDot_EventScript_NewGameIntro_Text_12:
# 84 "data/maps/CDGJ_CafeDot/scripts.pory"
	.string "Good choice.$"

CDGJ_CafeDot_EventScript_NewGameIntro_Text_13:
# 90 "data/maps/CDGJ_CafeDot/scripts.pory"
	.string "You know...$"

CDGJ_CafeDot_EventScript_NewGameIntro_Text_14:
# 94 "data/maps/CDGJ_CafeDot/scripts.pory"
	.string "It's never too late to start\nbeing a trainer.$"

CDGJ_CafeDot_EventScript_NewGameIntro_Text_15:
# 102 "data/maps/CDGJ_CafeDot/scripts.pory"
	.string "Let's step outside for a minute.$"

CDGJ_CafeDot_EventScript_ChooseStarter_Text_0:
# 120 "data/maps/CDGJ_CafeDot/scripts.pory"
	.string "Take your time.\pThey're all good Pokémon.$"

CDGJ_CafeDot_EventScript_ChooseStarter_Text_1:
# 126 "data/maps/CDGJ_CafeDot/scripts.pory"
	.string "Pichu, the Tiny Mouse Pokémon.\pDo you want this Pokémon?$"

CDGJ_CafeDot_EventScript_ChooseStarter_Text_2:
# 149 "data/maps/CDGJ_CafeDot/scripts.pory"
	.string "Mime Jr., the Mime Pokémon.\pDo you want this Pokémon?$"

CDGJ_CafeDot_EventScript_ChooseStarter_Text_3:
# 172 "data/maps/CDGJ_CafeDot/scripts.pory"
	.string "Togepi, the Spike Ball Pokémon.\pDo you want this Pokémon?$"

CDGJ_CafeDot_EventScript_ChooseStarter_Text_4:
# 195 "data/maps/CDGJ_CafeDot/scripts.pory"
	.string "Take another look!$"

NicknamePartyMon_Text_0:
# 202 "data/maps/CDGJ_CafeDot/scripts.pory"
	.string "Nickname your new Pokémon?$"

CDGJ_CafeDot_EventScript_Patron_Pikachu_Dialogue_Text_0:
# 283 "data/maps/CDGJ_CafeDot/scripts.pory"
	.string "Piiiikaaa!$"

CDGJ_CafeDot_EventScript_Patron_Pikachu_Dialogue_Text_1:
# 289 "data/maps/CDGJ_CafeDot/scripts.pory"
	.string "Wow... who painted this Pikachu?$"

CDGJ_CafeDot_EventScript_Patron_Poochy_Dialogue_Text_0:
# 304 "data/maps/CDGJ_CafeDot/scripts.pory"
	.string "Pet Poochy?$"

CDGJ_CafeDot_EventScript_Patron_Poochy_Dialogue_Text_1:
# 321 "data/maps/CDGJ_CafeDot/scripts.pory"
	.string "Yay!$"

CDGJ_CafeDot_EventScript_Patron_Man_Dialogue_Text_0:
# 338 "data/maps/CDGJ_CafeDot/scripts.pory"
	.string "Hard to believe the gym leader\nis really retiring, isn't it?\pThey've done a lot for this town.\p...\p...\p...\pWhat do you mean I was eavesdropping?$"

CDGJ_CafeDot_EventScript_Patron_Girl_Dialogue_Text_0:
# 352 "data/maps/CDGJ_CafeDot/scripts.pory"
	.string "You got a Pokémon from the leader?\nWow, lucky you!$"

CDGJ_CafeDot_EventScript_Patron_Barista_Dialogue_Text_0:
# 366 "data/maps/CDGJ_CafeDot/scripts.pory"
	.string "Where is Matcha when you need her?\nShe said something about needing to\pfind some sort of secret ingredient.\p...\p...But I'm left all alone now! It's my\nfirst day on the job! Aaahh!!$"
