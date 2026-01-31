CDGJ_Merriwave_Town_Festive_MapScripts::
# 2 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, CDGJ_Merriwave_Town_Festive_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

CDGJ_Merriwave_Town_Festive_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	map_script_2 VAR_CDGJ_FINALE_STATE, 0, CDGJ_Merriwave_Town_Festive_Finale1
# 4 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	map_script_2 VAR_CDGJ_FINALE_STATE, 1, CDGJ_Merriwave_Town_Festive_Finale2
	.2byte 0


CDGJ_Merriwave_Town_Festive_Finale1::
# 9 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	setvar VAR_CDGJ_FINALE_STATE, 1
# 10 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	fadescreen FADE_TO_BLACK
# 11 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	warp MAP_CDGJ_MERRIWAVE_TOWN_FESTIVE, 255, 21, 19
# 12 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	waitstate
	return


CDGJ_Merriwave_Town_Festive_Finale2::
# 16 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	lockall
# 18 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	setvar VAR_CDGJ_FINALE_STATE, 2
# 20 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 22 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	delay 60
# 24 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	applymovement LOCALID_PLAYER, PlayerWalkToSoup1
# 25 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	waitmovement
# 27 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	msgbox CDGJ_Merriwave_Town_Festive_Finale2_Text_0
# 28 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	waitmessage
# 29 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	closemessage
# 31 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	applymovement LOCALID_CHEF, ChefReactsToPlayer1
# 32 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	waitmovement
# 34 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	msgbox CDGJ_Merriwave_Town_Festive_Finale2_Text_1
# 35 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	waitmessage
# 36 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	closemessage
# 38 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	applymovement LOCALID_CHEF, ChefReactsToPlayer2
# 39 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	waitmovement
# 41 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	msgbox CDGJ_Merriwave_Town_Festive_Finale2_Text_2
# 42 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	waitmessage
# 43 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	closemessage
# 45 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	applymovement LOCALID_CHEF, ChefReactsToPlayer2
# 46 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	waitmovement
# 48 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	msgbox CDGJ_Merriwave_Town_Festive_Finale2_Text_3
# 49 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	waitmessage
# 50 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	closemessage
# 52 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	applymovement LOCALID_FESTIVAL_HELPER, HelperWalksTowardsPlayer
# 53 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	waitmovement
# 55 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	msgbox CDGJ_Merriwave_Town_Festive_Finale2_Text_4
# 56 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	waitmessage
# 57 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	closemessage
# 59 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	applymovement LOCALID_FESTIVAL_HELPER, HelperWalksBackToSpot
# 60 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	waitmovement
# 62 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	delay 60
# 64 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	applymovement LOCALID_CHEF, WalkUp
# 65 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	waitmovement
# 67 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	msgbox CDGJ_Merriwave_Town_Festive_Finale2_Text_5
# 68 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	waitmessage
# 69 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	closemessage
# 71 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	applymovement LOCALID_CHEF, WalkDownLockDirection
# 72 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	waitmovement
# 74 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	delay 60
# 75 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	delay 30
# 77 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	msgbox CDGJ_Merriwave_Town_Festive_Finale2_Text_6
# 78 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	waitmessage
# 79 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	closemessage
# 81 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	applymovement LOCALID_FESTIVAL_NPC1, EmoteHeart
# 82 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	waitmovement
# 83 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	applymovement LOCALID_FESTIVAL_NPC2, EmoteHeart
# 84 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	waitmovement
# 85 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	applymovement LOCALID_FESTIVAL_NPC3, EmoteHeart
# 86 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	waitmovement
# 87 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	applymovement LOCALID_FESTIVAL_NPC4, EmoteHeart
# 88 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	waitmovement
# 89 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	applymovement LOCALID_FESTIVAL_NPC5, EmoteHeart
# 90 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	waitmovement
# 91 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	applymovement LOCALID_FESTIVAL_NPC6, EmoteHeart
# 92 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	waitmovement
# 93 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	applymovement LOCALID_FESTIVAL_NPC7, EmoteHeart
# 94 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	waitmovement
# 95 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	applymovement LOCALID_FESTIVAL_NPC8, EmoteHeart
# 96 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	waitmovement
# 97 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	applymovement LOCALID_FESTIVAL_HELPER, EmoteHeart
# 98 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	waitmovement
# 100 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	applymovement LOCALID_CHEF, FaceDown
# 101 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	waitmovement
# 103 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	delay 60
# 105 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	applymovement LOCALID_FESTIVAL_HELPER, HelperWalksToPot
# 106 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	waitmovement
# 108 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	special ShakeCamera
# 109 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	delay 60
# 111 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	special ShakeCamera
# 112 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	delay 60
# 114 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	special ShakeCamera
# 115 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	delay 60
# 117 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	msgbox CDGJ_Merriwave_Town_Festive_Finale2_Text_7
# 118 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	waitmessage
# 119 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	closemessage
# 121 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	applymovement LOCALID_FESTIVAL_HELPER, HelperBackFromPot
# 122 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	waitmovement
# 124 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	special ShakeCamera
# 125 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	delay 60
# 127 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	special ShakeCamera
# 128 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	delay 60
# 130 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	applymovement LOCALID_CHEF, ChefReactsToPlayer2
# 131 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	waitmovement
# 133 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	msgbox CDGJ_Merriwave_Town_Festive_Finale2_Text_8
# 134 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	waitmessage
# 135 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	closemessage
# 137 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	applymovement LOCALID_FESTIVAL_NPC1, EmoteHeart
# 138 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	waitmovement
# 139 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	applymovement LOCALID_FESTIVAL_NPC2, EmoteHeart
# 140 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	waitmovement
# 141 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	applymovement LOCALID_FESTIVAL_NPC3, EmoteHeart
# 142 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	waitmovement
# 143 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	applymovement LOCALID_FESTIVAL_NPC4, EmoteHeart
# 144 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	waitmovement
# 145 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	applymovement LOCALID_FESTIVAL_NPC5, EmoteHeart
# 146 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	waitmovement
# 147 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	applymovement LOCALID_FESTIVAL_NPC6, EmoteHeart
# 148 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	waitmovement
# 149 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	applymovement LOCALID_FESTIVAL_NPC7, EmoteHeart
# 150 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	waitmovement
# 151 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	applymovement LOCALID_FESTIVAL_NPC8, EmoteHeart
# 152 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	waitmovement
# 153 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	applymovement LOCALID_FESTIVAL_HELPER, EmoteHeart
# 154 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	waitmovement
# 156 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	playse SE_APPLAUSE
# 157 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	waitse
# 159 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	msgbox CDGJ_Merriwave_Town_Festive_Finale2_Text_9
# 160 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	waitmessage
# 161 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	closemessage
# 163 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	applymovement LOCALID_CHEF, WalkUp
# 164 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	waitmovement
# 166 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	msgbox CDGJ_Merriwave_Town_Festive_Finale2_Text_10
# 167 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	waitmessage
# 168 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	closemessage
# 170 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	giveitem ITEM_SACRED_ASH, 3
# 172 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	msgbox CDGJ_Merriwave_Town_Festive_Finale2_Text_11
# 173 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	waitmessage
# 174 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	closemessage
# 176 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	setrespawn HEAL_LOCATION_CDGJ_MERRIWAVE_TOWN_FESTIVE
# 178 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	releaseall
	return


# 181 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
PlayerWalkToSoup1:
# 182 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	walk_down
# 182 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	walk_down
# 182 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	walk_down
# 182 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	walk_down
# 182 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	walk_down
# 182 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	walk_down
	step_end

# 185 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
ChefReactsToPlayer1:
# 186 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	emote_question_mark
# 187 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	delay_16
# 188 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	delay_8
# 189 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	face_up
# 190 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	delay_16
	step_end

# 193 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
ChefReactsToPlayer2:
# 194 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	emote_double_exclamation_mark
# 195 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	jump_in_place_up
# 196 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	jump_in_place_up
	step_end

# 199 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
HelperWalksTowardsPlayer:
# 200 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	walk_right
# 200 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	walk_right
# 201 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	walk_up
# 201 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	walk_up
# 201 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	walk_up
	step_end

# 204 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
HelperWalksBackToSpot:
# 205 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	walk_down
# 205 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	walk_down
# 205 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	walk_down
# 206 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	walk_left
# 206 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	walk_left
# 207 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	face_right
	step_end

# 210 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
HelperWalksToPot:
# 211 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	walk_right
# 212 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	walk_up
# 213 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	walk_right
	step_end

# 217 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
HelperBackFromPot:
# 218 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	walk_left
# 219 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	walk_down
# 220 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	walk_left
# 221 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	face_right
	step_end

# 224 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
WalkUp:
# 225 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	walk_up
	step_end

# 228 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
WalkDownLockDirection:
# 229 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	lock_facing_direction
# 230 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	walk_down
# 231 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	unlock_facing_direction
	step_end

CDGJ_Merriwave_Town_Festive_EventScript_LOCALID_FESTIVAL_NPC2::
# 235 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	faceplayer
# 236 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	msgbox CDGJ_Merriwave_Town_Festive_EventScript_LOCALID_FESTIVAL_NPC2_Text_0
# 237 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	waitmessage
# 238 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	closemessage
# 239 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	release
	return


CDGJ_Merriwave_Town_Festive_EventScript_LOCALID_FESTIVAL_NPC3::
# 243 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	faceplayer
# 244 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	msgbox CDGJ_Merriwave_Town_Festive_EventScript_LOCALID_FESTIVAL_NPC3_Text_0
# 245 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	waitmessage
# 246 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	closemessage
# 247 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	release
	return


CDGJ_Merriwave_Town_Festive_EventScript_LOCALID_CHEF::
# 251 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	faceplayer
# 252 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	msgbox CDGJ_Merriwave_Town_Festive_EventScript_LOCALID_CHEF_Text_0
# 253 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	waitmessage
# 254 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	closemessage
# 255 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	release
	return


CDGJ_Merriwave_Town_Festive_EventScript_LOCALID_FESTIVAL_HELPER::
# 259 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	faceplayer
# 260 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	msgbox CDGJ_Merriwave_Town_Festive_EventScript_LOCALID_FESTIVAL_HELPER_Text_0
# 261 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	waitmessage
# 262 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	closemessage
# 263 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	release
	return


CDGJ_Merriwave_Town_Festive_EventScript_LOCALID_FESTIVAL_NPC4::
# 267 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	faceplayer
# 268 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	msgbox CDGJ_Merriwave_Town_Festive_EventScript_LOCALID_FESTIVAL_NPC4_Text_0
# 269 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	waitmessage
# 270 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	closemessage
# 271 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	release
	return


CDGJ_Merriwave_Town_Festive_EventScript_LOCALID_FESTIVAL_NPC1::
# 275 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	faceplayer
# 276 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	msgbox CDGJ_Merriwave_Town_Festive_EventScript_LOCALID_FESTIVAL_NPC1_Text_0
# 277 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	waitmessage
# 278 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	closemessage
# 279 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	release
	return


CDGJ_Merriwave_Town_Festive_EventScript_LOCALID_FESTIVAL_NPC8::
# 283 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	faceplayer
# 284 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	msgbox CDGJ_Merriwave_Town_Festive_EventScript_LOCALID_FESTIVAL_NPC8_Text_0
# 285 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	waitmessage
# 286 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	closemessage
# 287 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	release
	return


CDGJ_Merriwave_Town_Festive_EventScript_LOCALID_FESTIVAL_NPC7::
# 291 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	faceplayer
# 292 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	msgbox CDGJ_Merriwave_Town_Festive_EventScript_LOCALID_FESTIVAL_NPC7_Text_0
# 293 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	waitmessage
# 294 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	closemessage
# 295 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	release
	return


CDGJ_Merriwave_Town_Festive_EventScript_LOCALID_FESTIVAL_NPC5::
# 299 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	faceplayer
# 300 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	msgbox CDGJ_Merriwave_Town_Festive_EventScript_LOCALID_FESTIVAL_NPC5_Text_0
# 301 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	waitmessage
# 302 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	closemessage
# 303 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	release
	return


CDGJ_Merriwave_Town_Festive_EventScript_LOCALID_FESTIVAL_NPC6::
# 307 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	faceplayer
# 308 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	msgbox CDGJ_Merriwave_Town_Festive_EventScript_LOCALID_FESTIVAL_NPC5_Text_0
# 309 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	waitmessage
# 310 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	closemessage
# 311 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	release
	return


CDGJ_Merriwave_Town_Festive_EventScript_1::
# 315 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	faceplayer
# 316 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	msgbox CDGJ_Merriwave_Town_Festive_EventScript_1_Text_0
# 317 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	waitmessage
# 318 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	closemessage
# 319 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	release
	return


CDGJ_Merriwave_Town_Festive_EventScript_2::
# 323 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	faceplayer
# 324 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	msgbox CDGJ_Merriwave_Town_Festive_EventScript_2_Text_0
# 325 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	waitmessage
# 326 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	closemessage
# 327 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	release
	return


CDGJ_Merriwave_Town_Festive_EventScript_3::
# 331 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	faceplayer
# 332 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	msgbox CDGJ_Merriwave_Town_Festive_EventScript_3_Text_0
# 333 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	waitmessage
# 334 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	closemessage
# 335 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	release
	return


CDGJ_Merriwave_Town_Festive_EventScript_4::
# 339 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	faceplayer
# 340 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	msgbox CDGJ_Merriwave_Town_Festive_EventScript_4_Text_0
# 341 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	waitmessage
# 342 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	closemessage
# 343 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	release
	return


CDGJ_Merriwave_Town_Festive_EventScript_5::
# 347 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	faceplayer
# 348 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	msgbox CDGJ_Merriwave_Town_Festive_EventScript_5_Text_0
# 349 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	waitmessage
# 350 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	closemessage
# 351 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	release
	return


CDGJ_Merriwave_Town_Festive_EventScript_6::
# 355 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	faceplayer
# 356 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	msgbox CDGJ_Merriwave_Town_Festive_EventScript_6_Text_0
# 357 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	waitmessage
# 358 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	closemessage
# 359 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	release
	return


CDGJ_Merriwave_Town_Festive_EventScript_7::
# 363 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	faceplayer
# 364 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	msgbox CDGJ_Merriwave_Town_Festive_EventScript_7_Text_0
# 365 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	waitmessage
# 366 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	closemessage
# 367 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	release
	return


CDGJ_Merriwave_Town_Festive_EventScript_8::
# 371 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	faceplayer
# 372 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	msgbox CDGJ_Merriwave_Town_Festive_EventScript_8_Text_0
# 373 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	waitmessage
# 374 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	closemessage
# 375 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	release
	return


CDGJ_Merriwave_Town_Festive_EventScript_9::
# 379 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	faceplayer
# 380 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	msgbox CDGJ_Merriwave_Town_Festive_EventScript_9_Text_0
# 381 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	waitmessage
# 382 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	closemessage
# 383 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	release
	return


CDGJ_Merriwave_Town_Festive_EventScript_10::
# 387 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	faceplayer
# 388 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	msgbox CDGJ_Merriwave_Town_Festive_EventScript_10_Text_0, MSGBOX_YESNO
# 389 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	waitmessage
# 390 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	closemessage
# 392 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq CDGJ_Merriwave_Town_Festive_EventScript_10_2
# 395 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	msgbox CDGJ_Merriwave_Town_Festive_EventScript_10_Text_1
# 396 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	waitmessage
# 397 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	closemessage
CDGJ_Merriwave_Town_Festive_EventScript_10_1:
# 400 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	release
	return

CDGJ_Merriwave_Town_Festive_EventScript_10_2:
# 393 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	giveitem ITEM_NUGGET
	goto CDGJ_Merriwave_Town_Festive_EventScript_10_1


CDGJ_Merriwave_Town_Festive_EventScript_11::
# 404 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	faceplayer
# 405 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	msgbox CDGJ_Merriwave_Town_Festive_EventScript_11_Text_0
# 406 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	waitmessage
# 407 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	closemessage
# 408 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	release
	return


CDGJ_Merriwave_Town_Festive_EventScript_FINALEBATTLE::
# 418 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	faceplayer
# 420 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	applymovement LOCALID_RIVAL_FINALE, EmoteExclamationMark
# 421 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	waitmovement
# 423 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	delay 30
# 425 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	msgbox CDGJ_Merriwave_Town_Festive_EventScript_FINALEBATTLE_Text_0
# 426 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	waitmessage
# 427 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	closemessage
# 429 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	delay 30
# 431 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	applymovement LOCALID_PLAYER, EmoteQuestionMark
# 432 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	waitmovement
# 434 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	delay 30
# 436 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	msgbox CDGJ_Merriwave_Town_Festive_EventScript_FINALEBATTLE_Text_1
# 437 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	waitmessage
# 438 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	closemessage
# 440 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	delay 30
# 442 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	applymovement LOCALID_RIVAL_FINALE, FaceUp
# 444 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	delay 60
# 445 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	delay 60
# 447 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	applymovement LOCALID_RIVAL_FINALE, FacePlayer
# 449 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	msgbox CDGJ_Merriwave_Town_Festive_EventScript_FINALEBATTLE_Text_2
# 450 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 452 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	setrespawn HEAL_LOCATION_CDGJ_MERRIWAVE_TOWN_FESTIVE
# 454 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_WEATHER_INST_4, CDGJ_Merriwave_Town_Festive_EventScript_FINALEBATTLE_Text_3, CDGJ_Merriwave_Town_Festive_EventScript_FINALEBATTLE_Text_4
# 463 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	release
	return


CDGJ_Merriwave_Town_Festive_Finale2_Text_0:
# 27 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	.string "Hello! Welcome to the Festival!$"

CDGJ_Merriwave_Town_Festive_Finale2_Text_1:
# 34 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	.string "Wait.$"

CDGJ_Merriwave_Town_Festive_Finale2_Text_2:
# 41 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	.string "Is that…?\p… … … … … …\n… … … … … …\pStone from the mountain…\pBerries from the forest…\pAnd fresh water from the lake?$"

CDGJ_Merriwave_Town_Festive_Finale2_Text_3:
# 48 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	.string "You did it! You really did it!\nPepper told us you'd come through!$"

CDGJ_Merriwave_Town_Festive_Finale2_Text_4:
# 55 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	.string "So, uhh… … …\nThis soup isn't for people.\pJust to be clear.$"

CDGJ_Merriwave_Town_Festive_Finale2_Text_5:
# 67 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	.string "We learned the hard way after some\p… … … … … …\n… … … … … …\pmishaps.$"

CDGJ_Merriwave_Town_Festive_Finale2_Text_6:
# 77 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	.string "Alright! Let's get started!$"

CDGJ_Merriwave_Town_Festive_Finale2_Text_7:
# 117 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	.string "Easy does it. The pokemon have\nbeen waiting all day.$"

CDGJ_Merriwave_Town_Festive_Finale2_Text_8:
# 133 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	.string "And there it is!$"

CDGJ_Merriwave_Town_Festive_Finale2_Text_9:
# 159 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	.string "Pokémon do so much for us.\nIt's nice to do something for them.$"

CDGJ_Merriwave_Town_Festive_Finale2_Text_10:
# 166 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	.string "Thank you CLOVE, for getting us\nthese final secret ingredients.\pHere, I want you to have some to\nshare with your Pokémon.$"

CDGJ_Merriwave_Town_Festive_Finale2_Text_11:
# 172 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	.string "Oh, and I think Pepper wanted\nto meet you by the Gym.\pBest not to keep them waiting!\nThanks again!$"

CDGJ_Merriwave_Town_Festive_EventScript_LOCALID_FESTIVAL_NPC2_Text_0:
# 236 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	.string "Soup smells... different.\nNot for me I think!\pBut the sentiment is nice at least!$"

CDGJ_Merriwave_Town_Festive_EventScript_LOCALID_FESTIVAL_NPC3_Text_0:
# 244 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	.string "I was curious to try the soup once…\n… … … … … …\pOnce.$"

CDGJ_Merriwave_Town_Festive_EventScript_LOCALID_CHEF_Text_0:
# 252 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	.string "I hope the Pokémon like it.$"

CDGJ_Merriwave_Town_Festive_EventScript_LOCALID_FESTIVAL_HELPER_Text_0:
# 260 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	.string "All worth it.$"

CDGJ_Merriwave_Town_Festive_EventScript_LOCALID_FESTIVAL_NPC4_Text_0:
# 268 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	.string "The soup needed just three ingredients.\nSimple right?$"

CDGJ_Merriwave_Town_Festive_EventScript_LOCALID_FESTIVAL_NPC1_Text_0:
# 276 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	.string "I don't understand how anyone\ncould eat rocks.$"

CDGJ_Merriwave_Town_Festive_EventScript_LOCALID_FESTIVAL_NPC8_Text_0:
# 284 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	.string "Soup soup soup! Soup in the balloon!\n(the balloon is my tummy.)$"

CDGJ_Merriwave_Town_Festive_EventScript_LOCALID_FESTIVAL_NPC7_Text_0:
# 292 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	.string "I didn't even know there was\na festival today.\pI just came here to fart\nbut kept running into people\pand I'm too afraid to fart near other\npeople and now I've just accepted\pfate and am destined to stink.\nAlso, soup looks gross.$"

CDGJ_Merriwave_Town_Festive_EventScript_LOCALID_FESTIVAL_NPC5_Text_0:
# 300 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	.string "Still on a date.$"

CDGJ_Merriwave_Town_Festive_EventScript_1_Text_0:
# 316 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	.string "I love seeing the stall here in town\nbut it looks like they are still mainly\pgetting set up. Must be some sort\nof time constraint on their end!$"

CDGJ_Merriwave_Town_Festive_EventScript_2_Text_0:
# 324 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	.string "Man the smell of that soup is awful.\nI moved up here to get away from\pit, but it feels like there's no escape.$"

CDGJ_Merriwave_Town_Festive_EventScript_3_Text_0:
# 332 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	.string "The Pokemart kicked me out because\nI kept asking them to play\pthe KPop Demon Hunters soundtrack\nover the loudspeakers! Meanies!$"

CDGJ_Merriwave_Town_Festive_EventScript_4_Text_0:
# 340 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	.string "After the soup ceremony all of the\ntownspeople come around and do some\pshopping at the stalls!$"

CDGJ_Merriwave_Town_Festive_EventScript_5_Text_0:
# 348 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	.string "Did you know they just give the\nconstruction worker outfit to anyone\pwho asks? I majored in theater!!!$"

CDGJ_Merriwave_Town_Festive_EventScript_6_Text_0:
# 356 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	.string "My girlfriend is over there tabling!\nShe's selling custom art prints\pof frogs!$"

CDGJ_Merriwave_Town_Festive_EventScript_7_Text_0:
# 364 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	.string "This lady won't shut up about frogs, man.$"

CDGJ_Merriwave_Town_Festive_EventScript_8_Text_0:
# 372 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	.string "I draw frogs! I love frogs!\nRibbit! Ribbit!$"

CDGJ_Merriwave_Town_Festive_EventScript_9_Text_0:
# 380 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	.string "I paid for a table slot but forgot\nto actually bring any merch...$"

CDGJ_Merriwave_Town_Festive_EventScript_10_Text_0:
# 388 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	.string "I'm the Short-Term Memory Nugget Guy!\nI give out one Nugget per person!\pDo you want a Nugget?$"

CDGJ_Merriwave_Town_Festive_EventScript_10_Text_1:
# 395 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	.string "Come back anytime! But remember\nonly one Nugget per person!\pI'm the Short-Term Memory Nugget Guy!$"

CDGJ_Merriwave_Town_Festive_EventScript_11_Text_0:
# 405 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	.string "I don't even care all that much for\nthe festival. I just love being able to\pvisit Cafe Dot during this time of year!$"

CDGJ_Merriwave_Town_Festive_EventScript_FINALEBATTLE_Text_0:
# 425 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	.string "CLOVE! It's so good so see you.\nI heard you got all of the ingredients\nand the soup went well!\pI could hear it from over here.\p… … … … … …\n… … … … … …\pBut hey. I was thinking.\nMaybe there's one last thing to\pmake this festival perfect…$"

CDGJ_Merriwave_Town_Festive_EventScript_FINALEBATTLE_Text_1:
# 436 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	.string "Hah! I have been doing a lot of\nthinking since I decided to retire.\pIt turns out that none of this works,\nthe town, the festival, the\prelation between trainers and\npokemon. If none of us care\pabout each other. It turns out the\nsecret is just being there.$"

CDGJ_Merriwave_Town_Festive_EventScript_FINALEBATTLE_Text_2:
# 449 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	.string "Would you battle me?\pNot as a test. Not for a badge.\nJust one last time.\pBefore I stop being a gym leader?$"

CDGJ_Merriwave_Town_Festive_EventScript_FINALEBATTLE_Text_3:
# 456 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	.string "Let's see how far you've come.$"

CDGJ_Merriwave_Town_Festive_EventScript_FINALEBATTLE_Text_4:
# 457 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	.string "Haha! Yeah! That felt right.$"
