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
# 13 "data/maps/CDGJ_CafeDot/scripts.pory"
	setflag FLAG_CDGJ_EXP_SHARE
# 15 "data/maps/CDGJ_CafeDot/scripts.pory"
	applymovement LOCALID_PLAYER, PlayerLoadsInWalksUp
# 16 "data/maps/CDGJ_CafeDot/scripts.pory"
	waitmovement 0
# 19 "data/maps/CDGJ_CafeDot/scripts.pory"
	applymovement 7, RivalIsShocked
# 21 "data/maps/CDGJ_CafeDot/scripts.pory"
	delay 60
# 24 "data/maps/CDGJ_CafeDot/scripts.pory"
	msgbox CDGJ_CafeDot_EventScript_NewGameIntro_Text_0
# 25 "data/maps/CDGJ_CafeDot/scripts.pory"
	waitmessage
# 26 "data/maps/CDGJ_CafeDot/scripts.pory"
	closemessage
# 29 "data/maps/CDGJ_CafeDot/scripts.pory"
	applymovement 7, RivalGreetsPlayer
# 30 "data/maps/CDGJ_CafeDot/scripts.pory"
	waitmovement 0
# 32 "data/maps/CDGJ_CafeDot/scripts.pory"
	msgbox CDGJ_CafeDot_EventScript_NewGameIntro_Text_1
# 33 "data/maps/CDGJ_CafeDot/scripts.pory"
	waitmessage
# 34 "data/maps/CDGJ_CafeDot/scripts.pory"
	closemessage
# 37 "data/maps/CDGJ_CafeDot/scripts.pory"
	applymovement LOCALID_PLAYER, PlayerWalksToSeatNextToRival
# 38 "data/maps/CDGJ_CafeDot/scripts.pory"
	applymovement 7, RivalWalksBackToSeat
# 39 "data/maps/CDGJ_CafeDot/scripts.pory"
	waitmovement LOCALID_PLAYER
# 41 "data/maps/CDGJ_CafeDot/scripts.pory"
	msgbox CDGJ_CafeDot_EventScript_NewGameIntro_Text_2
# 42 "data/maps/CDGJ_CafeDot/scripts.pory"
	waitmessage
# 43 "data/maps/CDGJ_CafeDot/scripts.pory"
	closemessage
# 45 "data/maps/CDGJ_CafeDot/scripts.pory"
	msgbox CDGJ_CafeDot_EventScript_NewGameIntro_Text_3
# 46 "data/maps/CDGJ_CafeDot/scripts.pory"
	waitmessage
# 48 "data/maps/CDGJ_CafeDot/scripts.pory"
	msgbox CDGJ_CafeDot_EventScript_NewGameIntro_Text_4
# 49 "data/maps/CDGJ_CafeDot/scripts.pory"
	waitmessage
# 51 "data/maps/CDGJ_CafeDot/scripts.pory"
	msgbox CDGJ_CafeDot_EventScript_NewGameIntro_Text_5
# 52 "data/maps/CDGJ_CafeDot/scripts.pory"
	waitmessage
# 53 "data/maps/CDGJ_CafeDot/scripts.pory"
	closemessage
# 55 "data/maps/CDGJ_CafeDot/scripts.pory"
	applymovement 7, RivalTakesABreather
# 56 "data/maps/CDGJ_CafeDot/scripts.pory"
	waitmovement 0
# 58 "data/maps/CDGJ_CafeDot/scripts.pory"
	msgbox CDGJ_CafeDot_EventScript_NewGameIntro_Text_6
# 59 "data/maps/CDGJ_CafeDot/scripts.pory"
	waitmessage
# 60 "data/maps/CDGJ_CafeDot/scripts.pory"
	closemessage
# 62 "data/maps/CDGJ_CafeDot/scripts.pory"
	msgbox CDGJ_CafeDot_EventScript_NewGameIntro_Text_7
# 63 "data/maps/CDGJ_CafeDot/scripts.pory"
	waitmessage
# 64 "data/maps/CDGJ_CafeDot/scripts.pory"
	closemessage
# 66 "data/maps/CDGJ_CafeDot/scripts.pory"
	msgbox CDGJ_CafeDot_EventScript_NewGameIntro_Text_8
# 67 "data/maps/CDGJ_CafeDot/scripts.pory"
	waitmessage
# 70 "data/maps/CDGJ_CafeDot/scripts.pory"
	msgbox CDGJ_CafeDot_EventScript_NewGameIntro_Text_9
# 71 "data/maps/CDGJ_CafeDot/scripts.pory"
	waitmessage
# 72 "data/maps/CDGJ_CafeDot/scripts.pory"
	closemessage
# 74 "data/maps/CDGJ_CafeDot/scripts.pory"
	msgbox CDGJ_CafeDot_EventScript_NewGameIntro_Text_10
# 75 "data/maps/CDGJ_CafeDot/scripts.pory"
	waitmessage
# 76 "data/maps/CDGJ_CafeDot/scripts.pory"
	closemessage
# 78 "data/maps/CDGJ_CafeDot/scripts.pory"
	msgbox CDGJ_CafeDot_EventScript_NewGameIntro_Text_11
# 79 "data/maps/CDGJ_CafeDot/scripts.pory"
	waitmessage
# 80 "data/maps/CDGJ_CafeDot/scripts.pory"
	closemessage
# 83 "data/maps/CDGJ_CafeDot/scripts.pory"
	call CDGJ_CafeDot_EventScript_ChooseStarter
# 85 "data/maps/CDGJ_CafeDot/scripts.pory"
	msgbox CDGJ_CafeDot_EventScript_NewGameIntro_Text_12
# 86 "data/maps/CDGJ_CafeDot/scripts.pory"
	waitmessage
# 87 "data/maps/CDGJ_CafeDot/scripts.pory"
	closemessage
# 89 "data/maps/CDGJ_CafeDot/scripts.pory"
	delay 60
# 91 "data/maps/CDGJ_CafeDot/scripts.pory"
	msgbox CDGJ_CafeDot_EventScript_NewGameIntro_Text_13
# 92 "data/maps/CDGJ_CafeDot/scripts.pory"
	waitmessage
# 93 "data/maps/CDGJ_CafeDot/scripts.pory"
	closemessage
# 95 "data/maps/CDGJ_CafeDot/scripts.pory"
	msgbox CDGJ_CafeDot_EventScript_NewGameIntro_Text_14
# 96 "data/maps/CDGJ_CafeDot/scripts.pory"
	waitmessage
# 97 "data/maps/CDGJ_CafeDot/scripts.pory"
	closemessage
# 100 "data/maps/CDGJ_CafeDot/scripts.pory"
	applymovement 7, RivalLooksAtDoor
# 101 "data/maps/CDGJ_CafeDot/scripts.pory"
	waitmovement 0
# 103 "data/maps/CDGJ_CafeDot/scripts.pory"
	msgbox CDGJ_CafeDot_EventScript_NewGameIntro_Text_15
# 104 "data/maps/CDGJ_CafeDot/scripts.pory"
	waitmessage
# 105 "data/maps/CDGJ_CafeDot/scripts.pory"
	closemessage
# 107 "data/maps/CDGJ_CafeDot/scripts.pory"
	delay 60
# 109 "data/maps/CDGJ_CafeDot/scripts.pory"
	applymovement 7, RivalLeavesBuilding
# 110 "data/maps/CDGJ_CafeDot/scripts.pory"
	waitmovement
# 112 "data/maps/CDGJ_CafeDot/scripts.pory"
	removeobject 7
# 114 "data/maps/CDGJ_CafeDot/scripts.pory"
	setflag FLAG_CDGJ_INTRO_COMPLETED
# 115 "data/maps/CDGJ_CafeDot/scripts.pory"
	releaseall
	end


CDGJ_CafeDot_EventScript_ChooseStarter::
# 121 "data/maps/CDGJ_CafeDot/scripts.pory"
	msgbox CDGJ_CafeDot_EventScript_ChooseStarter_Text_0
# 122 "data/maps/CDGJ_CafeDot/scripts.pory"
	waitmessage
# 123 "data/maps/CDGJ_CafeDot/scripts.pory"
	closemessage
# 126 "data/maps/CDGJ_CafeDot/scripts.pory"
	showmonpic SPECIES_APPLIN, 10, 3
# 127 "data/maps/CDGJ_CafeDot/scripts.pory"
	msgbox CDGJ_CafeDot_EventScript_ChooseStarter_Text_1, MSGBOX_YESNO
# 128 "data/maps/CDGJ_CafeDot/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq CDGJ_CafeDot_EventScript_ChooseStarter_2
# 146 "data/maps/CDGJ_CafeDot/scripts.pory"
	hidemonpic
# 149 "data/maps/CDGJ_CafeDot/scripts.pory"
	showmonpic SPECIES_RIOLU, 10, 3
# 150 "data/maps/CDGJ_CafeDot/scripts.pory"
	msgbox CDGJ_CafeDot_EventScript_ChooseStarter_Text_2, MSGBOX_YESNO
# 151 "data/maps/CDGJ_CafeDot/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq CDGJ_CafeDot_EventScript_ChooseStarter_5
# 169 "data/maps/CDGJ_CafeDot/scripts.pory"
	hidemonpic
# 172 "data/maps/CDGJ_CafeDot/scripts.pory"
	showmonpic SPECIES_TOGEPI, 10, 3
# 173 "data/maps/CDGJ_CafeDot/scripts.pory"
	msgbox CDGJ_CafeDot_EventScript_ChooseStarter_Text_3, MSGBOX_YESNO
# 174 "data/maps/CDGJ_CafeDot/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq CDGJ_CafeDot_EventScript_ChooseStarter_8
# 193 "data/maps/CDGJ_CafeDot/scripts.pory"
	hidemonpic
# 196 "data/maps/CDGJ_CafeDot/scripts.pory"
	msgbox CDGJ_CafeDot_EventScript_ChooseStarter_Text_4
# 197 "data/maps/CDGJ_CafeDot/scripts.pory"
	call CDGJ_CafeDot_EventScript_ChooseStarter
	return

CDGJ_CafeDot_EventScript_ChooseStarter_2:
# 129 "data/maps/CDGJ_CafeDot/scripts.pory"
	givemon SPECIES_APPLIN, 5, ITEM_ORAN_BERRY
# 131 "data/maps/CDGJ_CafeDot/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 133 "data/maps/CDGJ_CafeDot/scripts.pory"
	setmonmove 0, 0, MOVE_BULLET_SEED
# 134 "data/maps/CDGJ_CafeDot/scripts.pory"
	setmonmove 0, 1, MOVE_WITHDRAW
# 135 "data/maps/CDGJ_CafeDot/scripts.pory"
	setmonmove 0, 2, MOVE_POUNCE
# 136 "data/maps/CDGJ_CafeDot/scripts.pory"
	setmonmove 0, 3, MOVE_DRAGON_CHEER
# 138 "data/maps/CDGJ_CafeDot/scripts.pory"
	hidemonpic
# 140 "data/maps/CDGJ_CafeDot/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 142 "data/maps/CDGJ_CafeDot/scripts.pory"
	call NicknamePartyMon
	return

CDGJ_CafeDot_EventScript_ChooseStarter_5:
# 152 "data/maps/CDGJ_CafeDot/scripts.pory"
	givemon SPECIES_RIOLU, 5, ITEM_ORAN_BERRY
# 154 "data/maps/CDGJ_CafeDot/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 156 "data/maps/CDGJ_CafeDot/scripts.pory"
	setmonmove 0, 0, MOVE_BULLET_PUNCH
# 157 "data/maps/CDGJ_CafeDot/scripts.pory"
	setmonmove 0, 1, MOVE_BULK_UP
# 158 "data/maps/CDGJ_CafeDot/scripts.pory"
	setmonmove 0, 2, MOVE_QUICK_ATTACK
# 159 "data/maps/CDGJ_CafeDot/scripts.pory"
	setmonmove 0, 3, MOVE_POISON_JAB
# 161 "data/maps/CDGJ_CafeDot/scripts.pory"
	hidemonpic
# 163 "data/maps/CDGJ_CafeDot/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 165 "data/maps/CDGJ_CafeDot/scripts.pory"
	call NicknamePartyMon
	return

CDGJ_CafeDot_EventScript_ChooseStarter_8:
# 175 "data/maps/CDGJ_CafeDot/scripts.pory"
	givemon SPECIES_TOGEPI, 5, ITEM_ORAN_BERRY
# 177 "data/maps/CDGJ_CafeDot/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 179 "data/maps/CDGJ_CafeDot/scripts.pory"
	setmonmove 0, 0, MOVE_FAIRY_WIND
# 180 "data/maps/CDGJ_CafeDot/scripts.pory"
	setmonmove 0, 1, MOVE_METRONOME
# 181 "data/maps/CDGJ_CafeDot/scripts.pory"
	setmonmove 0, 2, MOVE_METRONOME
# 182 "data/maps/CDGJ_CafeDot/scripts.pory"
	setmonmove 0, 3, MOVE_METRONOME
# 184 "data/maps/CDGJ_CafeDot/scripts.pory"
	hidemonpic
# 186 "data/maps/CDGJ_CafeDot/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 188 "data/maps/CDGJ_CafeDot/scripts.pory"
	call NicknamePartyMon
	return


NicknamePartyMon::
# 203 "data/maps/CDGJ_CafeDot/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 204 "data/maps/CDGJ_CafeDot/scripts.pory"
	hidemonpic
# 206 "data/maps/CDGJ_CafeDot/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon_1
	return

NicknamePartyMon_1:
# 207 "data/maps/CDGJ_CafeDot/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 208 "data/maps/CDGJ_CafeDot/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


# 212 "data/maps/CDGJ_CafeDot/scripts.pory"
PlayerLoadsInWalksUp:
# 213 "data/maps/CDGJ_CafeDot/scripts.pory"
	walk_up
# 213 "data/maps/CDGJ_CafeDot/scripts.pory"
	walk_up
	step_end

# 216 "data/maps/CDGJ_CafeDot/scripts.pory"
RivalGreetsPlayer:
# 217 "data/maps/CDGJ_CafeDot/scripts.pory"
	walk_down
# 217 "data/maps/CDGJ_CafeDot/scripts.pory"
	walk_down
# 218 "data/maps/CDGJ_CafeDot/scripts.pory"
	walk_left
# 218 "data/maps/CDGJ_CafeDot/scripts.pory"
	walk_left
# 218 "data/maps/CDGJ_CafeDot/scripts.pory"
	walk_left
# 218 "data/maps/CDGJ_CafeDot/scripts.pory"
	walk_left
# 218 "data/maps/CDGJ_CafeDot/scripts.pory"
	walk_left
# 218 "data/maps/CDGJ_CafeDot/scripts.pory"
	walk_left
# 219 "data/maps/CDGJ_CafeDot/scripts.pory"
	face_down
	step_end

# 222 "data/maps/CDGJ_CafeDot/scripts.pory"
RivalWalksBackToSeat:
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
# 224 "data/maps/CDGJ_CafeDot/scripts.pory"
	walk_up
# 225 "data/maps/CDGJ_CafeDot/scripts.pory"
	face_right
	step_end

# 228 "data/maps/CDGJ_CafeDot/scripts.pory"
PlayerWalksToSeatNextToRival:
# 229 "data/maps/CDGJ_CafeDot/scripts.pory"
	walk_right
# 229 "data/maps/CDGJ_CafeDot/scripts.pory"
	walk_right
# 229 "data/maps/CDGJ_CafeDot/scripts.pory"
	walk_right
# 229 "data/maps/CDGJ_CafeDot/scripts.pory"
	walk_right
# 229 "data/maps/CDGJ_CafeDot/scripts.pory"
	walk_right
# 229 "data/maps/CDGJ_CafeDot/scripts.pory"
	walk_right
# 229 "data/maps/CDGJ_CafeDot/scripts.pory"
	walk_right
# 229 "data/maps/CDGJ_CafeDot/scripts.pory"
	walk_right
# 230 "data/maps/CDGJ_CafeDot/scripts.pory"
	walk_up
# 230 "data/maps/CDGJ_CafeDot/scripts.pory"
	walk_up
# 230 "data/maps/CDGJ_CafeDot/scripts.pory"
	walk_up
# 231 "data/maps/CDGJ_CafeDot/scripts.pory"
	face_left
	step_end

# 234 "data/maps/CDGJ_CafeDot/scripts.pory"
RivalTakesABreather:
# 235 "data/maps/CDGJ_CafeDot/scripts.pory"
	walk_down
# 236 "data/maps/CDGJ_CafeDot/scripts.pory"
	delay_16
# 237 "data/maps/CDGJ_CafeDot/scripts.pory"
	delay_16
# 238 "data/maps/CDGJ_CafeDot/scripts.pory"
	delay_16
# 239 "data/maps/CDGJ_CafeDot/scripts.pory"
	delay_16
# 240 "data/maps/CDGJ_CafeDot/scripts.pory"
	walk_up
# 241 "data/maps/CDGJ_CafeDot/scripts.pory"
	face_right
	step_end

# 244 "data/maps/CDGJ_CafeDot/scripts.pory"
RivalIsShocked:
# 245 "data/maps/CDGJ_CafeDot/scripts.pory"
	emote_exclamation_mark
# 246 "data/maps/CDGJ_CafeDot/scripts.pory"
	delay_16
# 247 "data/maps/CDGJ_CafeDot/scripts.pory"
	face_left
# 248 "data/maps/CDGJ_CafeDot/scripts.pory"
	delay_16
# 249 "data/maps/CDGJ_CafeDot/scripts.pory"
	face_right
# 250 "data/maps/CDGJ_CafeDot/scripts.pory"
	delay_16
# 251 "data/maps/CDGJ_CafeDot/scripts.pory"
	face_down
	step_end

# 254 "data/maps/CDGJ_CafeDot/scripts.pory"
RivalLooksAtPokemon:
# 255 "data/maps/CDGJ_CafeDot/scripts.pory"
	face_up
	step_end

# 258 "data/maps/CDGJ_CafeDot/scripts.pory"
RivalLooksAtDoor:
# 259 "data/maps/CDGJ_CafeDot/scripts.pory"
	face_down
	step_end

# 262 "data/maps/CDGJ_CafeDot/scripts.pory"
RivalLeavesBuilding:
# 263 "data/maps/CDGJ_CafeDot/scripts.pory"
	walk_down
# 263 "data/maps/CDGJ_CafeDot/scripts.pory"
	walk_down
# 263 "data/maps/CDGJ_CafeDot/scripts.pory"
	walk_down
# 264 "data/maps/CDGJ_CafeDot/scripts.pory"
	walk_left
# 264 "data/maps/CDGJ_CafeDot/scripts.pory"
	walk_left
# 264 "data/maps/CDGJ_CafeDot/scripts.pory"
	walk_left
# 264 "data/maps/CDGJ_CafeDot/scripts.pory"
	walk_left
# 264 "data/maps/CDGJ_CafeDot/scripts.pory"
	walk_left
# 265 "data/maps/CDGJ_CafeDot/scripts.pory"
	walk_down
# 265 "data/maps/CDGJ_CafeDot/scripts.pory"
	walk_down
# 265 "data/maps/CDGJ_CafeDot/scripts.pory"
	walk_down
	step_end

CDGJ_CafeDot_EventScript_Patron_STORYMODE_Dialogue::
# 272 "data/maps/CDGJ_CafeDot/scripts.pory"
	lockall
# 274 "data/maps/CDGJ_CafeDot/scripts.pory"
	applymovement LOCALID_CAFE_PATRON_3, FacePlayer
# 275 "data/maps/CDGJ_CafeDot/scripts.pory"
	waitmovement
# 277 "data/maps/CDGJ_CafeDot/scripts.pory"
	msgbox CDGJ_CafeDot_EventScript_Patron_STORYMODE_Dialogue_Text_0, MSGBOX_YESNO
# 278 "data/maps/CDGJ_CafeDot/scripts.pory"
	waitmessage
# 279 "data/maps/CDGJ_CafeDot/scripts.pory"
	closemessage
# 281 "data/maps/CDGJ_CafeDot/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq CDGJ_CafeDot_EventScript_Patron_STORYMODE_Dialogue_2
# 288 "data/maps/CDGJ_CafeDot/scripts.pory"
	msgbox CDGJ_CafeDot_EventScript_Patron_STORYMODE_Dialogue_Text_1
# 289 "data/maps/CDGJ_CafeDot/scripts.pory"
	waitmessage
# 290 "data/maps/CDGJ_CafeDot/scripts.pory"
	closemessage
CDGJ_CafeDot_EventScript_Patron_STORYMODE_Dialogue_1:
# 293 "data/maps/CDGJ_CafeDot/scripts.pory"
	releaseall
	end

CDGJ_CafeDot_EventScript_Patron_STORYMODE_Dialogue_2:
# 282 "data/maps/CDGJ_CafeDot/scripts.pory"
	giveitem ITEM_RARE_CANDY, 999
# 283 "data/maps/CDGJ_CafeDot/scripts.pory"
	giveitem ITEM_ULTRA_BALL, 999
# 284 "data/maps/CDGJ_CafeDot/scripts.pory"
	giveitem ITEM_FULL_RESTORE, 999
# 285 "data/maps/CDGJ_CafeDot/scripts.pory"
	giveitem ITEM_MAX_REVIVE, 999
# 286 "data/maps/CDGJ_CafeDot/scripts.pory"
	giveitem ITEM_MAX_REPEL, 999
	goto CDGJ_CafeDot_EventScript_Patron_STORYMODE_Dialogue_1


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
EmoteQuestionMark:
# 380 "data/maps/CDGJ_CafeDot/scripts.pory"
	emote_question_mark
	step_end

# 383 "data/maps/CDGJ_CafeDot/scripts.pory"
EmoteHeart:
# 384 "data/maps/CDGJ_CafeDot/scripts.pory"
	emote_heart
	step_end

# 387 "data/maps/CDGJ_CafeDot/scripts.pory"
FacePlayer:
# 388 "data/maps/CDGJ_CafeDot/scripts.pory"
	face_player
	step_end

# 391 "data/maps/CDGJ_CafeDot/scripts.pory"
FaceLeft:
# 392 "data/maps/CDGJ_CafeDot/scripts.pory"
	face_left
	step_end

# 395 "data/maps/CDGJ_CafeDot/scripts.pory"
FaceRight:
# 396 "data/maps/CDGJ_CafeDot/scripts.pory"
	face_right
	step_end

# 399 "data/maps/CDGJ_CafeDot/scripts.pory"
FaceDown:
# 400 "data/maps/CDGJ_CafeDot/scripts.pory"
	face_down
	step_end

# 403 "data/maps/CDGJ_CafeDot/scripts.pory"
FaceUp:
# 404 "data/maps/CDGJ_CafeDot/scripts.pory"
	face_up
	step_end

# 407 "data/maps/CDGJ_CafeDot/scripts.pory"
FaceOriginalDirection:
# 408 "data/maps/CDGJ_CafeDot/scripts.pory"
	face_original_direction
	step_end

# 411 "data/maps/CDGJ_CafeDot/scripts.pory"
JumpInPlace:
# 412 "data/maps/CDGJ_CafeDot/scripts.pory"
	face_player
# 413 "data/maps/CDGJ_CafeDot/scripts.pory"
	jump_in_place_down
# 414 "data/maps/CDGJ_CafeDot/scripts.pory"
	jump_in_place_down
# 415 "data/maps/CDGJ_CafeDot/scripts.pory"
	jump_in_place_down
# 416 "data/maps/CDGJ_CafeDot/scripts.pory"
	face_player
	step_end

CDGJ_CafeDot_EventScript_Item_OnTable::
# 423 "data/maps/CDGJ_CafeDot/scripts.pory"
	giveitem ITEM_MOOMOO_MILK, 1
# 424 "data/maps/CDGJ_CafeDot/scripts.pory"
	waitmessage
# 425 "data/maps/CDGJ_CafeDot/scripts.pory"
	closemessage
# 427 "data/maps/CDGJ_CafeDot/scripts.pory"
	setflag FLAG_CDGJ_OBTAIN_CAFE_DOT_MOOMOO_MILK
# 429 "data/maps/CDGJ_CafeDot/scripts.pory"
	removeobject 6
	end


CDGJ_CafeDot_EventScript_NewGameIntro_Text_0:
# 24 "data/maps/CDGJ_CafeDot/scripts.pory"
	.string "...\pHey!$"

CDGJ_CafeDot_EventScript_NewGameIntro_Text_1:
# 32 "data/maps/CDGJ_CafeDot/scripts.pory"
	.string "{PLAYER}!\pYou made it!\p...\pI was hoping we could meet\nsomewhere quiet.$"

CDGJ_CafeDot_EventScript_NewGameIntro_Text_2:
# 41 "data/maps/CDGJ_CafeDot/scripts.pory"
	.string "Have you heard the news yet?$"

CDGJ_CafeDot_EventScript_NewGameIntro_Text_3:
# 45 "data/maps/CDGJ_CafeDot/scripts.pory"
	.string "I guess I should say it\nout loud...\p...\p...$"

CDGJ_CafeDot_EventScript_NewGameIntro_Text_4:
# 48 "data/maps/CDGJ_CafeDot/scripts.pory"
	.string "I'm retiring.\nFrom the Gym.$"

CDGJ_CafeDot_EventScript_NewGameIntro_Text_5:
# 51 "data/maps/CDGJ_CafeDot/scripts.pory"
	.string "Today's my last day as Merriwave\ngym leader.\pThe festival of thanks is tonight.\pEveryone's been really kind\nabout retirement. Truly.$"

CDGJ_CafeDot_EventScript_NewGameIntro_Text_6:
# 58 "data/maps/CDGJ_CafeDot/scripts.pory"
	.string "Honestly, I think being Champion\nwas easier.$"

CDGJ_CafeDot_EventScript_NewGameIntro_Text_7:
# 62 "data/maps/CDGJ_CafeDot/scripts.pory"
	.string "Y'know, before I decided to be\na gym leader instead.$"

CDGJ_CafeDot_EventScript_NewGameIntro_Text_8:
# 66 "data/maps/CDGJ_CafeDot/scripts.pory"
	.string "I didn't have as many\nresponsibilities to the town\llike I do now...\pBattles are easy. They have rules.\pPeople don't.$"

CDGJ_CafeDot_EventScript_NewGameIntro_Text_9:
# 70 "data/maps/CDGJ_CafeDot/scripts.pory"
	.string "Anyway.$"

CDGJ_CafeDot_EventScript_NewGameIntro_Text_10:
# 74 "data/maps/CDGJ_CafeDot/scripts.pory"
	.string "I didn't just ask you here to\nunload all that!$"

CDGJ_CafeDot_EventScript_NewGameIntro_Text_11:
# 78 "data/maps/CDGJ_CafeDot/scripts.pory"
	.string "I wanted to give you something!$"

CDGJ_CafeDot_EventScript_NewGameIntro_Text_12:
# 85 "data/maps/CDGJ_CafeDot/scripts.pory"
	.string "Good choice.$"

CDGJ_CafeDot_EventScript_NewGameIntro_Text_13:
# 91 "data/maps/CDGJ_CafeDot/scripts.pory"
	.string "You know...$"

CDGJ_CafeDot_EventScript_NewGameIntro_Text_14:
# 95 "data/maps/CDGJ_CafeDot/scripts.pory"
	.string "It's never too late to start\nbeing a trainer.$"

CDGJ_CafeDot_EventScript_NewGameIntro_Text_15:
# 103 "data/maps/CDGJ_CafeDot/scripts.pory"
	.string "Let's step outside for a minute.$"

CDGJ_CafeDot_EventScript_ChooseStarter_Text_0:
# 121 "data/maps/CDGJ_CafeDot/scripts.pory"
	.string "Take your time.\pThey're all good Pokémon.$"

CDGJ_CafeDot_EventScript_ChooseStarter_Text_1:
# 127 "data/maps/CDGJ_CafeDot/scripts.pory"
	.string "Applin, the Apple Core Pokémon.\pDo you want this Pokémon?$"

CDGJ_CafeDot_EventScript_ChooseStarter_Text_2:
# 150 "data/maps/CDGJ_CafeDot/scripts.pory"
	.string "Riolu, the Emanation Pokémon.\pDo you want this Pokémon?$"

CDGJ_CafeDot_EventScript_ChooseStarter_Text_3:
# 173 "data/maps/CDGJ_CafeDot/scripts.pory"
	.string "Togepi, the Spike Ball Pokémon.\pDo you want this Pokémon?$"

CDGJ_CafeDot_EventScript_ChooseStarter_Text_4:
# 196 "data/maps/CDGJ_CafeDot/scripts.pory"
	.string "Take another look!$"

NicknamePartyMon_Text_0:
# 203 "data/maps/CDGJ_CafeDot/scripts.pory"
	.string "Nickname your new Pokémon?$"

CDGJ_CafeDot_EventScript_Patron_STORYMODE_Dialogue_Text_0:
# 277 "data/maps/CDGJ_CafeDot/scripts.pory"
	.string "(Story Mode) Do you want to play\non story mode?\pThis will give you some optional\nitems to make your time easier in\pthis ROM Hack.\nNot recommended for best experience.$"

CDGJ_CafeDot_EventScript_Patron_STORYMODE_Dialogue_Text_1:
# 288 "data/maps/CDGJ_CafeDot/scripts.pory"
	.string "Enjoy playing!$"

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
