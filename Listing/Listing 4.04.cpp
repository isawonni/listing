// C++ für Spieleprogrammierer
// Listing 4.4
// Funktionsparameter verwenden
//
#include <iostream>

using namespace std;

int berechnePunkte (int Punkte, int Restzeit, int Zeitfaktor);

// Hauptprogramm
// 
int main ()
{
	// Lokale Variable
	//
	int Gesamtpunkte = 0;			// Punkte, die insgesamt erreicht wurden
	int Punkte = 0;					// Punkte bisher 
	int Restzeit = 0;				// Restzeit in Sekunden
	int Zeitfaktor = 0;				// Punktebonus pro Sekunde

	// Abfragen der benötigten Werte
	cout << "Wie viele Punkte wurden bisher erreicht: ";
	cin >> Punkte;

	cout << "Restzeit in Sekunden: ";
	cin >> Restzeit;

	cout << "Punktebonus pro Sekunde: ";
	cin >> Zeitfaktor;

	// Gesamtpunkte durch Aufrufen der Funktion berechnen
	Gesamtpunkte = berechnePunkte (Punkte, Restzeit, Zeitfaktor);

	// Gesamtpunkte anzeigen
	cout << "\nInsgesamt wurden " << Gesamtpunkte;
	cout << " Punkte erreicht!" << endl;

	return 0;
}

// berechnePunkte
// 
int berechnePunkte (int Punkte, int Restzeit, int Zeitfaktor)
{
	int Temp;		// Zwischenwert
	
	// Berechnung der Gesamtpunktzahl
	Temp = Punkte + Restzeit * Zeitfaktor;

	// Rückgabe des Ergebnisses
	return Temp;
}




