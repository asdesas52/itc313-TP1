#include "Date.h"


int main(){
	
	
	Date d1;
	Date d2(1,1,2012);
	Date d3(31,1,2012);
	Date d4(1,11,2019);
	Date d5(30,11,2019);
	
	d1.getDate();
	d2.getDate();
	d3.getDate();
	d4.getDate();
	d5.getDate();

	std::cout << d2.getNumberofdayfrom(d3) << "  main" << std::endl;
	std::cout <<d4.getNumberofdayfrom(d5)<< "  main"<< std::endl;
	return 0;
}
