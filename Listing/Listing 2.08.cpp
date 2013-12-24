// C++ für Spieleprogrammierer 
// Listing 2.8 
// Casting mit C++
//
#include <iostream>

using namespace std;

// Hauptprogramm
// 
int main ()
{
	// Variablen
	//
	int Punkte = 0;
	float Faktor = 2.5f;
	int Gesamtpunkte = 0;

	// Eingabe der Punktzahl
	cout << "Erreichte Punktzahl eingeben: ";
	cin >> Punkte;

	// Gesamtpunkte ausrechnen und Ergebnis casten
	Gesamtpunkte = static_cast<int> (Punkte*Faktor);
	// zusätzliche Cast Typen:
	//  static_cast<zieltyp> (quelltyp)
	//	dynamic_cast
	//  reinterpret_cast


	// Ausgabe des Ergebnisses
	cout << "Gesamtpunkte: " << Gesamtpunkte << endl;

	return 0;
}