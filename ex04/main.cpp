#include <fstream>
#include <iostream>
#include <sstream>
#include <string>

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Wrong Number of Arguments." << std::endl;
	}
	std::string fileName = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];

	std::ifstream src(fileName, std::ios::binary);
	if (!src)
	{
		std::cerr << "Error opening source file!" << std::endl;
		return (1);
	}

    std::ofstream dest("destination.txt", std::ios::binary | std::ios::trunc);

    char buffer[1024];

    while(src.read(buffer, sizeof(buffer)))
    {
        dest.write(buffer, src.gcount());
    }

    if(src.gcount() > 0)
    {
        dest.write(buffer, src.gcount());
    }


    src.close();
    dest.close();

	return (0);
}