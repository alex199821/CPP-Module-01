#include <iostream>

// void	leaks(void)
// {
// 	system("leaks hiBrain");
// }

int	main(int argc, char **argv)
{
	// atexit(leaks);
	(void)argc;
	(void)argv;
	std::string string = "HI THIS IS BRAIN";
	std::string *stringPTR = &string;
	std::string stringREF = *stringPTR;

	std::cout << "The memory address of the string variable: " << &string  << std::endl;
	std::cout << "The memory address held by stringPTR: " << stringPTR  << std::endl;
	std::cout << "The memory address held by stringREF: " << &stringREF  << std::endl;
	std::cout << std::endl;
	std::cout << "The value of the string variable: " << string  << std::endl;
	std::cout << "The value pointed to by stringPTR: " << *stringPTR  << std::endl;
	std::cout << "The value pointed to by stringREF: " << stringREF  << std::endl;

	return (0);
}