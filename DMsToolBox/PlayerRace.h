#pragma once
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
	



public:
	PlayerRace();
	~PlayerRace();

	void buildRaceStruct();







};

