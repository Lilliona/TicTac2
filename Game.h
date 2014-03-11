#pragma once
#include "Player.h"
#include "Human.h"
#include "Computer.h"
class Game
{
	void rules();
	void turn();
	Player *player1;
	Player *player2;

public:
	Game(void);
	Game(Player *player1_in,Player *player2_in)
	{
		player1=player1_in;
		player2=player2_in;
	}
	~Game(void);
};

