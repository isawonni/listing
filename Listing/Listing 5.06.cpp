// C++ für Spieleprogrammierer 
// Listing 5.6
// Strukturen erzeugen und verwenden
//
#include <iostream>

using namespace std;

// Hauptprogramm
//
int main ()
{
	// Strukturen
	//
	struct S_Spieler
	{
		int Energie;
		char Name[30];
	};

	// Variablen
	// Variablen
	S_Spieler Spieler1;
	S_Spieler Spieler2;

	// Daten der Spieler abfragen
	cout << "Name des ersten Spielers: ";
	cin.get (Spieler1.Name, 29);

	cout << "Energie des ersten Spielers: ";
	cin >> Spieler1.Energie;

	cin.ignore ();

	cout << "Name des zweiten Spielers: ";
	cin.get (Spieler2.Name, 29);

	cout << "Energie des zweiten Spielers: ";
	cin >> Spieler2.Energie;

	cout << endl;

	// Ausgabe der Daten
	cout << "Spieler 1:" << endl;
	cout << "Name: " << Spieler1.Name << endl;
	cout << "Energie: " << Spieler1.Energie << "\n\n";

	cout << "Spieler 2:" << endl;
	cout << "Name: " << Spieler2.Name << endl;
	cout << "Energie: " << Spieler2.Energie << "\n\n";

	return 0;
}