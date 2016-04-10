/*
Programm: CLR_Strings_lange
Author: Niklas
Funktion: Aus dem in "String()" definierten String informationen herauslesen und geordnet wiedergeben.
Anmerkungen: Geht glaub auch einfacher
*/

#include "stdafx.h"				//Bibliotheken
#include "iostream"
#include "string"				//Für Strings

using namespace std;			//Für cout endl und strings
									//Unterfunktionen
string String(string);				//Definiert den String
string MAC(string, int);			//Findet die MAC-Adresse Heraus
//string MAC_IP_zehn(string);			//Gleiche wie MAC
string PC_Name_finden(string);		//Findet den PC Namen
string Raum_finden(void);			//Findet den Raum
string IP_mit_zehn_str(string);		//Findet die IP mit 10.
string Minus_doppelpunkt(string);	//Ersetzt die - mit : aus der MAC-Adresse im String

int main()							//Hauptfunktion
{
	string str;						//String
	str = String(str);				//String wird definiert

//---------------------------------------------------------------------------------------------------

	int erstes = str.find(",");		//Stelle des Ersten Kommatas finden
	int zweites = str.find(",", erstes + 1);	//Stelle des zweiten Kommatas finden
	int IP_mit_zehn = str.find("10.");			//Stelle der IP mit 10. finden
	int MAC_mit_Minus = str.find("IP: 10") + 15;	//Stelle der MAC-Adresse finden in abhängigkeit "IP=" ist 15 zeichen lang

	//---------------------------------------------------------------------------------------------------

	cout << "Bearbeitung von folgendem String: \n\n";			//Ausgabe 
	cout << str << endl << endl;								//Ausgabe Strings
	cout << "erstes Komma: \t\t\t" << erstes << endl;			//Ausgabe der Stelle des erstes Kommas des Strings
	cout << "zweites Komma: \t\t\t" << zweites << endl;			//Ausgabe der Stelle des zweites Kommas des Strings
	cout << "IP-Nummer beginnend mit 10:\t" << IP_mit_zehn << endl;		//Ausgabe der Stelle der IP mit 10.
	cout << "MAC fuer IP mit 10:\t\t" << MAC_mit_Minus << endl;			//Ausgabe der Stelle der der MAC Adresse
	
	cout << endl << endl;									//Zeilenabstand
	
	cout << "Der PC hat den Namen:\t\t" << PC_Name_finden(str) << endl;	//PC Name ausgeben
	cout << "und steht im Raum:\t\t" << Raum_finden() << endl;			//Raum Name ausgeben
	cout << "Er hat die IP-Nummer:\t\t" << IP_mit_zehn_str(str) << endl;	//IP Adresse ausgeben
	cout << "und die MAC-Adresse:\t\t" << MAC(str, MAC_mit_Minus) << endl;	//MAC Adresse mit - ausgeben

	cout << endl << endl;									//Zeilenabstand
	cout << "Korrigierte MAC-Adresse:\t\t" << Minus_doppelpunkt(MAC(str, MAC_mit_Minus)) << endl;	//Ausgabe der Korrigierten MAC Adresse

	//---------------------------------------------------------------------------------------------------

	system("pause");					//Bitte drücken Sie...
	return 0;					
}

//---------------------------------------------------------------------------------------------------
//-------------------------------------Unterfunktionen-----------------------------------------------
//---------------------------------------------------------------------------------------------------

//---------------------------------String------------------------------------------------------------

string String(string str)			//String definieren
{
	str = "cn=a106_p02,ou=A106,ou=Arbeitsstationen,ou=Ressourcen,ou=TS,ou=SCHULEN,o=ml3;IP: 192.168.228.1;MAC: 00-50-56-c0-00-01;IP: 192.168.112.1;MAC: 00-50-56-c0-00-08;IP: 10.1.106.2;MAC: c8-60-00-c7-06-cb;GUID: c7b8c3285f43f444b7be9d7637d594d5;";
	return str;
}

//---------------------------------------MAC---------------------------------------------------------

string MAC(string str, int MAC_mit_Minus)	//MAC rausfinden nach schema "MAC: FF-FF-FF-FF-FF"
{
	str.erase(0, MAC_mit_Minus);
	str.erase(str.find(";"), (str.length() - str.find("MAC: ")));
	str.erase(0, 5);
	return str;
}

//------------------------------MAC_IP_zehn----------------------------------------------------------

/*string MAC_IP_zehn(string str)			//Macht das gleiche wie Funktion MAC 
{											//Fraglich wieso vorhanden
	int ip_zehn = str.find("IP: 10");		
	str.erase(ip_zehn, 15);					
	str.erase(0, ip_zehn);				
	str.erase(str.find("GUID: ")-1, 50);	
	return str;
}*/

//----------------------------------PC_Name_finden---------------------------------------------------

string PC_Name_finden(string str)		//PC Namen herausfinden
{
	int CN = str.find("cn=");
	str.erase(CN + str.find(","), str.length());
	str.erase(0, 3);
	return str;
}

//----------------------------------Raum_finden------------------------------------------------------

string Raum_finden(void)		//Raum herausfinden
{
	string str;
	str = String(str);
	int OU = str.find("ou=");
	str.erase(OU + str.find(","), str.length());
	str.erase(0, 15);
	str.erase(str.find(","), str.length() - str.find(","));
	return str;
}

//---------------------------------IP_mit_zehn_str---------------------------------------------------

string IP_mit_zehn_str(string str)		//IP mit 10. Herausfinden
{
	int IP_mit_zehn = str.find("10.");
	str.erase(0, str.find("10."));
	str.erase(str.find(";"));

	return str;

}

//--------------------------------Minus_doppelpunkt--------------------------------------------------

string Minus_doppelpunkt(string MAC) //Minus mit doppelpunkt austauschen
{

	for (int i = 0; i <= 4; i++)
	{
	MAC.replace(MAC.find("-"), 1, ":");
	}
	return MAC;

}
//---------------------------------------------------------------------------------------------------
//---------------------------------------------------------------------------------------------------
//---------------------------------------------------------------------------------------------------