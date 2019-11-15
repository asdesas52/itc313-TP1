#include "Hotel.h"

int main(){

Hotel hotel("Ibis","Paris");
hotel.setListofchamber("single",100,3);
hotel.setListofchamber("double",125,5);
hotel.setListofchamber("suite",210,3);
hotel.setListofchamber("single",100);

hotel.showHotel();

	return 0;
}
