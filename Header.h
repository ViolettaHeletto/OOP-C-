#pragma once

class Culture
{
public:
	string name;
	int number_floor;
	int number_visitor;
	int People_on_floor(int number_visitors, int number_floors);
};

class Cinema : public Culture
{
public:
	string film_now;
	int number_staffMembers;
	void People_on_floor(int number_visitors, int number_floors, int number_staffMembers);
};

class Theater : public Culture
{
public:
	string perf_now;
	int number_artists;
	void People_on_floor(int number_visitors, int number_floors, int number_artists);
};

class Museum :public Culture
{
public:
	string art_now;
	int number_of_arts;
	void Arts_on_floor(int arts, int floors);
};



int Culture::People_on_floor(int people, int floors)
{
	std::cout << people / floors << std::endl;
	return 0;
}

void Cinema::People_on_floor(int visitors, int floors, int staffMembers)
{
	int people = visitors + staffMembers;
	std::cout << "People on floor in cinema: " << people / floors << std::endl;
}
void Theater::People_on_floor(int visitors, int floors, int staffMembers)
{
	int people = visitors + staffMembers;
	std::cout <<"People on floor in Theater: "<< people / floors << std::endl;
}
void Museum::Arts_on_floor(int arts, int floors)
{
	std::cout <<"Arts on floor: "<< arts / floors << std::endl;
}