// DMsToolBox.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "DiceRoller.h"
#include "PlayerChar.h"
#include "MainMenu.h"
int main()
{
	int num;
	//DiceRoller object;
	//std::cout << object.roll(20) << std::endl;
	MainMenu obj;

		
		PlayerChar player; 

		player.testRoll();
		std::cout << std::endl;
		

		std::cin >> num;

	
	
    return 0;
}

