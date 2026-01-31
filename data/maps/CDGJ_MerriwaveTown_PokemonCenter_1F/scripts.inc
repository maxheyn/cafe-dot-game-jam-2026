CDGJ_MerriwaveTown_PokemonCenter_1F_MapScripts::
	.byte 0


CDGJ_MerriwaveTown_PokemonCenter_1F_EventScript_Nurse::
# 5 "data/maps/CDGJ_MerriwaveTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, LOCALID_MERRIWAVE_NURSE
# 6 "data/maps/CDGJ_MerriwaveTown_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 7 "data/maps/CDGJ_MerriwaveTown_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_CDGJ_MERRIWAVE_TOWN
# 8 "data/maps/CDGJ_MerriwaveTown_PokemonCenter_1F/scripts.pory"
	waitmessage
# 9 "data/maps/CDGJ_MerriwaveTown_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 10 "data/maps/CDGJ_MerriwaveTown_PokemonCenter_1F/scripts.pory"
	release
	end


CDGJ_MerriwaveTown_PokemonCenter_1F_EventScript_1::
# 15 "data/maps/CDGJ_MerriwaveTown_PokemonCenter_1F/scripts.pory"
	faceplayer
# 16 "data/maps/CDGJ_MerriwaveTown_PokemonCenter_1F/scripts.pory"
	msgbox CDGJ_MerriwaveTown_PokemonCenter_1F_EventScript_1_Text_0
# 17 "data/maps/CDGJ_MerriwaveTown_PokemonCenter_1F/scripts.pory"
	waitmessage
# 18 "data/maps/CDGJ_MerriwaveTown_PokemonCenter_1F/scripts.pory"
	closemessage
# 19 "data/maps/CDGJ_MerriwaveTown_PokemonCenter_1F/scripts.pory"
	release
	return


CDGJ_MerriwaveTown_PokemonCenter_1F_EventScript_2::
# 23 "data/maps/CDGJ_MerriwaveTown_PokemonCenter_1F/scripts.pory"
	faceplayer
# 24 "data/maps/CDGJ_MerriwaveTown_PokemonCenter_1F/scripts.pory"
	msgbox CDGJ_MerriwaveTown_PokemonCenter_1F_EventScript_2_Text_0
# 25 "data/maps/CDGJ_MerriwaveTown_PokemonCenter_1F/scripts.pory"
	waitmessage
# 26 "data/maps/CDGJ_MerriwaveTown_PokemonCenter_1F/scripts.pory"
	closemessage
# 27 "data/maps/CDGJ_MerriwaveTown_PokemonCenter_1F/scripts.pory"
	release
	return


CDGJ_MerriwaveTown_PokemonCenter_1F_EventScript_3::
# 31 "data/maps/CDGJ_MerriwaveTown_PokemonCenter_1F/scripts.pory"
	faceplayer
# 32 "data/maps/CDGJ_MerriwaveTown_PokemonCenter_1F/scripts.pory"
	msgbox CDGJ_MerriwaveTown_PokemonCenter_1F_EventScript_3_Text_0
# 33 "data/maps/CDGJ_MerriwaveTown_PokemonCenter_1F/scripts.pory"
	waitmessage
# 34 "data/maps/CDGJ_MerriwaveTown_PokemonCenter_1F/scripts.pory"
	closemessage
# 35 "data/maps/CDGJ_MerriwaveTown_PokemonCenter_1F/scripts.pory"
	release
	return


CDGJ_MerriwaveTown_PokemonCenter_1F_EventScript_1_Text_0:
# 16 "data/maps/CDGJ_MerriwaveTown_PokemonCenter_1F/scripts.pory"
	.string "Lots of people travel to Merriwave\nTown every year for the festival!$"

CDGJ_MerriwaveTown_PokemonCenter_1F_EventScript_2_Text_0:
# 24 "data/maps/CDGJ_MerriwaveTown_PokemonCenter_1F/scripts.pory"
	.string "I'm on my lunch break!$"

CDGJ_MerriwaveTown_PokemonCenter_1F_EventScript_3_Text_0:
# 32 "data/maps/CDGJ_MerriwaveTown_PokemonCenter_1F/scripts.pory"
	.string "Do you think there's more of them???$"
