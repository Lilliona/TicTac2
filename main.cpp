#include "Controller.h"
#include <iostream>


using namespace std;

int main()
{
	srand(time(NULL));
	Controller *new_game;
	new_game=new Controller();
	new_game->generate_new_game();

	delete new_game;
	return 0;
}
