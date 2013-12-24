// C++ für Spieleprogrammierer
// Listing 4.11
// Zahlenraten
//
#include <iostream>
#include <Windows.h>

using namespace std;

#pragma comment (lib, "winmm.lib")

// Funktionsprototypen

int Spielen (int Level);
int WaehleLevel (int Level);
int TesteHighscore (int Punkte, int Highscore);
void ZeigeInfos ();

// Hauptprogramm 
// 
int main () 
{
	// Variablen
	//
	char Auswahl;			// Gewählter Menüpunkt
	int Level = 5;			// Aktueller Level
	int Highscore = 100;	// Aktueller Highscore

	// Zufallsgenerator initialisieren
	srand (timeGetTime ());

	// Verarbeitung des Menüs
	do
	{ 
		// Menü ausgeben
		//
		cout << "Zahlenraten - Menue" << endl;
		cout << "-------------------" << endl;
		cout << "(N)eues Spiel starten" << endl;
		cout << "(L)evel waehler" << endl;
		cout << "(H)ighscore anzeigen" << endl;
		cout << "(I)nfo" << endl;
		cout << "(B)eenden\n\n";

		// Eingabe abfragen
		cout << "Auswahl: ";
		cin >> Auswahl;

		// Je nach Eingabe verzweigen
		switch (Auswahl)
		{
			// Neues Spiel Starten
			case ('n'):
			case ('N'):
			{
				// Spielen
				int Punkte;
				Punkte = Spielen (Level);

				Highscore = TesteHighscore (Punkte, Highscore);
			} break;

			// Level wählen?
			case ('l'):
			case ('L'):
			{
				Level = WaehleLevel (Level);
			} break;

			// Highscore anzeigen?
			case ('h'):
			case ('H'):
			{
				cout << "Der aktuelle Highscore liegt bei ";
				cout << Highscore << " Punkten\n\n";
			} break;

			// Informationen anzeigen?
			case ('i'):
			case ('I'):
			{ 
				ZeigeInfos ();
			} break;

			// Spiel beenden?
			case ('b'):
			case ('B'):
			{
				cout << "Spiel beendet." << endl;
			} break;

			// Falsche eingabe?
			default:
				{
					cout << "Falsche Eingabe!\n\n";
				}
		}
	} while (Auswahl != 'b' && Auswahl != 'B'); // Spiel Beenden?

	cout << "Bis zum nächsten Mal" << endl;

	return 0;
}
// main

// ZeigeInfos
// 
// Aufgabe: Information zum Spiel anzeigen
// 
void ZeigeInfos ()
{
	cout << "Zahlenraten V1.0" << endl;
	cout << "Beispiel aus \"C++ fuer Spieleprogrammierer\"";
	cout << "\n\n";
} // ZeigeInfos

// Waehle Level

int WaehleLevel (int Level)
{ 
	int NeuerLevel;

	do 
	{
		// Neuen Level wählen
		cout << "Aktueller Level: " << Level << endl;
		cout << "Neuer Level (1 - 10): ";
		cin >> NeuerLevel;

		// Ungültigen Level gewählt?
		if (NeuerLevel < 1 || NeuerLevel > 10)
		{
			// Fehlermeldung ausgeben
			cout << "Ungueltiger Level-Wert" << endl;
		}
	} while (NeuerLevel < 1 || NeuerLevel > 10);

	// Gewählten Level zurückgeben
	return NeuerLevel;
} // WaehleLevel

// Spielen
//
// Aufgabe: Das eigentliche Spiel spielen
//
int Spielen (int Level)
{
	int Zufallszahl;		// Zufallszahl, die erraten werden muss
	int GerateneZahl = 0;	// Zahl, die der Spieler eingibt
	int Bereich = Level*10;	// Bereich der Zufallszahl
	int Versuche = 0;		// Anzahl der bisherigen Versuche
	int Punkte = 0;			// Punktzahl

	// Zufallszahl ermitteln
	Zufallszahl = (rand()%Bereich)+1;

	// Bereich ausgeben, in dem geraten wird
	cout << "\nDie gesuchte Zahl liegt zwischen 1 und ";
	cout << Bereich << endl;

	// So lange raten, bis die Zahl gefunden wurde
	while (GerateneZahl != Zufallszahl)
	{ 
		cout << "Dein Tipp: ";
		cin >> GerateneZahl;

		Versuche++;

		// Zahl hat nich gestimmt, also Hinweis ausgeben
		if (GerateneZahl < Zufallszahl)
			cout << "Die gesuchte Zahl ist groesser" << endl;
		if (GerateneZahl > Zufallszahl)
			cout << "Die gesuchte Zahl ist kleiner" << endl;
	}

	// Die Zahl wurde erraten!
	cout << "\nGeschafft ! " << endl;
	cout << "Du hast die Zahl nach " << Versuche;
	cout << " Versuchen erraten!\n\n";

	// Punkte berechnen
	// Desto weniger Versuche und desto höher das Level, je mehr Punkte werden vergeben
	//
	Punkte = Bereich - Versuche + 1;
	Punkte *= Level;

	// Wenn mehr versuche benötigt wurden, als es Zahlen gibt,
	// kann das Ergebnis negativ sein.
	//
	if (Punkte < 0)
		Punkte = 0;
	// Punkte ausgeben
	cout << "Punkte: " << Punkte << endl;

	// Punkte zurückgeben
	return Punkte;
} // Spielen

// TesteHighscore
// 
// Aufgabe: Prüfen, ob der Highscore geknackt wurde
//
int TesteHighscore (int Punkte, int Highscore)
{
	// Prüfen, ob der Highscore geknackt wurde
	if (Punkte > Highscore)
	{ 
		cout << "Glueckwunsch. Neuer Highscore !\n\n";
		Highscore = Punkte;
	}
	else 
	{
		cout << "Leider kein neuer Highscore\n\n";
	}
	// Highscore zurückgeben
	return Highscore;
} // TesteHighscore





