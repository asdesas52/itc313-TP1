#include "Hotel.h"


void Hotel::setName(std::string name){
	m_name=name;
}
void Hotel::setTown(std::string Town){
	m_town=Town;
}
void Hotel::setId(int id){
	m_id = id;
}
void Hotel::setListofchamber(std::string type , float price ,int number){
	for (int i=0 ; i<number;i++){
		m_listofchamber.push_back(Chambre(type , price));
		m_listofchamber[(m_listofchamber.size()-1)].setId((m_listofchamber.size()));//offset de 1 car 0 reservé pour la non initialisation
	}
}

std::string Hotel::getName(){
	return m_name;
}
std::string Hotel::getTown(){
	return m_town;
}
int Hotel::getId(){
	return m_id;
}
std::vector<Chambre> Hotel::getListofchamber(){
	return m_listofchamber;
}

void Hotel::showHotel(){
	std::cout << getName() << " " << getTown() <<" "<< getId()<<std::endl;
	for (unsigned int i =0 ; i < m_listofchamber.size();i++){
		m_listofchamber[i].showChamber();
	}



}

Hotel::Hotel() {
		setName("name");
		setTown("Town");
		setId(0);
		m_cursor=0;

}

Hotel::Hotel(std::string name , std::string Town) {
		setName(name);
		setTown(Town);
		setId(0);
		m_cursor=0;

}