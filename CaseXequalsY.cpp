// Line equation.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	while (true)
	{
		float a, b, c, d, x;
		cout << "You have an equation which type is: ax+by=c " << endl << endl;
		cout << "Enter a " << endl;
		cin >> a;
		cout << "Enter b " << endl;
		cin >> b;
		cout << "Enter c " << endl;
		cin >> c;
		cout << "Your equation is: " << a << "x+" << b << "y=" << c << endl << endl;
		d = a + b;
		x = c / d;
		if (a == 0 && b == 0 && c == 0)
		{
			cout << "The equation is indefinite(it is true for any value) so it has infinity positions where x=y " << endl;
			cout << "================================================================================================ " << endl << endl;
		}
		else if (a == 0 && b == 0 && c != 0)
		{
			cout << "The equation is impossible " << endl;
			cout << "=================================================================== " << endl << endl;
		}
		else if (d == 0 && c != 0)
		{
			cout << "For your equation x can never be equal to y, it is impossible " << endl;
			cout << "=================================================================== " << endl << endl;
		}
		else if (d == 0 && c == 0)
		{
			cout << "Your equation is x=y so x is always equal to y " << endl;
			cout << "=================================================================== " << endl << endl;
		}
		else {
			cout << "x=y in the position (x,y)=(" << x << "," << x << ")" << endl << endl;
			cout << "=================================================================== " << endl << endl;
		}
		//cout << "For your first equation: " << a1 << "x+" << b1 << "y=" << c1 << " x=y in the position (x,y)=(" << x1 << "," << x1 << ")" << endl << endl;
		//cout << "For your second equation: " << a2 << "x+" << b2 << "y=" << c2 << " x=y in the position (x,y)=(" << x2 << "," << x2 << ")" << endl << endl;
	}
}

