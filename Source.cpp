#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <Windows.h>
#include <string>

using namespace std;

int main()
{
	string P1B1;
	cout << "Player 1 enter the cooridinates for battleship 1 \n";
	getline(cin, P1B1);
	string P1B2;
	cout << "Player 1 enter the cooridinates for battleship 2 \n";
	getline(cin, P1B2);
	string P1B3;
	cout << "Player 1 enter the cooridinates for battleship 3 \n";
	getline(cin, P1B3);
	
	string P2B1;
	cout << "Player 2 enter the cooridinates for battleship 1 \n";
	getline(cin, P2B1);
	string P2B2;
	cout << "Player 2 enter the cooridinates for battleship 2 \n";
	getline(cin, P2B2);
	string P2B3;
	cout << "Player 2 enter the cooridinates for battleship 3 \n";
	getline(cin, P2B3);


	while (( (P1B1 != "sunk") || (P1B2 != "sunk") || (P1B3 != "sunk")) && ((P2B1 != "sunk") || (P2B2 != "sunk") || (P2B3 != "sunk")))
	{
		
		string p1;
		cout << "Player 1 turn \n";
		getline(cin, p1);
		if (p1 == P2B1)
		{
			cout << "Player 2 battleship has been sunk! \n";
			P2B1 = "sunk";
		}
		else if (p1 == P2B2)
		{
			cout << "Player 2 battleship has been sunk! \n";
			P2B1 = "sunk";
		}
		else if (p1 == P2B3)
		{
			cout << "Player 2 battleship has been sunk! \n";
			P2B1 = "sunk";
		}

		else
		{
			cout << "Player 2 battleship has been missed \n";
		}
		
		
		string p2;
		cout << "Player 2 turn \n";
		getline(cin, p2);
		if (p2 == P1B1)
		{
			cout << "Player 1 battleship has been sunk! \n";
			P1B1 = "sunk";
		}
		else if (p2 == P1B2)
		{
			cout << "Player 1 battleship has been sunk! \n";
			P1B2 = "sunk";
		}
		else if (p2 == P1B3)
		{
			cout << "Player 1 battleship has been sunk! \n";
			P1B3 = "sunk"; 
		}
		else
		{
			cout << "Player 1 battleship has been missed \n";
		}
		
}
	if ((P1B1 == "sunk") && (P1B2 == "sunk") && (P1B2 == "sunk"))
	{
		cout << "Player 2 wins!";
	}
	if ((P2B1 == "sunk") && (P2B2 == "sunk") && (P2B2 == "sunk"))
	{
		cout << "Player 1 Wins!";
	}
}
