// C++ 
// by ghost
// Menue mit Muster Output

#include <iostream>

using namespace std;
// Funktionen

void musterVoll () 
{
	int Breite, Hoehe;
	cout << "Bitte Breite definieren: " << endl;
	cin >> Breite;

	cout << "Bitte Hoehe definieren: " << endl;
	cin >> Hoehe;
	cout << "\n\n";

	for (int i=0;i<Hoehe;i++)
	{
		for (int j=0;j<Breite;j++)
		{
			cout << "X";
		}
		cout << endl;
	}
}
void musterHalb ()
{
	int Breite, Hoehe;
	do 
	{
	cout << "Bitte Breite definieren: " << endl;
	cin >> Breite;

	cout << "Bitte Hoehe definieren: " << endl;
	cin >> Hoehe;
	cout << "\n\n";
	} while ((Breite%2 == 0) && (Hoehe%2 == 0));

	for (int i=0;i<Hoehe;i++)
	{
		for (int j=0;j<Breite;j++)
		{
			if ((i == Hoehe/2) || (j == Breite/2))
				cout << "-";
			else 
				cout << "X";
		}
		cout << endl; 
	}
}

void musterChange () 
{
	int Breite, Hoehe;

	cout << "Bitte Breite definieren: " << endl;
	cin >> Breite;

	cout << "Bitte Hoehe definieren: " << endl;
	cin >> Hoehe;
	cout << "\n\n";

	for (int i=0;i<Hoehe;i++)
	{
		for (int j=0;j<Breite;j++)
		{
			if (j%2 != 0)
				cout << "|";
			else if (i%2 != 0)
				cout << "-";
			else
				cout << "X";
		}
		cout << endl;
	}
}

// Main Prog 
//
int main ()
{
	// Variablen Menue
	//
	int menuAuswahl = 0;
	while (menuAuswahl != 4)
	{
		cout <<  "\n\n\n";
		cout <<  "Menue: " << endl;
		cout <<  "-------" << endl;
		cout <<  "1. Muster Voll" << endl;
		cout <<  "2. Muster Halbiert" << endl;
		cout <<  "3. Muster Wechselnd" << endl;
		cout <<  "4. Beenden" << endl;
		cout <<  "\n\n\n";
		cout << "Triff deine Wahl: " << endl;
		cin >> menuAuswahl;
		cout << "\n\n";

		if (menuAuswahl == 1) { musterVoll (); }
		else if (menuAuswahl == 2) { musterHalb (); }
		else if (menuAuswahl == 3) { musterChange (); }
		else if (menuAuswahl == 4)
		{
			cout << "Auf wiedersehen!" << endl;
		}
		else 
			cout << "\n\n\n> Bitte triff eine andere Auswahl! <" << endl << endl << endl << endl;

		}
	return 0;
}