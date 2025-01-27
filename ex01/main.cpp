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

	std::string name = "HordeMember";

	newZombieHorde=zombieHorde(3, name);
	delete[] newZombieHorde;
}