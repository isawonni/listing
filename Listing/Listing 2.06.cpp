// C++ für Spieleprogrammierer
// Listing 2.6
// Eingabe von Werten mit cin
//
#include <iostream>

using namespace std;

// Hauptprogramm
// 
int main ()
{
	// Variablen
	//
	int Runde1, Runde2;
	int Gesamtpunkte = 0;

	// Eingabe der Werte
	cout << "Punkte der ersten Runde eingeben: ";
	cin >> Runde1;

	cout << "Punkte der zweiten Runde eingeben: ";
	cin >> Runde2;

	// Berechnung und Ausgabe der Gesamtpunktzahl
	Gesamtpunkte = Runde1 + Runde2;
	cout << "Erreichte Gesamtpunktzahl: " << Gesamtpunkte << endl;

	// Berechnungsfehler BSP.:
	int Punkte = 15;
	float Faktor = 2.5f;		// Das kleine "f" kennzeichnet einen float
	int GesamtPunkte; 
	GesamtPunkte = Punkte * Faktor;

	cout << "Gesamtpunktzahl: " << GesamtPunkte << endl;

	return 0;
}