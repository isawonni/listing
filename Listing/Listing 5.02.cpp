// C++ für Spieleprogrammierer
// Listing 5.2
// Ein Array gleichzeitig deklarieren und definieren
//

#include <iostream>

using namespace std;

// Hauptprogramm
// 
int main () 
{
	// Variablen
	// 
	int Bonus[] = { 100, 150, 250, 400, 600, 850, 1150, 1500, 1900};

	int AnzahlFelder = sizeof (Bonus) / sizeof (int);

	for (int i=0; i<AnzahlFelder; i++)
	{
		cout << "Bonuspunkte fuer Level " << i+1;
		cout << " : " << Bonus[i] << endl;
	}
	
	return 0;
}


