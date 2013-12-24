// C++ für Spieleprogrammierer
// Listing 4.2
// Funktionsprototypen
//
#include <iostream>

using namespace std;

void meineFunktion ();		// Prototyp

// Hauptprogramm
//
int main () 
{
	meineFunktion ();		// Funktion aufrufen

	return 0;
}

// Meine Funktion
//

void meineFunktion ()
{ 
	cout << "Funktion trotz Prototyp aufgerufen!" << endl;
}
