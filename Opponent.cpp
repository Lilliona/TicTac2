#include "opponent.h"


Opponent::Opponent(void)
{
}


Opponent::~Opponent(void)
{
}

void Opponent::ask_for_opponentset()
{
		cout << "opponent, please insert a number where you want to place your \"O\": ";

		
/******************Input Validation*********************/

		string isNumeric;

	while (1)
	{
		getline(cin, isNumeric);

		bool validateNumeric = true;

		for (unsigned i=0; i < isNumeric.length(); i++)
		{
			if (!isdigit(isNumeric[i]))
			{
				validateNumeric = false;
				break;
			}
		}
		if(!validateNumeric)
		{
			cout << "wrong entry. try again: ";
			continue;
		}

		stringstream sStream (isNumeric);
		sStream >> opponentset; 

		if(opponentset>9)
		{
			cout << "You are over the valid range. Try again: ";
			continue;
		}

		if(opponentset<1)
		{
			cout << "You are under the valid range. Try again: ";
			continue;
		}
		break;
	}
}

int Opponent::get_opponentset()
{
	return opponentset;
}

void Opponent::generate_opponents_ai()
{
	int i;//random help
	if(Game::field[4]=='X'|| Game::field[4]=='O')
	{
		/*************************************************
		Is the first step of the Player '5', set 'O' into a corner
		*************************************************/
		if (Game::field[4]=='X' && Game::field[0]=='1' && Game::field[1]=='2' && Game::field[2]=='3' && Game::field[3]=='4' && Game::field[5]=='6' && Game::field[6]=='7' && Game::field[7]=='8' && Game::field[8]=='9')
		{
			cout << "This is 'O's first turn" << endl;
			int help_for_switchcase;
			help_for_switchcase=rand()%4;
			switch(help_for_switchcase)
			{
			case 0:
				opponentset=1;
				break;
			case 1:
				opponentset=3;
				break;
			case 2:
				opponentset=7;
				break;
			case 3:
				opponentset=9;
				break;
			default:
				cout << "Some Mistake has happened[1]" << endl;
			}
		
		}
		/******************************
		Looks if 'O' could directly win
		******************************/
		else if (Game::field[0]=='1' && ((Game::field[1]=='O' && Game::field[2]=='O') || (Game::field[4]=='O' && Game::field[8]=='O') || (Game::field[3]=='O' && Game::field[6]=='O')))
			opponentset=1;
		else if (Game::field[2]=='3' && ((Game::field[0]=='O' && Game::field[1]=='O') || (Game::field[4]=='O' && Game::field[6]=='O') || (Game::field[5]=='O' && Game::field[8]=='O')))
			opponentset=3;
		else if (Game::field[6]=='7' && ((Game::field[0]=='O' && Game::field[3]=='O') || (Game::field[2]=='O' && Game::field[4]=='O') || (Game::field[7]=='O' && Game::field[8]=='O')))
			opponentset=7;
		else if (Game::field[8]=='9' && ( (Game::field[0]=='O' && Game::field[4]=='O') || (Game::field[2]=='O' && Game::field[5]=='O') || (Game::field[6]=='O' && Game::field[7]=='O')))
			opponentset=9;
		else if (Game::field[1]=='2' && ( (Game::field[0]=='O' && Game::field[2]=='O') || (Game::field[4]=='O' && Game::field[7]=='O')))
			opponentset=2;
		else if (Game::field[3]=='4' && ( (Game::field[0]=='O' && Game::field[6]=='O') || (Game::field[4]=='O' && Game::field[5]=='O')))
			opponentset=4;
		else if (Game::field[5]=='6' && ( (Game::field[2]=='O' && Game::field[8]=='O') || (Game::field[3]=='O' && Game::field[4]=='O')))
			opponentset=6;
		else if (Game::field[7]=='8' && ( (Game::field[1]=='O' && Game::field[4]=='O') || (Game::field[6]=='O' && Game::field[8]=='O')))
			opponentset=8;
		else if (Game::field[4]=='5' && ( (Game::field[1]=='O' && Game::field[7]=='O') || (Game::field[0]=='O' && Game::field[8]=='O') || (Game::field[3]=='O' && Game::field[5]=='O') ||(Game::field[2]=='O' && Game::field[6]=='O')))
			opponentset=5;
		/******************************
		Looks if 'X' could directly win
		******************************/
		else if (Game::field[0]=='1' && ((Game::field[1]=='X' && Game::field[2]=='X') || (Game::field[4]=='X' && Game::field[8]=='X') || (Game::field[3]=='X' && Game::field[6]=='X')))
			opponentset=1;
		else if (Game::field[2]=='3' && ((Game::field[0]=='X' && Game::field[1]=='X') || (Game::field[4]=='X' && Game::field[6]=='X') || (Game::field[5]=='X' && Game::field[8]=='X')))
			opponentset=3;
		else if (Game::field[6]=='7' && ((Game::field[0]=='X' && Game::field[3]=='X') || (Game::field[2]=='X' && Game::field[4]=='X') || (Game::field[7]=='X' && Game::field[8]=='X')))
			opponentset=7;
		else if (Game::field[8]=='9' && ( (Game::field[0]=='X' && Game::field[4]=='X') || (Game::field[2]=='X' && Game::field[5]=='X') || (Game::field[6]=='X' && Game::field[7]=='X')))
			opponentset=9;
		else if (Game::field[1]=='2' && ( (Game::field[0]=='X' && Game::field[2]=='X') || (Game::field[4]=='X' && Game::field[7]=='X')))
			opponentset=2;
		else if (Game::field[3]=='4' && ( (Game::field[0]=='X' && Game::field[6]=='X') || (Game::field[4]=='X' && Game::field[5]=='X')))
			opponentset=4;
		else if (Game::field[5]=='6' && ( (Game::field[2]=='X' && Game::field[8]=='X') || (Game::field[3]=='X' && Game::field[4]=='X')))
			opponentset=6;
		else if (Game::field[7]=='8' && ( (Game::field[1]=='X' && Game::field[4]=='X') || (Game::field[6]=='X' && Game::field[8]=='X')))
			opponentset=8;
		else if (Game::field[4]=='5' && ( (Game::field[1]=='X' && Game::field[7]=='X') || (Game::field[0]=='X' && Game::field[8]=='X') || (Game::field[3]=='X' && Game::field[5]=='X') ||(Game::field[2]=='X' && Game::field[6]=='X')))
			opponentset=5;
		/********************
		Looks for tricks of X
		********************/
		/***
		-1:-
		***/
		else if (Game::field[0]=='1' && Game::field[1]=='2' && Game::field[2]=='O' && Game::field[3]=='O' && Game::field[4]=='X' && Game::field[5]=='X' && Game::field[6]=='X' && Game::field[7]=='8' && Game::field[8]=='9')
			opponentset=rand()%2+1;
		else if (Game::field[0]=='X' && Game::field[1]=='2' && Game::field[2]=='3' && Game::field[3]=='O' && Game::field[4]=='X' && Game::field[5]=='X' && Game::field[6]=='7' && Game::field[7]=='8' && Game::field[8]=='O')
			opponentset=rand()%2+7;
		else if (Game::field[0]=='1' && Game::field[1]=='2' && Game::field[2]=='X' && Game::field[3]=='X' && Game::field[4]=='X' && Game::field[5]=='O' && Game::field[6]=='O' && Game::field[7]=='8' && Game::field[8]=='9')
			opponentset=rand()%2+8;
		else if (Game::field[0]=='O' && Game::field[1]=='2' && Game::field[2]=='3' && Game::field[3]=='X' && Game::field[4]=='X' && Game::field[5]=='O' && Game::field[6]=='7' && Game::field[7]=='8' && Game::field[8]=='X')
			opponentset=rand()%2+2;
		else if (Game::field[0]=='O' && Game::field[1]=='X' && Game::field[2]=='3' && Game::field[3]=='4' && Game::field[4]=='X' && Game::field[5]=='6' && Game::field[6]=='7' && Game::field[7]=='O' && Game::field[8]=='X')
		{
			i=rand()%2;
			if(i=0)
				opponentset=4;
			else
				opponentset=7;
		}	
		else if (Game::field[0]=='1' && Game::field[1]=='X' && Game::field[2]=='O' && Game::field[3]=='4' && Game::field[4]=='X' && Game::field[5]=='6' && Game::field[6]=='X' && Game::field[7]=='O' && Game::field[8]=='9')
		{
			i=rand()%2;
			if(i=0)
				opponentset=6;
			else
				opponentset=9;
		}	
		else if (Game::field[0]=='X' && Game::field[1]=='O' && Game::field[2]=='3' && Game::field[3]=='4' && Game::field[4]=='X' && Game::field[5]=='6' && Game::field[6]=='7' && Game::field[7]=='X' && Game::field[8]=='O')
		{
			i=rand()%2;
			if(i=0)
				opponentset=3;
			else
				opponentset=6;
		}	
		else if (Game::field[0]=='1' && Game::field[1]=='O' && Game::field[2]=='X' && Game::field[3]=='4' && Game::field[4]=='X' && Game::field[5]=='6' && Game::field[6]=='O' && Game::field[7]=='X' && Game::field[8]=='9')
		{
			i=rand()%2;
			if(i=0)
				opponentset=1;
			else
				opponentset=4;
		}	
		/***
		-2:-
		***/
		else if ((Game::field[0]=='1' && Game::field[1]=='2' && Game::field[2]=='O' && Game::field[3]=='4' && Game::field[4]=='X' && Game::field[5]=='6' && Game::field[6]=='X' && Game::field[7]=='8' && Game::field[8]=='9')||(Game::field[0]=='1' && Game::field[1]=='2' && Game::field[2]=='X' && Game::field[3]=='4' && Game::field[4]=='X' && Game::field[5]=='6' && Game::field[6]=='O' && Game::field[7]=='8' && Game::field[8]=='9'))
		{
			i=rand()%2;
			if(i=0)
				opponentset=1;
			else
				opponentset=9;
		}	
		else if ((Game::field[0]=='X' && Game::field[1]=='2' && Game::field[2]=='3' && Game::field[3]=='4' && Game::field[4]=='X' && Game::field[5]=='6' && Game::field[6]=='7' && Game::field[7]=='8' && Game::field[8]=='O')||(Game::field[0]=='O' && Game::field[1]=='2' && Game::field[2]=='3' && Game::field[3]=='4' && Game::field[4]=='X' && Game::field[5]=='6' && Game::field[6]=='7' && Game::field[7]=='8' && Game::field[8]=='X'))
		{
			i=rand()%2;
			if(i=0)
				opponentset=3;
			else
				opponentset=7;
		}	
		/***
		-3:-
		***/
		else if ((Game::field[0]=='X' && Game::field[3]=='4' && Game::field[6]=='7' && Game::field[7]=='X' && Game::field[8]=='9')||(Game::field[0]=='1' && Game::field[3]=='X' && Game::field[6]=='7' && Game::field[7]=='8' && Game::field[8]=='X'))
			opponentset=7;
		else if ((Game::field[0]=='X' && Game::field[1]=='2' && Game::field[2]=='3' && Game::field[5]=='X' && Game::field[8]=='9')||(Game::field[0]=='1' && Game::field[1]=='X' && Game::field[2]=='3' && Game::field[5]=='6' && Game::field[8]=='X'))
			opponentset=3;
		else if ((Game::field[0]=='1' && Game::field[1]=='2' && Game::field[2]=='X' && Game::field[3]=='X' && Game::field[6]=='7')||(Game::field[0]=='1' && Game::field[1]=='X' && Game::field[2]=='3' && Game::field[3]=='4' && Game::field[6]=='X'))
			opponentset=1;
		else if ((Game::field[2]=='X' && Game::field[5]=='6' && Game::field[6]=='7' && Game::field[7]=='X' && Game::field[8]=='9')||(Game::field[2]=='3' && Game::field[5]=='X' && Game::field[6]=='X' && Game::field[7]=='8' && Game::field[8]=='9'))
			opponentset=9;
		/***
		-4:-
		***/
		else if (Game::field[0]=='1' && Game::field[3]=='X' && Game::field[6]=='7' && Game::field[7]=='X' && Game::field[8]=='9')
		{
			i=rand()%3;
			if (i==0)
				opponentset=1;
			else if(i==1)
				opponentset=7;
			else opponentset=9;
		}
		else if (Game::field[0]=='1' && Game::field[1]=='X' && Game::field[2]=='3' && Game::field[5]=='X' && Game::field[8]=='9')
		{
			i=rand()%3;
			if (i==0)
				opponentset=1;
			else if(i==1)
				opponentset=3;
			else opponentset=9;
		}
		else if (Game::field[0]=='1' && Game::field[1]=='X' && Game::field[2]=='3' && Game::field[3]=='X' && Game::field[6]=='7')
		{
			i=rand()%3;
			if (i==0)
				opponentset=1;
			else if(i==1)
				opponentset=3;
			else opponentset=7;
		}
		else if (Game::field[2]=='3' && Game::field[5]=='X' && Game::field[6]=='7' && Game::field[7]=='X' && Game::field[8]=='9')
		{
			i=rand()%3;
			if (i==0)
				opponentset=3;
			else if(i==1)
				opponentset=7;
			else opponentset=9;
		}
		/***
		-5:-
		***/
		else if (Game::field[0]=='X' && Game::field[3]=='4' && Game::field[6]=='7' && Game::field[7]=='8' && Game::field[8]=='X')
		{
			i=rand()%2;
			if (i==0)
				opponentset=4;
			else
				opponentset=8;
		}
		else if (Game::field[0]=='X' && Game::field[1]=='2' && Game::field[2]=='3' && Game::field[5]=='6' && Game::field[8]=='X')
		{
			i=rand()%2;
			if (i==0)
				opponentset=2;
			else
				opponentset=6;
		}
		else if (Game::field[0]=='1' && Game::field[1]=='2' && Game::field[2]=='X' && Game::field[3]=='4' && Game::field[6]=='X')
		{
			i=rand()%2;
			if (i==0)
				opponentset=2;
			else
				opponentset=4;
		}
		else if (Game::field[2]=='X' && Game::field[5]=='6' && Game::field[6]=='X' && Game::field[7]=='8' && Game::field[8]=='9')
		{
			i=rand()%2;
			if (i==0)
				opponentset=6;
			else
				opponentset=8;
		}
		/*******************
		Looks for own tricks
		*******************/
		/***
		-1:-
		***/
		else if ((Game::field[0]=='O' && Game::field[3]=='4' && Game::field[6]=='7' && Game::field[7]=='O' && Game::field[8]=='9')||(Game::field[0]=='1' && Game::field[3]=='O' && Game::field[6]=='7' && Game::field[7]=='8' && Game::field[8]=='O'))
			opponentset=7;
		else if ((Game::field[0]=='O' && Game::field[1]=='2' && Game::field[2]=='3' && Game::field[5]=='O' && Game::field[8]=='9')||(Game::field[0]=='1' && Game::field[1]=='O' && Game::field[2]=='3' && Game::field[5]=='6' && Game::field[8]=='O'))
			opponentset=3;
		else if ((Game::field[0]=='1' && Game::field[1]=='2' && Game::field[2]=='O' && Game::field[3]=='O' && Game::field[6]=='7')||(Game::field[0]=='1' && Game::field[1]=='O' && Game::field[2]=='3' && Game::field[3]=='4' && Game::field[6]=='O'))
			opponentset=1;
		else if ((Game::field[2]=='O' && Game::field[5]=='6' && Game::field[6]=='7' && Game::field[7]=='O' && Game::field[8]=='9')||(Game::field[2]=='3' && Game::field[5]=='O' && Game::field[6]=='O' && Game::field[7]=='8' && Game::field[8]=='9'))
			opponentset=9;
		/***
		-2:-
		***/
		else if (Game::field[0]=='1' && Game::field[3]=='O' && Game::field[6]=='7' && Game::field[7]=='O' && Game::field[8]=='9')
				opponentset=7;
		else if (Game::field[0]=='1' && Game::field[1]=='O' && Game::field[2]=='3' && Game::field[5]=='O' && Game::field[8]=='9')
				opponentset=3;
		else if (Game::field[0]=='1' && Game::field[1]=='O' && Game::field[2]=='3' && Game::field[3]=='O' && Game::field[6]=='7')
				opponentset=1;
		else if (Game::field[2]=='3' && Game::field[5]=='O' && Game::field[6]=='7' && Game::field[7]=='O' && Game::field[8]=='9')
				opponentset=9;
		/***
		-3:-
		***/
		else if (Game::field[0]=='O' && Game::field[3]=='4' && Game::field[6]=='7' && Game::field[7]=='8' && Game::field[8]=='O')
				opponentset=7;
		else if (Game::field[0]=='O' && Game::field[1]=='2' && Game::field[2]=='3' && Game::field[5]=='6' && Game::field[8]=='O')
				opponentset=3;
		else if (Game::field[0]=='1' && Game::field[1]=='2' && Game::field[2]=='O' && Game::field[3]=='4' && Game::field[6]=='O')
				opponentset=1;
		else if (Game::field[2]=='O' && Game::field[5]=='6' && Game::field[6]=='O' && Game::field[7]=='8' && Game::field[8]=='9')
				opponentset=9;
		/**************
		sets random 'O'
		**************/
		else 
		{
			do
			{
				i=rand()%10;
			}while(Game::field[i-1]=='X'||Game::field[i-1]=='O');
			opponentset=i;
		}
	}
	else{
		opponentset=5;
	}
}

int Opponent::get_opponents_ai()
{
	return opponentset;
}