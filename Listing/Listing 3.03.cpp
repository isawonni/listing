// C++ für Spieleprogrammierer
// Listing 3.3
// else if und verschachtelte if-bedingungen
// 
#include <iostream>

using namespace std;

// Hauptprogramm
//
int game ()
{
	// Variablen
	//
	int Spielerzahl;		// Anzahl der Spieler
	char chAuswahl;			// Menüauswahl

	// Anzahl der Mitspieler abfragen
	cout << "Wie viele Mitspieler: ";
	cin >> Spielerzahl;

	// Falsche Eingabe?
	if (Spielerzahl == 0)
	{ 
		cout << "Falsche Eingabe" << endl;
	}
	else if (Spielerzahl == 1)
	{ 
		cout << "Du spielst gegen den Computer" << endl;
	}
	// Mutliplayer?
	else
	{
		cout << "Multiplayer-Spiel\n\n";
		cout << "(j)eder gegen jeden oder (t)eamspiel: ";
		cin >> chAuswahl;

		// Jeder gegen jedne?
		if (chAuswahl == 'j')
		{
			cout << "Jeder gegen jeden" << endl;
		}
		// Teamspiel?
		else if (chAuswahl == 't')
		{
			cout << "Teamspiel " << endl;
		}
		// Falsche Eingabe?
		else
		{ 
			cout << "Falsche Eingabe" << endl;
		}
	}
	return 0;
}