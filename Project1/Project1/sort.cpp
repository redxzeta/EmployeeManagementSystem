#include "sort.h"
#include <string>
#include <iostream>
#include "adminMode.h"
#include <stdlib.h>     /* atoi */
sort::sort()
{

}

void sort::sortAZ(struct adminMode adminMode[20]) {

	int selection = 0;
	userSelection(selection);
	cout << "ID\tfirstname\tlastname\tEmail\t\t\tPhone Number\n";
	if (selection == 1) {
		for (int i = 19; i > 0; i--) {
			cout << adminMode[i].id << "\t" << adminMode[i].firstName << "\t\t" << adminMode[i].lastName
				<< "\t\t" << adminMode[i].email << "\t\t" << adminMode[i].number << endl;
		}
	}
	else {
		string test[20];
		string key;
		int i, j;
		if (selection == 2 || selection == 3) {
			for (int a = 0; a < 20; a++) {
				test[a] = adminMode[a].firstName;
			}
		}
		else if (selection == 4 || selection == 5) {
			for (int a = 0; a < 20; a++) {
				test[a] = adminMode[a].lastName;
			}
		}

		for (i = 1; i < 20; i++)
		{
			key = test[i];
			j = i - 1;
			while (j >= 0 && test[j] > key)
			{
				test[j + 1] = test[j];
				j = j - 1;
			}
			test[j + 1] = key;

		}
		if (selection % 2 == 0) {
			for (int x = 0; x < 20; x++) {

				for (int y = 0; y < 20; y++) {
					if (test[x] == adminMode[y].firstName || test[x] == adminMode[y].lastName) {
						cout << adminMode[y].id << "\t" << adminMode[y].firstName << "\t\t" << adminMode[y].lastName
							<< "\t\t" << adminMode[y].email << "\t\t" << adminMode[y].number << endl;
					}

				}
			}
		}
		else {
			for (int x = 19; x > 0; x--) {
				for (int y = 0; y < 20; y++) {
					if (test[x] == adminMode[y].firstName || test[x] == adminMode[y].lastName) {
						cout << adminMode[y].id << "\t" << adminMode[y].firstName << "\t\t" << adminMode[y].lastName
							<< "\t\t" << adminMode[y].email << "\t\t" << adminMode[y].number << endl;
					}

				}
			}
		}
	}

}





void sort::userSelection(int &selection) {
	cout << "Sort By: " << endl << "1. Largest ID"
		<< endl << "2. First Name A-Z" << endl << "3. Firstname Z-A"
		<< endl << "4. Last Name A-Z" << endl << "5. Last Name Z-A" << endl;
	string input;
	getline(cin, input);
	selection = stoi(input);

}

sort::~sort()
{
}
