// C++ für Spieleprogrammierer
// Listing 5.3
// char-Arrays
//
#include <iostream>

using namespace std;

// Hauptprogramm
//
int main ()
{
	// Variablen
	//
	char Zeichenfolge1[] = "Hier kommt nur unwahres";
	char Zeichenfolge2[] = "Hier kommt nur wahres";
	char Zeichenfolge3[] = "Hier kommt\0 nur blödsinn";

	// Ausgabe der Strings
	cout << Zeichenfolge1 << endl;
	cout << Zeichenfolge2 << endl;
	cout << Zeichenfolge3 << endl;

	for (int i=0;i<(sizeof(Zeichenfolge3)/sizeof(char));i++)
	{
		cout << Zeichenfolge3[i];
	}
	cout << endl;
	return 0;
}