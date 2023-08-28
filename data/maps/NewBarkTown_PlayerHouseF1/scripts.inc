NewBarkTown_PlayerHouseF1_MapScripts::
	.byte 0
	
NewBarkTown_PlayerHouseF1_BirchsBag::
	lock
	setflag FLAG_SYS_POKEMON_GET
	fadescreen FADE_TO_BLACK
	waitmovement 0
	special ChooseStarter
	release
	end