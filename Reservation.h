#include <iostream>
#include <string>
#include "Date.h"


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
		
		
		
		Date s, e;
		
		
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
		
		
	
		
		
		
		void setRdate(Date s,Date e);
		void getRDate();
		Reservation();
		Reservation(int dayS, int monthS, int yearS, int dayE, int monthE,  int yearE);
};

#endif
