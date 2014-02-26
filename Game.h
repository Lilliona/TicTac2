#pragma once
#include "Player.h"
#include "Opponent.h"

class Game
{
	void show_field();
	int check_if_won();
	int win_counter_of_player;
	int win_counter_of_opponent;
	int win_counter_of_draw;
	void turn();
	void clear_field();
public:
	Game(void);
	~Game(void);
	static char field[9];
	void management_of_turn();	
};