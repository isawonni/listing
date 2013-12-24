#include "Charakter.hpp"

int addProzent (int Wert, int Prozent)
{
	int newStr;
	newStr = (Wert + (Wert*Prozent)/100);
	return newStr;
}
float addProzent (float Wert, int Prozent)
{
	float newSpeed;
	newSpeed = (Wert + (Wert*Prozent)/100.0f);
	return newSpeed;
}