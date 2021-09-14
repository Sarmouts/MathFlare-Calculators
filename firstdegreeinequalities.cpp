// 1st degree inequalities.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	float r, a, c, x;
	cout << "1. ax+c > 0, 2. ax+c >= 0, 3. ax+c < 0, 4. ax+c <= 0 " << endl << endl;
	cin >> r;
	if (r == 1)
	{
		cout << "ax+c > 0 " << endl << endl;
		cout << "Enter a " << endl;
		cin >> a;
		cout << "Enter c " << endl;
		cin >> c;
		cout << a << "x+" << c << "> 0" << endl << endl;
		if (a == 0 && -c == 0)
		{
			cout << "The inequality is Impossible " << endl;
		}
		else if (a == 0)
		{
			if (-c < 0)
			{
				cout << "The inequality is Identity xeR " << endl;
			}
			else if (-c > 0)
			{
				cout << "The inequality is Impossible " << endl;
			}

		}
		else if (-c == 0)
		{
			if (a > 0)
			{
				cout << "x > 0 " << endl;
			}
			else if (a < 0)
			{
				cout << "x < 0 " << endl;
			}

		}
		else
		{
			x = -c / a;

			if (a < 0)
			{

				cout << "x < " << x << endl;
			}
			else
			{
				cout << "x > " << x << endl;
			}

		}


	}
	else if (r == 2)
	{
		cout << "ax+c >= 0 " << endl << endl;
		cout << "Enter a " << endl;
		cin >> a;
		cout << "Enter c " << endl;
		cin >> c;
		cout << a << "x+" << c << ">= 0" << endl << endl;
		if (a == 0 && -c == 0)
		{
			cout << "The inequality 0x>0 is Impossible, the equation 0x=0 is an Identity xeR " << endl;
		}
		else if (a == 0)
		{
			if (-c < 0)
			{
				cout << "The inequality 0x>" << -c << " is Identity xeR, the equation 0x=" << -c << " is Impossible " << endl;
			}
			else if (-c > 0)
			{
				cout << "The inequality and the equation are Impossible " << endl;
			}

		}
		else if (-c == 0)
		{
			if (a > 0)
			{
				cout << "x >= 0 " << endl;
			}
			else if (a < 0)
			{
				cout << "x <= 0 " << endl;
			}

		}
		else
		{
			x = -c / a;

			if (a < 0)
			{

				cout << "x <= " << x << endl;
			}
			else
			{
				cout << "x >= " << x << endl;
			}

		}

	}
	else if (r == 3)
	{
		cout << "ax+c < 0 " << endl << endl;
		cout << "Enter a " << endl;
		cin >> a;
		cout << "Enter c " << endl;
		cin >> c;
		cout << a << "x+" << c << "< 0" << endl << endl;
		if (a == 0 && -c == 0)
		{
			cout << "The inequality is Impossible " << endl;
		}
		else if (a == 0)
		{
			if (-c < 0)
			{
				cout << "The inequality is Impossible " << endl;
			}
			else if (-c > 0)
			{
				cout << "The inequality is Identity xeR " << endl;
			}

		}
		else if (-c == 0)
		{
			if (a > 0)
			{
				cout << "x < 0 " << endl;
			}
			else if (a < 0)
			{
				cout << "x > 0 " << endl;
			}

		}
		else
		{
			x = -c / a;

			if (a < 0)
			{

				cout << "x > " << x << endl;
			}
			else
			{
				cout << "x < " << x << endl;
			}

		}
	}
	else if (r == 4)
	{
		cout << "ax+c <= 0 " << endl << endl;
		cout << "Enter a " << endl;
		cin >> a;
		cout << "Enter c " << endl;
		cin >> c;
		cout << a << "x+" << c << "<= 0" << endl << endl;
		if (a == 0 && -c == 0)
		{
			cout << "The inequality 0x<0 is Impossible, the equation 0x=0 is an Identity xeR " << endl;
		}
		else if (a == 0)
		{
			if (-c < 0)
			{
				cout << "The inequality and the equation are Impossible " << endl;
			}
			else if (-c > 0)
			{
				cout << "The inequality 0x<" << -c << " is Identity xeR, the equation 0x=" << -c << " is Impossible " << endl;
			}

		}
		else if (-c == 0)
		{
			if (a > 0)
			{
				cout << "x <= 0 " << endl;
			}
			else if (a < 0)
			{
				cout << "x >= 0 " << endl;
			}

		}
		else
		{
			x = -c / a;

			if (a < 0)
			{

				cout << "x >= " << x << endl;
			}
			else
			{
				cout << "x <= " << x << endl;
			}

		}

	}

}

