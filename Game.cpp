#include "Game.h"


Game::Game(void)
{
	player1=new Human();
	player2=new Human();
}

Game::Game(Player *player1_in,Player *player2_in)
{
	player1=player1_in;
	player2=player2_in;
}


Game::~Game(void)
{
}
//
//void Game::rules()
//{
//	cout << endl << "   RULES" << endl;
//	cout << "   -----" << endl << endl;
//	cout << "   Choose a fieldnumber to place your 'X'." << endl;
//	cout << "   After each of your turns the Computer" << endl;
//	cout << "   will place an 'O'." << endl << endl;
//	cout << "   The one with the first three symbols in" << endl;
//	cout << "   a line wins." << endl;
//	cout << "   Try your luck and take the challenge!" << endl << endl << endl;
//}
//
//void Game::turn()
//{
//	//player1=new Human();
//	//Player *player2=new Computer();
//}