#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

void	leaks(void)
{
	system("leaks unnecessaryViolence");
}

int	main(int argc, char **argv)
{
	// atexit(leaks);
	(void)argc;
	(void)argv;

	{
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	{
		Weapon club = Weapon("crude spiked club");
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}
	{
		HumanB jim("Jim");
		jim.attack();
	}
	return (0);
}