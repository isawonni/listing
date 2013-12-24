// C++ für Spieleprogrammierer
// Listing 3.7
// Die Rechenoperation "Modulo"
// 
#include <iostream>

using namespace std;

// Hauptprogramm
// 
int main ()
{
	// Variablen
	//
	int Zahl;
	int Divisor;

	// Eingabe der Werte
	cout << "Bitte eine Zahl eingeben: ";
	cin >> Zahl;

	cout << "Bitte den Divisor eingeben: ";
	cin >> Divisor;

	// Berechnung des Ergebnisses samt Rest
	cout << "Ergebnis: " << Zahl/Divisor << endl;
	cout << "Rest: " << Zahl%Divisor << endl;

	return 0;
}
