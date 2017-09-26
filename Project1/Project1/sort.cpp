#include "sort.h"
#include <string>
#include <iostream>
#include "adminMode.h"

sort::sort()
{
}

void sort::sortAZ(struct adminMode adminMode[20]) {
	cout << adminMode[0].firstName;


		cout << "ID\tfirstname\tlastname\tEmail\t\t\tPhone Number\n";
		for (int i = 20; i > 0; i--) {
			cout << adminMode[i].id << "\t" << adminMode[i].firstName << "\t\t" << adminMode[i].lastName
				<< "\t\t" << adminMode[i].email << "\t\t" << adminMode[i].number << endl;
		}
	

}

sort::~sort()
{
}
