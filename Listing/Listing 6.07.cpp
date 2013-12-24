// C++ für Spieleprogrammierer
// Listing 6.7
// Mit Referenzen arbeiten
//
#include <iostream>

using namespace std;

// Hauptprogramm
// int 
int main () 
{ 
	// Variablen 
	// 
	int Energie = 100;
	int &rEnergie1 = Energie;		// Referenz auf Energie
	int &rEnergie2 = Energie;		// Referenz auf Energie

	// Werte ausgeben
	cout << "Energie (Orignalwert) : " << Energie << endl;
	cout << "Energie (Referenz 1)  : " << rEnergie1 << endl;
	cout << "Energie (Referenz 2)  : " << rEnergie2 << "\n\n";

	Energie += 50; // Originalwert verändern

	// Werte ausgeben
	cout << "Energie (Orignalwert) : " << Energie << endl;
	cout << "Energie (Referenz 1)  : " << rEnergie1 << endl;
	cout << "Energie (Referenz 2)  : " << rEnergie2 << "\n\n";

	rEnergie1 += 50; // Referenz Verändern

	// Werte ausgeben
	cout << "Energie (Orignalwert) : " << Energie << endl;
	cout << "Energie (Referenz 1)  : " << rEnergie1 << endl;
	cout << "Energie (Referenz 2)  : " << rEnergie2 << "\n\n";

	rEnergie2 += 50; // Referenz verändern

	// Werte ausgeben
	cout << "Energie (Orignalwert) : " << Energie << endl;
	cout << "Energie (Referenz 1)  : " << rEnergie1 << endl;
	cout << "Energie (Referenz 2)  : " << rEnergie2 << "\n\n";

	// Und hier der Beweiß:
	cout << "Adresse von Energie	: " << &Energie << endl;
	cout << "Adresse von rEnergie1	: " << &rEnergie1 << endl;
	cout << "Adresse von rEnergie2  : " << &rEnergie2 << endl;

	return 0;
}