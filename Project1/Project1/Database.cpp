#include <iostream>
#include <string>

using namespace std;

int main() {

	cout << "Welcome to Employee Database" << endl
		<< "Select User type" << endl 
		<< "1. Admin\n2. Employee\n3. Exit";
	int selection = 0;
	cin >> selection;
	string adminPassword;
	string employeePassword;
	int employeeID = 0;

	if (selection == 1) {
		cout << "Enter Admin pw";
		getline(cin, adminPassword);

		cout << "1. List of Employees\n2. Add New Employee\n3. Edit Existing Employee\n4. Terminate Employee";


	}
	else if (selection == 2) {
		cout << "Enter Employee ID" << endl;
		cin >> employeeID;
		cout << "Enter Employee Password" << endl;
		getline(cin, employeePassword);
	}


	cin.get();

	return 0;
}
