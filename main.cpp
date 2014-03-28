#include <iostream>
#include <string>
using namespace std;

virtual class Player
{
private:
	
public:
	Player();
	~Player();

	
	virtual int get_fieldtarget();
};

class Human: public Player
{
private:

public:
	Human();
	~Human();
	int get_fieldtarget();
	void returnhuman();
};

int Human::get_fieldtarget()
{
	int fieldnumber;

	cout << "Please enter a number to set a field: ";	
	cin >> fieldnumber;

	return fieldnumber;
}

void Human::returnhuman()
{
	cout << "Yay, I have brain :D!" << endl;
}

class Computer: public Player
{
private:
public:
	void returncomputer();
};

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

};

class Controller
{
private:
	Player *player1;
	Player *player2;
	
	void turn();
public:
	Controller();
	~Controller();
	void start_game();
};

void Controller::start_game()
{
	cout << "Welcome to a new Game of TicTacToe!" << endl;

	turn();
}

void Controller::turn()
{

	player1=new Player();
	player2=new Player();
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
	delete player1; 
	delete player2;
				
}

int main()
{
	Controller *tictactoe=new Controller();
	tictactoe->start_game(); 

//	delete tictactoe;
	return 0;
}
