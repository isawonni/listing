// C++ für Spieleprogrammierer
// Listing 4.7
// Bereichsabfrage
// 
#include <iostream>

using namespace std;

bool testeBereich (int Position, int Min, int Max); // Prototyp

// Hauptprogramm
//
int main ()
{
	// Lokale Variable

	int Minimum = 0;
	int Maximum = 800;
	int xPosition;

	cout << "Spielerposition auf der x-Achse: ";
	cin >> xPosition;

	if (testeBereich (xPosition, Minimum, Maximum) == true)
		cout << "Spieler ist noch auf dem Bildschirm" << endl;
	else
		cout << "Spieler ist ausserhalb des Bildschirms" << endl;

	return 0;
}

// testeBereich
//
bool testeBereich (int Position, int min, int max)
{
	if ((Position >= min) && (Position < max))
		return true;
	else
		return false;
}
