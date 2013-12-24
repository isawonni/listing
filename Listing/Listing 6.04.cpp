// C++ f�r Spieleprogrammierer
// Listing 6.4
// Variablen mittels Zeigern �ndern
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

	int *pPunkte = NULL;

	// Zeiger initialisieren
	pPunkte = &Punkte;

	// Wert der Variable "Punkte" direkt ausgeben
	cout << "Punkte: " << Punkte << endl;

	// Wert �ber den Zeiger ausgeben
	cout << "*pPunkte: " << *pPunkte << endl;

	// Variable "Punkte" mittels Zeiger ver�ndern 
	*pPunkte = 1500;

	// Wert der Variablen "Punkte" direkt ausgeben
	cout << "Punkte: " << Punkte << endl;

	return 0;
}
