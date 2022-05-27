#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int main()
{
	cout << "Please only enter numbers between 1 and 10 \n";
	int PB1;
	int PB2;
	int PB3;
	cout << "Enter a number for the location of battleship one \n";
	cin >> PB1;
	cout << "Enter a number for the location of battleship two \n";
	cin >> PB2;
	cout << "Enter a number for the location of battle ship three \n";
	cin >> PB3;

	srand(time(NULL));
	int CB1 = rand() % 10 + 1;
	int CB2 = rand() % 10 + 1;
	int CB3 = rand() % 10 + 1;

	while (( (CB1 != 0) && (CB2 != 0) && (CB3 != 0)) || ((PB1 != 0) && (PB2 != 0) && (PB3 != 0) ))
	{
		cout << "Enter a number for the firing location \n";
		int p;
		cin >> p;
		if (p == CB1)
		{
			cout << "You sunk my battleship! \n";
			CB1 = 0;
		}
		else if (p == CB2)
		{
			cout << "You sunk my battleship! \n";
			CB2 = 0;
		}
		else if (p == CB3)
		{
			cout << "You sunk my battleship! \n";
			CB3 = 0;
		}

		else
		{
			cout << "You missed me! \n";
		}
		cout << "It is now the computer's turn \n";
		int c = rand() % 10 + 1;

		if (c == PB1)
		{
			cout << "I sunk your battleship! \n";
			PB1 = 0;
		}
		else if (c == PB2)
		{
			cout << "I sunk your battleship! \n";
			PB2 = 0;
		}
		else if (c == PB3)
		{
			cout << "I sunk your battleship! \n";
			PB3 = 0;
		}
		else
		{
			cout << "I missed you! \n";
		}
		if ((CB1 == 0) && (CB2 == 0) && (CB3 == 0))
		{
			cout << "You win!";
		}
		if ((PB1 == 0) && (PB2 == 0) && (PB3 == 0))
		{
			cout << "Computer wins!";
		}
	}
	
}