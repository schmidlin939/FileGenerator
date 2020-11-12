#pragma once

#include <fstream>
#include <iostream>

using namespace std;

class File
{
public:
	bool Create(string name)
	{
		fstream file;

		file.open(name, ios::out);

		if (!file)
		{
			cout << "Error in creating file!!! \n\n";
			return false;
		}

		cout << "File created successfully. \n\n";

		file.close();

		return true;
	}
};



