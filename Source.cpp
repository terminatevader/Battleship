#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <Windows.h>
#include <cstdlib>
//#include <string>

using namespace std;

int main()
{
	int P1B1S = 0;
	int P1B2S = 0;
	int P1B3S = 0;
	int P2B1S = 0;
	int P2B2S = 0;
	int P2B3S = 0;

	cout << "Welcome to the Battleship pre-release. Pick a number between 1 and 10 when prompted for cooridinates. \n";
	Sleep(1000);
	int P1B1;
	cout << "Enter the cooridinates for battleship 1 \n";
	cin >> P1B1;
	int P1B2;
	cout << "Enter the cooridinates for battleship 2 \n";
	cin >> P1B2;
	int P1B3;
	cout << "Enter the cooridinates for battleship 3 \n";
	cin >> P1B3;


	cout << "Computer is entering the cooridinates for battleship 1 \n";
	Sleep(5000);
	int P2B1 = 1 + rand() % 11;
	cout << "Computer is entering the cooridinates for battleship 2 \n";
	Sleep(5000);
	int P2B2 = 1 + rand() % 11;
	cout << "Computer is entering the cooridinates for battleship 3 \n";
	Sleep(5000);
	int P2B3 = 1 + rand() % 11;


	while (P1B1S == 0 && P1B2S == 0 && P1B3S == 0 || P2B1S == 0 && P2B2S == 0 && P2B3S == 0)
	{
		int P1;
		cout << "It is your turn \n";
		cin >> P1;

		if (P1 == P2B1)
		{
			cout << "You sunk computer's battleship \n";
			P2B1S = 1;
		}
		if (P1 == P2B2)
		{
			cout << "You sunk computer's battleship \n";
			P2B2S = 1;
		}
		if (P1 == P2B3)
		{
			cout << "You sunk computer's battleship \n";
			P2B3S = 1;
		}

		int P2;
		cout << "It is computer's turn \n";
		Sleep(5000);
		P2 = 1 + rand() % 11;

		if (P2 == P1B1)
		{
			cout << "Computer sunk your battleship \n";
			P1B1S = 1;
		}
		if (P2 == P1B2)
		{
			cout << "Computer sunk your battleship \n";
			P1B2S = 1;
		}
		if (P2 == P1B3)
		{
			cout << "Computer sunk your battleship \n";
			P1B3S = 1;
		}
	}
	if (P1B1S == 1 && P1B2S == 1 && P1B3S == 1)
	{
		cout << "Computer wins \n";
	}
	if (P2B1S == 1 && P2B2S == 1 && P2B3S == 1)
	{
		cout << "You win \n";
	}
}
