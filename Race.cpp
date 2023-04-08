#include "Race.h"
#include "string.h"

#include <iostream>
using namespace std;


void Race::GetRaceDetails()
{
		char RaceName[30];
		char RaceLocation[30];
		int numRacers;
		cout << "\n";
		cout << "Please type in the race name: ";
		cin >> RaceName;
		cout << "Please type in the race location: ";
		cin >> RaceLocation;
		cout << "How many drivers will be participating in the race?" << endl;
		cout << "Type you answer here: ";
		cin >> numRacers;
		SetRaceDetails(RaceName, RaceLocation, numRacers);
}


void Race::SetRaceDetails(char* RaceName_, char* RaceLocation_, int numRacers_)
{
	strcpy_s(RaceName, RaceName_);
	strcpy_s(RaceLocation, RaceLocation_);
	this->numRacers = numRacers_;
}

void Race::AddRacer()
{
	Drivers = new Driver * [numRacers];
	for (int i = 0; i < numRacers; i++)
	{
		cout << "\n";
		cout << "Please add the details for driver " << i + 1 << "#:" << endl;
		Drivers[i] = new Driver();
		Drivers[i]->GetDriverDetails(*Drivers[i]);
	}
}

void Race::RemoveRacer()
{
	int howmany;
	cout << "\n";
	cout << "Type in how many drivers you want to remove from the drivers list: ";
	cin >> howmany;
	for (int i = 0; i < howmany; i++)
	{
		int num;
		cout << "Type in the number of the driver you would like to remove: ";
		cin >> num;
		delete Drivers[num - 1];
		Drivers[num - 1] = Drivers[numRacers - 1];
		numRacers--;
		cout << "Driver " << num << "# has been removed from the race!" << endl;
	}
}



void Race::PrintRacers()
{
	cout << "\n";
	cout << "Race Name: " << RaceName << endl;
	cout << "Race Location: " << RaceLocation << endl;
	cout << "Number Of Parcticipants: " << numRacers << endl;
	cout << "The Pacrcticipants are: " << endl;
	for (int i = 0; i < numRacers; i++)
	{
		Race::Drivers[i]->PrintDriver();
	}
}

void Race::RACE()
{
	for (int i = 0; i < numRacers - 1; i++)
	{
		for (int j = 0; j < numRacers - i - 1; j++)
		{
			if (Drivers[j]->DriverRacePower()< Drivers[j + 1]->DriverRacePower())
			{
				Driver* temp = Drivers[j];
				Drivers[j] = Drivers[j + 1];
				Drivers[j + 1] = temp;
			}
		}
	}
	cout << "\n";
	cout << "Drivers order in the race: \n";
	for (int i = 0; i < numRacers; i++)
	{
		cout << i + 1 << ". ";
		Drivers[i]->PrintDriverNameRace();
		cout << " | ";
		cout << "Race Power: ";
		Drivers[i]->PrintRacePower();
		cout << endl;
	}
	Drivers[0]->PrintDriverNameRace();
	cout  << " has won the race!!! Congarts!!!" << endl;
}

void Race::PrintRacerName()
{
	for (int i = 0; i < numRacers; i++)
	{
		Race::Drivers[i]->PrintDriverNameList();
	}
}


Race::~Race()
{
	for (int i = 0; i < numRacers; i++)
	{
		delete Drivers[i];
	}
	delete[] Drivers;
}


