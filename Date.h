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
	void getDate();
	bool getValidedate();
	int getNumberofdayfrom(Date target);
	Date(int day = 0, int month = 0, int year = 0);
};
int getmonthlength(int month, int year);

#endif
