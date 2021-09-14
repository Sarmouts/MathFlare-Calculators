// Dx, S finder.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	float a, b, c;
	string d;

	cout << " You want to find dx or S " << "\n";
	cin >> d;
	if (d == "dx")
	{
		cout << " Enter the value of the first position " << "\n";
		cin >> a;
		cout << " Enter the value of the last position " << "\n";
		cin >> b;
		c = b - a;
		cout << " The dx from the position " << a << " to position " << b << " is " << c << "\n";

	}
	if (d == "S")
	{
		cout << " Enter the value of the first position " << "\n";
		cin >> a;
		cout << " Enter the value of the seconde position " << "\n";
		cin >> b;

		if (a > b)
		{
			c = a - b;
			cout << " The S between the position " << a << " and the position " << b << " is " << c << "\n";
		}
		if (a < b)
		{
			c = b - a;
			cout << " The S between the position " << a << " and the position " << b << " is " << c << "\n";
		}

	}
	return 0;
}





