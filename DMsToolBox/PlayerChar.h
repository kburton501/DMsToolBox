#pragma once
#include "DiceRoller.h"
class PlayerChar :
	public DiceRoller
{
private:
	const static int NUM_ABI = 6;
	const static int NUM_ABI_ROLLS = 4;
	std::string name;
	std::string race;
	bool subrace, darkvision;
	int str, dex, con ,inte, wis, cha, speed, size, ac;
	int rollArr[NUM_ABI_ROLLS];
	int abiArr[NUM_ABI];


	void setAbility();
	void setSize();
	void setSpeed();
	void setRace();
	void setsubrace();
	void setDarkvision();

	void setStr();
	void setDex();
	void setCon();
	void setInt();
	void setWis();
	void setCha();
	int rollAbility();
	
	
public:
	PlayerChar();
	~PlayerChar();

	int testRoll();


	

};


