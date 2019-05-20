#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	int x, y;
	double Temp[3][7];
	cout << "Enter all temperature for a week of Province A, Province B and then Province C." << endl;

	for (x = 0; x < 3; x++)
	{
		for (y = 0; y < 7; y++)
		{
			if (x == 0)
			{
				cout << "Province A, Day " << y+1 << ": ";
			}
			else if (x == 1)
			{
				cout << "Province B, Day " << y+1 << ": ";
			}
			else
			{
				cout << "Province C, Day " << y+1 << ": ";
			}
			cin >> Temp[x][y];
		}
	}

	cout << "Displaying Values: " << endl;
	for (x = 0; x < 3; x++)
	{
		for (y = 0; y < 7; y++)
		{
			if (x == 0)
			{
				cout << "Province A, Day " << y+1 << "= ";
			}
			else if (x == 1)
			{
				cout << "Province B, Day " << y+1 << "= ";
			}
			else
			{
				cout << "Province C, Day " << y+1 << "= ";
			}
			cout << Temp[x][y] << endl;
		}
	}


	_getch();
	return 0;
}