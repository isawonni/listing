// C++ für Spieleprogrammierer
// Listing 4.6
// inline-Funktionen
//
#include <iostream>

using namespace std;

// testeHighscore
//
inline void testHighscore (int Punkte, int Highscore)
{ 
	if (Punkte > Highscore)
		cout << "Highscore wurde geknackt !" << endl;
	else
		cout << "Leider kein neuer Highscore" << endl;
}

// Hauptprogramm
// 
int main () 
{
	// Lokale Variablen
	//
	int Punkte = 0;			// Erreichte Punkte 
	int Highscore = 6510;	// Bisheriger Highscore

	// Punkte abfragen
	cout << "Erreichte Punktzahl: ";
	cin >> Punkte;

	// Testen, ob neuer Highscore erreicht wurde
	testHighscore (Punkte, Highscore);
	
	return 0;

}
