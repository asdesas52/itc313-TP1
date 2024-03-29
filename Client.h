

#ifndef CLIENT_H
#define CLIENT_H
#include <string>
#include <iostream>

class Client
{

private:
	std::string m_name;
	std::string m_firstname;
	int m_id;
	int m_pastreservation;

public:
	void setName(std::string nom);
	void setFirstname(std::string firstname);
	void setId(int id); //verification multiple ID
	void setPastreservation(int number);
	std::string getName() const;
	std::string getFirstname() const;
	int getId() const;
	int getPastreservation() const;
	void showClient() const;
	Client(std::string name = "undefine", std::string firstname = "undefine");
};

#endif