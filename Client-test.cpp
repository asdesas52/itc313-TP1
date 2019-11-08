#include "Client.h"

int main(){

Client cli("jhon","gerald",320,0);

std::cout << cli.getName() << " " << cli.getFirstname() <<" "<< cli.getId()<< " " << cli.getPastreservation()<<std::endl;

	return 0;
}