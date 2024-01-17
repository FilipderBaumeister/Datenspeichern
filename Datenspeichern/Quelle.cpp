//#include <iostream>
//#include <fstream>
//
//
//
//
//
//using namespace std;
//
//
//int main()
//{
//	string eingabe;
//	
//	
//	eingabe = ios::out;
//	ofstream out("Mess-Daten.csv", ios::out);
//	cout << "Eingegebener Wert: ";
//	cin >> eingabe;
//	out.imbue(std::locale("German")); // für die deutsche Version von Excel
//	
//	out.close();
//
//	return 0;
//
//}

#include <iostream>
#include <fstream>
#include<string>
#include <iomanip>

using namespace std;


int main()
{
	string name;
	ofstream outdata;
	ifstream indata;

	outdata.open("Datei.csv", ios::app);
	cout << "Eingabe: ";
	cin >> name;
	outdata << name << endl;

	indata.open("Datei.csv");
	string cell1;

	indata >> cell1;

	cout << cell1 << "\n\n";

	//system("pause");
	return 0;
}