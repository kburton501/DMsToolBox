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

	void buildRaceStruct(std::vector<Race*>* r);







};

