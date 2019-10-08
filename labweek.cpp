//Lab Week 5: Using some library functions, arithmetic, and more

#include "stdafx.h"
#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
using namespace std;
int main()
{
	//Doing arithmetic in C++ and using standard library
	int x = 4, z = 5;
	double y = 0.0;
	y = x + 9;
	cout << setw(6) << y << endl;

	int a = 0, b = 3, c = 1;
	a = 2 * b + 2 * c;
	cout << a << endl;

	y = pow(x, 3);
	cout << y << endl;

	y = x / pow(z, 2) + 2;
	cout << y << endl;

	y = pow(x, 2) / pow(y, 2);
	cout << "no precision of y: " << y << endl;
	cout << fixed << setprecision(2) << "fixed + precision double of y: " << y << endl;
	cout << "int of y: " << static_cast<int>(y) << endl;
	
	//Using string
	cout << "Please enter your name:" << endl;
	string name;
	getline(cin, name);
	cout << name << endl;
    return 0; 
}
