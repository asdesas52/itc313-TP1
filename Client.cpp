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

std::string Client::getName()
{
	return m_name;
}
std::string Client::getFirstname()
{
	return m_firstname;
}
int Client::getId()
{
	return m_id;
}
int Client::getPastreservation()
{
	return m_pastreservation;
}

Client::Client(std::string name, std::string firstname)
{

	setName(name);
	setFirstname(firstname);
	setId(0);
	setPastreservation(0);
}