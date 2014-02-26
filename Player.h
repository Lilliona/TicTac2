#pragma once
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

class Player
{
	int playerset;
public:
	Player();
	~Player(void);
	int generate_players_scores();
	void ask_for_playerset();
	int get_playerset();
};

