// C++ f�r Spieleprogrammierer
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
	int Karte[Breite][Hoehe]; // Zweidimensionales Array f�r die Karte
	int x, y;				 // Schleifenz�hler
	int Zaehler = 0;		 // Zum F�llen der Karte

	// Karte mit Werten f�llen
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