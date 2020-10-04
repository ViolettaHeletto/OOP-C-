#include <iostream>
#include <time.h>
#include "Header.h"
using namespace std;

/*Реализуйте и верифицируйте при помощи тестовой программы класс для таймера – Timer. Должны поддерживаться следующие операции:
●	Конструктор по умолчанию.
●	Метод доступа к количеству засеченного времени.
●	Метод Reset для сброса таймера. После сброса таймер автоматически не возобновляется.
●	Метод Pause для временной остановки таймера.
●	Метод Resume для продолжения учета времени.
●	Оператор преобразования типа к clock_t – возвращает засеченное время.
●	Методы GetNumSeconds(), GetNumMinutes().
●	Перегруженные операторы + ( clock_t ), += ( clock_t ), + ( const Timer& ), += ( const Timer& ).
●	Перегруженные операторы - ( clock_t ), -= ( clock_t ), - ( const Timer& ), - ( const Timer& ).
●	Перегруженные операторы сравнения ==, !=, <, <=, >, >= .
*/

int main()
{
		cout << "Choose the function: " << endl << "1- WhatTimeIsIt" << endl
		 << "2 - Reset" << endl << "3 - Pause" << endl << "4 - Resume" << endl
		 << "5 - GetNumSeconds" << endl << "6 - GetNumMinutes" << endl<<"7-exit"<<endl;

	Timer help;
	int choice;
	int count = 0;
	int count2 = 0;
	bool exit = false;
	double Ntime = 0;
	double new_time;
	
	
	while (!exit)
	{
		cin >> choice;

		if (!cin)
		{
			cout << "Don`t right value. Please, try again.\n";
			cin.clear();
			while (cin.get() != '\n');
		}

		switch (choice)
		{
		case 1:
		{
			if (count > 0)
			{
				help.Reset();
				cout << "Time is: " <<help.WhatTimeIsIt()<< endl;

			}
			else
			if (count2 > 0)
			{
				help.Resume(new_time);
				help.Start();
			}
			else
			{
				help.Start();
				cout << "Time is: " << help.WhatTimeIsIt() << endl;
			}
			break;
		} 
		case 2:
		{
			cout<<"Reset: "<<help.Reset()<<endl;
			count++;
			break;
		}
		case 3:
		{
			new_time = (double)clock();
			std::cout << "Pause  " << help.Pause(new_time)<< std::endl;
			break;
		}
		case 4:
		{
			help.Resume(new_time);
			count2++;
			break;
		}
		case 5:
		{
			help.GetNumSeconds();
			break;
		}
		case 6:
		{
			help.GetNumMinutes();
			break;
		}
		case 7:
		{
			exit = true;
			break;
		}
		default:
			break;
		}
	}
	system("pause");
	return 0;
}