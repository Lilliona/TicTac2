#include <iostream>
#include <string>
using namespace std;

class Player
{
private:
	int value_of_player; //nicht player
public:
	Player();
	//Player(int value_of_player);
	~Player();
	int get_value();
};


Player::Player()
{

}
//Player::Player(int value_of_player)
//{
//	this->value_of_player;
//}
Player::~Player()
{
}

int Player::get_value()
{
	return value_of_player;
}

class Human: public Player
{
private:

public:
	Human();
	~Human();
	void returnhuman();
};

Human::Human()
{
}

Human::~Human()
{
}

void Human::returnhuman()
{
	cout << "Yay, I have brain :D!" << endl;
}

class Computer: public Player
{
private:
public:
	Computer();
	~Computer();
	void returncomputer();
};

Computer::Computer()
{
}

Computer::~Computer()
{
}

void Computer::returncomputer()
{
	cout << "Oh no, I don't have brain D:!" << endl;
}

class Game
{
private:

public:
	Game();
	~Game();
	void turn();
	Player *player1;
	Player *player2;
	int get_player1();
	int get_player2();
};

Game::Game()
{
	//player1=new Player();
	//player2=new Player();
}
//int Game::get_player1()
//{
//	return player1->get_value();
//}
//int Game::get_player2()
//{
//	return player2->get_value();
//}
Game::~Game()
{
}

void Game::turn()
{
//	cout << "This is a turn!" << endl; 
//
//	for (int i=0; i<2;i++)
//	{
//		cout << "Please choose if Player" << i+1 << " is human or computer" << endl;
//		cout << "[H] Human" << endl << "[C] Computer" << endl; 
//		string chooseplayer;
//		getline(cin,chooseplayer);
//
//		if (chooseplayer=="h" || chooseplayer=="H")
//		{
//			cout << "It's a Human!" << endl;
//			if (i==0)
//			{
//				player1=new Human();
//			}
//			else
//			{
//				player2=new Human();
//			}
//
//		}
//		else if (chooseplayer=="c" || chooseplayer=="C")
//		{	
//			cout << "It's a Computer!" << endl;
//						if (i==0)
//			{
//				player1=new Computer();
//			}
//			else
//			{
//				player2=new Computer();
//		/*	}
//		}
//		else
//		{
//			cout << "That was the wrong character!" << endl;
//			i=i-1;
//		}
//		cout << endl;*/
//	/*}*/
//
//	 player1->returnhuman();
//	player2->get_value();  nur möglich
//
//	
//
				
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
	tictactoe->game->turn(); 

	delete tictactoe;
	return 0;
}
