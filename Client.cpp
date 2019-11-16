#include "Client.h"

void Client::setName(std::string name)
{
	m_name = name;
}
void Client::setFirstname(std::string firstname)
{
	m_firstname = firstname;
}
void Client::setId(int id)
{
	m_id = id;
}
void Client::setPastreservation(int number)
{
	m_pastreservation = number;
}

std::string Client::getName() const
{
	return m_name;
}
std::string Client::getFirstname() const
{
	return m_firstname;
}
int Client::getId() const
{
	return m_id;
}
int Client::getPastreservation() const
{
	return m_pastreservation;
}

void Client::showClient() const
{
	std::cout << " nom : " << m_firstname << "	 prenom : " << m_name << "	 id : " << m_id << "	 reservation passée : " << m_pastreservation << std::endl;
}

Client::Client(std::string name, std::string firstname)
{

	setName(name);
	setFirstname(firstname);
	setId(0);
	setPastreservation(0);
}