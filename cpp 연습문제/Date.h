#pragma once
class Date
{
public:
	int year;
	int month;
	int day;
	int getMonth();
	int getYear();
	int getDay();
	Date(int year, int month, int day);
	Date(char* date);
	~Date();
	void show();
};

