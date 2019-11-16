#ifndef Hotel_H
#define Hotel_H
#include <string>
#include <iostream>
#include "Chambre.h"
#include <vector>

class Hotel
{

private:
	std::vector<Chambre> m_listofchamber;
	std::string m_name;
	std::string m_town;
	int m_id;
	int m_cursor;

public:
	void setName(std::string name);
	void setTown(std::string town);
	void setId(int id); //verification multiple ID
	void setListofchamber(std::string type, float price, int number = 1);
	std::string getName();
	std::string getTown();
	int getId();
	std::vector<Chambre> getListofchamber();
	void showHotel();
	Hotel(std::string name = "undefine", std::string town = "undefine");
};

#endif