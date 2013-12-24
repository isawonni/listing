// C++ für Spieleprogrammierer
// Listing 4.9
// Charentwicklung 
//
#include <iostream>

using namespace std;

int addProzent (int Str, int Prozent);
float addProzent (float Speed, int Prozent);

// Hauptprogramm
// 

int main ()
{
	// Lokale Variablen
	int Str = 50;
	float Speed = 100.0f;

	int Prozent = 10;

	cout << "Aktuelle Attribute: " << endl;
	cout << "Staerke: " << Str << endl;
	cout << "Geschwindigkeit: " << Speed << endl;

	cout << "\n\n\n";
	Str = addProzent (Str, Prozent);
	Speed = addProzent (Speed, Prozent);

	cout << "Attribute nach Berechnung: " << endl;
	cout << "Staerke: " << Str << endl;
	cout << "Geschwindigkeit: " << Speed << endl;

}

int addProzent (int Str, int Prozent)
{
	int newStr;
	newStr = (Str + (Str*Prozent)/100);
	return newStr;
}
float addProzent (float Speed, int Prozent)
{
	float newSpeed;
	newSpeed = (Speed + (Speed*Prozent)/100.0f);
	return newSpeed;
}

