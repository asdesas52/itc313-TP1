#include "Date.h"

int main()
{

	Date d2(1, 2, 2019);
	Date d3(3, 2, 2019);
	Date d4(1, 2, 2019);
	Date d5(1, 5, 2019);

	d2.showDate();
	d3.showDate();
	d4.getNumberofdayfrom(d5);
	d4.showDate();

	return 0;
}
