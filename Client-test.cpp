#include "Client.h"

int main()
{

	Client cli("jhon", "gerald");

	std::cout << cli.getName() << " " << cli.getFirstname() << " " << cli.getId() << " " << cli.getPastreservation() << std::endl;

	return 0;
}