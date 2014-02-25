#pragma once
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string>
#include <sstream>
#include "Game.h"

using namespace std;

class Opponent
{
	int opponentset;
public:
	Opponent(void);
	~Opponent(void);

	void ask_for_opponentset();
	int get_opponentset();
	
	void generate_opponents_ai();
	int get_opponents_ai();
};

