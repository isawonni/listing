// C++ für Spieleprogrammierer
// Listing 5.4
// Eingabe von Strings
//
#include <iostream>

using namespace std;

// Hauptprogramm
// 
int main ()
{
	// Variablen 
	//
	char Name[50];
	
	// Abfrage des Namens

	cout << "Bitte Namen eingeben: ";
	cin.get (Name, 49);

	// Ausgabe des Namens
	cout << "Der Eingabestring lautet: ";
	cout << Name << endl;

	return 0;
}