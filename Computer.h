#pragma once
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string>
#include <sstream>
#include "Game.h"
using namespace std;

class Computer: public Player
{
	
	void take_difficulty();//**not implemented!**//
	void work_with_difficulty_chosen_by_human(); //**not implemented**//
public:
	Computer(void);
	~Computer(void);
	int number_of_difficulty;
};
//	int computers_set;
//public:
//	Computer(void);
//	~Computer(void);
////	int generate_computers_scores();
//	void generate_computers_ai_easy();
//	void generate_computers_ai_normal();
//	void generate_computers_ai_hard();
//	int get_computers_ai();
//	
//};

//Überklasse v. Player und Computer


