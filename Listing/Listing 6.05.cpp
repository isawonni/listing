// C++ für Spieleprogrammierer
// Listing 6.5
// Anwendung von Zeigern
//
#include <iostream>

using namespace std;

// Prototypen
//

void BerechnePunkte (int *pPunkte, int Bonus);

// Hauptprogramm
// 
int main () 
{
	// Variablen
	//
	int Punkte = 500;
	int Bonus = 150;

	// Punkte vor Funktionsaufruf ausgeben
	cout << "Punkte vor dem Funktionsaufruf: ";
	cout << Punkte << endl;

	// Es wird die Funktion "BerechnePunkte" aufgerufen,
	// der als Parameter die ADRESSE der Variablen 
	// "Punkte" übergeben wird sowie der Wert der Variablen
	// "Bonus"
	//
	BerechnePunkte (&Punkte, Bonus);

	// Punkte nach dem Funktionsaufruf ausgeben
	cout << "Punkte nach dem Funktionsaufruf: ";
	cout << Punkte << endl;

	return 0;
}

// Berechne Punkte 
// 
// Aufgabe: Bonus zu den Punkten hinzuzählen
//
void BerechnePunkte (int *pPunkte, int Bonus)
{
	// Mittels Indirektion der Variable "Punkte" ändern
	// deren Adresse als Funktionparameter übergeben wurde
	//
	*pPunkte += Bonus;
} // BerechnePunkte