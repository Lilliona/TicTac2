#include "Game.h"


Game::Game()
{
	player1=new Human();
	player2=new Human();
}

Game::Game(Player *player1_in,Player *player2_in)
{
	player1=player1_in;
	player2=player2_in;
}


Game::~Game()
{
}
