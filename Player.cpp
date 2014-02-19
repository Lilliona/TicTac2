#include "Player.h"

Player::Player()
{
	
}


Player::~Player(void)
{
}

void Player::ask_for_playerset()
{
	cout << "Player, please insert a number where you want to place your \"X\": ";

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
		sStream >> playerset; 

		if(playerset>9)
		{
			cout << "You are over the valid range. Try again: ";
			continue;
		}

		if(playerset<1)
		{
			cout << "You are under the valid range. Try again: ";
			continue;
		}
		break;
	}
}

int Player::get_playerset()
{
	return playerset;
}