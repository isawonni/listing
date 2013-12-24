
// C++ f�r Spieleprogrammierer
// Listing 2.5
// �berlauf von Variablen
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

	// Eins hinzuaddieren, damit die Variable �berl�uft
	Ueberlauf++;
	cout << "Nach dem Ueberlauf: " << Ueberlauf << endl;

	// Zehn abziehen, was ein weiteres �berlaufen verursacht
	Ueberlauf -= 10;
	cout << "Und zurueck: " << Ueberlauf << endl;
	
	return 0;
	// 
	// 255 im Bin�rformat:			11111111
	// 256 im Bin�rformat: 00000001 00000000

	// �brig nach �berlauf:			00000000
	// da bei 1 byte nur 8 stellen verwendet werden

}

