// C++ für Spieleprogrammierer
// Listing 2.7
// Casting im C-Stil
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

	// Eingabe der Punktezahl
	cout << "Erreichte Punktezahl eingeben: ";
	cin >> Punkte;
	
	// Ohne Compilerfehlermeldung 
	// Gesamtpunkte ausrechnen und Ergebnis casten
	Gesamtpunkte = (int) (Punkte*Faktor);

	// Ausgabe des Ergebnisses
	cout << "Gesamtpunkte: " << Gesamtpunkte << endl;

	return 0;
}