#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <stdlib.h>
#include "sort.h"
using namespace std;

struct adminMode {
	int id;
	string firstName;
	string lastName;
	string email;
	string number;


};

int checkNextAvailableID(adminMode adminMode[], int id);

void assignID(adminMode adminMode[]);

int main() {

	adminMode adminMode[20];
	cout << "Welcome to Employee Database" << endl
		<< "Select User type" << endl
		<< "1. Admin\n2. Employee\n3. Exit" << endl;
	string selection;
	getline(cin, selection);
	string adminPassword;
	string employeePassword;
	string adminSelection;
	int employeeID = 0;
	assignID(adminMode);

	if (selection == "1") {
		int id = 0;
		cout << "Enter Admin pw" << endl;
		getline(cin, adminPassword);
		while (adminSelection != "5") {		
			cout << endl << "1. List of Employees\n2. Add New Employee\n3. Edit Existing Employee\n4. Terminate Employee\n5. Exit" << endl;
			getline(cin, adminSelection);
			system("CLS");
			if (adminSelection == "1") {
				cout << "ID\tfirstname\tlastname\tEmail\tPhone Number\n";
				for (int i = 0; i < 20; i++) {
					cout << adminMode[i].id << "\t" << adminMode[i].firstName << "\t\t" << adminMode[i].lastName
						<< "\t\t" << adminMode[i].email << "\t" << adminMode[i].number << endl;
				}
			}
			else if (adminSelection == "2") {
				id = checkNextAvailableID(adminMode, id);
				cout << "New Employee ID: " << id << endl;
				cout << "Enter First Name" << endl;
				getline(cin, adminMode[id].firstName);
				cout << "Enter Last Name" << endl;
				getline(cin, adminMode[id].lastName);
				cout << "Enter email address" << endl;
				getline(cin, adminMode[id].email);
				cout << "Enter phone number" << endl;
				getline(cin, adminMode[id].number);
				id++;
			}
			else if (adminSelection == "3") {
				cout << "Enter existing ID";
				cin >> id;

				cout << "Enter First Name" << endl;
				getline(cin, adminMode[id].firstName);
				cout << "Enter Last Name" << endl;
				getline(cin, adminMode[id].lastName);
				cout << "Enter email address" << endl;
				getline(cin, adminMode[id].email);
				cout << "Enter phone number" << endl;
				getline(cin, adminMode[id].number);
			}
			else if (adminSelection == "4") {
				cout << "Enter existing ID";
				cin >> id;
				adminMode[id].firstName = "N/A";
				adminMode[id].lastName = "N/A";
				adminMode[id].email = "N/A";
				adminMode[id].number = "N/A";
			}

		}
	}
	else if (selection == "2") {

		cout << "Enter Employee ID" << endl;
		cin >> employeeID;
		cout << "Enter Employee Password" << endl;
		getline(cin, employeePassword);

		cout << "1. Check in\n2.Check Out\n3. Lunch Break ";
	}
	return 0;
}

int checkNextAvailableID(adminMode adminMode[], int id) {
	for (int i = 20; i >= 0; i--) {
		if (adminMode[i].firstName == "N/A") {
			id = i;
		}

	}

	return id;
}

void assignID(adminMode adminMode[]) {
	for (int i = 0; i < 20; i++) {
		adminMode[i].id = i;
	}
}
