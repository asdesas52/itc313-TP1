#include "Hotel.h"

int main(){

Hotel hotel("Ibis","Paris",320,30);

std::cout << hotel.getName() << " " << hotel.getTown() <<" "<< hotel.getId()<< " " << hotel.getListofchamber()<<std::endl;

	return 0;
}
