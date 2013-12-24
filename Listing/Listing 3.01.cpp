// C++ für Spieleprogrammierer
// Listing 3.1
// if-Bedingungen
//
#include <iostream>

using namespace std;

// Hauptprogramm 
// 
int main ()
{
	// Variablen
	int Highscore = 32500;		// Bisheriger Highscore
	int EigenePunkte = 0;		// Punktezahl Spieler

	// Alten Highscore anzeigen
	cout << "Bisheriger Highscore: " << Highscore << endl;

	// Erreichte Punktzahl abfragen
	cout << "Wie viele Punkte wurden erreicht: ";
	cin >> EigenePunkte;

	// ist der Highscore höher als die erreichten Punkte?
	if (EigenePunkte < Highscore)
		cout << "Leider kein neuer Highscore " << endl;

	// Sind die erreichten Punkte höher als der Highscore?
	if (EigenePunkte > Highscore)
		cout << "Glueckwunsch. Platz 1! " << endl;

	// Sind die erreichten Punkte gleich dem Highscore?
	if (EigenePunkte == Highscore)
		cout << "Das war knapp! " << endl;

	return 0;
}