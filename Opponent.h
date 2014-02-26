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
	int opponents_set;
public:
	Opponent(void);
	~Opponent(void);
	int generate_opponents_scores();
	void ask_for_opponents_set();
	int get_opponents_set();
	void generate_opponents_ai();
	int get_opponents_ai();
};

