#include "Weapon.hpp"

Weapon::Weapon()
{
}

Weapon::Weapon(std::string type)
{
	setType(type);
}

std::string Weapon::getType() const
{
	return (type);
}

void Weapon::setType(std::string newType)
{
	type = newType;
}

Weapon::~Weapon()
{
}