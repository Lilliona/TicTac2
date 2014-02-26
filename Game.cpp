#include "Game.h"
Game::Game()
{

}

Game::~Game()
{

}

char Game::field[]={'1','2','3','4','5','6','7','8','9'};

void Game::turn()
{
	
	Player x;
	Opponent o;
	char mark;//bekommt den Wert X oder O je nach Spieler
	int who_inserts=1;//Wechsel zwischen Spielern durch %2
	int messenger_of_X_or_O=0;//überbringt das gewählte Feld vom aktuellen Spieler
	int i=-1; //sagt durch bestimmen von Gewinner/Draw ob das Spiel weiter geht

	do
	{

		show_field();

		/*********************************************
		Choses the Player and gives him his properties
		*********************************************/
		
		who_inserts=who_inserts%2;
		if (who_inserts==1)
		{
			x.ask_for_playerset();
			messenger_of_X_or_O=x.get_playerset();
			mark='X';
		}
		else
		{
			//o.ask_for_opponents_set();
			o.generate_opponents_ai();
			messenger_of_X_or_O=o.get_opponents_ai();
			mark='O';
		
		}

		/*******************************
		Sets the mark at a free position
		*******************************/

		if ( messenger_of_X_or_O == 1 && field[0] == '1')
			field[0] = mark;

		else if (messenger_of_X_or_O == 2 && field[1] == '2')
			field[1] = mark;

		else if (messenger_of_X_or_O == 3 && field[2] == '3')
			field[2] = mark;

		else if (messenger_of_X_or_O == 4 && field[3] == '4')
			field[3] = mark;

		else if (messenger_of_X_or_O == 5 && field[4] == '5')
			field[4] = mark;

		else if (messenger_of_X_or_O == 6 && field[5] == '6')
			field[5] = mark;

		else if (messenger_of_X_or_O == 7 && field[6] == '7')
			field[6] = mark;

		else if (messenger_of_X_or_O == 8 && field[7] == '8')
			field[7] = mark;

		else if (messenger_of_X_or_O == 9 && field[8] == '9')
			field[8] = mark;

		else
		{
				cout<<"Invalid move!" << endl;
				continue;
		}
		
		who_inserts++;
		i=check_if_won();
		
	}while (i==-1);

	show_field();

	if (i==1)
	{
		if(who_inserts==2)
		{
			cout << "Yay the Player won!" << endl << endl;
			win_counter_of_player++;
		}
		else
		{
			cout << "Oh no, the Opponent won!" << endl << endl;
			win_counter_of_opponent++;
		}
	}
	else 
	{
		cout << "Draw!" << endl;
		win_counter_of_draw++;
	}

	cout << endl;
	cout << "Scores:" << endl;
	cout << "____________" << endl;
	cout << "Player: " << win_counter_of_player << endl;
	cout << "Opponent: " << win_counter_of_opponent << endl;
	cout << "Draw: " << win_counter_of_draw << endl;
	cout << endl;
}

void Game::show_field()
{
	cout << endl << "Player 1 (X) - Player 2 (O)" << endl << endl;	
	
	cout << " " << field[0] << " | "<< field[1] <<" | " << field[2] << endl;
	cout << " ----------" << endl;
	cout << " " << field[3] << " | "<< field[4] <<" | " << field[5] << endl;
	cout << " ----------" << endl;
	cout << " " << field[6] << " | "<< field[7] <<" | " << field[8] << endl << endl;
}

int Game::check_if_won()
{
	
	if ((field[0] == field[1] && field[1] == field[2]) 
		|| (field[3] == field[4] && field[4] == field[5]) 
		|| (field[6] == field[7] && field[7] == field[8])
		|| (field[0] == field[3] && field[3] == field[6])
		|| (field[1] == field[4] && field[4] == field[7])
		|| (field[2] == field[5] && field[5] == field[8])
		|| (field[0] == field[4] && field[4] == field[8])
		|| (field[2] == field[4] && field[4] == field[6]))
	{
		return 1;
	}
	else if ((field[0] != '1') && (field[1] != '2') && (field[2] != '3') 
		&& (field[3] != '4') && (field[4] != '5') && (field[5] != '6') 
        && (field[6] != '7') && (field[7] != '8') && (field[8] != '9'))
	{
		return 0;
	}
	else
	{	
		return -1;
	}
}

void Game::management_of_turn()
{
	win_counter_of_draw=0;
	win_counter_of_opponent=0;
	win_counter_of_player=0;
	char switch_help;
	int switch_stop=0;

	turn();



	do
	{
		cout << "Do you want  to play another game or do you like to exit?" << endl;
		cout << "[x] Exit" << endl << "[c] Continue" << endl;
		cin >> switch_help;
		
		switch(switch_help)
		{
			case 'x':
				switch_stop=1;
				break;
			case 'c':
				clear_field();
				turn();
				cout << endl;
				break;
			default:
				cout << "Invalid Input, please try again!" << endl;
		}
	}while(switch_stop==0);
}

void Game::clear_field()
{
	field[0]='1';
	field[1]='2';
	field[2]='3';
	field[3]='4';
	field[4]='5';
	field[5]='6';
	field[6]='7';
	field[7]='8';
	field[8]='9';
}