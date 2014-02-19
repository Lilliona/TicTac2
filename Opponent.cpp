#include "Opponent.h"


Opponent::Opponent(void)
{
}


Opponent::~Opponent(void)
{
}

void Opponent::ask_for_opponentset()
{
		cout << "Opponent, please insert a number where you want to place your \"O\": ";

		
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