#include "stdafx.h"
#include "PlayerChar.h"

#include <iostream>
#include <array>
#include <numeric>
#include <string>
PlayerChar::PlayerChar()
{
}


PlayerChar::~PlayerChar()
{
}

int PlayerChar::testRoll()
{
	setAbility();
	return 0;
}

void PlayerChar::setName()
{
	std::cout << "Enter your characters name: ";
	std::cin >> name;
	std::cout << "Welcome " << name << "!" << std::endl;
}

void PlayerChar::setAbility()
{
	for (int i = 0; i < 6; i++) {

		abiArr[i] = rollAbility();
	}

	for (int i = 0; i < 6; i++) {
		std::cout << abiArr[i] << " ";
	}
}

void PlayerChar::setSize()
{
}

void PlayerChar::setSpeed()
{
}

void PlayerChar::setRace()
{
}

void PlayerChar::setsubrace()
{
}

void PlayerChar::setDarkvision()
{
}

void PlayerChar::setStr()
{
}

void PlayerChar::setDex()
{
}

void PlayerChar::setCon()
{
}

void PlayerChar::setInt()
{
}

void PlayerChar::setWis()
{
}

void PlayerChar::setCha()
{
}

int PlayerChar::rollAbility()
{
	std::array<int, 4> rollArr;
	for(int i =0; i<4; i++)
		rollArr[i] = roll(6);
	std::sort(rollArr.begin(), rollArr.end());

	int sum = rollArr[0] = 0;
	for (int i = 0; i < 4; i++) {
		sum += rollArr[i];
	}



	return sum;
}
