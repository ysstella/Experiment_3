#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int a, b, temp, curr, prev, sum;
	double Ave;
	int num[10];

	for (a = 0; a < 10; a++)
	{
		cout << "Enter any number: "; cin >> num[a];
	}

	for (a = 0; a < 10; a++)
	{
		for (b = a + 1; b < 10; b++)
		{
			if (num[a] > num[b])
			{
				temp = num[a];
				num[a] = num[b];
				num[b] = temp;

			}
		}
	}
	if (num[0] == num[9])
	{
		cout << "There are no any smallest or largest number." << endl;
	}
	else
	{
		cout << "The smallest integer is: " << num[0] << endl;
		cout << "The largest integer is: " << num[9] << endl;
	}


	prev = 0; sum = 0;
	for (a = 0; a < 10; a++)
	{
		curr = num[a];
		sum = curr + prev;
		prev = sum;
	}

	Ave = (double)sum / 10;
	cout << "Total of this array is: " << sum << endl;
	cout << "Average of this array is: " << Ave << endl;

	_getch();
	return 0;
}