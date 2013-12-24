// C++ für Spieleprogrammierer
// Listing 4.10
// Verwenden von eigenen .hpp und .cpp Datieen
//
#include <iostream>
#include "Charakter.hpp"

using namespace std;

// Hauptprogramm
// 

int main ()
{
	// Lokale Variablen
	int Staerke;
	float Geschwindigkeit;
	int Steigerung;
	
	// Abfrage der Werte
	cout << "Bisherige Staerke des Charakters: ";
	cin >> Staerke;

	cout << "Bisherige Geschwindigkeit des Charakters: ";
	cin >> Geschwindigkeit;

	cout << "Steigerung in Prozent: ";
	cin >> Steigerung;

	// Neue Werte berechnen
	Staerke = addProzent (Staerke, Steigerung);
	Geschwindigkeit = addProzent (Geschwindigkeit, Steigerung);

	cout << "Attribute nach Berechnung: " << endl;
	cout << "Staerke: " << Staerke << endl;
	cout << "Geschwindigkeit: " << Geschwindigkeit << endl;

	return 0;
}



