// C++ für Spieleprogrammierer
// Listing 5.8
// Aufgabenstellung
//
#include <iostream>

using namespace std;

// Map Größe
const int xWert = 10;
const int yWert = 10;

// Prototypen
void defineTerrain(int Terrain, int xx, int yy);			// Walkon Test
// Enum Datenbank
char Ter_1[] = "Water";
char Ter_2[] = "Mounten";
char Ter_3[] = "Grass"; 
char Ter_4[] = "Sand";
char Ter_5[] = "Forest";

struct S_Daten {
	bool bBesetzt;		// ist das Feld besetzt
	int Terrain;		// Terrain Kürzel
	bool bWalkon;		// ist das Feld begehbar
	char chPräfix;		// Mapkürzel

};
S_Daten Field[xWert][yWert];

// Terrain Konstante
// Hauptprogramm
//
int main () { 
	int Auswahl;

	for (int y = 0;y<yWert;y++) {
		for (int x = 0;x<xWert;x++) {
			Field[x][y].bBesetzt = false;
			Field[x][y].bWalkon = false;
		}
	}

	// Menu
	//
	do {
		cout << "1. Spielfeld anzeigen" << endl;
		cout << "2. Feld besetzen" << endl;
		cout << "3. Felddaten anzeigen" << endl;
		cout << "4. Spielfeld loeschen" << endl;
		cout << "5. Beenden" << endl;

		cout << "Was moechtest du tun? ";
		cin >> Auswahl;
		cout << "\n\n";
	
		switch (Auswahl) {
			case 1:
				{
					for (int i=0;i<yWert;i++) {
						for (int j=0;j<xWert;j++) {
							if (Field[j][i].bBesetzt == true) {
								cout << Field[j][i].chPräfix;
							}
							else {
							cout << "-";
							}
						}
						cout << endl;
					}
					cout << endl;
				} break;
			case 2: 
				{
					int Terrain;
					int x;
					int y;
					do { 
						cout << "Waehle Terrain (Wasser(1),Berge(2),Rasen(3),Sand(4),Wald(5)" << endl;
						cin >> Terrain;
						cout << endl;
					} while (Terrain < 1 || Terrain > 5);
					do {
						cout << "Waehle Feld, X Koordinaten: ";
						cin >> x;
						cout << endl;
					} while (x < 1 || x > xWert);
					do {
						cout << "Waehle Feld, Y Koordinaten: ";
						cin >> y;
						cout << endl;
					} while (y < 1 || y > yWert);
					cin.ignore();
					defineTerrain(Terrain,x,y);
					cout << "Folgende Werte wurden eingetragen:" << endl;
					cout << "----------------------------------" << endl;
					cout << "Feld: (" << x << ":" << y << ")" << endl;
					cout << "Typ: " << Field[x-1][y-1].Terrain << endl;
					cout << "Praefix: " << Field[x-1][y-1].chPräfix << endl;
					cout << "Begehbar: ";	
					if (Field[x-1][y-1].bWalkon == true) 
							{ cout << "Ja" << endl; }
					else	{ cout << "Nein" << endl; }
					} break;
			case 3:
				{
					int x, y;
					cout << "Abfrage des Feldes:" << endl;
					cout << "-------------------" << endl;
					do { 
						cout << "x-position: ";
						cin >> x;
						cout << endl;
					} while (x < 1 || x > xWert);
					do {
						cout << "y-position: ";
						cin >> y; 
						cout << endl;
						} while (y < 1 || y > yWert);
					if (Field[x-1][y-1].bBesetzt == true) {
						cout << "Name des Feldes: " << endl;
						cout << "Koordinaten (" << x << ":" << y << ")" << endl << endl;
					}
					else 
					{ 
						cout << "Feld nicht vorhanden oder Leer!" << endl << endl;
					}

				} break;
			case 4:{} break;
			case 5: cout << "Beenden! " << endl;
			break;
			default: cout << "Falsche Auswahl!" << endl;
			} 
	} while (Auswahl != 5);
}

void defineTerrain(int Terrain,int xx, int yy)
{ 
	int terra = Terrain;
	int x = xx-1;
	int y = yy-1;
	switch (terra) 
	{
	case 1:
		{
		Field[x][y].chPräfix = 'W';	
		Field[x][y].Terrain = 1;
		Field[x][y].bBesetzt = true;
		Field[x][y].bWalkon = false;
		} break;
	case 2:
		{
		Field[x][y].chPräfix = 'M';
		Field[x][y].Terrain = 2;
		Field[x][y].bBesetzt = true;
		Field[x][y].bWalkon = false;
		} break;
	case 3:
		{
		Field[x][y].chPräfix = 'G';
		Field[x][y].Terrain = 3;
		Field[x][y].bBesetzt = true;
		Field[x][y].bWalkon = true;
		} break;
	case 4:
		{
		Field[x][y].chPräfix = 'S';
		Field[x][y].Terrain = 4;
		Field[x][y].bBesetzt = true;
		Field[x][y].bWalkon = true;
		} break;
	case 5:		
		{
		Field[x][y].chPräfix = 'F';
		Field[x][y].Terrain = 5;
		Field[x][y].bBesetzt = true;
		Field[x][y].bWalkon = true;
		} break;
	}
}
