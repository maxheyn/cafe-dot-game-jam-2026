CDGJ_CafeDot_Festive_MapScripts::
# 2 "data/maps/CDGJ_CafeDot_Festive/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, CDGJ_CafeDot_Festive_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

CDGJ_CafeDot_Festive_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/CDGJ_CafeDot_Festive/scripts.pory"
	map_script_2 VAR_CDGJ_CAFE_POSTGAME_STATE, 0, CDGJ_CafeDot_Festive_EventScript_IntroForPostGame
	.2byte 0


CDGJ_CafeDot_Festive_EventScript_IntroForPostGame::
# 8 "data/maps/CDGJ_CafeDot_Festive/scripts.pory"
	lockall
# 10 "data/maps/CDGJ_CafeDot_Festive/scripts.pory"
	applymovement LOCALID_PLAYER, PlayerMoveUpOne
# 11 "data/maps/CDGJ_CafeDot_Festive/scripts.pory"
	waitmovement
# 13 "data/maps/CDGJ_CafeDot_Festive/scripts.pory"
	applymovement LOCALID_BARISTA_POSTGAME_1, EmoteExclamationMark
# 14 "data/maps/CDGJ_CafeDot_Festive/scripts.pory"
	waitmovement
# 15 "data/maps/CDGJ_CafeDot_Festive/scripts.pory"
	delay 30
# 16 "data/maps/CDGJ_CafeDot_Festive/scripts.pory"
	applymovement LOCALID_BARISTA_POSTGAME_1, BaristaMoveToPlayerOnEnter
# 17 "data/maps/CDGJ_CafeDot_Festive/scripts.pory"
	waitmovement
# 19 "data/maps/CDGJ_CafeDot_Festive/scripts.pory"
	msgbox CDGJ_CafeDot_Festive_EventScript_IntroForPostGame_Text_0
# 20 "data/maps/CDGJ_CafeDot_Festive/scripts.pory"
	waitmessage
# 21 "data/maps/CDGJ_CafeDot_Festive/scripts.pory"
	closemessage
# 23 "data/maps/CDGJ_CafeDot_Festive/scripts.pory"
	applymovement LOCALID_BARISTA_POSTGAME_1, BaristaMoveBackToSeat
# 24 "data/maps/CDGJ_CafeDot_Festive/scripts.pory"
	waitmovement
# 26 "data/maps/CDGJ_CafeDot_Festive/scripts.pory"
	setvar VAR_CDGJ_CAFE_POSTGAME_STATE, 1
# 28 "data/maps/CDGJ_CafeDot_Festive/scripts.pory"
	releaseall
	end


CDGJ_CafeDot_Festive_EventScript_NeverBeenInACompetitionBefore::
# 34 "data/maps/CDGJ_CafeDot_Festive/scripts.pory"
	faceplayer
# 35 "data/maps/CDGJ_CafeDot_Festive/scripts.pory"
	msgbox CDGJ_CafeDot_Festive_EventScript_NeverBeenInACompetitionBefore_Text_0
# 36 "data/maps/CDGJ_CafeDot_Festive/scripts.pory"
	waitmessage
# 37 "data/maps/CDGJ_CafeDot_Festive/scripts.pory"
	closemessage
# 38 "data/maps/CDGJ_CafeDot_Festive/scripts.pory"
	release
	return


CDGJ_CafeDot_Festive_EventScript_OhWowYouLookStrongButAreYou::
# 42 "data/maps/CDGJ_CafeDot_Festive/scripts.pory"
	faceplayer
# 43 "data/maps/CDGJ_CafeDot_Festive/scripts.pory"
	msgbox CDGJ_CafeDot_Festive_EventScript_OhWowYouLookStrongButAreYou_Text_0
# 44 "data/maps/CDGJ_CafeDot_Festive/scripts.pory"
	waitmessage
# 45 "data/maps/CDGJ_CafeDot_Festive/scripts.pory"
	closemessage
# 46 "data/maps/CDGJ_CafeDot_Festive/scripts.pory"
	release
	return


CDGJ_CafeDot_Festive_EventScript_Barista1::
# 50 "data/maps/CDGJ_CafeDot_Festive/scripts.pory"
	faceplayer
# 51 "data/maps/CDGJ_CafeDot_Festive/scripts.pory"
	msgbox CDGJ_CafeDot_Festive_EventScript_Barista1_Text_0
# 52 "data/maps/CDGJ_CafeDot_Festive/scripts.pory"
	waitmessage
# 53 "data/maps/CDGJ_CafeDot_Festive/scripts.pory"
	closemessage
# 54 "data/maps/CDGJ_CafeDot_Festive/scripts.pory"
	release
	return


CDGJ_CafeDot_Festive_EventScript_Barista2::
# 58 "data/maps/CDGJ_CafeDot_Festive/scripts.pory"
	faceplayer
# 59 "data/maps/CDGJ_CafeDot_Festive/scripts.pory"
	msgbox CDGJ_CafeDot_Festive_EventScript_Barista1_Text_0
# 60 "data/maps/CDGJ_CafeDot_Festive/scripts.pory"
	waitmessage
# 61 "data/maps/CDGJ_CafeDot_Festive/scripts.pory"
	closemessage
# 62 "data/maps/CDGJ_CafeDot_Festive/scripts.pory"
	release
	return


CDGJ_CafeDot_Festival_EventScript_BattleAster::
# 66 "data/maps/CDGJ_CafeDot_Festive/scripts.pory"
	faceplayer
# 68 "data/maps/CDGJ_CafeDot_Festive/scripts.pory"
	goto_if_set FLAG_CDGJ_ASTER_BEATEN, CDGJ_CafeDot_Festival_EventScript_BattleAster_2
# 78 "data/maps/CDGJ_CafeDot_Festive/scripts.pory"
	msgbox CDGJ_CafeDot_Festival_EventScript_BattleAster_Text_1, MSGBOX_YESNO
# 80 "data/maps/CDGJ_CafeDot_Festive/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq CDGJ_CafeDot_Festival_EventScript_BattleAster_5
CDGJ_CafeDot_Festival_EventScript_BattleAster_4:
# 89 "data/maps/CDGJ_CafeDot_Festive/scripts.pory"
	waitmessage
# 90 "data/maps/CDGJ_CafeDot_Festive/scripts.pory"
	closemessage
# 92 "data/maps/CDGJ_CafeDot_Festive/scripts.pory"
	release
	end

CDGJ_CafeDot_Festival_EventScript_BattleAster_2:
# 69 "data/maps/CDGJ_CafeDot_Festive/scripts.pory"
	msgbox CDGJ_CafeDot_Festival_EventScript_BattleAster_Text_0
# 70 "data/maps/CDGJ_CafeDot_Festive/scripts.pory"
	waitmessage
# 71 "data/maps/CDGJ_CafeDot_Festive/scripts.pory"
	closemessage
# 73 "data/maps/CDGJ_CafeDot_Festive/scripts.pory"
	release
	end

CDGJ_CafeDot_Festival_EventScript_BattleAster_5:
# 81 "data/maps/CDGJ_CafeDot_Festive/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_5, CDGJ_CafeDot_Festival_EventScript_BattleAster_Text_2, CDGJ_CafeDot_Festival_EventScript_BattleAster_Text_3
# 86 "data/maps/CDGJ_CafeDot_Festive/scripts.pory"
	setflag FLAG_CDGJ_ASTER_BEATEN
	goto CDGJ_CafeDot_Festival_EventScript_BattleAster_4


CDGJ_CafeDot_Festival_EventScript_BattleCallie::
# 98 "data/maps/CDGJ_CafeDot_Festive/scripts.pory"
	faceplayer
# 100 "data/maps/CDGJ_CafeDot_Festive/scripts.pory"
	goto_if_set FLAG_CDGJ_CALLIE_BEATEN, CDGJ_CafeDot_Festival_EventScript_BattleCallie_2
# 110 "data/maps/CDGJ_CafeDot_Festive/scripts.pory"
	msgbox CDGJ_CafeDot_Festival_EventScript_BattleCallie_Text_1, MSGBOX_YESNO
# 112 "data/maps/CDGJ_CafeDot_Festive/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq CDGJ_CafeDot_Festival_EventScript_BattleCallie_5
CDGJ_CafeDot_Festival_EventScript_BattleCallie_4:
# 121 "data/maps/CDGJ_CafeDot_Festive/scripts.pory"
	waitmessage
# 122 "data/maps/CDGJ_CafeDot_Festive/scripts.pory"
	closemessage
# 124 "data/maps/CDGJ_CafeDot_Festive/scripts.pory"
	release
	end

CDGJ_CafeDot_Festival_EventScript_BattleCallie_2:
# 101 "data/maps/CDGJ_CafeDot_Festive/scripts.pory"
	msgbox CDGJ_CafeDot_Festival_EventScript_BattleCallie_Text_0
# 102 "data/maps/CDGJ_CafeDot_Festive/scripts.pory"
	waitmessage
# 103 "data/maps/CDGJ_CafeDot_Festive/scripts.pory"
	closemessage
# 105 "data/maps/CDGJ_CafeDot_Festive/scripts.pory"
	release
	end

CDGJ_CafeDot_Festival_EventScript_BattleCallie_5:
# 113 "data/maps/CDGJ_CafeDot_Festive/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_6, CDGJ_CafeDot_Festival_EventScript_BattleAster_Text_2, CDGJ_CafeDot_Festival_EventScript_BattleCallie_Text_2
# 118 "data/maps/CDGJ_CafeDot_Festive/scripts.pory"
	setflag FLAG_CDGJ_CALLIE_BEATEN
	goto CDGJ_CafeDot_Festival_EventScript_BattleCallie_4


CDGJ_CafeDot_Festival_EventScript_BattleAnie::
# 130 "data/maps/CDGJ_CafeDot_Festive/scripts.pory"
	faceplayer
# 132 "data/maps/CDGJ_CafeDot_Festive/scripts.pory"
	goto_if_set FLAG_CDGJ_ANIE_BEATEN, CDGJ_CafeDot_Festival_EventScript_BattleAnie_2
# 142 "data/maps/CDGJ_CafeDot_Festive/scripts.pory"
	msgbox CDGJ_CafeDot_Festival_EventScript_BattleAnie_Text_1, MSGBOX_YESNO
# 144 "data/maps/CDGJ_CafeDot_Festive/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq CDGJ_CafeDot_Festival_EventScript_BattleAnie_5
CDGJ_CafeDot_Festival_EventScript_BattleAnie_4:
# 153 "data/maps/CDGJ_CafeDot_Festive/scripts.pory"
	waitmessage
# 154 "data/maps/CDGJ_CafeDot_Festive/scripts.pory"
	closemessage
# 156 "data/maps/CDGJ_CafeDot_Festive/scripts.pory"
	release
	end

CDGJ_CafeDot_Festival_EventScript_BattleAnie_2:
# 133 "data/maps/CDGJ_CafeDot_Festive/scripts.pory"
	msgbox CDGJ_CafeDot_Festival_EventScript_BattleAnie_Text_0
# 134 "data/maps/CDGJ_CafeDot_Festive/scripts.pory"
	waitmessage
# 135 "data/maps/CDGJ_CafeDot_Festive/scripts.pory"
	closemessage
# 137 "data/maps/CDGJ_CafeDot_Festive/scripts.pory"
	release
	end

CDGJ_CafeDot_Festival_EventScript_BattleAnie_5:
# 145 "data/maps/CDGJ_CafeDot_Festive/scripts.pory"
	trainerbattle_single TRAINER_ZANDER, CDGJ_CafeDot_Festival_EventScript_BattleAster_Text_2, CDGJ_CafeDot_Festival_EventScript_BattleAnie_Text_2
# 150 "data/maps/CDGJ_CafeDot_Festive/scripts.pory"
	setflag FLAG_CDGJ_ANIE_BEATEN
	goto CDGJ_CafeDot_Festival_EventScript_BattleAnie_4


CDGJ_CafeDot_Festival_EventScript_BattleJooni::
# 162 "data/maps/CDGJ_CafeDot_Festive/scripts.pory"
	faceplayer
# 164 "data/maps/CDGJ_CafeDot_Festive/scripts.pory"
	goto_if_set FLAG_CDGJ_JOONI_BEATEN, CDGJ_CafeDot_Festival_EventScript_BattleJooni_2
# 174 "data/maps/CDGJ_CafeDot_Festive/scripts.pory"
	msgbox CDGJ_CafeDot_Festival_EventScript_BattleJooni_Text_1, MSGBOX_YESNO
# 176 "data/maps/CDGJ_CafeDot_Festive/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq CDGJ_CafeDot_Festival_EventScript_BattleJooni_5
CDGJ_CafeDot_Festival_EventScript_BattleJooni_4:
# 185 "data/maps/CDGJ_CafeDot_Festive/scripts.pory"
	waitmessage
# 186 "data/maps/CDGJ_CafeDot_Festive/scripts.pory"
	closemessage
# 188 "data/maps/CDGJ_CafeDot_Festive/scripts.pory"
	release
	end

CDGJ_CafeDot_Festival_EventScript_BattleJooni_2:
# 165 "data/maps/CDGJ_CafeDot_Festive/scripts.pory"
	msgbox CDGJ_CafeDot_Festival_EventScript_BattleJooni_Text_0
# 166 "data/maps/CDGJ_CafeDot_Festive/scripts.pory"
	waitmessage
# 167 "data/maps/CDGJ_CafeDot_Festive/scripts.pory"
	closemessage
# 169 "data/maps/CDGJ_CafeDot_Festive/scripts.pory"
	release
	end

CDGJ_CafeDot_Festival_EventScript_BattleJooni_5:
# 177 "data/maps/CDGJ_CafeDot_Festive/scripts.pory"
	trainerbattle_single TRAINER_FREDRICK, CDGJ_CafeDot_Festival_EventScript_BattleAster_Text_2, CDGJ_CafeDot_Festival_EventScript_BattleJooni_Text_2
# 182 "data/maps/CDGJ_CafeDot_Festive/scripts.pory"
	setflag FLAG_CDGJ_JOONI_BEATEN
	goto CDGJ_CafeDot_Festival_EventScript_BattleJooni_4


CDGJ_CafeDot_Festival_EventScript_BattleMax::
# 194 "data/maps/CDGJ_CafeDot_Festive/scripts.pory"
	faceplayer
# 196 "data/maps/CDGJ_CafeDot_Festive/scripts.pory"
	goto_if_set FLAG_CDGJ_MAX_BEATEN, CDGJ_CafeDot_Festival_EventScript_BattleMax_2
# 206 "data/maps/CDGJ_CafeDot_Festive/scripts.pory"
	msgbox CDGJ_CafeDot_Festival_EventScript_BattleMax_Text_1, MSGBOX_YESNO
# 208 "data/maps/CDGJ_CafeDot_Festive/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq CDGJ_CafeDot_Festival_EventScript_BattleMax_5
CDGJ_CafeDot_Festival_EventScript_BattleMax_4:
# 217 "data/maps/CDGJ_CafeDot_Festive/scripts.pory"
	waitmessage
# 218 "data/maps/CDGJ_CafeDot_Festive/scripts.pory"
	closemessage
# 220 "data/maps/CDGJ_CafeDot_Festive/scripts.pory"
	release
	end

CDGJ_CafeDot_Festival_EventScript_BattleMax_2:
# 197 "data/maps/CDGJ_CafeDot_Festive/scripts.pory"
	msgbox CDGJ_CafeDot_Festival_EventScript_BattleMax_Text_0
# 198 "data/maps/CDGJ_CafeDot_Festive/scripts.pory"
	waitmessage
# 199 "data/maps/CDGJ_CafeDot_Festive/scripts.pory"
	closemessage
# 201 "data/maps/CDGJ_CafeDot_Festive/scripts.pory"
	release
	end

CDGJ_CafeDot_Festival_EventScript_BattleMax_5:
# 209 "data/maps/CDGJ_CafeDot_Festive/scripts.pory"
	trainerbattle_single TRAINER_MATT, CDGJ_CafeDot_Festival_EventScript_BattleAster_Text_2, CDGJ_CafeDot_Festival_EventScript_BattleMax_Text_2
# 214 "data/maps/CDGJ_CafeDot_Festive/scripts.pory"
	setflag FLAG_CDGJ_MAX_BEATEN
	goto CDGJ_CafeDot_Festival_EventScript_BattleMax_4


# 225 "data/maps/CDGJ_CafeDot_Festive/scripts.pory"
PlayerMoveUpOne:
# 226 "data/maps/CDGJ_CafeDot_Festive/scripts.pory"
	walk_up
	step_end

# 229 "data/maps/CDGJ_CafeDot_Festive/scripts.pory"
BaristaMoveToPlayerOnEnter:
# 230 "data/maps/CDGJ_CafeDot_Festive/scripts.pory"
	walk_right
# 230 "data/maps/CDGJ_CafeDot_Festive/scripts.pory"
	walk_right
# 230 "data/maps/CDGJ_CafeDot_Festive/scripts.pory"
	walk_right
# 231 "data/maps/CDGJ_CafeDot_Festive/scripts.pory"
	walk_down
	step_end

# 234 "data/maps/CDGJ_CafeDot_Festive/scripts.pory"
BaristaMoveBackToSeat:
# 235 "data/maps/CDGJ_CafeDot_Festive/scripts.pory"
	walk_up
# 236 "data/maps/CDGJ_CafeDot_Festive/scripts.pory"
	walk_left
# 236 "data/maps/CDGJ_CafeDot_Festive/scripts.pory"
	walk_left
# 236 "data/maps/CDGJ_CafeDot_Festive/scripts.pory"
	walk_left
	step_end

CDGJ_CafeDot_Festive_EventScript_IntroForPostGame_Text_0:
# 19 "data/maps/CDGJ_CafeDot_Festive/scripts.pory"
	.string "Hi! Welcome to Cafe Dot!\nTo celebrate the festival, we are\phosting a Pokémon competition for strong\ntrainers! Feel free to battle them!\pThey are at the tables over here to\nyour left. If you need anything like\pbattle items or Rare Candies, the\nPokémart in town just stocked up!$"

CDGJ_CafeDot_Festive_EventScript_NeverBeenInACompetitionBefore_Text_0:
# 35 "data/maps/CDGJ_CafeDot_Festive/scripts.pory"
	.string "I've never been in a battle competition\nbefore! I'll just watch this time.\pNext time I might join in!$"

CDGJ_CafeDot_Festive_EventScript_OhWowYouLookStrongButAreYou_Text_0:
# 43 "data/maps/CDGJ_CafeDot_Festive/scripts.pory"
	.string "Oh wow! You look strong! But those\nguys over there also look\pstrong. Are you going to challenge them?$"

CDGJ_CafeDot_Festive_EventScript_Barista1_Text_0:
# 51 "data/maps/CDGJ_CafeDot_Festive/scripts.pory"
	.string "Good luck! The Pokémart in town\nis selling some good battle supplies!\pIf you are low on cash, I've heard\nthat there's someone in town who\pgives out free Nuggets!$"

CDGJ_CafeDot_Festival_EventScript_BattleAster_Text_0:
# 69 "data/maps/CDGJ_CafeDot_Festive/scripts.pory"
	.string "You've come a long way.$"

CDGJ_CafeDot_Festival_EventScript_BattleAster_Text_1:
# 78 "data/maps/CDGJ_CafeDot_Festive/scripts.pory"
	.string "Some build teams for type coverage.\nBut I just travel with my friends.\pYou ready?$"

CDGJ_CafeDot_Festival_EventScript_BattleAster_Text_2:
# 83 "data/maps/CDGJ_CafeDot_Festive/scripts.pory"
	.string "Let's do this!$"

CDGJ_CafeDot_Festival_EventScript_BattleAster_Text_3:
# 84 "data/maps/CDGJ_CafeDot_Festive/scripts.pory"
	.string "Thanks for the battle!$"

CDGJ_CafeDot_Festival_EventScript_BattleCallie_Text_0:
# 101 "data/maps/CDGJ_CafeDot_Festive/scripts.pory"
	.string "You're paying attention now, right?$"

CDGJ_CafeDot_Festival_EventScript_BattleCallie_Text_1:
# 110 "data/maps/CDGJ_CafeDot_Festive/scripts.pory"
	.string "You should pay more attention to\nyour surroundings!\pYou ready?$"

CDGJ_CafeDot_Festival_EventScript_BattleCallie_Text_2:
# 116 "data/maps/CDGJ_CafeDot_Festive/scripts.pory"
	.string "Huh. Maybe I should be paying more\nattention to battles instead.$"

CDGJ_CafeDot_Festival_EventScript_BattleAnie_Text_0:
# 133 "data/maps/CDGJ_CafeDot_Festive/scripts.pory"
	.string "I'm consistent, up until a point.$"

CDGJ_CafeDot_Festival_EventScript_BattleAnie_Text_1:
# 142 "data/maps/CDGJ_CafeDot_Festive/scripts.pory"
	.string "Don't underestimate the power\nof my Pokémon!\pYou ready?$"

CDGJ_CafeDot_Festival_EventScript_BattleAnie_Text_2:
# 148 "data/maps/CDGJ_CafeDot_Festive/scripts.pory"
	.string "Nice job! I won't pretend that it didn't\nhurt some, though!$"

CDGJ_CafeDot_Festival_EventScript_BattleJooni_Text_0:
# 165 "data/maps/CDGJ_CafeDot_Festive/scripts.pory"
	.string "Momentum's a funny thing.$"

CDGJ_CafeDot_Festival_EventScript_BattleJooni_Text_1:
# 174 "data/maps/CDGJ_CafeDot_Festive/scripts.pory"
	.string "Oh! This is the post-game easter\negg. You ready?$"

CDGJ_CafeDot_Festival_EventScript_BattleJooni_Text_2:
# 180 "data/maps/CDGJ_CafeDot_Festive/scripts.pory"
	.string "I should have taken this more seriously.$"

CDGJ_CafeDot_Festival_EventScript_BattleMax_Text_0:
# 197 "data/maps/CDGJ_CafeDot_Festive/scripts.pory"
	.string "Look, don't judge me.\nIt was funny, yeah?$"

CDGJ_CafeDot_Festival_EventScript_BattleMax_Text_1:
# 206 "data/maps/CDGJ_CafeDot_Festive/scripts.pory"
	.string "My team is kind of booty…\pYou ready?$"

CDGJ_CafeDot_Festival_EventScript_BattleMax_Text_2:
# 212 "data/maps/CDGJ_CafeDot_Festive/scripts.pory"
	.string "Well, I picked em…$"
