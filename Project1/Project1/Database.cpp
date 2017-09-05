#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	
//	cout << adminMode.getNum() << endl;
//	string x = "hello";
//	adminMode adminMode;
	cout << "Welcome to Employee Database" << endl
		<< "Select User type" << endl
		<< "1. Admin\n2. Employee\n3. Exit" << endl;
	string selection;
	getline(cin, selection);
	string adminPassword;
	string employeePassword;
	string adminSelection;
	int employeeID = 0;
	
	if (selection == "1") {
		cout << "Enter Admin pw" << endl;
		getline(cin, adminPassword);
		cout << endl << "1. List of Employees\n2. Add New Employee\n3. Edit Existing Employee\n4. Terminate Employee";
		
		getline(cin, adminSelection);
		cout << adminPassword << " " << adminSelection;
		cin.get();
		if (adminSelection == "1") {

		}
		else if (selection == "2") {
		
			int id = 0;

			cout << "New Employee ID: " << id << endl; 

			cout << "Enter First Name" << endl;

			cout << "Enter Last Name" << endl;

			cout << "Enter email address" << endl;

			cout << "Enter phone number" << endl;
		}/*
		else if (selection == 3) {

		}
		else if (selection == 4) {

		}
		else if (selection == 5) {
			
		} */else {
		
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
