#pragma once
#include "Player.h"
#include "Human.h"
#include "Computer.h"

class Game
{
//	void rules();
	//void turn();


public:
	Game(void);
	Game(Player *player1_in,Player *player2_in);
	~Game(void);
	Player *player1;
	Player *player2;
};