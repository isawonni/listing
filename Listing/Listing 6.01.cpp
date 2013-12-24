// C++ für Spieleprogrammierer
// Listing 6.1
// Nachteile ohne Zeiger
// 
#include <iostream>

using namespace std;

// Strukturen 
// 
struct S_Spieler
{
	int Energie;
	int Punkte;
	int xPosition;
	int yPosition;
	char Name[30];
};

// Prototypen
//
S_Spieler NameAbfragen (S_Spieler Spieler);

// Hauptprogramm
// 
int main () 
{
	// Variablen
	// 
	S_Spieler Spieler1;

	// Spieler initialisieren
	Spieler1.Energie = 1000;
	Spieler1.Punkte = 0;
	Spieler1.xPosition = 0;
	Spieler1.yPosition = 0;
	Spieler1.Name[0] = '\0';

	// Name des Spielers abfragen
	Spieler1 = NameAbfragen (Spieler1);
	cout << "Neuer Spieler: " << Spieler1.Name << endl;

	return 0;
}

// NameAbfragen
// 
// Aufgabe: Name des Spielers abfragen
//
S_Spieler NameAbfragen (S_Spieler Spieler)
{
	// Name abfragen
	cout << "Name des Spielers: ";
	cin.get (Spieler.Name, 29);

	return Spieler;
} // NameAbfragen

