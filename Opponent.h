#pragma once
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

class Opponent
{
	int opponentset;
public:
	Opponent(void);
	~Opponent(void);

	void ask_for_opponentset();
	int get_opponentset();
};
