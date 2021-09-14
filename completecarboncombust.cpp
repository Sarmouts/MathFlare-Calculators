// kafseis.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

string replace(int c)
{
	string str = "";
	if (c != 1)
	{
		str += to_string(c);
	}
	return str;
}
int main()
{
	cout << "Welcome to MathFlare's c++ complete hydrocarbon combustion calculator" << endl;
	cout << "--------------------------------------------------------------------" << endl;
	while (true)
	{
		int a, c;
		double o, h;
		cout << "Choose the bond type of the carbons 1.single (-), 2.double (=), 3.triple" << endl;
		cin >> a;
		if (a == 1)
		{
			cout << "Enter the number of C " << endl;
			cin >> c;
			if (c <= 0)
			{
				cout << "Enter a valid value " << endl;
				cout << "==============================================================================================" << endl;
			}
			else {
				h = 2 * c + 2;
				o = (h / 2 + 2 * c) / 2;
				if (round(o) != o)
				{
					cout << "H" << h << "C" << replace(c) << " + " << o * 2 << "/2O2 --> " << h / 2 << "H2O + " << replace(c) << "CO2" << endl;
					cout << "==============================================================================================" << endl;
				}
				else {
					cout << "H" << h << "C" << replace(c) << " + " << o << "O2 --> " << h / 2 << "H2O + " << replace(c) << "CO2" << endl;
					cout << "==============================================================================================" << endl;
				}
			}
		}
		else if (a == 2)
		{
			cout << "Enter the number of C " << endl;
			cin >> c;
			if (c <= 1)
			{
				cout << "Enter a valid value " << endl;
				cout << "==============================================================================================" << endl;
			}
			else {
				h = 2 * c;
				o = (h / 2 + 2 * c) / 2;
				if (round(o) != o)
				{
					cout << "H" << h << "C" << c << " + " << o * 2 << "/2O2 --> " << h / 2 << "H2O + " << c << "CO2" << endl;
					cout << "==============================================================================================" << endl;
				}
				else {
					cout << "H" << h << "C" << c << " + " << o << "O2 --> " << h / 2 << "H2O + " << c << "CO2" << endl;
					cout << "==============================================================================================" << endl;
				}
			}
		}
		else if (a == 3)
		{
			cout << "Enter the number of C " << endl;
			cin >> c;
			if (c <= 1)
			{
				cout << "Enter a valid value " << endl;
				cout << "==============================================================================================" << endl;
			}
			else {
				h = 2 * c - 2;
				o = (h / 2 + 2 * c) / 2;
				if (round(o) != o)
				{
					cout << "H" << h << "C" << c << " + " << o * 2 << "/2O2 --> " << replace(h / 2) << "H2O + " << c << "CO2" << endl;
					cout << "==============================================================================================" << endl;
				}
				else {
					cout << "H" << h << "C" << c << " + " << o << "O2 --> " << replace(h / 2) << "H2O + " << c << "CO2" << endl;
					cout << "==============================================================================================" << endl;
				}
			}
		}
		else
		{
			cout << "Wrong input" << endl;
			break;
		}
	}
}
