// xenop ideas.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	while (true)
	{
		float a, E, Select;
		int n, D;
		cout << "Choose what do you want to find: 1. Diagonals, 2. Area of equilateral triangle" << endl;
		cin >> Select;
		if (Select == 1)
		{
			cout << "Enter the number of gonies of the n-gono\n";
			cin >> n;
			if (n <= 2)
			{
				cout << "Please enter a valid value" << endl;
				cout << "===========================================================" << endl << endl;
			}
			else {
				D = (n * (n - 3)) / 2;
				cout << "The " << n << "-gono has " << D << " Diagonals\n";
				cout << "===========================================================" << endl << endl;
			}


		}

		if (Select == 2)
		{
			cout << "Enter the value of the leg\n";
			cin >> a;
			if (a <= 0)
			{
				cout << "Please enter a valid value" << endl;
				cout << "===========================================================" << endl << endl;
			}
			else {
				E = (a * a * sqrt(3)) / 4;
				cout << "The area of the equilateral triangle is " << E << "\n";
				cout << "===========================================================" << endl << endl;
			}

		}
		else {
			cout << "Please enter a valid value" << endl;
			cout << "===========================================================" << endl << endl;
		}
    }
}
