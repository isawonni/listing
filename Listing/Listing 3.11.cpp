// C++ für Spieleprogrammierer
// Listing 3.11
// Verschachtelte Schleifen
//
#include <iostream>

using namespace std;

// Hauptprogramm
// 
int main ()
{
	// Variablen 
	//
	int Breite, Hoehe;

	// Breite und Höhe des Rechtecks abfragen
	cout << "Breite: ";
	cin >> Breite;

	cout << "Hoehe: ";
	cin >> Hoehe;

	// Rechteck zeichnen

	for (int y=0; y<Hoehe; y++)
	{
		for (int x=0; x<Breite; x++)
		{
			cout << "X";
		}
		// Zeile abgeschlossen - Neue zeile durch Zeilenumbruch
		cout << endl;
	}
	return 0;
	}
