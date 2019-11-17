#include "Hotel.h"
#include "Chambre.h"
#include "Date.h"
#include "Client.h"
#include "Reservation.h"
#include <array>

std::array<Client, 10> creationclient()
{
	std::array<Client, 10> arraycli;
	arraycli[0] = Client("Marshall", "Jhon");
	arraycli[0].setId(1);
	arraycli[0].setPastreservation(0);

	arraycli[1] = Client("Thomas", "Jhon");
	arraycli[1].setId(1);
	arraycli[1].setPastreservation(0);

	arraycli[2] = Client("Smith", "Thomas");
	arraycli[2].setId(2);
	arraycli[2].setPastreservation(0);

	arraycli[2] = Client("Smith", "Jhon");
	arraycli[2].setId(3);
	arraycli[2].setPastreservation(10);

	arraycli[3] = Client("Martin", "Hugo");
	arraycli[3].setId(4);
	arraycli[3].setPastreservation(2);

	arraycli[4] = Client("Achiropita", "Hugo");
	arraycli[4].setId(5);
	arraycli[4].setPastreservation(23);

	arraycli[5] = Client("Achiropita", "Marlene");
	arraycli[5].setId(6);
	arraycli[5].setPastreservation(0);

	arraycli[6] = Client("Roibeard", "Noora");
	arraycli[6].setId(7);
	arraycli[6].setPastreservation(0);

	arraycli[7] = Client("Noora", "Achiropita");
	arraycli[7].setId(8);
	arraycli[7].setPastreservation(0);

	arraycli[8] = Client("Rois", "Roibeard");
	arraycli[8].setId(9);
	arraycli[8].setPastreservation(80);

	arraycli[9] = Client("Rois", "Thomas");
	arraycli[9].setId(10);
	arraycli[9].setPastreservation(0);

	return arraycli;
}

void showClientArray(std::array<Client, 10> arraycli)
{
	for (unsigned int i = 0; i < arraycli.size(); i++)
	{
		arraycli[i].showClient();
	}
}

Reservation manualReservation()
{
	int dayS, dayE, monthS, monthE, yearS, yearE;
	Reservation reservation;
	while (reservation.getValidation() == false)
	{
		std::cout << "Jour de debut " << std::endl;
		std::cin >> dayS;
		std::cout << "Mois de debut " << std::endl;
		std::cin >> monthS;
		std::cout << "Annee de debut " << std::endl;
		std::cin >> yearS;

		std::cout << "Jour de fin " << std::endl;
		std::cin >> dayE;
		std::cout << "Mois de fin " << std::endl;
		std::cin >> monthE;
		std::cout << "Annee de fin " << std::endl;
		std::cin >> yearE;
		std::cout << "" << std::endl;
		reservation = Reservation(dayS, monthS, yearS, dayE, monthE, yearE);

		if (reservation.getValidation() == false)
		{
			std::cout << "Date de validation incorrecte veuiller la reentree " << std::endl;
		}
	}

	return reservation;
}

std::string askchamber()
{
	std::string chambertype = "";
	std::cout << "Veuiller entre un type de chambre à reserver" << std::endl;
	std::cin >> chambertype;
	return chambertype;
}

int main()
{
	std::array<Client, 10> arraycli = creationclient();
	std::vector<Reservation> vectreservation;
	showClientArray(arraycli);

	Hotel test("Le Bellagio", "Los Angeles");
	test.setId(1);
	test.setListofchamber("single", 100, 3);
	test.setListofchamber("double", 125, 5);
	test.setListofchamber("suite", 210, 3);
	test.showHotel();

	vectreservation.push_back(manualReservation());
	vectreservation[0].showRDate();
	vectreservation[0].setIdH(1);

	return 0;
}
