// C++ für Spieleprogrammierer
// Listing 5.7
// Spieleverwaltung mit Strukturen und Arrays
//
#include <iostream>

using namespace std;

// Hauptprogramm
//
int main () 
{
	// Strukturen
	// 
	struct S_Spieler { 
		int Team; char Name[30]; int Level;
	};

	// Variablen
	// 
	S_Spieler SpielerListe[4];
	int Auswahl = 0;

	// Abfrage der einzelnen Spielerdaten
	for (int i=0; i<4; i++) {
		SpielerListe[i].Team = 0;

		// Name abfragen
		cout << "Spieler " << i+1 << endl;
		cout << "Dein Name: ";
		cin.get (SpielerListe[i].Name, 29);

		// Team abfragen
		do {
			cout << "In Welchem Team willst du spielen (1 oder 2): ";
			cin >> (SpielerListe[i].Team);

		} while (SpielerListe[i].Team != 1 && SpielerListe[i].Team != 2);

		cout << endl;
		cin.ignore ();
	}
	// Ausgabe aller Teilnehmer eines Teams
	do 	{ 
		cout << "Welches Team soll angezeigt werden (1 oder 2) (0 fuer Ende): ";
		cin >> Auswahl;

		// Nur ausgeben, wenn ein gültiges Team gewählt wurde
		if (Auswahl == 1 || Auswahl == 2) {
			cout << "Team " << Auswahl << "besteht aus:" << endl;

			// Alle Spieler durchlaufen
			for (int j=0; j<4; j++)	{
				// ist der Spieler im anzuzeigenden Team?
				if (SpielerListe[j].Team == Auswahl) {
					cout << "Spielername:"	<< SpielerListe[j].Name << endl;
				}
			}
			cout << endl;
		}
	} while (Auswahl != 0);
	return 0;
}

