/*

Programm: CLR_Adresse
Author: Niklas, Felix, Lukas, Alexander Sowik
Version: 0.01

*/

#include "stdafx.h"
#include "iostream"


using namespace std;
											//Delaration Funktionen
void Linie(void);
double *pot(double* , int *);
void Zinsb(double *, double *, double *, double *);

double Glob_End;
int main()
{
	double Laufzeit;
	double Anfangskapital, Zinssatz1, Zinssatz2, Zinssatz3;
	double Zins1, Zins2, Zins3;
	//------------------------------------------------------------------------------


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
			double End;
			double *Rückgabe_end = &End;

	double *Anfang = &Anfangskapital;
	double *Lauf = &Laufzeit;		
	double *PZinssatz1 = &Zinssatz1;
	double *PZinssatz2 = &Zinssatz2;
	double *PZinssatz3 = &Zinssatz3;

	Zinsb(Anfang, Lauf, PZinssatz1, Rückgabe_end);
	Zins1 = Glob_End;

	Zinsb(Anfang, Lauf, PZinssatz2, Rückgabe_end);
	Zins2 = Glob_End;

	Zinsb(Anfang, Lauf, PZinssatz3, Rückgabe_end);
	Zins3 = Glob_End;

	//------------------------------------------------------------------------------
	// Ausgabe der Endkapitale
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


void Zinsb(double *Anfangskapital, double *Laufzeit, double *Zinssatz, double *Rückgabe)
{
	double Zinsfaktor = (*Zinssatz / 100) + 1;
	double *ZZ = &Zinsfaktor;
	double Endkapital;
	for (int a = 0; a != *Laufzeit + 1; a++)
	{
		int *abgabe = &a;
		double *Exp = (pot(ZZ, abgabe));
		Endkapital = *Anfangskapital * *Exp;
	}
	double *Ende = &Endkapital;
	Glob_End = Endkapital;
	return;
}

//-----------------------------------------------------------------------------


double *pot(double *Basis, int *Exponent)
{
	int i;
	double Erg;
	double EEndkapital;
	if (*Exponent <= 1)
	{
		Erg = *Basis;
	}
	if (*Exponent > 1)
	{
		Erg = *Basis * *Basis;
	}

	for (i = 3; i <= *Exponent; i++)
	{
		Erg = Erg * *Basis;
	}

	double *lalalalla = &Erg;
	EEndkapital = Erg;

	return lalalalla;
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