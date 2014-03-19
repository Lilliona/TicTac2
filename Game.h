#pragma once
#include "Player.h"
#include "Human.h"
#include "Computer.h"

class Game
{
public:
	Game();
	Game(Player *player1_in,Player *player2_in);
	~Game();
	Player *player1;
	Player *player2;
};