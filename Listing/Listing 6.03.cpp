// C++ für Spieleprogrammierer
// Listing 6.3
// Adressen in Zeigern speichern
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
	float fGeschwindigkeit = 20.5f;

	int *pPunkte = NULL;				// Zeiger auf Punkte
	float *pGeschwindigkeit = NULL;		// Zeiger auf Geschwindigkeit

	// Zeiger initialisieren
	pPunkte = &Punkte;
	pGeschwindigkeit = &fGeschwindigkeit;

	// Adresse von "Punkte" ausgeben
	cout << "Die Adresse der Variablen \"Punkte\" ";
	cout << " Lautet: " << pPunkte << endl;

	// Adresse von "fGeschwindigkeit" ausgeben
	cout << "Die Adresse der Variablen \"fGeschwindigkeit\" ";
	cout << " lautet: " << pGeschwindigkeit << endl;

	return 0;
}
