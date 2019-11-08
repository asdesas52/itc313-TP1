


#ifndef CLIENT_H
#define CLIENT_H
#include <string>
#include <iostream>

class Client{

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
		std::string getName();
		std::string getFirstname();
		int getId();
		int getPastreservation();
		Client();
		Client(std::string name, std::string firstname,int id,int pastreservation);


};

#endif