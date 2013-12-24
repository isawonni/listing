// C++ für Spieleprogrammierer
// Listing 3.6
// for-Schleifen
// 
#include <iostream>

using namespace std;

// Hauptprogramm
//
int main () 
{
	// Variablen
	// 
	int RundenAnzahl = 0;		// Anzahl der Runden
	int RundenPunkte = 0;		// Punkte einer Runde
	int Gesamtpunkte = 0;		// Gesamt erreichte Punkte

	// Anzahl der Runden ermitteln
	cout << "Wie viele Runden sollen gespielt werden: ";
	cin >> RundenAnzahl;

	// Runden durchlaufen
	for (int i=0; i<RundenAnzahl; i++)
	{
		// Aktuelle Runde berechnen 
		cout << "Runde " << i+1 << " wird gespielt" << endl;
		cout << "Wie viele Punkte wurden erreicht: ";
		cin >> RundenPunkte;

		Gesamtpunkte += RundenPunkte;

		cout << "Zwischenstand: " << Gesamtpunkte << "\n\n";
	}

	// Endergebnis ausgeben
	cout << "\nNach " << RundenAnzahl << " Runden wurden insgesamt ";
	cout << Gesamtpunkte << " Punkte erreicht" << endl;

	return 0;
}
