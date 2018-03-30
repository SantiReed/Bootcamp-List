#include "iostream"
#include <conio.h>
#include "node.h"

using namespace std;

void main () {
	bool p = true;
	int n;
	int d = 2;
	cout << "The following program adds integer numbers that aren't prime numbers into a list" << endl;
	cout << "Enter the number you wish to add" << endl;
	cin >> n;
	if (n<2)
	{
		p = false;		
	}
	else {
		while (p && d<= sqrt(n))
		{
			if (n%d == 0)
			{
				p = false;
			}
			d ++;
		}
	}
	switch (p)
	{
		case true:
			cout << "The number entered is a prime number and thus, it won't be added to the list" << endl;
			_getch();
			break;
		case false:
			*newNode();
			initialize();
			 addElement(n);
			_getch();
			break;
	}
}