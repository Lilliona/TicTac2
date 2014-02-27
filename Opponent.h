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
	void generate_opponents_ai_easy();
	void generate_opponents_ai_normal();
	void generate_opponents_ai_hard();
	int get_opponents_ai();
	
};

