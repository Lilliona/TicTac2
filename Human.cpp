#include "Human.h"


Human::Human(void)
{
}


Human::~Human(void)
{
}

//void Player::ask_for_playerset()
//{
//	
//	inputvalidation();
//}
//
//int Player::get_playerset()
//{
//	return playerset;
//}
//
//void Player::inputvalidation()
//{
//		 string entered_string;
//
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
//		sStream >> playerset; 
//
//		if (playerset>9)
//		{
//			cout << "You are over the valid range. Try again: ";
//			continue;
//		}
//
//		if (playerset<1)
//		{
//			cout << "You are under the valid range. Try again: ";
//			continue;
//		}
//		break;
//	}
//}
