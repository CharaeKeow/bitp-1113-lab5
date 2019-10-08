//Charae a/L Eh Sin B031820094
//Lab Week 5: Using some library functions, arithmetic, and more
//Task: Using selection control structure to ask for user to enter 
//positive value for x and z;

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;
int main()
{	
		//Using string
	cout << "Please enter your name:" << endl;
	string name;
	getline(cin, name);
	cout << "This is your name: " << name << endl;
	
	/*Task: Using selection control to ask for user to enter 
	positive value for x and z; */
	
	int x, z;
	cout << "Key in the value of x: ";
	cin >> x;
	cout << "\nKey in the value of z: ";
	cin >> z;
	cout << endl;

	if (x > 0 && z > 0) {
		cout << "Both are positive!" << endl;
	}
	else if (x > 0 && z < 0) {
		cout << "X is positive" << endl;
	}
	else if (x < 0 && z > 0) {
		cout << "Z is positive" << endl;
	}
	else {
		cout << "Neither are positive" << endl;
	}

    return 0;
}
