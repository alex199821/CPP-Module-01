#include "Zombie.hpp"

Zombie::Zombie(const std::string &name) : name(name)
{
	std::cout << "Zombie " << name << " is created." << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "Zombie " << name << " is destroyed." << std::endl;
}