#include "Hotel.h"
#include "Chambre.h"

void Hotel::setName(std::string name){
	m_name=name;
}
void Hotel::setTown(std::string Town){
	m_town=Town;
}
void Hotel::setId(int id){
	m_id = id;
}
void Hotel::setListofchamber(int number){
	m_listofchamber=number;
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
int Hotel::getListofchamber(){
	return m_listofchamber;
}

Hotel::Hotel() {
		
		setName("undefine");
		setTown("undefine");
		setId(0);
		setListofchamber(0);
}

Hotel::Hotel(std::string name , std::string Town) {
		
		setName(name);
		setTown(Town);
		setId(id);
		setListofchamber(listofchamber);
}
