#pragma once
#include "Player.h"
class Human: public Player
{
	int choose_difficulty;
	void ask_for_playerset(); //**ready**//
	void input_validation(/*s. .cpp*/);

public:
	Human(void);
	~Human(void);
	void ask_for_difficulty();//**not implemented!**//
	int get_humans_choice_of_difficulty();
};

//public:
//	int generate_players_scores(); //weg
