#include "Chambre.h"
using namespace std;

int main(){
	
	
	Chambre chbr;
	chbr.setId(1001);
	cout << chbr.getId() << endl;
	
	chbr.setPrice(180.0);
	cout << chbr.getPrice() << endl;
	
	chbr.setType("Single");
	cout << chbr.getType() << endl;
	
	
	return 0;
}
