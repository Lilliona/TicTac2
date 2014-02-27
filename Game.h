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
	void rules_introduction();
	void menu_of_turn();
	int difficulty_of_opponent;
public:
	Game(void);
	~Game(void);
	static char field[9];
	void management_of_turn();	
};