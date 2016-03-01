// CLR_Strings_lange.cpp: Hauptprojektdatei.

#include "stdafx.h"
#include "iostream"
#include "string"

using namespace std;

string String(string);
string MAC(string, int);
string MAC_IP_zehn(string);
string PC_Name(string);

int main()
{
	string str;
	str = String(str);

	int erstes = str.find(",");
	int zweites = str.find(",", erstes + 1);
	int IP_mit_zehn = str.find("10.");
	int MAC_mit_Minus = str.find("IP: 10") + 15;
	int PC_Name = str.find("cn=");

	cout << "Bearbeitung von folgendem String: \n\n";
	cout << str << endl << endl;
	cout << "erstes Komma: \t\t\t" << erstes << endl;
	cout << "zweites Komma: \t\t\t" << zweites << endl;
	cout << "IP-Nummer beginnend mit 10:\t" << IP_mit_zehn << endl;
	cout << "MAC fuer IP mit 10:\t\t" << MAC_mit_Minus << endl;

	cout << "Der PC hat den Namen:\t\t\t" << PC_Name << endl;

	system("pause");
	PC_Name(str);
	MAC_IP_zehn(str);
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
string MAC_IP_zehn(string str)
{
	int ip_zehn = str.find("IP: 10");
	str.erase(ip_zehn, 15);
	str.erase(0, ip_zehn);
	str.end();
	str.erase(str.find("GUID: ")-1, 50);
	return str;
}
string PC_Name(string str)
{
	int CN = str.find("cn=");
	str.erase(CN, str.length() - str.find(","));
	cout << str << endl;
	return str;
}