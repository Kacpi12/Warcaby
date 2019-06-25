// Warcaby.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include "pch.h"
#include <iostream>
#include <string>
#include <conio.h>
#include <windows.h>
#include <time.h>
#include <cstdlib>

using namespace std;






void przywitanie()
{
	cout << "Autor: Kacper Sztuka" << endl << "data: 17.06.2019" << endl;
	Sleep(2000);
	system("cls");
} 
// nie uzyte wlacz na koniec


string podanie_nazw(string nazwa_1, string nazwa_2) 
{
	cout << "Witaj to sa warcaby" << endl;

	cout << "Podaj nazwe pierwszego gracza: ";
	cin >> nazwa_1;

	cout << "Podaj nazwe drogiego gracza: ";
	cin >> nazwa_2;

	return nazwa_1, nazwa_2;
} 
// podanie imion

void rysowanie_planszy()
{
	string y = "   ";
	char x = 'r';
	char h = 'b';
	string w = " :";
	string  o = " ";

	system("cls");
	for (int i = 1; i < 9; i++)
	{
		if ((i == 1 || i == 3))
		{
			for (int k = 0 ;k < 4; k++)
			{
				if (k == 0)
				{
					cout << y << x << w;
				}
				else
				{
					if (k == 4)
					{
						//cout << o << x;
					}
					
					else if(k <= 3)
						cout << o << o << w << o << x << w ;

					else if (k >= 3)
					{

					}
				}
			}
		}
		if (i == 2)
		{
			for (int k = 0; k < 5; k++)
			{
				if (k == 0)
				{
					cout << y << o << w;
				}
				else
				{
					if (k == 4)
					{
						cout << o << x;
					}

					else if (k <= 3)
						cout   << o << x << w << o << o << w;
				}
			}
		}
		else if ((i == 6  || i == 8))
		{
			for (int k = 0; k < 5; k++)
			{
				if (k == 0)
				{
					cout << y << o << w;
				}
				else
				{
					if (k == 7)
					{
						cout << o << h;
					}

					else if (k <= 4)
						cout << o << h << w << o << o << w;
				}
			}
		}

		if (i == 7)
		{
			for (int k = 0; k < 4; k++)
			{
				if (k == 0)
				{
					cout << y << h << w;
				}
				else
				{
					if (k == 7)
					{
						//cout << o << x;
					}

					else if (k <= 3)
						cout << o << o << w << o << h << w;
				}
			}
		}
		
		else
		{
			for (int k = 0; k < 8; k++)
			{
				if (k == 0)
				{
					cout << y << o << w;
				}
				else
				{
					if (k == 7)
					{
						cout << y;
					}
					else
						cout << o << o  <<  w;
				}
			}
		}
		
		cout << endl;
		cout << i << " ";

		for (int j = 0; j < 8; j++)
		{
			cout << "___";

			if (j != 7)
			{
				cout << ":";
			}
		}
		cout << endl;
	}
	cout << endl <<  "   a   b   c   d   e   f   g   h";
}

void inincjalizacja_planszy(int plansza[8][8]) {
	for (int j = 0; j < 3; j++) {
		for (int i = 0; i < 8; i++) {
			if (j % 2 == 0) {
				if (i % 2 == 0) {
					plansza[j][i] = 0;
				}
				else {
					plansza[j][i] = 2;
				}
			}
			else {
				if (i % 2 == 0) {
					plansza[j][i] = 2;
				}
				else {
					plansza[j][i] = 0;
				}
			}
		}
	}
}

int main()
{
	string nazwa_gracza_1;
	string nazwa_gracza_2;

	int plansza[8][8];
	inincjalizacja_planszy(plansza);
	for (int j = 0; j < 3; j++) {
		cout << endl;
		for (int i = 0; i < 8; i++) {
			if (plansza[j][i] == 0) cout << 'b';
			else if (plansza[j][i] == 2) cout << 'p';

		}
	}

	//podanie_nazw(nazwa_gracza_1, nazwa_gracza_2);
	//rysowanie_planszy();

	
}

