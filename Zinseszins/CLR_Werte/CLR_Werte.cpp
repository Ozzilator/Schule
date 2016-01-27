/*

Programm: CLR_Werte
Author: Niklas, Felix, Lukas, Alexander Sowik
Version: 0.01

*/



#include "stdafx.h"
#include "iostream"


using namespace std;
																				//Deklaration Funktionen
void Linie(void);
double pot(double, int);
double Zinsb(double, double, double);


int main()
{
	//------------------------------------------------------------------------------

	double Anfangskapital, Zinssatz1, Zinssatz2, Zinssatz3;
	double Zins1, Zins2, Zins3;
	int Laufzeit;


	Linie();																// Abfrage Anfangskapital, Laufzeit und Zinssätze
	cout << "Geben sie das Anfangskapital an: " << endl;
	cin >> Anfangskapital;

	cout << endl;
	cout << "Geben sie die Laufzeit an: " << endl;
	cin >> Laufzeit;

	cout << endl;
	cout << "Geben sie den Zinssatz1 ein: " << endl;
	cin >> Zinssatz1;

	cout << endl;
	cout << "Geben sie den Zinssatz2 ein: " << endl;
	cin >> Zinssatz2;

	cout << endl;
	cout << "Geben sie den Zinssatz3 ein: " << endl;
	cin >> Zinssatz3;
	Linie();

	//------------------------------------------------------------------------------

	Zins1 = Zinsb(Anfangskapital, Laufzeit, Zinssatz1);						// Berechnung der Endkapitale
	Zins2 = Zinsb(Anfangskapital, Laufzeit, Zinssatz2);
	Zins3 = Zinsb(Anfangskapital, Laufzeit, Zinssatz3);

	//-----------------------------------------------------------------------------




	system("CLS");															// Konsole leeren

	cout << endl;															// Abstand zum Rand
	Linie();																// Linie Zeichen
	cout << endl;															// Abstand zur Linie
																			// Ausgabeblock
	cout << "\t" << "Zinssatz 1" << "\t  \t" << "Zinssatz 2" << "\t \t" << "Zinssatz 3" << endl << endl;
	cout << "\t" << Zins1 << " Euro \t \t" << Zins2 << " Euro \t \t" << Zins3 << " Euro \t \t" << endl;
	cout << "Zinsen: " << Zins1 - Anfangskapital << " Euro \t \t" << Zins2 - Anfangskapital << " Euro \t \t" << Zins3 - Anfangskapital << " Euro \t \t" << endl;
	cout << "Zinssatz: " << "\t" << Zinssatz1 << "%\t \t" << Zinssatz2 << "%\t \t \t" << Zinssatz3 << "%\t \t" << endl;

	Linie();																// Linie Zeichen


	cout << endl << endl;													// Abstand zur Linie
	system("PAUSE");
	return 0;
}





//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------


double Zinsb(double Anfangskapital, double Laufzeit, double Zinssatz)
{
	double Zinsfaktor = (Zinssatz / 100) + 1;
	double Endkapital;
	for (int i = 0; i != Laufzeit + 1; i++)
	{
		Endkapital = Anfangskapital * (pot(Zinsfaktor, i));
	}

	return Endkapital;
}

//-----------------------------------------------------------------------------


double pot(double Basis, int Exponent)
{
	int i;
	double Pot_Ausgabe, Erg;
	if (Exponent <= 1)
	{
		Erg = Basis;
	}
	if (Exponent > 1)
	{
		Erg = Basis * Basis;
	}

	for (i = 3; i <= Exponent; i++)
	{
		Erg = Erg * Basis;
	}


	Pot_Ausgabe = Erg;

	return Pot_Ausgabe;
}


//------------------------------------------------------------------------------

void Linie(void)
{
	int i;
	for (i = 0; i <= 75; i++)
	{
		cout << "-";
	}
	cout << endl;
	return;
}