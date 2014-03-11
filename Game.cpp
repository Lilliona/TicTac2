#include "Game.h"
//Game::Game()
//{
//
//}
//
//Game::~Game()
//{
//
//}
//
//char Game::field[]={'1','2','3','4','5','6','7','8','9'};
//
//void Game::turn()
//{
//	
//	Player x;
//	Computer o;
//	char mark;//bekommt den Wert X oder O je nach Spieler
//	int who_inserts=1;//Wechsel zwischen Spielern durch %2
//	int messenger_of_X_or_O=0;//überbringt das gewählte Feld vom aktuellen Spieler
//	int i=-1; //sagt durch bestimmen von Gewinner/Draw ob das Spiel weiter geht
//
//	do
//	{
//
//		show_field();
//
//		/*********************************************
//		Choses the Player and gives him his properties
//		*********************************************/
//		
//		who_inserts=who_inserts%2;
//		if (who_inserts==1)
//		{
//			x.ask_for_playerset();
//			messenger_of_X_or_O=x.get_playerset();
//			mark='X';
//		}
//		else
//		{
//			switch (difficulty_of_computer)
//			{
//				
//			case 1:
//				o.generate_computers_ai_easy();
//				cout << "difficulty: " << difficulty_of_computer << endl;
//							messenger_of_X_or_O=o.get_computers_ai();
//				break;
//			case 2:
//				o.generate_computers_ai_normal();
//				cout << "difficulty: " << difficulty_of_computer << endl;
//							messenger_of_X_or_O=o.get_computers_ai();
//				break;
//			case 3:
//				o.generate_computers_ai_hard();
//				cout << "difficulty: " << difficulty_of_computer << endl;
//							messenger_of_X_or_O=o.get_computers_ai();
//				break;
//			default: 
//				cout << "sdifficulty: " << difficulty_of_computer << endl;
//			}
//			
//			mark='O';
//		
//		}
//
//		/*******************************
//		Sets the mark at a free position
//		*******************************/
//
//		if ( messenger_of_X_or_O == 1 && field[0] == '1')
//			field[0] = mark;
//
//		else if (messenger_of_X_or_O == 2 && field[1] == '2')
//			field[1] = mark;
//
//		else if (messenger_of_X_or_O == 3 && field[2] == '3')
//			field[2] = mark;
//
//		else if (messenger_of_X_or_O == 4 && field[3] == '4')
//			field[3] = mark;
//
//		else if (messenger_of_X_or_O == 5 && field[4] == '5')
//			field[4] = mark;
//
//		else if (messenger_of_X_or_O == 6 && field[5] == '6')
//			field[5] = mark;
//
//		else if (messenger_of_X_or_O == 7 && field[6] == '7')
//			field[6] = mark;
//
//		else if (messenger_of_X_or_O == 8 && field[7] == '8')
//			field[7] = mark;
//
//		else if (messenger_of_X_or_O == 9 && field[8] == '9')
//			field[8] = mark;
//
//		else
//		{
//				cout<<"Invalid move!" << endl;
//				continue;
//		}
//		
//		who_inserts++;
//		i=check_if_won();
//		
//	}while (i==-1);
//
//	show_field();
//
//	if (i==1)
//	{
//		if (who_inserts==2)
//		{
//			cout << "Yay the Player won!" << endl << endl;
//			win_counter_of_player++;
//		}
//		else
//		{
//			cout << "Oh no, the Computer won!" << endl << endl;
//			win_counter_of_computer++;
//		}
//	}
//	else 
//	{
//		cout << "Draw!" << endl;
//		win_counter_of_draw++;
//	}
//
//	cout << endl;
//	cout << "Scores:" << endl;
//	cout << "____________" << endl;
//	cout << "Player: " << win_counter_of_player << endl;
//	cout << "Computer: " << win_counter_of_computer << endl;
//	cout << "Draw: " << win_counter_of_draw << endl;
//	cout << endl;
//}
//
//void Game::show_field()
//{
//	cout << endl << "Player 1 (X) - Player 2 (O)" << endl << endl;	
//	
//	cout << " " << field[0] << " | "<< field[1] <<" | " << field[2] << endl;
//	cout << " ----------" << endl;
//	cout << " " << field[3] << " | "<< field[4] <<" | " << field[5] << endl;
//	cout << " ----------" << endl;
//	cout << " " << field[6] << " | "<< field[7] <<" | " << field[8] << endl << endl;
//}
//
//int Game::check_if_won()
//{
//	
//	if ((field[0] == field[1] && field[1] == field[2]) 
//		|| (field[3] == field[4] && field[4] == field[5]) 
//		|| (field[6] == field[7] && field[7] == field[8])
//		|| (field[0] == field[3] && field[3] == field[6])
//		|| (field[1] == field[4] && field[4] == field[7])
//		|| (field[2] == field[5] && field[5] == field[8])
//		|| (field[0] == field[4] && field[4] == field[8])
//		|| (field[2] == field[4] && field[4] == field[6]))
//	{
//		return 1;
//	}
//	else if ((field[0] != '1') && (field[1] != '2') && (field[2] != '3') 
//		&& (field[3] != '4') && (field[4] != '5') && (field[5] != '6') 
//        && (field[6] != '7') && (field[7] != '8') && (field[8] != '9'))
//	{
//		return 0;
//	}
//	else
//	{	
//		return -1;
//	}
//}
//
//void Game::management_of_turn()
//{
//	win_counter_of_draw=0;
//	win_counter_of_computer=0;
//	win_counter_of_player=0;
//	char switch_help_difficulty;
//	char switch_help_roundnumber;
//	int switch_stop=0;
//
//	menu_of_turn();
//
//	do
//	{
//		cout << "Do you want to play another game or do you like to exit?" << endl;
//		cout << "[x] Exit" << endl << "[c] Continue" << endl;
//		cin >> switch_help_roundnumber;
//		
//		switch (switch_help_roundnumber)
//		{
//			case 'x':
//				switch_stop=1;
//				break;
//			case 'c':
//				clear_field();
//				menu_of_turn();
//				cout << endl;
//				break;
//			default:
//				cout << "Invalid Input, please try again!" << endl;
//		}
//	}while (switch_stop==0);
//}
//
//void Game::clear_field()
//{
//	field[0]='1';
//	field[1]='2';
//	field[2]='3';
//	field[3]='4';
//	field[4]='5';
//	field[5]='6';
//	field[6]='7';
//	field[7]='8';
//	field[8]='9';
//}
//
//void Game::rules_introduction()
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
//
//void Game::menu_of_turn()
//{
//	char help_for_rules;
//	int help_for_difficulty_exit=1;
//	difficulty_of_computer=0;
//	help_for_difficulty=0;
//
//	cout << endl << "WELCOME TO TICTACTOE!" << endl;
//	cout << endl << "_____________________" << endl << endl;
//	cout << "Do you want to see the rules?" << endl;
//	cout << "[Y] yes	[N] no" << endl;
//	cin >> help_for_rules;
//	switch (help_for_rules)
//	{
//	case 'Y':
//	case 'y':
//		rules_introduction();
//		break;
//	case 'N':
//	case 'n':
//		cout << endl << "then let's continue..." << endl << endl;
//		break;
//	default:
//		cout << endl << "Invalid value... Let's take that as a no!" << endl << endl;
//	}
//	
//	do
//	{
//		cout << "What difficulty would you like to choose:" << endl;
//		cout << "[1] Easy" << endl;
//		cout << "[2] Normal" << endl;
//		cout << "[3] Hard" << endl;
//		inputvaildation();
//
//		switch (help_for_difficulty)
//		{
//		case 1: 
//			difficulty_of_computer=1;
//			help_for_difficulty_exit=0;
//			break;
//		case 2:
//			difficulty_of_computer=2;
//			help_for_difficulty_exit=0;
//			break;
//		case 3:
//			difficulty_of_computer=3;
//			help_for_difficulty_exit=0;
//			break;
//		default:
//			cout << "Invalid value... Let's take '3' for Hardmode :D! Joke - please insert again:" << endl;
//			help_for_difficulty_exit=1;
//		}
//	
//	}while (help_for_difficulty_exit==1);
//	turn();
//
//}
//
//void Game::inputvaildation()
//{
//	string entered_string;
//	while (1)
//	{
//		getline(cin, entered_string);
//
//		bool validateNumeric = true;
//
//		for (unsigned i=0; i < entered_string.length(); i++)
//		{
//			if (!isdigit(entered_string[i]))
//			{
//				validateNumeric = false;
//				break;
//			}
//		}
//		if (!validateNumeric)
//		{
//			cout << "wrong entry. try again: ";
//			continue;
//		}
//
//		stringstream sStream (entered_string);
//		sStream >> help_for_difficulty; 
//
//		if (help_for_difficulty>3)
//		{
//			cout << "You are over the valid range. Try again: ";
//			continue;
//		}
//
//		if (help_for_difficulty<1)
//		{
//			cout << "You are under the valid range. Try again: ";
//			continue;
//		}
//		break;
//	}
//}