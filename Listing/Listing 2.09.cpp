// C++ für Spieleprogrammierer
// Listing 2.9
// Fehlerquelltext
//
#include <iostream>

using namespace std;

// Hauptprogramm
//
int main ()
{
	// Variablen
	//
	const int Tempolimit = 100;
	float Geschwindigkeit = 130.8f;
	int Differenz;


	// Übertretene Geschwindigkeit berechnen
	Differenz = static_cast<int> (Geschwindigkeit - Tempolimit);

	// Ausgabe des Strafzettels
	cout << "Hier sind " << Tempolimit << " km/h erlaubt\n";
	cout << "Sie sind " << Geschwindigkeit << "km/h gefahren\n";
	cout << "Sie sind " << Differenz << " km/h zu schnell gefahren\n"; 

	return 0;
}