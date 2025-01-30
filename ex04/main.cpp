#include <fstream>
#include <iostream>
#include <sstream>
#include <string>

int	main(int argc, char **argv)
{
	std::string single_line = "";
	std::string saved_buffer = "";
	std::string test_str = "";
	size_t newline_pos;
	if (argc != 4)
	{
		std::cout << "Wrong Number of Arguments." << std::endl;
	}
	std::string fileName = argv[1];
	std::string str_to_find = argv[2];
	std::string str_to_replace = argv[3];

	std::ifstream src(fileName, std::ios::binary);
	if (!src)
	{
		std::cerr << "Error opening source file!" << std::endl;
		return (1);
	}

    std::ofstream dest("destination.txt", std::ios::binary | std::ios::trunc);

    char buffer[5];

    while(src.read(buffer, sizeof(buffer)))
    {
		single_line.append(buffer, src.gcount());
		if(single_line.find("\n") != std::string::npos)
		{
			newline_pos = single_line.find('\n');
			
			test_str.append(saved_buffer);
			saved_buffer.clear();
			test_str = single_line.substr(0,newline_pos);
			
			saved_buffer = single_line.substr(newline_pos + 1);
			// std::cout << saved_buffer << std::endl;
			std::cout << test_str << std::endl;
			single_line.clear();
		}
		// single_line.clear();
        // dest.write(buffer, src.gcount());
    }
	
	if (src.gcount() > 0)
    {
        single_line.append(buffer, src.gcount());
    }

    // if(src.gcount() > 0)
    // {
    //     dest.write(buffer, src.gcount());
    // }


    src.close();
    dest.close();
	// std::cout << single_line << std::endl;

	return (0);
}