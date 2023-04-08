#include "Driver.h"
#include "Race.h"

#include <iostream>
using namespace std;

int main()
{
	cout << "###### Welcome to week 2 MainTrain! ###### \n     #### Inspired by Tal Cohen ####";
	cout << "\n";
	cout << "\n";
	cout << "Press 1 to start | Press 2 to quit" << endl;
	int flag;
	cin >> flag;
	if (flag == 1)
	{
		Race TheRace;
		TheRace.GetRaceDetails();
		cout << "Race data sussecfully added." << endl;
		cout << "\n";
		cout << "Press 1 to continue | Press 2 to quit" << endl;
		int flag2;
		cin >> flag2;
		if (flag2 == 1)
		{
			int flag3;
			TheRace.AddRacer();
			cout << "Drivers data sussecfully added." << endl;
			cout << "\n";
			cout << "Press 1 to see the all of the race data | Press 2 to quit" << endl;
			cin >> flag3;
			if (flag3 == 1)
			{
				TheRace.PrintRacers();
				int flag4;
				cout << "\n";
				cout << "Press 1 to continue | Press 2 to quit" << endl;
				cin >> flag4;
				if (flag4 == 1)
				{
					int flag5;
					cout << "\n";
					cout << "Would you like to remove any drivers from the list?" << endl;
					cout << "Press 1 for 'Yes' | Press 2 for 'No'" << endl;
					cin >> flag5;
					if (flag5 == 1)
					{
						TheRace.RemoveRacer();
						cout << "The updated drivers list is: " << endl;
						cout << "\n";
						TheRace.PrintRacerName();
						int flag7;
						cout << "\n";
						cout << "Press 1 to start the race!" << endl;
						cin >> flag7;
						if (flag7 == 1)
						{
							TheRace.RACE();
						}
						cout << "\n";
						cout << "Press 1 to release all memory and finish the program." << endl << endl;
						int flag8;
						cin >> flag8;
						if (flag8 == 1)
						{
							TheRace.~Race();
							cout << "\n";
							cout << "Everything is clear. Done!" << endl;
							cout << "See you next time!" << endl;
						}

					}
					if (flag5 == 2)
					{
						int flag6;
						cout << "Press 1 to start the race!" << endl;
						cin >> flag6;
						if (flag6 == 1)
						{
							TheRace.RACE();
							cout << "\n";
							cout << "Press 1 to release all memory and finish the program." << endl;
							int flag9;
							cin >> flag9;
							if (flag9 == 1)
							{
								TheRace.~Race();
								cout << "\n";
								cout << "All memory has been released. Done!" << endl;
								cout << "See you next time!" << endl;
							}
						}
					}
				}
				if (flag4 == 2)
				{
					cout << "Ok, bye!" << endl;
				}
			}
			if (flag3 == 2)
			{
				cout << "Ok, bye!" << endl;
			}
		}
		if (flag2 == 2)
		{
			cout << "Ok, bye!" << endl;
		}

	}
	if (flag == 2)
	{
		cout << "Ok, bye!" << endl;
	}

}

