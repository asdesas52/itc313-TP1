#include "Hotel.h"
#include "Chambre.h"
#include "Date.h"
#include "Client.h"
#include "Reservation.h"
#include <array>

int main()
{
	std::array<Client, 10> arraycli;
	arraycli[0].showClient();

	Hotel test("Le Bellagio", "Los Angeles");
	test.setId(2);
	test.setListofchamber("single", 100, 3);
	test.setListofchamber("double", 125, 5);
	test.setListofchamber("suite", 210, 3);
	test.showHotel();

	return 0;
}
