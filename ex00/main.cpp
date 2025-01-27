#include "Zombie.hpp"

void	leaks(void)
{
	system("leaks zombie");
}

void Zombie::announce()
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

int	main(int argc, char **argv)
{
    // atexit(leaks);
	Zombie *zombie1;

	zombie1 = newZombie("Sasha");
	zombie1->announce();
    randomChump("RandomChump");

	delete zombie1;

	(void)argc;
	(void)argv;
}