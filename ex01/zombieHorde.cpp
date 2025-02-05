#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name)
{
	if (N < 1)
	{
		std::cout << "There should be at least 1 Zombie in the horde" << std::endl;
		return (NULL);
	}
	Zombie *zombiehorde;
	zombiehorde = new Zombie[N];

	for (int i = 0; i < N; i++)
	{
		zombiehorde[i].setName(name);
	}
    
	return (zombiehorde);
}