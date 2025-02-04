#include "Zombie.hpp"

void	leaks(void)
{
	system("leaks zombieHorde");
}

void Zombie::announce()
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

int	main(int argc, char **argv)
{
	// atexit(leaks);
	(void)argc;
	(void)argv;
	Zombie *newZombieHorde;

	int hordeSize = 5;
	std::string name = "HordeMember";

	newZombieHorde = zombieHorde(hordeSize, name);
	for (int i = 0; i < hordeSize; ++i)
		newZombieHorde[i].announce();
	delete[] newZombieHorde;
	return (0);
}