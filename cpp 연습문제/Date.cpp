#include "stdafx.h"
#include "Date.h"
#include<iostream>
#include <string>
using namespace std;


int Date::getMonth() {
	return month;
}
int Date::getYear() {
	return year;
}
int Date::getDay() {
	return day;
}
Date::Date(int year,int month,int day)
{
	this->year = year;
	this->month = month;
	this->day = day;
}
Date::Date(char* date)
{
	string s(date);
	int findex = -1;
	int findex2 = -1;
	findex = s.find('/');
	this->year=stoi(s.substr(0, findex));
	findex2=s.find('/', findex + 1);
	this->month=stoi(s.substr(findex + 1, findex2));
	this->day = stoi(s.substr(findex2 + 1));
}


Date::~Date()
{
}
void Date::show() {
	cout << this->year << "³â " << this->month << "¿ù " << this->day << "ÀÏ " << endl;
}