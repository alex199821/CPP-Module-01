#include <cctype>
#include <iomanip>
#include <ios>
#include <iostream>
#include <sstream>
#include <string>

int	main(void);

class Harl
{
  private:
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);

  public:
	Harl();
	~Harl();
	void complain(std::string level);
};
