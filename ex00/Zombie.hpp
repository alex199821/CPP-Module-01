#include <cctype>
#include <iomanip>
#include <ios>
#include <iostream>

int		main(int argc, char **argv);

class Zombie
{
  private:
	std::string name;

  public:
	Zombie(const std::string &name);
	~Zombie();
	void announce();
};

Zombie	*newZombie(const std::string &name);
void	randomChump(std::string name);