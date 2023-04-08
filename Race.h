#ifndef RACE_H
#define RACE_H


#include "string.h"
#include "stdlib.h"
#include "Driver.h"

class Race {
private:

	char RaceName[30];
	char RaceLocation[30];
	int numRacers;
	Driver** Drivers;
public:

	Race() { strcpy_s(RaceName, ""); strcpy_s(RaceLocation, ""); numRacers = 0; Drivers = nullptr; }
	~Race();
	void GetRaceDetails();
	void SetRaceDetails(char* RaceName, char* RaceLocation, int numRacers);
	void AddRacer();
	void RemoveRacer();
	void PrintRacers();
	void PrintRacerName();
	void RACE();

};

#endif