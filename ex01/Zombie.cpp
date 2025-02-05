#include "Zombie.hpp"

Zombie::Zombie(std::string &name) : name(name)
{
}

Zombie::~Zombie()
{
}

void Zombie::setName(std::string name) {
	this->name = (name);
}

void Zombie::announce()
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}