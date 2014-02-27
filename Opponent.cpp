#include "Opponent.h"


Opponent::Opponent(void)
{
}


Opponent::~Opponent(void)
{
}

void Opponent::generate_opponents_ai_hard()
{ 
	cout << "erp" << endl;
	int i;//random help
	if(Game::field[4]=='X'|| Game::field[4]=='O')
	{
		/*************************************************
		Is the first step of the Player '5', set 'O' into a corner
		*************************************************/
		if (Game::field[4]=='X' && Game::field[0]=='1' && Game::field[1]=='2' && Game::field[2]=='3' && Game::field[3]=='4' && Game::field[5]=='6' && Game::field[6]=='7' && Game::field[7]=='8' && Game::field[8]=='9')
		{
			cout << "while 1" << endl;
			cout << "while 2" << endl;
			int help_for_switchcase;
			help_for_switchcase=rand()%4;
			switch(help_for_switchcase)
			{
			case 0:
				opponents_set=1;
				break;
			case 1:
				opponents_set=3;
				break;
			case 2:
				opponents_set=7;
				break;
			case 3:
				opponents_set=9;
				break;
			default:
				cout << "Some Mistake has happened[1]" << endl;
			}
		}
		/******************************
		Looks if 'O' could directly win
		******************************/
		else if (Game::field[0]=='1' && ((Game::field[1]=='O' && Game::field[2]=='O') || (Game::field[4]=='O' && Game::field[8]=='O') || (Game::field[3]=='O' && Game::field[6]=='O')))
		{	opponents_set=1;cout << "while 2" << endl;}
		else if (Game::field[2]=='3' && ((Game::field[0]=='O' && Game::field[1]=='O') || (Game::field[4]=='O' && Game::field[6]=='O') || (Game::field[5]=='O' && Game::field[8]=='O')))
		{	opponents_set=3;cout << "while 2" << endl;}
		else if (Game::field[6]=='7' && ((Game::field[0]=='O' && Game::field[3]=='O') || (Game::field[2]=='O' && Game::field[4]=='O') || (Game::field[7]=='O' && Game::field[8]=='O')))
		{	opponents_set=7;cout << "while 2" << endl;}
		else if (Game::field[8]=='9' && ( (Game::field[0]=='O' && Game::field[4]=='O') || (Game::field[2]=='O' && Game::field[5]=='O') || (Game::field[6]=='O' && Game::field[7]=='O')))
		{	opponents_set=9;cout << "while 2" << endl;}
		else if (Game::field[1]=='2' && ( (Game::field[0]=='O' && Game::field[2]=='O') || (Game::field[4]=='O' && Game::field[7]=='O')))
		{	opponents_set=2;cout << "while 2" << endl;}
		else if (Game::field[3]=='4' && ( (Game::field[0]=='O' && Game::field[6]=='O') || (Game::field[4]=='O' && Game::field[5]=='O')))
		{	opponents_set=4;cout << "while 2" << endl;}
		else if (Game::field[5]=='6' && ( (Game::field[2]=='O' && Game::field[8]=='O') || (Game::field[3]=='O' && Game::field[4]=='O')))
		{	opponents_set=6;cout << "while 2" << endl;}
		else if (Game::field[7]=='8' && ( (Game::field[1]=='O' && Game::field[4]=='O') || (Game::field[6]=='O' && Game::field[8]=='O')))
		{	opponents_set=8;cout << "while 2" << endl;}
		else if (Game::field[4]=='5' && ( (Game::field[1]=='O' && Game::field[7]=='O') || (Game::field[0]=='O' && Game::field[8]=='O') || (Game::field[3]=='O' && Game::field[5]=='O') ||(Game::field[2]=='O' && Game::field[6]=='O')))
		{	opponents_set=5;cout << "while 2" << endl;}
		/******************************
		Looks if 'X' could directly win
		******************************/
		else if (Game::field[0]=='1' && ((Game::field[1]=='X' && Game::field[2]=='X') || (Game::field[4]=='X' && Game::field[8]=='X') || (Game::field[3]=='X' && Game::field[6]=='X')))
		{	opponents_set=1;cout << "while 3" << endl;}
		else if (Game::field[2]=='3' && ((Game::field[0]=='X' && Game::field[1]=='X') || (Game::field[4]=='X' && Game::field[6]=='X') || (Game::field[5]=='X' && Game::field[8]=='X')))
		{	opponents_set=3;cout << "while 3" << endl;}
		else if (Game::field[6]=='7' && ((Game::field[0]=='X' && Game::field[3]=='X') || (Game::field[2]=='X' && Game::field[4]=='X') || (Game::field[7]=='X' && Game::field[8]=='X')))
		{	opponents_set=7;cout << "while 3" << endl;}
		else if (Game::field[8]=='9' && ( (Game::field[0]=='X' && Game::field[4]=='X') || (Game::field[2]=='X' && Game::field[5]=='X') || (Game::field[6]=='X' && Game::field[7]=='X')))
		{	opponents_set=9;cout << "while 3" << endl;}
		else if (Game::field[1]=='2' && ( (Game::field[0]=='X' && Game::field[2]=='X') || (Game::field[4]=='X' && Game::field[7]=='X')))
		{	opponents_set=2;cout << "while 3" << endl;}
		else if (Game::field[3]=='4' && ( (Game::field[0]=='X' && Game::field[6]=='X') || (Game::field[4]=='X' && Game::field[5]=='X')))
		{	opponents_set=4;cout << "while 3" << endl;}
		else if (Game::field[5]=='6' && ( (Game::field[2]=='X' && Game::field[8]=='X') || (Game::field[3]=='X' && Game::field[4]=='X')))
		{	opponents_set=6;cout << "while 3" << endl;}
		else if (Game::field[7]=='8' && ( (Game::field[1]=='X' && Game::field[4]=='X') || (Game::field[6]=='X' && Game::field[8]=='X')))
		{	opponents_set=8;cout << "while 3" << endl;}
		else if (Game::field[4]=='5' && ( (Game::field[1]=='X' && Game::field[7]=='X') || (Game::field[0]=='X' && Game::field[8]=='X') || (Game::field[3]=='X' && Game::field[5]=='X') ||(Game::field[2]=='X' && Game::field[6]=='X')))
		{	opponents_set=5;cout << "while 3" << endl;}
		/********************
		Looks for tricks of X
		********************/
		/***
		-1:-
		***/
		else if (Game::field[0]=='1' && Game::field[1]=='2' && Game::field[2]=='O' && Game::field[3]=='O' && Game::field[4]=='X' && Game::field[5]=='X' && Game::field[6]=='X' && Game::field[7]=='8' && Game::field[8]=='9')
		{	opponents_set=rand()%2+1;cout << "while 4" << endl;}
		else if (Game::field[0]=='X' && Game::field[1]=='2' && Game::field[2]=='3' && Game::field[3]=='O' && Game::field[4]=='X' && Game::field[5]=='X' && Game::field[6]=='7' && Game::field[7]=='8' && Game::field[8]=='O')
		{	opponents_set=rand()%2+7;cout << "while 4" << endl;}
		else if (Game::field[0]=='1' && Game::field[1]=='2' && Game::field[2]=='X' && Game::field[3]=='X' && Game::field[4]=='X' && Game::field[5]=='O' && Game::field[6]=='O' && Game::field[7]=='8' && Game::field[8]=='9')
		{	opponents_set=rand()%2+8;cout << "while 4" << endl;}
		else if (Game::field[0]=='O' && Game::field[1]=='2' && Game::field[2]=='3' && Game::field[3]=='X' && Game::field[4]=='X' && Game::field[5]=='O' && Game::field[6]=='7' && Game::field[7]=='8' && Game::field[8]=='X')
		{	opponents_set=rand()%2+2;cout << "while 4" << endl;}
		else if (Game::field[0]=='O' && Game::field[1]=='X' && Game::field[2]=='3' && Game::field[3]=='4' && Game::field[4]=='X' && Game::field[5]=='6' && Game::field[6]=='7' && Game::field[7]=='O' && Game::field[8]=='X')
		{
			i=rand()%2;
			if(i=0)
			{	opponents_set=4;cout << "while 5" << endl;
			}else
			{	opponents_set=7;cout << "while 5" << endl;}
		}	
		else if (Game::field[0]=='1' && Game::field[1]=='X' && Game::field[2]=='O' && Game::field[3]=='4' && Game::field[4]=='X' && Game::field[5]=='6' && Game::field[6]=='X' && Game::field[7]=='O' && Game::field[8]=='9')
		{cout << "while 6" << endl;
			i=rand()%2;
			if(i=0)
				opponents_set=6;
			else
				opponents_set=9;
		}	
		else if (Game::field[0]=='X' && Game::field[1]=='O' && Game::field[2]=='3' && Game::field[3]=='4' && Game::field[4]=='X' && Game::field[5]=='6' && Game::field[6]=='7' && Game::field[7]=='X' && Game::field[8]=='O')
		{cout << "while 7" << endl;
			i=rand()%2;
			if(i=0)
				opponents_set=3;
			else
				opponents_set=6;
		}	
		else if (Game::field[0]=='1' && Game::field[1]=='O' && Game::field[2]=='X' && Game::field[3]=='4' && Game::field[4]=='X' && Game::field[5]=='6' && Game::field[6]=='O' && Game::field[7]=='X' && Game::field[8]=='9')
		{cout << "while 8" << endl;
			i=rand()%2;
			if(i=0)
				opponents_set=1;
			else
				opponents_set=4;
		}	
		/***
		-2:-
		***/
		else if ((Game::field[0]=='1' && Game::field[1]=='2' && Game::field[2]=='O' && Game::field[3]=='4' && Game::field[4]=='X' && Game::field[5]=='6' && Game::field[6]=='X' && Game::field[7]=='8' && Game::field[8]=='9')||(Game::field[0]=='1' && Game::field[1]=='2' && Game::field[2]=='X' && Game::field[3]=='4' && Game::field[4]=='X' && Game::field[5]=='6' && Game::field[6]=='O' && Game::field[7]=='8' && Game::field[8]=='9'))
		{cout << "while 9" << endl;
			i=rand()%2;
			if(i=0)
				opponents_set=1;
			else
				opponents_set=9;
		}	
		else if ((Game::field[0]=='X' && Game::field[1]=='2' && Game::field[2]=='3' && Game::field[3]=='4' && Game::field[4]=='X' && Game::field[5]=='6' && Game::field[6]=='7' && Game::field[7]=='8' && Game::field[8]=='O')||(Game::field[0]=='O' && Game::field[1]=='2' && Game::field[2]=='3' && Game::field[3]=='4' && Game::field[4]=='X' && Game::field[5]=='6' && Game::field[6]=='7' && Game::field[7]=='8' && Game::field[8]=='X'))
		{cout << "while 10" << endl;
			i=rand()%2;
			if(i=0)
				opponents_set=3;
			else
				opponents_set=7;
		}	
		/***
		-3:-
		***/
		else if ((Game::field[0]=='X' && Game::field[3]=='4' && Game::field[6]=='7' && Game::field[7]=='X' && Game::field[8]=='9')||(Game::field[0]=='1' && Game::field[3]=='X' && Game::field[6]=='7' && Game::field[7]=='8' && Game::field[8]=='X'))
		{	opponents_set=7;cout << "while 11" << endl;}
		else if ((Game::field[0]=='X' && Game::field[1]=='2' && Game::field[2]=='3' && Game::field[5]=='X' && Game::field[8]=='9')||(Game::field[0]=='1' && Game::field[1]=='X' && Game::field[2]=='3' && Game::field[5]=='6' && Game::field[8]=='X'))
		{	opponents_set=3;cout << "while 11" << endl;}
		else if ((Game::field[0]=='1' && Game::field[1]=='2' && Game::field[2]=='X' && Game::field[3]=='X' && Game::field[6]=='7')||(Game::field[0]=='1' && Game::field[1]=='X' && Game::field[2]=='3' && Game::field[3]=='4' && Game::field[6]=='X'))
		{	opponents_set=1;cout << "while 11" << endl;}
		else if ((Game::field[2]=='X' && Game::field[5]=='6' && Game::field[6]=='7' && Game::field[7]=='X' && Game::field[8]=='9')||(Game::field[2]=='3' && Game::field[5]=='X' && Game::field[6]=='X' && Game::field[7]=='8' && Game::field[8]=='9'))
		{	opponents_set=9;cout << "while 11" << endl;}
		/***
		-4:-
		***/
		else if (Game::field[0]=='1' && Game::field[3]=='X' && Game::field[6]=='7' && Game::field[7]=='X' && Game::field[8]=='9')
		{cout << "while 12" << endl;
			i=rand()%3;
			if (i==0)
				opponents_set=1;
			else if(i==1)
				opponents_set=7;
			else opponents_set=9;
		}
		else if (Game::field[0]=='1' && Game::field[1]=='X' && Game::field[2]=='3' && Game::field[5]=='X' && Game::field[8]=='9')
		{cout << "while 12" << endl;
			i=rand()%3;
			if (i==0)
				opponents_set=1;
			else if(i==1)
				opponents_set=3;
			else opponents_set=9;
		}
		else if (Game::field[0]=='1' && Game::field[1]=='X' && Game::field[2]=='3' && Game::field[3]=='X' && Game::field[6]=='7')
		{cout << "while 12" << endl;
			i=rand()%3;
			if (i==0)
				opponents_set=1;
			else if(i==1)
				opponents_set=3;
			else opponents_set=7;
		}
		else if (Game::field[2]=='3' && Game::field[5]=='X' && Game::field[6]=='7' && Game::field[7]=='X' && Game::field[8]=='9')
		{cout << "while 12" << endl;
			i=rand()%3;
			if (i==0)
				opponents_set=3;
			else if(i==1)
				opponents_set=7;
			else opponents_set=9;
		}
		/***
		-5:-
		***/
		else if (Game::field[0]=='X' && Game::field[3]=='4' && Game::field[6]=='7' && Game::field[7]=='8' && Game::field[8]=='X')
		{cout << "while 13" << endl;
			i=rand()%2;
			if (i==0)
				opponents_set=4;
			else
				opponents_set=8;
		}
		else if (Game::field[0]=='X' && Game::field[1]=='2' && Game::field[2]=='3' && Game::field[5]=='6' && Game::field[8]=='X')
		{cout << "while 13" << endl;
			i=rand()%2;
			if (i==0)
				opponents_set=2;
			else
				opponents_set=6;
		}
		else if (Game::field[0]=='1' && Game::field[1]=='2' && Game::field[2]=='X' && Game::field[3]=='4' && Game::field[6]=='X')
		{cout << "while 13" << endl;
			i=rand()%2;
			if (i==0)
				opponents_set=2;
			else
				opponents_set=4;
		}
		else if (Game::field[2]=='X' && Game::field[5]=='6' && Game::field[6]=='X' && Game::field[7]=='8' && Game::field[8]=='9')
		{cout << "while 13" << endl;
			i=rand()%2;
			if (i==0)
				opponents_set=6;
			else
				opponents_set=8;
		}
		/*******************
		Looks for own tricks
		*******************/
		/***
		-1:-
		***/
		else if ((Game::field[0]=='O' && Game::field[3]=='4' && Game::field[6]=='7' && Game::field[7]=='O' && Game::field[8]=='9')||(Game::field[0]=='1' && Game::field[3]=='O' && Game::field[6]=='7' && Game::field[7]=='8' && Game::field[8]=='O'))
		{	opponents_set=7;cout << "while 14" << endl;}
		else if ((Game::field[0]=='O' && Game::field[1]=='2' && Game::field[2]=='3' && Game::field[5]=='O' && Game::field[8]=='9')||(Game::field[0]=='1' && Game::field[1]=='O' && Game::field[2]=='3' && Game::field[5]=='6' && Game::field[8]=='O'))
		{	opponents_set=3;cout << "while 14" << endl;}
		else if ((Game::field[0]=='1' && Game::field[1]=='2' && Game::field[2]=='O' && Game::field[3]=='O' && Game::field[6]=='7')||(Game::field[0]=='1' && Game::field[1]=='O' && Game::field[2]=='3' && Game::field[3]=='4' && Game::field[6]=='O'))
		{	opponents_set=1;cout << "while 14" << endl;}
		else if ((Game::field[2]=='O' && Game::field[5]=='6' && Game::field[6]=='7' && Game::field[7]=='O' && Game::field[8]=='9')||(Game::field[2]=='3' && Game::field[5]=='O' && Game::field[6]=='O' && Game::field[7]=='8' && Game::field[8]=='9'))
		{	opponents_set=9;cout << "while 14" << endl;}
		/***
		-2:-
		***/
		else if (Game::field[0]=='1' && Game::field[3]=='O' && Game::field[6]=='7' && Game::field[7]=='O' && Game::field[8]=='9')
			{opponents_set=7;cout << "while 15" << endl;}
		else if (Game::field[0]=='1' && Game::field[1]=='O' && Game::field[2]=='3' && Game::field[5]=='O' && Game::field[8]=='9')
		{	opponents_set=3;cout << "while 15" << endl;}
		else if (Game::field[0]=='1' && Game::field[1]=='O' && Game::field[2]=='3' && Game::field[3]=='O' && Game::field[6]=='7')
		{	opponents_set=1;cout << "while 15" << endl;}
		else if (Game::field[2]=='3' && Game::field[5]=='O' && Game::field[6]=='7' && Game::field[7]=='O' && Game::field[8]=='9')
		{	opponents_set=9;cout << "while 15" << endl;}
		/***
		-3:-
		***/
		else if (Game::field[0]=='O' && Game::field[3]=='4' && Game::field[6]=='7' && Game::field[7]=='8' && Game::field[8]=='O')
		{	opponents_set=7;cout << "while 16" << endl;}
		else if (Game::field[0]=='O' && Game::field[1]=='2' && Game::field[2]=='3' && Game::field[5]=='6' && Game::field[8]=='O')
		{	opponents_set=3;cout << "while 16" << endl;}
		else if (Game::field[0]=='1' && Game::field[1]=='2' && Game::field[2]=='O' && Game::field[3]=='4' && Game::field[6]=='O')
		{	opponents_set=1;cout << "while 16" << endl;}
		else if (Game::field[2]=='O' && Game::field[5]=='6' && Game::field[6]=='O' && Game::field[7]=='8' && Game::field[8]=='9')
		{	opponents_set=9;cout << "while 16" << endl;}
		/**************
		sets random 'O'
		**************/
		else 
		{cout << "while 17" << endl;
			do
			{
				i=rand()%10;
			}while(Game::field[i-1]=='X'||Game::field[i-1]=='O');
			opponents_set=i;
		}
	}
	else{cout << "while 18" << endl;
		opponents_set=5;
	}
}

void Opponent::generate_opponents_ai_normal()
{
	cout << "berp" << endl;
	int i=0;//random help
	if(Game::field[4]=='X'|| Game::field[4]=='O')
	{
		/*************************************************
		Is the first step of the Player '5', set 'O' into a corner
		*************************************************/
		if (Game::field[4]=='X' && Game::field[0]=='1' && Game::field[1]=='2' && Game::field[2]=='3' && Game::field[3]=='4' && Game::field[5]=='6' && Game::field[6]=='7' && Game::field[7]=='8' && Game::field[8]=='9')
		{
			int help_for_switchcase;
			help_for_switchcase=rand()%4;
			switch(help_for_switchcase)
			{
			case 0:
				opponents_set=1;
				break;
			case 1:
				opponents_set=3;
				break;
			case 2:
				opponents_set=7;
				break;
			case 3:
				opponents_set=9;
				break;
			default:
				cout << "Some Mistake has happened[1]" << endl;
			}
		
		}
		/******************************
		Looks if 'O' could directly win
		******************************/
		else if (Game::field[0]=='1' && ((Game::field[1]=='O' && Game::field[2]=='O') || (Game::field[4]=='O' && Game::field[8]=='O') || (Game::field[3]=='O' && Game::field[6]=='O')))
			opponents_set=1;
		else if (Game::field[2]=='3' && ((Game::field[0]=='O' && Game::field[1]=='O') || (Game::field[4]=='O' && Game::field[6]=='O') || (Game::field[5]=='O' && Game::field[8]=='O')))
			opponents_set=3;
		else if (Game::field[6]=='7' && ((Game::field[0]=='O' && Game::field[3]=='O') || (Game::field[2]=='O' && Game::field[4]=='O') || (Game::field[7]=='O' && Game::field[8]=='O')))
			opponents_set=7;
		else if (Game::field[8]=='9' && ( (Game::field[0]=='O' && Game::field[4]=='O') || (Game::field[2]=='O' && Game::field[5]=='O') || (Game::field[6]=='O' && Game::field[7]=='O')))
			opponents_set=9;
		else if (Game::field[1]=='2' && ( (Game::field[0]=='O' && Game::field[2]=='O') || (Game::field[4]=='O' && Game::field[7]=='O')))
			opponents_set=2;
		else if (Game::field[3]=='4' && ( (Game::field[0]=='O' && Game::field[6]=='O') || (Game::field[4]=='O' && Game::field[5]=='O')))
			opponents_set=4;
		else if (Game::field[5]=='6' && ( (Game::field[2]=='O' && Game::field[8]=='O') || (Game::field[3]=='O' && Game::field[4]=='O')))
			opponents_set=6;
		else if (Game::field[7]=='8' && ( (Game::field[1]=='O' && Game::field[4]=='O') || (Game::field[6]=='O' && Game::field[8]=='O')))
			opponents_set=8;
		else if (Game::field[4]=='5' && ( (Game::field[1]=='O' && Game::field[7]=='O') || (Game::field[0]=='O' && Game::field[8]=='O') || (Game::field[3]=='O' && Game::field[5]=='O') ||(Game::field[2]=='O' && Game::field[6]=='O')))
			opponents_set=5;
		/******************************
		Looks if 'X' could directly win
		******************************/
		else if (Game::field[0]=='1' && ((Game::field[1]=='X' && Game::field[2]=='X') || (Game::field[4]=='X' && Game::field[8]=='X') || (Game::field[3]=='X' && Game::field[6]=='X')))
			opponents_set=1;
		else if (Game::field[2]=='3' && ((Game::field[0]=='X' && Game::field[1]=='X') || (Game::field[4]=='X' && Game::field[6]=='X') || (Game::field[5]=='X' && Game::field[8]=='X')))
			opponents_set=3;
		else if (Game::field[6]=='7' && ((Game::field[0]=='X' && Game::field[3]=='X') || (Game::field[2]=='X' && Game::field[4]=='X') || (Game::field[7]=='X' && Game::field[8]=='X')))
			opponents_set=7;
		else if (Game::field[8]=='9' && ( (Game::field[0]=='X' && Game::field[4]=='X') || (Game::field[2]=='X' && Game::field[5]=='X') || (Game::field[6]=='X' && Game::field[7]=='X')))
			opponents_set=9;
		else if (Game::field[1]=='2' && ( (Game::field[0]=='X' && Game::field[2]=='X') || (Game::field[4]=='X' && Game::field[7]=='X')))
			opponents_set=2;
		else if (Game::field[3]=='4' && ( (Game::field[0]=='X' && Game::field[6]=='X') || (Game::field[4]=='X' && Game::field[5]=='X')))
			opponents_set=4;
		else if (Game::field[5]=='6' && ( (Game::field[2]=='X' && Game::field[8]=='X') || (Game::field[3]=='X' && Game::field[4]=='X')))
			opponents_set=6;
		else if (Game::field[7]=='8' && ( (Game::field[1]=='X' && Game::field[4]=='X') || (Game::field[6]=='X' && Game::field[8]=='X')))
			opponents_set=8;
		else if (Game::field[4]=='5' && ( (Game::field[1]=='X' && Game::field[7]=='X') || (Game::field[0]=='X' && Game::field[8]=='X') || (Game::field[3]=='X' && Game::field[5]=='X') ||(Game::field[2]=='X' && Game::field[6]=='X')))
			opponents_set=5;
		/********************
		Looks for tricks of X
		********************/
		/***
		-1:-
		***/
		else if (Game::field[0]=='1' && Game::field[1]=='2' && Game::field[2]=='O' && Game::field[3]=='O' && Game::field[4]=='X' && Game::field[5]=='X' && Game::field[6]=='X' && Game::field[7]=='8' && Game::field[8]=='9')
			opponents_set=rand()%2+1;
		else if (Game::field[0]=='X' && Game::field[1]=='2' && Game::field[2]=='3' && Game::field[3]=='O' && Game::field[4]=='X' && Game::field[5]=='X' && Game::field[6]=='7' && Game::field[7]=='8' && Game::field[8]=='O')
			opponents_set=rand()%2+7;
		else if (Game::field[0]=='1' && Game::field[1]=='2' && Game::field[2]=='X' && Game::field[3]=='X' && Game::field[4]=='X' && Game::field[5]=='O' && Game::field[6]=='O' && Game::field[7]=='8' && Game::field[8]=='9')
			opponents_set=rand()%2+8;
		else if (Game::field[0]=='O' && Game::field[1]=='2' && Game::field[2]=='3' && Game::field[3]=='X' && Game::field[4]=='X' && Game::field[5]=='O' && Game::field[6]=='7' && Game::field[7]=='8' && Game::field[8]=='X')
			opponents_set=rand()%2+2;
		else if (Game::field[0]=='O' && Game::field[1]=='X' && Game::field[2]=='3' && Game::field[3]=='4' && Game::field[4]=='X' && Game::field[5]=='6' && Game::field[6]=='7' && Game::field[7]=='O' && Game::field[8]=='X')
		{
			i=rand()%2;
			if(i=0)
				opponents_set=4;
			else
				opponents_set=7;
		}	
		else if (Game::field[0]=='1' && Game::field[1]=='X' && Game::field[2]=='O' && Game::field[3]=='4' && Game::field[4]=='X' && Game::field[5]=='6' && Game::field[6]=='X' && Game::field[7]=='O' && Game::field[8]=='9')
		{
			i=rand()%2;
			if(i=0)
				opponents_set=6;
			else
				opponents_set=9;
		}	
		else if (Game::field[0]=='X' && Game::field[1]=='O' && Game::field[2]=='3' && Game::field[3]=='4' && Game::field[4]=='X' && Game::field[5]=='6' && Game::field[6]=='7' && Game::field[7]=='X' && Game::field[8]=='O')
		{
			i=rand()%2;
			if(i=0)
				opponents_set=3;
			else
				opponents_set=6;
		}	
		else if (Game::field[0]=='1' && Game::field[1]=='O' && Game::field[2]=='X' && Game::field[3]=='4' && Game::field[4]=='X' && Game::field[5]=='6' && Game::field[6]=='O' && Game::field[7]=='X' && Game::field[8]=='9')
		{
			i=rand()%2;
			if(i=0)
				opponents_set=1;
			else
				opponents_set=4;
		}	
		/***
		-2:-
		***/
		else if (Game::field[0]=='1' && Game::field[3]=='X' && Game::field[6]=='7' && Game::field[7]=='X' && Game::field[8]=='9')
		{
			i=rand()%3;
			if (i==0)
				opponents_set=1;
			else if(i==1)
				opponents_set=7;
			else opponents_set=9;
		}
		else if (Game::field[0]=='1' && Game::field[1]=='X' && Game::field[2]=='3' && Game::field[5]=='X' && Game::field[8]=='9')
		{
			i=rand()%3;
			if (i==0)
				opponents_set=1;
			else if(i==1)
				opponents_set=3;
			else opponents_set=9;
		}
		else if (Game::field[0]=='1' && Game::field[1]=='X' && Game::field[2]=='3' && Game::field[3]=='X' && Game::field[6]=='7')
		{
			i=rand()%3;
			if (i==0)
				opponents_set=1;
			else if(i==1)
				opponents_set=3;
			else opponents_set=7;
		}
		else if (Game::field[2]=='3' && Game::field[5]=='X' && Game::field[6]=='7' && Game::field[7]=='X' && Game::field[8]=='9')
		{
			i=rand()%3;
			if (i==0)
				opponents_set=3;
			else if(i==1)
				opponents_set=7;
			else opponents_set=9;
		}
		/**************
		sets random 'O'
		**************/
		else 
		{
			do
			{
				i=rand()%10;
			}while(Game::field[i-1]=='X'||Game::field[i-1]=='O');
			opponents_set=i;
		}
	}
	else 
	{
		opponents_set=5;
	}
}

void Opponent::generate_opponents_ai_easy()
{
	int i;//random help

	cout << "derp" << endl;
	/***
	direct win of 'O'
	***/
	if (Game::field[0]=='1' && ((Game::field[1]=='O' && Game::field[2]=='O') || (Game::field[4]=='O' && Game::field[8]=='O') || (Game::field[3]=='O' && Game::field[6]=='O')))
		opponents_set=1;
	else if (Game::field[2]=='3' && ((Game::field[0]=='O' && Game::field[1]=='O') || (Game::field[4]=='O' && Game::field[6]=='O') || (Game::field[5]=='O' && Game::field[8]=='O')))
		opponents_set=3;
	else if (Game::field[6]=='7' && ((Game::field[0]=='O' && Game::field[3]=='O') || (Game::field[2]=='O' && Game::field[4]=='O') || (Game::field[7]=='O' && Game::field[8]=='O')))
		opponents_set=7;
	else if (Game::field[8]=='9' && ( (Game::field[0]=='O' && Game::field[4]=='O') || (Game::field[2]=='O' && Game::field[5]=='O') || (Game::field[6]=='O' && Game::field[7]=='O')))
		opponents_set=9;
	else if (Game::field[1]=='2' && ( (Game::field[0]=='O' && Game::field[2]=='O') || (Game::field[4]=='O' && Game::field[7]=='O')))
		opponents_set=2;
	else if (Game::field[3]=='4' && ( (Game::field[0]=='O' && Game::field[6]=='O') || (Game::field[4]=='O' && Game::field[5]=='O')))
		opponents_set=4;
	else if (Game::field[5]=='6' && ( (Game::field[2]=='O' && Game::field[8]=='O') || (Game::field[3]=='O' && Game::field[4]=='O')))
		opponents_set=6;
	else if (Game::field[7]=='8' && ( (Game::field[1]=='O' && Game::field[4]=='O') || (Game::field[6]=='O' && Game::field[8]=='O')))
		opponents_set=8;
	else if (Game::field[4]=='5' && ( (Game::field[1]=='O' && Game::field[7]=='O') || (Game::field[0]=='O' && Game::field[8]=='O') || (Game::field[3]=='O' && Game::field[5]=='O') ||(Game::field[2]=='O' && Game::field[6]=='O')))
		opponents_set=5;
	else
	{
		do
		{
			i=rand()%10;
			cout << "i: " << i << endl;
		}while(Game::field[i-1]=='X'||Game::field[i-1]=='O');
		opponents_set=i;
	}	

	cout << "opponentset: " << opponents_set << endl;
}


int Opponent::get_opponents_ai()
{
	return opponents_set;
}