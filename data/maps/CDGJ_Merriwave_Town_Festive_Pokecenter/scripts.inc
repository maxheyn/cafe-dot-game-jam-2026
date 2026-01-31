CDGJ_Merriwave_Town_Festive_Pokecenter_MapScripts::
	.byte 0


CDGJ_Merriwave_Town_Festive_Pokecenter_EventScript_Nurse::
# 4 "data/maps/CDGJ_Merriwave_Town_Festive_Pokecenter/scripts.pory"
	setvar VAR_0x800B, LOCALID_MERRIWAVE_FESTIVE_NURSE
# 5 "data/maps/CDGJ_Merriwave_Town_Festive_Pokecenter/scripts.pory"
	setrespawn HEAL_LOCATION_CDGJ_MERRIWAVE_TOWN_FESTIVE
# 6 "data/maps/CDGJ_Merriwave_Town_Festive_Pokecenter/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 7 "data/maps/CDGJ_Merriwave_Town_Festive_Pokecenter/scripts.pory"
	waitmessage
# 8 "data/maps/CDGJ_Merriwave_Town_Festive_Pokecenter/scripts.pory"
	waitbuttonpress
# 9 "data/maps/CDGJ_Merriwave_Town_Festive_Pokecenter/scripts.pory"
	release
	end


CDGJ_Merriwave_Town_Festive_Pokecenter_EventScript_1::
# 14 "data/maps/CDGJ_Merriwave_Town_Festive_Pokecenter/scripts.pory"
	faceplayer
# 15 "data/maps/CDGJ_Merriwave_Town_Festive_Pokecenter/scripts.pory"
	msgbox CDGJ_Merriwave_Town_Festive_Pokecenter_EventScript_1_Text_0
# 16 "data/maps/CDGJ_Merriwave_Town_Festive_Pokecenter/scripts.pory"
	waitmessage
# 17 "data/maps/CDGJ_Merriwave_Town_Festive_Pokecenter/scripts.pory"
	closemessage
# 18 "data/maps/CDGJ_Merriwave_Town_Festive_Pokecenter/scripts.pory"
	release
	return


CDGJ_Merriwave_Town_Festive_Pokecenter_EventScript_2::
# 22 "data/maps/CDGJ_Merriwave_Town_Festive_Pokecenter/scripts.pory"
	faceplayer
# 23 "data/maps/CDGJ_Merriwave_Town_Festive_Pokecenter/scripts.pory"
	msgbox CDGJ_Merriwave_Town_Festive_Pokecenter_EventScript_2_Text_0
# 24 "data/maps/CDGJ_Merriwave_Town_Festive_Pokecenter/scripts.pory"
	waitmessage
# 25 "data/maps/CDGJ_Merriwave_Town_Festive_Pokecenter/scripts.pory"
	closemessage
# 26 "data/maps/CDGJ_Merriwave_Town_Festive_Pokecenter/scripts.pory"
	release
	return


CDGJ_Merriwave_Town_Festive_Pokecenter_EventScript_3::
# 30 "data/maps/CDGJ_Merriwave_Town_Festive_Pokecenter/scripts.pory"
	faceplayer
# 31 "data/maps/CDGJ_Merriwave_Town_Festive_Pokecenter/scripts.pory"
	msgbox CDGJ_Merriwave_Town_Festive_Pokecenter_EventScript_3_Text_0
# 32 "data/maps/CDGJ_Merriwave_Town_Festive_Pokecenter/scripts.pory"
	waitmessage
# 33 "data/maps/CDGJ_Merriwave_Town_Festive_Pokecenter/scripts.pory"
	closemessage
# 34 "data/maps/CDGJ_Merriwave_Town_Festive_Pokecenter/scripts.pory"
	release
	return


CDGJ_Merriwave_Town_Festive_Pokecenter_EventScript_1_Text_0:
# 15 "data/maps/CDGJ_Merriwave_Town_Festive_Pokecenter/scripts.pory"
	.string "We both tried some of the soup.\nHad to rush here. Got told\pthat they only treat Pokémon.\nMan what is this place?$"

CDGJ_Merriwave_Town_Festive_Pokecenter_EventScript_2_Text_0:
# 23 "data/maps/CDGJ_Merriwave_Town_Festive_Pokecenter/scripts.pory"
	.string "Whatever you do, don't try the soup!$"

CDGJ_Merriwave_Town_Festive_Pokecenter_EventScript_3_Text_0:
# 31 "data/maps/CDGJ_Merriwave_Town_Festive_Pokecenter/scripts.pory"
	.string "I wonder if the other professors from\nthe various regions ever come\pto visit here. I'd love to\nmeet them!$"
