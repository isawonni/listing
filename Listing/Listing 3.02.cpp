// C++ fpr Spieleprogrammierer
// Listing 3.2 
// Programmsteuerung mit if und else
// 
#include <iostream>

using namespace std;

// Hauptprogramm
//
int main ()
{ 
	// Variablen
	//
	int Highscore = 32500;
	int EigenePunkte = 0;

	// Alten Highscore ausgeben und Punkte abfragen
	cout << "Bisheriger Highscore: " << Highscore << endl;
	cout << "Welche Punktzahl wurde erreicht: "; 
	cin >> EigenePunkte;

	// Highscore-Vergleich nur mit if 
	cout << "\nVerzweigung ausschlesslich mit if:" << endl;

	if (EigenePunkte <= Highscore)
	{
		cout << "Highscore nicht geknackt" << endl;
	}
	if (EigenePunkte > Highscore)
	{
		cout << "Highscore wurde geknackt" << endl;
	}

	//Highscore-Vergleich mit if und else
	cout << "\n\nVerzweigung mit if und else." << endl;

	if (EigenePunkte <= Highscore)
	{ 
		cout << "Highscore nicht geknackt" << endl;
	}
	else 
	{
		cout << "Highscore wurde geknackt" << endl;
	}
	return 0;
}
