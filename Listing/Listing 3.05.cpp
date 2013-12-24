// C++ für Spieleprogrammierer
// Listing 3.5
// switch und case
//
#include <iostream>

using namespace std;

// Hauptprogramm
//
int main ()
{
	// Variablen
	//
	char chAuswahl;			// Menueauswahl

	// Auswahlmenü darstellen und Eingabe abfragen
	cout << "(I)ntro, (S)pielen, (O)ptionen, (B)eenden: ";
	cin >> chAuswahl;

	// Je nach Auswahl verzweigen
	switch (chAuswahl)
	{
		// Intro?
	case ('i'):
		{
			cout << "Das Intro wird abgespielt" << endl;
		} break;

		//  Spiel starten?
	case ('s'):
		{
			cout << "Das Spiel wird gestartet" << endl;
		} break;

		// Optionen? 
	case ('o'):
		{
			cout << "Einstellen der Optionen" << endl;
		} break;
	case ('b'):
		{
			cout << "Spiel wird beendet" << endl;
		} break;

		// Alles andere gilt als Fehler
	default:
		{
			cout << "Falsche Eingabe" << endl;
		}
	}

	cout << "Ende" << endl;

	return 0;
}
