// Factorial.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;
int fact(int a)
{
	unsigned b = 1;

	if (a < 0)
	{
		cout << "a must be >=0 " << endl;
	}
	else if (a == 0)
	{
		cout << "0!=1 " << endl;
	}
	else
	{
		for (int i = 1; i <= a; i++) b *= i;
	}

	return b;
}
int main()
{
	int a;
	cout << "Enter a positif number " << endl;
	cin >> a;
	unsigned i = fact(a);
	cout << a << "! = " << i << endl;
}

