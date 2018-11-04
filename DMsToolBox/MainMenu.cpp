#include "stdafx.h"
#include "MainMenu.h"
#include "PlayerChar.h"
#include <iostream>
MainMenu::MainMenu()
{
	int num;
	std::cout << "1. Player Character \n2. NPC  \n3. ----- \n4. ------" << std::endl;
	std::cin >> num;
	std::cout << std::endl;

	switch (num) {
	case 1: charCreation();
		break;
	default:
		break;

	}
}


MainMenu::~MainMenu()
{
}

void MainMenu::charCreation()
{
	int num;
	std::cout << "1. New Character \n2. Edit Character" << std::endl;
	std::cin >> num;
	switch (num) {
	case 1: nameOption();
		break;
	case 2:
		break;
	}






}

void MainMenu::nameOption()
{

	int num;
	PlayerChar player;
	std::cout << "Would you like to:  \n 1. Enter a Name \n 2. Randomly choose a name" << std::endl;
	std::cin >> num;
	switch(num){
	case 1: player.setName();
		break;
	case 2:
		break;
	default:
		break;
	}
}
