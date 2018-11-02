#include "stdafx.h"
#include "DiceRoller.h"



DiceRoller::DiceRoller()
{

	
}


DiceRoller::~DiceRoller()
{
}

int DiceRoller::roll(int sides) {

	std::random_device rd;
	std::mt19937 mt(rd());
	std::uniform_int_distribution<int> dist(1, sides);
	
	return dist(mt);




}