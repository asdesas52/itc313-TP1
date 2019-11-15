#include <iostream>
#include <string>


using namespace std;



#ifndef RESERVATION_H
#define RESERVATION_H

class Reservation {
	
	private :
		
		
		int m_id_r;
		int m_id_h;
		int m_id_ch;
		int m_id_c;
		
		float m_price_r;
		
		int m_day_s;
		int m_month_s;
		int m_year_s;
		
		int m_day_e;
		int m_month_e;
		int m_year_e;
		
		int m_night;
		
		
	public :
	
		
		void setIdR(int idR);
		int getIdR();
		
		void setIdH(int idH);
		int getIdH();
		
		void setIdC(int idC);
		int getIdC();
		
		void setIdCh(int idCh);
		int getIdCh();
		
		
		void setRPrice(float price, float discount);
		float  getRPrice();
		
		
		int day_s();
		int month_s();
		int year_s();
		
		
		int day_e();
		int month_e();
		int year_e();
		
		int night();
		
		void setRDate(int dayS, int monthS, int yearS, int dayE, int monthE, int yearE);
		void getRDate();
		Reservation();
};

#endif
