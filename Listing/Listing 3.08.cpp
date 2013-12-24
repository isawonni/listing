// C++ DOS Countdown
// Listing 3.8
// by ghost
// Version 0.01a
#include <iostream>

using namespace std;

// Hauptprogramm
//
int main ()
{ 
	// Variablen
	int Zaehler;
	
	cout << "Countdown Zaehler einstellen: " << endl;
	cin >> Zaehler;

    if ((Zaehler)%2 == 0)
	{
		for (int i=Zaehler;i>=0;i--)
		{
			if (i == Zaehler/2)
				{
					cout << "Countdown betraegt: " << i << endl;
					cout << "Halbzeit erreicht!" << endl;
				} 
			cout << "Countdown betraegt: " << i << endl;

		}
	}
	else 
	{
		cout << "Bitte gerade Zahl benutzen!" << endl;
	} 

	return 0;
}