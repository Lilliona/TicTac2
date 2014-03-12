#include "Computer.h"

Computer::Computer(void)
{
//	Computer(2);
}
//
//Computer::Computer(int difficulty_in)
//{
////	number_of_difficulty=difficulty_in;
//}

Computer::~Computer(void)
{
}

//void Computer::generate_computers_ai_at_difficulty()
//{
//
//	if (number_of_difficulty==1)
//	{
//	
//	}
//	else if(number_of_difficulty==2)
//	{
//	
//	}
//	else if(number_of_difficulty==3)
//	{
//	
//	}
//}
//
//void Computer::input_validation()
//{
//	string entered_string;
//	entered_string=number_of_difficulty;
//
//	while (1)
//	{
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
//			getline(cin, entered_string);
//			continue;
//		}
//
//		stringstream sStream (entered_string);
//		sStream >> number_of_difficulty; 
//
//		if (number_of_difficulty>3)
//		{
//			cout << "You are over the valid range. Try again: ";
//			getline(cin, entered_string);
//			continue;
//		}
//
//		if (number_of_difficulty<1)
//		{
//			cout << "You are under the valid range. Try again: ";
//			getline(cin, entered_string);
//			continue;
//		}
//		break;
//	}
//}
//
//void Computer::generate_computers_ai_hard()
//{ 
//	int help_for_random;
//	if (Game::field[4]=='X'|| Game::field[4]=='O')
//	{
//		/*************************************************
//		Is the first step of the Player '5', set 'O' into a corner
//		*************************************************/
//		if (Game::field[4]=='X' && Game::field[0]=='1' && Game::field[1]=='2' && Game::field[2]=='3' && Game::field[3]=='4' && Game::field[5]=='6' && Game::field[6]=='7' && Game::field[7]=='8' && Game::field[8]=='9')
//		{
//			help_for_random=rand()%4;
//			switch (help_for_random)
//			{
//			case 0:
//				computers_set=1;
//				break;
//			case 1:
//				computers_set=3;
//				break;
//			case 2:
//				computers_set=7;
//				break;
//			case 3:
//				computers_set=9;
//				break;
//			default:
//				cout << "Some Mistake has happened[1]" << endl;
//			}
//		}
//		/******************************
//		Looks if 'O' could directly win
//		******************************/
//		else if (Game::field[0]=='1' && ((Game::field[1]=='O' && Game::field[2]=='O') || (Game::field[4]=='O' && Game::field[8]=='O') || (Game::field[3]=='O' && Game::field[6]=='O')))
//		{	computers_set=1;}
//		else if (Game::field[2]=='3' && ((Game::field[0]=='O' && Game::field[1]=='O') || (Game::field[4]=='O' && Game::field[6]=='O') || (Game::field[5]=='O' && Game::field[8]=='O')))
//		{	computers_set=3;}
//		else if (Game::field[6]=='7' && ((Game::field[0]=='O' && Game::field[3]=='O') || (Game::field[2]=='O' && Game::field[4]=='O') || (Game::field[7]=='O' && Game::field[8]=='O')))
//		{	computers_set=7;}
//		else if (Game::field[8]=='9' && ( (Game::field[0]=='O' && Game::field[4]=='O') || (Game::field[2]=='O' && Game::field[5]=='O') || (Game::field[6]=='O' && Game::field[7]=='O')))
//		{	computers_set=9;}
//		else if (Game::field[1]=='2' && ( (Game::field[0]=='O' && Game::field[2]=='O') || (Game::field[4]=='O' && Game::field[7]=='O')))
//		{	computers_set=2;}
//		else if (Game::field[3]=='4' && ( (Game::field[0]=='O' && Game::field[6]=='O') || (Game::field[4]=='O' && Game::field[5]=='O')))
//		{	computers_set=4;}
//		else if (Game::field[5]=='6' && ( (Game::field[2]=='O' && Game::field[8]=='O') || (Game::field[3]=='O' && Game::field[4]=='O')))
//		{	computers_set=6;}
//		else if (Game::field[7]=='8' && ( (Game::field[1]=='O' && Game::field[4]=='O') || (Game::field[6]=='O' && Game::field[8]=='O')))
//		{	computers_set=8;}
//		else if (Game::field[4]=='5' && ( (Game::field[1]=='O' && Game::field[7]=='O') || (Game::field[0]=='O' && Game::field[8]=='O') || (Game::field[3]=='O' && Game::field[5]=='O') ||(Game::field[2]=='O' && Game::field[6]=='O')))
//		{	computers_set=5;}
//		/******************************
//		Looks if 'X' could directly win
//		******************************/
//		else if (Game::field[0]=='1' && ((Game::field[1]=='X' && Game::field[2]=='X') || (Game::field[4]=='X' && Game::field[8]=='X') || (Game::field[3]=='X' && Game::field[6]=='X')))
//		{	computers_set=1;}
//		else if (Game::field[2]=='3' && ((Game::field[0]=='X' && Game::field[1]=='X') || (Game::field[4]=='X' && Game::field[6]=='X') || (Game::field[5]=='X' && Game::field[8]=='X')))
//		{	computers_set=3;}
//		else if (Game::field[6]=='7' && ((Game::field[0]=='X' && Game::field[3]=='X') || (Game::field[2]=='X' && Game::field[4]=='X') || (Game::field[7]=='X' && Game::field[8]=='X')))
//		{	computers_set=7;}
//		else if (Game::field[8]=='9' && ( (Game::field[0]=='X' && Game::field[4]=='X') || (Game::field[2]=='X' && Game::field[5]=='X') || (Game::field[6]=='X' && Game::field[7]=='X')))
//		{	computers_set=9;}
//		else if (Game::field[1]=='2' && ( (Game::field[0]=='X' && Game::field[2]=='X') || (Game::field[4]=='X' && Game::field[7]=='X')))
//		{	computers_set=2;}
//		else if (Game::field[3]=='4' && ( (Game::field[0]=='X' && Game::field[6]=='X') || (Game::field[4]=='X' && Game::field[5]=='X')))
//		{	computers_set=4;}
//		else if (Game::field[5]=='6' && ( (Game::field[2]=='X' && Game::field[8]=='X') || (Game::field[3]=='X' && Game::field[4]=='X')))
//		{	computers_set=6;}
//		else if (Game::field[7]=='8' && ( (Game::field[1]=='X' && Game::field[4]=='X') || (Game::field[6]=='X' && Game::field[8]=='X')))
//		{	computers_set=8;}
//		else if (Game::field[4]=='5' && ( (Game::field[1]=='X' && Game::field[7]=='X') || (Game::field[0]=='X' && Game::field[8]=='X') || (Game::field[3]=='X' && Game::field[5]=='X') ||(Game::field[2]=='X' && Game::field[6]=='X')))
//		{	computers_set=5;}
//		/********************
//		Looks for tricks of X
//		********************/
//		/***
//		-1:-
//		***/
//		else if (Game::field[0]=='1' && Game::field[1]=='2' && Game::field[2]=='O' && Game::field[3]=='O' && Game::field[4]=='X' && Game::field[5]=='X' && Game::field[6]=='X' && Game::field[7]=='8' && Game::field[8]=='9')
//		{	computers_set=rand()%2+1;}
//		else if (Game::field[0]=='X' && Game::field[1]=='2' && Game::field[2]=='3' && Game::field[3]=='O' && Game::field[4]=='X' && Game::field[5]=='X' && Game::field[6]=='7' && Game::field[7]=='8' && Game::field[8]=='O')
//		{	computers_set=rand()%2+7;}
//		else if (Game::field[0]=='1' && Game::field[1]=='2' && Game::field[2]=='X' && Game::field[3]=='X' && Game::field[4]=='X' && Game::field[5]=='O' && Game::field[6]=='O' && Game::field[7]=='8' && Game::field[8]=='9')
//		{	computers_set=rand()%2+8;}
//		else if (Game::field[0]=='O' && Game::field[1]=='2' && Game::field[2]=='3' && Game::field[3]=='X' && Game::field[4]=='X' && Game::field[5]=='O' && Game::field[6]=='7' && Game::field[7]=='8' && Game::field[8]=='X')
//		{	computers_set=rand()%2+2;}
//		else if (Game::field[0]=='O' && Game::field[1]=='X' && Game::field[2]=='3' && Game::field[3]=='4' && Game::field[4]=='X' && Game::field[5]=='6' && Game::field[6]=='7' && Game::field[7]=='O' && Game::field[8]=='X')
//		{
//			help_for_random=rand()%2;
//			if (help_for_random==0)
//			{	computers_set=4;
//			}else
//			{	computers_set=7;}
//		}	
//		else if (Game::field[0]=='1' && Game::field[1]=='X' && Game::field[2]=='O' && Game::field[3]=='4' && Game::field[4]=='X' && Game::field[5]=='6' && Game::field[6]=='X' && Game::field[7]=='O' && Game::field[8]=='9')
//		{
//			help_for_random=rand()%2;
//			if (help_for_random==0)
//				computers_set=6;
//			else
//				computers_set=9;
//		}	
//		else if (Game::field[0]=='X' && Game::field[1]=='O' && Game::field[2]=='3' && Game::field[3]=='4' && Game::field[4]=='X' && Game::field[5]=='6' && Game::field[6]=='7' && Game::field[7]=='X' && Game::field[8]=='O')
//		{
//			help_for_random=rand()%2;
//			if (help_for_random==0)
//				computers_set=3;
//			else
//				computers_set=6;
//		}	
//		else if (Game::field[0]=='1' && Game::field[1]=='O' && Game::field[2]=='X' && Game::field[3]=='4' && Game::field[4]=='X' && Game::field[5]=='6' && Game::field[6]=='O' && Game::field[7]=='X' && Game::field[8]=='9')
//		{
//			help_for_random=rand()%2;
//			if (help_for_random==0)
//				computers_set=1;
//			else
//				computers_set=4;
//		}	
//		/***
//		-2:-
//		***/
//		else if ((Game::field[0]=='1' && Game::field[1]=='2' && Game::field[2]=='O' && Game::field[3]=='4' && Game::field[4]=='X' && Game::field[5]=='6' && Game::field[6]=='X' && Game::field[7]=='8' && Game::field[8]=='9')||(Game::field[0]=='1' && Game::field[1]=='2' && Game::field[2]=='X' && Game::field[3]=='4' && Game::field[4]=='X' && Game::field[5]=='6' && Game::field[6]=='O' && Game::field[7]=='8' && Game::field[8]=='9'))
//		{
//			help_for_random=rand()%2;
//			if (help_for_random==0)
//				computers_set=1;
//			else
//				computers_set=9;
//		}	
//		else if ((Game::field[0]=='X' && Game::field[1]=='2' && Game::field[2]=='3' && Game::field[3]=='4' && Game::field[4]=='X' && Game::field[5]=='6' && Game::field[6]=='7' && Game::field[7]=='8' && Game::field[8]=='O')||(Game::field[0]=='O' && Game::field[1]=='2' && Game::field[2]=='3' && Game::field[3]=='4' && Game::field[4]=='X' && Game::field[5]=='6' && Game::field[6]=='7' && Game::field[7]=='8' && Game::field[8]=='X'))
//		{
//			help_for_random=rand()%2;
//			if (help_for_random==0)
//				computers_set=3;
//			else
//				computers_set=7;
//		}	
//		/***
//		-3:-
//		***/
//		else if ((Game::field[0]=='X' && Game::field[3]=='4' && Game::field[6]=='7' && Game::field[7]=='X' && Game::field[8]=='9')||(Game::field[0]=='1' && Game::field[3]=='X' && Game::field[6]=='7' && Game::field[7]=='8' && Game::field[8]=='X'))
//		{	computers_set=7;}
//		else if ((Game::field[0]=='X' && Game::field[1]=='2' && Game::field[2]=='3' && Game::field[5]=='X' && Game::field[8]=='9')||(Game::field[0]=='1' && Game::field[1]=='X' && Game::field[2]=='3' && Game::field[5]=='6' && Game::field[8]=='X'))
//		{	computers_set=3;}
//		else if ((Game::field[0]=='1' && Game::field[1]=='2' && Game::field[2]=='X' && Game::field[3]=='X' && Game::field[6]=='7')||(Game::field[0]=='1' && Game::field[1]=='X' && Game::field[2]=='3' && Game::field[3]=='4' && Game::field[6]=='X'))
//		{	computers_set=1;}
//		else if ((Game::field[2]=='X' && Game::field[5]=='6' && Game::field[6]=='7' && Game::field[7]=='X' && Game::field[8]=='9')||(Game::field[2]=='3' && Game::field[5]=='X' && Game::field[6]=='X' && Game::field[7]=='8' && Game::field[8]=='9'))
//		{	computers_set=9;}
//		/***
//		-4:-
//		***/
//		else if (Game::field[0]=='1' && Game::field[3]=='X' && Game::field[6]=='7' && Game::field[7]=='X' && Game::field[8]=='9')
//		{
//			help_for_random=rand()%3;
//			if (help_for_random==0)
//				computers_set=1;
//			else if (help_for_random==1)
//				computers_set=7;
//			else computers_set=9;
//		}
//		else if (Game::field[0]=='1' && Game::field[1]=='X' && Game::field[2]=='3' && Game::field[5]=='X' && Game::field[8]=='9')
//		{
//			help_for_random=rand()%3;
//			if (help_for_random==0)
//				computers_set=1;
//			else if (help_for_random==1)
//				computers_set=3;
//			else computers_set=9;
//		}
//		else if (Game::field[0]=='1' && Game::field[1]=='X' && Game::field[2]=='3' && Game::field[3]=='X' && Game::field[6]=='7')
//		{
//			help_for_random=rand()%3;
//			if (help_for_random==0)
//				computers_set=1;
//			else if (help_for_random==1)
//				computers_set=3;
//			else computers_set=7;
//		}
//		else if (Game::field[2]=='3' && Game::field[5]=='X' && Game::field[6]=='7' && Game::field[7]=='X' && Game::field[8]=='9')
//		{
//			help_for_random=rand()%3;
//			if (help_for_random==0)
//				computers_set=3;
//			else if (help_for_random==1)
//				computers_set=7;
//			else computers_set=9;
//		}
//		/***
//		-5:-
//		***/
//		else if (Game::field[0]=='X' && Game::field[3]=='4' && Game::field[6]=='7' && Game::field[7]=='8' && Game::field[8]=='X')
//		{
//			help_for_random=rand()%2;
//			if (help_for_random==0)
//				computers_set=4;
//			else
//				computers_set=8;
//		}
//		else if (Game::field[0]=='X' && Game::field[1]=='2' && Game::field[2]=='3' && Game::field[5]=='6' && Game::field[8]=='X')
//		{
//			help_for_random=rand()%2;
//			if (help_for_random==0)
//				computers_set=2;
//			else
//				computers_set=6;
//		}
//		else if (Game::field[0]=='1' && Game::field[1]=='2' && Game::field[2]=='X' && Game::field[3]=='4' && Game::field[6]=='X')
//		{
//			help_for_random=rand()%2;
//			if (help_for_random==0)
//				computers_set=2;
//			else
//				computers_set=4;
//		}
//		else if (Game::field[2]=='X' && Game::field[5]=='6' && Game::field[6]=='X' && Game::field[7]=='8' && Game::field[8]=='9')
//		{
//			help_for_random=rand()%2;
//			if (help_for_random==0)
//				computers_set=6;
//			else
//				computers_set=8;
//		}
//		/*******************
//		Looks for own tricks
//		*******************/
//		/***
//		-1:-
//		***/
//		else if ((Game::field[0]=='O' && Game::field[3]=='4' && Game::field[6]=='7' && Game::field[7]=='O' && Game::field[8]=='9')||(Game::field[0]=='1' && Game::field[3]=='O' && Game::field[6]=='7' && Game::field[7]=='8' && Game::field[8]=='O'))
//		{	computers_set=7;}
//		else if ((Game::field[0]=='O' && Game::field[1]=='2' && Game::field[2]=='3' && Game::field[5]=='O' && Game::field[8]=='9')||(Game::field[0]=='1' && Game::field[1]=='O' && Game::field[2]=='3' && Game::field[5]=='6' && Game::field[8]=='O'))
//		{	computers_set=3;}
//		else if ((Game::field[0]=='1' && Game::field[1]=='2' && Game::field[2]=='O' && Game::field[3]=='O' && Game::field[6]=='7')||(Game::field[0]=='1' && Game::field[1]=='O' && Game::field[2]=='3' && Game::field[3]=='4' && Game::field[6]=='O'))
//		{	computers_set=1;}
//		else if ((Game::field[2]=='O' && Game::field[5]=='6' && Game::field[6]=='7' && Game::field[7]=='O' && Game::field[8]=='9')||(Game::field[2]=='3' && Game::field[5]=='O' && Game::field[6]=='O' && Game::field[7]=='8' && Game::field[8]=='9'))
//		{	computers_set=9;}
//		/***
//		-2:-
//		***/
//		else if (Game::field[0]=='1' && Game::field[3]=='O' && Game::field[6]=='7' && Game::field[7]=='O' && Game::field[8]=='9')
//			{computers_set=7;}
//		else if (Game::field[0]=='1' && Game::field[1]=='O' && Game::field[2]=='3' && Game::field[5]=='O' && Game::field[8]=='9')
//		{	computers_set=3;}
//		else if (Game::field[0]=='1' && Game::field[1]=='O' && Game::field[2]=='3' && Game::field[3]=='O' && Game::field[6]=='7')
//		{	computers_set=1;}
//		else if (Game::field[2]=='3' && Game::field[5]=='O' && Game::field[6]=='7' && Game::field[7]=='O' && Game::field[8]=='9')
//		{	computers_set=9;}
//		/***
//		-3:-
//		***/
//		else if (Game::field[0]=='O' && Game::field[3]=='4' && Game::field[6]=='7' && Game::field[7]=='8' && Game::field[8]=='O')
//		{	computers_set=7;}
//		else if (Game::field[0]=='O' && Game::field[1]=='2' && Game::field[2]=='3' && Game::field[5]=='6' && Game::field[8]=='O')
//		{	computers_set=3;}
//		else if (Game::field[0]=='1' && Game::field[1]=='2' && Game::field[2]=='O' && Game::field[3]=='4' && Game::field[6]=='O')
//		{	computers_set=1;}
//		else if (Game::field[2]=='O' && Game::field[5]=='6' && Game::field[6]=='O' && Game::field[7]=='8' && Game::field[8]=='9')
//		{	computers_set=9;}
//		/**************
//		sets random 'O'
//		**************/
//		else 
//		{
//			do
//			{
//				help_for_random=rand()%10;
//			}while (Game::field[help_for_random-1]=='X'||Game::field[help_for_random-1]=='O');
//			computers_set=help_for_random;
//		}
//	}
//	else
//	{
//		computers_set=5;
//	}
//}
//
//void Computer::generate_computers_ai_normal()
//{
//	int help_for_random=0;
//	if (Game::field[4]=='X'|| Game::field[4]=='O')
//	{
//		/*************************************************
//		Is the first step of the Player '5', set 'O' into a corner
//		*************************************************/
//		if (Game::field[4]=='X' && Game::field[0]=='1' && Game::field[1]=='2' && Game::field[2]=='3' && Game::field[3]=='4' && Game::field[5]=='6' && Game::field[6]=='7' && Game::field[7]=='8' && Game::field[8]=='9')
//		{
//			int help_for_switchcase;
//			help_for_switchcase=rand()%4;
//			switch (help_for_switchcase)
//			{
//			case 0:
//				computers_set=1;
//				break;
//			case 1:
//				computers_set=3;
//				break;
//			case 2:
//				computers_set=7;
//				break;
//			case 3:
//				computers_set=9;
//				break;
//			default:
//				cout << "Some Mistake has happened[1]" << endl;
//			}
//		
//		}
//		/******************************
//		Looks if 'O' could directly win
//		******************************/
//		else if (Game::field[0]=='1' && ((Game::field[1]=='O' && Game::field[2]=='O') || (Game::field[4]=='O' && Game::field[8]=='O') || (Game::field[3]=='O' && Game::field[6]=='O')))
//			computers_set=1;
//		else if (Game::field[2]=='3' && ((Game::field[0]=='O' && Game::field[1]=='O') || (Game::field[4]=='O' && Game::field[6]=='O') || (Game::field[5]=='O' && Game::field[8]=='O')))
//			computers_set=3;
//		else if (Game::field[6]=='7' && ((Game::field[0]=='O' && Game::field[3]=='O') || (Game::field[2]=='O' && Game::field[4]=='O') || (Game::field[7]=='O' && Game::field[8]=='O')))
//			computers_set=7;
//		else if (Game::field[8]=='9' && ( (Game::field[0]=='O' && Game::field[4]=='O') || (Game::field[2]=='O' && Game::field[5]=='O') || (Game::field[6]=='O' && Game::field[7]=='O')))
//			computers_set=9;
//		else if (Game::field[1]=='2' && ( (Game::field[0]=='O' && Game::field[2]=='O') || (Game::field[4]=='O' && Game::field[7]=='O')))
//			computers_set=2;
//		else if (Game::field[3]=='4' && ( (Game::field[0]=='O' && Game::field[6]=='O') || (Game::field[4]=='O' && Game::field[5]=='O')))
//			computers_set=4;
//		else if (Game::field[5]=='6' && ( (Game::field[2]=='O' && Game::field[8]=='O') || (Game::field[3]=='O' && Game::field[4]=='O')))
//			computers_set=6;
//		else if (Game::field[7]=='8' && ( (Game::field[1]=='O' && Game::field[4]=='O') || (Game::field[6]=='O' && Game::field[8]=='O')))
//			computers_set=8;
//		else if (Game::field[4]=='5' && ( (Game::field[1]=='O' && Game::field[7]=='O') || (Game::field[0]=='O' && Game::field[8]=='O') || (Game::field[3]=='O' && Game::field[5]=='O') ||(Game::field[2]=='O' && Game::field[6]=='O')))
//			computers_set=5;
//		/******************************
//		Looks if 'X' could directly win
//		******************************/
//		else if (Game::field[0]=='1' && ((Game::field[1]=='X' && Game::field[2]=='X') || (Game::field[4]=='X' && Game::field[8]=='X') || (Game::field[3]=='X' && Game::field[6]=='X')))
//			computers_set=1;
//		else if (Game::field[2]=='3' && ((Game::field[0]=='X' && Game::field[1]=='X') || (Game::field[4]=='X' && Game::field[6]=='X') || (Game::field[5]=='X' && Game::field[8]=='X')))
//			computers_set=3;
//		else if (Game::field[6]=='7' && ((Game::field[0]=='X' && Game::field[3]=='X') || (Game::field[2]=='X' && Game::field[4]=='X') || (Game::field[7]=='X' && Game::field[8]=='X')))
//			computers_set=7;
//		else if (Game::field[8]=='9' && ( (Game::field[0]=='X' && Game::field[4]=='X') || (Game::field[2]=='X' && Game::field[5]=='X') || (Game::field[6]=='X' && Game::field[7]=='X')))
//			computers_set=9;
//		else if (Game::field[1]=='2' && ( (Game::field[0]=='X' && Game::field[2]=='X') || (Game::field[4]=='X' && Game::field[7]=='X')))
//			computers_set=2;
//		else if (Game::field[3]=='4' && ( (Game::field[0]=='X' && Game::field[6]=='X') || (Game::field[4]=='X' && Game::field[5]=='X')))
//			computers_set=4;
//		else if (Game::field[5]=='6' && ( (Game::field[2]=='X' && Game::field[8]=='X') || (Game::field[3]=='X' && Game::field[4]=='X')))
//			computers_set=6;
//		else if (Game::field[7]=='8' && ( (Game::field[1]=='X' && Game::field[4]=='X') || (Game::field[6]=='X' && Game::field[8]=='X')))
//			computers_set=8;
//		else if (Game::field[4]=='5' && ( (Game::field[1]=='X' && Game::field[7]=='X') || (Game::field[0]=='X' && Game::field[8]=='X') || (Game::field[3]=='X' && Game::field[5]=='X') ||(Game::field[2]=='X' && Game::field[6]=='X')))
//			computers_set=5;
//		/********************
//		Looks for tricks of X
//		********************/
//		/***
//		-1:-
//		***/
//		else if (Game::field[0]=='1' && Game::field[1]=='2' && Game::field[2]=='O' && Game::field[3]=='O' && Game::field[4]=='X' && Game::field[5]=='X' && Game::field[6]=='X' && Game::field[7]=='8' && Game::field[8]=='9')
//			computers_set=rand()%2+1;
//		else if (Game::field[0]=='X' && Game::field[1]=='2' && Game::field[2]=='3' && Game::field[3]=='O' && Game::field[4]=='X' && Game::field[5]=='X' && Game::field[6]=='7' && Game::field[7]=='8' && Game::field[8]=='O')
//			computers_set=rand()%2+7;
//		else if (Game::field[0]=='1' && Game::field[1]=='2' && Game::field[2]=='X' && Game::field[3]=='X' && Game::field[4]=='X' && Game::field[5]=='O' && Game::field[6]=='O' && Game::field[7]=='8' && Game::field[8]=='9')
//			computers_set=rand()%2+8;
//		else if (Game::field[0]=='O' && Game::field[1]=='2' && Game::field[2]=='3' && Game::field[3]=='X' && Game::field[4]=='X' && Game::field[5]=='O' && Game::field[6]=='7' && Game::field[7]=='8' && Game::field[8]=='X')
//			computers_set=rand()%2+2;
//		else if (Game::field[0]=='O' && Game::field[1]=='X' && Game::field[2]=='3' && Game::field[3]=='4' && Game::field[4]=='X' && Game::field[5]=='6' && Game::field[6]=='7' && Game::field[7]=='O' && Game::field[8]=='X')
//		{
//			help_for_random=rand()%2;
//			if (help_for_random=0)
//				computers_set=4;
//			else
//				computers_set=7;
//		}	
//		else if (Game::field[0]=='1' && Game::field[1]=='X' && Game::field[2]=='O' && Game::field[3]=='4' && Game::field[4]=='X' && Game::field[5]=='6' && Game::field[6]=='X' && Game::field[7]=='O' && Game::field[8]=='9')
//		{
//			help_for_random=rand()%2;
//			if (help_for_random=0)
//				computers_set=6;
//			else
//				computers_set=9;
//		}	
//		else if (Game::field[0]=='X' && Game::field[1]=='O' && Game::field[2]=='3' && Game::field[3]=='4' && Game::field[4]=='X' && Game::field[5]=='6' && Game::field[6]=='7' && Game::field[7]=='X' && Game::field[8]=='O')
//		{
//			help_for_random=rand()%2;
//			if (help_for_random=0)
//				computers_set=3;
//			else
//				computers_set=6;
//		}	
//		else if (Game::field[0]=='1' && Game::field[1]=='O' && Game::field[2]=='X' && Game::field[3]=='4' && Game::field[4]=='X' && Game::field[5]=='6' && Game::field[6]=='O' && Game::field[7]=='X' && Game::field[8]=='9')
//		{
//			help_for_random=rand()%2;
//			if (help_for_random=0)
//				computers_set=1;
//			else
//				computers_set=4;
//		}	
//		/***
//		-2:-
//		***/
//		else if (Game::field[0]=='1' && Game::field[3]=='X' && Game::field[6]=='7' && Game::field[7]=='X' && Game::field[8]=='9')
//		{
//			help_for_random=rand()%3;
//			if (help_for_random==0)
//				computers_set=1;
//			else if (help_for_random==1)
//				computers_set=7;
//			else computers_set=9;
//		}
//		else if (Game::field[0]=='1' && Game::field[1]=='X' && Game::field[2]=='3' && Game::field[5]=='X' && Game::field[8]=='9')
//		{
//			help_for_random=rand()%3;
//			if (help_for_random==0)
//				computers_set=1;
//			else if (help_for_random==1)
//				computers_set=3;
//			else computers_set=9;
//		}
//		else if (Game::field[0]=='1' && Game::field[1]=='X' && Game::field[2]=='3' && Game::field[3]=='X' && Game::field[6]=='7')
//		{
//			help_for_random=rand()%3;
//			if (help_for_random==0)
//				computers_set=1;
//			else if (help_for_random==1)
//				computers_set=3;
//			else computers_set=7;
//		}
//		else if (Game::field[2]=='3' && Game::field[5]=='X' && Game::field[6]=='7' && Game::field[7]=='X' && Game::field[8]=='9')
//		{
//			help_for_random=rand()%3;
//			if (help_for_random==0)
//				computers_set=3;
//			else if (help_for_random==1)
//				computers_set=7;
//			else computers_set=9;
//		}
//		/**************
//		sets random 'O'
//		**************/
//		else 
//		{
//			do
//			{
//				help_for_random=rand()%10;
//			}while (Game::field[help_for_random-1]=='X'||Game::field[help_for_random-1]=='O');
//			computers_set=help_for_random;
//		}
//	}
//	else 
//	{
//		computers_set=5;
//	}
//}
//
//void Computer::generate_computers_ai_easy()
//{
//	int help_for_random;//random help
//
//	/***
//	direct win of 'O'
//	***/
//	if (Game::field[0]=='1' && ((Game::field[1]=='O' && Game::field[2]=='O') || (Game::field[4]=='O' && Game::field[8]=='O') || (Game::field[3]=='O' && Game::field[6]=='O')))
//		computers_set=1;
//	else if (Game::field[2]=='3' && ((Game::field[0]=='O' && Game::field[1]=='O') || (Game::field[4]=='O' && Game::field[6]=='O') || (Game::field[5]=='O' && Game::field[8]=='O')))
//		computers_set=3;
//	else if (Game::field[6]=='7' && ((Game::field[0]=='O' && Game::field[3]=='O') || (Game::field[2]=='O' && Game::field[4]=='O') || (Game::field[7]=='O' && Game::field[8]=='O')))
//		computers_set=7;
//	else if (Game::field[8]=='9' && ( (Game::field[0]=='O' && Game::field[4]=='O') || (Game::field[2]=='O' && Game::field[5]=='O') || (Game::field[6]=='O' && Game::field[7]=='O')))
//		computers_set=9;
//	else if (Game::field[1]=='2' && ( (Game::field[0]=='O' && Game::field[2]=='O') || (Game::field[4]=='O' && Game::field[7]=='O')))
//		computers_set=2;
//	else if (Game::field[3]=='4' && ( (Game::field[0]=='O' && Game::field[6]=='O') || (Game::field[4]=='O' && Game::field[5]=='O')))
//		computers_set=4;
//	else if (Game::field[5]=='6' && ( (Game::field[2]=='O' && Game::field[8]=='O') || (Game::field[3]=='O' && Game::field[4]=='O')))
//		computers_set=6;
//	else if (Game::field[7]=='8' && ( (Game::field[1]=='O' && Game::field[4]=='O') || (Game::field[6]=='O' && Game::field[8]=='O')))
//		computers_set=8;
//	else if (Game::field[4]=='5' && ( (Game::field[1]=='O' && Game::field[7]=='O') || (Game::field[0]=='O' && Game::field[8]=='O') || (Game::field[3]=='O' && Game::field[5]=='O') ||(Game::field[2]=='O' && Game::field[6]=='O')))
//		computers_set=5;
//	else
//	{
//		do
//		{
//			help_for_random=rand()%10;
//		}while (Game::field[help_for_random-1]=='X'||Game::field[help_for_random-1]=='O');
//		computers_set=help_for_random;
//	}	
//
//	cout << "computerset: " << computers_set << endl;
//}
//
//
//int Computer::get_computers_ai()
//{
//	return computers_set;
//}