#include "sort.h"
#include <string>
#include <iostream>
#include "adminMode.h"

sort::sort()
{
	
}

void sort::sortAZ(struct adminMode adminMode[20]) {

	int selection = 0;
	userSelection(selection);
		cout << "ID\tfirstname\tlastname\tEmail\t\t\tPhone Number\n";
		for (int i = 19; i > 0; i--) {
			cout << adminMode[i].id << "\t" << adminMode[i].firstName << "\t\t" << adminMode[i].lastName
				<< "\t\t" << adminMode[i].email << "\t\t" << adminMode[i].number << endl;
		}
	

}

void sort::userSelection(int &selection) {
	cout << "Sort By: " << endl << "First Name" << endl << "Last Name";


}

sort::~sort()
{
}
