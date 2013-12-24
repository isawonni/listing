// C++ für Spieleprogrammierer
// Listing 3.4
// Logische Operatoren
// 
#include <iostream>

using namespace std;

// Hauptprogramm
//
int main ()
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
		cout << "(J)eder gegen jeden oder (T)eamspiel: ";
		cin >> chAuswahl;

		// Jeder gegen jedne?
		if ((chAuswahl == 'j') || (chAuswahl == 'J'))
		{
			cout << "Jeder gegen jeden" << endl;
		}
		// Teamspiel?
		else if ((chAuswahl == 't') || (chAuswahl == 'T'))
		{
			cout << "Teamspiel" << endl;
		}
		// Falsche Eingabe?
		else
		{ 
			cout << "Falsche Eingabe" << endl;
		}
	}
	return 0;
}