#include "Client.h"

void Client::setNom(std::string nom){
	m_nom=nom;
}
void Client::setPrenom(std::string prenom){
	m_prenom=prenom;
}
void Client::setId(int id){
	m_id = id;
}
void Client::setPastreservation(int number){
	m_pastreservation=number;
}

std::string Client::getNom(){
	return m_nom;
}
std::string Client::getPrenom(){
	return m_prenom;
}
int Client::getId(){
	return m_id;
}
int Client::getPastreservation(){
	return m_pastreservation;
}

Client::Client() {
		
		setNom("undefine");
		setPrenom("undefine");
		setId(0);
		setPastreservation(0);
}

Client::Client(std::string nom , std::string prenom , int id , int pastreservation) {
		
		setNom(nom);
		setPrenom(prenom);
		setId(id);
		setPastreservation(pastreservation);
}