#include "Chambre.h"

void Chambre::setId(int id){
	
	m_id=id;
			
}


void Chambre::setPrice(float price){
	
	
	m_price=price;
	
	
}


void Chambre::setType(string type){
	
	
	m_type=type;
	
	
}





int Chambre::getId(){
	
	
	return m_id;
		
}

string Chambre::getType(){
	
	return m_type;
	
	
}

float Chambre::getPrice(){
	
	 return m_price;
	
}

void Chambre::showChamber(){
	cout << getId() <<"   "<< getPrice() << "   " << getType() << endl;
}

Chambre::Chambre(std::string type , float price){
	m_type=type;
	m_price=price;
	m_id=0;

}