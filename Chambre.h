#include <iostream>
#include <string>

using namespace std;

#ifndef CHAMBRE_H
#define CHAMBRE_H

class Chambre
{

private:
	int m_id;
	string m_type;
	float m_price;

public:
	void setId(int id);
	int getId();
	void setType(string type);
	string getType();
	void setPrice(float price);
	float getPrice();
	void showChamber();

	Chambre(string type = "undefine", float price = 0);
};

#endif
