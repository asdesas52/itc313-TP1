


#ifndef CLIENT_H
#define CLIENT_H
#include <string>
#include <iostream>

class Client{

	private:
		std::string m_nom;
		std::string m_prenom;
		int m_id;
		int m_pastreservation;

	public:
		void setNom(std::string nom);
		void setPrenom(std::string prenom);
		void setId(int id); //verification multiple ID
		void setPastreservation(int number);
		std::string getNom();
		std::string getPrenom();
		int getId();
		int getPastreservation();
		Client();
		Client(std::string nom, std::string prenom,int id,int m_pastreservation);


};

#endif