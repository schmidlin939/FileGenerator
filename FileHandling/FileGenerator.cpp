#include <iostream>
#include "File.h"

using namespace std;

int main()
{
	string name;
	File file;
	bool x = true;
	
	while (x)
	{
		cout << "Enter a name for the File: \n";

		cin >> name;

		x = file.Create(name);
	}
}
