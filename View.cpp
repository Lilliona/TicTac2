#include "View.h"


View::View(void)
{
}


View::~View(void)
{
}

void View::player_view_set()
{
	cout << "Player, please insert a number where you want to place your \"X\": " << endl;
	
	string entered_string;
	getline (cin, entered_string);
}