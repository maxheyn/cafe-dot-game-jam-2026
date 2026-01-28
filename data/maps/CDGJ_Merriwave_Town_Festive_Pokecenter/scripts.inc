CDGJ_Merriwave_Town_Festive_Pokecenter_MapScripts::
	.byte 0


CDGJ_Merriwave_Town_Festive_Pokecenter_EventScript_Nurse::
# 4 "data/maps/CDGJ_Merriwave_Town_Festive_Pokecenter/scripts.pory"
	setvar VAR_0x800B, LOCALID_MERRIWAVE_FESTIVE_NURSE
# 5 "data/maps/CDGJ_Merriwave_Town_Festive_Pokecenter/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 6 "data/maps/CDGJ_Merriwave_Town_Festive_Pokecenter/scripts.pory"
	waitmessage
# 7 "data/maps/CDGJ_Merriwave_Town_Festive_Pokecenter/scripts.pory"
	waitbuttonpress
# 8 "data/maps/CDGJ_Merriwave_Town_Festive_Pokecenter/scripts.pory"
	release
# 9 "data/maps/CDGJ_Merriwave_Town_Festive_Pokecenter/scripts.pory"
	setrespawn HEAL_LOCATION_CDGJ_MERRIWAVE_TOWN_FESTIVE_POKECENTER
	end

