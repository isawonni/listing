// C++ für Spieleprogrammierer
// Listing 4.5
// Funktionen intern: Der Stack
//
#include <iostream>

using namespace std;

void erhoehePunkte (int Punkte);

// Hauptprogramm
//
int main ()
{
	// Lokale Variablen
	//
	int Punkte = 1000;		// Punkte

	cout << "Punkte vor der Funktionsaufruf: " << Punkte << endl;

	erhoehePunkte (Punkte);

	cout << "Punkte nach Funktionsaufruf: " << Punkte << endl;

	return 0;
}

void erhoehePunkte (int Punkte)
{ 
	Punkte += 100;
}
