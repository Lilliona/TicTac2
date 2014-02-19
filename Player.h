#pragma once
#include "Field.h"
#include <string>
#include <sstream>

class Player
{
	int playerset;
public:
	Player();
	~Player(void);

	void ask_for_playerset();
	int get_playerset();
};

