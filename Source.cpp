#include <iostream>
#include <string>
using namespace std;
#include "Header.h"

/*5.Опишите базовый класс учреждений культуры и производные: 
классы кинотеатров, домов культуры.*/

int main()
{
	Theater Th;
	Th.number_visitor = 60;
	Th.number_floor = 4;
	Th.number_artists = 30;
	Th.People_on_floor(Th.number_visitor, Th.number_floor, Th.number_artists);

	Cinema Ci;
	Ci.number_visitor= 100;
	Ci.number_floor = 3;
	Ci.number_staffMembers = 20;
	Ci.People_on_floor(Ci.number_visitor, Ci.number_floor, Ci.number_staffMembers);
	
	Museum Mu;
	Mu.number_of_arts= 5000;
	Mu.number_floor = 5;
	Mu.Arts_on_floor(Mu.number_of_arts, Mu.number_floor);
	
	system ("pause");
	return 0;
}