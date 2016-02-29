// CLR_Strings_lange.cpp: Hauptprojektdatei.

#include "stdafx.h"
#include "iostream"
#include "string"

using namespace std;

string String(string);
string MAC(string, int);
string GET_IP_zehn(string);
int main()
{
	string str;
	str = String(str);

	int erstes = str.find(",");
	int zweites = str.find(",", erstes + 1);
	int IP_mit_zehn = str.find("10.");
	int MAC_mit_Minus = str.find("MAC: ");

	cout << "Bearbeitung von folgendem String: \n\n";
	cout << str << endl << endl;

	cout << "erstes Komma: \t\t\t" << erstes << endl;
	cout << "zweites Komma: \t\t\t" << zweites << endl;
	cout << "IP-Nummer beginnend mit 10:\t" << IP_mit_zehn << endl;
	cout << "MAC fuer IP mit 10:\t\t" << MAC_mit_Minus << endl;

	system("Pause");
	GET_IP_zehn(str);
	system("pause");
	return 0;
}

string String(string str)
{
	str = "cn=a106_p02,ou=A106,ou=Arbeitsstationen,ou=Ressourcen,ou=TS,ou=SCHULEN,o=ml3;IP: 192.168.228.1;MAC: 00-50-56-c0-00-01;IP: 192.168.112.1;MAC: 00-50-56-c0-00-08;IP: 10.1.106.2;MAC: c8-60-00-c7-06-cb;GUID: c7b8c3285f43f444b7be9d7637d594d5;";
	return str;
}

string MAC(string str, int MAC_mit_Minus)
{
	str.erase(0, MAC_mit_Minus);
	str.erase(str.find(";"), (str.length() - str.find("MAC: ")));
	return str;
}
string GET_IP_zehn(string str)
{
	/*
	int IP_mit_zehn = str.find("10.");
	int kleinster, groeßter;
	kleinster = str.find("MAC: ");
	groeßter = str.find("MAC :", kleinster);

	if ((IP_mit_zehn - groeßter) < kleinster)
	{

	}
	*/
	int MAC_mit_Minus = str.find("MAC: ");
	cout << "#####" << MAC_mit_Minus << endl;
	MAC(str, MAC_mit_Minus);
	cout << str.length() << endl << str;
	return str;
}