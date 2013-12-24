
// C++ für Spieleprogrammierer
// Listing 2.5
// Überlauf von Variablen
//
#include <iostream>

using namespace std;

// Hauptprogramm
//
int main ()
{
	// Variable auf Maximalwert setzen
	unsigned short Ueberlauf = 65535;
	cout << "Vor dem Ueberlauf: " << Ueberlauf << endl;

	// Eins hinzuaddieren, damit die Variable überläuft
	Ueberlauf++;
	cout << "Nach dem Ueberlauf: " << Ueberlauf << endl;

	// Zehn abziehen, was ein weiteres Überlaufen verursacht
	Ueberlauf -= 10;
	cout << "Und zurueck: " << Ueberlauf << endl;
	
	return 0;
	// 
	// 255 im Binärformat:			11111111
	// 256 im Binärformat: 00000001 00000000

	// Übrig nach Überlauf:			00000000
	// da bei 1 byte nur 8 stellen verwendet werden

}

