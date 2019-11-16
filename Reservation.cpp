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






void Reservation::getRDate(){
	
	s.getDate();
	e.getDate();
	cout << "Nombre de nuits : " << s.getNumberofdayfrom(e) << endl;
	
}

void Reservation::setRPrice(float price, float discount){
	
	if (s.getNumberofdayfrom(e) != -1){
	
	m_price_r=s.getNumberofdayfrom(e)*price*discount;
	
	}
	
	
}



float Reservation::getRPrice(){
	
	
	return m_price_r;
	
}



Reservation::Reservation(){
	
		
		  m_id_r=0;
		  m_id_h=0;
		  m_id_ch=0;
		  m_id_c=0;
		
		  m_price_r=0;
		
		  s.date();
		  e.date();
		

		
	
	
}

Reservation::Reservation(int dayS, int monthS, int yearS, int dayE, int monthE,  int yearE){
	
	s.setDate(dayS,monthS,yearS);
	e.setDate(dayE,monthE,yearE);
	
	








}



