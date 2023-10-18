#include "Zombie.hpp"


int main(void)
{
	Zombie	*zombie1;
	
	zombie1 = newZombie("pepe");
	zombie1->announce();
	randomChump("juan");
	delete(zombie1);
}