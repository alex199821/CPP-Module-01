#include "Zombie.hpp"

Zombie	*newZombie(const std::string& name)
{
	Zombie *newZombie;

	newZombie = new Zombie(name);
	return (newZombie);
};
