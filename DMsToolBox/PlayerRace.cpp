#include "stdafx.h"
#include "PlayerRace.h"
#include <fstream>
#include <iostream>
#include <iomanip>




PlayerRace::PlayerRace()
{
	
	buildRaceStruct(&r);
	
}


PlayerRace::~PlayerRace()
{

	//output number of stuct created in vector
	std::cout << std::endl;
	std::cout << "Number of Elements: " << r.size() << std::endl;

	//deletes all elements in vector
	r.clear();

	//output number of stuct created in vector after deletion
	//should be 0
	std::cout << "Number of Elements: " << r.size() << std::endl;

}



void PlayerRace::buildRaceStruct(std::vector<Race*>* r) {

	std::fstream RaceTable;
	RaceTable.open("RacialTraitsTable.csv");
	std::string  line;

	//# of races in RacialTraitsTable
	int count = countRaceTable();

	
	if (RaceTable.is_open())
	{
		//skips past first row
		std::getline(RaceTable, line);
		std::cout << "Race      Str Dex Con Int Wis Cha";
		//create a struct for each race
		//stores struct data in respective places
		for (int i = 0; i < count; i++) {
			Race * obj = new Race;
			(*r).push_back(obj);

			std::cout << std::endl;

			//Gets name stores name in struct and displays
			std::getline(RaceTable, line, ',');
			obj->name = line;
			std::cout << std::left << std::setw(10) << line << " ";

			//Gets str stores str in struct and displays
			std::getline(RaceTable, line, ',');
			obj->strBonus = stoi(line);
			std::cout << std::setw(3) << line << " ";

			//Gets dex stores dex in struct and displays
			std::getline(RaceTable, line, ',');
			obj->dexBonus = stoi(line);
			std::cout << std::setw(3) << line << " ";

			//Gets con stores con in struct and displays
			std::getline(RaceTable, line, ',');
			obj->conBonus = stoi(line);
			std::cout << std::setw(3) << line << " ";

			//Gets intel stores intel in struct and displays
			std::getline(RaceTable, line, ',');
			obj->intelBonus = stoi(line);
			std::cout << std::setw(3) << line << " ";

			//Gets wis stores wis in struct and displays
			std::getline(RaceTable, line, ',');
			obj->wisBonus = stoi(line);
			std::cout << std::setw(3) << line << " ";

			//Gets cha stores cha in struct and displays
			std::getline(RaceTable, line, ',');
			obj->charisBonus = stoi(line);
			std::cout << std::setw(3) << line << " ";

			//skips past currently unused info
			std::getline(RaceTable, line);

		}
		//closes file
		RaceTable.close();

	}

	//If file isn't accesssed couts message
	else std::cout << "Unable to Open File";
	

	


}



int PlayerRace::countRaceTable() {
	//opens file
	std::fstream RaceTable;
	RaceTable.open("RacialTraitsTable.csv");



	std::string  line;
	int count = 0;

	if (RaceTable.is_open())
	{
		//skip first line
		std::getline(RaceTable, line);
		while (RaceTable.good()) {
			count++;
			std::getline(RaceTable, line);
		}
		//closes file
		RaceTable.close();
	}
	
	else std::cout << "Unable to Open File";

	
	//returns the number races from the file
	return count -1;

}

	



