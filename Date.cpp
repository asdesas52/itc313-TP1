#include "Date.h"

void Date::setDate( int day, int month, int year){
	
	if (day >=1 && day <= 31 ) 	
		m_day=day;
		
	else 
	 cerr << "Error on day " << day << endl ;
		
	
	
	if (month >=1 && month <= 12 ) 
		m_month=month;
		
	else 
	 cerr << "Error on month " << month << endl ;
		
	
	
	if (year >= 0) 
		m_year=year;
		
	else 
	 cerr << "Error on year " << year << endl ;	
}


int Date::day(){

	return m_day;

}

int Date::month(){

	return m_month;

}

int Date::year(){

	return m_year;

}

void Date::getDate(){
	
	cout << "Date : " << m_day << " / " << m_month << " / " << m_year << endl;
	
	
}
		
