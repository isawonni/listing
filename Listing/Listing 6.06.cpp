// C++ für spieleprogrammierer
// Listing 6.6 
// Verbesserte Version von Listing 6.1
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

// Prototyp
// 
void NameAbfragen (S_Spieler *pSpieler);

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
	NameAbfragen (&Spieler1);
	cout << "Neuer Spieler : " << Spieler1.Name << endl;

	return 0;
}

// NameAbfragen
//
// Aufgabe: Name des Spielers abfragen
//
void NameAbfragen (S_Spieler *pSpieler)
{
	// Name abfragen
	cout << "Name des Spielers: ";
	cin.get (pSpieler->Name, 29);

} // NameAbfragen
