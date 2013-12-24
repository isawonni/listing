// C++ für Spieleprogrammierer
// Listing 6.2
// Anzeige der Adresse einer Variablen
// 
#include <iostream>

using namespace std;

// Hauptprogramm
// 
int main () 
{
	// Variablen
	//
	int Punkte = 500;
	int Energie = 1500;

	// Adresse der Variablen "Punkte" anzeigen
	cout << "Die Adresse der Variablen \"Punkte\" ";
	cout << "lautet: " << &Punkte << endl;

	// Adresse der Variablen "Energie" anzeigen
	cout << "Die Adresse der Variablen \"Energie\" ";
	cout << "lautet: " << &Energie << endl;

	return 0;
}
