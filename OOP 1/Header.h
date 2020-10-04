#pragma once
class Timer
{
private:
	double time = (double)clock();
public:
	const bool operator  == (Timer & s);
	const bool operator  != (Timer & d);

	void Start();
	double WhatTimeIsIt();
	double Reset();
	double Pause(double);
	void Resume(double);
	void GetNumSeconds();
	void GetNumMinutes();

};

const bool Timer::operator  == (Timer & s)
{
	return  time == s.WhatTimeIsIt();
}

const bool  Timer::  operator != (Timer & d) 
{  // ����������� - ��� ��������� ���������
return !(* this  == d);
}

//////////////////////////////////////////////////
inline void Timer::Start()
{
	time = (double)clock();
}

inline double Timer::WhatTimeIsIt()//1
{
	return time;
};

inline double Timer::Reset() //����� ������� 
{
	time = 0;
	return time;
};

inline double Timer::Pause(double new_time)//��������� ������� 
{
	time = new_time - (new_time - time);
	return time;
};

inline void Timer::Resume(double new_time)//����������� ����� ������� 
{
	std::cout << "Resume:  " << new_time - (new_time - time) << std::endl;
};

inline void Timer::GetNumSeconds()//�������������� � �������
{
	double time_in_sec = time / 1000;
	std::cout << "Time in seconds is: " << time_in_sec << std::endl;
};


inline void Timer::GetNumMinutes()//�������������� � ������
{
	double time_in_min = time / 60000;
	std::cout << "Time in minutes is: " << time_in_min << std::endl;
};