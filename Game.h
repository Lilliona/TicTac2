#pragma once
#include "Player.h"
#include "Opponent.h"

class Game
{
	static char field[9];
	void show_field();
	int check_if_won();
public:
	Game(void);
	~Game(void);
	

	void turn();
};