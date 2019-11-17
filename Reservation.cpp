#include "Reservation.h"

void Reservation::setIdR(int idR)
{
	m_id_r = idR;
}

void Reservation::setIdC(int idC)
{
	m_id_c = idC;
}

void Reservation::setIdCh(int idCh)
{
	m_id_ch = idCh;
}

void Reservation::setIdH(int idH)
{
	m_id_h = idH;
}

int Reservation::getIdR()
{
	return m_id_r;
}

int Reservation::getIdH()
{
	return m_id_h;
}

int Reservation::getIdCh()
{
	return m_id_ch;
}

int Reservation::getIdC()
{
	return m_id_c;
}

void Reservation::showRDate()
{
	if (m_validereservation == false)
	{
		cerr << "INVALIDE RESERVATION" << endl;
	}
	m_s.showDate();
	m_e.showDate();
	cerr << "Nombre de nuits : " << m_night << endl;
}

void Reservation::setRPrice(float price, float discount)
{

	m_price_r = m_night * price * discount;
}

float Reservation::getRPrice()
{

	return m_price_r;
}

bool Reservation::getValidation()
{
	return m_validereservation;
}

Reservation::Reservation(int dayS, int monthS, int yearS, int dayE, int monthE, int yearE)
{

	m_id_r = 0;
	m_id_h = 0;
	m_id_ch = 0;
	m_id_c = 0;
	m_price_r = 0;
	m_validereservation = true;

	if (m_s.setDate(dayS, monthS, yearS) == -1)
	{
		m_validereservation = false;
		//cerr << "invalide reservation date" << endl;
	}
	if (m_e.setDate(dayE, monthE, yearE) == -1)
	{
		m_validereservation = false;
		//cerr << "invalide reservation date" << endl;
	}

	if (m_s.getNumberofdayfrom(m_e) >= 2)
	{
		m_night = m_s.getNumberofdayfrom(m_e) - 1;
	}
	else
	{
		m_validereservation = false;
		m_night = 0;
		//cerr << "invalide reservation periode" << endl;
	}
}

void Reservation::setRDate(int dayS, int monthS, int yearS, int dayE, int monthE, int yearE)
{
	m_validereservation = true;

	if (m_s.setDate(dayS, monthS, yearS) == -1)
	{
		m_validereservation = false;
		cerr << "invalide reservation date" << endl;
	}
	if (m_e.setDate(dayE, monthE, yearE) == -1)
	{
		m_validereservation = false;
		cerr << "invalide reservation date" << endl;
	}

	if (m_s.getNumberofdayfrom(m_e) >= 2)
	{
		m_night = m_s.getNumberofdayfrom(m_e) - 1;
	}
	else
	{
		m_validereservation = false;
		m_night = 0;
		cerr << "invalide reservation periode" << endl;
	}
}