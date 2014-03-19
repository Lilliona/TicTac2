#include <iostream>
using namespace std;

class Player
{
private:
	int value_of_player;
public:
	Player();
	Player(int value_of_player);
	~Player();
	int get_value();
};


Player::Player()
{

}
Player::Player(int value_of_player)
{
	this->value_of_player;
}
Player::~Player()
{
}

int Player::get_value()
{
	return value_of_player;
}

class Game
{
private:

public:
	Game();
//	Game(Player *player1,Player *player2);
	~Game();
	Player *player1;
	Player *player2;
	int get_player1();
	int get_player2();
};
Game::Game()
{
	player1=new Player();
	player2=new Player();
}
//int Game::get_player1()
//{
//	return player1->get_value();
//}
//int Game::get_player2()
//{
//	return player2->get_value();
//}
//
//Game::Game()
//{
//	this->player1=new Player();
//	this->player2=new Player();
//}

Game::~Game()
{
}

class Controller
{
private:

public:
	Game *game;
	Controller();
	~Controller();

};

Controller::Controller()
{
	this->game=new Game();
}

Controller::~Controller()
{
}

int main()
{
	Controller *tictactoe=new Controller();

	cout << "Der Wert von Player1 ist: " << tictactoe->game->get_player1() << endl;
	cout << "Der Wert von Player2 ist: " << tictactoe->game->get_player2() << endl;

	//delete tictactoe->game->player1;
	//delete tictactoe->game->player2;
	//delete tictactoe->game;
	delete tictactoe;
	return 0;
}
