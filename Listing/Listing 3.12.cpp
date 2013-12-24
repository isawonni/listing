// C++ für Spieleprogrammierer
// Listing 3.12
// Fehlerquelltext
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

	// Breite und Hoehe abfragen und Test ob ungerader Wert handelt

	do 
	{
		cout << "Bitte einen Ungeraden Wert benutzen!" << endl;
		cout << "Breite: ";
		cin >> Breite;

		cout << "Bitte einen Ungeraden Wert benutzen!" << endl;
		cout << "Hoehe: ";
		cin >> Hoehe;
		cout << endl << endl;

	} while ((Hoehe%2 == 0) && (Breite%2 == 0));
	
	// Rechteck zeichnen
	for (int i=0; i<Hoehe; i++)
	{
		for (int j=0; j<Breite; j++)
		{
			// Prüfen, ob es sich um die Mitte handelt
			if ((j%2 != 0) || (i%2 != 0))
				cout << "-";
			else
				cout << "X";
			}
		cout << endl;
		}
	return 0;
}


