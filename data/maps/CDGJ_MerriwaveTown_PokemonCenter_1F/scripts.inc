CDGJ_MerriwaveTown_PokemonCenter_1F_MapScripts::
	.byte 0


CDGJ_MerriwaveTown_PokemonCenter_1F_EventScript_Nurse::
# 5 "data/maps/CDGJ_MerriwaveTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, LOCALID_MERRIWAVE_NURSE
# 6 "data/maps/CDGJ_MerriwaveTown_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 7 "data/maps/CDGJ_MerriwaveTown_PokemonCenter_1F/scripts.pory"
	waitmessage
# 8 "data/maps/CDGJ_MerriwaveTown_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 9 "data/maps/CDGJ_MerriwaveTown_PokemonCenter_1F/scripts.pory"
	release
# 10 "data/maps/CDGJ_MerriwaveTown_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_CDGJ_MERRIWAVE_TOWN_POKEMON_CENTER_1F
	end

