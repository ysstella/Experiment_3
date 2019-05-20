#include <iostream>
#include <conio.h>
#include <cstring>
using namespace std;
int main()
{
	char letter[100];
	int x, y;
	cout << "Enter a string: ";
	cin.getline(letter, 100);
	y = strlen(letter);
	cout << "The reverse of this array is: ";
	for (x = y - 1; x >= 0; x--)
	{
		cout << letter[x];
	}
	cout << endl;
	cout << "The size of the array is: " << y+1 << endl;


	_getch();
	return 0;
}