#include "Zombie.hpp"

void	leaks(void)
{
	system("leaks zombieHorde");
}

int	main(int argc, char **argv)
{
	// atexit(leaks);
	(void)argc;
	(void)argv;
	Zombie *newZombieHorde;

	int hordeSize = 5;
	std::string name = "HordeMemberBoo";

	newZombieHorde = zombieHorde(hordeSize, name);
	for (int i = 0; i < hordeSize; ++i)
		newZombieHorde[i].announce();
	delete[] newZombieHorde;
	return (0);
}