#pragma once
#include <string>

class AcademicGroup
{
public:
	string title;
	string captain;
};

class Student: public AcademicGroup
{
public:
	int number;
	string name;
	int day, month, year;
	bool form;
};

void Output(string title, int number, string name, int day, int month, int year, bool form)
{
	string path = "group.txt";
	ifstream fin;
	fin.open(path);
	if (!fin.is_open())
	{
		cout << "ERROR!!!" << endl;
	}
	else
	{
		while (!fin.eof())
		{
			fin >> title;
			fin >> number;
			fin >> name;
			fin >> day;
			fin >> month;
			fin >> year;
			fin >> form;
		}
	}
}


