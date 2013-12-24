
// C++ für Spieleprogrammierer
// Listing 2.3
// Rechnen mit Variablen
//
#include <iostream>

using namespace std;

// Hauptprogramm
//
int main ()
{ 
	// Variablen 
	//
	int Bonuspunkte, RestZeit, Diamanten;
	int Zeitbonus, Diamantenbonus;
	int PunkteProDiamant, PunkteProSekunde;

	// Variablen initialisieren
	RestZeit = 12;
	Diamanten = 16;
	PunkteProSekunde = 15;
	PunkteProDiamant = 30;

	// Bonus für Restzeit berechnen 
	Zeitbonus = RestZeit * PunkteProSekunde;
	cout << "Zeitbonus: " << Zeitbonus << endl;

	// Bonus für Diamanten berechnen
	Diamantenbonus = Diamanten * PunkteProDiamant;
	cout << "Diamantenbonus: " << Diamantenbonus << endl;

	// Gesamtpunkte berechnen
	Bonuspunkte = Zeitbonus + Diamantenbonus;
	cout << "Gesamtpunkte: " << Bonuspunkte << endl;

	// Rechenoperationen
	int Punkte, Zwsichenwert;
	Punkte = 10;
	Zwischenwert = Punkte + 20;
	Punkte = Zwischenwert;
	// gekürzt
	int Punkte = 10;
	Punkte = Punkte + 20;
	// nochmal gekürzt
	int Punkte = 10;
	Punkte += 20;

	// Zählaufgaben
	int Zaehler = 0;
	Zaehler += 10;				// Variable + Wert
	Zaehler -= 10;				// Variable - Wert
	Zaehler *= 10;				// Variable mal Wert
	Zaehler /= 10;				// Variable durch Wert
	Zaehler++;					// Variable um Eins erhöhen (same as +=)
	Zaehler--;					// Variable um Eins verringern (same as -=) 

	return 0;

// Listing 2.5
	unsigned int Punktezahl = 0;		// unsigned ohne Vorzeichen - nur positive Zahlen
	signed int Temperatur = -20;		// signed mit Vorzeichen 
	
	cout << "Punktezahl(unsigned): " << Punktezahl << endl;
	cout << "Temperatur(signed):" << Temperatur << endl;

// Listing 2.6
// Ungarische Notation
// 
	int nINT			// n Vorzeichen
	char chCHAR			// ch Vorzeichen
	bool bBOOL			// b Vorzeichen
	array aARRAY		// a Vorzeichen
	short 
	long
	float fFLOAT		// f Vorzeichen
	double

// Listing 2.7
// Konstante
//

const int Anzahl_Levels = 10;			// Konstante erzeugen
cout << "Levelanzahl(const): " Anzahl_Levels << endl;			// Wert ausgeben

#define aVERSION 0.01
cout << "Version(#define): " << aVERSION << endl;

enum Raumschifftyp (Jaeger, Transporter, Minenleger, Bomber);
Raumschifftyp Spieler1 = Minenleger;

enum Raumschifftypen (Jaeger = 3, Transporter, Minenleger = 15, Bomber);

}

