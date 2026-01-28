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
	releaseall
	return


# 179 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
PlayerWalkToSoup1:
# 180 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	walk_down
# 180 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	walk_down
# 180 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	walk_down
# 180 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	walk_down
# 180 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	walk_down
# 180 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	walk_down
	step_end

# 183 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
ChefReactsToPlayer1:
# 184 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	emote_question_mark
# 185 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	delay_16
# 186 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	delay_8
# 187 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	face_up
# 188 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	delay_16
	step_end

# 191 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
ChefReactsToPlayer2:
# 192 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	emote_double_exclamation_mark
# 193 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	jump_in_place_up
# 194 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	jump_in_place_up
	step_end

# 197 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
HelperWalksTowardsPlayer:
# 198 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	walk_right
# 198 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	walk_right
# 199 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	walk_up
# 199 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	walk_up
# 199 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	walk_up
	step_end

# 202 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
HelperWalksBackToSpot:
# 203 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	walk_down
# 203 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	walk_down
# 203 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	walk_down
# 204 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	walk_left
# 204 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	walk_left
# 205 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	face_right
	step_end

# 208 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
HelperWalksToPot:
# 209 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	walk_right
# 210 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	walk_up
# 211 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	walk_right
	step_end

# 215 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
HelperBackFromPot:
# 216 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	walk_left
# 217 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	walk_down
# 218 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	walk_left
# 219 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	face_right
	step_end

# 222 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
WalkUp:
# 223 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	walk_up
	step_end

# 226 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
WalkDownLockDirection:
# 227 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	lock_facing_direction
# 228 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	walk_down
# 229 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	unlock_facing_direction
	step_end

CDGJ_Merriwave_Town_Festive_EventScript_LOCALID_FESTIVAL_NPC2::
# 233 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	faceplayer
# 234 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	msgbox CDGJ_Merriwave_Town_Festive_EventScript_LOCALID_FESTIVAL_NPC2_Text_0
# 235 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	waitmessage
# 236 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	closemessage
# 237 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	release
	return


CDGJ_Merriwave_Town_Festive_EventScript_LOCALID_FESTIVAL_NPC3::
# 241 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	faceplayer
# 242 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	msgbox CDGJ_Merriwave_Town_Festive_EventScript_LOCALID_FESTIVAL_NPC3_Text_0
# 243 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	waitmessage
# 244 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	closemessage
# 245 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	release
	return


CDGJ_Merriwave_Town_Festive_EventScript_LOCALID_CHEF::
# 249 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	faceplayer
# 250 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	msgbox CDGJ_Merriwave_Town_Festive_EventScript_LOCALID_CHEF_Text_0
# 251 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	waitmessage
# 252 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	closemessage
# 253 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	release
	return


CDGJ_Merriwave_Town_Festive_EventScript_LOCALID_FESTIVAL_HELPER::
# 257 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	faceplayer
# 258 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	msgbox CDGJ_Merriwave_Town_Festive_EventScript_LOCALID_FESTIVAL_HELPER_Text_0
# 259 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	waitmessage
# 260 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	closemessage
# 261 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	release
	return


CDGJ_Merriwave_Town_Festive_EventScript_LOCALID_FESTIVAL_NPC4::
# 265 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	faceplayer
# 266 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	msgbox CDGJ_Merriwave_Town_Festive_EventScript_LOCALID_FESTIVAL_NPC4_Text_0
# 267 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	waitmessage
# 268 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	closemessage
# 269 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	release
	return


CDGJ_Merriwave_Town_Festive_EventScript_LOCALID_FESTIVAL_NPC1::
# 273 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	faceplayer
# 274 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	msgbox CDGJ_Merriwave_Town_Festive_EventScript_LOCALID_FESTIVAL_NPC1_Text_0
# 275 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	waitmessage
# 276 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	closemessage
# 277 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	release
	return


CDGJ_Merriwave_Town_Festive_EventScript_LOCALID_FESTIVAL_NPC8::
# 281 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	faceplayer
# 282 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	msgbox CDGJ_Merriwave_Town_Festive_EventScript_LOCALID_FESTIVAL_NPC8_Text_0
# 283 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	waitmessage
# 284 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	closemessage
# 285 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	release
	return


CDGJ_Merriwave_Town_Festive_EventScript_LOCALID_FESTIVAL_NPC7::
# 289 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	faceplayer
# 290 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	msgbox CDGJ_Merriwave_Town_Festive_EventScript_LOCALID_FESTIVAL_NPC7_Text_0
# 291 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	waitmessage
# 292 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	closemessage
# 293 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	release
	return


CDGJ_Merriwave_Town_Festive_EventScript_LOCALID_FESTIVAL_NPC5::
# 297 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	faceplayer
# 298 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	msgbox CDGJ_Merriwave_Town_Festive_EventScript_LOCALID_FESTIVAL_NPC5_Text_0
# 299 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	waitmessage
# 300 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	closemessage
# 301 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	release
	return


CDGJ_Merriwave_Town_Festive_EventScript_LOCALID_FESTIVAL_NPC6::
# 305 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	faceplayer
# 306 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	msgbox CDGJ_Merriwave_Town_Festive_EventScript_LOCALID_FESTIVAL_NPC5_Text_0
# 307 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	waitmessage
# 308 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	closemessage
# 309 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	release
	return


CDGJ_Merriwave_Town_Festive_EventScript_1::
# 313 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	faceplayer
# 314 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	msgbox CDGJ_Merriwave_Town_Festive_EventScript_1_Text_0
# 315 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	waitmessage
# 316 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	closemessage
# 317 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	release
	return


CDGJ_Merriwave_Town_Festive_EventScript_2::
# 321 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	faceplayer
# 322 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	msgbox CDGJ_Merriwave_Town_Festive_EventScript_2_Text_0
# 323 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	waitmessage
# 324 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	closemessage
# 325 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	release
	return


CDGJ_Merriwave_Town_Festive_EventScript_3::
# 329 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	faceplayer
# 330 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	msgbox CDGJ_Merriwave_Town_Festive_EventScript_3_Text_0
# 331 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	waitmessage
# 332 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	closemessage
# 333 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	release
	return


CDGJ_Merriwave_Town_Festive_EventScript_4::
# 337 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	faceplayer
# 338 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	msgbox CDGJ_Merriwave_Town_Festive_EventScript_4_Text_0
# 339 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	waitmessage
# 340 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	closemessage
# 341 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	release
	return


CDGJ_Merriwave_Town_Festive_EventScript_5::
# 345 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	faceplayer
# 346 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	msgbox CDGJ_Merriwave_Town_Festive_EventScript_5_Text_0
# 347 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	waitmessage
# 348 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	closemessage
# 349 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	release
	return


CDGJ_Merriwave_Town_Festive_EventScript_6::
# 353 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	faceplayer
# 354 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	msgbox CDGJ_Merriwave_Town_Festive_EventScript_6_Text_0
# 355 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	waitmessage
# 356 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	closemessage
# 357 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	release
	return


CDGJ_Merriwave_Town_Festive_EventScript_7::
# 361 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	faceplayer
# 362 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	msgbox CDGJ_Merriwave_Town_Festive_EventScript_7_Text_0
# 363 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	waitmessage
# 364 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	closemessage
# 365 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	release
	return


CDGJ_Merriwave_Town_Festive_EventScript_8::
# 369 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	faceplayer
# 370 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	msgbox CDGJ_Merriwave_Town_Festive_EventScript_8_Text_0
# 371 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	waitmessage
# 372 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	closemessage
# 373 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	release
	return


CDGJ_Merriwave_Town_Festive_EventScript_9::
# 377 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	faceplayer
# 378 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	msgbox CDGJ_Merriwave_Town_Festive_EventScript_9_Text_0
# 379 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	waitmessage
# 380 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	closemessage
# 381 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	release
	return


CDGJ_Merriwave_Town_Festive_EventScript_10::
# 385 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	faceplayer
# 386 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	msgbox CDGJ_Merriwave_Town_Festive_EventScript_10_Text_0
# 387 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	waitmessage
# 388 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	closemessage
# 389 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	giveitem ITEM_NUGGET
# 390 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	release
	return


CDGJ_Merriwave_Town_Festive_EventScript_11::
# 394 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	faceplayer
# 395 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	msgbox CDGJ_Merriwave_Town_Festive_EventScript_11_Text_0
# 396 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	waitmessage
# 397 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	closemessage
# 398 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	release
	return


CDGJ_Merriwave_Town_Festive_EventScript_FINALEBATTLE::
# 408 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	faceplayer
# 410 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	applymovement LOCALID_RIVAL_FINALE, EmoteExclamationMark
# 411 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	waitmovement
# 413 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	delay 30
# 415 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	msgbox CDGJ_Merriwave_Town_Festive_EventScript_FINALEBATTLE_Text_0
# 416 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	waitmessage
# 417 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	closemessage
# 419 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	delay 30
# 421 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	applymovement LOCALID_PLAYER, EmoteQuestionMark
# 422 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	waitmovement
# 424 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	delay 30
# 426 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	msgbox CDGJ_Merriwave_Town_Festive_EventScript_FINALEBATTLE_Text_1
# 427 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	waitmessage
# 428 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	closemessage
# 430 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	delay 30
# 432 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	applymovement LOCALID_RIVAL_FINALE, FaceUp
# 434 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	delay 60
# 435 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	delay 60
# 437 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	applymovement LOCALID_RIVAL_FINALE, FacePlayer
# 439 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	msgbox CDGJ_Merriwave_Town_Festive_EventScript_FINALEBATTLE_Text_2
# 440 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 442 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_WEATHER_INST_4, CDGJ_Merriwave_Town_Festive_EventScript_FINALEBATTLE_Text_3, CDGJ_Merriwave_Town_Festive_EventScript_FINALEBATTLE_Text_4
# 451 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
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
# 234 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	.string "Soup smells... different.\nNot for me I think!\pBut the sentiment is nice at least!$"

CDGJ_Merriwave_Town_Festive_EventScript_LOCALID_FESTIVAL_NPC3_Text_0:
# 242 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	.string "I was curious to try the soup once…\n… … … … … …\pOnce.$"

CDGJ_Merriwave_Town_Festive_EventScript_LOCALID_CHEF_Text_0:
# 250 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	.string "I hope the Pokémon like it.$"

CDGJ_Merriwave_Town_Festive_EventScript_LOCALID_FESTIVAL_HELPER_Text_0:
# 258 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	.string "All worth it.$"

CDGJ_Merriwave_Town_Festive_EventScript_LOCALID_FESTIVAL_NPC4_Text_0:
# 266 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	.string "The soup needed just three ingredients.\nSimple right?$"

CDGJ_Merriwave_Town_Festive_EventScript_LOCALID_FESTIVAL_NPC1_Text_0:
# 274 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	.string "I don't understand how anyone\ncould eat rocks.$"

CDGJ_Merriwave_Town_Festive_EventScript_LOCALID_FESTIVAL_NPC8_Text_0:
# 282 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	.string "Soup soup soup! Soup in the balloon!\n(the balloon is my tummy.)$"

CDGJ_Merriwave_Town_Festive_EventScript_LOCALID_FESTIVAL_NPC7_Text_0:
# 290 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	.string "I didn't even know there was\na festival today.\pI just came here to fart\nbut kept running into people\pand I'm too afraid to fart near other\npeople and now I've just accepted\pfate and am destined to stink.\nAlso, soup looks gross.$"

CDGJ_Merriwave_Town_Festive_EventScript_LOCALID_FESTIVAL_NPC5_Text_0:
# 298 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	.string "Still on a date.$"

CDGJ_Merriwave_Town_Festive_EventScript_1_Text_0:
# 314 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	.string "I love seeing the stall here in town\nbut it looks like they are still mainly\pgetting set up. Must be some sort\nof time constraint on their end!$"

CDGJ_Merriwave_Town_Festive_EventScript_2_Text_0:
# 322 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	.string "Man the smell of that soup is awful.\nI moved up here to get away from\pit, but it feels like there's no escape.$"

CDGJ_Merriwave_Town_Festive_EventScript_3_Text_0:
# 330 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	.string "The Pokemart kicked me out because\nI kept asking them to play\pthe KPop Demon Hunters soundtrack\nover the loudspeakers! Meanies!$"

CDGJ_Merriwave_Town_Festive_EventScript_4_Text_0:
# 338 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	.string "After the soup ceremony all of the\ntownspeople come around and do some\pshopping at the stalls!$"

CDGJ_Merriwave_Town_Festive_EventScript_5_Text_0:
# 346 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	.string "Did you know they just give the\nconstruction worker outfit to anyone\pwho asks? I majored in theater!!!$"

CDGJ_Merriwave_Town_Festive_EventScript_6_Text_0:
# 354 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	.string "My girlfriend is over there tabling!\nShe's selling custom art prints\pof frogs!$"

CDGJ_Merriwave_Town_Festive_EventScript_7_Text_0:
# 362 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	.string "This lady won't shut up about frogs, man.$"

CDGJ_Merriwave_Town_Festive_EventScript_8_Text_0:
# 370 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	.string "I draw frogs! I love frogs!\nRibbit! Ribbit!$"

CDGJ_Merriwave_Town_Festive_EventScript_9_Text_0:
# 378 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	.string "I paid for a table slot but forgot\nto actually bring any merch...$"

CDGJ_Merriwave_Town_Festive_EventScript_10_Text_0:
# 386 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	.string "I'm the Short-Term Memory Nugget Guy!\nI give out one Nugget per person!$"

CDGJ_Merriwave_Town_Festive_EventScript_11_Text_0:
# 395 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	.string "I don't even care all that much for\nthe festival. I just love being able to\pvisit Cafe Dot during this time of year!$"

CDGJ_Merriwave_Town_Festive_EventScript_FINALEBATTLE_Text_0:
# 415 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	.string "CLOVE! It's so good so see you.\nI heard you got all of the ingredients\nand the soup went well!\pI could hear it from over here.\p… … … … … …\n… … … … … …\pBut hey. I was thinking.\nMaybe there's one last thing to\pmake this festival perfect…$"

CDGJ_Merriwave_Town_Festive_EventScript_FINALEBATTLE_Text_1:
# 426 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	.string "Hah! I have been doing a lot of\nthinking since I decided to retire.\pIt turns out that none of this works,\nthe town, the festival, the\prelation between trainers and\npokemon. If none of us care\pabout each other. It turns out the\nsecret is just being there.$"

CDGJ_Merriwave_Town_Festive_EventScript_FINALEBATTLE_Text_2:
# 439 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	.string "Would you battle me?\pNot as a test. Not for a badge.\nJust one last time.\pBefore I stop being a gym leader?$"

CDGJ_Merriwave_Town_Festive_EventScript_FINALEBATTLE_Text_3:
# 444 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	.string "Let's see how far you've come.$"

CDGJ_Merriwave_Town_Festive_EventScript_FINALEBATTLE_Text_4:
# 445 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	.string "Haha! Yeah! That felt right.$"
