#include "Game.h"


Game::Game(void)
{
	player1=new Human();
	player2=new Human();
}


Game::~Game(void)
{
}

void Game::rules()
{

}

void Game::turn()
{
	player1=new Human();
	Player *player2=new Computer();
}