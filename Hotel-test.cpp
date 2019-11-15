#include "Hotel.h"

int main(){

Hotel hotel("Ibis","Paris");
hotel.setListofchamber("single",100,3);
hotel.setListofchamber("double",125,5);
hotel.setListofchamber("suite",210,3);
hotel.setListofchamber("single",100);

<<<<<<< HEAD
std::cout << hotel.getName() << " " << hotel.getTown() <<" "<< hotel.getId()<< " " <<std::endl;
=======
hotel.showHotel();
>>>>>>> e452f6da6737e6e4f7c8286df3696e2c6f26b01b

	return 0;
}
