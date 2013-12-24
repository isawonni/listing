// C++ f�r Spieleprogrammierer
// Listing 4.3
// R�ckgabewert, globale und lokale Variablen
// 
#include <iostream>

using namespace std;

int berechnePunkte ();		// Prototyp
int Bonus = 500;			// Globale Variable

// Hauptprogramm
// 
int main ()
{
	// Lokale Variablen
	//
	int Punkte;

	Punkte = berechnePunkte ();		// Funktion aufrufen

	cout << "Punkte: " << Punkte << endl;
	cout << "Davon Bonuspunkte: " << Bonus << endl;

	return 0;
}

// berechnePunkte
//
int berechnePunkte ()
{ 
	int Punkte;
	cout << "Erreichte Punkte: ";
	cin >> Punkte;

	Punkte += Bonus;

	return Punkte;
}

