// equation.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float e, a, x, c, b, d, x1, x2;
	cout << "What type the equation is?: 1,ax^2+c=0, 2.ax^2+bx=0, 3.ax^2+bx+c=0" << "\n";
	cin >> e;
	if (e == 1)
	{
		cout << "Enter a " << "\n";
		cin >> a;
		cout << "Enter c " << "\n";
		cin >> c;
		if (-c < 0 && a>0)
		{
			x = sqrt(c / a);
			cout << "The equation is Impossible in R " << "\n";
			cout << "x is equal to +-" << x << "i in C" << "\n";
		}
		else if (-c > 0 && a < 0)
		{
			x = sqrt(-c / -a);
			cout << "The equation is Impossible in R " << "\n";
			cout << "x is equal to +-" << x << "i in C" << "\n";
		}
		else if (a == 0 && -c != 0)
		{
			cout << "The equation is Impossible in R " << "\n";
		}
		else if (a == 0 && -c == 0)
		{
			cout << "The equation is an identity: it is true for all values" << "\n";
		}
		else {
			x = sqrt(-c / a);
			if (x == 0)
			{
				cout << "x is equal to " << 0 << "\n";
			}
			else {
				cout << "x is equal to +-" << x << "\n";
			}
		}
	}
	if (e == 2)
	{
		cout << "Enter a" << "\n";
		cin >> a;
		cout << "Enter b" << "\n";
		cin >> b;
		if (a == 0 && b == 0)
		{
			cout << "The equation is an identity: it is true for all values" << "\n";
		}
		else if (a != 0 && b == 0 || a == 0 && b != 0)
		{
			cout << "x is equal to 0 " << "\n";
		}
		else {
			x1 = 0;
			x2 = -b / a;
			cout << "x is equal to " << x1 << " or " << x2 << "\n";
		}
	}
	if (e == 3)
	{
		cout << "Enter a" << "\n";
		cin >> a;
		cout << "Enter b" << "\n";
		cin >> b;
		cout << "Enter c" << "\n";
		cin >> c;
		d = b * b - 4 * a * c;
		if (a == 0 && b == 0 && c == 0)
		{
			cout << "The equation is an identity: it is true for all values " << "\n";
		}
		else if (a == 0 && b == 0 && c != 0)
		{
			cout << "The equation is Impossible R " << "\n";
		}
		else if (a == 0 && b != 0 && c == 0 || a == 0 && b != 0 && c != 0)
		{
			x = -c / b;
			cout << "x is equal to " << x << "\n";
		}
		else if (a != 0 && b == 0)
		{
			x = sqrt(-c / a);
			if (x == 0)
			{
				//Μπαινει γιατι εκτυπωνε -0 λογω του -c στη γραμμη 97  
				cout << "x is equal to " << 0 << "\n";
			}
			else if (-c < 0 && a>0)
			{
				x = sqrt(c / a);
				cout << "The equation is Impossible in R " << "\n";
				cout << "x is equal to +-" << x << "i in C" << "\n";
			}
			else if (-c > 0 && a < 0)
			{
				x = sqrt(-c / -a);
				cout << "The equation is Impossible in R " << "\n";
				cout << "x is equal to +-" << x << "i in C" << "\n";
			}
			else {
				cout << "x is equal to +- " << x << "\n";
			}
		}
		else if (d < 0)
		{
			cout << "D=" << d << "<0 " << "The equation is Impossible in R " << "\n" << endl;
			x1 = (-b - sqrt(-d)) / (2 * a);
			x2 = (-b + sqrt(-d)) / (2 * a);
			cout << "x is equal to " << x1 << " or " << x2 << " in C " << "\n";
		}
		else if (d == 0)
		{
			x1 = (-b - sqrt(d)) / (2 * a);
			x2 = (-b + sqrt(d)) / (2 * a);
			cout << "D=" << d << "x is equal to " << x1 << " (double solution) " << "\n";
		}
		else
		{
			x1 = (-b - sqrt(d)) / (2 * a);
			x2 = (-b + sqrt(d)) / (2 * a);
			cout << "D=" << d << ">0 " << "x is equal to " << x1 << " or " << x2 << "\n";
		}
	}
	return 0;
}
