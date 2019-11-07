#include "Client.h"

int main(){

Client cli("jhon","gerald",320,0);

std::cout << cli.getNom() << " " << cli.getPrenom() <<" "<< cli.getId()<< " " << cli.getPastreservation()<<std::endl;

	return 0;
}