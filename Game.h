#pragma once
#include "Player.h"
#include "Opponent.h"

// zu Objekt machen
// interface

class Game
{
	Player player;
	Opponent opponent;

public:

};
	//	//void show_field();
	//	int check_if_won();
	//	int win_counter_of_player;
	//	int win_counter_of_opponent;
	//	int win_counter_of_draw;
	//	int difficulty_of_opponent;
	//	int help_for_difficulty;
	//	void turn();
	//	void clear_field();
	//	void rules_introduction();
	//	void menu_of_turn();
	//	void inputvaildation();
	//public:
	//	Game(void);
	//	~Game(void);
	//	static char field[9]; //nicht wiederverwendbar // static weg, keine variable,private
	//	void management_of_turn();	
//};


//Controller, der Objekte erstellt und steuert -> Klassen kennen sich untereinander nicht


//echte Objekte, + Controller(Game aus zwei spieler und spielfeld,)
//erzeugt spielfeld, erzeugt spieler(nach aussuchen ob gegen pc oder player2)
