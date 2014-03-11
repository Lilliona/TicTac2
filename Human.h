#pragma once
#include "Player.h"
class Human: public Player
{

	void ask_for_playerset(); //**ready**//
	void input_validation();

public:
	Human(void);
	~Human(void);

};

//public:
//	int generate_players_scores(); //weg
