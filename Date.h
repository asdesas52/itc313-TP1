#include <iostream>
using namespace std;

#ifndef DATE_H
#define DATE_H

class Date
{

private:
	int m_day;
	int m_month;
	int m_year;
	bool m_validedate;

public:
	int setDate(int day, int month, int year);
	int day();
	int month();
	int year();
	void showDate();
	bool getValidedate();
	int getNumberofdayfrom(Date target);
	Date();
	Date(int day, int month, int year);
};
int getmonthlength(int month, int year);

#endif
