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

	//setters
	void setRaceStr(int num);
	void setRaceDex(int num);
	void setRaceCon(int num);
	void setRaceInt(int num);
	void setRaceWis(int num);
	void setRaceCha(int num);

	//getters
	int getRaceStr();
	int getRaceDex();
	int getRaceCon();
	int getRaceInt();
	int getRaceWis();
	int getRaceCha();

};


class PlayerRace
{
private:
	//Vector of pointers to structs storing each Races traits
	std::vector<Race*> r;



public:
	PlayerRace();
	~PlayerRace();


	//stores the data from RacialTraitsTable into structs
	void buildRaceStruct(std::vector<Race*>* r);


	//Counts the number of races in RacialTraitsTable
	int countRaceTable();




};

