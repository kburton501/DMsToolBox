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
	PlayerChar player;
	switch (num) {
	case 1: player.testRoll();
		break;
	case 2:
		break;
	}

}
