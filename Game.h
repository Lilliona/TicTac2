#pragma once
#include "Player.h"
#include "Opponent.h"

class Game
{

	void show_field();
	int check_if_won();
public:
	Game(void);
	~Game(void);
	static char field[9];

	void turn();
};