#include "stdafx.h"
#include "PlayerRace.h"
#include <fstream>
#include <iostream>

#include <string>



PlayerRace::PlayerRace()
{

	std::fstream RaceTable;
	RaceTable.open("RacialTraitsTable.csv");
	std::string  line;
	if (RaceTable.is_open())
	{
		while (std::getline(RaceTable, line)) {
			std::cout << line << '\n';
		}

		RaceTable.close();

	}
	else std::cout << "Unable to Open File";



	

}


PlayerRace::~PlayerRace()
{

	


}
