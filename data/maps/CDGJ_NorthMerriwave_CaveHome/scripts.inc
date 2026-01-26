CDGJ_NorthMerriwave_CaveHome_MapScripts::
# 2 "data/maps/CDGJ_NorthMerriwave_CaveHome/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, CDGJ_NorthMerriwave_CaveHome_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

CDGJ_NorthMerriwave_CaveHome_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/CDGJ_NorthMerriwave_CaveHome/scripts.pory"
	map_script_2 VAR_SHOAL_GET, 0, CDGJ_NorthMerriwave_CaveHome_EventScript_SHELL_LADY
	.2byte 0


CDGJ_NorthMerriwave_CaveHome_EventScript_SHELL_LADY::
# 8 "data/maps/CDGJ_NorthMerriwave_CaveHome/scripts.pory"
	goto_if_set FLAG_CDGJ_SHELL_GET, CDGJ_NorthMerriwave_CaveHome_EventScript_SHELL_LADY_2
# 15 "data/maps/CDGJ_NorthMerriwave_CaveHome/scripts.pory"
	applymovement LOCALID_SHELLLADY, SHELLLADYTOPLAYER
# 16 "data/maps/CDGJ_NorthMerriwave_CaveHome/scripts.pory"
	waitmovement
# 18 "data/maps/CDGJ_NorthMerriwave_CaveHome/scripts.pory"
	msgbox CDGJ_NorthMerriwave_CaveHome_EventScript_SHELL_LADY_Text_1
# 20 "data/maps/CDGJ_NorthMerriwave_CaveHome/scripts.pory"
	giveitem ITEM_SHELL_BELL
# 21 "data/maps/CDGJ_NorthMerriwave_CaveHome/scripts.pory"
	waitmessage
# 22 "data/maps/CDGJ_NorthMerriwave_CaveHome/scripts.pory"
	closemessage
# 24 "data/maps/CDGJ_NorthMerriwave_CaveHome/scripts.pory"
	applymovement LOCALID_SHELLLADY, SHELLLADYGOESBACKUP
# 25 "data/maps/CDGJ_NorthMerriwave_CaveHome/scripts.pory"
	waitmovement
# 26 "data/maps/CDGJ_NorthMerriwave_CaveHome/scripts.pory"
	setflag FLAG_CDGJ_SHELL_GET
# 27 "data/maps/CDGJ_NorthMerriwave_CaveHome/scripts.pory"
	setvar VAR_SHOAL_GET, 1
# 29 "data/maps/CDGJ_NorthMerriwave_CaveHome/scripts.pory"
	release
	return

CDGJ_NorthMerriwave_CaveHome_EventScript_SHELL_LADY_2:
# 9 "data/maps/CDGJ_NorthMerriwave_CaveHome/scripts.pory"
	msgbox CDGJ_NorthMerriwave_CaveHome_EventScript_SHELL_LADY_Text_0
# 10 "data/maps/CDGJ_NorthMerriwave_CaveHome/scripts.pory"
	waitmessage
# 11 "data/maps/CDGJ_NorthMerriwave_CaveHome/scripts.pory"
	closemessage
	end


# 32 "data/maps/CDGJ_NorthMerriwave_CaveHome/scripts.pory"
SHELLLADYTOPLAYER:
# 33 "data/maps/CDGJ_NorthMerriwave_CaveHome/scripts.pory"
	walk_down
# 33 "data/maps/CDGJ_NorthMerriwave_CaveHome/scripts.pory"
	walk_down
	step_end

# 36 "data/maps/CDGJ_NorthMerriwave_CaveHome/scripts.pory"
SHELLLADYGOESBACKUP:
# 37 "data/maps/CDGJ_NorthMerriwave_CaveHome/scripts.pory"
	lock_facing_direction
# 38 "data/maps/CDGJ_NorthMerriwave_CaveHome/scripts.pory"
	walk_up
# 38 "data/maps/CDGJ_NorthMerriwave_CaveHome/scripts.pory"
	walk_up
	step_end

CDGJ_NorthMerriwave_CaveHome_EventScript_SHELL_LADY_Text_0:
# 9 "data/maps/CDGJ_NorthMerriwave_CaveHome/scripts.pory"
	.string "THANK YOU FOR ACCEPTING MY GIFT.$"

CDGJ_NorthMerriwave_CaveHome_EventScript_SHELL_LADY_Text_1:
# 18 "data/maps/CDGJ_NorthMerriwave_CaveHome/scripts.pory"
	.string "IT'S DANGEROUS TO GO\nALONE! TAKE THIS.$"
