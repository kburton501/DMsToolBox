#pragma once
#include <vector>
#include <string>
struct Race {
	std::string name;
	int strBonus;
	int dexBonus;
	int conBonus;
	int intelBonus;
	int wisBonus;
	int charisBonus;
	int speed;
	int size;

};


class PlayerRace
{
private:
	std::vector<Race*> r;



public:
	PlayerRace();
	~PlayerRace();


	//stores the data from RacialTraitsTable into structs
	void buildRaceStruct(std::vector<Race*>* r);


	//Counts the number of races in RacialTraitsTable
	int countRaceTable();







};

