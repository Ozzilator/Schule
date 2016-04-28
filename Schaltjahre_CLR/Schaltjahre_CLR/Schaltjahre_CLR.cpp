// Schaltjahre_CLR.cpp: Hauptprojektdatei.

#include "stdafx.h"
#include "iostream"
using namespace std;

int main()
{
	int Jahreszahl;
	cout << "Geben sie eine Jahreszahl ein" << endl;
	cin >> Jahreszahl;

	if ((Jahreszahl % 4) == 0)
	{
		if ((Jahreszahl % 100) == 0)
		{
			if ((Jahreszahl % 400) == 0)
			{
				cout << Jahreszahl << " ist ein Schaltjahr" << endl;
			}
			else {
				cout << Jahreszahl << " ist KEIN Schaltjahr" << endl;
			}
		}
		else {
			cout << Jahreszahl << " ist ein Schaltjahr" << endl;
		}
	}
	else {
		cout << Jahreszahl << " ist KEIN Schaltjahr" << endl;
	}
	system("PAUSE");
	return 0;
}
