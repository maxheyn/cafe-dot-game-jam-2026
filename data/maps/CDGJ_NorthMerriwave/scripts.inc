CDGJ_NorthMerriwave_MapScripts::
	.byte 0


CDGJ_NorthMerriwave_EventScript_CaveSign::
# 4 "data/maps/CDGJ_NorthMerriwave/scripts.pory"
	lockall
# 6 "data/maps/CDGJ_NorthMerriwave/scripts.pory"
	msgbox CDGJ_NorthMerriwave_EventScript_CaveSign_Text_0
# 7 "data/maps/CDGJ_NorthMerriwave/scripts.pory"
	waitmessage
# 8 "data/maps/CDGJ_NorthMerriwave/scripts.pory"
	closemessage
# 10 "data/maps/CDGJ_NorthMerriwave/scripts.pory"
	releaseall
	end


CDGJ_NorthMerriwave_EventScript_AlcoveSign::
# 16 "data/maps/CDGJ_NorthMerriwave/scripts.pory"
	lockall
# 18 "data/maps/CDGJ_NorthMerriwave/scripts.pory"
	msgbox CDGJ_NorthMerriwave_EventScript_AlcoveSign_Text_0
# 19 "data/maps/CDGJ_NorthMerriwave/scripts.pory"
	waitmessage
# 20 "data/maps/CDGJ_NorthMerriwave/scripts.pory"
	closemessage
# 22 "data/maps/CDGJ_NorthMerriwave/scripts.pory"
	releaseall
	end


CDGJ_NorthMerriwave_EventScript_HotelSign::
# 28 "data/maps/CDGJ_NorthMerriwave/scripts.pory"
	lockall
# 30 "data/maps/CDGJ_NorthMerriwave/scripts.pory"
	msgbox CDGJ_NorthMerriwave_EventScript_HotelSign_Text_0
# 31 "data/maps/CDGJ_NorthMerriwave/scripts.pory"
	waitmessage
# 32 "data/maps/CDGJ_NorthMerriwave/scripts.pory"
	closemessage
# 34 "data/maps/CDGJ_NorthMerriwave/scripts.pory"
	releaseall
	end


CDGJ_NorthMerriwave_EventScript_RouteGreeter::
# 40 "data/maps/CDGJ_NorthMerriwave/scripts.pory"
	lockall
# 42 "data/maps/CDGJ_NorthMerriwave/scripts.pory"
	msgbox CDGJ_NorthMerriwave_EventScript_RouteGreeter_Text_0
# 43 "data/maps/CDGJ_NorthMerriwave/scripts.pory"
	waitmessage
# 44 "data/maps/CDGJ_NorthMerriwave/scripts.pory"
	closemessage
# 46 "data/maps/CDGJ_NorthMerriwave/scripts.pory"
	delay 30
# 48 "data/maps/CDGJ_NorthMerriwave/scripts.pory"
	msgbox CDGJ_NorthMerriwave_EventScript_RouteGreeter_Text_1
# 49 "data/maps/CDGJ_NorthMerriwave/scripts.pory"
	waitmessage
# 50 "data/maps/CDGJ_NorthMerriwave/scripts.pory"
	closemessage
# 52 "data/maps/CDGJ_NorthMerriwave/scripts.pory"
	releaseall
	end


CDGJ_NorthMerriwave_EventScript_NPCInfrontOfCave::
# 58 "data/maps/CDGJ_NorthMerriwave/scripts.pory"
	lockall
# 60 "data/maps/CDGJ_NorthMerriwave/scripts.pory"
	faceplayer
# 62 "data/maps/CDGJ_NorthMerriwave/scripts.pory"
	msgbox CDGJ_NorthMerriwave_EventScript_NPCInfrontOfCave_Text_0
# 63 "data/maps/CDGJ_NorthMerriwave/scripts.pory"
	waitmessage
# 64 "data/maps/CDGJ_NorthMerriwave/scripts.pory"
	closemessage
# 66 "data/maps/CDGJ_NorthMerriwave/scripts.pory"
	releaseall
	end


CDGJ_NorthMerriwave_EventScript_TrainerBattle1::
# 72 "data/maps/CDGJ_NorthMerriwave/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_4, CDGJ_NorthMerriwave_EventScript_TrainerBattle1_Text_0, CDGJ_NorthMerriwave_EventScript_TrainerBattle1_Text_1
# 78 "data/maps/CDGJ_NorthMerriwave/scripts.pory"
	msgbox CDGJ_NorthMerriwave_EventScript_TrainerBattle1_Text_2
# 79 "data/maps/CDGJ_NorthMerriwave/scripts.pory"
	waitmessage
# 80 "data/maps/CDGJ_NorthMerriwave/scripts.pory"
	closemessage
	end


CDGJ_NorthMerriwave_EventScript_TrainerBattle2::
# 86 "data/maps/CDGJ_NorthMerriwave/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_SEAFLOOR_CAVERN_1, CDGJ_NorthMerriwave_EventScript_TrainerBattle2_Text_0, CDGJ_NorthMerriwave_EventScript_TrainerBattle2_Text_1
# 92 "data/maps/CDGJ_NorthMerriwave/scripts.pory"
	msgbox CDGJ_NorthMerriwave_EventScript_TrainerBattle2_Text_2
# 93 "data/maps/CDGJ_NorthMerriwave/scripts.pory"
	waitmessage
# 94 "data/maps/CDGJ_NorthMerriwave/scripts.pory"
	closemessage
	end


CDGJ_NorthMerriwave_EventScript_TrainerBattle3::
# 100 "data/maps/CDGJ_NorthMerriwave/scripts.pory"
	trainerbattle_single TRAINER_ROSE_2, CDGJ_NorthMerriwave_EventScript_TrainerBattle3_Text_0, CDGJ_NorthMerriwave_EventScript_TrainerBattle3_Text_1
# 106 "data/maps/CDGJ_NorthMerriwave/scripts.pory"
	msgbox CDGJ_NorthMerriwave_EventScript_TrainerBattle3_Text_2
# 107 "data/maps/CDGJ_NorthMerriwave/scripts.pory"
	waitmessage
# 108 "data/maps/CDGJ_NorthMerriwave/scripts.pory"
	closemessage
	end


CDGJ_NorthMerriwave_EventScript_Item1::
# 115 "data/maps/CDGJ_NorthMerriwave/scripts.pory"
	giveitem ITEM_POKE_BALL, 10
# 116 "data/maps/CDGJ_NorthMerriwave/scripts.pory"
	waitmessage
# 117 "data/maps/CDGJ_NorthMerriwave/scripts.pory"
	closemessage
# 119 "data/maps/CDGJ_NorthMerriwave/scripts.pory"
	setflag FLAG_CDGJ_OBTAIN_NORTHMERRIWAVE_ITEM1
# 121 "data/maps/CDGJ_NorthMerriwave/scripts.pory"
	removeobject LOCALID_ITEM1
	end


CDGJ_NorthMerriwave_EventScript_Item2::
# 127 "data/maps/CDGJ_NorthMerriwave/scripts.pory"
	giveitem ITEM_EVIOLITE, 1
# 128 "data/maps/CDGJ_NorthMerriwave/scripts.pory"
	waitmessage
# 129 "data/maps/CDGJ_NorthMerriwave/scripts.pory"
	closemessage
# 131 "data/maps/CDGJ_NorthMerriwave/scripts.pory"
	setflag FLAG_CDGJ_OBTAIN_NORTHMERRIWAVE_ITEM2
# 133 "data/maps/CDGJ_NorthMerriwave/scripts.pory"
	removeobject LOCALID_ITEM2
	end


CDGJ_NorthMerriwave_EventScript_NoCanPass::
# 139 "data/maps/CDGJ_NorthMerriwave/scripts.pory"
	lockall
# 141 "data/maps/CDGJ_NorthMerriwave/scripts.pory"
	applymovement LOCALID_TOLL_GUARD, GuardApproachesPlayer
# 142 "data/maps/CDGJ_NorthMerriwave/scripts.pory"
	waitmovement
# 144 "data/maps/CDGJ_NorthMerriwave/scripts.pory"
	delay 30
# 146 "data/maps/CDGJ_NorthMerriwave/scripts.pory"
	msgbox CDGJ_NorthMerriwave_EventScript_NoCanPass_Text_0
# 147 "data/maps/CDGJ_NorthMerriwave/scripts.pory"
	waitmessage
# 148 "data/maps/CDGJ_NorthMerriwave/scripts.pory"
	closemessage
# 150 "data/maps/CDGJ_NorthMerriwave/scripts.pory"
	delay 30
# 152 "data/maps/CDGJ_NorthMerriwave/scripts.pory"
	applymovement LOCALID_TOLL_GUARD, GuardGoesBack
# 153 "data/maps/CDGJ_NorthMerriwave/scripts.pory"
	applymovement LOCALID_PLAYER, PlayerBacksUp
# 155 "data/maps/CDGJ_NorthMerriwave/scripts.pory"
	waitmovement LOCALID_TOLL_GUARD
# 157 "data/maps/CDGJ_NorthMerriwave/scripts.pory"
	releaseall
	return


# 160 "data/maps/CDGJ_NorthMerriwave/scripts.pory"
GuardApproachesPlayer:
# 161 "data/maps/CDGJ_NorthMerriwave/scripts.pory"
	emote_exclamation_mark
# 162 "data/maps/CDGJ_NorthMerriwave/scripts.pory"
	delay_16
# 163 "data/maps/CDGJ_NorthMerriwave/scripts.pory"
	delay_16
# 164 "data/maps/CDGJ_NorthMerriwave/scripts.pory"
	walk_right
	step_end

# 167 "data/maps/CDGJ_NorthMerriwave/scripts.pory"
PlayerBacksUp:
# 168 "data/maps/CDGJ_NorthMerriwave/scripts.pory"
	lock_facing_direction
# 169 "data/maps/CDGJ_NorthMerriwave/scripts.pory"
	walk_fast_right
# 170 "data/maps/CDGJ_NorthMerriwave/scripts.pory"
	unlock_facing_direction
	step_end

# 173 "data/maps/CDGJ_NorthMerriwave/scripts.pory"
GuardGoesBack:
# 174 "data/maps/CDGJ_NorthMerriwave/scripts.pory"
	walk_left
# 175 "data/maps/CDGJ_NorthMerriwave/scripts.pory"
	face_right
	step_end

CDGJ_NorthMerriwave_EventScript_WarpLogic1::
# 179 "data/maps/CDGJ_NorthMerriwave/scripts.pory"
	setvar VAR_TEMP_1, 1
# 180 "data/maps/CDGJ_NorthMerriwave/scripts.pory"
	goto_if_set FLAG_CDGJ_WATER_GET, CDGJ_NorthMerriwave_EventScript_WarpLogic1_2
# 183 "data/maps/CDGJ_NorthMerriwave/scripts.pory"
	warp MAP_MERRIWAVE_TOWN, 1
CDGJ_NorthMerriwave_EventScript_WarpLogic1_1:
# 185 "data/maps/CDGJ_NorthMerriwave/scripts.pory"
	waitstate
	end

CDGJ_NorthMerriwave_EventScript_WarpLogic1_2:
# 181 "data/maps/CDGJ_NorthMerriwave/scripts.pory"
	warp MAP_CDGJ_MERRIWAVE_TOWN_FESTIVE, 1
	goto CDGJ_NorthMerriwave_EventScript_WarpLogic1_1


CDGJ_NorthMerriwave_EventScript_WarpLogic2::
# 190 "data/maps/CDGJ_NorthMerriwave/scripts.pory"
	setvar VAR_TEMP_0, 1
# 191 "data/maps/CDGJ_NorthMerriwave/scripts.pory"
	warp MAP_TESTWARP, 255, 21, 7
# 192 "data/maps/CDGJ_NorthMerriwave/scripts.pory"
	waitstate
	end


CDGJ_NorthMerriwave_EventScript_CaveSign_Text_0:
# 6 "data/maps/CDGJ_NorthMerriwave/scripts.pory"
	.string "Flowstone Cave ahead$"

CDGJ_NorthMerriwave_EventScript_AlcoveSign_Text_0:
# 18 "data/maps/CDGJ_NorthMerriwave/scripts.pory"
	.string "Please keep out of my garden!\p… … … … … … …\p… … … … … … …\p… … … … … … …\p… … … … … … …\p… … whose garden?$"

CDGJ_NorthMerriwave_EventScript_HotelSign_Text_0:
# 30 "data/maps/CDGJ_NorthMerriwave/scripts.pory"
	.string "North Merriwave Hotel\n… … Closed for renovations!$"

CDGJ_NorthMerriwave_EventScript_RouteGreeter_Text_0:
# 42 "data/maps/CDGJ_NorthMerriwave/scripts.pory"
	.string "Headed out of town? Careful\nup ahead! The paths get rocky!$"

CDGJ_NorthMerriwave_EventScript_RouteGreeter_Text_1:
# 48 "data/maps/CDGJ_NorthMerriwave/scripts.pory"
	.string "Ah, you're helping with the\nfestival's soup?\pThe Pokémon will be thrilled!$"

CDGJ_NorthMerriwave_EventScript_NPCInfrontOfCave_Text_0:
# 62 "data/maps/CDGJ_NorthMerriwave/scripts.pory"
	.string "Cave leads up through the mountain!\nSafe travels!$"

CDGJ_NorthMerriwave_EventScript_TrainerBattle1_Text_0:
# 74 "data/maps/CDGJ_NorthMerriwave/scripts.pory"
	.string "You're a new trainer, right? Me too!$"

CDGJ_NorthMerriwave_EventScript_TrainerBattle1_Text_1:
# 75 "data/maps/CDGJ_NorthMerriwave/scripts.pory"
	.string "Wow! Your Pokémon trusts you already.$"

CDGJ_NorthMerriwave_EventScript_TrainerBattle1_Text_2:
# 78 "data/maps/CDGJ_NorthMerriwave/scripts.pory"
	.string "Good luck out there! Catch'em all!$"

CDGJ_NorthMerriwave_EventScript_TrainerBattle2_Text_0:
# 88 "data/maps/CDGJ_NorthMerriwave/scripts.pory"
	.string "I heard some lady is giving out\nshells by the seashore!$"

CDGJ_NorthMerriwave_EventScript_TrainerBattle2_Text_1:
# 89 "data/maps/CDGJ_NorthMerriwave/scripts.pory"
	.string "Awww man, I just caught these!$"

CDGJ_NorthMerriwave_EventScript_TrainerBattle2_Text_2:
# 92 "data/maps/CDGJ_NorthMerriwave/scripts.pory"
	.string "Walk walk walk walk walk walk...!$"

CDGJ_NorthMerriwave_EventScript_TrainerBattle3_Text_0:
# 102 "data/maps/CDGJ_NorthMerriwave/scripts.pory"
	.string "Ah, the great outdoors!$"

CDGJ_NorthMerriwave_EventScript_TrainerBattle3_Text_1:
# 103 "data/maps/CDGJ_NorthMerriwave/scripts.pory"
	.string "Nothin' like a little bit of fishing!$"

CDGJ_NorthMerriwave_EventScript_TrainerBattle3_Text_2:
# 106 "data/maps/CDGJ_NorthMerriwave/scripts.pory"
	.string "One day, these Magikarp will grow\nbig and strong!$"

CDGJ_NorthMerriwave_EventScript_NoCanPass_Text_0:
# 146 "data/maps/CDGJ_NorthMerriwave/scripts.pory"
	.string "Can't pass here right now.\nDoing road checks to make sure\pthat everything is safe for the\nfestival! Stay safe out there!$"
