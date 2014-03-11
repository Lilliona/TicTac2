#include "Human.h"


Human::Human(void)
{
	choose_difficulty=0;
}


Human::~Human(void)
{
}

void Human::ask_for_playerset()
{
	this->input_validation();
}

void Human::input_validation(/*'Bereich'änderung für Menü,  vllt später*/)
{
	string entered_string;

	while (1)
	{
		getline(cin, entered_string);

		bool validateNumeric = true;

		for (unsigned i=0; i < entered_string.length(); i++)
		{
			if (!isdigit(entered_string[i]))
			{
				validateNumeric = false;
				break;
			}
		}
		if (!validateNumeric)
		{
			cout << "wrong entry. try again: ";
			continue;
		}

		stringstream sStream (entered_string);
		sStream >> playerset; 

		if (playerset>9)
		{
			cout << "You are over the valid range. Try again: ";
			continue;
		}

		if (playerset<1)
		{
			cout << "You are under the valid range. Try again: ";
			continue;
		}
		break;
	}
}

void Human::ask_for_difficulty()
{
	input_validation();
	choose_difficulty=playerset%3+1;
}

int Human::get_humans_choice_of_difficulty()
{
	return choose_difficulty;
}
