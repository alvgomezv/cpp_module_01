#include"Zombie.hpp"


Zombie::Zombie(void)
{
	return;
}

Zombie::Zombie(std::string name)
{
	this->_name = name;
	return;
}

Zombie::~Zombie(void)
{
	std::cout << this->_name << " destroyed" << std::endl;
	return;
}

void	Zombie::announce(void)
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie*	newZombie(std::string name)
{
	Zombie	*zombie = new Zombie(name);
	
	return zombie;
}

void	randomChump(std::string name)
{
	Zombie	zombie(name);
	
	zombie.announce();
}
