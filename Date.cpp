#include "Date.h"

int getmonthlength(int month, int year)
{
	int leapyear = 0;
	if (year % 4 == 0)
	{
		leapyear = 1;
	}
	if (month >= 1 && month <= 12 && year > -1)
		switch (month) //fonction month length
		{
		case 1:
			return 31;
		case 2:
			return (28 + leapyear);
		case 3:
			return 31;
		case 4:
			return 30;
		case 5:
			return 31;
		case 6:
			return 30;
		case 7:
			return 31;
		case 8:
			return 31;
		case 9:
			return 30;
		case 10:
			return 31;
		case 11:
			return 30;
		case 12:
			return 31;
		}
	else
		return -1;

	return 0;
}

int Date::setDate(int day, int month, int year)
{

	int dayinthemonth = getmonthlength(month, year);

	if ((dayinthemonth != -1))
	{
		m_month = month;
	}
	else
	{
		m_validedate = false;
		m_month = month;
		m_day = day;
		m_year = year;
		return -1;
	}

	if ((day >= 1) && (day <= dayinthemonth))
	{
		m_day = day;
	}
	else
	{
		m_validedate = false;
		m_month = month;
		m_day = day;
		m_year = year;
		return -1;
	}

	if (year >= 0)
	{
		m_year = year;
	}
	else
	{
		m_month = month;
		m_day = day;
		m_year = year;
		m_validedate = false;
		return -1;
	}
	m_validedate = true;
	return 0;
}

int Date::day()
{

	return m_day;
}

int Date::month()
{

	return m_month;
}

int Date::year()
{

	return m_year;
}

void Date::showDate()
{

	if (m_validedate)
	{
		cout << "Date : " << m_day << " / " << m_month << " / " << m_year << endl;
	}
	else
	{
		cout << "	INVALIDE DATE	Date : " << m_day << " / " << m_month << " / " << m_year << endl;
	}
}

bool Date::getValidedate()
{
	return m_validedate;
}
int Date::getNumberofdayfrom(Date target)
{
	int day = m_day;
	int month = m_month;
	int year = m_year;
	if (m_validedate && target.m_validedate && ((m_year < target.m_year) || (m_year == target.m_year && m_month < target.m_month) || (m_year == target.m_year && m_month == target.m_month && m_day <= target.m_day)))
	{
		int numberofday = 0;

		for (numberofday = 0; ((day != target.m_day) || (month != target.m_month) || (year != target.m_year)); numberofday++)
		{ //on va avancer de jour en jour

			day++;
			if (day == (getmonthlength(month, year) + 1))
			{
				day = 1;
				month++;
			}

			if (month == 12 + 1)
			{
				month = 1;
				year++;
			}
		}
		return numberofday + 1;
	}
	else
	{
		return -1;
	}
}

Date::Date(int day, int month, int year)
{

	if (setDate(day, month, year) == -1)
	{
		cerr << "error on the date" << endl;
	}
}

Date::Date()
{
	m_day = 0;
	m_month = 0;
	m_year = 0;
	m_validedate = false;
}
