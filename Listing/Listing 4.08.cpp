// C++ für Spieleprogrammierer
// Listing 4.8
// Überladene Funktionen
//
#include <iostream>

using namespace std;

void testeBereich (int Wert, int Min, int Max);				// Prototyp
void testeBereich (float Wert, float Min, float Max));		// Prototyp

// Hauptprogramm
// 
int main ()
{
	// Variablen 
	// 
	int Minimum = 0;
	int Maximum = 800;
	int Wert = 560;

	float fMinimum = 100.0f;
	float fMaximum = 1000.0f;
	float fWert = 23.5f;

	testeBereich (Wert, Minimum, Maximum);
	testeBereich (fWert, fMinimum, fMaximum);

	return 0;
}

// Teste berereich für interger-werte

void testeBereich (int Wert, int Min, int Max)
{
	if ((Wert >= Min) && (Wert <= Max))
		cout << "(int) Wert innerhalb des Bereichs" << endl;
	else
		cout << "(int) Wert ausserhalb des Bereichs" << endl;
}
// Teste bereich für float Werte

void testeBereich (float Wert, float Min, float Max)
{
	if ((Wert >= Min)) && (Wert <=Max))
		cout << "(float) Wert innerhalb des Bereichs" << endl;
	else
		cout << "(float) Wert ausserhalb des Bereichs" << endl;
}

