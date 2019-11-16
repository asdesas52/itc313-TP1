#include "Reservation.h"

int main()
{

	Reservation r(2, 2, 2019, 3, 2, 2019);

	r.setIdH(91);
	cout << "Id Hotel : " << r.getIdH() << endl;

	r.setIdR(1276576);
	cout << "Id Reservation : " << r.getIdR() << endl;

	r.setIdC(18767556);
	cout << "Id Client : " << r.getIdC() << endl;

	r.setIdCh(1001);
	cout << "Chambre n° : " << r.getIdCh() << endl;

	r.showRDate();

	return 0;
}
