#include <iostream>
#include <string>
#include "Date.h"

using namespace std;

#ifndef RESERVATION_H
#define RESERVATION_H

class Reservation
{

private:
	int m_id_r;
	int m_id_h;
	int m_id_ch;
	int m_id_c;
	int m_night;
	float m_price_r;
	bool m_validereservation;

	Date m_s, m_e;

public:
	void setIdR(int idR);
	int getIdR();

	void setIdH(int idH);
	int getIdH();

	void setIdC(int idC);
	int getIdC();

	void setIdCh(int idCh);
	int getIdCh();

	void setRPrice(float price, float discount);
	float getRPrice();

	void setRDate(int dayS, int monthS, int yearS, int dayE, int monthE, int yearE);
	void showRDate();

	Reservation(int dayS = 0, int monthS = 0, int yearS = 0, int dayE = 0, int monthE = 0, int yearE = 0);
};

#endif
