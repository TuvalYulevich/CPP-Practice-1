#include "Driver.h"
#include "string.h"

#include <iostream>
using namespace std;

void Driver::GetDriverDetails(Driver& driver)
{
	char name[30];
	int age;
	int exp;
	char car[15];
	int car_;
	cout << "Name: ";
	cin >> name;
	cout << "Age: ";
	cin >> age;
	cout << "Years of expierence: ";
	cin >> exp;
	cout << "Car: ";
	cin >> car;
	car_ = WhichCar(car);
	SetDriverDetails(name, age, exp, car_);
}

void Driver::SetDriverDetails(char* DriverName_, int age_, int exp_, int car_)
{
	strcpy_s(this->DriverName, 30, DriverName_);
	this->age = age_;
	this->exp = exp_;
	this->car = car_;
}

int Driver::WhichCar(char* CarName)
{
	int car;
	if (strcmp(CarName, "Audi") == 0)
	{
		Driver::Car car = Driver::Car::Audi;
		return car;
	}
	if (strcmp(CarName, "BMW") == 0)
	{
		Driver::Car car = Driver::Car::BMW;
		return car;
	}
	if (strcmp(CarName, "Mercedes") == 0)
	{
		Driver::Car car = Driver::Car::Mercedes;
		return car;
	}
}

void Driver::PrintDriver()
{
	char carCompany[10];
	if (car == 3) { strcpy_s(carCompany, "Mercedes"); }
	if (car == 4) { strcpy_s(carCompany, "Audi"); }
	if (car == 5) { strcpy_s(carCompany, "BMW"); }
	cout << "Name: " << DriverName << ". ||  Age: " << age << ". ||  Years Of Expierence: " << exp << ". || Car: " << carCompany << "." << endl;
}

int Driver::DriverRacePower()
{
	int RacerPower;
	RacerPower = (car * exp) * (age - exp);
	return RacerPower;
}

void Driver::PrintDriverNameList()
{
	cout << DriverName << "\n";
}

void Driver::PrintDriverNameRace()
{
	cout << DriverName;
}


void Driver::PrintRacePower()
{
	int RacerPower;
	RacerPower = (car * exp) * (age - exp);
	cout << RacerPower;
}


