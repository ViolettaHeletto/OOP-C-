#pragma once
class Timer
{
private:
	double time = (double) clock();
public:
	const bool operator ​ == (const Timer & s);

	void Start();
	double WhatTimeIsIt();
	double Reset();
	double Pause(double);
	void Resume(double);
	void GetNumSeconds();
	void GetNumMinutes();
	
}; 

const bool Timer::operator ​ == (const Timer & s)
{
	return​ this->time == s.WhatTimeIsIt();
}

inline void Timer::Start()
{
	time = (double)clock();
}

inline double Timer::WhatTimeIsIt()//1
{
	return time;
};

inline double Timer:: Reset() //сброс таймера 2
{
	time = 0;
	return time;
};

inline double Timer::Pause(double new_time)//остановка таймера 3
{
	time = new_time - (new_time - time);
	return time;
};

inline void Timer::Resume(double new_time)//продолжение учета времени 4
{
	std::cout <<"Resume:  "<< new_time - (new_time - time) << std::endl;
};

inline void Timer::GetNumSeconds()//преобразования типа к clock_t 5
{
	double time_in_sec = time / 1000;
	std::cout << "Time in seconds is: " << time_in_sec << std::endl;
};

inline void Timer::GetNumMinutes()//-//- 6
{
	double time_in_min = time / 60000;
	std::cout << "Time in minutes is: " << time_in_min << std::endl;
};