#pragma once
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

class Player
{
	int playerset;
public:
	Player();
	~Player(void);

	void ask_for_playerset();
	int get_playerset();
};

