#include <cctype>
#include <iomanip>
#include <ios>
#include <iostream>
#include <sstream>
#include <string>

int		main(int argc, char **argv);

class Zombie
{
  private:
	std::string name;

  public:
	Zombie() : name(""){};
	Zombie(std::string &name);
	~Zombie();
	void announce();
	void setName(std::string name);
};

Zombie	*zombieHorde(int N, std::string name);