// C++ f�r Spieleprogrammierer
// Listing 3.10
// do while-schleifen
// 
#include <iostream>

using namespace std;

// Hauptprogramm
// 
int main ()
{ 
	// Variablen
	//
	int Zaehler;	// Zaehlvariable

	// Startwert abfragen
	cout << "Bitte einen Startwert eingeben: ";
	cin >> Zaehler;

	// Z�hler auf 0 herunterz�hlen 
	do
	{ 
		cout << "Wert des Zaehlers: " << Zaehler << endl;
		Zaehler--;
	} while (Zaehler > 0);

	cout << "\n\nProgrammende" << endl;

	return 0;
}
