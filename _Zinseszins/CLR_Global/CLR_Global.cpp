/*

Programm: CLR_Global
Author: Niklas, Felix, Lukas, Alexander Sowik
Version: 0.01

*/


#include "stdafx.h"
#include "iostream"


using namespace std;						//Dekleration der Funktionen
void Linie(void);
void pot(double, int);
void Zinsb(double, double, double);

double Endkapital;							//Dekleration Globaler Variablen
double Zinsen_berechnet;
double Ergebnis_Exponent;





//-----------------------------------------------------------------------------

int main()
{
	int Laufzeit;
	double Anfangskapital, Zinssatz1, Zinssatz2, Zinssatz3;
	double Zins1, Zins2, Zins3;


	cout << "Globale Variablen" << endl;


	//------------------------------------------------------------------------------


	Linie();																// Abfrage Anfangskapital, Laufzeit und Zinss�tze
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
																		// Berechnung der Endkapitale
	Zinsb(Anfangskapital, Laufzeit, Zinssatz1);							// Input in Funktion / Funktion gibt in Globale Variable
	Zins1 = Zinsen_berechnet;											// Globale Variable wird "gefestigt"

	Zinsb(Anfangskapital, Laufzeit, Zinssatz2);							// Eingabe in Funktion / Funktion gibt Globale Variable zurück
	Zins2 = Zinsen_berechnet;											// Globale Variable sichern

	Zinsb(Anfangskapital, Laufzeit, Zinssatz3);							// Berechnung der Globalen Variable
	Zins3 = Zinsen_berechnet;											// Globale Variable in lokaler Variable sichern

	//-----------------------------------------------------------------------------
																			// Ausgabe der Endkapitale
	system("CLS");															// Konsole leeren
	
	cout << endl;															// Abstand zum Rand
	Linie();																// Linie Zeichen
	cout << endl;															// Abstand zur Linie
																											// Ausgabeblock
	cout << "\t" <<"Zinssatz 1" << "\t  \t" << "Zinssatz 2" << "\t \t" << "Zinssatz 3" << endl << endl;	
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


void Zinsb(double Anfangskapital, double Laufzeit, double Zinssatz)
{
	double Zinsfaktor = (Zinssatz / 100) + 1;
	double Endkapital;
	for (int i = 0; i != Laufzeit + 1; i++)
	{
		(pot(Zinsfaktor, i));
		Endkapital = Anfangskapital * Ergebnis_Exponent;
	}
	Zinsen_berechnet = Endkapital;
	return;
}

//-----------------------------------------------------------------------------


void pot(double Basis, int Exponent)
{
	int i;
	double Erg;
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


	Ergebnis_Exponent = Erg;

	return;
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