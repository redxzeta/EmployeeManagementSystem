#include <iostream>
#include <string>
#include <vector>
#include "adminMode.h"
#include "employeeMode.h"

using namespace std;

int main() {

	cout << "Welcome to Employee Database" << endl
		<< "Select User type" << endl 
		<< "1. Admin\n2. Employee\n3. Exit";
	int selection = 0;
	cin >> selection;
	string adminPassword;
	string employeePassword;
	int adminSelection;
	int employeeID = 0;

	if (selection == 1) {
		cout << "Enter Admin pw";
		getline(cin, adminPassword);

		cout << "1. List of Employees\n2. Add New Employee\n3. Edit Existing Employee\n4. Terminate Employee";
		if (selection == 1) {

		}
		else if (selection == 2) {

		}
		else if (selection == 3) {

		}
		else if (selection == 4) {

		}
		else if (selection == 5) {

		} else {
		
		}


	}
	else if (selection == 2) {
		cout << "Enter Employee ID" << endl;
		cin >> employeeID;
		cout << "Enter Employee Password" << endl;
		getline(cin, employeePassword);

		cout << "1. Check in\n2.Check Out\n3. Lunch Break ";
	}


	cin.get();

	return 0;
}
