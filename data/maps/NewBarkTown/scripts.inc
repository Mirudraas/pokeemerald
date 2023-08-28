NewBarkTown_MapScripts::
	.byte 0

NewBarkTown_EventScript_TownSign::
	msgbox NewBarkTown_Text_TownSign, MSGBOX_SIGN
	return

NewBarkTown_EventScript_PlayersHouseSign::
	msgbox NewBarkTown_Text_PlayersHouse, MSGBOX_SIGN
	return
		
NewBarkTown_EventScript_ElmsLabSign::
	msgbox NewBarkTown_Text_ProfElmsLab, MSGBOX_SIGN
	return

NewBarkTown_EventScript_NPC1::
	msgbox NewBarkTown_Text_TalkNPC1, MSGBOX_NPC
	end

NewBarkTown_EventScript_NPC2::
	msgbox NewBarkTown_Text_TalkNPC2, MSGBOX_NPC
	end

NewBarkTown_EventScript_NPC3::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_PIKACHU, CRY_MODE_NORMAL
	msgbox NewBarkTown_Text_TalkNPC3, MSGBOX_DEFAULT
	waitmoncry
	release
	end

NewBarkTown_Text_TownSign:
	.string "New Bark Town\p"
	.string "“A town where the wind blows and tells\n"
	.string "of impending change.”$"

NewBarkTown_Text_PlayersHouse:
	.string "{PLAYER}'s House\p"
	.string "(...)\p"
	.string "(Did we REALLY need this sign?)$"

NewBarkTown_Text_ProfElmsLab:
	.string "Professor Elm's Labs\n"
	.string "“Pursuing new evolutionary discoveries!”\p"
	.string "Accredited by The Pokémon Foundation.$"

NewBarkTown_Text_TalkNPC1:
	.string "There's a lot to be said for living on\n"
	.string "a small island like this in harmony with\l"
	.string "Pokémon and the family.$"

NewBarkTown_Text_TalkNPC2:
	.string "Wow, your Pokégear is impressive!\p"
	.string "Did your mom get it for you?\p"
	.string "Gee, I can remember the Pokédex launch...\n"
	.string "What an exciting time we live in!$"

NewBarkTown_Text_TalkNPC3:
	.string "PIKACHU: Guguuh!\p"
	.string "Just kidding!\n"
	.string "That's my Pikachu impression!\l"
	.string "What do you think?$"
