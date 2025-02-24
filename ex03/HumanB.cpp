#include "HumanB.hpp"

HumanB::HumanB(std::string newName) : name(newName), weapon(nullptr)
{
}

HumanB::~HumanB()
{
}

void HumanB::attack()
{
	if(weapon)
		std::cout << name << " attacks with their " << (*weapon).getType() << std::endl;
	else
		std::cout << name << " attacks without a weapon" << std::endl;
}

void HumanB::setWeapon(Weapon &newWeapon)
{
	weapon = &newWeapon;
}