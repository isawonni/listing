// C++ für Spieleprogrammierer
// Listing 3.9
// while-schleifen
//
#include <iostream>

using namespace std;

// Hauptprogramm
//
int main ()
{
	// Variablen
	//
	int Auswahl = 0;			// Aktuelle Menuauswahl

	// Codeblock so lange ausführen, wie nicht der Wert 3 Spielbeenden eingegeben wurde.
	while (Auswahl != 3)
	{
		cout << "Menue: " << endl;
		cout << "-------" << endl;
		cout << "1: Starten" << endl;
		cout << "2: Optionen" << endl;
		cout << "3: Spiel beenden" << endl;

		cout << "Deine Auswahl: " << endl;
		cin >> Auswahl;
		cout << endl;

		if (Auswahl == 1) 
		{
			cout << "> Das Spiel wird gestartet <" << endl;
		}
		else if (Auswahl == 2)
			cout << "> Optionen werden geladen <" << endl;
		else if (Auswahl == 3)
			cout << "> Das Spiel wird beendet <" << endl;
		else
			cout << "Falsche Auswahl!" << endl;
		cout << "\n\n\n";
	}
}