#include"Weapon.hpp"
#include"HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _weapon(weapon)
{
	// Reference members must be initialized in the constructor´s member initializer list, not in the body
	this->_name = name;
	return;
}

HumanA::~HumanA(void)
{
	return;
}

void	HumanA::attack(void)
{
	std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
}