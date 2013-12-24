// C++ für Spieleprogrammierer
// Listing 5.5 
// Mehrdimensionale Arrays
//
#include <iostream>

using namespace std;

// Hauptprogramm
// 

int main ()
{
	// Konstanten
	const int Breite = 3;	// Breite der Karte
	const int Hoehe = 3;	// Hoehe der Karte

	// Variablen
	// 
	int Karte[Breite][Hoehe]; // Zweidimensionales Array für die Karte
	int x, y;				 // Schleifenzähler
	int Zaehler = 0;		 // Zum Füllen der Karte

	// Karte mit Werten füllen
	for (y=0; y<Hoehe; y++)
	{
		for (x=0; x<Breite; x++)
		{
			Karte[x][y] = Zaehler;
			Zaehler++;
		}
	}

	// Karte ausgeben
	for (y=0;y<Hoehe;y++)
	{
		for (x=0;x<Breite;x++)
		{
			cout << Karte[x][y];
		}
		cout << endl;
	}
	return 0;
}