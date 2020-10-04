#include <iostream>
#include <string>
#include <fstream>
using namespace std;
#include "Header.h"

/*Вариант №1:

Создайте простейшую иерархию классов, моделирующую информацию о группе студентов:

●	класс Student (студент):
○	Номер зачетной книжки.
○	Фамилия, имя, необязательное отчество.
○	Дата рождения.
○	Форма обучения: бюджет или контракт (чере

●	класс AcademicGroup (группа):
○	Название группы.
○	Список студентов группы.
○	Староста группы (сaptain).

Создайте текстовый файл “groups.txt”, содержащий произвольную тестовую информацию о нескольких группах студентов в следующем формате
(фамилии, имена и отчества не могут содержать символ ‘!’ ):

!GROUP KI-15-1
!STUDENT 13458 “Ivanov Ivan Ivanovich” 01/01/1998 B
!STUDENT 13459 “Petrov Petr Petrovich” 01/02/1998 С
!CAPTAIN 13458

!GROUP KI-15-2
!STUDENT 13468 “Sidorov Sidor Sidorovich” 05/03/1998 C
!STUDENT 13469 “Fedorov Fedor Fedorovich” 08/05/1998 B
!CAPTAIN 13469

Разработайте тестовую консольную программу, создающую и использующую данную модель:
●	считайте данные из файла “groups.txt”, сформируйте соответствующие объекты разработанной иерархии;
●	распечатайте количество студентов, обучающихся по бюджетной форме;
●	распечатайте количество студентов, обучающихся по контрактной форме;
●	распечатайте пары “группа фамилия” для всех студентов, родившихся 1 числа любого месяца;
●	распечатайте все данные самого старшего студента из всех групп;
●	корректно уничтожьте все созданные объекты.

*/

int main()
{
	AcademicGroup Gr;
	Gr.title;

	Student St;
	St.number;
	St.name;
	St.day;
	St.month;
	St.year;

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
			fin >> Gr.title;
			fin >> St.number;
			fin >> St.name;
			fin >> St.day;
			fin >> St.month;
			fin >> St.year;
			fin >> St.form;
			if (St.form == true)
			{
				cout << "Student on buidget:                   " << Gr.title << "   " << St.name << endl;
			}
		}
	}
		fin.close();

		fin.open(path);
		if (!fin.is_open())
		{
			cout << "ERROR!!!" << endl;
		}
		else
		{
			while (!fin.eof())
			{
				fin >> Gr.title;
				fin >> St.number;
				fin >> St.name;
				fin >> St.day;
				fin >> St.month;
				fin >> St.year;
				fin >> St.form;
				if (St.form == false)
				{
					cout << "Student on contract:                  " << Gr.title << "   " << St.name << endl;
				}
			}
		}
		fin.close();

		fin.open(path);
		if (!fin.is_open())
		{
			cout << "ERROR!!!" << endl;
		}
		else
		{
			while (!fin.eof())
			{
				fin >> Gr.title;
				fin >> St.number;
				fin >> St.name;
				fin >> St.day;
				fin >> St.month;
				fin >> St.year;
				fin >> St.form;

				if (St.day == 1)
				{
					cout << "Student who born in 1st day of month: " << St.day << ":" << St.month << ":" << St.year << "        " << St.name << endl;
				}
			}
		}
		fin.close();

		fin.open(path);
		if (!fin.is_open())
		{
			cout << "ERROR!!!" << endl;
		}
		else
		{
			while (!fin.eof())
			{
				fin >> Gr.title;
				fin >> St.number;
				fin >> St.name;
				fin >> St.day;
				fin >> St.month;
				fin >> St.year;
				fin >> St.form;
				if (St.day == 8 && St.month == 5 && St.year == 1998)
					cout << "The older student:                    " << St.day << ":" << St.month << ":" << St.year << "        " << St.name << endl;
			}
		}
	fin.close();


	system("pause");
	return 0;
}