#ifndef DRIVER_H
#define DRIVER_H

#include "string.h"
#include "stdlib.h"

class Driver {
private:
	char DriverName[30];
	int age;
	int exp;
	int car;
public:
	enum Car {
		Mercedes = 3, Audi, BMW
	};

	Driver() { strcpy_s(DriverName, ""); age = 0; exp = 0; car = 0;}
	void GetDriverDetails(Driver& driver);
	int WhichCar(char* carName);
	void SetDriverDetails(char* DriverName, int age, int exp, int car);
	void PrintDriver();
	void PrintDriverNameList();
	void PrintDriverNameRace();
	int DriverRacePower();
	void PrintRacePower();

};

#endif