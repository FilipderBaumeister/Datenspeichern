# Data Storage in C++

The provided C++ code snippets demonstrate how to store data in a file.

## Code Snippet 1

This code snippet prompts the user for input, which is then written to a file named "Mess-Daten.csv". The file is opened in output mode (`ios::out`), and the locale is set to German to accommodate the formatting requirements of German Excel.

```cpp
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	string eingabe;
	ofstream out("Mess-Daten.csv", ios::out);
	cout << "Eingegebener Wert: ";
	cin >> eingabe;
	out.imbue(std::locale("German")); // für die deutsche Version von Excel
	out << eingabe << endl;
	out.close();

	return 0;
}
```

## Code Snippet 2

This code snippet demonstrates how to append user input to a file named "Datei.csv" and then read the data back from the file. The file is opened in append mode (`ios::app`), allowing new data to be added to the end of the file without overwriting existing data.

```cpp
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

	return 0;
}
```

These code snippets provide a basic introduction to data storage in C++. They demonstrate how to write user input to a file and read data from a file. This is a fundamental aspect of many applications that require data persistence.^[fm]^
