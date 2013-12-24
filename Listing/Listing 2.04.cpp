
// C++ für Spieleprogrammier
// Listing 2.4
// Programm zum Ermitteln des Speicherbedarfs
// von Datentypen
//
#include <iostream>

using namespace std;

// Hauptprogramm
//
int main ()
{ 
	cout << "Speicherbedarf der Datentypen\n\n";

	cout << "bool benoetigt  : " << sizeof (bool)	<< " Bytes\n";
	cout << "int benoetigt   : " << sizeof (int)	<< " Bytes\n";
	cout << "short benoetigt : " << sizeof (short)	<< " Bytes\n";
	cout << "long benoetigt  : " << sizeof (long)	<< " Bytes\n";
	cout << "char benoetigt  : " << sizeof (char)	<< " Bytes\n";
	cout << "float benoetigt : " << sizeof (float)	<< " Bytes\n";
	cout << "double benoetigt: " << sizeof (double)	<< " Bytes\n";

	return 0;

}

