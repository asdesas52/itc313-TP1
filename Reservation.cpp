#include "Reservation.h"


void Reservation::setIdR(int idR){
	
	m_id_r=idR;
	
	
	
}

void Reservation::setIdC(int idC){
	
	
	m_id_c=idC;
	
	
}

void Reservation::setIdCh(int idCh){
	
	
	m_id_ch=idCh;
	
	
}

void Reservation::setIdH(int idH){
	
	
	m_id_h=idH;
	
	
}


int Reservation::getIdR(){
	
	
	return m_id_r;
		
}


int Reservation::getIdH(){
	
	
	return m_id_h;
		
}



int Reservation::getIdCh(){
	
	
	return m_id_ch;
		
}


int Reservation::getIdC(){
	
	
	return m_id_c;
		
}


void Reservation::setRDate(int dayS, int monthS, int yearS, int dayE, int monthE, int yearE){
	
	if (yearS>=0 && yearE>=0 && yearS<=yearE){
		if (monthS>=1 && monthE>=1 && monthS<=12 && monthE<=12 && monthS<=monthE){
			if (dayS>=1 && dayE>=1 && dayS<=31 && dayE<=31 && dayS<=dayE){
				
				m_day_s=dayS;
				m_day_e=dayE;
				m_month_s=monthS;
				m_month_e=monthE;
				m_year_s=yearS;
				m_year_e=yearE;
			}
			
			else {
				cerr << "Error on day ! " << endl; 
				
			}
			
		}
		
		else {
			cerr << "Error on month ! " << endl; 
			}
		}
		else {
			cerr << "Error on year ! " << endl; 
			}
			
	if (dayS>=1 && dayE>=1 && dayS<=31 && dayE<=31 && monthS==monthE && yearE==yearS && dayS<dayE){
		m_night=dayE-dayS;
	}
	
	else if (monthS>=1 && monthE>=1 && monthS<=12 && monthE<=12 && yearE==yearS && monthS<monthE ){
		m_night=31-dayS+(monthE-monthS+1)*31+dayE;
	}
	
	else if (yearS>=0 && yearE>=0 && (yearE=!yearS) && yearS<yearE){
		m_night=31-dayS+(12-monthS+monthE+1)*31+dayE;
	}
			
		
			
			
			
			
	
}


void Reservation::getRDate(){
	
	cout << "Date Debut : " << m_day_s << " / " << m_month_s << " / " << m_year_s << endl;
	cout << "Date Fin   : " << m_day_e << " / " << m_month_e << " / " << m_year_e << endl;
	cout << "Nombre de nuits : " << m_night << endl;
	
	
	
	
	
	
}

void Reservation::setRPrice(float price, float discount){
	
	
	
	m_price_r=m_night*price*discount;
	

	
	
}



float Reservation::getRPrice(){
	
	
	return m_price_r;
	
}

int Reservation::day_s(){
	
	return m_day_s;
}

int Reservation::month_s(){
	
	return m_month_s;
}

int Reservation::year_s(){
	
	return m_year_s;
}


int Reservation::day_e(){
	
	return m_day_e;
}

int Reservation::month_e(){
	
	return m_month_e;
}

int Reservation::year_e(){
	
	return m_year_e;
}



int Reservation::night(){
	
	return m_night;
}



Reservation::Reservation(){
	
		
		  m_id_r=0;
		  m_id_h=0;
		  m_id_ch=0;
		  m_id_c=0;
		
		  m_price_r=0;
		
		  m_day_s=0;
		  m_month_s=0;
		  m_year_s=0;
		
		  m_day_e=0;
		  m_month_e=0;
		  m_year_e=0;
		
		  m_night=0;
		
	
	
}












