CDGJ_Merriwave_Town_Festive_MapScripts::
# 2 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, CDGJ_Merriwave_Town_Festive_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

CDGJ_Merriwave_Town_Festive_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	map_script_2 VAR_TEMP_0, 1, CDGJ_Merriwave_Town_Festive_ResetPlayerState
# 4 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	map_script_2 VAR_TEMP_1, 1, CDGJ_Merriwave_Town_Festive_ResetPlayerState
	.2byte 0


CDGJ_Merriwave_Town_Festive_ResetPlayerState::
# 9 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	lockall
# 10 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	setvar VAR_TEMP_0, 0
# 11 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	setvar VAR_TEMP_1, 0
# 12 "data/maps/CDGJ_Merriwave_Town_Festive/scripts.pory"
	releaseall
	end

