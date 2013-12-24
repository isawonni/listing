// C++ für Spieleprogrammierer
// Listing 5.1
// Ein Array erzeugen
// 
#include <iostream>

using namespace std;

// Hauptprogramm
// 
int main () 
{ 
	// Variablen
	// 
	int Bonus[5];
	int Level;

	// Bonuspunkte für jeden Level festlegen
	Bonus[0] = 100;
	Bonus[1] = 150;
	Bonus[2] = 250;
	Bonus[3] = 400;
	Bonus[4] = 600;

	// Level abfragen
	do
	{
		cout << "Welcher Level: ";
		cin >> Level;
	} while (Level < 1 || Level > 5);

	// Bonuspunkte anzeigen
	Level--; // Indexkorrigieren

	cout << "Bonuspunkte: " << Bonus[Level] << endl;

	return 0;

}