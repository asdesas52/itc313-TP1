#include "Reservation.h"

int main(){
	
	
	Reservation r;
	
	r.setIdH(91);
	cout << "Id Hotel : " << r.getIdH() << endl;
	
	r.setIdR(1276576);
	cout << "Id Reservation : " << r.getIdR() << endl;
	
	r.setIdC(18767556);
	cout << "Id Client : " << r.getIdC() << endl;
	
	r.setIdCh(1001);
	cout << "Chambre n° : " << r.getIdCh() << endl;
	
	r.setRDate(-1,2,19,1,6,19);

	r.getRDate();
	
	
	
	
	
	
	
	
	
	return 0;	
}
