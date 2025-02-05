#include "Zombie.hpp"

void	leaks(void)
{
	system("leaks zombie");
}

void Zombie::announce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

int	main(int argc, char **argv)
{
	// atexit(leaks);
	(void)argc;
	(void)argv;
	Zombie *zombie1;

	std::string name = "Sasha";
	zombie1 = newZombie(name);
	zombie1->announce();
	randomChump("RandomChump");

	delete zombie1;
}