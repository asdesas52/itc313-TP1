#ifndef Hotel_H
#define Hotel_H
#include <string>
#include <iostream>

class Hotel{

	private:
		std::string m_name;
		std::string m_town;
		int m_id;
		int m_listofchamber;

	public:
		void setName(std::string name);
		void setTown(std::string town);
		void setId(int id); //verification multiple ID
		void setListofchamber(int number);
		std::string getName();
		std::string getTown();
		int getId();
		int getListofchamber();
		Hotel();
		Hotel(std::string name, std::string town,int id,int listofchamber);


};

#endif