#include "stdafx.h"
#include "PlayerRace.h"
#include <fstream>
#include <iostream>
#include <vector>




PlayerRace::PlayerRace()
{
	
	buildRaceStruct();
	
}


PlayerRace::~PlayerRace()
{

	


}

void PlayerRace::buildRaceStruct() {

	std::fstream RaceTable;
	RaceTable.open("RacialTraitsTable.csv");
	std::string  line;
	std::vector<Race*>  r;
	
	if (RaceTable.is_open())
	{
		//skips past first row
		std::getline(RaceTable, line);

		for (int i = 0; i < 9; i++) {
			Race * obj = new Race;
			r.push_back(obj);

			std::cout << std::endl;

			//Gets name stores name in struct and displays
			std::getline(RaceTable, line, ',');
			obj->name = line;
			std::cout << line << " ";

			//Gets str stores str in struct and displays
			std::getline(RaceTable, line, ',');
			obj->strBonus = stoi(line);
			std::cout << line << " ";

			//Gets dex stores dex in struct and displays
			std::getline(RaceTable, line, ',');
			obj->dexBonus = stoi(line);
			std::cout << line << " ";

			//Gets con stores con in struct and displays
			std::getline(RaceTable, line, ',');
			obj->conBonus = stoi(line);
			std::cout << line << " ";

			//Gets intel stores intel in struct and displays
			std::getline(RaceTable, line, ',');
			obj->intelBonus = stoi(line);
			std::cout << line << " ";

			//Gets wis stores wis in struct and displays
			std::getline(RaceTable, line, ',');
			obj->wisBonus = stoi(line);
			std::cout << line << " ";

			//Gets cha stores cha in struct and displays
			std::getline(RaceTable, line, ',');
			obj->charisBonus = stoi(line);
			std::cout << line << " ";

			//skips past currently unused info
			std::getline(RaceTable, line);

		}
		//closes file
		RaceTable.close();

	}

	
	else std::cout << "Unable to Open File";
	

	//output number of stuct created in vector

	std::cout << std::endl;
	std::cout << "Number of Elements: " << r.size() << std::endl;
	//deletes all elements in vector
	r.clear();
	//output number of stuct created in vector after deletion
	//should be 0
	std::cout << "Number of Elements: " << r.size() << std::endl;


}